// python wrapper for vtkBezierContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBezierContourLineInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBezierContourLineInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkBezierContourLineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkContourLineInterpolator_ClassNew
extern "C" { PyObject *PyvtkContourLineInterpolator_ClassNew(); }
#define DECLARED_PyvtkContourLineInterpolator_ClassNew
#endif

static PyObject *
PyvtkBezierContourLineInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBezierContourLineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBezierContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBezierContourLineInterpolator *tempr = vtkBezierContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBezierContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBezierContourLineInterpolator::NewInstance());

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
PyvtkBezierContourLineInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBezierContourLineInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBezierContourLineInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->InterpolateLine(temp0, temp1, temp2, temp3) :
      op->vtkBezierContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_SetMaximumCurveError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumCurveError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumCurveError(temp0);
    }
    else
    {
      op->vtkBezierContourLineInterpolator::SetMaximumCurveError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumCurveErrorMinValue() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumCurveErrorMaxValue() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumCurveError() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_SetMaximumCurveLineSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumCurveLineSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumCurveLineSegments(temp0);
    }
    else
    {
      op->vtkBezierContourLineInterpolator::SetMaximumCurveLineSegments(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegmentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveLineSegmentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumCurveLineSegmentsMinValue() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveLineSegmentsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegmentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveLineSegmentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumCurveLineSegmentsMaxValue() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveLineSegmentsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCurveLineSegments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumCurveLineSegments() :
      op->vtkBezierContourLineInterpolator::GetMaximumCurveLineSegments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierContourLineInterpolator_GetSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierContourLineInterpolator *op = static_cast<vtkBezierContourLineInterpolator *>(vp);

  int temp0;
  vtkIntArray *temp1 = nullptr;
  vtkContourRepresentation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray") &&
      ap.GetVTKObject(temp2, "vtkContourRepresentation"))
  {
    if (ap.IsBound())
    {
      op->GetSpan(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBezierContourLineInterpolator::GetSpan(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBezierContourLineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkBezierContourLineInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBezierContourLineInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBezierContourLineInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBezierContourLineInterpolator\nC++: static vtkBezierContourLineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBezierContourLineInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBezierContourLineInterpolator\nC++: vtkBezierContourLineInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBezierContourLineInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBezierContourLineInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InterpolateLine", PyvtkBezierContourLineInterpolator_InterpolateLine, METH_VARARGS,
   "InterpolateLine(self, ren:vtkRenderer,\n    rep:vtkContourRepresentation, idx1:int, idx2:int) -> int\nC++: int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2) override;\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {"SetMaximumCurveError", PyvtkBezierContourLineInterpolator_SetMaximumCurveError, METH_VARARGS,
   "SetMaximumCurveError(self, _arg:float) -> None\nC++: virtual void SetMaximumCurveError(double _arg)\n\nThe difference between a line segment connecting two points and\nthe curve connecting the same points. In the limit of the length\nof the curve dx -> 0, the two values will be the same. The\nsmaller this number, the finer the bezier curve will be\ninterpolated. Default is 0.005\n"},
  {"GetMaximumCurveErrorMinValue", PyvtkBezierContourLineInterpolator_GetMaximumCurveErrorMinValue, METH_VARARGS,
   "GetMaximumCurveErrorMinValue(self) -> float\nC++: virtual double GetMaximumCurveErrorMinValue()\n\n"},
  {"GetMaximumCurveErrorMaxValue", PyvtkBezierContourLineInterpolator_GetMaximumCurveErrorMaxValue, METH_VARARGS,
   "GetMaximumCurveErrorMaxValue(self) -> float\nC++: virtual double GetMaximumCurveErrorMaxValue()\n\n"},
  {"GetMaximumCurveError", PyvtkBezierContourLineInterpolator_GetMaximumCurveError, METH_VARARGS,
   "GetMaximumCurveError(self) -> float\nC++: virtual double GetMaximumCurveError()\n\n"},
  {"SetMaximumCurveLineSegments", PyvtkBezierContourLineInterpolator_SetMaximumCurveLineSegments, METH_VARARGS,
   "SetMaximumCurveLineSegments(self, _arg:int) -> None\nC++: virtual void SetMaximumCurveLineSegments(int _arg)\n\nMaximum number of bezier line segments between two nodes. Larger\nvalues create a finer interpolation. Default is 100.\n"},
  {"GetMaximumCurveLineSegmentsMinValue", PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegmentsMinValue, METH_VARARGS,
   "GetMaximumCurveLineSegmentsMinValue(self) -> int\nC++: virtual int GetMaximumCurveLineSegmentsMinValue()\n\n"},
  {"GetMaximumCurveLineSegmentsMaxValue", PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegmentsMaxValue, METH_VARARGS,
   "GetMaximumCurveLineSegmentsMaxValue(self) -> int\nC++: virtual int GetMaximumCurveLineSegmentsMaxValue()\n\n"},
  {"GetMaximumCurveLineSegments", PyvtkBezierContourLineInterpolator_GetMaximumCurveLineSegments, METH_VARARGS,
   "GetMaximumCurveLineSegments(self) -> int\nC++: virtual int GetMaximumCurveLineSegments()\n\n"},
  {"GetSpan", PyvtkBezierContourLineInterpolator_GetSpan, METH_VARARGS,
   "GetSpan(self, nodeIndex:int, nodeIndices:vtkIntArray,\n    rep:vtkContourRepresentation) -> None\nC++: void GetSpan(int nodeIndex, vtkIntArray *nodeIndices,\n    vtkContourRepresentation *rep) override;\n\nSpan of the interpolator, i.e. the number of control points it's\nsupposed to interpolate given a node.\n\n* The first argument is the current nodeIndex.\n* i.e., you'd be trying to interpolate between nodes \"nodeIndex\"\n  and\n* \"nodeIndex-1\", unless you're closing the contour, in which case\n  you're\n* trying to interpolate \"nodeIndex\" and \"Node=0\". The node span\n  is\n* returned in a vtkIntArray.\n\n* The node span is returned in a vtkIntArray. The node span\n  returned by\n* this interpolator will be a 2-tuple with a span of 4.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBezierContourLineInterpolator_Doc =
  "vtkBezierContourLineInterpolator - Interpolates supplied nodes with\nbezier line segments\n\n"
  "Superclass: vtkContourLineInterpolator\n\n"
  "The line interpolator interpolates supplied nodes (see\n"
  "InterpolateLine) with Bezier line segments. The fitness of the curve\n"
  "may be controlled using SetMaximumCurveError and\n"
  "SetMaximumNumberOfLineSegments.\n\n"
  "@sa\n"
  "vtkContourLineInterpolator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBezierContourLineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBezierContourLineInterpolator", // tp_name
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
  PyvtkBezierContourLineInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBezierContourLineInterpolator_StaticNew()
{
  return vtkBezierContourLineInterpolator::New();
}

PyObject *PyvtkBezierContourLineInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBezierContourLineInterpolator_Type, PyvtkBezierContourLineInterpolator_Methods,
    "vtkBezierContourLineInterpolator",
 &PyvtkBezierContourLineInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkContourLineInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBezierContourLineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBezierContourLineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBezierContourLineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

