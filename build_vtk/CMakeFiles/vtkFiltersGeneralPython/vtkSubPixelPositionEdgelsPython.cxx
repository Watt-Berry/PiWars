// python wrapper for vtkSubPixelPositionEdgels
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSubPixelPositionEdgels.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSubPixelPositionEdgels(PyObject *dict); }
extern "C" { PyObject *PyvtkSubPixelPositionEdgels_ClassNew(); }


static PyObject *
PyvtkSubPixelPositionEdgels_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSubPixelPositionEdgels::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSubPixelPositionEdgels::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSubPixelPositionEdgels *tempr = vtkSubPixelPositionEdgels::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSubPixelPositionEdgels *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSubPixelPositionEdgels::NewInstance());

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
PyvtkSubPixelPositionEdgels_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSubPixelPositionEdgels::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSubPixelPositionEdgels::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SetGradMapsData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradMapsData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  vtkStructuredPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredPoints"))
  {
    if (ap.IsBound())
    {
      op->SetGradMapsData(temp0);
    }
    else
    {
      op->vtkSubPixelPositionEdgels::SetGradMapsData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetGradMaps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradMaps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetGradMaps() :
      op->vtkSubPixelPositionEdgels::GetGradMaps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SetTargetFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetFlag(temp0);
    }
    else
    {
      op->vtkSubPixelPositionEdgels::SetTargetFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetTargetFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTargetFlag() :
      op->vtkSubPixelPositionEdgels::GetTargetFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_TargetFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TargetFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TargetFlagOn();
    }
    else
    {
      op->vtkSubPixelPositionEdgels::TargetFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_TargetFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TargetFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TargetFlagOff();
    }
    else
    {
      op->vtkSubPixelPositionEdgels::TargetFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_SetTargetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetValue(temp0);
    }
    else
    {
      op->vtkSubPixelPositionEdgels::SetTargetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSubPixelPositionEdgels_GetTargetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubPixelPositionEdgels *op = static_cast<vtkSubPixelPositionEdgels *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetValue() :
      op->vtkSubPixelPositionEdgels::GetTargetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSubPixelPositionEdgels_Methods[] = {
  {"IsTypeOf", PyvtkSubPixelPositionEdgels_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSubPixelPositionEdgels_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSubPixelPositionEdgels_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSubPixelPositionEdgels\nC++: static vtkSubPixelPositionEdgels *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSubPixelPositionEdgels_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSubPixelPositionEdgels\nC++: vtkSubPixelPositionEdgels *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSubPixelPositionEdgels_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSubPixelPositionEdgels_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGradMapsData", PyvtkSubPixelPositionEdgels_SetGradMapsData, METH_VARARGS,
   "SetGradMapsData(self, gm:vtkStructuredPoints) -> None\nC++: void SetGradMapsData(vtkStructuredPoints *gm)\n\nSet/Get the gradient data for doing the position adjustments.\n"},
  {"GetGradMaps", PyvtkSubPixelPositionEdgels_GetGradMaps, METH_VARARGS,
   "GetGradMaps(self) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetGradMaps()\n\n"},
  {"SetTargetFlag", PyvtkSubPixelPositionEdgels_SetTargetFlag, METH_VARARGS,
   "SetTargetFlag(self, _arg:int) -> None\nC++: virtual void SetTargetFlag(vtkTypeBool _arg)\n\nThese methods can make the positioning look for a target scalar\nvalue instead of looking for a maximum.\n"},
  {"GetTargetFlag", PyvtkSubPixelPositionEdgels_GetTargetFlag, METH_VARARGS,
   "GetTargetFlag(self) -> int\nC++: virtual vtkTypeBool GetTargetFlag()\n\n"},
  {"TargetFlagOn", PyvtkSubPixelPositionEdgels_TargetFlagOn, METH_VARARGS,
   "TargetFlagOn(self) -> None\nC++: virtual void TargetFlagOn()\n\n"},
  {"TargetFlagOff", PyvtkSubPixelPositionEdgels_TargetFlagOff, METH_VARARGS,
   "TargetFlagOff(self) -> None\nC++: virtual void TargetFlagOff()\n\n"},
  {"SetTargetValue", PyvtkSubPixelPositionEdgels_SetTargetValue, METH_VARARGS,
   "SetTargetValue(self, _arg:float) -> None\nC++: virtual void SetTargetValue(double _arg)\n\n"},
  {"GetTargetValue", PyvtkSubPixelPositionEdgels_GetTargetValue, METH_VARARGS,
   "GetTargetValue(self) -> float\nC++: virtual double GetTargetValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSubPixelPositionEdgels_Doc =
  "vtkSubPixelPositionEdgels - adjust edgel locations based on gradients.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSubPixelPositionEdgels is a filter that takes a series of linked\n"
  "edgels (digital curves) and gradient maps as input. It then adjusts\n"
  "the edgel locations based on the gradient data. Specifically, the\n"
  "algorithm first determines the neighboring gradient magnitudes of an\n"
  "edgel using simple interpolation of its neighbors. It then fits the\n"
  "following three data points: negative gradient direction gradient\n"
  "magnitude, edgel gradient magnitude and positive gradient direction\n"
  "gradient magnitude to a quadratic function. It then solves this\n"
  "quadratic to find the maximum gradient location along the gradient\n"
  "orientation.  It then modifies the edgels location along the gradient\n"
  "orientation to the calculated maximum location. This algorithm does\n"
  "not adjust an edgel in the direction orthogonal to its gradient\n"
  "vector.\n\n"
  "@sa\n"
  "vtkImageData vtkImageGradient vtkLinkEdgels\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSubPixelPositionEdgels_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkSubPixelPositionEdgels", // tp_name
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
  PyvtkSubPixelPositionEdgels_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSubPixelPositionEdgels_StaticNew()
{
  return vtkSubPixelPositionEdgels::New();
}

PyObject *PyvtkSubPixelPositionEdgels_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSubPixelPositionEdgels_Type, PyvtkSubPixelPositionEdgels_Methods,
    "vtkSubPixelPositionEdgels",
 &PyvtkSubPixelPositionEdgels_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSubPixelPositionEdgels(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSubPixelPositionEdgels_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSubPixelPositionEdgels", o) != 0)
  {
    Py_DECREF(o);
  }

}

