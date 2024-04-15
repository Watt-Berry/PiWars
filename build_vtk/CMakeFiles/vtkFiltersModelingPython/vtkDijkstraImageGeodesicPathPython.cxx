// python wrapper for vtkDijkstraImageGeodesicPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDijkstraImageGeodesicPath.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDijkstraImageGeodesicPath(PyObject *dict); }
extern "C" { PyObject *PyvtkDijkstraImageGeodesicPath_ClassNew(); }

#ifndef DECLARED_PyvtkDijkstraGraphGeodesicPath_ClassNew
extern "C" { PyObject *PyvtkDijkstraGraphGeodesicPath_ClassNew(); }
#define DECLARED_PyvtkDijkstraGraphGeodesicPath_ClassNew
#endif

static PyObject *
PyvtkDijkstraImageGeodesicPath_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDijkstraImageGeodesicPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDijkstraImageGeodesicPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDijkstraImageGeodesicPath *tempr = vtkDijkstraImageGeodesicPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDijkstraImageGeodesicPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDijkstraImageGeodesicPath::NewInstance());

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
PyvtkDijkstraImageGeodesicPath_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDijkstraImageGeodesicPath::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDijkstraImageGeodesicPath::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkDijkstraImageGeodesicPath::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetInputAsImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAsImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInputAsImageData() :
      op->vtkDijkstraImageGeodesicPath::GetInputAsImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SetImageWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageWeight(temp0);
    }
    else
    {
      op->vtkDijkstraImageGeodesicPath::SetImageWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetImageWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImageWeight() :
      op->vtkDijkstraImageGeodesicPath::GetImageWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SetEdgeLengthWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLengthWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLengthWeight(temp0);
    }
    else
    {
      op->vtkDijkstraImageGeodesicPath::SetEdgeLengthWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetEdgeLengthWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLengthWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeLengthWeight() :
      op->vtkDijkstraImageGeodesicPath::GetEdgeLengthWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_SetCurvatureWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureWeight(temp0);
    }
    else
    {
      op->vtkDijkstraImageGeodesicPath::SetCurvatureWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetCurvatureWeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureWeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurvatureWeightMinValue() :
      op->vtkDijkstraImageGeodesicPath::GetCurvatureWeightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetCurvatureWeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureWeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurvatureWeightMaxValue() :
      op->vtkDijkstraImageGeodesicPath::GetCurvatureWeightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageGeodesicPath_GetCurvatureWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageGeodesicPath *op = static_cast<vtkDijkstraImageGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurvatureWeight() :
      op->vtkDijkstraImageGeodesicPath::GetCurvatureWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDijkstraImageGeodesicPath_Methods[] = {
  {"IsTypeOf", PyvtkDijkstraImageGeodesicPath_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDijkstraImageGeodesicPath_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDijkstraImageGeodesicPath_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDijkstraImageGeodesicPath\nC++: static vtkDijkstraImageGeodesicPath *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDijkstraImageGeodesicPath_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDijkstraImageGeodesicPath\nC++: vtkDijkstraImageGeodesicPath *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDijkstraImageGeodesicPath_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDijkstraImageGeodesicPath_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputData", PyvtkDijkstraImageGeodesicPath_SetInputData, METH_VARARGS,
   "SetInputData(self, __a:vtkDataObject) -> None\nC++: void SetInputData(vtkDataObject *)\n\nSpecify the image object which is used as a cost function.\n"},
  {"GetInputAsImageData", PyvtkDijkstraImageGeodesicPath_GetInputAsImageData, METH_VARARGS,
   "GetInputAsImageData(self) -> vtkImageData\nC++: vtkImageData *GetInputAsImageData()\n\n"},
  {"SetImageWeight", PyvtkDijkstraImageGeodesicPath_SetImageWeight, METH_VARARGS,
   "SetImageWeight(self, __a:float) -> None\nC++: void SetImageWeight(double)\n\nImage cost weight.\n"},
  {"GetImageWeight", PyvtkDijkstraImageGeodesicPath_GetImageWeight, METH_VARARGS,
   "GetImageWeight(self) -> float\nC++: virtual double GetImageWeight()\n\n"},
  {"SetEdgeLengthWeight", PyvtkDijkstraImageGeodesicPath_SetEdgeLengthWeight, METH_VARARGS,
   "SetEdgeLengthWeight(self, __a:float) -> None\nC++: void SetEdgeLengthWeight(double)\n\nEdge length cost weight.\n"},
  {"GetEdgeLengthWeight", PyvtkDijkstraImageGeodesicPath_GetEdgeLengthWeight, METH_VARARGS,
   "GetEdgeLengthWeight(self) -> float\nC++: virtual double GetEdgeLengthWeight()\n\n"},
  {"SetCurvatureWeight", PyvtkDijkstraImageGeodesicPath_SetCurvatureWeight, METH_VARARGS,
   "SetCurvatureWeight(self, _arg:float) -> None\nC++: virtual void SetCurvatureWeight(double _arg)\n\nCurvature cost weight.\n"},
  {"GetCurvatureWeightMinValue", PyvtkDijkstraImageGeodesicPath_GetCurvatureWeightMinValue, METH_VARARGS,
   "GetCurvatureWeightMinValue(self) -> float\nC++: virtual double GetCurvatureWeightMinValue()\n\n"},
  {"GetCurvatureWeightMaxValue", PyvtkDijkstraImageGeodesicPath_GetCurvatureWeightMaxValue, METH_VARARGS,
   "GetCurvatureWeightMaxValue(self) -> float\nC++: virtual double GetCurvatureWeightMaxValue()\n\n"},
  {"GetCurvatureWeight", PyvtkDijkstraImageGeodesicPath_GetCurvatureWeight, METH_VARARGS,
   "GetCurvatureWeight(self) -> float\nC++: virtual double GetCurvatureWeight()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDijkstraImageGeodesicPath_Doc =
  "vtkDijkstraImageGeodesicPath - Dijkstra algorithm to compute the\ngraph geodesic.\n\n"
  "Superclass: vtkDijkstraGraphGeodesicPath\n\n"
  "Takes as input a polyline and an image representing a 2D cost\n"
  "function and performs a single source shortest path calculation.\n"
  "Dijkstra's algorithm is used. The implementation is similar to the\n"
  "one described in Introduction to Algorithms (Second Edition) by\n"
  "Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Cliff\n"
  "Stein, published by MIT Press and McGraw-Hill. Some minor enhancement\n"
  "are added though. All vertices are not pushed on the heap at start,\n"
  "instead a front set is maintained. The heap is implemented as a\n"
  "binary heap. The output of the filter is a set of lines describing\n"
  "the shortest path from StartVertex to EndVertex.  See parent class\n"
  "vtkDijkstraGraphGeodesicPath for the implementation.\n\n"
  "@warning\n"
  "The input cost image must have only VTK_PIXEL cells: i.e., a 2D image\n"
  "or slice of a 3D volume. A cost function for a gray scale image might\n"
  "be generated by the following pipeline:\n"
  "vtkImageData->vtkImageGradientMagnitude->vtkImageShiftScale wherein\n"
  "the gradient magnitude image is inverted so that strong edges have\n"
  "low cost value.  Costs in moving from a vertex v to a vertex u are\n"
  "calculated using a weighted additive scheme: cost = Iw*f(I) +\n"
  "Ew*f(u,v) + Cw*f(t,u,v) where Iw is the weight associated with f(I):\n"
  "the normalized image cost, Ew is the weight associated with f(u,v):\n"
  "the normalized distance between vertices u and v, and Cw is the\n"
  "weight associated with f(t,u,v): the normalized curvature calculated\n"
  "from the vertex t which precedes vertex u, and vertices u and v.  All\n"
  "weights range from 0 to 1.\n\n"
  "@par Thanks: The class was contributed by Dean Inglis.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDijkstraImageGeodesicPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkDijkstraImageGeodesicPath", // tp_name
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
  PyvtkDijkstraImageGeodesicPath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDijkstraImageGeodesicPath_StaticNew()
{
  return vtkDijkstraImageGeodesicPath::New();
}

PyObject *PyvtkDijkstraImageGeodesicPath_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDijkstraImageGeodesicPath_Type, PyvtkDijkstraImageGeodesicPath_Methods,
    "vtkDijkstraImageGeodesicPath",
 &PyvtkDijkstraImageGeodesicPath_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDijkstraGraphGeodesicPath_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDijkstraImageGeodesicPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDijkstraImageGeodesicPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDijkstraImageGeodesicPath", o) != 0)
  {
    Py_DECREF(o);
  }

}

