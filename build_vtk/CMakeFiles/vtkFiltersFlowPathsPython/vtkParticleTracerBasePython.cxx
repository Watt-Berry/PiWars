// python wrapper for vtkParticleTracerBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParticleTracerBase.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParticleTracerBase(PyObject *dict); }
extern "C" { PyObject *PyvtkParticleTracerBase_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParticleTracerBase_Solvers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkParticleTracerBase.Solvers", // tp_name
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
PyObject *PyvtkParticleTracerBase_Solvers_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkParticleTracerBase_Solvers_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParticleTracerBase_MeshOverTimeTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkParticleTracerBase.MeshOverTimeTypes", // tp_name
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
PyObject *PyvtkParticleTracerBase_MeshOverTimeTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkParticleTracerBase_MeshOverTimeTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkParticleTracerBase_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParticleTracerBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParticleTracerBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParticleTracerBase *tempr = vtkParticleTracerBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParticleTracerBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParticleTracerBase::NewInstance());

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
PyvtkParticleTracerBase_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParticleTracerBase::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParticleTracerBase::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_PrintParticleHistories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintParticleHistories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintParticleHistories();
    }
    else
    {
      op->vtkParticleTracerBase::PrintParticleHistories();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkParticleTracerBase::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVorticity(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalSpeed() :
      op->vtkParticleTracerBase::GetTerminalSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminalSpeed(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetTerminalSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationScale() :
      op->vtkParticleTracerBase::GetRotationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationScale(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetRotationScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnorePipelineTime(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetIgnorePipelineTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIgnorePipelineTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnorePipelineTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnorePipelineTime() :
      op->vtkParticleTracerBase::GetIgnorePipelineTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IgnorePipelineTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnorePipelineTimeOn();
    }
    else
    {
      op->vtkParticleTracerBase::IgnorePipelineTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_IgnorePipelineTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnorePipelineTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnorePipelineTimeOff();
    }
    else
    {
      op->vtkParticleTracerBase::IgnorePipelineTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetForceReinjectionEveryNSteps() :
      op->vtkParticleTracerBase::GetForceReinjectionEveryNSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetForceReinjectionEveryNSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceReinjectionEveryNSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceReinjectionEveryNSteps(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetForceReinjectionEveryNSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminationTime(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetTerminationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetTerminationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminationTime() :
      op->vtkParticleTracerBase::GetTerminationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  vtkInitialValueProblemSolver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInitialValueProblemSolver"))
  {
    if (ap.IsBound())
    {
      op->SetIntegrator(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkParticleTracerBase::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorType(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetIntegratorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegratorType() :
      op->vtkParticleTracerBase::GetIntegratorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartTime() :
      op->vtkParticleTracerBase::GetStartTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStartTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartTime(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetStartTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStaticSeeds(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetStaticSeeds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStaticSeeds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStaticSeeds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStaticSeeds() :
      op->vtkParticleTracerBase::GetStaticSeeds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetMeshOverTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTime(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetMeshOverTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetMeshOverTimeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshOverTimeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeshOverTimeMinValue() :
      op->vtkParticleTracerBase::GetMeshOverTimeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetMeshOverTimeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshOverTimeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeshOverTimeMaxValue() :
      op->vtkParticleTracerBase::GetMeshOverTimeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetMeshOverTimeToDifferent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTimeToDifferent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTimeToDifferent();
    }
    else
    {
      op->vtkParticleTracerBase::SetMeshOverTimeToDifferent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetMeshOverTimeToStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTimeToStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTimeToStatic();
    }
    else
    {
      op->vtkParticleTracerBase::SetMeshOverTimeToStatic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetMeshOverTimeToLinearTransformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTimeToLinearTransformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTimeToLinearTransformation();
    }
    else
    {
      op->vtkParticleTracerBase::SetMeshOverTimeToLinearTransformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetMeshOverTimeToSameTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshOverTimeToSameTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeshOverTimeToSameTopology();
    }
    else
    {
      op->vtkParticleTracerBase::SetMeshOverTimeToSameTopology();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetMeshOverTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshOverTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeshOverTime() :
      op->vtkParticleTracerBase::GetMeshOverTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetStaticMesh(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetStaticMesh."
    " (" "Use SetMeshOverTime instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStaticMesh(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetStaticMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetStaticMesh(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetStaticMesh."
    " (" "Use GetMeshOverTime instead" ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetStaticMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStaticMesh() :
      op->vtkParticleTracerBase::GetStaticMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetInterpolatorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorType(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetInterpolatorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetInterpolatorTypeToDataSetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToDataSetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToDataSetPointLocator();
    }
    else
    {
      op->vtkParticleTracerBase::SetInterpolatorTypeToDataSetPointLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetInterpolatorTypeToCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToCellLocator();
    }
    else
    {
      op->vtkParticleTracerBase::SetInterpolatorTypeToCellLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  vtkAbstractParticleWriter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractParticleWriter"))
  {
    if (ap.IsBound())
    {
      op->SetParticleWriter(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetParticleWriter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetParticleWriter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleWriter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractParticleWriter *tempr = (ap.IsBound() ?
      op->GetParticleWriter() :
      op->vtkParticleTracerBase::GetParticleWriter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetParticleFileName(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetParticleFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetParticleFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetParticleFileName() :
      op->vtkParticleTracerBase::GetParticleFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableParticleWriting(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetEnableParticleWriting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetEnableParticleWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableParticleWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableParticleWriting() :
      op->vtkParticleTracerBase::GetEnableParticleWriting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_EnableParticleWritingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableParticleWritingOn();
    }
    else
    {
      op->vtkParticleTracerBase::EnableParticleWritingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_EnableParticleWritingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableParticleWritingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableParticleWritingOff();
    }
    else
    {
      op->vtkParticleTracerBase::EnableParticleWritingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetDisableResetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisableResetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisableResetCache(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetDisableResetCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetDisableResetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisableResetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisableResetCache() :
      op->vtkParticleTracerBase::GetDisableResetCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_DisableResetCacheOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableResetCacheOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableResetCacheOn();
    }
    else
    {
      op->vtkParticleTracerBase::DisableResetCacheOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_DisableResetCacheOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableResetCacheOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableResetCacheOff();
    }
    else
    {
      op->vtkParticleTracerBase::DisableResetCacheOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_AddSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddSourceConnection(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::AddSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_RemoveAllSources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSources();
    }
    else
    {
      op->vtkParticleTracerBase::RemoveAllSources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_GetForceSerialExecution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceSerialExecution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceSerialExecution() :
      op->vtkParticleTracerBase::GetForceSerialExecution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_SetForceSerialExecution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceSerialExecution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceSerialExecution(temp0);
    }
    else
    {
      op->vtkParticleTracerBase::SetForceSerialExecution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_ForceSerialExecutionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceSerialExecutionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceSerialExecutionOn();
    }
    else
    {
      op->vtkParticleTracerBase::ForceSerialExecutionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParticleTracerBase_ForceSerialExecutionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceSerialExecutionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParticleTracerBase *op = static_cast<vtkParticleTracerBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceSerialExecutionOff();
    }
    else
    {
      op->vtkParticleTracerBase::ForceSerialExecutionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParticleTracerBase_Methods[] = {
  {"IsTypeOf", PyvtkParticleTracerBase_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParticleTracerBase_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParticleTracerBase_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParticleTracerBase\nC++: static vtkParticleTracerBase *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParticleTracerBase_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParticleTracerBase\nC++: vtkParticleTracerBase *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParticleTracerBase_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParticleTracerBase_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PrintParticleHistories", PyvtkParticleTracerBase_PrintParticleHistories, METH_VARARGS,
   "PrintParticleHistories(self) -> None\nC++: void PrintParticleHistories()\n\n"},
  {"GetComputeVorticity", PyvtkParticleTracerBase_GetComputeVorticity, METH_VARARGS,
   "GetComputeVorticity(self) -> bool\nC++: virtual bool GetComputeVorticity()\n\nTurn on/off vorticity computation at streamline points (necessary\nfor generating proper stream-ribbons using the vtkRibbonFilter.\n"},
  {"SetComputeVorticity", PyvtkParticleTracerBase_SetComputeVorticity, METH_VARARGS,
   "SetComputeVorticity(self, __a:bool) -> None\nC++: void SetComputeVorticity(bool)\n\n"},
  {"GetTerminalSpeed", PyvtkParticleTracerBase_GetTerminalSpeed, METH_VARARGS,
   "GetTerminalSpeed(self) -> float\nC++: virtual double GetTerminalSpeed()\n\nSpecify the terminal speed value, below which integration is\nterminated.\n"},
  {"SetTerminalSpeed", PyvtkParticleTracerBase_SetTerminalSpeed, METH_VARARGS,
   "SetTerminalSpeed(self, __a:float) -> None\nC++: void SetTerminalSpeed(double)\n\n"},
  {"GetRotationScale", PyvtkParticleTracerBase_GetRotationScale, METH_VARARGS,
   "GetRotationScale(self) -> float\nC++: virtual double GetRotationScale()\n\nThis can be used to scale the rate with which the streamribbons\ntwist. The default is 1.\n"},
  {"SetRotationScale", PyvtkParticleTracerBase_SetRotationScale, METH_VARARGS,
   "SetRotationScale(self, __a:float) -> None\nC++: void SetRotationScale(double)\n\n"},
  {"SetIgnorePipelineTime", PyvtkParticleTracerBase_SetIgnorePipelineTime, METH_VARARGS,
   "SetIgnorePipelineTime(self, _arg:int) -> None\nC++: virtual void SetIgnorePipelineTime(vtkTypeBool _arg)\n\nTo get around problems with the Paraview Animation controls we\ncan just animate the time step and ignore the TIME_ requests\n"},
  {"GetIgnorePipelineTime", PyvtkParticleTracerBase_GetIgnorePipelineTime, METH_VARARGS,
   "GetIgnorePipelineTime(self) -> int\nC++: virtual vtkTypeBool GetIgnorePipelineTime()\n\n"},
  {"IgnorePipelineTimeOn", PyvtkParticleTracerBase_IgnorePipelineTimeOn, METH_VARARGS,
   "IgnorePipelineTimeOn(self) -> None\nC++: virtual void IgnorePipelineTimeOn()\n\n"},
  {"IgnorePipelineTimeOff", PyvtkParticleTracerBase_IgnorePipelineTimeOff, METH_VARARGS,
   "IgnorePipelineTimeOff(self) -> None\nC++: virtual void IgnorePipelineTimeOff()\n\n"},
  {"GetForceReinjectionEveryNSteps", PyvtkParticleTracerBase_GetForceReinjectionEveryNSteps, METH_VARARGS,
   "GetForceReinjectionEveryNSteps(self) -> int\nC++: virtual int GetForceReinjectionEveryNSteps()\n\nWhen animating particles, it is nice to inject new ones every Nth\nstep to produce a continuous flow. Setting\nForceReinjectionEveryNSteps to a non zero value will cause the\nparticle source to reinject particles every Nth step even if it\nis otherwise unchanged. Note that if the particle source is also\nanimated, this flag will be redundant as the particles will be\nreinjected whenever the source changes anyway\n"},
  {"SetForceReinjectionEveryNSteps", PyvtkParticleTracerBase_SetForceReinjectionEveryNSteps, METH_VARARGS,
   "SetForceReinjectionEveryNSteps(self, __a:int) -> None\nC++: void SetForceReinjectionEveryNSteps(int)\n\n"},
  {"SetTerminationTime", PyvtkParticleTracerBase_SetTerminationTime, METH_VARARGS,
   "SetTerminationTime(self, t:float) -> None\nC++: void SetTerminationTime(double t)\n\nSetting TerminationTime to a positive value will cause particles\nto terminate when the time is reached. Use a vlue of zero to\ndisable termination. The units of time should be consistent with\nthe primary time variable.\n"},
  {"GetTerminationTime", PyvtkParticleTracerBase_GetTerminationTime, METH_VARARGS,
   "GetTerminationTime(self) -> float\nC++: virtual double GetTerminationTime()\n\n"},
  {"SetIntegrator", PyvtkParticleTracerBase_SetIntegrator, METH_VARARGS,
   "SetIntegrator(self, __a:vtkInitialValueProblemSolver) -> None\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\n"},
  {"GetIntegrator", PyvtkParticleTracerBase_GetIntegrator, METH_VARARGS,
   "GetIntegrator(self) -> vtkInitialValueProblemSolver\nC++: virtual vtkInitialValueProblemSolver *GetIntegrator()\n\n"},
  {"SetIntegratorType", PyvtkParticleTracerBase_SetIntegratorType, METH_VARARGS,
   "SetIntegratorType(self, type:int) -> None\nC++: void SetIntegratorType(int type)\n\n"},
  {"GetIntegratorType", PyvtkParticleTracerBase_GetIntegratorType, METH_VARARGS,
   "GetIntegratorType(self) -> int\nC++: int GetIntegratorType()\n\n"},
  {"GetStartTime", PyvtkParticleTracerBase_GetStartTime, METH_VARARGS,
   "GetStartTime(self) -> float\nC++: virtual double GetStartTime()\n\nSet the time value for particle tracing to begin. The units of\ntime should be consistent with the primary time variable.\n"},
  {"SetStartTime", PyvtkParticleTracerBase_SetStartTime, METH_VARARGS,
   "SetStartTime(self, t:float) -> None\nC++: void SetStartTime(double t)\n\n"},
  {"SetStaticSeeds", PyvtkParticleTracerBase_SetStaticSeeds, METH_VARARGS,
   "SetStaticSeeds(self, _arg:int) -> None\nC++: virtual void SetStaticSeeds(vtkTypeBool _arg)\n\nif StaticSeeds is set and the mesh is static, then every time\nparticles are injected we can re-use the same injection\ninformation. We classify particles according to processor just\nonce before start. If StaticSeeds is set and a moving seed source\nis specified the motion will be ignored and results will not be\nas expected. The default is that StaticSeeds is 0.\n"},
  {"GetStaticSeeds", PyvtkParticleTracerBase_GetStaticSeeds, METH_VARARGS,
   "GetStaticSeeds(self) -> int\nC++: virtual vtkTypeBool GetStaticSeeds()\n\n"},
  {"SetMeshOverTime", PyvtkParticleTracerBase_SetMeshOverTime, METH_VARARGS,
   "SetMeshOverTime(self, meshOverTime:int) -> None\nC++: virtual void SetMeshOverTime(int meshOverTime)\n\n"},
  {"GetMeshOverTimeMinValue", PyvtkParticleTracerBase_GetMeshOverTimeMinValue, METH_VARARGS,
   "GetMeshOverTimeMinValue(self) -> int\nC++: virtual int GetMeshOverTimeMinValue()\n\n"},
  {"GetMeshOverTimeMaxValue", PyvtkParticleTracerBase_GetMeshOverTimeMaxValue, METH_VARARGS,
   "GetMeshOverTimeMaxValue(self) -> int\nC++: virtual int GetMeshOverTimeMaxValue()\n\n"},
  {"SetMeshOverTimeToDifferent", PyvtkParticleTracerBase_SetMeshOverTimeToDifferent, METH_VARARGS,
   "SetMeshOverTimeToDifferent(self) -> None\nC++: void SetMeshOverTimeToDifferent()\n\n"},
  {"SetMeshOverTimeToStatic", PyvtkParticleTracerBase_SetMeshOverTimeToStatic, METH_VARARGS,
   "SetMeshOverTimeToStatic(self) -> None\nC++: void SetMeshOverTimeToStatic()\n\n"},
  {"SetMeshOverTimeToLinearTransformation", PyvtkParticleTracerBase_SetMeshOverTimeToLinearTransformation, METH_VARARGS,
   "SetMeshOverTimeToLinearTransformation(self) -> None\nC++: void SetMeshOverTimeToLinearTransformation()\n\n"},
  {"SetMeshOverTimeToSameTopology", PyvtkParticleTracerBase_SetMeshOverTimeToSameTopology, METH_VARARGS,
   "SetMeshOverTimeToSameTopology(self) -> None\nC++: void SetMeshOverTimeToSameTopology()\n\n"},
  {"GetMeshOverTime", PyvtkParticleTracerBase_GetMeshOverTime, METH_VARARGS,
   "GetMeshOverTime(self) -> int\nC++: virtual int GetMeshOverTime()\n\n"},
  {"SetStaticMesh", PyvtkParticleTracerBase_SetStaticMesh, METH_VARARGS,
   "SetStaticMesh(self, staticMesh:int) -> None\nC++: virtual void SetStaticMesh(vtkTypeBool staticMesh)\n\nif StaticMesh is set, many optimizations for cell caching can be\nassumed. if StaticMesh is not set, the algorithm will attempt to\nfind out if optimizations can be used, but setting it to true\nwill force all optimizations. Do not Set StaticMesh to true if a\ndynamic mesh is being used as this will invalidate all results.\nThe default is that StaticMesh is 0.\n"},
  {"GetStaticMesh", PyvtkParticleTracerBase_GetStaticMesh, METH_VARARGS,
   "GetStaticMesh(self) -> int\nC++: virtual vtkTypeBool GetStaticMesh()\n\n"},
  {"SetInterpolatorType", PyvtkParticleTracerBase_SetInterpolatorType, METH_VARARGS,
   "SetInterpolatorType(self, interpolatorType:int) -> None\nC++: void SetInterpolatorType(int interpolatorType)\n\nSet the type of the velocity field interpolator to determine\nwhether INTERPOLATOR_WITH_DATASET_POINT_LOCATOR or\nINTERPOLATOR_WITH_CELL_LOCATOR is employed for locating cells\nduring streamline integration. The latter (adopting\nvtkAbstractCellLocator sub-classes such as vtkCellLocator and\nvtkModifiedBSPTree) is more robust than the former (through\nvtkDataSet / vtkPointSet::FindCell() coupled with\nvtkPointLocator). However the former can be much faster and\nproduce adequate results.\n\nDefault is INTERPOLATOR_WITH_CELL_LOCATOR (to maintain backwards\ncompatibility).\n"},
  {"SetInterpolatorTypeToDataSetPointLocator", PyvtkParticleTracerBase_SetInterpolatorTypeToDataSetPointLocator, METH_VARARGS,
   "SetInterpolatorTypeToDataSetPointLocator(self) -> None\nC++: void SetInterpolatorTypeToDataSetPointLocator()\n\nSet the velocity field interpolator type to one that uses a point\nlocator to perform local spatial searching. Typically a point\nlocator is faster than searches with a cell locator, but it may\nnot always find the correct cells enclosing a point. This is\nparticularly true with meshes that are disjoint at seams, or abut\nmeshes in an incompatible manner.\n"},
  {"SetInterpolatorTypeToCellLocator", PyvtkParticleTracerBase_SetInterpolatorTypeToCellLocator, METH_VARARGS,
   "SetInterpolatorTypeToCellLocator(self) -> None\nC++: void SetInterpolatorTypeToCellLocator()\n\nSet the velocity field interpolator type to one that uses a cell\nlocator to perform spatial searching. Using a cell locator should\nalways return the correct results, but it can be much slower that\npoint locator-based searches. * By default a cell locator is\nused.\n"},
  {"SetParticleWriter", PyvtkParticleTracerBase_SetParticleWriter, METH_VARARGS,
   "SetParticleWriter(self, pw:vtkAbstractParticleWriter) -> None\nC++: virtual void SetParticleWriter(vtkAbstractParticleWriter *pw)\n\nSet/Get the Writer associated with this Particle Tracer Ideally a\nparallel IO capable vtkH5PartWriter should be used which will\ncollect particles from all parallel processes and write them to a\nsingle HDF5 file.\n"},
  {"GetParticleWriter", PyvtkParticleTracerBase_GetParticleWriter, METH_VARARGS,
   "GetParticleWriter(self) -> vtkAbstractParticleWriter\nC++: virtual vtkAbstractParticleWriter *GetParticleWriter()\n\n"},
  {"SetParticleFileName", PyvtkParticleTracerBase_SetParticleFileName, METH_VARARGS,
   "SetParticleFileName(self, _arg:str) -> None\nC++: virtual void SetParticleFileName(const char *_arg)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"GetParticleFileName", PyvtkParticleTracerBase_GetParticleFileName, METH_VARARGS,
   "GetParticleFileName(self) -> str\nC++: virtual char *GetParticleFileName()\n\n"},
  {"SetEnableParticleWriting", PyvtkParticleTracerBase_SetEnableParticleWriting, METH_VARARGS,
   "SetEnableParticleWriting(self, _arg:int) -> None\nC++: virtual void SetEnableParticleWriting(vtkTypeBool _arg)\n\nSet/Get the filename to be used with the particle writer when\ndumping particles to disk\n"},
  {"GetEnableParticleWriting", PyvtkParticleTracerBase_GetEnableParticleWriting, METH_VARARGS,
   "GetEnableParticleWriting(self) -> int\nC++: virtual vtkTypeBool GetEnableParticleWriting()\n\n"},
  {"EnableParticleWritingOn", PyvtkParticleTracerBase_EnableParticleWritingOn, METH_VARARGS,
   "EnableParticleWritingOn(self) -> None\nC++: virtual void EnableParticleWritingOn()\n\n"},
  {"EnableParticleWritingOff", PyvtkParticleTracerBase_EnableParticleWritingOff, METH_VARARGS,
   "EnableParticleWritingOff(self) -> None\nC++: virtual void EnableParticleWritingOff()\n\n"},
  {"SetDisableResetCache", PyvtkParticleTracerBase_SetDisableResetCache, METH_VARARGS,
   "SetDisableResetCache(self, _arg:int) -> None\nC++: virtual void SetDisableResetCache(vtkTypeBool _arg)\n\nSet/Get the flag to disable cache This is off by default and\nturned on in special circumstances such as in a coprocessing\nworkflow\n"},
  {"GetDisableResetCache", PyvtkParticleTracerBase_GetDisableResetCache, METH_VARARGS,
   "GetDisableResetCache(self) -> int\nC++: virtual vtkTypeBool GetDisableResetCache()\n\n"},
  {"DisableResetCacheOn", PyvtkParticleTracerBase_DisableResetCacheOn, METH_VARARGS,
   "DisableResetCacheOn(self) -> None\nC++: virtual void DisableResetCacheOn()\n\n"},
  {"DisableResetCacheOff", PyvtkParticleTracerBase_DisableResetCacheOff, METH_VARARGS,
   "DisableResetCacheOff(self) -> None\nC++: virtual void DisableResetCacheOff()\n\n"},
  {"AddSourceConnection", PyvtkParticleTracerBase_AddSourceConnection, METH_VARARGS,
   "AddSourceConnection(self, input:vtkAlgorithmOutput) -> None\nC++: void AddSourceConnection(vtkAlgorithmOutput *input)\n\nProvide support for multiple seed sources\n"},
  {"RemoveAllSources", PyvtkParticleTracerBase_RemoveAllSources, METH_VARARGS,
   "RemoveAllSources(self) -> None\nC++: void RemoveAllSources()\n\n"},
  {"GetForceSerialExecution", PyvtkParticleTracerBase_GetForceSerialExecution, METH_VARARGS,
   "GetForceSerialExecution(self) -> bool\nC++: virtual bool GetForceSerialExecution()\n\nForce the filter to run particle tracer in serial. This affects\nthe filter only if more than 100 particles is to be generated.\n"},
  {"SetForceSerialExecution", PyvtkParticleTracerBase_SetForceSerialExecution, METH_VARARGS,
   "SetForceSerialExecution(self, _arg:bool) -> None\nC++: virtual void SetForceSerialExecution(bool _arg)\n\n"},
  {"ForceSerialExecutionOn", PyvtkParticleTracerBase_ForceSerialExecutionOn, METH_VARARGS,
   "ForceSerialExecutionOn(self) -> None\nC++: virtual void ForceSerialExecutionOn()\n\n"},
  {"ForceSerialExecutionOff", PyvtkParticleTracerBase_ForceSerialExecutionOff, METH_VARARGS,
   "ForceSerialExecutionOff(self) -> None\nC++: virtual void ForceSerialExecutionOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParticleTracerBase_Doc =
  "vtkParticleTracerBase - A particle tracer for vector fields\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkParticleTracerBase is the base class for filters that advect\n"
  "particles in a vector field. Note that the input vtkPointData\n"
  "structure must be identical on all datasets.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\n"
  "vtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkStreamTracer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParticleTracerBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkParticleTracerBase", // tp_name
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
  PyvtkParticleTracerBase_Doc, // tp_doc
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

PyObject *PyvtkParticleTracerBase_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParticleTracerBase_Type, PyvtkParticleTracerBase_Methods,
    "vtkParticleTracerBase",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkParticleTracerBase_Solvers_Type);
  PyVTKEnum_Add(&PyvtkParticleTracerBase_Solvers_Type, "vtkParticleTracerBase.Solvers");

  o = (PyObject *)&PyvtkParticleTracerBase_Solvers_Type;
  if (PyDict_SetItemString(d, "Solvers", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkParticleTracerBase_MeshOverTimeTypes_Type);
  PyVTKEnum_Add(&PyvtkParticleTracerBase_MeshOverTimeTypes_Type, "vtkParticleTracerBase.MeshOverTimeTypes");

  o = (PyObject *)&PyvtkParticleTracerBase_MeshOverTimeTypes_Type;
  if (PyDict_SetItemString(d, "MeshOverTimeTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkParticleTracerBase::Solvers cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "RUNGE_KUTTA2", vtkParticleTracerBase::RUNGE_KUTTA2 },
        { "RUNGE_KUTTA4", vtkParticleTracerBase::RUNGE_KUTTA4 },
        { "RUNGE_KUTTA45", vtkParticleTracerBase::RUNGE_KUTTA45 },
        { "NONE", vtkParticleTracerBase::NONE },
        { "UNKNOWN", vtkParticleTracerBase::UNKNOWN },
      };

    o = PyvtkParticleTracerBase_Solvers_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkParticleTracerBase::MeshOverTimeTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "DIFFERENT", vtkParticleTracerBase::DIFFERENT },
        { "STATIC", vtkParticleTracerBase::STATIC },
        { "LINEAR_TRANSFORMATION", vtkParticleTracerBase::LINEAR_TRANSFORMATION },
        { "SAME_TOPOLOGY", vtkParticleTracerBase::SAME_TOPOLOGY },
      };

    o = PyvtkParticleTracerBase_MeshOverTimeTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "INTERPOLATOR_WITH_DATASET_POINT_LOCATOR", vtkParticleTracerBase::INTERPOLATOR_WITH_DATASET_POINT_LOCATOR },
        { "INTERPOLATOR_WITH_CELL_LOCATOR", vtkParticleTracerBase::INTERPOLATOR_WITH_CELL_LOCATOR },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParticleTracerBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParticleTracerBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParticleTracerBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

