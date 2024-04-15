// python wrapper for vtkGPUVolumeRayCastMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGPUVolumeRayCastMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGPUVolumeRayCastMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkGPUVolumeRayCastMapper_ClassNew(); }

#ifndef DECLARED_PyvtkVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkVolumeMapper_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGPUVolumeRayCastMapper_TFRangeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkGPUVolumeRayCastMapper.TFRangeType", // tp_name
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
PyObject *PyvtkGPUVolumeRayCastMapper_TFRangeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGPUVolumeRayCastMapper_TFRangeType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGPUVolumeRayCastMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGPUVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGPUVolumeRayCastMapper *tempr = vtkGPUVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGPUVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGPUVolumeRayCastMapper::NewInstance());

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
PyvtkGPUVolumeRayCastMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGPUVolumeRayCastMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGPUVolumeRayCastMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdjustSampleDistances(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkGPUVolumeRayCastMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockSampleDistanceToInputSpacing(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetLockSampleDistanceToInputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacingMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacingMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockSampleDistanceToInputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockSampleDistanceToInputSpacing() :
      op->vtkGPUVolumeRayCastMapper::GetLockSampleDistanceToInputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockSampleDistanceToInputSpacingOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::LockSampleDistanceToInputSpacingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockSampleDistanceToInputSpacingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockSampleDistanceToInputSpacingOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::LockSampleDistanceToInputSpacingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetUseJittering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseJittering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseJittering(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetUseJittering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseJitteringMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJitteringMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJitteringMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetUseJitteringMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseJitteringMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJitteringMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJitteringMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetUseJitteringMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseJittering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJittering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJittering() :
      op->vtkGPUVolumeRayCastMapper::GetUseJittering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_UseJitteringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseJitteringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseJitteringOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::UseJitteringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_UseJitteringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseJitteringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseJitteringOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::UseJitteringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetUseDepthPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDepthPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDepthPass(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetUseDepthPass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseDepthPassMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPassMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPassMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetUseDepthPassMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseDepthPassMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPassMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPassMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetUseDepthPassMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetUseDepthPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDepthPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseDepthPass() :
      op->vtkGPUVolumeRayCastMapper::GetUseDepthPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_UseDepthPassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthPassOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::UseDepthPassOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_UseDepthPassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDepthPassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDepthPassOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::UseDepthPassOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetDepthPassContourValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthPassContourValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourValues *tempr = (ap.IsBound() ?
      op->GetDepthPassContourValues() :
      op->vtkGPUVolumeRayCastMapper::GetDepthPassContourValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleDistance(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageSampleDistance(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumImageSampleDistance(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetMinimumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumImageSampleDistance(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistance() :
      op->vtkGPUVolumeRayCastMapper::GetMaximumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFinalColorWindow(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetFinalColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorWindow() :
      op->vtkGPUVolumeRayCastMapper::GetFinalColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFinalColorLevel(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetFinalColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorLevel() :
      op->vtkGPUVolumeRayCastMapper::GetFinalColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxMemoryInBytes(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaxMemoryInBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxMemoryInBytes() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryInBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxMemoryFraction(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaxMemoryFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFraction() :
      op->vtkGPUVolumeRayCastMapper::GetMaxMemoryFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetReportProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReportProgress(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetReportProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetReportProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReportProgress() :
      op->vtkGPUVolumeRayCastMapper::GetReportProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_IsRenderSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRenderSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  vtkVolumeProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow") &&
      ap.GetVTKObject(temp1, "vtkVolumeProperty"))
  {
    int tempr = (ap.IsBound() ?
      op->IsRenderSupported(temp0, temp1) :
      op->vtkGPUVolumeRayCastMapper::IsRenderSupported(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  vtkImageData *temp2 = nullptr;
  int temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetMaskInput(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetMaskInput() :
      op->vtkGPUVolumeRayCastMapper::GetMaskInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskType() :
      op->vtkGPUVolumeRayCastMapper::GetMaskType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaskTypeToBinary();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskTypeToLabelMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskTypeToLabelMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMaskTypeToLabelMap();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskTypeToLabelMap();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetMaskBlendFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskBlendFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskBlendFactor(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetMaskBlendFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactorMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactorMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBlendFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaskBlendFactor() :
      op->vtkGPUVolumeRayCastMapper::GetMaskBlendFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetGlobalIlluminationReach(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIlluminationReach");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalIlluminationReach(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetGlobalIlluminationReach(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetGlobalIlluminationReachMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIlluminationReachMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGlobalIlluminationReachMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetGlobalIlluminationReachMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetGlobalIlluminationReachMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIlluminationReachMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGlobalIlluminationReachMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetGlobalIlluminationReachMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetGlobalIlluminationReach(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIlluminationReach");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGlobalIlluminationReach() :
      op->vtkGPUVolumeRayCastMapper::GetGlobalIlluminationReach());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetVolumetricScatteringBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumetricScatteringBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumetricScatteringBlending(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetVolumetricScatteringBlending(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetVolumetricScatteringBlendingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricScatteringBlendingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVolumetricScatteringBlendingMinValue() :
      op->vtkGPUVolumeRayCastMapper::GetVolumetricScatteringBlendingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetVolumetricScatteringBlendingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricScatteringBlendingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVolumetricScatteringBlendingMaxValue() :
      op->vtkGPUVolumeRayCastMapper::GetVolumetricScatteringBlendingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetVolumetricScatteringBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricScatteringBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVolumetricScatteringBlending() :
      op->vtkGPUVolumeRayCastMapper::GetVolumetricScatteringBlending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetRenderToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderToImage(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetRenderToImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetRenderToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRenderToImage() :
      op->vtkGPUVolumeRayCastMapper::GetRenderToImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_RenderToImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderToImageOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::RenderToImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_RenderToImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderToImageOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::RenderToImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthImageScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthImageScalarType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetDepthImageScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetDepthImageScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthImageScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDepthImageScalarType() :
      op->vtkGPUVolumeRayCastMapper::GetDepthImageScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthImageScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthImageScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthImageScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthImageScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthImageScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDepthImageScalarTypeToFloat();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetDepthImageScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetClampDepthToBackface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampDepthToBackface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClampDepthToBackface(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetClampDepthToBackface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetClampDepthToBackface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampDepthToBackface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClampDepthToBackface() :
      op->vtkGPUVolumeRayCastMapper::GetClampDepthToBackface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_ClampDepthToBackfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampDepthToBackfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampDepthToBackfaceOn();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::ClampDepthToBackfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_ClampDepthToBackfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampDepthToBackfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampDepthToBackfaceOff();
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::ClampDepthToBackfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetDepthImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetDepthImage(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::GetDepthImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetColorImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetColorImage(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::GetColorImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GPURender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GPURender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->GPURender(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::GPURender(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetReductionRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReductionRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetReductionRatio(temp0);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetColorRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorRangeType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetColorRangeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetColorRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorRangeType() :
      op->vtkGPUVolumeRayCastMapper::GetColorRangeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetScalarOpacityRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarOpacityRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarOpacityRangeType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetScalarOpacityRangeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetScalarOpacityRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarOpacityRangeType() :
      op->vtkGPUVolumeRayCastMapper::GetScalarOpacityRangeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetGradientOpacityRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientOpacityRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientOpacityRangeType(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetGradientOpacityRangeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetGradientOpacityRangeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityRangeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGradientOpacityRangeType() :
      op->vtkGPUVolumeRayCastMapper::GetGradientOpacityRangeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkGPUVolumeRayCastMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_Methods[] = {
  {"RemoveInputConnection", PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_s1, METH_VARARGS,
   "@iV *vtkAlgorithmOutput"},
  {"RemoveInputConnection", PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGPUVolumeRayCastMapper_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGPUVolumeRayCastMapper_RemoveInputConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveInputConnection");
  return nullptr;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGPUVolumeRayCastMapper_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGPUVolumeRayCastMapper_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGPUVolumeRayCastMapper_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkGPUVolumeRayCastMapper_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetInputCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputCount() :
      op->vtkGPUVolumeRayCastMapper::GetInputCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetTransformedInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformedInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetTransformedInput(temp0) :
      op->vtkGPUVolumeRayCastMapper::GetTransformedInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetBoundsFromPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsFromPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  int temp0;
  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBoundsFromPort(temp0) :
      op->vtkGPUVolumeRayCastMapper::GetBoundsFromPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_SetTransfer2DYAxisArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransfer2DYAxisArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransfer2DYAxisArray(temp0);
    }
    else
    {
      op->vtkGPUVolumeRayCastMapper::SetTransfer2DYAxisArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUVolumeRayCastMapper_GetTransfer2DYAxisArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransfer2DYAxisArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUVolumeRayCastMapper *op = static_cast<vtkGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTransfer2DYAxisArray() :
      op->vtkGPUVolumeRayCastMapper::GetTransfer2DYAxisArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGPUVolumeRayCastMapper_Methods[] = {
  {"IsTypeOf", PyvtkGPUVolumeRayCastMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGPUVolumeRayCastMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGPUVolumeRayCastMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGPUVolumeRayCastMapper\nC++: static vtkGPUVolumeRayCastMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGPUVolumeRayCastMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGPUVolumeRayCastMapper\nC++: vtkGPUVolumeRayCastMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGPUVolumeRayCastMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGPUVolumeRayCastMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAutoAdjustSampleDistances", PyvtkGPUVolumeRayCastMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   "SetAutoAdjustSampleDistances(self, _arg:int) -> None\nC++: virtual void SetAutoAdjustSampleDistances(vtkTypeBool _arg)\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"GetAutoAdjustSampleDistancesMinValue", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   "GetAutoAdjustSampleDistancesMinValue(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMinValue()\n\n"},
  {"GetAutoAdjustSampleDistancesMaxValue", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   "GetAutoAdjustSampleDistancesMaxValue(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMaxValue()\n\n"},
  {"GetAutoAdjustSampleDistances", PyvtkGPUVolumeRayCastMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   "GetAutoAdjustSampleDistances(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistances()\n\n"},
  {"AutoAdjustSampleDistancesOn", PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   "AutoAdjustSampleDistancesOn(self) -> None\nC++: virtual void AutoAdjustSampleDistancesOn()\n\n"},
  {"AutoAdjustSampleDistancesOff", PyvtkGPUVolumeRayCastMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   "AutoAdjustSampleDistancesOff(self) -> None\nC++: virtual void AutoAdjustSampleDistancesOff()\n\n"},
  {"SetLockSampleDistanceToInputSpacing", PyvtkGPUVolumeRayCastMapper_SetLockSampleDistanceToInputSpacing, METH_VARARGS,
   "SetLockSampleDistanceToInputSpacing(self, _arg:int) -> None\nC++: virtual void SetLockSampleDistanceToInputSpacing(\n    vtkTypeBool _arg)\n\nCompute the sample distance from the data spacing.  When the\nnumber of voxels is 8, the sample distance will be roughly 1/200\nthe average voxel size. The distance will grow proportionally to\nnumVoxels^(1/3). Off by default.\n"},
  {"GetLockSampleDistanceToInputSpacingMinValue", PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMinValue, METH_VARARGS,
   "GetLockSampleDistanceToInputSpacingMinValue(self) -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacingMinValue(\n    )\n\n"},
  {"GetLockSampleDistanceToInputSpacingMaxValue", PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacingMaxValue, METH_VARARGS,
   "GetLockSampleDistanceToInputSpacingMaxValue(self) -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacingMaxValue(\n    )\n\n"},
  {"GetLockSampleDistanceToInputSpacing", PyvtkGPUVolumeRayCastMapper_GetLockSampleDistanceToInputSpacing, METH_VARARGS,
   "GetLockSampleDistanceToInputSpacing(self) -> int\nC++: virtual vtkTypeBool GetLockSampleDistanceToInputSpacing()\n\n"},
  {"LockSampleDistanceToInputSpacingOn", PyvtkGPUVolumeRayCastMapper_LockSampleDistanceToInputSpacingOn, METH_VARARGS,
   "LockSampleDistanceToInputSpacingOn(self) -> None\nC++: virtual void LockSampleDistanceToInputSpacingOn()\n\n"},
  {"LockSampleDistanceToInputSpacingOff", PyvtkGPUVolumeRayCastMapper_LockSampleDistanceToInputSpacingOff, METH_VARARGS,
   "LockSampleDistanceToInputSpacingOff(self) -> None\nC++: virtual void LockSampleDistanceToInputSpacingOff()\n\n"},
  {"SetUseJittering", PyvtkGPUVolumeRayCastMapper_SetUseJittering, METH_VARARGS,
   "SetUseJittering(self, _arg:int) -> None\nC++: virtual void SetUseJittering(vtkTypeBool _arg)\n\nIf UseJittering is on, each ray traversal direction will be\nperturbed slightly using a noise-texture to get rid of wood-grain\neffect.\n"},
  {"GetUseJitteringMinValue", PyvtkGPUVolumeRayCastMapper_GetUseJitteringMinValue, METH_VARARGS,
   "GetUseJitteringMinValue(self) -> int\nC++: virtual vtkTypeBool GetUseJitteringMinValue()\n\n"},
  {"GetUseJitteringMaxValue", PyvtkGPUVolumeRayCastMapper_GetUseJitteringMaxValue, METH_VARARGS,
   "GetUseJitteringMaxValue(self) -> int\nC++: virtual vtkTypeBool GetUseJitteringMaxValue()\n\n"},
  {"GetUseJittering", PyvtkGPUVolumeRayCastMapper_GetUseJittering, METH_VARARGS,
   "GetUseJittering(self) -> int\nC++: virtual vtkTypeBool GetUseJittering()\n\n"},
  {"UseJitteringOn", PyvtkGPUVolumeRayCastMapper_UseJitteringOn, METH_VARARGS,
   "UseJitteringOn(self) -> None\nC++: virtual void UseJitteringOn()\n\n"},
  {"UseJitteringOff", PyvtkGPUVolumeRayCastMapper_UseJitteringOff, METH_VARARGS,
   "UseJitteringOff(self) -> None\nC++: virtual void UseJitteringOff()\n\n"},
  {"SetUseDepthPass", PyvtkGPUVolumeRayCastMapper_SetUseDepthPass, METH_VARARGS,
   "SetUseDepthPass(self, _arg:int) -> None\nC++: virtual void SetUseDepthPass(vtkTypeBool _arg)\n\nIf UseDepthPass is on, the mapper will use two passes. In the\nfirst pass, an isocontour depth buffer will be utilized as\nstarting point for ray-casting hence eliminating traversal on\nvoxels that are not going to participate in final rendering.\nUseDepthPass requires reasonable contour values to be set which\ncan be set by calling GetDepthPassContourValues() method and\nusing vtkControurValues API.\n"},
  {"GetUseDepthPassMinValue", PyvtkGPUVolumeRayCastMapper_GetUseDepthPassMinValue, METH_VARARGS,
   "GetUseDepthPassMinValue(self) -> int\nC++: virtual vtkTypeBool GetUseDepthPassMinValue()\n\n"},
  {"GetUseDepthPassMaxValue", PyvtkGPUVolumeRayCastMapper_GetUseDepthPassMaxValue, METH_VARARGS,
   "GetUseDepthPassMaxValue(self) -> int\nC++: virtual vtkTypeBool GetUseDepthPassMaxValue()\n\n"},
  {"GetUseDepthPass", PyvtkGPUVolumeRayCastMapper_GetUseDepthPass, METH_VARARGS,
   "GetUseDepthPass(self) -> int\nC++: virtual vtkTypeBool GetUseDepthPass()\n\n"},
  {"UseDepthPassOn", PyvtkGPUVolumeRayCastMapper_UseDepthPassOn, METH_VARARGS,
   "UseDepthPassOn(self) -> None\nC++: virtual void UseDepthPassOn()\n\n"},
  {"UseDepthPassOff", PyvtkGPUVolumeRayCastMapper_UseDepthPassOff, METH_VARARGS,
   "UseDepthPassOff(self) -> None\nC++: virtual void UseDepthPassOff()\n\n"},
  {"GetDepthPassContourValues", PyvtkGPUVolumeRayCastMapper_GetDepthPassContourValues, METH_VARARGS,
   "GetDepthPassContourValues(self) -> vtkContourValues\nC++: vtkContourValues *GetDepthPassContourValues()\n\nReturn handle to contour values container so that values can be\nset by the application. Contour values will be used only when\nUseDepthPass is on.\n"},
  {"SetSampleDistance", PyvtkGPUVolumeRayCastMapper_SetSampleDistance, METH_VARARGS,
   "SetSampleDistance(self, _arg:float) -> None\nC++: virtual void SetSampleDistance(float _arg)\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering. Initial value is\n1.0.\n"},
  {"GetSampleDistance", PyvtkGPUVolumeRayCastMapper_GetSampleDistance, METH_VARARGS,
   "GetSampleDistance(self) -> float\nC++: virtual float GetSampleDistance()\n\n"},
  {"SetImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetImageSampleDistance, METH_VARARGS,
   "SetImageSampleDistance(self, _arg:float) -> None\nC++: virtual void SetImageSampleDistance(float _arg)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels. This value will be adjusted to meet a desired frame rate\nwhen AutoAdjustSampleDistances is on.\n"},
  {"GetImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMinValue, METH_VARARGS,
   "GetImageSampleDistanceMinValue(self) -> float\nC++: virtual float GetImageSampleDistanceMinValue()\n\n"},
  {"GetImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistanceMaxValue, METH_VARARGS,
   "GetImageSampleDistanceMaxValue(self) -> float\nC++: virtual float GetImageSampleDistanceMaxValue()\n\n"},
  {"GetImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetImageSampleDistance, METH_VARARGS,
   "GetImageSampleDistance(self) -> float\nC++: virtual float GetImageSampleDistance()\n\n"},
  {"SetMinimumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetMinimumImageSampleDistance, METH_VARARGS,
   "SetMinimumImageSampleDistance(self, _arg:float) -> None\nC++: virtual void SetMinimumImageSampleDistance(float _arg)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMinimumImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, METH_VARARGS,
   "GetMinimumImageSampleDistanceMinValue(self) -> float\nC++: virtual float GetMinimumImageSampleDistanceMinValue()\n\n"},
  {"GetMinimumImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, METH_VARARGS,
   "GetMinimumImageSampleDistanceMaxValue(self) -> float\nC++: virtual float GetMinimumImageSampleDistanceMaxValue()\n\n"},
  {"GetMinimumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetMinimumImageSampleDistance, METH_VARARGS,
   "GetMinimumImageSampleDistance(self) -> float\nC++: virtual float GetMinimumImageSampleDistance()\n\n"},
  {"SetMaximumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_SetMaximumImageSampleDistance, METH_VARARGS,
   "SetMaximumImageSampleDistance(self, _arg:float) -> None\nC++: virtual void SetMaximumImageSampleDistance(float _arg)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted.\n"},
  {"GetMaximumImageSampleDistanceMinValue", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, METH_VARARGS,
   "GetMaximumImageSampleDistanceMinValue(self) -> float\nC++: virtual float GetMaximumImageSampleDistanceMinValue()\n\n"},
  {"GetMaximumImageSampleDistanceMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, METH_VARARGS,
   "GetMaximumImageSampleDistanceMaxValue(self) -> float\nC++: virtual float GetMaximumImageSampleDistanceMaxValue()\n\n"},
  {"GetMaximumImageSampleDistance", PyvtkGPUVolumeRayCastMapper_GetMaximumImageSampleDistance, METH_VARARGS,
   "GetMaximumImageSampleDistance(self) -> float\nC++: virtual float GetMaximumImageSampleDistance()\n\n"},
  {"SetFinalColorWindow", PyvtkGPUVolumeRayCastMapper_SetFinalColorWindow, METH_VARARGS,
   "SetFinalColorWindow(self, _arg:float) -> None\nC++: virtual void SetFinalColorWindow(float _arg)\n\nSet/Get the window / level applied to the final color. This\nallows brightness / contrast adjustments on the final image.\nwindow is the width of the window. level is the center of the\nwindow. Initial window value is 1.0 Initial level value is 0.5\nwindow cannot be null but can be negative, this way values will\nbe reversed. |window| can be larger than 1.0 level can be any\nreal value.\n"},
  {"GetFinalColorWindow", PyvtkGPUVolumeRayCastMapper_GetFinalColorWindow, METH_VARARGS,
   "GetFinalColorWindow(self) -> float\nC++: virtual float GetFinalColorWindow()\n\n"},
  {"SetFinalColorLevel", PyvtkGPUVolumeRayCastMapper_SetFinalColorLevel, METH_VARARGS,
   "SetFinalColorLevel(self, _arg:float) -> None\nC++: virtual void SetFinalColorLevel(float _arg)\n\n"},
  {"GetFinalColorLevel", PyvtkGPUVolumeRayCastMapper_GetFinalColorLevel, METH_VARARGS,
   "GetFinalColorLevel(self) -> float\nC++: virtual float GetFinalColorLevel()\n\n"},
  {"SetMaxMemoryInBytes", PyvtkGPUVolumeRayCastMapper_SetMaxMemoryInBytes, METH_VARARGS,
   "SetMaxMemoryInBytes(self, _arg:int) -> None\nC++: virtual void SetMaxMemoryInBytes(vtkIdType _arg)\n\nMaximum size of the 3D texture in GPU memory. Will default to the\nsize computed from the graphics card. Can be adjusted by the\nuser.\n"},
  {"GetMaxMemoryInBytes", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryInBytes, METH_VARARGS,
   "GetMaxMemoryInBytes(self) -> int\nC++: virtual vtkIdType GetMaxMemoryInBytes()\n\n"},
  {"SetMaxMemoryFraction", PyvtkGPUVolumeRayCastMapper_SetMaxMemoryFraction, METH_VARARGS,
   "SetMaxMemoryFraction(self, _arg:float) -> None\nC++: virtual void SetMaxMemoryFraction(float _arg)\n\nMaximum fraction of the MaxMemoryInBytes that should be used to\nhold the texture. Valid values are 0.1 to 1.0.\n"},
  {"GetMaxMemoryFractionMinValue", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMinValue, METH_VARARGS,
   "GetMaxMemoryFractionMinValue(self) -> float\nC++: virtual float GetMaxMemoryFractionMinValue()\n\n"},
  {"GetMaxMemoryFractionMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFractionMaxValue, METH_VARARGS,
   "GetMaxMemoryFractionMaxValue(self) -> float\nC++: virtual float GetMaxMemoryFractionMaxValue()\n\n"},
  {"GetMaxMemoryFraction", PyvtkGPUVolumeRayCastMapper_GetMaxMemoryFraction, METH_VARARGS,
   "GetMaxMemoryFraction(self) -> float\nC++: virtual float GetMaxMemoryFraction()\n\n"},
  {"SetReportProgress", PyvtkGPUVolumeRayCastMapper_SetReportProgress, METH_VARARGS,
   "SetReportProgress(self, _arg:bool) -> None\nC++: virtual void SetReportProgress(bool _arg)\n\nTells if the mapper will report intermediate progress. Initial\nvalue is true. As the progress works with a GL blocking call\n(glFinish()), this can be useful for huge dataset but can slow\ndown rendering of small dataset. It should be set to true for big\ndataset or complex shading and streaming but to false for small\ndatasets.\n"},
  {"GetReportProgress", PyvtkGPUVolumeRayCastMapper_GetReportProgress, METH_VARARGS,
   "GetReportProgress(self) -> bool\nC++: virtual bool GetReportProgress()\n\n"},
  {"IsRenderSupported", PyvtkGPUVolumeRayCastMapper_IsRenderSupported, METH_VARARGS,
   "IsRenderSupported(self, window:vtkRenderWindow,\n    property:vtkVolumeProperty) -> int\nC++: virtual int IsRenderSupported(vtkRenderWindow *window,\n    vtkVolumeProperty *property)\n\nBased on hardware and properties, we may or may not be able to\nrender using 3D texture mapping. This indicates if 3D texture\nmapping is supported by the hardware, and if the other extensions\nnecessary to support the specific properties are available.\n"},
  {"CreateCanonicalView", PyvtkGPUVolumeRayCastMapper_CreateCanonicalView, METH_VARARGS,
   "CreateCanonicalView(self, ren:vtkRenderer, volume:vtkVolume,\n    image:vtkImageData, blend_mode:int, viewDirection:[float,\n    float, float], viewUp:[float, float, float]) -> None\nC++: void CreateCanonicalView(vtkRenderer *ren, vtkVolume *volume,\n     vtkImageData *image, int blend_mode, double viewDirection[3],\n     double viewUp[3])\n\n"},
  {"SetMaskInput", PyvtkGPUVolumeRayCastMapper_SetMaskInput, METH_VARARGS,
   "SetMaskInput(self, mask:vtkImageData) -> None\nC++: void SetMaskInput(vtkImageData *mask)\n\nOptionally, set a mask input. This mask may be a binary mask or a\nlabel map. This must be specified via SetMaskType.\n\n* If the mask is a binary mask, the volume rendering is confined\n  to regions\n* within the binary mask. The binary mask is assumed to have a\n  datatype of\n* UCHAR and values of 255 (inside) and 0 (outside).\n\n* The mask may also be a label map. The label map must have a\n  datatype of\n* UCHAR i.e. it can have upto 256 labels. The label 0 is reserved\nas a\n* special label. In voxels with label value of 0, the default\n  transfer\n* functions supplied by vtkVolumeProperty are used.\n*\n* For voxels with a label values greater than 0, the color\n  transfer functions\n* supplied using vtkVolumeProperty's label API are used.\n*\n* For voxels with a label value greater than 0, the color\n  transfer function\n* is blended with the default color transfer function, with the\n  blending\n* weight determined by MaskBlendFactor.\n"},
  {"GetMaskInput", PyvtkGPUVolumeRayCastMapper_GetMaskInput, METH_VARARGS,
   "GetMaskInput(self) -> vtkImageData\nC++: virtual vtkImageData *GetMaskInput()\n\n"},
  {"SetMaskType", PyvtkGPUVolumeRayCastMapper_SetMaskType, METH_VARARGS,
   "SetMaskType(self, _arg:int) -> None\nC++: virtual void SetMaskType(int _arg)\n\nSet the mask type, if mask is to be used. See documentation for\nSetMaskInput(). The default is a LabelMapMaskType.\n"},
  {"GetMaskType", PyvtkGPUVolumeRayCastMapper_GetMaskType, METH_VARARGS,
   "GetMaskType(self) -> int\nC++: virtual int GetMaskType()\n\n"},
  {"SetMaskTypeToBinary", PyvtkGPUVolumeRayCastMapper_SetMaskTypeToBinary, METH_VARARGS,
   "SetMaskTypeToBinary(self) -> None\nC++: void SetMaskTypeToBinary()\n\n"},
  {"SetMaskTypeToLabelMap", PyvtkGPUVolumeRayCastMapper_SetMaskTypeToLabelMap, METH_VARARGS,
   "SetMaskTypeToLabelMap(self) -> None\nC++: void SetMaskTypeToLabelMap()\n\n"},
  {"SetMaskBlendFactor", PyvtkGPUVolumeRayCastMapper_SetMaskBlendFactor, METH_VARARGS,
   "SetMaskBlendFactor(self, _arg:float) -> None\nC++: virtual void SetMaskBlendFactor(float _arg)\n\nTells how much mask color transfer function is used compared to\nthe standard color transfer function when the mask is true. This\nis relevant only for the label map mask. 0.0 means only standard\ncolor transfer function. 1.0 means only mask color transfer\nfunction. The default value is 1.0.\n"},
  {"GetMaskBlendFactorMinValue", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMinValue, METH_VARARGS,
   "GetMaskBlendFactorMinValue(self) -> float\nC++: virtual float GetMaskBlendFactorMinValue()\n\n"},
  {"GetMaskBlendFactorMaxValue", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactorMaxValue, METH_VARARGS,
   "GetMaskBlendFactorMaxValue(self) -> float\nC++: virtual float GetMaskBlendFactorMaxValue()\n\n"},
  {"GetMaskBlendFactor", PyvtkGPUVolumeRayCastMapper_GetMaskBlendFactor, METH_VARARGS,
   "GetMaskBlendFactor(self) -> float\nC++: virtual float GetMaskBlendFactor()\n\n"},
  {"SetGlobalIlluminationReach", PyvtkGPUVolumeRayCastMapper_SetGlobalIlluminationReach, METH_VARARGS,
   "SetGlobalIlluminationReach(self, _arg:float) -> None\nC++: virtual void SetGlobalIlluminationReach(float _arg)\n\nThis parameter acts as a balance between localness and globalness\nof shadows. A value of 0.0 will be faster, but we'll only capture\nlocal shadows. A value of 1.0 will be slower, but we'll capture\nall shadows. The default value is 0.0.\n"},
  {"GetGlobalIlluminationReachMinValue", PyvtkGPUVolumeRayCastMapper_GetGlobalIlluminationReachMinValue, METH_VARARGS,
   "GetGlobalIlluminationReachMinValue(self) -> float\nC++: virtual float GetGlobalIlluminationReachMinValue()\n\n"},
  {"GetGlobalIlluminationReachMaxValue", PyvtkGPUVolumeRayCastMapper_GetGlobalIlluminationReachMaxValue, METH_VARARGS,
   "GetGlobalIlluminationReachMaxValue(self) -> float\nC++: virtual float GetGlobalIlluminationReachMaxValue()\n\n"},
  {"GetGlobalIlluminationReach", PyvtkGPUVolumeRayCastMapper_GetGlobalIlluminationReach, METH_VARARGS,
   "GetGlobalIlluminationReach(self) -> float\nC++: virtual float GetGlobalIlluminationReach()\n\n"},
  {"SetVolumetricScatteringBlending", PyvtkGPUVolumeRayCastMapper_SetVolumetricScatteringBlending, METH_VARARGS,
   "SetVolumetricScatteringBlending(self, _arg:float) -> None\nC++: virtual void SetVolumetricScatteringBlending(float _arg)\n\nThis parameter controls the blending between surfacic\napproximation and volumetric multi-scattering. It is only\nconsidered when Shade is enabled. A value of 0.0 means that no\nscattered rays will be cast, no volumetric shadows A value of 1.0\nmeans that the shader will smartly blend between the two models A\nvalue of 2.0 means that the shader only uses the volumetric\nscattering model. The blending is not uniform, and is done in the\nfollowing way: a value in [0, 1] biases the shader to choose\nbetween the two models, and a value in [1, 2] forces the shader\nto use more the volumetric model.\n"},
  {"GetVolumetricScatteringBlendingMinValue", PyvtkGPUVolumeRayCastMapper_GetVolumetricScatteringBlendingMinValue, METH_VARARGS,
   "GetVolumetricScatteringBlendingMinValue(self) -> float\nC++: virtual float GetVolumetricScatteringBlendingMinValue()\n\n"},
  {"GetVolumetricScatteringBlendingMaxValue", PyvtkGPUVolumeRayCastMapper_GetVolumetricScatteringBlendingMaxValue, METH_VARARGS,
   "GetVolumetricScatteringBlendingMaxValue(self) -> float\nC++: virtual float GetVolumetricScatteringBlendingMaxValue()\n\n"},
  {"GetVolumetricScatteringBlending", PyvtkGPUVolumeRayCastMapper_GetVolumetricScatteringBlending, METH_VARARGS,
   "GetVolumetricScatteringBlending(self) -> float\nC++: virtual float GetVolumetricScatteringBlending()\n\n"},
  {"SetRenderToImage", PyvtkGPUVolumeRayCastMapper_SetRenderToImage, METH_VARARGS,
   "SetRenderToImage(self, _arg:int) -> None\nC++: virtual void SetRenderToImage(vtkTypeBool _arg)\n\nEnable or disable setting output of volume rendering to be color\nand depth textures. By default this is set to 0 (off). It should\nbe noted that it is possible that underlying API specific mapper\nmay not supoport RenderToImage mode.\n\\warning\n\\li This method ignores any other volumes / props in the scene.\n\\li This method does not respect the general attributes of the\nscene i.e. background color, etc. It always produces a color\nimage that has a transparent white background outside the bounds\nof the volume.\n\n* \\sa GetDepthImage(), GetColorImage()\n"},
  {"GetRenderToImage", PyvtkGPUVolumeRayCastMapper_GetRenderToImage, METH_VARARGS,
   "GetRenderToImage(self) -> int\nC++: virtual vtkTypeBool GetRenderToImage()\n\n"},
  {"RenderToImageOn", PyvtkGPUVolumeRayCastMapper_RenderToImageOn, METH_VARARGS,
   "RenderToImageOn(self) -> None\nC++: virtual void RenderToImageOn()\n\n"},
  {"RenderToImageOff", PyvtkGPUVolumeRayCastMapper_RenderToImageOff, METH_VARARGS,
   "RenderToImageOff(self) -> None\nC++: virtual void RenderToImageOff()\n\n"},
  {"SetDepthImageScalarType", PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarType, METH_VARARGS,
   "SetDepthImageScalarType(self, _arg:int) -> None\nC++: virtual void SetDepthImageScalarType(int _arg)\n\nSet/Get the scalar type of the depth texture in RenderToImage\nmode. By default, the type if VTK_FLOAT.\n\\sa SetRenderToImage()\n"},
  {"GetDepthImageScalarType", PyvtkGPUVolumeRayCastMapper_GetDepthImageScalarType, METH_VARARGS,
   "GetDepthImageScalarType(self) -> int\nC++: virtual int GetDepthImageScalarType()\n\n"},
  {"SetDepthImageScalarTypeToUnsignedChar", PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToUnsignedChar, METH_VARARGS,
   "SetDepthImageScalarTypeToUnsignedChar(self) -> None\nC++: void SetDepthImageScalarTypeToUnsignedChar()\n\n"},
  {"SetDepthImageScalarTypeToUnsignedShort", PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToUnsignedShort, METH_VARARGS,
   "SetDepthImageScalarTypeToUnsignedShort(self) -> None\nC++: void SetDepthImageScalarTypeToUnsignedShort()\n\n"},
  {"SetDepthImageScalarTypeToFloat", PyvtkGPUVolumeRayCastMapper_SetDepthImageScalarTypeToFloat, METH_VARARGS,
   "SetDepthImageScalarTypeToFloat(self) -> None\nC++: void SetDepthImageScalarTypeToFloat()\n\n"},
  {"SetClampDepthToBackface", PyvtkGPUVolumeRayCastMapper_SetClampDepthToBackface, METH_VARARGS,
   "SetClampDepthToBackface(self, _arg:int) -> None\nC++: virtual void SetClampDepthToBackface(vtkTypeBool _arg)\n\nEnable or disable clamping the depth value of the fully\ntransparent voxel to the depth of the back-face of the volume.\nThis parameter is used when RenderToImage mode is enabled. When\nClampDepthToBackFace is false, the fully transparent voxels will\nhave a value of 1.0 in the depth image. When this is true, the\nfully transparent voxels will have the depth value of the face at\nwhich the ray exits the volume. By default, this is set to 0\n(off).\n\\sa SetRenderToImage(), GetDepthImage()\n"},
  {"GetClampDepthToBackface", PyvtkGPUVolumeRayCastMapper_GetClampDepthToBackface, METH_VARARGS,
   "GetClampDepthToBackface(self) -> int\nC++: virtual vtkTypeBool GetClampDepthToBackface()\n\n"},
  {"ClampDepthToBackfaceOn", PyvtkGPUVolumeRayCastMapper_ClampDepthToBackfaceOn, METH_VARARGS,
   "ClampDepthToBackfaceOn(self) -> None\nC++: virtual void ClampDepthToBackfaceOn()\n\n"},
  {"ClampDepthToBackfaceOff", PyvtkGPUVolumeRayCastMapper_ClampDepthToBackfaceOff, METH_VARARGS,
   "ClampDepthToBackfaceOff(self) -> None\nC++: virtual void ClampDepthToBackfaceOff()\n\n"},
  {"GetDepthImage", PyvtkGPUVolumeRayCastMapper_GetDepthImage, METH_VARARGS,
   "GetDepthImage(self, __a:vtkImageData) -> None\nC++: virtual void GetDepthImage(vtkImageData *)\n\nLow level API to export the depth texture as vtkImageData in\nRenderToImage mode. Should be implemented by the graphics API\nspecific mapper (GL or other).\n\\sa SetRenderToImage()\n"},
  {"GetColorImage", PyvtkGPUVolumeRayCastMapper_GetColorImage, METH_VARARGS,
   "GetColorImage(self, __a:vtkImageData) -> None\nC++: virtual void GetColorImage(vtkImageData *)\n\nLow level API to export the color texture as vtkImageData in\nRenderToImage mode. Should be implemented by the graphics API\nspecific mapper (GL or other).\n\\sa SetRenderToImage()\n"},
  {"Render", PyvtkGPUVolumeRayCastMapper_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:vtkVolume) -> None\nC++: void Render(vtkRenderer *, vtkVolume *) override;\n\nInitialize rendering for this volume.\n\\warning INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {"GPURender", PyvtkGPUVolumeRayCastMapper_GPURender, METH_VARARGS,
   "GPURender(self, __a:vtkRenderer, __b:vtkVolume) -> None\nC++: virtual void GPURender(vtkRenderer *, vtkVolume *)\n\nHandled in the subclass - the actual render method\n\\pre input is up-to-date.\n"},
  {"ReleaseGraphicsResources", PyvtkGPUVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n\\warning INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {"GetReductionRatio", PyvtkGPUVolumeRayCastMapper_GetReductionRatio, METH_VARARGS,
   "GetReductionRatio(self, ratio:[float, float, float]) -> None\nC++: virtual void GetReductionRatio(double ratio[3])\n\nReturn how much the dataset has to be reduced in each dimension\nto fit on the GPU. If the value is 1.0, there is no need to\nreduce the dataset.\n\\pre the calling thread has a current OpenGL context.\n\\pre mapper_supported:\n    IsRenderSupported(renderer->GetRenderWindow(),0)\nThe computation is based on hardware limits (3D texture indexable\nsize) and MaxMemoryInBytes.\n\\post valid_i_ratio: ratio[0]>0 && ratio[0]<=1.0\n\\post valid_j_ratio: ratio[1]>0 && ratio[1]<=1.0\n\\post valid_k_ratio: ratio[2]>0 && ratio[2]<=1.0\n"},
  {"SetColorRangeType", PyvtkGPUVolumeRayCastMapper_SetColorRangeType, METH_VARARGS,
   "SetColorRangeType(self, _arg:int) -> None\nC++: virtual void SetColorRangeType(int _arg)\n\nSet whether to use the scalar range or the native transfer\nfunction range when looking up transfer functions for color and\nopacity values. When the range is set to\nTransferFunctionRange::SCALAR, the function is distributed over\nthe entire scalar range. If it is set to\nTransferFunctionRange::NATIVE, the scalar values outside the\nnative transfer function range will be truncated to native range.\nBy default, the volume scalar range is used.\n\note The native range of the transfer function is the range\nreturned by vtkColorTransferFunction::GetRange() or\nvtkPiecewiseFunction::GetRange().\n\note There is no special API provided for 2D transfer functions\nconsidering that they are set as a pre-generated vtkImageData on\nthis class i.e. the range is already encoded.\n"},
  {"GetColorRangeType", PyvtkGPUVolumeRayCastMapper_GetColorRangeType, METH_VARARGS,
   "GetColorRangeType(self) -> int\nC++: virtual int GetColorRangeType()\n\n"},
  {"SetScalarOpacityRangeType", PyvtkGPUVolumeRayCastMapper_SetScalarOpacityRangeType, METH_VARARGS,
   "SetScalarOpacityRangeType(self, _arg:int) -> None\nC++: virtual void SetScalarOpacityRangeType(int _arg)\n\n"},
  {"GetScalarOpacityRangeType", PyvtkGPUVolumeRayCastMapper_GetScalarOpacityRangeType, METH_VARARGS,
   "GetScalarOpacityRangeType(self) -> int\nC++: virtual int GetScalarOpacityRangeType()\n\n"},
  {"SetGradientOpacityRangeType", PyvtkGPUVolumeRayCastMapper_SetGradientOpacityRangeType, METH_VARARGS,
   "SetGradientOpacityRangeType(self, _arg:int) -> None\nC++: virtual void SetGradientOpacityRangeType(int _arg)\n\n"},
  {"GetGradientOpacityRangeType", PyvtkGPUVolumeRayCastMapper_GetGradientOpacityRangeType, METH_VARARGS,
   "GetGradientOpacityRangeType(self) -> int\nC++: virtual int GetGradientOpacityRangeType()\n\n"},
  {"GetInput", PyvtkGPUVolumeRayCastMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkDataSet\nC++: vtkDataSet *GetInput() override;\n\n"},
  {"RemoveInputConnection", PyvtkGPUVolumeRayCastMapper_RemoveInputConnection, METH_VARARGS,
   "RemoveInputConnection(self, port:int, input:vtkAlgorithmOutput)\n    -> None\nC++: void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input) override;\nRemoveInputConnection(self, port:int, idx:int) -> None\nC++: void RemoveInputConnection(int port, int idx) override;\n\nAdd/Remove input connections. Active and removed ports are cached\nin Ports and RemovedPorts respectively.\n"},
  {"SetInputConnection", PyvtkGPUVolumeRayCastMapper_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, port:int, input:vtkAlgorithmOutput)\n    -> None\nC++: void SetInputConnection(int port, vtkAlgorithmOutput *input)\n    override;\nSetInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\nSet the connection for the given input port index.  Each input\nport of a filter has a specific purpose.  A port may have zero or\nmore connections and the required number is specified by each\nfilter.  Setting the connection with this method removes all\nother connections from the port.  To add more than one connection\nuse AddInputConnection().\n\n* The input for the connection is the output port of another\n* filter, which is obtained with GetOutputPort().  Typical usage\n  is\n\n* filter2->SetInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {"GetInputCount", PyvtkGPUVolumeRayCastMapper_GetInputCount, METH_VARARGS,
   "GetInputCount(self) -> int\nC++: int GetInputCount()\n\nNumber of currently active ports.\n"},
  {"GetTransformedInput", PyvtkGPUVolumeRayCastMapper_GetTransformedInput, METH_VARARGS,
   "GetTransformedInput(self, port:int=0) -> vtkDataSet\nC++: vtkDataSet *GetTransformedInput(int port=0)\n\n"},
  {"GetBoundsFromPort", PyvtkGPUVolumeRayCastMapper_GetBoundsFromPort, METH_VARARGS,
   "GetBoundsFromPort(self, port:int) -> (float, float, float, float,\n    float, float)\nC++: double *GetBoundsFromPort(int port)\n\n"},
  {"SetTransfer2DYAxisArray", PyvtkGPUVolumeRayCastMapper_SetTransfer2DYAxisArray, METH_VARARGS,
   "SetTransfer2DYAxisArray(self, _arg:str) -> None\nC++: virtual void SetTransfer2DYAxisArray(const char *_arg)\n\nSet/Get the transfer 2D Y axis array\n"},
  {"GetTransfer2DYAxisArray", PyvtkGPUVolumeRayCastMapper_GetTransfer2DYAxisArray, METH_VARARGS,
   "GetTransfer2DYAxisArray(self) -> str\nC++: virtual char *GetTransfer2DYAxisArray()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGPUVolumeRayCastMapper_Doc =
  "vtkGPUVolumeRayCastMapper - Ray casting performed on the GPU.\n\n"
  "Superclass: vtkVolumeMapper\n\n"
  "vtkGPUVolumeRayCastMapper is a volume mapper that performs ray\n"
  "casting on the GPU using fragment programs.\n\n"
  "This mapper supports connections in multiple ports of input 0 (port 0\n"
  "being the only required connection). It is up to the concrete\n"
  "implementation whether additional inputs will be used during\n"
  "rendering. This class maintains a list of the currently active input\n"
  "ports (Ports) as well as a list of the ports that have been\n"
  "disconnected (RemovedPorts). RemovedPorts is used the the concrete\n"
  "implementation to clean up internal structures.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGPUVolumeRayCastMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkGPUVolumeRayCastMapper", // tp_name
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
  PyvtkGPUVolumeRayCastMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGPUVolumeRayCastMapper_StaticNew()
{
  return vtkGPUVolumeRayCastMapper::New();
}

PyObject *PyvtkGPUVolumeRayCastMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGPUVolumeRayCastMapper_Type, PyvtkGPUVolumeRayCastMapper_Methods,
    "vtkGPUVolumeRayCastMapper",
 &PyvtkGPUVolumeRayCastMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkVolumeMapper_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGPUVolumeRayCastMapper_TFRangeType_Type);
  PyVTKEnum_Add(&PyvtkGPUVolumeRayCastMapper_TFRangeType_Type, "vtkGPUVolumeRayCastMapper.TFRangeType");

  o = (PyObject *)&PyvtkGPUVolumeRayCastMapper_TFRangeType_Type;
  if (PyDict_SetItemString(d, "TFRangeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "BinaryMaskType", vtkGPUVolumeRayCastMapper::BinaryMaskType },
        { "LabelMapMaskType", vtkGPUVolumeRayCastMapper::LabelMapMaskType },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkGPUVolumeRayCastMapper::TFRangeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "SCALAR", vtkGPUVolumeRayCastMapper::SCALAR },
        { "NATIVE", vtkGPUVolumeRayCastMapper::NATIVE },
      };

    o = PyvtkGPUVolumeRayCastMapper_TFRangeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGPUVolumeRayCastMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGPUVolumeRayCastMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGPUVolumeRayCastMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

