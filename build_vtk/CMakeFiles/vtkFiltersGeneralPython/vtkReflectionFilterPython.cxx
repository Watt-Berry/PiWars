// python wrapper for vtkReflectionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkReflectionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkReflectionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkReflectionFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkReflectionFilter_ReflectionPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkReflectionFilter.ReflectionPlane", // tp_name
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
PyObject *PyvtkReflectionFilter_ReflectionPlane_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkReflectionFilter_ReflectionPlane_Type, static_cast<int>(val));
}


static PyObject *
PyvtkReflectionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReflectionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReflectionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReflectionFilter *tempr = vtkReflectionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReflectionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReflectionFilter::NewInstance());

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
PyvtkReflectionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkReflectionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkReflectionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkReflectionFilter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMinValue() :
      op->vtkReflectionFilter::GetPlaneMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMaxValue() :
      op->vtkReflectionFilter::GetPlaneMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkReflectionFilter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToX();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToY();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZ();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToXMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToXMin();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToXMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToYMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToYMin();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToYMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZMin();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToZMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToXMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToXMax();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToXMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToYMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToYMax();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToYMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZMax();
    }
    else
    {
      op->vtkReflectionFilter::SetPlaneToZMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkReflectionFilter::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkReflectionFilter::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyInput(temp0);
    }
    else
    {
      op->vtkReflectionFilter::SetCopyInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyInput() :
      op->vtkReflectionFilter::GetCopyInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOn();
    }
    else
    {
      op->vtkReflectionFilter::CopyInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOff();
    }
    else
    {
      op->vtkReflectionFilter::CopyInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetFlipAllInputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipAllInputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipAllInputArrays(temp0);
    }
    else
    {
      op->vtkReflectionFilter::SetFlipAllInputArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetFlipAllInputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipAllInputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFlipAllInputArrays() :
      op->vtkReflectionFilter::GetFlipAllInputArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_FlipAllInputArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipAllInputArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipAllInputArraysOn();
    }
    else
    {
      op->vtkReflectionFilter::FlipAllInputArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkReflectionFilter_FlipAllInputArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipAllInputArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipAllInputArraysOff();
    }
    else
    {
      op->vtkReflectionFilter::FlipAllInputArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkReflectionFilter_Methods[] = {
  {"IsTypeOf", PyvtkReflectionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReflectionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReflectionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkReflectionFilter\nC++: static vtkReflectionFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReflectionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkReflectionFilter\nC++: vtkReflectionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkReflectionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkReflectionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPlane", PyvtkReflectionFilter_SetPlane, METH_VARARGS,
   "SetPlane(self, _arg:int) -> None\nC++: virtual void SetPlane(int _arg)\n\nSet the normal of the plane to use as mirror.\n"},
  {"GetPlaneMinValue", PyvtkReflectionFilter_GetPlaneMinValue, METH_VARARGS,
   "GetPlaneMinValue(self) -> int\nC++: virtual int GetPlaneMinValue()\n\n"},
  {"GetPlaneMaxValue", PyvtkReflectionFilter_GetPlaneMaxValue, METH_VARARGS,
   "GetPlaneMaxValue(self) -> int\nC++: virtual int GetPlaneMaxValue()\n\n"},
  {"GetPlane", PyvtkReflectionFilter_GetPlane, METH_VARARGS,
   "GetPlane(self) -> int\nC++: virtual int GetPlane()\n\n"},
  {"SetPlaneToX", PyvtkReflectionFilter_SetPlaneToX, METH_VARARGS,
   "SetPlaneToX(self) -> None\nC++: void SetPlaneToX()\n\n"},
  {"SetPlaneToY", PyvtkReflectionFilter_SetPlaneToY, METH_VARARGS,
   "SetPlaneToY(self) -> None\nC++: void SetPlaneToY()\n\n"},
  {"SetPlaneToZ", PyvtkReflectionFilter_SetPlaneToZ, METH_VARARGS,
   "SetPlaneToZ(self) -> None\nC++: void SetPlaneToZ()\n\n"},
  {"SetPlaneToXMin", PyvtkReflectionFilter_SetPlaneToXMin, METH_VARARGS,
   "SetPlaneToXMin(self) -> None\nC++: void SetPlaneToXMin()\n\n"},
  {"SetPlaneToYMin", PyvtkReflectionFilter_SetPlaneToYMin, METH_VARARGS,
   "SetPlaneToYMin(self) -> None\nC++: void SetPlaneToYMin()\n\n"},
  {"SetPlaneToZMin", PyvtkReflectionFilter_SetPlaneToZMin, METH_VARARGS,
   "SetPlaneToZMin(self) -> None\nC++: void SetPlaneToZMin()\n\n"},
  {"SetPlaneToXMax", PyvtkReflectionFilter_SetPlaneToXMax, METH_VARARGS,
   "SetPlaneToXMax(self) -> None\nC++: void SetPlaneToXMax()\n\n"},
  {"SetPlaneToYMax", PyvtkReflectionFilter_SetPlaneToYMax, METH_VARARGS,
   "SetPlaneToYMax(self) -> None\nC++: void SetPlaneToYMax()\n\n"},
  {"SetPlaneToZMax", PyvtkReflectionFilter_SetPlaneToZMax, METH_VARARGS,
   "SetPlaneToZMax(self) -> None\nC++: void SetPlaneToZMax()\n\n"},
  {"SetCenter", PyvtkReflectionFilter_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg:float) -> None\nC++: virtual void SetCenter(double _arg)\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {"GetCenter", PyvtkReflectionFilter_GetCenter, METH_VARARGS,
   "GetCenter(self) -> float\nC++: virtual double GetCenter()\n\n"},
  {"SetCopyInput", PyvtkReflectionFilter_SetCopyInput, METH_VARARGS,
   "SetCopyInput(self, _arg:int) -> None\nC++: virtual void SetCopyInput(vtkTypeBool _arg)\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {"GetCopyInput", PyvtkReflectionFilter_GetCopyInput, METH_VARARGS,
   "GetCopyInput(self) -> int\nC++: virtual vtkTypeBool GetCopyInput()\n\n"},
  {"CopyInputOn", PyvtkReflectionFilter_CopyInputOn, METH_VARARGS,
   "CopyInputOn(self) -> None\nC++: virtual void CopyInputOn()\n\n"},
  {"CopyInputOff", PyvtkReflectionFilter_CopyInputOff, METH_VARARGS,
   "CopyInputOff(self) -> None\nC++: virtual void CopyInputOff()\n\n"},
  {"SetFlipAllInputArrays", PyvtkReflectionFilter_SetFlipAllInputArrays, METH_VARARGS,
   "SetFlipAllInputArrays(self, _arg:bool) -> None\nC++: virtual void SetFlipAllInputArrays(bool _arg)\n\nIf off (the default), only Vectors, Normals and Tensors will be\nflipped. If on, all 3-component data arrays ( considered as 3D\nvectors), 6-component data arrays (considered as symmetric\ntensors), 9-component data arrays (considered as tensors ) of\nsigned type will be flipped. All other won't be flipped and will\nonly be copied.\n"},
  {"GetFlipAllInputArrays", PyvtkReflectionFilter_GetFlipAllInputArrays, METH_VARARGS,
   "GetFlipAllInputArrays(self) -> bool\nC++: virtual bool GetFlipAllInputArrays()\n\n"},
  {"FlipAllInputArraysOn", PyvtkReflectionFilter_FlipAllInputArraysOn, METH_VARARGS,
   "FlipAllInputArraysOn(self) -> None\nC++: virtual void FlipAllInputArraysOn()\n\n"},
  {"FlipAllInputArraysOff", PyvtkReflectionFilter_FlipAllInputArraysOff, METH_VARARGS,
   "FlipAllInputArraysOff(self) -> None\nC++: virtual void FlipAllInputArraysOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkReflectionFilter_Doc =
  "vtkReflectionFilter - reflects a data set across a plane\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "The vtkReflectionFilter reflects a data set across one of the planes\n"
  "formed by the data set's bounding box. Since it converts data sets\n"
  "into unstructured grids, it is not efficient for structured data\n"
  "sets.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkReflectionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkReflectionFilter", // tp_name
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
  PyvtkReflectionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkReflectionFilter_StaticNew()
{
  return vtkReflectionFilter::New();
}

PyObject *PyvtkReflectionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkReflectionFilter_Type, PyvtkReflectionFilter_Methods,
    "vtkReflectionFilter",
 &PyvtkReflectionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkReflectionFilter_ReflectionPlane_Type);
  PyVTKEnum_Add(&PyvtkReflectionFilter_ReflectionPlane_Type, "vtkReflectionFilter.ReflectionPlane");

  o = (PyObject *)&PyvtkReflectionFilter_ReflectionPlane_Type;
  if (PyDict_SetItemString(d, "ReflectionPlane", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkReflectionFilter::ReflectionPlane cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "USE_X_MIN", vtkReflectionFilter::USE_X_MIN },
        { "USE_Y_MIN", vtkReflectionFilter::USE_Y_MIN },
        { "USE_Z_MIN", vtkReflectionFilter::USE_Z_MIN },
        { "USE_X_MAX", vtkReflectionFilter::USE_X_MAX },
        { "USE_Y_MAX", vtkReflectionFilter::USE_Y_MAX },
        { "USE_Z_MAX", vtkReflectionFilter::USE_Z_MAX },
        { "USE_X", vtkReflectionFilter::USE_X },
        { "USE_Y", vtkReflectionFilter::USE_Y },
        { "USE_Z", vtkReflectionFilter::USE_Z },
      };

    o = PyvtkReflectionFilter_ReflectionPlane_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkReflectionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReflectionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReflectionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

