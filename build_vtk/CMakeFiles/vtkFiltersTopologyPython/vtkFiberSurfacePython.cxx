// python wrapper for vtkFiberSurface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFiberSurface.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFiberSurface(PyObject *dict); }
extern "C" { PyObject *PyvtkFiberSurface_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFiberSurface_BaseVertexType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTopology.vtkFiberSurface.BaseVertexType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkFiberSurface_BaseVertexType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkFiberSurface_BaseVertexType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFiberSurface_ClipVertexType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTopology.vtkFiberSurface.ClipVertexType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkFiberSurface_ClipVertexType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkFiberSurface_ClipVertexType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkFiberSurface_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFiberSurface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiberSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiberSurface *op = static_cast<vtkFiberSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFiberSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiberSurface_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFiberSurface *tempr = vtkFiberSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiberSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiberSurface *op = static_cast<vtkFiberSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFiberSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFiberSurface::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiberSurface_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFiberSurface::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiberSurface_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiberSurface *op = static_cast<vtkFiberSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFiberSurface::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiberSurface_SetField1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiberSurface *op = static_cast<vtkFiberSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetField1(temp0);
    }
    else
    {
      op->vtkFiberSurface::SetField1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFiberSurface_SetField2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiberSurface *op = static_cast<vtkFiberSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetField2(temp0);
    }
    else
    {
      op->vtkFiberSurface::SetField2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFiberSurface_Methods[] = {
  {"IsTypeOf", PyvtkFiberSurface_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFiberSurface_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFiberSurface_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFiberSurface\nC++: static vtkFiberSurface *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFiberSurface_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFiberSurface\nC++: vtkFiberSurface *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFiberSurface_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFiberSurface_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetField1", PyvtkFiberSurface_SetField1, METH_VARARGS,
   "SetField1(self, fieldName:str) -> None\nC++: void SetField1(const char *fieldName)\n\nSpecify the first field name to be used in this filter.\n"},
  {"SetField2", PyvtkFiberSurface_SetField2, METH_VARARGS,
   "SetField2(self, fieldName:str) -> None\nC++: void SetField2(const char *fieldName)\n\nSpecify the second field name to be used in the filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFiberSurface_Doc =
  "vtkFiberSurface - Given a fiber surface control polygon (FSCP) and an\nunstructured grid composed of tetrahedral cells with two scalar\narrays, this filter computes the corresponding fiber surfaces.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "@section vtkFiberSurface-introduction Introduction Fiber surfaces are\n"
  "constructed from sets of fibers, the multivariate analogues of\n"
  "isolines. The original paper [0] offers a general purpose method that\n"
  "produces separating surfaces representing boundaries in bivariate\n"
  "fields. This filter is based on an improvement over [0] which\n"
  "computes accurate and exact fiber surfaces. It can handle arbitrary\n"
  "input polygons including open polygons or self-intersecting polygons.\n"
  "The current implementation can better captures sharp features induced\n"
  "by polygon bends [1].\n\n"
  "[0] Hamish Carr, Zhao Geng, Julien Tierny, Amit Chattopadhyay and\n"
  "Aaron Knoll,\n"
  "    Fiber Surfaces: Generalizing Isosurfaces to Bivariate Data,\n"
  "    Computer Graphics Forum, Volume 34, Issue 3, Pages 241-250,\n"
  "(EuroVis 2015)\n\n"
  "[1] Pavol Klacansky, Julien Tierny, Hamish Carr, Zhao Geng,\n"
  "    Fast and Exact Fiber Surfaces for Tetrahedral Meshes,\n"
  "    Paper in submission, 2015\n\n"
  "@section vtkFiberSurface-algorithm Algorithm For Extracting An Exact\n"
  "Fiber Surface\n"
  " Require: R.1 A 3D domain space represented by an unstructured grid\n"
  "composed of\n"
  "              tetrahedral cells\n"
  "          R.2 Two scalar fields, f1 and f2, that map the domain space\n"
  "to a 2D range\n"
  "              space. These fields are assumed to be known at vertices\n"
  "of the\n"
  "              unstructured grid: i.e they are two fields associated\n"
  "with the\n"
  "              unstructured grid.\n"
  "          R.3 A Fiber Surface Control Polygon (FSCP) defined in the\n"
  "range space as a\n"
  "              list of line segments (l1, l2, ..., ln). The FSCP may\n"
  "be an open polyline\n"
  "              or a self-intersecting polygon.\n\n"
  "1. For each line segment l in FSCP, we ignore the endpoints of the\n"
  "   line and assume this line extends to infinity. This line will then\n"
  "separate the range and its inverse image, i.e fiber surfaces, will\n"
  "   also separate the domain. Based on the signed distance d between\n"
  "   the image of a cell vertex v and line l in the range, v can be\n"
  "   classified as white (d < 0), grey (d == 0) or black (d>0). The\n"
  "   interpolation parameter between two vertices v1 and v2 in a cell\n"
  "   edge can be computed as |d1| / (|d2|+|d1|), where d1 and d2 are\n"
  "   the signed distances between images of v1,v2 and line l in the\n"
  "   range. Once the classification and interpolation parameters for\n"
  "   all vertices in a cell are known, then we can apply the Marching\n"
  "   Tetrahedra algorithm. For each tetrahedron, this produces a planar\n"
  "cut which we refer to as a base fiber surface.\n\n"
  "2. After generating the base fiber surface in each cell, we need a\n"
  "   further clipping process to obtain the accurate fiber surface.\n"
  "   Clipping is based on classifying the vertices of each triangle as\n"
  "   follows: Given a line segment in the fiber surface control polygon\n"
  "(FSCP) parameterised from 0 to 1, we know that every triangle vertex\n"
  "   in the base fiber surface belongs to the fiber surface, and that\n"
  "   the fiber through each vertex can be parameterised with respect to\n"
  "the line segment. Therefore, we compute the parameter t for each\n"
  "   vertex and use it to classify the vertex as: 0: t < 0       \n"
  "   Vertex is below the clipping range [0,1] and will be removed 1: 0\n"
  "   \342\211\244 t \342\211\244 1    Vertex is inside the clipping range [0,1] and is\n"
  "   retained 2: 1 < t        Vertex is above the clipping  range [0,1]\n"
  "and will be removed Based on the classification, we can further clip\n"
  "   the triangle to obtain the final surface.\n\n"
  "3. Repeating steps 1 and 2 for every line segment in FSCP and\n"
  "   iterating through each cell will generate the final fiber surfaces\n"
  "in the domain.\n\n"
  "@section VTK Filter Design As stated in part B (R.1), we will compute\n"
  "the fiber surface over an unstructured grid. This grid will have to\n"
  "be an input of the VTK filter. The two scalar fields, however, are\n"
  "assumed to be stored in the VTK unstructured grid, and will be\n"
  "specified using the SetField1() and SetField2() accessors. The FSCP\n"
  "will be passed into the filter as a second input port. The data type\n"
  "of FSCP is required to be a vtkPolyData, with each of its cell\n"
  "defined as a line segment and its point coordinates defined in the\n"
  "range of the bivariate fields of the input grid.\n\n"
  "@section Case Tables@subsection Marching tetrahedra with grey cases\n"
  "In this filter, we have added one vertex classification in Marching\n"
  "Tetrahedra. The reason is because we need a grey classification to\n"
  "ensure that surfaces coincident with the boundary of the tetrahedra\n"
  "will also be included in the output. Given an iso-value, each vertex\n"
  "on the tetrahedron can be classified into three types, including\n"
  "equal-(G)rey, below-(W)hite or above-(B)lack the isovalue. The\n"
  "notation of the classifications are represented as:\n"
  "    W or 0 --- below an iso-value\n"
  "    G or 1 --- equal an iso-value\n"
  "    B or 2 --- above an iso-value The following illustration\n"
  "summarises all of the surface cases (Asterisk * is used to highlight\n"
  "the outline of the triangle): Case A (no triangles): 0000\n"
  "   No triangle is generated.\n\n\n"
  "         W\n"
  "        ...\n"
  "       . . .\n"
  "      .  .  .\n"
  "     .  .W.  .\n"
  "    . .     . .\n"
  "   W...........W\n\n"
  "Case B (one grey vertex): 0001, 0010, 0100, 1000\n"
  "   Only a vertex is kept, no triangle is generated.\n"
  "         W\n"
  "        ...\n"
  "       . . .\n"
  "      .  .  .\n"
  "     .  .G.  .\n"
  "    . .     . .\n"
  "   W...........W\n\n"
  "Case C (one grey edge): 0011, 0101, 0110, 1001, 1010, 1100\n"
  "   Only an edge is kept, no triangle is generated.\n"
  "         G\n"
  "        ...\n"
  "       . . .\n"
  "      .  .  .\n"
  "     .  .G.  .\n"
  "    . .     . .\n"
  "   W...........W\n\n"
  "Case D (standard triangle case): 0002, 0020, 0200, 2000\n"
  "   One triangle is generated\n"
  "         W                           W\n"
  "        ...                         ...\n"
  "       . . .                       . * .\n"
  "      .  .  .                     . *.* .\n"
  "     .  .B.  .        ->         . * B * .\n"
  "    . .     . .                 . ** * ** .\n"
  "   W...........W               W...........W\n\n"
  "Case E (one grey face): 0111, 1011, 1101, 1110\n"
  "   The triangle on one face of the tetra is generated.\n"
  "         G                          G\n"
  "        ...                        .**\n"
  "       . . .                      . * *\n"
  "      .  .  .         ->         .  *  *\n"
  "     .  .G.  .                  .  .G*  *\n"
  "    . .     . .                . .     * *\n"
  "   W...........G              W...........G\n\n"
  "Case F (triangle through vertex):  0012 0021 0102 0120 0201 0210\n"
  "                                   1002 1020 1200 2001 2010 2100\n"
  "   A triangle connecting one of the tetra vertex is generated.\n"
  "         G                          G\n"
  "        ...                        .*.\n"
  "       . . .                      .*.*.\n"
  "      .  .  .         ->         . *.* .\n"
  "     .  .B.  .                  . *.B.* .\n"
  "    . .     . .                . * * * * .\n"
  "   W...........W              W...........W\n\n"
  "Case G (grey tet - treat as empty): 1111\n"
  "   No triangle is generated.\n"
  "         G\n"
  "        ...\n"
  "       . . .\n"
  "      .  .  .\n"
  "     .  .G.  .\n"
  "    . .     . .\n"
  "   G...........G\n\n"
  "Case H (triangle through edge): 0112 0121 0211 1012 1021 1102\n"
  "                                1120 1201 1210 2011 2101 2110\n"
  "   A triangle containing an edge of the tetra is generated.\n\n\n"
  "         G                                      G\n"
  "        ...                                    ..*\n"
  "       . . .                                  . . *\n"
  "      .  .  .                                . *.  *\n"
  "     .   .   .                              .   .   *\n"
  "    .    .    .           ->               . *  .    *\n"
  "   .   . W .   .                          .   . W .   *\n"
  "  .  .      .   .                        .  *      .   *\n"
  " . .          .  .                      . .      *   .  *\n"
  " B.............. G                      B...............G\n\n"
  "Case I (standard quad case): 0022 0202 0220 2002 2020 2200\n"
  "  A quand is generated, which can be split to two triangles.\n\n\n"
  "         W                                      W\n"
  "        ...                                    ...\n"
  "       . . .                                  . . .\n"
  "      .  .  .                                .  .  .\n"
  "     .   .   .                              *  *. * *\n"
  "    .    .    .           ->               .*   .   *.\n"
  "   .   . W .   .                          . * . W . * .\n"
  "  .  .      .   .                        .  * *  *  *   .\n"
  " . .          .  .                      . .            . .\n"
  " B.............. B                     B..................B\n\n"
  "Case J (complement of Case E): 1112 1121 1211 2111 Case K (complement\n"
  "of Case F): 0122 0212 0221 1022 1202\n"
  "                               1220 2012 2021 2102 2120 2201 2210\n"
  "Case L (complement of Case C): 1122 1212 1221 2112 2121 2211 Case M\n"
  "(complement of Case D): 0222 2022 2202 2220 Case N (complement of\n"
  "Case B): 1222 2122 2212 2221 Case O (complement of Case A): 2222\n\n"
  "@subsection Clipping cases of the base fiber surface After generating\n"
  "the base fiber surface in each cell, we need a further clipping\n"
  "process to obtain the accurate fiber surface. Clipping is based on\n"
  "classifying the vertices of each triangle to several cases, which\n"
  "will be described in this section. In order to keep things\n"
  "consistent, we assume that the vertices are ordered CCW, and that\n"
  "edges are numbered according to the opposing vertex:\n\n\n"
  "     v0\n"
  "    /  \\\n"
  "  e2    e1\n"
  "  /      \\ v1---e0---v2\n\n"
  "======================================================================\n"
  "= There are six cases for clipping the base fiber surface (subject to\n"
  "the usual symmetries & complementarity)\n"
  "----------------------------------------------------------------------\n"
  "    -- Case A (No triangles): Cases 000 & 222 Here, the entire\n"
  "    triangle is discarded\n\n"
  "000(A):  0\n"
  "        . .\n"
  "       .   .\n"
  "      .     .\n"
  "     .       .\n"
  "    .         .\n"
  "   0...........0\n\n"
  "----------------------------------------------------------------------\n"
  "    -- Case B (Point-triangle): Cases 001, 010, 100, 122, 212, 221\n"
  "    One vertex is kept, and a single triangle is extracted\n\n"
  "001(B):  1\n"
  "        / \\\n"
  "       /   \\\n"
  "      E-----E\n"
  "     .       .\n"
  "    .         .\n"
  "   0...........0\n\n"
  "----------------------------------------------------------------------\n"
  "    -- Case C (Edge Quad): Cases 011, 101, 110, 112, 121, 211 Two\n"
  "    vertices are kept, and a quad is extracted based on the edge\n\n"
  "011(C):  1\n"
  "        /|\\\n"
  "       / | \\\n"
  "      /  |  E\n"
  "     /   | / .\n"
  "    /    |/   .\n"
  "   1-----E.....0\n\n"
  "----------------------------------------------------------------------\n"
  "    -- Case D (Stripe): Cases 002, 020, 022, 200, 202, 220 No\n"
  "    vertices are kept, but a stripe across the middle is generated\n\n"
  "022(D):  2\n"
  "        . .\n"
  "       .   E\n"
  "      .   /|\\\n"
  "     .   / | E\n"
  "    .   /  |/ .\n"
  "   2...E---E...0\n\n"
  "----------------------------------------------------------------------\n"
  "    -- Case E (Point-Stripe): Cases 012, 021, 102, 120, 201, 210 One\n"
  "    vertex is kept, with a stripe through the triangle\n\n"
  "021(E):  1\n"
  "        / \\\n"
  "       E---E\n"
  "      .|\\  |.\n"
  "     . | \\ | .\n"
  "    .  |  \\|  .\n"
  "   2...E---E...0\n\n"
  "----------------------------------------------------------------------\n"
  "    -- Case F (Entire): Case 111 All three vertices are kept, along\n"
  "    with the triangle\n\n"
  "111(F):  1\n"
  "        / \\\n"
  "       /   \\\n"
  "      /     \\\n"
  "     /       \\\n"
  "    /         \\\n"
  "   1-----------1\n\n"
  "@section How to use this filter Suppose we have a tetrahedral mesh\n"
  "stored in a vtkUnstructuredGrid, we call this data set \"inputData\".\n"
  "This data set has two scalar arrays whose names are \"f1\" and \"f2\"\n"
  "respectively. Assume the \"inputPoly\" is a valid input polygon. Given\n"
  "these input above, this filter can be used as follows in c++ sample\n"
  "code:\n\n\n"
  "    vtkSmartPointerfiberSurface =\n"
  "                           vtkSmartPointer::New();\n"
  "    fiberSurface->SetInputData(0,inputData);\n"
  "    fiberSurface->SetInputData(1,inputPoly);\n"
  "    fiberSurface->SetField1(\"f1\");\n"
  "    fiberSurface->SetField2(\"f2\");\n"
  "    fiberSurface->Update();\n\n"
  "The filter output which can be called by \"fiberSurface->GetOutput()\",\n"
  "will be a vtkPolyData containing the output fiber surfaces.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFiberSurface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTopology.vtkFiberSurface", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkFiberSurface_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkFiberSurface_StaticNew()
{
  return vtkFiberSurface::New();
}

PyObject *PyvtkFiberSurface_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFiberSurface_Type, PyvtkFiberSurface_Methods,
    "vtkFiberSurface",
 &PyvtkFiberSurface_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkFiberSurface_BaseVertexType_Type);
  PyVTKEnum_Add(&PyvtkFiberSurface_BaseVertexType_Type, "vtkFiberSurface.BaseVertexType");

  o = (PyObject *)&PyvtkFiberSurface_BaseVertexType_Type;
  if (PyDict_SetItemString(d, "BaseVertexType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkFiberSurface_ClipVertexType_Type);
  PyVTKEnum_Add(&PyvtkFiberSurface_ClipVertexType_Type, "vtkFiberSurface.ClipVertexType");

  o = (PyObject *)&PyvtkFiberSurface_ClipVertexType_Type;
  if (PyDict_SetItemString(d, "ClipVertexType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 11; c++)
  {
    typedef vtkFiberSurface::BaseVertexType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[11] = {
        { "bv_not_used", vtkFiberSurface::bv_not_used },
        { "bv_vertex_0", vtkFiberSurface::bv_vertex_0 },
        { "bv_vertex_1", vtkFiberSurface::bv_vertex_1 },
        { "bv_vertex_2", vtkFiberSurface::bv_vertex_2 },
        { "bv_vertex_3", vtkFiberSurface::bv_vertex_3 },
        { "bv_edge_01", vtkFiberSurface::bv_edge_01 },
        { "bv_edge_02", vtkFiberSurface::bv_edge_02 },
        { "bv_edge_03", vtkFiberSurface::bv_edge_03 },
        { "bv_edge_12", vtkFiberSurface::bv_edge_12 },
        { "bv_edge_13", vtkFiberSurface::bv_edge_13 },
        { "bv_edge_23", vtkFiberSurface::bv_edge_23 },
      };

    o = PyvtkFiberSurface_BaseVertexType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 10; c++)
  {
    typedef vtkFiberSurface::ClipVertexType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[10] = {
        { "not_used", vtkFiberSurface::not_used },
        { "vertex_0", vtkFiberSurface::vertex_0 },
        { "vertex_1", vtkFiberSurface::vertex_1 },
        { "vertex_2", vtkFiberSurface::vertex_2 },
        { "edge_0_parm_0", vtkFiberSurface::edge_0_parm_0 },
        { "edge_1_parm_0", vtkFiberSurface::edge_1_parm_0 },
        { "edge_2_parm_0", vtkFiberSurface::edge_2_parm_0 },
        { "edge_0_parm_1", vtkFiberSurface::edge_0_parm_1 },
        { "edge_1_parm_1", vtkFiberSurface::edge_1_parm_1 },
        { "edge_2_parm_1", vtkFiberSurface::edge_2_parm_1 },
      };

    o = PyvtkFiberSurface_ClipVertexType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFiberSurface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFiberSurface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFiberSurface", o) != 0)
  {
    Py_DECREF(o);
  }

}

