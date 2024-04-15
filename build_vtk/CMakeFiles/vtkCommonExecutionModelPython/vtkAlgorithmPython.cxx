// python wrapper for vtkAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAlgorithm.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAlgorithm(PyObject *dict); }
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAlgorithm_DesiredOutputPrecision_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkAlgorithm.DesiredOutputPrecision", // tp_name
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
PyObject *PyvtkAlgorithm_DesiredOutputPrecision_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAlgorithm_DesiredOutputPrecision_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAlgorithm_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAlgorithm *tempr = vtkAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAlgorithm::NewInstance());

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
PyvtkAlgorithm_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAlgorithm::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAlgorithm::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_HasExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasExecutive() :
      op->vtkAlgorithm::HasExecutive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetExecutive() :
      op->vtkAlgorithm::GetExecutive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetExecutive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkExecutive *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
  {
    if (ap.IsBound())
    {
      op->SetExecutive(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetExecutive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_ProcessRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  vtkInformationVector *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkCollection") &&
      ap.GetVTKObject(temp2, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessRequest(temp0, temp1, temp2) :
      op->vtkAlgorithm::ProcessRequest(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_ModifyRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModifyRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ModifyRequest(temp0, temp1) :
      op->vtkAlgorithm::ModifyRequest(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputPortInformation(temp0) :
      op->vtkAlgorithm::GetInputPortInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetOutputPortInformation(temp0) :
      op->vtkAlgorithm::GetOutputPortInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkAlgorithm::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformation(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetNumberOfInputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputPorts() :
      op->vtkAlgorithm::GetNumberOfInputPorts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetNumberOfOutputPorts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOutputPorts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOutputPorts() :
      op->vtkAlgorithm::GetNumberOfOutputPorts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkAlgorithm::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetAbortExecuteAndUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortExecuteAndUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAbortExecuteAndUpdateTime();
    }
    else
    {
      op->vtkAlgorithm::SetAbortExecuteAndUpdateTime();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetAbortExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbortExecute(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetAbortExecute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetAbortExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAbortExecute() :
      op->vtkAlgorithm::GetAbortExecute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_AbortExecuteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortExecuteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortExecuteOn();
    }
    else
    {
      op->vtkAlgorithm::AbortExecuteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_AbortExecuteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortExecuteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortExecuteOff();
    }
    else
    {
      op->vtkAlgorithm::AbortExecuteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgress() :
      op->vtkAlgorithm::GetProgress());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateProgress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateProgress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateProgress(temp0);
    }
    else
    {
      op->vtkAlgorithm::UpdateProgress(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_CheckAbort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAbort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CheckAbort() :
      op->vtkAlgorithm::CheckAbort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetContainerAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainerAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetContainerAlgorithm(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetContainerAlgorithm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetContainerAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainerAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetContainerAlgorithm() :
      op->vtkAlgorithm::GetContainerAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetAbortOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbortOutput(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetAbortOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetAbortOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAbortOutput() :
      op->vtkAlgorithm::GetAbortOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetProgressShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetProgressShiftScale(temp0, temp1);
    }
    else
    {
      op->vtkAlgorithm::SetProgressShiftScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressShift() :
      op->vtkAlgorithm::GetProgressShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressScale() :
      op->vtkAlgorithm::GetProgressScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetProgressText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgressText(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetProgressText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetProgressText() :
      op->vtkAlgorithm::GetProgressText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetErrorCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetErrorCode() :
      op->vtkAlgorithm::GetErrorCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_IS_OPTIONAL(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_IS_OPTIONAL");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::INPUT_IS_OPTIONAL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_IS_REPEATABLE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_IS_REPEATABLE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::INPUT_IS_REPEATABLE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_REQUIRED_FIELDS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_REQUIRED_FIELDS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkAlgorithm::INPUT_REQUIRED_FIELDS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_REQUIRED_DATA_TYPE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_REQUIRED_DATA_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringVectorKey *tempr = vtkAlgorithm::INPUT_REQUIRED_DATA_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_ARRAYS_TO_PROCESS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_ARRAYS_TO_PROCESS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkAlgorithm::INPUT_ARRAYS_TO_PROCESS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_PORT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_PORT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::INPUT_PORT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_INPUT_CONNECTION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "INPUT_CONNECTION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::INPUT_CONNECTION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_CAN_PRODUCE_SUB_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CAN_PRODUCE_SUB_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::CAN_PRODUCE_SUB_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_CAN_HANDLE_PIECE_REQUEST(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CAN_HANDLE_PIECE_REQUEST");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::CAN_HANDLE_PIECE_REQUEST();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_ABORTED(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ABORTED");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkAlgorithm::ABORTED();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkAlgorithm::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAlgorithm_SetInputArrayToProcess_Methods[] = {
  {"SetInputArrayToProcess", PyvtkAlgorithm_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iiiiz"},
  {"SetInputArrayToProcess", PyvtkAlgorithm_SetInputArrayToProcess_s2, METH_VARARGS,
   "@iiiii"},
  {"SetInputArrayToProcess", PyvtkAlgorithm_SetInputArrayToProcess_s4, METH_VARARGS,
   "@iiizz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAlgorithm_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAlgorithm_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetInputArrayInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputArrayInformation(temp0) :
      op->vtkAlgorithm::GetInputArrayInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_RemoveAllInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllInputs();
    }
    else
    {
      op->vtkAlgorithm::RemoveAllInputs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetOutputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetOutputDataObject(temp0) :
      op->vtkAlgorithm::GetOutputDataObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInputDataObject(temp0, temp1) :
      op->vtkAlgorithm::GetInputDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      op->vtkAlgorithm::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      op->vtkAlgorithm::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAlgorithm_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkAlgorithm_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_AddInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkAlgorithm::AddInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddInputConnection(temp0);
    }
    else
    {
      op->vtkAlgorithm::AddInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAlgorithm_AddInputConnection_s1(self, args);
    case 1:
      return PyvtkAlgorithm_AddInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputConnection");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_RemoveInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      op->vtkAlgorithm::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_RemoveInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

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
      op->vtkAlgorithm::RemoveInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAlgorithm_RemoveInputConnection_Methods[] = {
  {"RemoveInputConnection", PyvtkAlgorithm_RemoveInputConnection_s1, METH_VARARGS,
   "@iV *vtkAlgorithmOutput"},
  {"RemoveInputConnection", PyvtkAlgorithm_RemoveInputConnection_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAlgorithm_RemoveInputConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_RemoveInputConnection_Methods;
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
PyvtkAlgorithm_RemoveAllInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllInputConnections(temp0);
    }
    else
    {
      op->vtkAlgorithm::RemoveAllInputConnections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetInputDataObject_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputDataObject(temp0, temp1);
    }
    else
    {
      op->vtkAlgorithm::SetInputDataObject(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputDataObject_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputDataObject(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetInputDataObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_SetInputDataObject(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAlgorithm_SetInputDataObject_s1(self, args);
    case 1:
      return PyvtkAlgorithm_SetInputDataObject_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputDataObject");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_AddInputDataObject_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddInputDataObject(temp0, temp1);
    }
    else
    {
      op->vtkAlgorithm::AddInputDataObject(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputDataObject_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddInputDataObject(temp0);
    }
    else
    {
      op->vtkAlgorithm::AddInputDataObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_AddInputDataObject(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAlgorithm_AddInputDataObject_s1(self, args);
    case 1:
      return PyvtkAlgorithm_AddInputDataObject_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddInputDataObject");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetOutputPort_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputPort(temp0) :
      op->vtkAlgorithm::GetOutputPort(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetOutputPort_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetOutputPort() :
      op->vtkAlgorithm::GetOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetOutputPort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAlgorithm_GetOutputPort_s1(self, args);
    case 0:
      return PyvtkAlgorithm_GetOutputPort_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputPort");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInputConnections(temp0) :
      op->vtkAlgorithm::GetNumberOfInputConnections(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetTotalNumberOfInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfInputConnections() :
      op->vtkAlgorithm::GetTotalNumberOfInputConnections());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetInputConnection(temp0, temp1) :
      op->vtkAlgorithm::GetInputConnection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetInputAlgorithm_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetInputAlgorithm(temp0, temp1, temp2) :
      op->vtkAlgorithm::GetInputAlgorithm(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputAlgorithm_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetInputAlgorithm(temp0, temp1) :
      op->vtkAlgorithm::GetInputAlgorithm(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputAlgorithm_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithm *tempr = (ap.IsBound() ?
      op->GetInputAlgorithm() :
      op->vtkAlgorithm::GetInputAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputAlgorithm(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAlgorithm_GetInputAlgorithm_s1(self, args);
    case 2:
      return PyvtkAlgorithm_GetInputAlgorithm_s2(self, args);
    case 0:
      return PyvtkAlgorithm_GetInputAlgorithm_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInputAlgorithm");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetInputExecutive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetInputExecutive(temp0, temp1) :
      op->vtkAlgorithm::GetInputExecutive(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputExecutive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputExecutive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExecutive *tempr = (ap.IsBound() ?
      op->GetInputExecutive() :
      op->vtkAlgorithm::GetInputExecutive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputExecutive(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAlgorithm_GetInputExecutive_s1(self, args);
    case 0:
      return PyvtkAlgorithm_GetInputExecutive_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInputExecutive");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetInputInformation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputInformation(temp0, temp1) :
      op->vtkAlgorithm::GetInputInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputInformation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInputInformation() :
      op->vtkAlgorithm::GetInputInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetInputInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAlgorithm_GetInputInformation_s1(self, args);
    case 0:
      return PyvtkAlgorithm_GetInputInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInputInformation");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetOutputInformation(temp0) :
      op->vtkAlgorithm::GetOutputInformation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_Update_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Update(temp0);
    }
    else
    {
      op->vtkAlgorithm::Update(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_Update_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkAlgorithm::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_Update_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0, temp1) :
      op->vtkAlgorithm::Update(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_Update_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->Update(temp0) :
      op->vtkAlgorithm::Update(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAlgorithm_Update_Methods[] = {
  {"Update", PyvtkAlgorithm_Update_s1, METH_VARARGS,
   "@i"},
  {"Update", PyvtkAlgorithm_Update_s4, METH_VARARGS,
   "@V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAlgorithm_Update(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_Update_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAlgorithm_Update_s2(self, args);
    case 2:
      return PyvtkAlgorithm_Update_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Update");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_UpdatePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = 0;
  int store3[6];
  int *temp3 = nullptr;
  if (ap.GetArgSize(3) > 0)
  {
    size3 = 6;
    temp3 = store3;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    int tempr = (ap.IsBound() ?
      op->UpdatePiece(temp0, temp1, temp2, temp3) :
      op->vtkAlgorithm::UpdatePiece(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateExtent(temp0) :
      op->vtkAlgorithm::UpdateExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  double temp0;
  int temp1 = -1;
  int temp2 = 1;
  int temp3 = 0;
  size_t size4 = 0;
  int store4[6];
  int *temp4 = nullptr;
  if (ap.GetArgSize(4) > 0)
  {
    size4 = 6;
    temp4 = store4;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 5) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateTimeStep(temp0, temp1, temp2, temp3, temp4) :
      op->vtkAlgorithm::UpdateTimeStep(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateInformation();
    }
    else
    {
      op->vtkAlgorithm::UpdateInformation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateDataObject();
    }
    else
    {
      op->vtkAlgorithm::UpdateDataObject();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_PropagateUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PropagateUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PropagateUpdateExtent();
    }
    else
    {
      op->vtkAlgorithm::PropagateUpdateExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateWholeExtent();
    }
    else
    {
      op->vtkAlgorithm::UpdateWholeExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_ConvertTotalInputToPortConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertTotalInputToPortConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ConvertTotalInputToPortConnection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAlgorithm::ConvertTotalInputToPortConnection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_SetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReleaseDataFlag(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetReleaseDataFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetReleaseDataFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReleaseDataFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReleaseDataFlag() :
      op->vtkAlgorithm::GetReleaseDataFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_ReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseDataFlagOn();
    }
    else
    {
      op->vtkAlgorithm::ReleaseDataFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_ReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseDataFlagOff();
    }
    else
    {
      op->vtkAlgorithm::ReleaseDataFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateExtentIsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateExtentIsEmpty(temp0, temp1) :
      op->vtkAlgorithm::UpdateExtentIsEmpty(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateExtentIsEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateExtentIsEmpty(temp0, temp1) :
      op->vtkAlgorithm::UpdateExtentIsEmpty(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAlgorithm_UpdateExtentIsEmpty_Methods[] = {
  {"UpdateExtentIsEmpty", PyvtkAlgorithm_UpdateExtentIsEmpty_s1, METH_VARARGS,
   "@VV *vtkInformation *vtkDataObject"},
  {"UpdateExtentIsEmpty", PyvtkAlgorithm_UpdateExtentIsEmpty_s2, METH_VARARGS,
   "@Vi *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAlgorithm_UpdateExtentIsEmpty(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_UpdateExtentIsEmpty_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UpdateExtentIsEmpty");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_SetDefaultExecutivePrototype(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDefaultExecutivePrototype");

  vtkExecutive *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
  {
    vtkAlgorithm::SetDefaultExecutivePrototype(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetUpdateExtent() :
      op->vtkAlgorithm::GetUpdateExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetUpdateExtent(temp0) :
      op->vtkAlgorithm::GetUpdateExtent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkAlgorithm::GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkAlgorithm::GetUpdateExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateExtent_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetUpdateExtent(temp0);
    }
    else
    {
      op->vtkAlgorithm::GetUpdateExtent(temp0);
    }

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
PyvtkAlgorithm_GetUpdateExtent_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetUpdateExtent(temp0, temp1);
    }
    else
    {
      op->vtkAlgorithm::GetUpdateExtent(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAlgorithm_GetUpdateExtent_Methods[] = {
  {"GetUpdateExtent", PyvtkAlgorithm_GetUpdateExtent_s2, METH_VARARGS,
   "@i"},
  {"GetUpdateExtent", PyvtkAlgorithm_GetUpdateExtent_s5, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAlgorithm_GetUpdateExtent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAlgorithm_GetUpdateExtent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAlgorithm_GetUpdateExtent_s1(self, args);
    case 6:
      return PyvtkAlgorithm_GetUpdateExtent_s3(self, args);
    case 7:
      return PyvtkAlgorithm_GetUpdateExtent_s4(self, args);
    case 2:
      return PyvtkAlgorithm_GetUpdateExtent_s6(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateExtent");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetUpdatePiece_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpdatePiece() :
      op->vtkAlgorithm::GetUpdatePiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdatePiece_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdatePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpdatePiece(temp0) :
      op->vtkAlgorithm::GetUpdatePiece(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdatePiece(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAlgorithm_GetUpdatePiece_s1(self, args);
    case 1:
      return PyvtkAlgorithm_GetUpdatePiece_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdatePiece");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetUpdateNumberOfPieces_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpdateNumberOfPieces() :
      op->vtkAlgorithm::GetUpdateNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateNumberOfPieces_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpdateNumberOfPieces(temp0) :
      op->vtkAlgorithm::GetUpdateNumberOfPieces(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateNumberOfPieces(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAlgorithm_GetUpdateNumberOfPieces_s1(self, args);
    case 1:
      return PyvtkAlgorithm_GetUpdateNumberOfPieces_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateNumberOfPieces");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_GetUpdateGhostLevel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpdateGhostLevel() :
      op->vtkAlgorithm::GetUpdateGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateGhostLevel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpdateGhostLevel(temp0) :
      op->vtkAlgorithm::GetUpdateGhostLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAlgorithm_GetUpdateGhostLevel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAlgorithm_GetUpdateGhostLevel_s1(self, args);
    case 1:
      return PyvtkAlgorithm_GetUpdateGhostLevel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUpdateGhostLevel");
  return nullptr;
}


static PyObject *
PyvtkAlgorithm_SetProgressObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  vtkProgressObserver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProgressObserver"))
  {
    if (ap.IsBound())
    {
      op->SetProgressObserver(temp0);
    }
    else
    {
      op->vtkAlgorithm::SetProgressObserver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAlgorithm_GetProgressObserver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressObserver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAlgorithm *op = static_cast<vtkAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgressObserver *tempr = (ap.IsBound() ?
      op->GetProgressObserver() :
      op->vtkAlgorithm::GetProgressObserver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkAlgorithm_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAlgorithm_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAlgorithm_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAlgorithm\nC++: static vtkAlgorithm *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAlgorithm_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAlgorithm\nC++: vtkAlgorithm *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAlgorithm_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAlgorithm_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"HasExecutive", PyvtkAlgorithm_HasExecutive, METH_VARARGS,
   "HasExecutive(self) -> int\nC++: vtkTypeBool HasExecutive()\n\nCheck whether this algorithm has an assigned executive.  This\nwill NOT create a default executive.\n"},
  {"GetExecutive", PyvtkAlgorithm_GetExecutive, METH_VARARGS,
   "GetExecutive(self) -> vtkExecutive\nC++: vtkExecutive *GetExecutive()\n\nGet this algorithm's executive.  If it has none, a default\nexecutive will be created.\n"},
  {"SetExecutive", PyvtkAlgorithm_SetExecutive, METH_VARARGS,
   "SetExecutive(self, executive:vtkExecutive) -> None\nC++: virtual void SetExecutive(vtkExecutive *executive)\n\nSet this algorithm's executive.  This algorithm is removed from\nany executive to which it has previously been assigned and then\nassigned to the given executive.\n"},
  {"ProcessRequest", PyvtkAlgorithm_ProcessRequest, METH_VARARGS,
   "ProcessRequest(self, request:vtkInformation, inInfo:vtkCollection,\n     outInfo:vtkInformationVector) -> int\nC++: vtkTypeBool ProcessRequest(vtkInformation *request,\n    vtkCollection *inInfo, vtkInformationVector *outInfo)\n\nVersion of ProcessRequest() that is wrapped. This converts the\ncollection to an array and calls the other version.\n"},
  {"ModifyRequest", PyvtkAlgorithm_ModifyRequest, METH_VARARGS,
   "ModifyRequest(self, request:vtkInformation, when:int) -> int\nC++: virtual int ModifyRequest(vtkInformation *request, int when)\n\nThis method gives the algorithm a chance to modify the contents\nof a request before or after (specified in the when argument) it\nis forwarded. The default implementation is empty. Returns 1 on\nsuccess, 0 on failure. When can be either\nvtkExecutive::BeforeForward or vtkExecutive::AfterForward.\n"},
  {"GetInputPortInformation", PyvtkAlgorithm_GetInputPortInformation, METH_VARARGS,
   "GetInputPortInformation(self, port:int) -> vtkInformation\nC++: vtkInformation *GetInputPortInformation(int port)\n\nGet the information object associated with an input port.  There\nis one input port per kind of input to the algorithm.  Each input\nport tells executives what kind of data and downstream requests\nthis algorithm can handle for that input.\n"},
  {"GetOutputPortInformation", PyvtkAlgorithm_GetOutputPortInformation, METH_VARARGS,
   "GetOutputPortInformation(self, port:int) -> vtkInformation\nC++: vtkInformation *GetOutputPortInformation(int port)\n\nGet the information object associated with an output port.  There\nis one output port per output from the algorithm.  Each output\nport tells executives what kind of upstream requests this\nalgorithm can handle for that output.\n"},
  {"GetInformation", PyvtkAlgorithm_GetInformation, METH_VARARGS,
   "GetInformation(self) -> vtkInformation\nC++: virtual vtkInformation *GetInformation()\n\nSet/Get the information object associated with this algorithm.\n"},
  {"SetInformation", PyvtkAlgorithm_SetInformation, METH_VARARGS,
   "SetInformation(self, __a:vtkInformation) -> None\nC++: virtual void SetInformation(vtkInformation *)\n\n"},
  {"GetNumberOfInputPorts", PyvtkAlgorithm_GetNumberOfInputPorts, METH_VARARGS,
   "GetNumberOfInputPorts(self) -> int\nC++: int GetNumberOfInputPorts()\n\nGet the number of input ports used by the algorithm.\n"},
  {"GetNumberOfOutputPorts", PyvtkAlgorithm_GetNumberOfOutputPorts, METH_VARARGS,
   "GetNumberOfOutputPorts(self) -> int\nC++: int GetNumberOfOutputPorts()\n\nGet the number of output ports provided by the algorithm.\n"},
  {"UsesGarbageCollector", PyvtkAlgorithm_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: bool UsesGarbageCollector() override;\n\nParticipate in garbage collection.\n"},
  {"SetAbortExecuteAndUpdateTime", PyvtkAlgorithm_SetAbortExecuteAndUpdateTime, METH_VARARGS,
   "SetAbortExecuteAndUpdateTime(self) -> None\nC++: void SetAbortExecuteAndUpdateTime()\n\nSet AbortExecute Flag and update LastAbortTime.\n"},
  {"SetAbortExecute", PyvtkAlgorithm_SetAbortExecute, METH_VARARGS,
   "SetAbortExecute(self, _arg:int) -> None\nC++: virtual void SetAbortExecute(vtkTypeBool _arg)\n\nSet/Get the AbortExecute flag for the process object. Process\nobjects may handle premature termination of execution in\ndifferent ways.\n"},
  {"GetAbortExecute", PyvtkAlgorithm_GetAbortExecute, METH_VARARGS,
   "GetAbortExecute(self) -> int\nC++: virtual vtkTypeBool GetAbortExecute()\n\n"},
  {"AbortExecuteOn", PyvtkAlgorithm_AbortExecuteOn, METH_VARARGS,
   "AbortExecuteOn(self) -> None\nC++: virtual void AbortExecuteOn()\n\n"},
  {"AbortExecuteOff", PyvtkAlgorithm_AbortExecuteOff, METH_VARARGS,
   "AbortExecuteOff(self) -> None\nC++: virtual void AbortExecuteOff()\n\n"},
  {"GetProgress", PyvtkAlgorithm_GetProgress, METH_VARARGS,
   "GetProgress(self) -> float\nC++: virtual double GetProgress()\n\nGet the execution progress of a process object.\n"},
  {"UpdateProgress", PyvtkAlgorithm_UpdateProgress, METH_VARARGS,
   "UpdateProgress(self, amount:float) -> None\nC++: void UpdateProgress(double amount)\n\nUpdate the progress of the process object. If a ProgressMethod\nexists, executes it.  Then set the Progress ivar to amount. The\nparameter amount should range between (0,1).\n"},
  {"CheckAbort", PyvtkAlgorithm_CheckAbort, METH_VARARGS,
   "CheckAbort(self) -> bool\nC++: bool CheckAbort()\n\nChecks to see if this filter should abort.\n"},
  {"SetContainerAlgorithm", PyvtkAlgorithm_SetContainerAlgorithm, METH_VARARGS,
   "SetContainerAlgorithm(self, containerAlg:vtkAlgorithm) -> None\nC++: void SetContainerAlgorithm(vtkAlgorithm *containerAlg)\n\nSet/get a Container algorithm for this algorithm. Allows this\nalgorithm to check to abort status of its Container algorithm as\nwell as have access to its Container's information.\n"},
  {"GetContainerAlgorithm", PyvtkAlgorithm_GetContainerAlgorithm, METH_VARARGS,
   "GetContainerAlgorithm(self) -> vtkAlgorithm\nC++: vtkAlgorithm *GetContainerAlgorithm()\n\n"},
  {"SetAbortOutput", PyvtkAlgorithm_SetAbortOutput, METH_VARARGS,
   "SetAbortOutput(self, _arg:bool) -> None\nC++: virtual void SetAbortOutput(bool _arg)\n\nSet/Get an internal variable used to communicate between the\nalgorithm and executive. If the executive sees this value is set,\nit will initialize the output data and pass the ABORTED flag\ndownstream.\n\nCheckAbort sets this value to true if the function returns true.\n"},
  {"GetAbortOutput", PyvtkAlgorithm_GetAbortOutput, METH_VARARGS,
   "GetAbortOutput(self) -> bool\nC++: virtual bool GetAbortOutput()\n\n"},
  {"SetProgressShiftScale", PyvtkAlgorithm_SetProgressShiftScale, METH_VARARGS,
   "SetProgressShiftScale(self, shift:float, scale:float) -> None\nC++: void SetProgressShiftScale(double shift, double scale)\n\nSpecify the shift and scale values to use to apply to the\nprogress amount when `UpdateProgress` is called. By default shift\nis set to 0, and scale is set to 1.0. This is useful when the\nvtkAlgorithm instance is used as an internal algorithm to solve\nonly a part of a whole problem.\n\nIf calling on a internal vtkAlgorithm, make sure you take into\nconsideration that values set of the outer vtkAlgorithm as well\nsince the outer vtkAlgorithm itself may be nested in another\nalgorithm.\n\note SetProgressShiftScale does not modify the MTime of the\nalgorithm.\n"},
  {"GetProgressShift", PyvtkAlgorithm_GetProgressShift, METH_VARARGS,
   "GetProgressShift(self) -> float\nC++: virtual double GetProgressShift()\n\n"},
  {"GetProgressScale", PyvtkAlgorithm_GetProgressScale, METH_VARARGS,
   "GetProgressScale(self) -> float\nC++: virtual double GetProgressScale()\n\n"},
  {"SetProgressText", PyvtkAlgorithm_SetProgressText, METH_VARARGS,
   "SetProgressText(self, ptext:str) -> None\nC++: void SetProgressText(const char *ptext)\n\nSet the current text message associated with the progress state.\nThis may be used by a calling process/GUI. Note: Because\nSetProgressText() is called from inside RequestData() it does not\nmodify the algorithm object. Algorithms are not allowed to modify\nthemselves from inside RequestData().\n"},
  {"GetProgressText", PyvtkAlgorithm_GetProgressText, METH_VARARGS,
   "GetProgressText(self) -> str\nC++: virtual char *GetProgressText()\n\n"},
  {"GetErrorCode", PyvtkAlgorithm_GetErrorCode, METH_VARARGS,
   "GetErrorCode(self) -> int\nC++: virtual unsigned long GetErrorCode()\n\nThe error code contains a possible error that occurred while\nreading or writing the file.\n"},
  {"INPUT_IS_OPTIONAL", PyvtkAlgorithm_INPUT_IS_OPTIONAL, METH_VARARGS,
   "INPUT_IS_OPTIONAL() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_IS_OPTIONAL()\n\nKeys used to specify input port requirements.\\ingroup\nInformationKeys\n"},
  {"INPUT_IS_REPEATABLE", PyvtkAlgorithm_INPUT_IS_REPEATABLE, METH_VARARGS,
   "INPUT_IS_REPEATABLE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_IS_REPEATABLE()\n\n\\ingroup InformationKeys\n"},
  {"INPUT_REQUIRED_FIELDS", PyvtkAlgorithm_INPUT_REQUIRED_FIELDS, METH_VARARGS,
   "INPUT_REQUIRED_FIELDS() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *INPUT_REQUIRED_FIELDS(\n    )\n\n\\ingroup InformationKeys\n"},
  {"INPUT_REQUIRED_DATA_TYPE", PyvtkAlgorithm_INPUT_REQUIRED_DATA_TYPE, METH_VARARGS,
   "INPUT_REQUIRED_DATA_TYPE() -> vtkInformationStringVectorKey\nC++: static vtkInformationStringVectorKey *INPUT_REQUIRED_DATA_TYPE(\n    )\n\n\\ingroup InformationKeys\n"},
  {"INPUT_ARRAYS_TO_PROCESS", PyvtkAlgorithm_INPUT_ARRAYS_TO_PROCESS, METH_VARARGS,
   "INPUT_ARRAYS_TO_PROCESS() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *INPUT_ARRAYS_TO_PROCESS(\n    )\n\n\\ingroup InformationKeys\n"},
  {"INPUT_PORT", PyvtkAlgorithm_INPUT_PORT, METH_VARARGS,
   "INPUT_PORT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_PORT()\n\n\\ingroup InformationKeys\n"},
  {"INPUT_CONNECTION", PyvtkAlgorithm_INPUT_CONNECTION, METH_VARARGS,
   "INPUT_CONNECTION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INPUT_CONNECTION()\n\n\\ingroup InformationKeys\n"},
  {"CAN_PRODUCE_SUB_EXTENT", PyvtkAlgorithm_CAN_PRODUCE_SUB_EXTENT, METH_VARARGS,
   "CAN_PRODUCE_SUB_EXTENT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CAN_PRODUCE_SUB_EXTENT()\n\nThis key tells the executive that a particular output port is\ncapable of producing an arbitrary subextent of the whole extent.\nMany image sources and readers fall into this category but some\nsuch as the legacy structured data readers cannot support this\nfeature.\\ingroup InformationKeys\n"},
  {"CAN_HANDLE_PIECE_REQUEST", PyvtkAlgorithm_CAN_HANDLE_PIECE_REQUEST, METH_VARARGS,
   "CAN_HANDLE_PIECE_REQUEST() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CAN_HANDLE_PIECE_REQUEST()\n\nKey that tells the pipeline that a particular algorithm can or\ncannot handle piece request. If a filter cannot handle piece\nrequests and is asked for a piece, the executive will flag an\nerror. If a structured data source cannot handle piece requests\nbut can produce sub-extents (CAN_PRODUCE_SUB_EXTENT), the\nexecutive will use an extent translator to split the extent into\npieces. Otherwise, if a source cannot handle piece requests, the\nexecutive will ask for the whole data for piece 0 and not execute\nthe source for other pieces.\\ingroup InformationKeys\n"},
  {"ABORTED", PyvtkAlgorithm_ABORTED, METH_VARARGS,
   "ABORTED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ABORTED()\n\n\\ingroup InformationKeys\n"},
  {"SetInputArrayToProcess", PyvtkAlgorithm_SetInputArrayToProcess, METH_VARARGS,
   "SetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:int, name:str) -> None\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\nSetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:int, fieldAttributeType:int) -> None\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\nSetInputArrayToProcess(self, idx:int, info:vtkInformation) -> None\nC++: virtual void SetInputArrayToProcess(int idx,\n    vtkInformation *info)\nSetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:str, attributeTypeorName:str) -> None\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nSet the input data arrays that this algorithm will process.\nSpecifically the idx array that this algorithm will process\n(starting from 0) is the array on port, connection with the\nspecified association and name or attribute type (such as\nSCALARS). The fieldAssociation refers to which field in the data\nobject the array is stored. See vtkDataObject::FieldAssociations\nfor detail.\n"},
  {"GetInputArrayInformation", PyvtkAlgorithm_GetInputArrayInformation, METH_VARARGS,
   "GetInputArrayInformation(self, idx:int) -> vtkInformation\nC++: vtkInformation *GetInputArrayInformation(int idx)\n\nGet the info object for the specified input array to this\nalgorithm\n"},
  {"RemoveAllInputs", PyvtkAlgorithm_RemoveAllInputs, METH_VARARGS,
   "RemoveAllInputs(self) -> None\nC++: void RemoveAllInputs()\n\nRemove all the input data.\n"},
  {"GetOutputDataObject", PyvtkAlgorithm_GetOutputDataObject, METH_VARARGS,
   "GetOutputDataObject(self, port:int) -> vtkDataObject\nC++: vtkDataObject *GetOutputDataObject(int port)\n\nGet the data object that will contain the algorithm output for\nthe given port.\n"},
  {"GetInputDataObject", PyvtkAlgorithm_GetInputDataObject, METH_VARARGS,
   "GetInputDataObject(self, port:int, connection:int)\n    -> vtkDataObject\nC++: vtkDataObject *GetInputDataObject(int port, int connection)\n\nGet the data object that will contain the algorithm input for the\ngiven port and given connection.\n"},
  {"SetInputConnection", PyvtkAlgorithm_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, port:int, input:vtkAlgorithmOutput)\n    -> None\nC++: virtual void SetInputConnection(int port,\n    vtkAlgorithmOutput *input)\nSetInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: virtual void SetInputConnection(vtkAlgorithmOutput *input)\n\nSet the connection for the given input port index.  Each input\nport of a filter has a specific purpose.  A port may have zero or\nmore connections and the required number is specified by each\nfilter.  Setting the connection with this method removes all\nother connections from the port.  To add more than one connection\nuse AddInputConnection().\n\n* The input for the connection is the output port of another\n* filter, which is obtained with GetOutputPort().  Typical usage\n  is\n\n* filter2->SetInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {"AddInputConnection", PyvtkAlgorithm_AddInputConnection, METH_VARARGS,
   "AddInputConnection(self, port:int, input:vtkAlgorithmOutput)\n    -> None\nC++: virtual void AddInputConnection(int port,\n    vtkAlgorithmOutput *input)\nAddInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: virtual void AddInputConnection(vtkAlgorithmOutput *input)\n\nAdd a connection to the given input port index.  See\nSetInputConnection() for details on input connections.  This\nmethod is the complement to RemoveInputConnection() in that it\nadds only the connection specified without affecting other\nconnections.  Typical usage is\n\n* filter2->AddInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {"RemoveInputConnection", PyvtkAlgorithm_RemoveInputConnection, METH_VARARGS,
   "RemoveInputConnection(self, port:int, input:vtkAlgorithmOutput)\n    -> None\nC++: virtual void RemoveInputConnection(int port,\n    vtkAlgorithmOutput *input)\nRemoveInputConnection(self, port:int, idx:int) -> None\nC++: virtual void RemoveInputConnection(int port, int idx)\n\nRemove a connection from the given input port index.  See\nSetInputConnection() for details on input connection.  This\nmethod is the complement to AddInputConnection() in that it\nremoves only the connection specified without affecting other\nconnections.  Typical usage is\n\n* filter2->RemoveInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {"RemoveAllInputConnections", PyvtkAlgorithm_RemoveAllInputConnections, METH_VARARGS,
   "RemoveAllInputConnections(self, port:int) -> None\nC++: virtual void RemoveAllInputConnections(int port)\n\nRemoves all input connections.\n"},
  {"SetInputDataObject", PyvtkAlgorithm_SetInputDataObject, METH_VARARGS,
   "SetInputDataObject(self, port:int, data:vtkDataObject) -> None\nC++: virtual void SetInputDataObject(int port,\n    vtkDataObject *data)\nSetInputDataObject(self, data:vtkDataObject) -> None\nC++: virtual void SetInputDataObject(vtkDataObject *data)\n\nSets the data-object as an input on the given port index. Setting\nthe input with this method removes all other connections from the\nport. Internally, this method creates a vtkTrivialProducer\ninstance and sets that as the input-connection for the given\nport. It is safe to call this method repeatedly with the same\ninput data object. The MTime of the vtkAlgorithm will not change\nunless the data object changed.\n"},
  {"AddInputDataObject", PyvtkAlgorithm_AddInputDataObject, METH_VARARGS,
   "AddInputDataObject(self, port:int, data:vtkDataObject) -> None\nC++: virtual void AddInputDataObject(int port,\n    vtkDataObject *data)\nAddInputDataObject(self, data:vtkDataObject) -> None\nC++: virtual void AddInputDataObject(vtkDataObject *data)\n\nAdd the data-object as an input to this given port. This will add\na new input connection on the specified port without affecting\nany existing connections on the same input port.\n"},
  {"GetOutputPort", PyvtkAlgorithm_GetOutputPort, METH_VARARGS,
   "GetOutputPort(self, index:int) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputPort(int index)\nGetOutputPort(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetOutputPort()\n\nGet a proxy object corresponding to the given output port of this\nalgorithm.  The proxy object can be passed to another algorithm's\nSetInputConnection(), AddInputConnection(), and\nRemoveInputConnection() methods to modify pipeline connectivity.\n"},
  {"GetNumberOfInputConnections", PyvtkAlgorithm_GetNumberOfInputConnections, METH_VARARGS,
   "GetNumberOfInputConnections(self, port:int) -> int\nC++: int GetNumberOfInputConnections(int port)\n\nGet the number of inputs currently connected to a port.\n"},
  {"GetTotalNumberOfInputConnections", PyvtkAlgorithm_GetTotalNumberOfInputConnections, METH_VARARGS,
   "GetTotalNumberOfInputConnections(self) -> int\nC++: int GetTotalNumberOfInputConnections()\n\nGet the total number of inputs for this algorithm\n"},
  {"GetInputConnection", PyvtkAlgorithm_GetInputConnection, METH_VARARGS,
   "GetInputConnection(self, port:int, index:int)\n    -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetInputConnection(int port, int index)\n\nGet the algorithm output port connected to an input port.\n"},
  {"GetInputAlgorithm", PyvtkAlgorithm_GetInputAlgorithm, METH_VARARGS,
   "GetInputAlgorithm(self, port:int, index:int, algPort:int)\n    -> vtkAlgorithm\nC++: vtkAlgorithm *GetInputAlgorithm(int port, int index,\n    int &algPort)\nGetInputAlgorithm(self, port:int, index:int) -> vtkAlgorithm\nC++: vtkAlgorithm *GetInputAlgorithm(int port, int index)\nGetInputAlgorithm(self) -> vtkAlgorithm\nC++: vtkAlgorithm *GetInputAlgorithm()\n\nReturns the algorithm and the output port index of that algorithm\nconnected to a port-index pair.\n"},
  {"GetInputExecutive", PyvtkAlgorithm_GetInputExecutive, METH_VARARGS,
   "GetInputExecutive(self, port:int, index:int) -> vtkExecutive\nC++: vtkExecutive *GetInputExecutive(int port, int index)\nGetInputExecutive(self) -> vtkExecutive\nC++: vtkExecutive *GetInputExecutive()\n\nReturns the executive associated with a particular input\nconnection.\n"},
  {"GetInputInformation", PyvtkAlgorithm_GetInputInformation, METH_VARARGS,
   "GetInputInformation(self, port:int, index:int) -> vtkInformation\nC++: vtkInformation *GetInputInformation(int port, int index)\nGetInputInformation(self) -> vtkInformation\nC++: vtkInformation *GetInputInformation()\n\nReturn the information object that is associated with a\nparticular input connection. This can be used to get meta-data\ncoming from the REQUEST_INFORMATION pass and set requests for the\nREQUEST_UPDATE_EXTENT pass. NOTE: Do not use this in any of the\npipeline passes. Use the information objects passed as arguments\ninstead.\n"},
  {"GetOutputInformation", PyvtkAlgorithm_GetOutputInformation, METH_VARARGS,
   "GetOutputInformation(self, port:int) -> vtkInformation\nC++: vtkInformation *GetOutputInformation(int port)\n\nReturn the information object that is associated with a\nparticular output port. This can be used to set meta-data coming\nduring the REQUEST_INFORMATION. NOTE: Do not use this in any of\nthe pipeline passes. Use the information objects passed as\narguments instead.\n"},
  {"Update", PyvtkAlgorithm_Update, METH_VARARGS,
   "Update(self, port:int) -> None\nC++: virtual void Update(int port)\nUpdate(self) -> None\nC++: virtual void Update()\nUpdate(self, port:int, requests:vtkInformationVector) -> int\nC++: virtual vtkTypeBool Update(int port,\n    vtkInformationVector *requests)\nUpdate(self, requests:vtkInformation) -> int\nC++: virtual vtkTypeBool Update(vtkInformation *requests)\n\nBring this algorithm's outputs up-to-date.\n"},
  {"UpdatePiece", PyvtkAlgorithm_UpdatePiece, METH_VARARGS,
   "UpdatePiece(self, piece:int, numPieces:int, ghostLevels:int,\n    extents:(int, int, int, int, int, int)=...) -> int\nC++: virtual int UpdatePiece(int piece, int numPieces,\n    int ghostLevels, const int extents[6]=nullptr)\n\nConvenience method to update an algorithm after passing requests\nto its first output port. See documentation for Update(int port,\nvtkInformationVector* requests) for details. Supports piece and\nextent (optional) requests.\n"},
  {"UpdateExtent", PyvtkAlgorithm_UpdateExtent, METH_VARARGS,
   "UpdateExtent(self, extents:(int, int, int, int, int, int)) -> int\nC++: virtual int UpdateExtent(const int extents[6])\n\nConvenience method to update an algorithm after passing requests\nto its first output port. Supports extent request.\n"},
  {"UpdateTimeStep", PyvtkAlgorithm_UpdateTimeStep, METH_VARARGS,
   "UpdateTimeStep(self, time:float, piece:int=-1, numPieces:int=1,\n    ghostLevels:int=0, extents:(int, int, int, int, int, int)=...)\n     -> int\nC++: virtual int UpdateTimeStep(double time, int piece=-1,\n    int numPieces=1, int ghostLevels=0,\n    const int extents[6]=nullptr)\n\nConvenience method to update an algorithm after passing requests\nto its first output port. See documentation for Update(int port,\nvtkInformationVector* requests) for details. Supports time, piece\n(optional) and extent (optional) requests.\n"},
  {"UpdateInformation", PyvtkAlgorithm_UpdateInformation, METH_VARARGS,
   "UpdateInformation(self) -> None\nC++: virtual void UpdateInformation()\n\nBring the algorithm's information up-to-date.\n"},
  {"UpdateDataObject", PyvtkAlgorithm_UpdateDataObject, METH_VARARGS,
   "UpdateDataObject(self) -> None\nC++: virtual void UpdateDataObject()\n\nCreate output object(s).\n"},
  {"PropagateUpdateExtent", PyvtkAlgorithm_PropagateUpdateExtent, METH_VARARGS,
   "PropagateUpdateExtent(self) -> None\nC++: virtual void PropagateUpdateExtent()\n\nPropagate meta-data upstream.\n"},
  {"UpdateWholeExtent", PyvtkAlgorithm_UpdateWholeExtent, METH_VARARGS,
   "UpdateWholeExtent(self) -> None\nC++: virtual void UpdateWholeExtent()\n\nBring this algorithm's outputs up-to-date.\n"},
  {"ConvertTotalInputToPortConnection", PyvtkAlgorithm_ConvertTotalInputToPortConnection, METH_VARARGS,
   "ConvertTotalInputToPortConnection(self, ind:int, port:int,\n    conn:int) -> None\nC++: void ConvertTotalInputToPortConnection(int ind, int &port,\n    int &conn)\n\nConvenience routine to convert from a linear ordering of input\nconnections to a port/connection pair.\n"},
  {"SetReleaseDataFlag", PyvtkAlgorithm_SetReleaseDataFlag, METH_VARARGS,
   "SetReleaseDataFlag(self, __a:int) -> None\nC++: virtual void SetReleaseDataFlag(vtkTypeBool)\n\nTurn release data flag on or off for all output ports.\n"},
  {"GetReleaseDataFlag", PyvtkAlgorithm_GetReleaseDataFlag, METH_VARARGS,
   "GetReleaseDataFlag(self) -> int\nC++: virtual vtkTypeBool GetReleaseDataFlag()\n\n"},
  {"ReleaseDataFlagOn", PyvtkAlgorithm_ReleaseDataFlagOn, METH_VARARGS,
   "ReleaseDataFlagOn(self) -> None\nC++: void ReleaseDataFlagOn()\n\n"},
  {"ReleaseDataFlagOff", PyvtkAlgorithm_ReleaseDataFlagOff, METH_VARARGS,
   "ReleaseDataFlagOff(self) -> None\nC++: void ReleaseDataFlagOff()\n\n"},
  {"UpdateExtentIsEmpty", PyvtkAlgorithm_UpdateExtentIsEmpty, METH_VARARGS,
   "UpdateExtentIsEmpty(self, pinfo:vtkInformation,\n    output:vtkDataObject) -> int\nC++: int UpdateExtentIsEmpty(vtkInformation *pinfo,\n    vtkDataObject *output)\nUpdateExtentIsEmpty(self, pinfo:vtkInformation, extentType:int)\n    -> int\nC++: int UpdateExtentIsEmpty(vtkInformation *pinfo,\n    int extentType)\n\nThis detects when the UpdateExtent will generate no data This\ncondition is satisfied when the UpdateExtent has zero volume\n(0,-1,...) or the UpdateNumberOfPieces is 0. The source uses this\ncall to determine whether to call Execute.\n"},
  {"SetDefaultExecutivePrototype", PyvtkAlgorithm_SetDefaultExecutivePrototype, METH_VARARGS,
   "SetDefaultExecutivePrototype(proto:vtkExecutive) -> None\nC++: static void SetDefaultExecutivePrototype(vtkExecutive *proto)\n\nIf the DefaultExecutivePrototype is set, a copy of it is created\nin CreateDefaultExecutive() using NewInstance().\n"},
  {"GetUpdateExtent", PyvtkAlgorithm_GetUpdateExtent, METH_VARARGS,
   "GetUpdateExtent(self) -> (int, int, int, int, int, int)\nC++: int *GetUpdateExtent()\nGetUpdateExtent(self, port:int) -> (int, int, int, int, int, int)\nC++: int *GetUpdateExtent(int port)\nGetUpdateExtent(self, x0:int, x1:int, y0:int, y1:int, z0:int,\n    z1:int) -> None\nC++: void GetUpdateExtent(int &x0, int &x1, int &y0, int &y1,\n    int &z0, int &z1)\nGetUpdateExtent(self, port:int, x0:int, x1:int, y0:int, y1:int,\n    z0:int, z1:int) -> None\nC++: void GetUpdateExtent(int port, int &x0, int &x1, int &y0,\n    int &y1, int &z0, int &z1)\nGetUpdateExtent(self, extent:[int, int, int, int, int, int])\n    -> None\nC++: void GetUpdateExtent(int extent[6])\nGetUpdateExtent(self, port:int, extent:[int, int, int, int, int,\n    int]) -> None\nC++: void GetUpdateExtent(int port, int extent[6])\n\nThese functions return the update extent for output ports that\nuse 3D extents. Where port is not specified, it is assumed to be\n0.\n"},
  {"GetUpdatePiece", PyvtkAlgorithm_GetUpdatePiece, METH_VARARGS,
   "GetUpdatePiece(self) -> int\nC++: int GetUpdatePiece()\nGetUpdatePiece(self, port:int) -> int\nC++: int GetUpdatePiece(int port)\n\nThese functions return the update extent for output ports that\nuse piece extents. Where port is not specified, it is assumed to\nbe 0.\n"},
  {"GetUpdateNumberOfPieces", PyvtkAlgorithm_GetUpdateNumberOfPieces, METH_VARARGS,
   "GetUpdateNumberOfPieces(self) -> int\nC++: int GetUpdateNumberOfPieces()\nGetUpdateNumberOfPieces(self, port:int) -> int\nC++: int GetUpdateNumberOfPieces(int port)\n\n"},
  {"GetUpdateGhostLevel", PyvtkAlgorithm_GetUpdateGhostLevel, METH_VARARGS,
   "GetUpdateGhostLevel(self) -> int\nC++: int GetUpdateGhostLevel()\nGetUpdateGhostLevel(self, port:int) -> int\nC++: int GetUpdateGhostLevel(int port)\n\n"},
  {"SetProgressObserver", PyvtkAlgorithm_SetProgressObserver, METH_VARARGS,
   "SetProgressObserver(self, __a:vtkProgressObserver) -> None\nC++: void SetProgressObserver(vtkProgressObserver *)\n\nIf an ProgressObserver is set, the algorithm will report progress\nthrough it rather than directly. This means that it will call\nUpdateProgress() on the ProgressObserver rather than itself\nreport it and set progress. This is most useful in situations\nwhere multiple threads are executing an algorithm at the same\ntime and want to handle progress locally.\n"},
  {"GetProgressObserver", PyvtkAlgorithm_GetProgressObserver, METH_VARARGS,
   "GetProgressObserver(self) -> vtkProgressObserver\nC++: virtual vtkProgressObserver *GetProgressObserver()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAlgorithm_Doc =
  "vtkAlgorithm - Superclass for all sources, filters, and sinks in VTK.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAlgorithm is the superclass for all sources, filters, and sinks in\n"
  "VTK.  It defines a generalized interface for executing data\n"
  "processing algorithms.  Pipeline connections are associated with\n"
  "input and output ports that are independent of the type of data\n"
  "passing through the connections.\n\n"
  "Instances may be used independently or within pipelines with a\n"
  "variety of architectures and update mechanisms.  Pipelines are\n"
  "controlled by instances of vtkExecutive.  Every vtkAlgorithm instance\n"
  "has an associated vtkExecutive when it is used in a pipeline.  The\n"
  "executive is responsible for data flow.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkAlgorithm", // tp_name
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
  PyvtkAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAlgorithm_StaticNew()
{
  return vtkAlgorithm::New();
}

PyObject *PyvtkAlgorithm_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAlgorithm_Type, PyvtkAlgorithm_Methods,
    "vtkAlgorithm",
 &PyvtkAlgorithm_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAlgorithm_DesiredOutputPrecision_Type);
  PyVTKEnum_Add(&PyvtkAlgorithm_DesiredOutputPrecision_Type, "vtkAlgorithm.DesiredOutputPrecision");

  o = (PyObject *)&PyvtkAlgorithm_DesiredOutputPrecision_Type;
  if (PyDict_SetItemString(d, "DesiredOutputPrecision", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkAlgorithm::DesiredOutputPrecision cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "SINGLE_PRECISION", vtkAlgorithm::SINGLE_PRECISION },
        { "DOUBLE_PRECISION", vtkAlgorithm::DOUBLE_PRECISION },
        { "DEFAULT_PRECISION", vtkAlgorithm::DEFAULT_PRECISION },
      };

    o = PyvtkAlgorithm_DesiredOutputPrecision_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

