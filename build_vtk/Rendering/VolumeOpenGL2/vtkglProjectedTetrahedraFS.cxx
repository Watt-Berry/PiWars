// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
// SPDX-License-Identifier: BSD-3-Clause
#include "vtkglProjectedTetrahedraFS.h"

const char *vtkglProjectedTetrahedraFS =
"//VTK::System::Dec\n"
"\n"
"// SPDX-FileCopyrightText: Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen\n"
"// SPDX-License-Identifier: BSD-3-Clause\n"
"\n"
"//VTK::Output::Dec\n"
"\n"
"in vec3 fcolor;\n"
"in float fdepth;\n"
"in float fattenuation;\n"
"\n"
"void main()\n"
"{\n"
"  // the following exp is done in the fragment shader\n"
"  // because linear interpolation (from the VS) of the resulting\n"
"  // value would not match the exp of the interpolated\n"
"  // source values\n"
"  float opacity = 1.0 - exp(-1.0*fattenuation*fdepth);\n"
"\n"
"\n"
"  gl_FragData[0] =  vec4(fcolor,opacity);\n"
"\n"
"  if (gl_FragData[0].a <= 0.0)\n"
"    {\n"
"    discard;\n"
"    }\n"
"}\n"
"";
