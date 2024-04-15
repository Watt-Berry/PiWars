// python wrapper for vtkLagrangianParticleTracker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLagrangianParticleTracker.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLagrangianParticleTracker(PyObject *dict); }
extern "C" { PyObject *PyvtkLagrangianParticleTracker_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLagrangianParticleTracker_CellLengthComputation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkLagrangianParticleTracker.CellLengthComputation", // tp_name
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
PyObject *PyvtkLagrangianParticleTracker_CellLengthComputation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLagrangianParticleTracker_CellLengthComputation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLagrangianParticleTracker_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangianParticleTracker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLagrangianParticleTracker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLagrangianParticleTracker *tempr = vtkLagrangianParticleTracker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangianParticleTracker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLagrangianParticleTracker::NewInstance());

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
PyvtkLagrangianParticleTracker_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLagrangianParticleTracker::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLagrangianParticleTracker::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetIntegrationModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  vtkLagrangianBasicIntegrationModel *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLagrangianBasicIntegrationModel"))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationModel(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetIntegrationModel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetIntegrationModel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationModel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangianBasicIntegrationModel *tempr = (ap.IsBound() ?
      op->GetIntegrationModel() :
      op->vtkLagrangianParticleTracker::GetIntegrationModel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

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
      op->vtkLagrangianParticleTracker::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkLagrangianParticleTracker::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetGeneratePolyVertexInteractionOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePolyVertexInteractionOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePolyVertexInteractionOutput(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetGeneratePolyVertexInteractionOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetGeneratePolyVertexInteractionOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePolyVertexInteractionOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePolyVertexInteractionOutput() :
      op->vtkLagrangianParticleTracker::GetGeneratePolyVertexInteractionOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetCellLengthComputationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLengthComputationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellLengthComputationMode(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetCellLengthComputationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetCellLengthComputationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLengthComputationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellLengthComputationMode() :
      op->vtkLagrangianParticleTracker::GetCellLengthComputationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetStepFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepFactor(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetStepFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetStepFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepFactor() :
      op->vtkLagrangianParticleTracker::GetStepFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetStepFactorMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepFactorMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepFactorMin(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetStepFactorMin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetStepFactorMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepFactorMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepFactorMin() :
      op->vtkLagrangianParticleTracker::GetStepFactorMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetStepFactorMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepFactorMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepFactorMax(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetStepFactorMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetStepFactorMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepFactorMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepFactorMax() :
      op->vtkLagrangianParticleTracker::GetStepFactorMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSteps(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetMaximumNumberOfSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSteps() :
      op->vtkLagrangianParticleTracker::GetMaximumNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetMaximumIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumIntegrationTime(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetMaximumIntegrationTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetMaximumIntegrationTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumIntegrationTime() :
      op->vtkLagrangianParticleTracker::GetMaximumIntegrationTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetAdaptiveStepReintegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdaptiveStepReintegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdaptiveStepReintegration(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetAdaptiveStepReintegration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetAdaptiveStepReintegration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdaptiveStepReintegration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAdaptiveStepReintegration() :
      op->vtkLagrangianParticleTracker::GetAdaptiveStepReintegration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_AdaptiveStepReintegrationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveStepReintegrationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdaptiveStepReintegrationOn();
    }
    else
    {
      op->vtkLagrangianParticleTracker::AdaptiveStepReintegrationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_AdaptiveStepReintegrationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveStepReintegrationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdaptiveStepReintegrationOff();
    }
    else
    {
      op->vtkLagrangianParticleTracker::AdaptiveStepReintegrationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetGenerateParticlePathsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateParticlePathsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateParticlePathsOutput(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetGenerateParticlePathsOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetGenerateParticlePathsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateParticlePathsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateParticlePathsOutput() :
      op->vtkLagrangianParticleTracker::GetGenerateParticlePathsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GenerateParticlePathsOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateParticlePathsOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateParticlePathsOutputOn();
    }
    else
    {
      op->vtkLagrangianParticleTracker::GenerateParticlePathsOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GenerateParticlePathsOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateParticlePathsOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateParticlePathsOutputOff();
    }
    else
    {
      op->vtkLagrangianParticleTracker::GenerateParticlePathsOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkLagrangianParticleTracker::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetSurfaceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceData(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetSurfaceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSurface() :
      op->vtkLagrangianParticleTracker::GetSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_SetSurfaceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceConnection(temp0);
    }
    else
    {
      op->vtkLagrangianParticleTracker::SetSurfaceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkLagrangianParticleTracker::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkLagrangianParticleTracker::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLagrangianParticleTracker::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangianParticleTracker_GetNewParticleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNewParticleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangianParticleTracker *op = static_cast<vtkLagrangianParticleTracker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNewParticleId() :
      op->vtkLagrangianParticleTracker::GetNewParticleId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLagrangianParticleTracker_Methods[] = {
  {"IsTypeOf", PyvtkLagrangianParticleTracker_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLagrangianParticleTracker_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLagrangianParticleTracker_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLagrangianParticleTracker\nC++: static vtkLagrangianParticleTracker *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLagrangianParticleTracker_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLagrangianParticleTracker\nC++: vtkLagrangianParticleTracker *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLagrangianParticleTracker_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLagrangianParticleTracker_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetIntegrationModel", PyvtkLagrangianParticleTracker_SetIntegrationModel, METH_VARARGS,
   "SetIntegrationModel(self,\n    integrationModel:vtkLagrangianBasicIntegrationModel) -> None\nC++: void SetIntegrationModel(\n    vtkLagrangianBasicIntegrationModel *integrationModel)\n\nSet/Get the integration model. Default is\nvtkLagrangianMatidaIntegrationModel\n"},
  {"GetIntegrationModel", PyvtkLagrangianParticleTracker_GetIntegrationModel, METH_VARARGS,
   "GetIntegrationModel(self) -> vtkLagrangianBasicIntegrationModel\nC++: vtkLagrangianBasicIntegrationModel *GetIntegrationModel()\n\n"},
  {"SetIntegrator", PyvtkLagrangianParticleTracker_SetIntegrator, METH_VARARGS,
   "SetIntegrator(self, integrator:vtkInitialValueProblemSolver)\n    -> None\nC++: void SetIntegrator(vtkInitialValueProblemSolver *integrator)\n\nSet/Get the integrator. Default is vtkRungeKutta2\n"},
  {"GetIntegrator", PyvtkLagrangianParticleTracker_GetIntegrator, METH_VARARGS,
   "GetIntegrator(self) -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *GetIntegrator()\n\n"},
  {"SetGeneratePolyVertexInteractionOutput", PyvtkLagrangianParticleTracker_SetGeneratePolyVertexInteractionOutput, METH_VARARGS,
   "SetGeneratePolyVertexInteractionOutput(self, _arg:bool) -> None\nC++: virtual void SetGeneratePolyVertexInteractionOutput(\n    bool _arg)\n\nSet/Get whether or not to use PolyVertex cell type for the\ninteraction output Default is false\n"},
  {"GetGeneratePolyVertexInteractionOutput", PyvtkLagrangianParticleTracker_GetGeneratePolyVertexInteractionOutput, METH_VARARGS,
   "GetGeneratePolyVertexInteractionOutput(self) -> bool\nC++: virtual bool GetGeneratePolyVertexInteractionOutput()\n\n"},
  {"SetCellLengthComputationMode", PyvtkLagrangianParticleTracker_SetCellLengthComputationMode, METH_VARARGS,
   "SetCellLengthComputationMode(self, _arg:int) -> None\nC++: virtual void SetCellLengthComputationMode(int _arg)\n\nSet/Get the cell length computation mode. Available modes are :\n- STEP_CUR_CELL_LENGTH : Compute cell length using getLength\n  method on the current cell the particle is in\n- STEP_CUR_CELL_VEL_DIR : Compute cell length using the particle\n  velocity and the edges of the last cell the particle was in.\n- STEP_CUR_CELL_DIV_THEO : Compute cell length using the particle\nvelocity and the divergence theorem.\n"},
  {"GetCellLengthComputationMode", PyvtkLagrangianParticleTracker_GetCellLengthComputationMode, METH_VARARGS,
   "GetCellLengthComputationMode(self) -> int\nC++: virtual int GetCellLengthComputationMode()\n\n"},
  {"SetStepFactor", PyvtkLagrangianParticleTracker_SetStepFactor, METH_VARARGS,
   "SetStepFactor(self, _arg:float) -> None\nC++: virtual void SetStepFactor(double _arg)\n\nSet/Get the integration step factor. Default is 1.0.\n"},
  {"GetStepFactor", PyvtkLagrangianParticleTracker_GetStepFactor, METH_VARARGS,
   "GetStepFactor(self) -> float\nC++: virtual double GetStepFactor()\n\n"},
  {"SetStepFactorMin", PyvtkLagrangianParticleTracker_SetStepFactorMin, METH_VARARGS,
   "SetStepFactorMin(self, _arg:float) -> None\nC++: virtual void SetStepFactorMin(double _arg)\n\nSet/Get the integration step factor min. Default is 0.5.\n"},
  {"GetStepFactorMin", PyvtkLagrangianParticleTracker_GetStepFactorMin, METH_VARARGS,
   "GetStepFactorMin(self) -> float\nC++: virtual double GetStepFactorMin()\n\n"},
  {"SetStepFactorMax", PyvtkLagrangianParticleTracker_SetStepFactorMax, METH_VARARGS,
   "SetStepFactorMax(self, _arg:float) -> None\nC++: virtual void SetStepFactorMax(double _arg)\n\nSet/Get the integration step factor max. Default is 1.5.\n"},
  {"GetStepFactorMax", PyvtkLagrangianParticleTracker_GetStepFactorMax, METH_VARARGS,
   "GetStepFactorMax(self) -> float\nC++: virtual double GetStepFactorMax()\n\n"},
  {"SetMaximumNumberOfSteps", PyvtkLagrangianParticleTracker_SetMaximumNumberOfSteps, METH_VARARGS,
   "SetMaximumNumberOfSteps(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfSteps(int _arg)\n\nSet/Get the maximum number of steps. -1 means no limit. Default\nis 100.\n"},
  {"GetMaximumNumberOfSteps", PyvtkLagrangianParticleTracker_GetMaximumNumberOfSteps, METH_VARARGS,
   "GetMaximumNumberOfSteps(self) -> int\nC++: virtual int GetMaximumNumberOfSteps()\n\n"},
  {"SetMaximumIntegrationTime", PyvtkLagrangianParticleTracker_SetMaximumIntegrationTime, METH_VARARGS,
   "SetMaximumIntegrationTime(self, _arg:float) -> None\nC++: virtual void SetMaximumIntegrationTime(double _arg)\n\nSet/Get the maximum integration time. A negative value means no\nlimit. Default is -1.\n"},
  {"GetMaximumIntegrationTime", PyvtkLagrangianParticleTracker_GetMaximumIntegrationTime, METH_VARARGS,
   "GetMaximumIntegrationTime(self) -> float\nC++: virtual double GetMaximumIntegrationTime()\n\n"},
  {"SetAdaptiveStepReintegration", PyvtkLagrangianParticleTracker_SetAdaptiveStepReintegration, METH_VARARGS,
   "SetAdaptiveStepReintegration(self, _arg:bool) -> None\nC++: virtual void SetAdaptiveStepReintegration(bool _arg)\n\nSet/Get the Adaptive Step Reintegration feature. it checks the\nstep size after the integration and if it is too big will retry\nwith a smaller step Default is false.\n"},
  {"GetAdaptiveStepReintegration", PyvtkLagrangianParticleTracker_GetAdaptiveStepReintegration, METH_VARARGS,
   "GetAdaptiveStepReintegration(self) -> bool\nC++: virtual bool GetAdaptiveStepReintegration()\n\n"},
  {"AdaptiveStepReintegrationOn", PyvtkLagrangianParticleTracker_AdaptiveStepReintegrationOn, METH_VARARGS,
   "AdaptiveStepReintegrationOn(self) -> None\nC++: virtual void AdaptiveStepReintegrationOn()\n\n"},
  {"AdaptiveStepReintegrationOff", PyvtkLagrangianParticleTracker_AdaptiveStepReintegrationOff, METH_VARARGS,
   "AdaptiveStepReintegrationOff(self) -> None\nC++: virtual void AdaptiveStepReintegrationOff()\n\n"},
  {"SetGenerateParticlePathsOutput", PyvtkLagrangianParticleTracker_SetGenerateParticlePathsOutput, METH_VARARGS,
   "SetGenerateParticlePathsOutput(self, _arg:bool) -> None\nC++: virtual void SetGenerateParticlePathsOutput(bool _arg)\n\nSet/Get the generation of the particle path output, Default is\ntrue.\n"},
  {"GetGenerateParticlePathsOutput", PyvtkLagrangianParticleTracker_GetGenerateParticlePathsOutput, METH_VARARGS,
   "GetGenerateParticlePathsOutput(self) -> bool\nC++: virtual bool GetGenerateParticlePathsOutput()\n\n"},
  {"GenerateParticlePathsOutputOn", PyvtkLagrangianParticleTracker_GenerateParticlePathsOutputOn, METH_VARARGS,
   "GenerateParticlePathsOutputOn(self) -> None\nC++: virtual void GenerateParticlePathsOutputOn()\n\n"},
  {"GenerateParticlePathsOutputOff", PyvtkLagrangianParticleTracker_GenerateParticlePathsOutputOff, METH_VARARGS,
   "GenerateParticlePathsOutputOff(self) -> None\nC++: virtual void GenerateParticlePathsOutputOff()\n\n"},
  {"SetSourceData", PyvtkLagrangianParticleTracker_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkDataObject) -> None\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the source object used to generate particle initial\nposition (seeds). Note that this method does not connect the\npipeline. The algorithm will work on the input data as it is\nwithout updating the producer of the data. See\nSetSourceConnection for connecting the pipeline.\n"},
  {"GetSource", PyvtkLagrangianParticleTracker_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkDataObject\nC++: vtkDataObject *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkLagrangianParticleTracker_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the source object used to generate particle initial\nposition (seeds).\n"},
  {"SetSurfaceData", PyvtkLagrangianParticleTracker_SetSurfaceData, METH_VARARGS,
   "SetSurfaceData(self, source:vtkDataObject) -> None\nC++: void SetSurfaceData(vtkDataObject *source)\n\nSpecify the source object used to compute surface interaction\nwith Note that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetSurfaceConnection for connecting\nthe pipeline.\n"},
  {"GetSurface", PyvtkLagrangianParticleTracker_GetSurface, METH_VARARGS,
   "GetSurface(self) -> vtkDataObject\nC++: vtkDataObject *GetSurface()\n\n"},
  {"SetSurfaceConnection", PyvtkLagrangianParticleTracker_SetSurfaceConnection, METH_VARARGS,
   "SetSurfaceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSurfaceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the object used to compute surface interaction with.\n"},
  {"FillInputPortInformation", PyvtkLagrangianParticleTracker_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nDeclare input port type\n"},
  {"FillOutputPortInformation", PyvtkLagrangianParticleTracker_FillOutputPortInformation, METH_VARARGS,
   "FillOutputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillOutputPortInformation(int port, vtkInformation *info)\n     override;\n\nDeclare output port type\n"},
  {"GetMTime", PyvtkLagrangianParticleTracker_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the tracker modified time taking into account the integration\nmodel and the integrator.\n"},
  {"GetNewParticleId", PyvtkLagrangianParticleTracker_GetNewParticleId, METH_VARARGS,
   "GetNewParticleId(self) -> int\nC++: virtual vtkIdType GetNewParticleId()\n\nGet an unique id for a particle This method is thread safe\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLagrangianParticleTracker_Doc =
  "vtkLagrangianParticleTracker - Filter to inject and track particles\nin a flow\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "Introduce LagrangianParticleTracker\n\n"
  "This is a very flexible and adaptive filter to inject and track\n"
  "particles in a flow. It takes three inputs :\n"
  "* port 0 : Flow Input, a volumic dataset containing data to integrate\n"
  "with, any kind of data object, support distributed input.\n"
  "* port 1 : Seed (source) Input, a dataset containing point to\n"
  "  generate particles with, any kind of data object, support\n"
  "  distributed input. Only first leaf of composite dataset is used.\n"
  "* port 2 : Optional Surface Input, containing dataset to interact\n"
  "  with, any kind of data object, support distributed input.\n\n"
  "It has two outputs :\n"
  "* port 0 : ParticlePaths : a multipiece of polyData (one per thread)\n"
  "  of polyLines showing the paths of particles in the flow\n"
  "* port 1 : ParticleInteractions : empty if no surface input, contains\n"
  "a a multiblock with as many children as the number of threads, each\n"
  "  children containing a multiblock with the same structure as the\n"
  "  surfaces. The leafs of these structures contain a polydata of\n"
  "  vertexes corresponding to the interactions. with the same composite\n"
  "layout of surface input if any, showing all interactions between\n"
  "  particles and the surface input.\n\n"
  "It has a parallel implementation which streams particle between\n"
  "domains.\n\n"
  "The most important parameters of this filter is it's\n"
  "integrationModel. Only one integration model implementation exist\n"
  "currently in ParaView ,vtkLagrangianMatidaIntegrationModel but the\n"
  "design enables plugin developers to expand this tracker by creating\n"
  "new models. A model can define  :\n"
  "* The number of integration variable and new user defined integration\n"
  "variable\n"
  "* the way the particle are integrated\n"
  "* the way particles intersect and interact with the surface\n"
  "* the way freeFlight termination is handled\n"
  "* PreProcess and PostProcess methods\n"
  "* Manual Integration, Manual partichle shifting see\n"
  "  vtkLagrangianBasicIntegrationModel and\n"
  "  vtkLagrangianMatidaIntegrationModel for more information\n\n"
  "It also let the user choose the Locator to use when integrating in\n"
  "the flow, as well as the Integrator to use. Integration steps are\n"
  "also highly configurable, step, step min and step max are passed down\n"
  "to the integrator (hence min and max does not matter with a non\n"
  "adaptive integrator like RK4/5)\n\n\n"
  " An IntegrationModel is a very specific vtkFunctionSet with a lot of\n"
  "features allowing inherited classes to concentrate on the\n"
  "mathematical part of the code.\n"
  " a Particle is basically a class wrapper around three table\n"
  "containing variables about the particle at previous, current and next\n"
  "position.\n"
  " The particle is passed to the integrator, which use the integration\n"
  "model to integrate the particle in the flow.\n\n"
  "It has other features also, including :\n"
  "* Adaptative Step Reintegration, to retry the step with different\n"
  "  time step when the next position is too far\n"
  "* Different kind of cell length computation, including a divergence\n"
  "  theorem based computation\n"
  "* Optional lines rendering controlled by a threshold\n"
  "* Ghost cell support\n"
  "* Non planar quad interaction support\n"
  "* Built-in support for surface interaction including, terminate,\n"
  "  bounce, break-up and pass-through surface The serial and parallel\n"
  "  filters are fully tested.\n\n"
  "@sa\n"
  "vtkLagrangianMatidaIntegrationModel vtkLagrangianParticle\n"
  "vtkLagrangianBasicIntegrationModel\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLagrangianParticleTracker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkLagrangianParticleTracker", // tp_name
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
  PyvtkLagrangianParticleTracker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLagrangianParticleTracker_StaticNew()
{
  return vtkLagrangianParticleTracker::New();
}

PyObject *PyvtkLagrangianParticleTracker_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLagrangianParticleTracker_Type, PyvtkLagrangianParticleTracker_Methods,
    "vtkLagrangianParticleTracker",
 &PyvtkLagrangianParticleTracker_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLagrangianParticleTracker_CellLengthComputation_Type);
  PyVTKEnum_Add(&PyvtkLagrangianParticleTracker_CellLengthComputation_Type, "vtkLagrangianParticleTracker.CellLengthComputation");

  o = (PyObject *)&PyvtkLagrangianParticleTracker_CellLengthComputation_Type;
  if (PyDict_SetItemString(d, "CellLengthComputation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkLagrangianParticleTracker::CellLengthComputation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "STEP_CUR_CELL_LENGTH", vtkLagrangianParticleTracker::STEP_CUR_CELL_LENGTH },
        { "STEP_CUR_CELL_VEL_DIR", vtkLagrangianParticleTracker::STEP_CUR_CELL_VEL_DIR },
        { "STEP_CUR_CELL_DIV_THEO", vtkLagrangianParticleTracker::STEP_CUR_CELL_DIV_THEO },
      };

    o = PyvtkLagrangianParticleTracker_CellLengthComputation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangianParticleTracker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangianParticleTracker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangianParticleTracker", o) != 0)
  {
    Py_DECREF(o);
  }

}

