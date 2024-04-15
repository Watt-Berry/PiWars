// python wrapper for vtkSmartVolumeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartVolumeMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSmartVolumeMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkSmartVolumeMapper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSmartVolumeMapper_VectorModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkSmartVolumeMapper.VectorModeType", // tp_name
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
PyObject *PyvtkSmartVolumeMapper_VectorModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSmartVolumeMapper_VectorModeType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSmartVolumeMapper_LowResModeType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkSmartVolumeMapper.LowResModeType", // tp_name
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
PyObject *PyvtkSmartVolumeMapper_LowResModeType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSmartVolumeMapper_LowResModeType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSmartVolumeMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSmartVolumeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSmartVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSmartVolumeMapper *tempr = vtkSmartVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmartVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSmartVolumeMapper::NewInstance());

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
PyvtkSmartVolumeMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSmartVolumeMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSmartVolumeMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetFinalColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetFinalColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorWindow() :
      op->vtkSmartVolumeMapper::GetFinalColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetFinalColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetFinalColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFinalColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFinalColorLevel() :
      op->vtkSmartVolumeMapper::GetFinalColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderMode(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToDefault();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToRayCast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToRayCast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToRayCast();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToRayCast();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToGPU(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToGPU");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToGPU();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToGPU();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetRequestedRenderModeToOSPRay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderModeToOSPRay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderModeToOSPRay();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetRequestedRenderModeToOSPRay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRequestedRenderMode() :
      op->vtkSmartVolumeMapper::GetRequestedRenderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetLastUsedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUsedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastUsedRenderMode() :
      op->vtkSmartVolumeMapper::GetLastUsedRenderMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetMaxMemoryInBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxMemoryInBytes() :
      op->vtkSmartVolumeMapper::GetMaxMemoryInBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetMaxMemoryFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMinValue() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFractionMaxValue() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetMaxMemoryFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxMemoryFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaxMemoryFraction() :
      op->vtkSmartVolumeMapper::GetMaxMemoryFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationMode(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInterpolationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationModeMinValue() :
      op->vtkSmartVolumeMapper::GetInterpolationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationModeMaxValue() :
      op->vtkSmartVolumeMapper::GetInterpolationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInterpolationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMode() :
      op->vtkSmartVolumeMapper::GetInterpolationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToNearestNeighbor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToNearestNeighbor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToNearestNeighbor();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInterpolationModeToNearestNeighbor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToLinear();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInterpolationModeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInterpolationModeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationModeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationModeToCubic();
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInterpolationModeToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_CreateCanonicalView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCanonicalView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  vtkVolume *temp2 = nullptr;
  vtkImageData *temp3 = nullptr;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkVolume") &&
      ap.GetVTKObject(temp3, "vtkImageData") &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    if (ap.IsBound())
    {
      op->CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkSmartVolumeMapper::CreateCanonicalView(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetUseJittering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseJittering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetUseJittering(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetUseJitteringMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJitteringMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJitteringMinValue() :
      op->vtkSmartVolumeMapper::GetUseJitteringMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetUseJitteringMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJitteringMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJitteringMaxValue() :
      op->vtkSmartVolumeMapper::GetUseJitteringMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetUseJittering(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseJittering");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseJittering() :
      op->vtkSmartVolumeMapper::GetUseJittering());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_UseJitteringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseJitteringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseJitteringOn();
    }
    else
    {
      op->vtkSmartVolumeMapper::UseJitteringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_UseJitteringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseJitteringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseJitteringOff();
    }
    else
    {
      op->vtkSmartVolumeMapper::UseJitteringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInteractiveUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractiveUpdateRate(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInteractiveUpdateRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRateMinValue() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRateMaxValue() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveUpdateRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveUpdateRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteractiveUpdateRate() :
      op->vtkSmartVolumeMapper::GetInteractiveUpdateRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetInteractiveAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractiveAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractiveAdjustSampleDistances(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetInteractiveAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveAdjustSampleDistancesMinValue() :
      op->vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveAdjustSampleDistancesMaxValue() :
      op->vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractiveAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractiveAdjustSampleDistances() :
      op->vtkSmartVolumeMapper::GetInteractiveAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_InteractiveAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkSmartVolumeMapper::InteractiveAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_InteractiveAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkSmartVolumeMapper::InteractiveAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetAutoAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkSmartVolumeMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkSmartVolumeMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkSmartVolumeMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkSmartVolumeMapper::AutoAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkSmartVolumeMapper::AutoAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSampleDistance() :
      op->vtkSmartVolumeMapper::GetSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetGlobalIlluminationReach(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIlluminationReach");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetGlobalIlluminationReach(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetGlobalIlluminationReachMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIlluminationReachMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGlobalIlluminationReachMinValue() :
      op->vtkSmartVolumeMapper::GetGlobalIlluminationReachMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetGlobalIlluminationReachMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIlluminationReachMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGlobalIlluminationReachMaxValue() :
      op->vtkSmartVolumeMapper::GetGlobalIlluminationReachMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetGlobalIlluminationReach(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIlluminationReach");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGlobalIlluminationReach() :
      op->vtkSmartVolumeMapper::GetGlobalIlluminationReach());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetVolumetricScatteringBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumetricScatteringBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetVolumetricScatteringBlending(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVolumetricScatteringBlendingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricScatteringBlendingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVolumetricScatteringBlendingMinValue() :
      op->vtkSmartVolumeMapper::GetVolumetricScatteringBlendingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVolumetricScatteringBlendingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricScatteringBlendingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVolumetricScatteringBlendingMaxValue() :
      op->vtkSmartVolumeMapper::GetVolumetricScatteringBlendingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVolumetricScatteringBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricScatteringBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVolumetricScatteringBlending() :
      op->vtkSmartVolumeMapper::GetVolumetricScatteringBlending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorMode(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetVectorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkSmartVolumeMapper::GetVectorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponent(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetVectorComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVectorComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMinValue() :
      op->vtkSmartVolumeMapper::GetVectorComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVectorComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponentMaxValue() :
      op->vtkSmartVolumeMapper::GetVectorComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponent() :
      op->vtkSmartVolumeMapper::GetVectorComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetTransfer2DYAxisArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransfer2DYAxisArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

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
      op->vtkSmartVolumeMapper::SetTransfer2DYAxisArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetTransfer2DYAxisArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransfer2DYAxisArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTransfer2DYAxisArray() :
      op->vtkSmartVolumeMapper::GetTransfer2DYAxisArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_SetLowResMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowResMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowResMode(temp0);
    }
    else
    {
      op->vtkSmartVolumeMapper::SetLowResMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmartVolumeMapper_GetLowResMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowResMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmartVolumeMapper *op = static_cast<vtkSmartVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLowResMode() :
      op->vtkSmartVolumeMapper::GetLowResMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSmartVolumeMapper_Methods[] = {
  {"IsTypeOf", PyvtkSmartVolumeMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSmartVolumeMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSmartVolumeMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSmartVolumeMapper\nC++: static vtkSmartVolumeMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSmartVolumeMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSmartVolumeMapper\nC++: vtkSmartVolumeMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSmartVolumeMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSmartVolumeMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFinalColorWindow", PyvtkSmartVolumeMapper_SetFinalColorWindow, METH_VARARGS,
   "SetFinalColorWindow(self, _arg:float) -> None\nC++: virtual void SetFinalColorWindow(float _arg)\n\nSet the final color window. This controls the contrast of the\nimage. The default value is 1.0. The Window can be negative (this\ncauses a \"negative\" effect on the image) Although Window can be\nset to 0.0, any value less than 0.00001 and greater than or equal\nto 0.0 will be set to 0.00001, and any value greater than\n-0.00001 but less than or equal to 0.0 will be set to -0.00001.\nInitial value is 1.0.\n"},
  {"GetFinalColorWindow", PyvtkSmartVolumeMapper_GetFinalColorWindow, METH_VARARGS,
   "GetFinalColorWindow(self) -> float\nC++: virtual float GetFinalColorWindow()\n\nGet the final color window. Initial value is 1.0.\n"},
  {"SetFinalColorLevel", PyvtkSmartVolumeMapper_SetFinalColorLevel, METH_VARARGS,
   "SetFinalColorLevel(self, _arg:float) -> None\nC++: virtual void SetFinalColorLevel(float _arg)\n\nSet the final color level. The level controls the brightness of\nthe image. The final color window will be centered at the final\ncolor level, and together represent a linear remapping of color\nvalues. The default value for the level is 0.5.\n"},
  {"GetFinalColorLevel", PyvtkSmartVolumeMapper_GetFinalColorLevel, METH_VARARGS,
   "GetFinalColorLevel(self) -> float\nC++: virtual float GetFinalColorLevel()\n\nGet the final color level.\n"},
  {"SetRequestedRenderMode", PyvtkSmartVolumeMapper_SetRequestedRenderMode, METH_VARARGS,
   "SetRequestedRenderMode(self, mode:int) -> None\nC++: void SetRequestedRenderMode(int mode)\n\nSet the requested render mode. The default is\nvtkSmartVolumeMapper::DefaultRenderMode.\n"},
  {"SetRequestedRenderModeToDefault", PyvtkSmartVolumeMapper_SetRequestedRenderModeToDefault, METH_VARARGS,
   "SetRequestedRenderModeToDefault(self) -> None\nC++: void SetRequestedRenderModeToDefault()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::DefaultRenderMode. This is the best option\nfor an application that must adapt to different data types,\nhardware, and rendering parameters.\n"},
  {"SetRequestedRenderModeToRayCast", PyvtkSmartVolumeMapper_SetRequestedRenderModeToRayCast, METH_VARARGS,
   "SetRequestedRenderModeToRayCast(self) -> None\nC++: void SetRequestedRenderModeToRayCast()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::RayCastRenderMode. This option will use\nsoftware rendering exclusively. This is a good option if you know\nthere is no hardware acceleration.\n"},
  {"SetRequestedRenderModeToGPU", PyvtkSmartVolumeMapper_SetRequestedRenderModeToGPU, METH_VARARGS,
   "SetRequestedRenderModeToGPU(self) -> None\nC++: void SetRequestedRenderModeToGPU()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::GPURenderMode. This option will use\nhardware accelerated rendering exclusively. This is a good option\nif you know there is hardware acceleration.\n"},
  {"SetRequestedRenderModeToOSPRay", PyvtkSmartVolumeMapper_SetRequestedRenderModeToOSPRay, METH_VARARGS,
   "SetRequestedRenderModeToOSPRay(self) -> None\nC++: void SetRequestedRenderModeToOSPRay()\n\nSet the requested render mode to\nvtkSmartVolumeMapper::OSPRayRenderMode. This option will use\nintel OSPRay to do software rendering exclusively.\n"},
  {"GetRequestedRenderMode", PyvtkSmartVolumeMapper_GetRequestedRenderMode, METH_VARARGS,
   "GetRequestedRenderMode(self) -> int\nC++: virtual int GetRequestedRenderMode()\n\nGet the requested render mode.\n"},
  {"GetLastUsedRenderMode", PyvtkSmartVolumeMapper_GetLastUsedRenderMode, METH_VARARGS,
   "GetLastUsedRenderMode(self) -> int\nC++: int GetLastUsedRenderMode()\n\nThis will return the render mode used during the previous call to\nRender().\n"},
  {"SetMaxMemoryInBytes", PyvtkSmartVolumeMapper_SetMaxMemoryInBytes, METH_VARARGS,
   "SetMaxMemoryInBytes(self, _arg:int) -> None\nC++: virtual void SetMaxMemoryInBytes(vtkIdType _arg)\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nsize of the 3D texture in GPU memory. Will default to the size\ncomputed from the graphics card. Can be adjusted by the user.\nUseful if the automatic detection is defective or missing.\n"},
  {"GetMaxMemoryInBytes", PyvtkSmartVolumeMapper_GetMaxMemoryInBytes, METH_VARARGS,
   "GetMaxMemoryInBytes(self) -> int\nC++: virtual vtkIdType GetMaxMemoryInBytes()\n\n"},
  {"SetMaxMemoryFraction", PyvtkSmartVolumeMapper_SetMaxMemoryFraction, METH_VARARGS,
   "SetMaxMemoryFraction(self, _arg:float) -> None\nC++: virtual void SetMaxMemoryFraction(float _arg)\n\nValue passed to the GPU mapper. Ignored by other mappers. Maximum\nfraction of the MaxMemoryInBytes that should be used to hold the\ntexture. Valid values are 0.1 to 1.0.\n"},
  {"GetMaxMemoryFractionMinValue", PyvtkSmartVolumeMapper_GetMaxMemoryFractionMinValue, METH_VARARGS,
   "GetMaxMemoryFractionMinValue(self) -> float\nC++: virtual float GetMaxMemoryFractionMinValue()\n\n"},
  {"GetMaxMemoryFractionMaxValue", PyvtkSmartVolumeMapper_GetMaxMemoryFractionMaxValue, METH_VARARGS,
   "GetMaxMemoryFractionMaxValue(self) -> float\nC++: virtual float GetMaxMemoryFractionMaxValue()\n\n"},
  {"GetMaxMemoryFraction", PyvtkSmartVolumeMapper_GetMaxMemoryFraction, METH_VARARGS,
   "GetMaxMemoryFraction(self) -> float\nC++: virtual float GetMaxMemoryFraction()\n\n"},
  {"SetInterpolationMode", PyvtkSmartVolumeMapper_SetInterpolationMode, METH_VARARGS,
   "SetInterpolationMode(self, _arg:int) -> None\nC++: virtual void SetInterpolationMode(int _arg)\n\nSet interpolation mode for downsampling (lowres GPU) (initial\nvalue: cubic).\n"},
  {"GetInterpolationModeMinValue", PyvtkSmartVolumeMapper_GetInterpolationModeMinValue, METH_VARARGS,
   "GetInterpolationModeMinValue(self) -> int\nC++: virtual int GetInterpolationModeMinValue()\n\n"},
  {"GetInterpolationModeMaxValue", PyvtkSmartVolumeMapper_GetInterpolationModeMaxValue, METH_VARARGS,
   "GetInterpolationModeMaxValue(self) -> int\nC++: virtual int GetInterpolationModeMaxValue()\n\n"},
  {"GetInterpolationMode", PyvtkSmartVolumeMapper_GetInterpolationMode, METH_VARARGS,
   "GetInterpolationMode(self) -> int\nC++: virtual int GetInterpolationMode()\n\n"},
  {"SetInterpolationModeToNearestNeighbor", PyvtkSmartVolumeMapper_SetInterpolationModeToNearestNeighbor, METH_VARARGS,
   "SetInterpolationModeToNearestNeighbor(self) -> None\nC++: void SetInterpolationModeToNearestNeighbor()\n\n"},
  {"SetInterpolationModeToLinear", PyvtkSmartVolumeMapper_SetInterpolationModeToLinear, METH_VARARGS,
   "SetInterpolationModeToLinear(self) -> None\nC++: void SetInterpolationModeToLinear()\n\n"},
  {"SetInterpolationModeToCubic", PyvtkSmartVolumeMapper_SetInterpolationModeToCubic, METH_VARARGS,
   "SetInterpolationModeToCubic(self) -> None\nC++: void SetInterpolationModeToCubic()\n\n"},
  {"CreateCanonicalView", PyvtkSmartVolumeMapper_CreateCanonicalView, METH_VARARGS,
   "CreateCanonicalView(self, ren:vtkRenderer, volume:vtkVolume,\n    volume2:vtkVolume, image:vtkImageData, blend_mode:int,\n    viewDirection:[float, float, float], viewUp:[float, float,\n    float]) -> None\nC++: void CreateCanonicalView(vtkRenderer *ren, vtkVolume *volume,\n     vtkVolume *volume2, vtkImageData *image, int blend_mode,\n    double viewDirection[3], double viewUp[3])\n\nThis method can be used to render a representative view of the\ninput data into the supplied image given the supplied blending\nmode, view direction, and view up vector.\n"},
  {"SetUseJittering", PyvtkSmartVolumeMapper_SetUseJittering, METH_VARARGS,
   "SetUseJittering(self, _arg:int) -> None\nC++: virtual void SetUseJittering(vtkTypeBool _arg)\n\nIf UseJittering is on, each ray traversal direction will be\nperturbed slightly using a noise-texture to get rid of wood-grain\neffect. This is only used by the GPU mapper.\n"},
  {"GetUseJitteringMinValue", PyvtkSmartVolumeMapper_GetUseJitteringMinValue, METH_VARARGS,
   "GetUseJitteringMinValue(self) -> int\nC++: virtual vtkTypeBool GetUseJitteringMinValue()\n\n"},
  {"GetUseJitteringMaxValue", PyvtkSmartVolumeMapper_GetUseJitteringMaxValue, METH_VARARGS,
   "GetUseJitteringMaxValue(self) -> int\nC++: virtual vtkTypeBool GetUseJitteringMaxValue()\n\n"},
  {"GetUseJittering", PyvtkSmartVolumeMapper_GetUseJittering, METH_VARARGS,
   "GetUseJittering(self) -> int\nC++: virtual vtkTypeBool GetUseJittering()\n\n"},
  {"UseJitteringOn", PyvtkSmartVolumeMapper_UseJitteringOn, METH_VARARGS,
   "UseJitteringOn(self) -> None\nC++: virtual void UseJitteringOn()\n\n"},
  {"UseJitteringOff", PyvtkSmartVolumeMapper_UseJitteringOff, METH_VARARGS,
   "UseJitteringOff(self) -> None\nC++: virtual void UseJitteringOff()\n\n"},
  {"SetInteractiveUpdateRate", PyvtkSmartVolumeMapper_SetInteractiveUpdateRate, METH_VARARGS,
   "SetInteractiveUpdateRate(self, _arg:float) -> None\nC++: virtual void SetInteractiveUpdateRate(double _arg)\n\nIf the DesiredUpdateRate of the vtkRenderWindow that caused the\nRender falls at or above this rate, the render is considered\ninteractive and the mapper may be adjusted (depending on the\nrender mode). Initial value is 1.0.\n"},
  {"GetInteractiveUpdateRateMinValue", PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMinValue, METH_VARARGS,
   "GetInteractiveUpdateRateMinValue(self) -> float\nC++: virtual double GetInteractiveUpdateRateMinValue()\n\n"},
  {"GetInteractiveUpdateRateMaxValue", PyvtkSmartVolumeMapper_GetInteractiveUpdateRateMaxValue, METH_VARARGS,
   "GetInteractiveUpdateRateMaxValue(self) -> float\nC++: virtual double GetInteractiveUpdateRateMaxValue()\n\n"},
  {"GetInteractiveUpdateRate", PyvtkSmartVolumeMapper_GetInteractiveUpdateRate, METH_VARARGS,
   "GetInteractiveUpdateRate(self) -> float\nC++: virtual double GetInteractiveUpdateRate()\n\nGet the update rate at or above which this is considered an\ninteractive render. Initial value is 1.0.\n"},
  {"SetInteractiveAdjustSampleDistances", PyvtkSmartVolumeMapper_SetInteractiveAdjustSampleDistances, METH_VARARGS,
   "SetInteractiveAdjustSampleDistances(self, _arg:int) -> None\nC++: virtual void SetInteractiveAdjustSampleDistances(\n    vtkTypeBool _arg)\n\nIf the InteractiveAdjustSampleDistances flag is enabled,\nvtkSmartVolumeMapper interactively sets and resets the\nAutoAdjustSampleDistances flag on the internal volume mapper.\nThis flag along with InteractiveUpdateRate is useful to adjust\nvolume mapper sample distance based on whether the render is\ninteractive or still. By default,\nInteractiveAdjustSampleDistances is enabled.\n"},
  {"GetInteractiveAdjustSampleDistancesMinValue", PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistancesMinValue, METH_VARARGS,
   "GetInteractiveAdjustSampleDistancesMinValue(self) -> int\nC++: virtual vtkTypeBool GetInteractiveAdjustSampleDistancesMinValue(\n    )\n\n"},
  {"GetInteractiveAdjustSampleDistancesMaxValue", PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistancesMaxValue, METH_VARARGS,
   "GetInteractiveAdjustSampleDistancesMaxValue(self) -> int\nC++: virtual vtkTypeBool GetInteractiveAdjustSampleDistancesMaxValue(\n    )\n\n"},
  {"GetInteractiveAdjustSampleDistances", PyvtkSmartVolumeMapper_GetInteractiveAdjustSampleDistances, METH_VARARGS,
   "GetInteractiveAdjustSampleDistances(self) -> int\nC++: virtual vtkTypeBool GetInteractiveAdjustSampleDistances()\n\n"},
  {"InteractiveAdjustSampleDistancesOn", PyvtkSmartVolumeMapper_InteractiveAdjustSampleDistancesOn, METH_VARARGS,
   "InteractiveAdjustSampleDistancesOn(self) -> None\nC++: virtual void InteractiveAdjustSampleDistancesOn()\n\n"},
  {"InteractiveAdjustSampleDistancesOff", PyvtkSmartVolumeMapper_InteractiveAdjustSampleDistancesOff, METH_VARARGS,
   "InteractiveAdjustSampleDistancesOff(self) -> None\nC++: virtual void InteractiveAdjustSampleDistancesOff()\n\n"},
  {"SetAutoAdjustSampleDistances", PyvtkSmartVolumeMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   "SetAutoAdjustSampleDistances(self, _arg:int) -> None\nC++: virtual void SetAutoAdjustSampleDistances(vtkTypeBool _arg)\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\nNote that, this flag is ignored when\nInteractiveAdjustSampleDistances is enabled. To explicitly set\nand use this flag, one must disable\nInteractiveAdjustSampleDistances.\n"},
  {"GetAutoAdjustSampleDistancesMinValue", PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   "GetAutoAdjustSampleDistancesMinValue(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMinValue()\n\n"},
  {"GetAutoAdjustSampleDistancesMaxValue", PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   "GetAutoAdjustSampleDistancesMaxValue(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMaxValue()\n\n"},
  {"GetAutoAdjustSampleDistances", PyvtkSmartVolumeMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   "GetAutoAdjustSampleDistances(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistances()\n\n"},
  {"AutoAdjustSampleDistancesOn", PyvtkSmartVolumeMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   "AutoAdjustSampleDistancesOn(self) -> None\nC++: virtual void AutoAdjustSampleDistancesOn()\n\n"},
  {"AutoAdjustSampleDistancesOff", PyvtkSmartVolumeMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   "AutoAdjustSampleDistancesOff(self) -> None\nC++: virtual void AutoAdjustSampleDistancesOff()\n\n"},
  {"SetSampleDistance", PyvtkSmartVolumeMapper_SetSampleDistance, METH_VARARGS,
   "SetSampleDistance(self, _arg:float) -> None\nC++: virtual void SetSampleDistance(float _arg)\n\nSet/Get the distance between samples used for rendering when\nAutoAdjustSampleDistances is off, or when this mapper has more\nthan 1 second allocated to it for rendering. If SampleDistance is\nnegative, it will be computed based on the dataset spacing.\nInitial value is -1.0.\n"},
  {"GetSampleDistance", PyvtkSmartVolumeMapper_GetSampleDistance, METH_VARARGS,
   "GetSampleDistance(self) -> float\nC++: virtual float GetSampleDistance()\n\n"},
  {"SetGlobalIlluminationReach", PyvtkSmartVolumeMapper_SetGlobalIlluminationReach, METH_VARARGS,
   "SetGlobalIlluminationReach(self, _arg:float) -> None\nC++: virtual void SetGlobalIlluminationReach(float _arg)\n\n@copydoc\nvtkGPUVolumeRayCastMapper::SetGlobalIlluminationReach(float)\n\nThis parameter is only used when the underlying mapper is a\nvtkGPUVolumeRayCastMapper.\n"},
  {"GetGlobalIlluminationReachMinValue", PyvtkSmartVolumeMapper_GetGlobalIlluminationReachMinValue, METH_VARARGS,
   "GetGlobalIlluminationReachMinValue(self) -> float\nC++: virtual float GetGlobalIlluminationReachMinValue()\n\n"},
  {"GetGlobalIlluminationReachMaxValue", PyvtkSmartVolumeMapper_GetGlobalIlluminationReachMaxValue, METH_VARARGS,
   "GetGlobalIlluminationReachMaxValue(self) -> float\nC++: virtual float GetGlobalIlluminationReachMaxValue()\n\n"},
  {"GetGlobalIlluminationReach", PyvtkSmartVolumeMapper_GetGlobalIlluminationReach, METH_VARARGS,
   "GetGlobalIlluminationReach(self) -> float\nC++: virtual float GetGlobalIlluminationReach()\n\n"},
  {"SetVolumetricScatteringBlending", PyvtkSmartVolumeMapper_SetVolumetricScatteringBlending, METH_VARARGS,
   "SetVolumetricScatteringBlending(self, _arg:float) -> None\nC++: virtual void SetVolumetricScatteringBlending(float _arg)\n\n@copydoc\nvtkGPUVolumeRayCastMapper::SetVolumetricScatteringBlending(float)\n\nThis parameter is only used when the underlying mapper is a\nvtkGPUVolumeRayCastMapper.\n"},
  {"GetVolumetricScatteringBlendingMinValue", PyvtkSmartVolumeMapper_GetVolumetricScatteringBlendingMinValue, METH_VARARGS,
   "GetVolumetricScatteringBlendingMinValue(self) -> float\nC++: virtual float GetVolumetricScatteringBlendingMinValue()\n\n"},
  {"GetVolumetricScatteringBlendingMaxValue", PyvtkSmartVolumeMapper_GetVolumetricScatteringBlendingMaxValue, METH_VARARGS,
   "GetVolumetricScatteringBlendingMaxValue(self) -> float\nC++: virtual float GetVolumetricScatteringBlendingMaxValue()\n\n"},
  {"GetVolumetricScatteringBlending", PyvtkSmartVolumeMapper_GetVolumetricScatteringBlending, METH_VARARGS,
   "GetVolumetricScatteringBlending(self) -> float\nC++: virtual float GetVolumetricScatteringBlending()\n\n"},
  {"Render", PyvtkSmartVolumeMapper_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:vtkVolume) -> None\nC++: void Render(vtkRenderer *, vtkVolume *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {"ReleaseGraphicsResources", PyvtkSmartVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {"SetVectorMode", PyvtkSmartVolumeMapper_SetVectorMode, METH_VARARGS,
   "SetVectorMode(self, mode:int) -> None\nC++: void SetVectorMode(int mode)\n\n"},
  {"GetVectorMode", PyvtkSmartVolumeMapper_GetVectorMode, METH_VARARGS,
   "GetVectorMode(self) -> int\nC++: virtual int GetVectorMode()\n\n"},
  {"SetVectorComponent", PyvtkSmartVolumeMapper_SetVectorComponent, METH_VARARGS,
   "SetVectorComponent(self, _arg:int) -> None\nC++: virtual void SetVectorComponent(int _arg)\n\n"},
  {"GetVectorComponentMinValue", PyvtkSmartVolumeMapper_GetVectorComponentMinValue, METH_VARARGS,
   "GetVectorComponentMinValue(self) -> int\nC++: virtual int GetVectorComponentMinValue()\n\n"},
  {"GetVectorComponentMaxValue", PyvtkSmartVolumeMapper_GetVectorComponentMaxValue, METH_VARARGS,
   "GetVectorComponentMaxValue(self) -> int\nC++: virtual int GetVectorComponentMaxValue()\n\n"},
  {"GetVectorComponent", PyvtkSmartVolumeMapper_GetVectorComponent, METH_VARARGS,
   "GetVectorComponent(self) -> int\nC++: virtual int GetVectorComponent()\n\n"},
  {"SetTransfer2DYAxisArray", PyvtkSmartVolumeMapper_SetTransfer2DYAxisArray, METH_VARARGS,
   "SetTransfer2DYAxisArray(self, _arg:str) -> None\nC++: virtual void SetTransfer2DYAxisArray(const char *_arg)\n\nSet/Get the transfer 2D Y axis array\n"},
  {"GetTransfer2DYAxisArray", PyvtkSmartVolumeMapper_GetTransfer2DYAxisArray, METH_VARARGS,
   "GetTransfer2DYAxisArray(self) -> str\nC++: virtual char *GetTransfer2DYAxisArray()\n\n"},
  {"SetLowResMode", PyvtkSmartVolumeMapper_SetLowResMode, METH_VARARGS,
   "SetLowResMode(self, _arg:int) -> None\nC++: virtual void SetLowResMode(int _arg)\n\n"},
  {"GetLowResMode", PyvtkSmartVolumeMapper_GetLowResMode, METH_VARARGS,
   "GetLowResMode(self) -> int\nC++: virtual int GetLowResMode()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSmartVolumeMapper_Doc =
  "vtkSmartVolumeMapper - Adaptive volume mapper\n\n"
  "Superclass: vtkVolumeMapper\n\n"
  "vtkSmartVolumeMapper is a volume mapper that will delegate to a\n"
  "specific volume mapper based on rendering parameters and available\n"
  "hardware. Use the SetRequestedRenderMode() method to control the\n"
  "behavior of the selection. The following options are available:\n\n"
  "@par vtkSmartVolumeMapper::DefaultRenderMode:\n"
  "         Allow the vtkSmartVolumeMapper to select the best mapper\n"
  "based on\n"
  "         rendering parameters and hardware support. If GPU ray\n"
  "casting is\n"
  "         supported, the vtkGPUVolumeRayCastMapper mapper will be used\n"
  "for\n"
  "         all rendering. If not, then the\n"
  "vtkFixedPointVolumeRayCastMapper\n"
  "         will be used exclusively. This is the default requested\n"
  "render\n"
  "         mode, and is generally the best option. When you use this\n"
  "option,\n"
  "         your volume will always be rendered, but the method used to\n"
  "render\n"
  "         it may vary based on parameters and platform.\n\n"
  "@par vtkSmartVolumeMapper::RayCastRenderMode:\n"
  "         Use the vtkFixedPointVolumeRayCastMapper for both\n"
  "interactive and\n"
  "         still rendering. When you use this option your volume will\n"
  "always\n"
  "         be rendered with the vtkFixedPointVolumeRayCastMapper.\n\n"
  "@par vtkSmartVolumeMapper::GPURenderMode:\n"
  "         Use the vtkGPUVolumeRayCastMapper, if supported, for both\n"
  "         interactive and still rendering. If the GPU ray caster is\n"
  "not\n"
  "         supported (due to hardware limitations or rendering\n"
  "parameters)\n"
  "         then no image will be rendered. Use this option only if you\n"
  "have\n"
  "         already checked for supported based on the current hardware,\n"
  "         number of scalar components, and rendering parameters in the\n"
  "         vtkVolumeProperty.\n\n"
  "@par vtkSmartVolumeMapper::GPURenderMode:\n"
  " You can adjust the contrast and brightness in the rendered image\n"
  "using the\n"
  " FinalColorWindow and FinalColorLevel ivars. By default the\n"
  " FinalColorWindow is set to 1.0, and the FinalColorLevel is set to\n"
  "0.5,\n"
  " which applies no correction to the computed image. To apply the\n"
  "window /\n"
  " level operation to the computer image color, first a Scale and Bias\n"
  " value are computed:\n\n\n"
  " scale = 1.0 / this->FinalColorWindow\n"
  " bias  = 0.5 - this->FinalColorLevel / this->FinalColorWindow\n"
  " \n"
  " To compute a new color (R', G', B', A') from an existing color\n"
  "(R,G,B,A)\n"
  " for a pixel, the following equation is used:\n\n\n"
  " R' = R*scale + bias*A\n"
  " G' = G*scale + bias*A\n"
  " B' = B*scale + bias*A\n"
  " A' = A\n"
  "  Note that bias is multiplied by the alpha component before adding\n"
  "because the red, green, and blue component of the color are already\n"
  "pre-multiplied by alpha. Also note that the window / level operation\n"
  "leaves the alpha component unchanged - it only adjusts the RGB\n"
  "values.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSmartVolumeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkSmartVolumeMapper", // tp_name
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
  PyvtkSmartVolumeMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSmartVolumeMapper_StaticNew()
{
  return vtkSmartVolumeMapper::New();
}

PyObject *PyvtkSmartVolumeMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSmartVolumeMapper_Type, PyvtkSmartVolumeMapper_Methods,
    "vtkSmartVolumeMapper",
 &PyvtkSmartVolumeMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkVolumeMapper");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSmartVolumeMapper_VectorModeType_Type);
  PyVTKEnum_Add(&PyvtkSmartVolumeMapper_VectorModeType_Type, "vtkSmartVolumeMapper.VectorModeType");

  o = (PyObject *)&PyvtkSmartVolumeMapper_VectorModeType_Type;
  if (PyDict_SetItemString(d, "VectorModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSmartVolumeMapper_LowResModeType_Type);
  PyVTKEnum_Add(&PyvtkSmartVolumeMapper_LowResModeType_Type, "vtkSmartVolumeMapper.LowResModeType");

  o = (PyObject *)&PyvtkSmartVolumeMapper_LowResModeType_Type;
  if (PyDict_SetItemString(d, "LowResModeType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "DefaultRenderMode", vtkSmartVolumeMapper::DefaultRenderMode },
        { "RayCastRenderMode", vtkSmartVolumeMapper::RayCastRenderMode },
        { "GPURenderMode", vtkSmartVolumeMapper::GPURenderMode },
        { "OSPRayRenderMode", vtkSmartVolumeMapper::OSPRayRenderMode },
        { "UndefinedRenderMode", vtkSmartVolumeMapper::UndefinedRenderMode },
        { "InvalidRenderMode", vtkSmartVolumeMapper::InvalidRenderMode },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSmartVolumeMapper::VectorModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DISABLED", vtkSmartVolumeMapper::DISABLED },
        { "MAGNITUDE", vtkSmartVolumeMapper::MAGNITUDE },
        { "COMPONENT", vtkSmartVolumeMapper::COMPONENT },
      };

    o = PyvtkSmartVolumeMapper_VectorModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSmartVolumeMapper::LowResModeType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "LowResModeDisabled", vtkSmartVolumeMapper::LowResModeDisabled },
        { "LowResModeResample", vtkSmartVolumeMapper::LowResModeResample },
      };

    o = PyvtkSmartVolumeMapper_LowResModeType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSmartVolumeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSmartVolumeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSmartVolumeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

