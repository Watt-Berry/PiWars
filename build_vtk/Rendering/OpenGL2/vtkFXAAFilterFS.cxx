// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
#include "vtkFXAAFilterFS.h"

const char *vtkFXAAFilterFS =
"//VTK::System::Dec\n"
"\n"
"// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"// SPDX-License-Identifier: BSD-3-Clause\n"
"// Fragment shader for vtkOpenGLFXAAFilter.\n"
"//\n"
"// Based on the following implementation and description:\n"
"//\n"
"// Whitepaper:\n"
"// http://developer.download.nvidia.com/assets/gamedev/files/sdk/11/FXAA_WhitePaper.pdf\n"
"//\n"
"// Sample implementation:\n"
"// https://github.com/NVIDIAGameWorks/GraphicsSamples/blob/master/samples/es3-kepler/FXAA/FXAA3_11.h\n"
"\n"
"//VTK::Output::Dec\n"
"\n"
"//======================== Debugging Options: ==================================\n"
"\n"
"// Output a greyscale image showing the detected amount of subpixel aliasing.\n"
"//#define FXAA_DEBUG_SUBPIXEL_ALIASING\n"
"\n"
"// Output vertical edges in red, and horizontal edges in blue.\n"
"//#define FXAA_DEBUG_EDGE_DIRECTION\n"
"\n"
"// Output (number of steps taken) / (EndpointSearchIterations). Negative steps\n"
"// in the red channel, positive steps in the blue.\n"
"//#define FXAA_DEBUG_EDGE_NUM_STEPS\n"
"\n"
"// Output degrees of red if the edge is near the negative edge endpoint, or\n"
"// shades of blue if near the positive edge endpoint. Pixels near an edge but\n"
"// not eligible for edgeAA (e.g. they are on the unaliased side of an edge)\n"
"// are shown in yellow.\n"
"//#define FXAA_DEBUG_EDGE_DISTANCE\n"
"\n"
"// Output the length of the edge anti-aliasing offset vector in the red channel.\n"
"//#define FXAA_DEBUG_EDGE_SAMPLE_OFFSET\n"
"\n"
"// Only apply a single form of anti-aliasing:\n"
"// 1 - Only apply sub-pixel anti-aliasing.\n"
"// 2 - Only apply edge anti-aliasing.\n"
"// Other / undefined - Apply both sub-pixel and edge anti-aliasing.\n"
"//#define FXAA_DEBUG_ONLY_SUBPIX_AA\n"
"//#define FXAA_DEBUG_ONLY_EDGE_AA\n"
"\n"
"// Replacement stub for vtkShaderProgram::Substitute:\n"
"//VTK::DebugOptions::Def\n"
"\n"
"//========================== Tuning Define: ====================================\n"
"\n"
"// Which edge search implementation to use. If defined, use VTK's endpoint\n"
"// algorithm, otherwise use NVIDIA's.\n"
"//\n"
"// NVIDIA is faster, but gives poor results on single pixel lines (e.g.\n"
"// vtkPolyDataMapper's wireframe/edges). VTK is slower, but gives nicer results\n"
"// on single pixel lines.\n"
"//#define FXAA_USE_HIGH_QUALITY_ENDPOINTS;\n"
"\n"
"// Replacement stub for vtkShaderProgram::Substitute:\n"
"//VTK::EndpointAlgo::Def\n"
"\n"
"//========================= Input Parameters: ==================================\n"
"\n"
"// Current fragment texture coordinate:\n"
"in vec2 texCoord;\n"
"\n"
"// Aliased color buffer (should be sRGB, ideally)\n"
"uniform sampler2D Input;\n"
"\n"
"// 1.f/Input.width, 1.f/Input.height:\n"
"uniform vec2 InvTexSize;\n"
"\n"
"//======================== Tuning Parameters: ==================================\n"
"\n"
"// See the vtkOpenGLFXAAFilter class documentation for details on these.\n"
"\n"
"// Minimum change in luminosity (relative to maxLum) to use FXAA:\n"
"uniform float RelativeContrastThreshold;\n"
"\n"
"// Absolute minimum lum change required for FXAA (overrides\n"
"// RelativeContrastThreshold value, not scaled):\n"
"uniform float HardContrastThreshold;\n"
"\n"
"// Maximum amount of lowpass blending for subpixel anti-aliasing:\n"
"uniform float SubpixelBlendLimit;\n"
"\n"
"// Ignore subpixel anti-aliasing that contributes less than this amount to the\n"
"// total contrast:\n"
"uniform float SubpixelContrastThreshold;\n"
"\n"
"// Maximum number of steps to take when searching for line edges:\n"
"uniform int EndpointSearchIterations;\n"
"\n"
"//============================ Helper Methods ==================================\n"
"// Converts rgb to luminosity:\n"
"const vec3 LUMINOSITY_VEC = vec3(0.299, 0.587, 0.114);\n"
"float luminosity(vec3 rgb)\n"
"{\n"
"  return dot(rgb, LUMINOSITY_VEC);\n"
"}\n"
"\n"
"//======================= Endpoint Search Routines =============================\n"
"// Identify the endpoints of a detected edge and compute a sampling offset to\n"
"// correct for aliasing. The computed offset accounts for distance from edge\n"
"// to create a gradient of antialiased values.\n"
"//\n"
"// Input parameters:\n"
"// - posC: The texture coordinate position of the current pixel.\n"
"// - lumC: The luminosity of the current pixel.\n"
"// - lumHC: The luminosity of the highest contrast pixel to HC that is\n"
"//          perpendicular to the detected edge.\n"
"// - lengthSign: Single component magnitude and direction (in texture\n"
"//               coordinates) from the center of C pointing to HC.\n"
"// - tcPixel: (Width, Height) of a single pixel in texture coordinate units.\n"
"// - horzSpan: True if the detected edge is horizontal.\n"
"// - posEdgeAA: Output parameter with the position to resample the input texture\n"
"//              to get an edge anti-aliased rgb value for the current pixel.\n"
"//\n"
"// Implementations:\n"
"// - nvidiaEndpointSearch: The algorithm proposed by nVidia in their whitepaper\n"
"//   and sample implementations. Faster, but poorly handles single-pixel lines.\n"
"// - vtkEndpointSearch: Modified endpoint search that does more texture lookups,\n"
"//   but does better detection of single pixel line endpoints.\n"
"//\n"
"// Return values for endpoint searches:\n"
"const int FXAA_NO_EDGE_AA = 0;    // Edge AA not required.\n"
"const int FXAA_NEED_EDGE_AA = 1;  // Edge AA required.\n"
"const int FXAA_ABORT_EDGE_AA = 2; // Instruct to return. Used for debugging.\n"
"\n"
"//================ nVidia's Endpoint Search Implementation =====================\n"
"\n"
"int nvidiaEndpointSearch(vec2 posC, float lumC, float lumHC, float lengthSign,\n"
"                         vec2 tcPixel, bool horzSpan, out vec2 posEdgeAA)\n"
"{\n"
"  /*****************************************************************************\n"
"   * End of Edge Search                                                        *\n"
"   *===========================================================================*\n"
"   * Search along the direction of the detected edge to find both endpoints.   *\n"
"   *                                                                           *\n"
"   * We define HC as the Highest Contrast neighbor perpendicular to the edge   *\n"
"   * direction (i.e. the pixel on the other side of the edge).                 *\n"
"   *                                                                           *\n"
"   * The luminosity of HC is lumHC, the contrast between C and HC is           *\n"
"   * contrastCHC, and the average luminosity of HC and C is lumAveCHC.         *\n"
"   *                                                                           *\n"
"   * We'll walk along the edge boundary in both direction, sampling the average*\n"
"   * luminosity of the pixels on both sides of the edge: lumAveN for the       *\n"
"   * negative direction, lumAveP for the positive direction. We determine the  *\n"
"   * end of the edge to be where:                                              *\n"
"   *                                                                           *\n"
"   * abs(lumAve[NP] - lumCHC) >= contrastHC / 4.                               *\n"
"   *                                                                           *\n"
"   * which indicates that the average luminosities have diverged enough to no  *\n"
"   * longer be considered part of the edge.                                    *\n"
"   ****************************************************************************/\n"
"\n"
"  float contrastCHC = abs(lumC - lumHC);\n"
"\n"
"  // Point on the boundary of C and HC:\n"
"  vec2 boundaryCHC = posC; // Will be shifted later.\n"
"\n"
"  // Direction of the edge\n"
"  vec2 edgeDir = vec2(0.f); // Component is set below:\n"
"\n"
"  if (horzSpan)\n"
"    {\n"
"    boundaryCHC.y += lengthSign * 0.5f;\n"
"    edgeDir.x = tcPixel.x;\n"
"    }\n"
"  else\n"
"    {\n"
"    boundaryCHC.x += lengthSign * 0.5f;\n"
"    edgeDir.y = tcPixel.y;\n"
"    }\n"
"\n"
"  // Prepare for the search loop:\n"
"  float contrastThreshold = contrastCHC / 4.f;\n"
"  float lumAveCHC = 0.5f * (lumC + lumHC);\n"
"  float lumAveN;\n"
"  float lumAveP;\n"
"  bool doneN = false;\n"
"  bool doneP = false;\n"
"  vec2 posN = boundaryCHC - edgeDir;\n"
"  vec2 posP = boundaryCHC + edgeDir;\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_NUM_STEPS\n"
"  int stepsN = 0;\n"
"  int stepsP = 0;\n"
"#endif // FXAA_DEBUG_EDGE_NUM_STEPS\n"
"\n"
"  for (int i = 0; i < EndpointSearchIterations; ++i)\n"
"    {\n"
"#ifdef FXAA_DEBUG_EDGE_NUM_STEPS\n"
"    if (!doneN) stepsN += 1;\n"
"    if (!doneP) stepsP += 1;\n"
"#endif // FXAA_DEBUG_EDGE_NUM_STEPS\n"
"\n"
"    // Sample on the edge boundary in both directions:\n"
"    if (!doneN) lumAveN = luminosity(texture2D(Input, posN).rgb);\n"
"    if (!doneP) lumAveP = luminosity(texture2D(Input, posP).rgb);\n"
"\n"
"    // Edge endpoint is where the contrast changes significantly:\n"
"    doneN = doneN || (abs(lumAveN - lumAveCHC) >= contrastThreshold);\n"
"    doneP = doneP || (abs(lumAveP - lumAveCHC) >= contrastThreshold);\n"
"    if (doneN && doneP) break;\n"
"\n"
"    // Step to next pixel:\n"
"    if (!doneN) posN -= edgeDir;\n"
"    if (!doneP) posP += edgeDir;\n"
"    }\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_NUM_STEPS\n"
"  gl_FragData[0] = vec4(float(stepsN) / float(EndpointSearchIterations), 0.f,\n"
"                        float(stepsP) / float(EndpointSearchIterations), 1.f);\n"
"  return FXAA_ABORT_EDGE_AA;\n"
"#endif // FXAA_DEBUG_EDGE_NUM_STEPS\n"
"\n"
"  /*****************************************************************************\n"
"   * Edge Search Analysis                                                      *\n"
"   *===========================================================================*\n"
"   * We've located the ends of the edge at this point. Next we figure out how *\n"
"   * to interpolate the edge.                                                 *\n"
"   *                                                                          *\n"
"   * First we need to find out which end of the edge (N or P) is changing     *\n"
"   * contrast relative to boundaryCHC. This is best explained visually:       *\n"
"   *                                                                          *\n"
"   * +------------+                                                           *\n"
"   * |XX   E      |                                                           *\n"
"   * |NXXXHXXP    |                                                           *\n"
"   * |N   C  PXXXX|                                                           *\n"
"   * |           X|                                                           *\n"
"   * +------------+                                                           *\n"
"   *                                                                          *\n"
"   * In the above, an X represents a dark pixel, and a blank space is a light *\n"
"   * pixel. C is the current pixel, and H is pixel HC. The negative endpoint N*\n"
"   * of the edge is the midpoint between the first set of blank pixels to the *\n"
"   * left of C and H, while the positive endpoint P is the first set of dark  *\n"
"   * pixels to the right. The pixels under the \"N\" are light, while the pixels*\n"
"   * under \"P\" are dark. The \"P\" side of the edge is changing contrast        *\n"
"   * relative to C. We compute this condition as:                             *\n"
"   *                                                                          *\n"
"   * bool lumCLessThanAve = lumC < lumAveCHC;                                 *\n"
"   * bool lumNLessThanAve = lumAveN < lumAveCHC;                              *\n"
"   * bool lumPLessThanAve = lumAveP < lumAveCHC;                              *\n"
"   * bool shadeIfNearN = lumCLessThanAve != lumNLessThanAve;                  *\n"
"   * bool shadeIfNearP = lumCLessThanAve != lumPLessThanAve;                  *\n"
"   *                                                                          *\n"
"   * If shadeIfNearN is true, N is changing contrast relative to C. The same  *\n"
"   * is true for P. Thus, the change in the average contrast of the           *\n"
"   * endpoint relative to lumAveHC must be opposite to the change in contrast *\n"
"   * from C to lumAveHC.                                                      *\n"
"   *                                                                          *\n"
"   * In addition to checking the change in contrast, we also identify which   *\n"
"   * endpoint is nearest to C. As the variable names suggest, we will only    *\n"
"   * apply edge anti-aliasing if we're nearest an endpoint that has the       *\n"
"   * desired contrast change. This prevents shading edge neighbors that do not*\n"
"   * follow the direction of the line, such as point E in the diagram.        *\n"
"   *                                                                          *\n"
"   * bool CisNearN = (norm(posN - boundaryCHC) < norm(posP - boundaryCHC));   *\n"
"   *                                                                          *\n"
"   * If both of the above conditions are met (the nearest endpoint has the    *\n"
"   * proper contrast change), then we compute the ratio of C's distance from  *\n"
"   * the desired endpoint to the total length of the edge. This ratio is the  *\n"
"   * fraction of a pixel that we shift C towards HC to resample C for         *\n"
"   * anti-aliasing.                                                           *\n"
"   ****************************************************************************/\n"
"\n"
"  // Check both endpoints for the contrast change condition:\n"
"  bool lumCLessThanAve = lumC < lumAveCHC;\n"
"  bool lumNLessThanAve = lumAveN < lumAveCHC;\n"
"  bool lumPLessThanAve = lumAveP < lumAveCHC;\n"
"  bool shadeIfNearN = lumCLessThanAve != lumNLessThanAve;\n"
"  bool shadeIfNearP = lumCLessThanAve != lumPLessThanAve;\n"
"\n"
"  // Identify the closest point:\n"
"  float dstN;\n"
"  float dstP;\n"
"  if (horzSpan)\n"
"    {\n"
"    dstN = boundaryCHC.x - posN.x;\n"
"    dstP = posP.x - boundaryCHC.x;\n"
"    }\n"
"  else\n"
"    {\n"
"    dstN = boundaryCHC.y - posN.y;\n"
"    dstP = posP.y - boundaryCHC.y;\n"
"    }\n"
"  bool nearestEndpointIsN = dstN < dstP;\n"
"  float dst = min(dstN, dstP);\n"
"\n"
"  // Finally determine if we need shading:\n"
"  bool needEdgeAA = nearestEndpointIsN ? shadeIfNearN : shadeIfNearP;\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_DISTANCE\n"
"  if (needEdgeAA)\n"
"    {\n"
"    float maxDistance = EndpointSearchIterations;\n"
"    if (nearestEndpointIsN)\n"
"      {\n"
"      gl_FragData[0] = vec4(1.f - dstN / maxDistance, 0.f, 0.f, 1.f);\n"
"      }\n"
"    else\n"
"      {\n"
"      gl_FragData[0] = vec4(0.f, 0.f, 1.f - dstP / maxDistance, 1.f);\n"
"      }\n"
"    }\n"
"  else\n"
"    {\n"
"    gl_FragData[0] = vec4(1.f, 1.f, 0.f, 1.f);\n"
"    }\n"
"  return FXAA_ABORT_EDGE_AA;\n"
"#endif // FXAA_DEBUG_EDGE_DISTANCE\n"
"\n"
"  // Compute the pixel offset:\n"
"  float invNegSpanLength = -1.f / (dstN + dstP);\n"
"  float pixelOffset = dst * invNegSpanLength + 0.5;\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_SAMPLE_OFFSET\n"
"  if (needEdgeAA)\n"
"    { // x2, since the max value is 0.5:\n"
"    gl_FragData[0] = vec4(-2.f * dst * invNegSpanLength, 0.f, 0.f, 1.f);\n"
"    return FXAA_ABORT_EDGE_AA;\n"
"    }\n"
"#endif // FXAA_DEBUG_EDGE_SAMPLE_OFFSET\n"
"\n"
"  // Resample the edge anti-aliased value:\n"
"  posEdgeAA = posC;\n"
"  if (horzSpan)\n"
"    {\n"
"    posEdgeAA.y += pixelOffset * lengthSign;\n"
"    }\n"
"  else\n"
"    {\n"
"    posEdgeAA.x += pixelOffset * lengthSign;\n"
"    }\n"
"\n"
"  return needEdgeAA ? 1 : 0;\n"
"}\n"
"\n"
"//================== VTK's Endpoint Search Implementation ======================\n"
"\n"
"int vtkEndpointSearch(vec2 posC, float lumC, float lumHC, float lengthSign,\n"
"                      vec2 tcPixel, bool horzSpan, out vec2 posEdgeAA)\n"
"{\n"
"  /*****************************************************************************\n"
"   * End of Edge Search                                                        *\n"
"   *===========================================================================*\n"
"   * Search along the direction of the detected edge to find both endpoints.   *\n"
"   * +------------+                                                            *\n"
"   * |X           | nVidia's endpoint detector handles this case poorly. If C  *\n"
"   * | XXXXXX  C  | is the current pixel, it will detect N as the leftmost     *\n"
"   * |       XXHXX| column of pixels, since it samples the average luminosity  *\n"
"   * |           X| at the border of the rows containing C and HC. The actual  *\n"
"   * +------------+ endpoint is 3 pixels to the left from C, but the average   *\n"
"   * luminosity does not change at this point.                                 *\n"
"   *                                                                           *\n"
"   * We adapt the algorithm to sample both rows/columns containing C and HC on *\n"
"   * the texel centers, rather than the interpolated border. We then detect    *\n"
"   * the edge endpoints when:                                                  *\n"
"   *                                                                           *\n"
"   * abs(lumHCN - lumHC) > abs(lumHCN - lumC) ||                               *\n"
"   * abs(lumCN -  lumC)  > abs(lumCN  - lumHC)                                 *\n"
"   *                                                                           *\n"
"   * where lumHCN is the luminosity of the sample in HC's row in the negative  *\n"
"   * direction, lumCN is the luminosity of the sample in C's row in the        *\n"
"   * negative direction, lumHC is the luminosity of HC, and lumC is the        *\n"
"   * luminosity of C. Thus, the endpoint is where a sampled luminosity in C's  *\n"
"   * row is closer to HC, or vice-versa. The positive endpoint is determined   *\n"
"   * similarly.                                                                *\n"
"   *                                                                           *\n"
"   * After the endpoints has been determined, we decide whether or not the     *\n"
"   * current pixel needs resampling. This is similar to nVidia's algorithm.    *\n"
"   * We determine if the luminosity of the nearest endpoint's C sample is      *\n"
"   * closer to C or HC. If it's closer to HC, it gets shaded. The resampling   *\n"
"   * offset is computed identically to nVidia's algorithm.                     *\n"
"   ****************************************************************************/\n"
"\n"
"  // Point on the boundary of C and HC:\n"
"  vec2 posHC = posC; // Will be shifted later.\n"
"\n"
"  // Direction of the edge\n"
"  vec2 edgeDir = vec2(0.f); // Component is set below:\n"
"\n"
"  if (horzSpan)\n"
"    {\n"
"    posHC.y += lengthSign;\n"
"    edgeDir.x = tcPixel.x;\n"
"    }\n"
"  else\n"
"    {\n"
"    posHC.x += lengthSign;\n"
"    edgeDir.y = tcPixel.y;\n"
"    }\n"
"\n"
"  // Prepare for the search loop:\n"
"  float lumHCN;\n"
"  float lumHCP;\n"
"  float lumCN;\n"
"  float lumCP;\n"
"  bool doneN = false;\n"
"  bool doneP = false;\n"
"  vec2 posHCN = posHC - edgeDir;\n"
"  vec2 posHCP = posHC + edgeDir;\n"
"  vec2 posCN  = posC - edgeDir;\n"
"  vec2 posCP  = posC + edgeDir;\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_NUM_STEPS\n"
"  int stepsN = 0;\n"
"  int stepsP = 0;\n"
"#endif // FXAA_DEBUG_EDGE_NUM_STEPS\n"
"\n"
"  for (int i = 0; i < EndpointSearchIterations; ++i)\n"
"    {\n"
"#ifdef FXAA_DEBUG_EDGE_NUM_STEPS\n"
"    if (!doneN) stepsN += 1;\n"
"    if (!doneP) stepsP += 1;\n"
"#endif // FXAA_DEBUG_EDGE_NUM_STEPS\n"
"\n"
"    // Sample the luminosities along the edge:\n"
"    if (!doneN)\n"
"      {\n"
"      lumHCN = luminosity(texture2D(Input, posHCN).rgb);\n"
"      lumCN  = luminosity(texture2D(Input, posCN).rgb);\n"
"      }\n"
"    if (!doneP)\n"
"      {\n"
"      lumHCP = luminosity(texture2D(Input, posHCP).rgb);\n"
"      lumCP  = luminosity(texture2D(Input, posCP).rgb);\n"
"      }\n"
"\n"
"    // Check contrast to detect endpoint:\n"
"    doneN = doneN || abs(lumHCN - lumHC) > abs(lumHCN - lumC)\n"
"                  || abs(lumCN  - lumC)  > abs(lumCN  - lumHC);\n"
"    doneP = doneP || abs(lumHCP - lumHC) > abs(lumHCP - lumC)\n"
"                  || abs(lumCP  - lumC)  > abs(lumCP  - lumHC);\n"
"\n"
"    if (doneN && doneP)\n"
"      {\n"
"      break;\n"
"      }\n"
"\n"
"    // Take next step.\n"
"    if (!doneN)\n"
"      {\n"
"      posHCN -= edgeDir;\n"
"      posCN  -= edgeDir;\n"
"      }\n"
"    if (!doneP)\n"
"      {\n"
"      posHCP += edgeDir;\n"
"      posCP  += edgeDir;\n"
"      }\n"
"    }\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_NUM_STEPS\n"
"  gl_FragData[0] = vec4(float(stepsN) / float(EndpointSearchIterations), 0.f,\n"
"                        float(stepsP) / float(EndpointSearchIterations), 1.f);\n"
"  return FXAA_ABORT_EDGE_AA;\n"
"#endif // FXAA_DEBUG_EDGE_NUM_STEPS\n"
"\n"
"  // Identify the closest point:\n"
"  float dstN;\n"
"  float dstP;\n"
"\n"
"  if (horzSpan)\n"
"    {\n"
"    dstN = posC.x - posCN.x;\n"
"    dstP = posCP.x - posC.x;\n"
"    }\n"
"  else\n"
"    {\n"
"    dstN = posC.y - posCN.y;\n"
"    dstP = posCP.y - posC.y;\n"
"    }\n"
"\n"
"  bool nearestEndpointIsN = dstN < dstP;\n"
"  float dst = min(dstN, dstP);\n"
"  float lumCNear = nearestEndpointIsN ? lumCN : lumCP;\n"
"\n"
"  // Resample if the nearest endpoint sample in C's row is closer in luminosity\n"
"  // to HC than C.\n"
"  bool needEdgeAA = abs(lumCNear - lumHC) < abs(lumCNear - lumC);\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_DISTANCE\n"
"  if (needEdgeAA)\n"
"    {\n"
"    float maxDistance = EndpointSearchIterations;\n"
"    if (nearestEndpointIsN)\n"
"      {\n"
"      gl_FragData[0] = vec4(1.f - dstN / maxDistance, 0.f, 0.f, 1.f);\n"
"      }\n"
"    else\n"
"      {\n"
"      gl_FragData[0] = vec4(0.f, 0.f, 1.f - dstP / maxDistance, 1.f);\n"
"      }\n"
"    }\n"
"  else\n"
"    {\n"
"    gl_FragData[0] = vec4(1.f, 1.f, 0.f, 1.f);\n"
"    }\n"
"  return FXAA_ABORT_EDGE_AA;\n"
"#endif // FXAA_DEBUG_EDGE_DISTANCE\n"
"\n"
"  // Compute the pixel offset:\n"
"  float invNegSpanLength = -1.f / (dstN + dstP);\n"
"  float pixelOffset = dst * invNegSpanLength + 0.5f;\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_SAMPLE_OFFSET\n"
"  if (needEdgeAA)\n"
"    { // x2, since the max value is 0.5:\n"
"    gl_FragData[0] = vec4(-2.f * dst * invNegSpanLength, 0.f, 0.f, 1.f);\n"
"    return FXAA_ABORT_EDGE_AA;\n"
"    }\n"
"#endif // FXAA_DEBUG_EDGE_SAMPLE_OFFSET\n"
"\n"
"  // Resample the edge anti-aliased value:\n"
"  posEdgeAA = posC;\n"
"  if (horzSpan)\n"
"    {\n"
"    posEdgeAA.y += pixelOffset * lengthSign;\n"
"    }\n"
"  else\n"
"    {\n"
"    posEdgeAA.x += pixelOffset * lengthSign;\n"
"    }\n"
"\n"
"  return needEdgeAA ? 1 : 0;\n"
"}\n"
"\n"
"//=============================== FXAA Body ====================================\n"
"\n"
"void main()\n"
"{\n"
"  // Pixel step size in texture coordinate units:\n"
"  vec2 tcPixel = InvTexSize;\n"
"\n"
"  /****************************************************************************\n"
"   * Compute Local Contrast Range And Early Abort                             *\n"
"   *==========================================================================*\n"
"   * Determine the contrast range for the current pixel and its neighbors     *\n"
"   * to the North, South, West, and East. If the range is less than both of:  *\n"
"   *                                                                          *\n"
"   * a) RelativeContrastThreshold * lumMax                                    *\n"
"   *                                                                          *\n"
"   * and                                                                      *\n"
"   *                                                                          *\n"
"   * b) HardContrastThreshold                                                 *\n"
"   *                                                                          *\n"
"   * then skip anti-aliasing for this pixel.                                  *\n"
"   ****************************************************************************/\n"
"\n"
"  // First compute the texture coordinates:\n"
"  vec2 tcC = texCoord;\n"
"  vec2 tcN = texCoord + vec2( 0.f,       -tcPixel.y);\n"
"  vec2 tcS = texCoord + vec2( 0.f,        tcPixel.y);\n"
"  vec2 tcW = texCoord + vec2(-tcPixel.x,  0.f);\n"
"  vec2 tcE = texCoord + vec2( tcPixel.x,  0.f);\n"
"\n"
"  // Extract the rgb values of these pixels:\n"
"  vec4 centerSample = texture2D(Input, tcC);\n"
"  vec3 rgbC = centerSample.rgb;\n"
"  vec3 rgbN = texture2D(Input, tcN).rgb;\n"
"  vec3 rgbS = texture2D(Input, tcS).rgb;\n"
"  vec3 rgbW = texture2D(Input, tcW).rgb;\n"
"  vec3 rgbE = texture2D(Input, tcE).rgb;\n"
"\n"
"  // Convert to luminosity:\n"
"  float lumC = luminosity(rgbC);\n"
"  float lumN = luminosity(rgbN);\n"
"  float lumS = luminosity(rgbS);\n"
"  float lumW = luminosity(rgbW);\n"
"  float lumE = luminosity(rgbE);\n"
"\n"
"  // The min, max, and range of luminosity for CNSWE:\n"
"  float lumMin = min(lumC, min(min(lumN, lumS), min(lumW, lumE)));\n"
"  float lumMax = max(lumC, max(max(lumN, lumS), max(lumW, lumE)));\n"
"  float lumRange = lumMax - lumMin;\n"
"  float lumThresh = max(HardContrastThreshold,\n"
"                        RelativeContrastThreshold * lumMax);\n"
"\n"
"  // Don't apply FXAA unless there's a significant change in luminosity around\n"
"  // the current pixel:\n"
"  if (lumRange < lumThresh)\n"
"    {\n"
"    gl_FragData[0] = vec4(rgbC, centerSample.a); // original color\n"
"    return;\n"
"    }\n"
"\n"
"  /****************************************************************************\n"
"   * Fetch texels for complete 3x3 neighborhood.                              *\n"
"   ****************************************************************************/\n"
"\n"
"  // Fetch additional texels for edge detection / subpixel antialiasing:\n"
"  vec2 tcNE = texCoord + vec2( tcPixel.x, -tcPixel.y);\n"
"  vec2 tcSE = texCoord + vec2( tcPixel.x,  tcPixel.y);\n"
"  vec2 tcNW = texCoord + vec2(-tcPixel.x, -tcPixel.y);\n"
"  vec2 tcSW = texCoord + vec2(-tcPixel.x,  tcPixel.y);\n"
"  vec3 rgbNE = texture2D(Input, tcNE).rgb;\n"
"  vec3 rgbSE = texture2D(Input, tcSE).rgb;\n"
"  vec3 rgbNW = texture2D(Input, tcNW).rgb;\n"
"  vec3 rgbSW = texture2D(Input, tcSW).rgb;\n"
"  float lumNE = luminosity(rgbNE);\n"
"  float lumSE = luminosity(rgbSE);\n"
"  float lumNW = luminosity(rgbNW);\n"
"  float lumSW = luminosity(rgbSW);\n"
"\n"
"  // Precompute some combined luminosities. These are reused later.\n"
"  float lumNS = lumN + lumS;\n"
"  float lumWE = lumW + lumE;\n"
"  float lumNSWE = lumNS + lumWE;\n"
"  float lumNWNE = lumNW + lumNE;\n"
"  float lumSWSE = lumSW + lumSE;\n"
"  float lumNWSW = lumNW + lumSW;\n"
"  float lumNESE = lumNE + lumSE;\n"
"\n"
"  /****************************************************************************\n"
"   * Subpixel Anti-aliasing                                                   *\n"
"   *==========================================================================*\n"
"   * Check if the current pixel is very high contrast to it's neighbors (e.g. *\n"
"   * specular aliasing, noisy shadow textures, etc). If it is, compute the    *\n"
"   * average color over the 3x3 neighborhood and a blending factor.           *\n"
"   *                                                                          *\n"
"   * The blending factor is computed as the minimum of:                       *\n"
"   *                                                                          *\n"
"   * 1) max(0.f, abs([average NSWE lum] - lumC) - SubpixelContrastThreshold)  *\n"
"   *                  FXAA_SUBPIX_TRIM_SCALE                                  *\n"
"   *                                                                          *\n"
"   * or                                                                       *\n"
"   *                                                                          *\n"
"   * 2) SubpixelBlendLimit                                                    *\n"
"   ****************************************************************************/\n"
"\n"
"  // Check for sub-pixel aliasing (e.g. current pixel has high contrast from\n"
"  // neighbors):\n"
"  float lumAveNSWE = 0.25f * (lumNSWE);\n"
"  float lumSubRange = abs(lumAveNSWE - lumC);\n"
"\n"
"  // Compute the subpixel blend amount:\n"
"  float blendSub = max(0.f, (lumSubRange / lumRange) -\n"
"                            SubpixelContrastThreshold);\n"
"  blendSub = min(SubpixelBlendLimit,\n"
"                 blendSub * (1.f / (1.f - SubpixelContrastThreshold)));\n"
"\n"
"#ifdef FXAA_DEBUG_SUBPIXEL_ALIASING\n"
"  if (blendSub > 0.f)\n"
"    {\n"
"    gl_FragData[0] = vec4(vec3(blendSub / SubpixelBlendLimit), 1.f);\n"
"    }\n"
"  else\n"
"    {\n"
"    gl_FragData[0] = vec4(rgbC, 1.f);\n"
"    }\n"
"  return;\n"
"#endif // FXAA_DEBUG_SUBPIXEL_ALIASING\n"
"\n"
"  // Compute the subpixel blend color. Average the 3x3 neighborhood:\n"
"  vec3 rgbSub = (1.f/9.f) *\n"
"      (rgbNW + rgbN + rgbNE +\n"
"       rgbW  + rgbC + rgbE  +\n"
"       rgbSW + rgbS + rgbSE);\n"
"\n"
"  /****************************************************************************\n"
"   * Edge Testing                                                             *\n"
"   *==========================================================================*\n"
"   * Apply vertical and horizontal edge detection techniques to determine the *\n"
"   * direction of any edges in the 3x3 neighborhood.                          *\n"
"   ****************************************************************************/\n"
"\n"
"  // Check for vertical edge. Pixel coeffecients are:\n"
"  //  1 -2  1\n"
"  //  2 -4  2\n"
"  //  1 -2  1\n"
"  // The absolute value of each row is taken, summed, and divided by 12.\n"
"  // Operations are decomposed here to take advantage of FMA ops.\n"
"  float edgeVertRow1 = abs(-2.f * lumN + lumNWNE);\n"
"  float edgeVertRow2 = abs(-2.f * lumC + lumWE);\n"
"  float edgeVertRow3 = abs(-2.f * lumS + lumSWSE);\n"
"  float edgeVert = ((2.f * edgeVertRow2 + edgeVertRow1) + edgeVertRow3) / 12.f;\n"
"\n"
"  // Check for horizontal edge. Pixel coeffecients are:\n"
"  //  1  2  1\n"
"  // -2 -4 -2\n"
"  //  1  2  1\n"
"  // The absolute value of each column is taken, summed, and divided by 12.\n"
"  // Operations are decomposed here to take advantage of FMA ops.\n"
"  float edgeHorzCol1 = abs(-2.f * lumW + lumNWSW);\n"
"  float edgeHorzCol2 = abs(-2.f * lumC + lumNS);\n"
"  float edgeHorzCol3 = abs(-2.f * lumE + lumNESE);\n"
"  float edgeHorz = ((2.f * edgeHorzCol2 + edgeHorzCol1) + edgeHorzCol3) / 12.f;\n"
"\n"
"  // Indicates that the edge span is horizontal:\n"
"  bool horzSpan = edgeHorz >= edgeVert;\n"
"\n"
"#ifdef FXAA_DEBUG_EDGE_DIRECTION\n"
"  gl_FragData[0] = horzSpan ? vec4(0.f, 0.f, 1.f, 1.f)\n"
"                            : vec4(1.f, 0.f, 0.f, 1.f);\n"
"  return;\n"
"#endif // FXAA_DEBUG_EDGE_DIRECTION\n"
"\n"
"  /****************************************************************************\n"
"   * Endpoint Search Preparation                                              *\n"
"   *==========================================================================*\n"
"   * Compute inputs for an endpoint detection algorithm. Mainly concerned     *\n"
"   * locating HC -- the Highest Contrast pixel (relative to C) that's on the  *\n"
"   * opposite side of the detected edge from C.                               *\n"
"   ****************************************************************************/\n"
"\n"
"  // The two neighbor pixels perpendicular to the edge:\n"
"  float lumHC1;\n"
"  float lumHC2;\n"
"\n"
"  // Single-pixel texture coordinate offset that points from C to HC.\n"
"  float lengthSign;\n"
"\n"
"  if (horzSpan)\n"
"    {\n"
"    lumHC1 = lumN;\n"
"    lumHC2 = lumS;\n"
"    lengthSign = -tcPixel.y; // Assume N for now.\n"
"    }\n"
"  else\n"
"    {\n"
"    lumHC1 = lumW;\n"
"    lumHC2 = lumE;\n"
"    lengthSign = -tcPixel.x; // Assume W for now.\n"
"    }\n"
"\n"
"  // Luminosity of the NSWE pixel perpendicular to the edge with the highest\n"
"  // contrast to C:\n"
"  float lumHC;\n"
"  if (abs(lumC - lumHC1) >= abs(lumC - lumHC2))\n"
"    {\n"
"    lumHC = lumHC1;\n"
"    }\n"
"  else\n"
"    {\n"
"    lumHC = lumHC2;\n"
"    // Also reverse the offset direction in this case:\n"
"    lengthSign = -lengthSign;\n"
"    }\n"
"\n"
"  vec2 posEdgeAA; // Position to resample C at to get edge-antialiasing.\n"
"\n"
"#ifdef FXAA_USE_HIGH_QUALITY_ENDPOINTS\n"
"  int endpointResult = vtkEndpointSearch(tcC, lumC, lumHC, lengthSign,\n"
"                                         tcPixel, horzSpan, posEdgeAA);\n"
"#else // FXAA_USE_HIGH_QUALITY_ENDPOINTS\n"
"  int endpointResult = nvidiaEndpointSearch(tcC, lumC, lumHC, lengthSign,\n"
"                                            tcPixel, horzSpan, posEdgeAA);\n"
"#endif // FXAA_USE_HIGH_QUALITY_ENDPOINTS\n"
"\n"
"  // Only sample texture if needed. Reuse rgbC otherwise.\n"
"  vec3 rgbEdgeAA = rgbC;\n"
"\n"
"  switch (endpointResult)\n"
"    {\n"
"    case FXAA_ABORT_EDGE_AA: // Used for debugging (endpoint search set colors)\n"
"      return;\n"
"\n"
"    case FXAA_NEED_EDGE_AA: // Resample the texture at the requested position.\n"
"      rgbEdgeAA = texture2D(Input, posEdgeAA).rgb;\n"
"      break;\n"
"\n"
"    case FXAA_NO_EDGE_AA: // Current pixel does not need edge anti-aliasing.\n"
"    default:\n"
"      break;\n"
"    }\n"
"\n"
"#ifdef FXAA_DEBUG_ONLY_SUBPIX_AA\n"
"  rgbEdgeAA = rgbC;\n"
"#endif // FXAA_DEBUG_ONLY_SUBPIX_AA\n"
"#ifdef FXAA_DEBUG_ONLY_EDGE_AA\n"
"  blendSub = 0.f;\n"
"#endif // FXAA_DEBUG_ONLY_EDGE_AA\n"
"\n"
"  // Blend the edgeAA and subpixelAA results together:\n"
"  gl_FragData[0] = vec4(mix(rgbEdgeAA, rgbSub, blendSub), centerSample.a);\n"
"}\n"
"";