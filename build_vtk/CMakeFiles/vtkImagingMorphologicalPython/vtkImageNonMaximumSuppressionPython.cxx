// python wrapper for vtkImageNonMaximumSuppression
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageNonMaximumSuppression.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageNonMaximumSuppression(PyObject *dict); }
extern "C" { PyObject *PyvtkImageNonMaximumSuppression_ClassNew(); }


static PyObject *
PyvtkImageNonMaximumSuppression_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageNonMaximumSuppression::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageNonMaximumSuppression::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageNonMaximumSuppression *tempr = vtkImageNonMaximumSuppression::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageNonMaximumSuppression *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageNonMaximumSuppression::NewInstance());

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
PyvtkImageNonMaximumSuppression_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageNonMaximumSuppression::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageNonMaximumSuppression::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetMagnitudeInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnitudeInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetMagnitudeInputData(temp0);
    }
    else
    {
      op->vtkImageNonMaximumSuppression::SetMagnitudeInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetVectorInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetVectorInputData(temp0);
    }
    else
    {
      op->vtkImageNonMaximumSuppression::SetVectorInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleBoundaries(temp0);
    }
    else
    {
      op->vtkImageNonMaximumSuppression::SetHandleBoundaries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleBoundaries() :
      op->vtkImageNonMaximumSuppression::GetHandleBoundaries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleBoundariesOn();
    }
    else
    {
      op->vtkImageNonMaximumSuppression::HandleBoundariesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleBoundariesOff();
    }
    else
    {
      op->vtkImageNonMaximumSuppression::HandleBoundariesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageNonMaximumSuppression::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMinValue() :
      op->vtkImageNonMaximumSuppression::GetDimensionalityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMaxValue() :
      op->vtkImageNonMaximumSuppression::GetDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageNonMaximumSuppression_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNonMaximumSuppression *op = static_cast<vtkImageNonMaximumSuppression *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageNonMaximumSuppression::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageNonMaximumSuppression_Methods[] = {
  {"IsTypeOf", PyvtkImageNonMaximumSuppression_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageNonMaximumSuppression_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageNonMaximumSuppression_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageNonMaximumSuppression\nC++: static vtkImageNonMaximumSuppression *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageNonMaximumSuppression_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageNonMaximumSuppression\nC++: vtkImageNonMaximumSuppression *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageNonMaximumSuppression_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageNonMaximumSuppression_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMagnitudeInputData", PyvtkImageNonMaximumSuppression_SetMagnitudeInputData, METH_VARARGS,
   "SetMagnitudeInputData(self, input:vtkImageData) -> None\nC++: void SetMagnitudeInputData(vtkImageData *input)\n\nSet the magnitude and vector inputs.\n"},
  {"SetVectorInputData", PyvtkImageNonMaximumSuppression_SetVectorInputData, METH_VARARGS,
   "SetVectorInputData(self, input:vtkImageData) -> None\nC++: void SetVectorInputData(vtkImageData *input)\n\n"},
  {"SetHandleBoundaries", PyvtkImageNonMaximumSuppression_SetHandleBoundaries, METH_VARARGS,
   "SetHandleBoundaries(self, _arg:int) -> None\nC++: virtual void SetHandleBoundaries(vtkTypeBool _arg)\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {"GetHandleBoundaries", PyvtkImageNonMaximumSuppression_GetHandleBoundaries, METH_VARARGS,
   "GetHandleBoundaries(self) -> int\nC++: virtual vtkTypeBool GetHandleBoundaries()\n\n"},
  {"HandleBoundariesOn", PyvtkImageNonMaximumSuppression_HandleBoundariesOn, METH_VARARGS,
   "HandleBoundariesOn(self) -> None\nC++: virtual void HandleBoundariesOn()\n\n"},
  {"HandleBoundariesOff", PyvtkImageNonMaximumSuppression_HandleBoundariesOff, METH_VARARGS,
   "HandleBoundariesOff(self) -> None\nC++: virtual void HandleBoundariesOff()\n\n"},
  {"SetDimensionality", PyvtkImageNonMaximumSuppression_SetDimensionality, METH_VARARGS,
   "SetDimensionality(self, _arg:int) -> None\nC++: virtual void SetDimensionality(int _arg)\n\nDetermines how the input is interpreted (set of 2d slices or a 3D\nvolume)\n"},
  {"GetDimensionalityMinValue", PyvtkImageNonMaximumSuppression_GetDimensionalityMinValue, METH_VARARGS,
   "GetDimensionalityMinValue(self) -> int\nC++: virtual int GetDimensionalityMinValue()\n\n"},
  {"GetDimensionalityMaxValue", PyvtkImageNonMaximumSuppression_GetDimensionalityMaxValue, METH_VARARGS,
   "GetDimensionalityMaxValue(self) -> int\nC++: virtual int GetDimensionalityMaxValue()\n\n"},
  {"GetDimensionality", PyvtkImageNonMaximumSuppression_GetDimensionality, METH_VARARGS,
   "GetDimensionality(self) -> int\nC++: virtual int GetDimensionality()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageNonMaximumSuppression_Doc =
  "vtkImageNonMaximumSuppression - Performs non-maximum suppression\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageNonMaximumSuppression Sets to zero any pixel that is not a\n"
  "peak. If a pixel has a neighbor along the vector that has larger\n"
  "magnitude, the smaller pixel is set to zero.  The filter takes two\n"
  "inputs: a magnitude and a vector.  Output is magnitude information\n"
  "and is always in doubles. Typically this filter is used with\n"
  "vtkImageGradient and vtkImageGradientMagnitude as inputs.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageNonMaximumSuppression_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageNonMaximumSuppression", // tp_name
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
  PyvtkImageNonMaximumSuppression_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageNonMaximumSuppression_StaticNew()
{
  return vtkImageNonMaximumSuppression::New();
}

PyObject *PyvtkImageNonMaximumSuppression_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageNonMaximumSuppression_Type, PyvtkImageNonMaximumSuppression_Methods,
    "vtkImageNonMaximumSuppression",
 &PyvtkImageNonMaximumSuppression_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageNonMaximumSuppression(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageNonMaximumSuppression_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageNonMaximumSuppression", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_IMAGE_NON_MAXIMUM_SUPPRESSION_MAGNITUDE_INPUT", 0 },
        { "VTK_IMAGE_NON_MAXIMUM_SUPPRESSION_VECTOR_INPUT", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

