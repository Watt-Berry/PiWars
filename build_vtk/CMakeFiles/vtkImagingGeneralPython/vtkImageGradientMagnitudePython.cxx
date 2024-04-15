// python wrapper for vtkImageGradientMagnitude
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageGradientMagnitude.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageGradientMagnitude(PyObject *dict); }
extern "C" { PyObject *PyvtkImageGradientMagnitude_ClassNew(); }


static PyObject *
PyvtkImageGradientMagnitude_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageGradientMagnitude::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGradientMagnitude::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageGradientMagnitude *tempr = vtkImageGradientMagnitude::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageGradientMagnitude *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGradientMagnitude::NewInstance());

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
PyvtkImageGradientMagnitude_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageGradientMagnitude::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageGradientMagnitude::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_SetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

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
      op->vtkImageGradientMagnitude::SetHandleBoundaries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetHandleBoundaries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleBoundaries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleBoundaries() :
      op->vtkImageGradientMagnitude::GetHandleBoundaries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_HandleBoundariesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleBoundariesOn();
    }
    else
    {
      op->vtkImageGradientMagnitude::HandleBoundariesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_HandleBoundariesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleBoundariesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleBoundariesOff();
    }
    else
    {
      op->vtkImageGradientMagnitude::HandleBoundariesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

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
      op->vtkImageGradientMagnitude::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMinValue() :
      op->vtkImageGradientMagnitude::GetDimensionalityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionalityMaxValue() :
      op->vtkImageGradientMagnitude::GetDimensionalityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGradientMagnitude_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGradientMagnitude *op = static_cast<vtkImageGradientMagnitude *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageGradientMagnitude::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageGradientMagnitude_Methods[] = {
  {"IsTypeOf", PyvtkImageGradientMagnitude_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageGradientMagnitude_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageGradientMagnitude_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageGradientMagnitude\nC++: static vtkImageGradientMagnitude *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageGradientMagnitude_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageGradientMagnitude\nC++: vtkImageGradientMagnitude *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageGradientMagnitude_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageGradientMagnitude_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetHandleBoundaries", PyvtkImageGradientMagnitude_SetHandleBoundaries, METH_VARARGS,
   "SetHandleBoundaries(self, _arg:int) -> None\nC++: virtual void SetHandleBoundaries(vtkTypeBool _arg)\n\nIf \"HandleBoundariesOn\" then boundary pixels are duplicated So\ncentral differences can get values.\n"},
  {"GetHandleBoundaries", PyvtkImageGradientMagnitude_GetHandleBoundaries, METH_VARARGS,
   "GetHandleBoundaries(self) -> int\nC++: virtual vtkTypeBool GetHandleBoundaries()\n\n"},
  {"HandleBoundariesOn", PyvtkImageGradientMagnitude_HandleBoundariesOn, METH_VARARGS,
   "HandleBoundariesOn(self) -> None\nC++: virtual void HandleBoundariesOn()\n\n"},
  {"HandleBoundariesOff", PyvtkImageGradientMagnitude_HandleBoundariesOff, METH_VARARGS,
   "HandleBoundariesOff(self) -> None\nC++: virtual void HandleBoundariesOff()\n\n"},
  {"SetDimensionality", PyvtkImageGradientMagnitude_SetDimensionality, METH_VARARGS,
   "SetDimensionality(self, _arg:int) -> None\nC++: virtual void SetDimensionality(int _arg)\n\nDetermines how the input is interpreted (set of 2d slices ...)\n"},
  {"GetDimensionalityMinValue", PyvtkImageGradientMagnitude_GetDimensionalityMinValue, METH_VARARGS,
   "GetDimensionalityMinValue(self) -> int\nC++: virtual int GetDimensionalityMinValue()\n\n"},
  {"GetDimensionalityMaxValue", PyvtkImageGradientMagnitude_GetDimensionalityMaxValue, METH_VARARGS,
   "GetDimensionalityMaxValue(self) -> int\nC++: virtual int GetDimensionalityMaxValue()\n\n"},
  {"GetDimensionality", PyvtkImageGradientMagnitude_GetDimensionality, METH_VARARGS,
   "GetDimensionality(self) -> int\nC++: virtual int GetDimensionality()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageGradientMagnitude_Doc =
  "vtkImageGradientMagnitude - Computes magnitude of the gradient.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageGradientMagnitude computes the gradient magnitude of an\n"
  "image. Setting the dimensionality determines whether the gradient is\n"
  "computed on 2D images, or 3D volumes.  The default is two dimensional\n"
  "XY images.\n\n"
  "@sa\n"
  "vtkImageGradient vtkImageMagnitude\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageGradientMagnitude_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageGradientMagnitude", // tp_name
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
  PyvtkImageGradientMagnitude_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageGradientMagnitude_StaticNew()
{
  return vtkImageGradientMagnitude::New();
}

PyObject *PyvtkImageGradientMagnitude_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageGradientMagnitude_Type, PyvtkImageGradientMagnitude_Methods,
    "vtkImageGradientMagnitude",
 &PyvtkImageGradientMagnitude_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageGradientMagnitude(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageGradientMagnitude_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageGradientMagnitude", o) != 0)
  {
    Py_DECREF(o);
  }

}

