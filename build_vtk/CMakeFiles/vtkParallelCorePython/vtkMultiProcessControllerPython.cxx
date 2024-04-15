// python wrapper for vtkMultiProcessController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiProcessController(PyObject *dict); }
extern "C" { PyObject *PyvtkMultiProcessController_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiProcessController_Errors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkMultiProcessController.Errors", // tp_name
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
PyObject *PyvtkMultiProcessController_Errors_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMultiProcessController_Errors_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiProcessController_Consts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkMultiProcessController.Consts", // tp_name
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
PyObject *PyvtkMultiProcessController_Consts_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMultiProcessController_Consts_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiProcessController_Tags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkMultiProcessController.Tags", // tp_name
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
PyObject *PyvtkMultiProcessController_Tags_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMultiProcessController_Tags_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMultiProcessController_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiProcessController::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiProcessController::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiProcessController *tempr = vtkMultiProcessController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiProcessController::NewInstance());

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
PyvtkMultiProcessController_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMultiProcessController::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMultiProcessController::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Finalize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->Finalize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMultiProcessController_Finalize_s1(self, args);
    case 1:
      return PyvtkMultiProcessController_Finalize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfProcesses(temp0);
    }
    else
    {
      op->vtkMultiProcessController::SetNumberOfProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkMultiProcessController::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetSingleProcessObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleProcessObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkProcess *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcess"))
  {
    if (ap.IsBound())
    {
      op->SetSingleProcessObject(temp0);
    }
    else
    {
      op->vtkMultiProcessController::SetSingleProcessObject(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->SingleMethodExecute();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->MultipleMethodExecute();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkMultiProcessController::GetLocalProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetGlobalController(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalController");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = vtkMultiProcessController::GetGlobalController();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->CreateOutputWindow();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_CreateSubController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateSubController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkProcessGroup *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->CreateSubController(temp0) :
      op->vtkMultiProcessController::CreateSubController(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_PartitionController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PartitionController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->PartitionController(temp0, temp1) :
      op->vtkMultiProcessController::PartitionController(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveFirstRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFirstRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveFirstRMI(temp0) :
      op->vtkMultiProcessController::RemoveFirstRMI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveRMI(temp0) :
      op->vtkMultiProcessController::RemoveRMI(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveAllRMICallbacks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllRMICallbacks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllRMICallbacks(temp0);
    }
    else
    {
      op->vtkMultiProcessController::RemoveAllRMICallbacks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_RemoveRMICallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveRMICallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveRMICallback(temp0) :
      op->vtkMultiProcessController::RemoveRMICallback(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_TriggerRMI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->TriggerRMI(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->TriggerRMI(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->TriggerRMI(temp0, temp1);
    }
    else
    {
      op->vtkMultiProcessController::TriggerRMI(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMultiProcessController_TriggerRMI_s1(self, args);
    case 3:
      return PyvtkMultiProcessController_TriggerRMI_s2(self, args);
    case 2:
      return PyvtkMultiProcessController_TriggerRMI_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TriggerRMI");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_TriggerBreakRMIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerBreakRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriggerBreakRMIs();
    }
    else
    {
      op->vtkMultiProcessController::TriggerBreakRMIs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->TriggerRMIOnAllChildren(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->TriggerRMIOnAllChildren(temp0, temp1);
    }
    else
    {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->TriggerRMIOnAllChildren(temp0);
    }
    else
    {
      op->vtkMultiProcessController::TriggerRMIOnAllChildren(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_TriggerRMIOnAllChildren(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s1(self, args);
    case 2:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s2(self, args);
    case 1:
      return PyvtkMultiProcessController_TriggerRMIOnAllChildren_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TriggerRMIOnAllChildren");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_BroadcastTriggerRMIOnAllChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastTriggerRMIOnAllChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->BroadcastTriggerRMIOnAllChildren(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMultiProcessController::BroadcastTriggerRMIOnAllChildren(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkMultiProcessController_ProcessRMIs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessRMIs(temp0, temp1) :
      op->vtkMultiProcessController::ProcessRMIs(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ProcessRMIs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ProcessRMIs() :
      op->vtkMultiProcessController::ProcessRMIs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ProcessRMIs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return PyvtkMultiProcessController_ProcessRMIs_s1(self, args);
    case 0:
      return PyvtkMultiProcessController_ProcessRMIs_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ProcessRMIs");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_BroadcastProcessRMIs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastProcessRMIs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->BroadcastProcessRMIs(temp0, temp1) :
      op->vtkMultiProcessController::BroadcastProcessRMIs(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetBreakFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBreakFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBreakFlag(temp0);
    }
    else
    {
      op->vtkMultiProcessController::SetBreakFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetBreakFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBreakFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBreakFlag() :
      op->vtkMultiProcessController::GetBreakFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetBroadcastTriggerRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBroadcastTriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBroadcastTriggerRMI(temp0);
    }
    else
    {
      op->vtkMultiProcessController::SetBroadcastTriggerRMI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetBroadcastTriggerRMI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBroadcastTriggerRMI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBroadcastTriggerRMI() :
      op->vtkMultiProcessController::GetBroadcastTriggerRMI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_BroadcastTriggerRMIOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastTriggerRMIOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BroadcastTriggerRMIOn();
    }
    else
    {
      op->vtkMultiProcessController::BroadcastTriggerRMIOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_BroadcastTriggerRMIOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastTriggerRMIOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BroadcastTriggerRMIOff();
    }
    else
    {
      op->vtkMultiProcessController::BroadcastTriggerRMIOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetCommunicator() :
      op->vtkMultiProcessController::GetCommunicator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetBreakRMITag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBreakRMITag");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMultiProcessController::GetBreakRMITag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetRMITag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRMITag");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMultiProcessController::GetRMITag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetRMIArgTag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRMIArgTag");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMultiProcessController::GetRMIArgTag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Barrier();
    }
    else
    {
      op->vtkMultiProcessController::Barrier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_SetGlobalController(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalController");

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    vtkMultiProcessController::SetGlobalController(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Send_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Send_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(*temp0, temp1, temp2) :
      op->vtkMultiProcessController::Send(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Send_Methods[] = {
  {"Send", PyvtkMultiProcessController_Send_s1, METH_VARARGS,
   "@Pkii *i"},
  {"Send", PyvtkMultiProcessController_Send_s2, METH_VARARGS,
   "@Pkii *l"},
  {"Send", PyvtkMultiProcessController_Send_s3, METH_VARARGS,
   "@zkii"},
  {"Send", PyvtkMultiProcessController_Send_s4, METH_VARARGS,
   "@Pkii *d"},
  {"Send", PyvtkMultiProcessController_Send_s5, METH_VARARGS,
   "@Pkii *k"},
  {"Send", PyvtkMultiProcessController_Send_s6, METH_VARARGS,
   "@Vii *vtkDataObject"},
  {"Send", PyvtkMultiProcessController_Send_s7, METH_VARARGS,
   "@Vii *vtkDataArray"},
  {"Send", PyvtkMultiProcessController_Send_s8, METH_VARARGS,
   "@Wii vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_Send(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Send_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Send");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_Receive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Receive_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(*temp0, temp1, temp2) :
      op->vtkMultiProcessController::Receive(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Receive_Methods[] = {
  {"Receive", PyvtkMultiProcessController_Receive_s1, METH_VARARGS,
   "@Pkii *i"},
  {"Receive", PyvtkMultiProcessController_Receive_s2, METH_VARARGS,
   "@Pkii *l"},
  {"Receive", PyvtkMultiProcessController_Receive_s3, METH_VARARGS,
   "@zkii"},
  {"Receive", PyvtkMultiProcessController_Receive_s4, METH_VARARGS,
   "@Pkii *d"},
  {"Receive", PyvtkMultiProcessController_Receive_s5, METH_VARARGS,
   "@Pkii *k"},
  {"Receive", PyvtkMultiProcessController_Receive_s6, METH_VARARGS,
   "@Vii *vtkDataObject"},
  {"Receive", PyvtkMultiProcessController_Receive_s7, METH_VARARGS,
   "@Vii *vtkDataArray"},
  {"Receive", PyvtkMultiProcessController_Receive_s8, METH_VARARGS,
   "@Wii &vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_Receive(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Receive_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Receive");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_ReceiveDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ReceiveDataObject(temp0, temp1) :
      op->vtkMultiProcessController::ReceiveDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCount() :
      op->vtkMultiProcessController::GetCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkMultiProcessController::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Broadcast_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(*temp0, temp1) :
      op->vtkMultiProcessController::Broadcast(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Broadcast_Methods[] = {
  {"Broadcast", PyvtkMultiProcessController_Broadcast_s1, METH_VARARGS,
   "@Pki *i"},
  {"Broadcast", PyvtkMultiProcessController_Broadcast_s2, METH_VARARGS,
   "@Pki *l"},
  {"Broadcast", PyvtkMultiProcessController_Broadcast_s3, METH_VARARGS,
   "@zki"},
  {"Broadcast", PyvtkMultiProcessController_Broadcast_s4, METH_VARARGS,
   "@Pki *d"},
  {"Broadcast", PyvtkMultiProcessController_Broadcast_s5, METH_VARARGS,
   "@Pki *k"},
  {"Broadcast", PyvtkMultiProcessController_Broadcast_s6, METH_VARARGS,
   "@Vi *vtkDataObject"},
  {"Broadcast", PyvtkMultiProcessController_Broadcast_s7, METH_VARARGS,
   "@Vi *vtkDataArray"},
  {"Broadcast", PyvtkMultiProcessController_Broadcast_s8, METH_VARARGS,
   "@Wi &vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Gather_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = nullptr;
  std::vector<vtkSmartPointer<vtkDataObject>> temp1(ap.GetArgSize(1));
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1.data(), temp1.size(), "vtkDataObject") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Gather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Gather_Methods[] = {
  {"Gather", PyvtkMultiProcessController_Gather_s1, METH_VARARGS,
   "@PPki *i *i"},
  {"Gather", PyvtkMultiProcessController_Gather_s2, METH_VARARGS,
   "@PPki *l *l"},
  {"Gather", PyvtkMultiProcessController_Gather_s3, METH_VARARGS,
   "@zzki"},
  {"Gather", PyvtkMultiProcessController_Gather_s4, METH_VARARGS,
   "@PPki *d *d"},
  {"Gather", PyvtkMultiProcessController_Gather_s5, METH_VARARGS,
   "@PPki *k *k"},
  {"Gather", PyvtkMultiProcessController_Gather_s6, METH_VARARGS,
   "@VVi *vtkDataArray *vtkDataArray"},
  {"Gather", PyvtkMultiProcessController_Gather_s7, METH_VARARGS,
   "@VTi *vtkDataObject *vtkDataObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_Gather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Gather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_GatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  vtkIdTypeArray *temp3 = nullptr;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_GatherV_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2) :
      op->vtkMultiProcessController::GatherV(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_GatherV_Methods[] = {
  {"GatherV", PyvtkMultiProcessController_GatherV_s1, METH_VARARGS,
   "@PPkPPi *i *i *k *k"},
  {"GatherV", PyvtkMultiProcessController_GatherV_s2, METH_VARARGS,
   "@PPkPPi *l *l *k *k"},
  {"GatherV", PyvtkMultiProcessController_GatherV_s3, METH_VARARGS,
   "@zzkPPi *k *k"},
  {"GatherV", PyvtkMultiProcessController_GatherV_s4, METH_VARARGS,
   "@PPkPPi *d *d *k *k"},
  {"GatherV", PyvtkMultiProcessController_GatherV_s5, METH_VARARGS,
   "@PPkPPi *k *k *k *k"},
  {"GatherV", PyvtkMultiProcessController_GatherV_s6, METH_VARARGS,
   "@VVPPi *vtkDataArray *vtkDataArray *k *k"},
  {"GatherV", PyvtkMultiProcessController_GatherV_s7, METH_VARARGS,
   "@VVVVi *vtkDataArray *vtkDataArray *vtkIdTypeArray *vtkIdTypeArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_GatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_GatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMultiProcessController_GatherV_s8(self, args);
    case 5:
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GatherV");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_Scatter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Scatter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Scatter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Scatter_Methods[] = {
  {"Scatter", PyvtkMultiProcessController_Scatter_s1, METH_VARARGS,
   "@PPki *i *i"},
  {"Scatter", PyvtkMultiProcessController_Scatter_s2, METH_VARARGS,
   "@PPki *l *l"},
  {"Scatter", PyvtkMultiProcessController_Scatter_s3, METH_VARARGS,
   "@zzki"},
  {"Scatter", PyvtkMultiProcessController_Scatter_s4, METH_VARARGS,
   "@PPki *d *d"},
  {"Scatter", PyvtkMultiProcessController_Scatter_s5, METH_VARARGS,
   "@PPki *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_Scatter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Scatter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMultiProcessController_Scatter_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scatter");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_ScatterV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ScatterV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ScatterV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ScatterV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_ScatterV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkMultiProcessController::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_ScatterV_Methods[] = {
  {"ScatterV", PyvtkMultiProcessController_ScatterV_s1, METH_VARARGS,
   "@PPPPki *i *i *k *k"},
  {"ScatterV", PyvtkMultiProcessController_ScatterV_s2, METH_VARARGS,
   "@PPPPki *l *l *k *k"},
  {"ScatterV", PyvtkMultiProcessController_ScatterV_s3, METH_VARARGS,
   "@zzPPki *k *k"},
  {"ScatterV", PyvtkMultiProcessController_ScatterV_s4, METH_VARARGS,
   "@PPPPki *d *d *k *k"},
  {"ScatterV", PyvtkMultiProcessController_ScatterV_s5, METH_VARARGS,
   "@PPPPki *k *k *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_ScatterV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_ScatterV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ScatterV");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_AllGather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllGather(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1) :
      op->vtkMultiProcessController::AllGather(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGather_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataObject *temp0 = nullptr;
  std::vector<vtkSmartPointer<vtkDataObject>> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1.data(), temp1.size(), "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1) :
      op->vtkMultiProcessController::AllGather(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_AllGather_Methods[] = {
  {"AllGather", PyvtkMultiProcessController_AllGather_s1, METH_VARARGS,
   "@PPk *i *i"},
  {"AllGather", PyvtkMultiProcessController_AllGather_s2, METH_VARARGS,
   "@PPk *l *l"},
  {"AllGather", PyvtkMultiProcessController_AllGather_s3, METH_VARARGS,
   "@zzk"},
  {"AllGather", PyvtkMultiProcessController_AllGather_s4, METH_VARARGS,
   "@PPk *d *d"},
  {"AllGather", PyvtkMultiProcessController_AllGather_s5, METH_VARARGS,
   "@PPk *k *k"},
  {"AllGather", PyvtkMultiProcessController_AllGather_s6, METH_VARARGS,
   "@VV *vtkDataArray *vtkDataArray"},
  {"AllGather", PyvtkMultiProcessController_AllGather_s7, METH_VARARGS,
   "@VT *vtkDataObject *vtkDataObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_AllGather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_AllGather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllGather");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_AllGatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllGatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1) :
      op->vtkMultiProcessController::AllGatherV(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_AllGatherV_Methods[] = {
  {"AllGatherV", PyvtkMultiProcessController_AllGatherV_s1, METH_VARARGS,
   "@PPkPP *i *i *k *k"},
  {"AllGatherV", PyvtkMultiProcessController_AllGatherV_s2, METH_VARARGS,
   "@PPkPP *l *l *k *k"},
  {"AllGatherV", PyvtkMultiProcessController_AllGatherV_s3, METH_VARARGS,
   "@zzkPP *k *k"},
  {"AllGatherV", PyvtkMultiProcessController_AllGatherV_s4, METH_VARARGS,
   "@PPkPP *d *d *k *k"},
  {"AllGatherV", PyvtkMultiProcessController_AllGatherV_s5, METH_VARARGS,
   "@PPkPP *k *k *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_AllGatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_AllGatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMultiProcessController_AllGatherV_s6(self, args);
    case 2:
      return PyvtkMultiProcessController_AllGatherV_s7(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllGatherV");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_Reduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkBoundingBox *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox") &&
      ap.GetSpecialObject(temp1, "vtkBoundingBox") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Reduce(*temp0, *temp1, temp2) :
      op->vtkMultiProcessController::Reduce(*temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkMultiProcessController_Reduce_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  vtkDataArraySelection *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection") &&
      ap.GetVTKObject(temp1, "vtkDataArraySelection") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Reduce(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Reduce_Methods[] = {
  {"Reduce", PyvtkMultiProcessController_Reduce_s1, METH_VARARGS,
   "@PPkii *i *i"},
  {"Reduce", PyvtkMultiProcessController_Reduce_s2, METH_VARARGS,
   "@PPkii *l *l"},
  {"Reduce", PyvtkMultiProcessController_Reduce_s3, METH_VARARGS,
   "@zzkii"},
  {"Reduce", PyvtkMultiProcessController_Reduce_s4, METH_VARARGS,
   "@PPkii *d *d"},
  {"Reduce", PyvtkMultiProcessController_Reduce_s5, METH_VARARGS,
   "@PPkii *k *k"},
  {"Reduce", PyvtkMultiProcessController_Reduce_s7, METH_VARARGS,
   "@WWi vtkBoundingBox &vtkBoundingBox"},
  {"Reduce", PyvtkMultiProcessController_Reduce_s8, METH_VARARGS,
   "@VVi *vtkDataArraySelection *vtkDataArraySelection"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_Reduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_Reduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkMultiProcessController_Reduce_s6(self, args);
    case 3:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Reduce");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_AllReduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkBoundingBox *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkBoundingBox *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBoundingBox") &&
      ap.GetSpecialObject(temp1, "vtkBoundingBox"))
  {
    int tempr = (ap.IsBound() ?
      op->AllReduce(*temp0, *temp1) :
      op->vtkMultiProcessController::AllReduce(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkMultiProcessController_AllReduce_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  vtkDataArraySelection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection") &&
      ap.GetVTKObject(temp1, "vtkDataArraySelection"))
  {
    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1) :
      op->vtkMultiProcessController::AllReduce(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_AllReduce_Methods[] = {
  {"AllReduce", PyvtkMultiProcessController_AllReduce_s1, METH_VARARGS,
   "@PPki *i *i"},
  {"AllReduce", PyvtkMultiProcessController_AllReduce_s2, METH_VARARGS,
   "@PPki *l *l"},
  {"AllReduce", PyvtkMultiProcessController_AllReduce_s3, METH_VARARGS,
   "@zzki"},
  {"AllReduce", PyvtkMultiProcessController_AllReduce_s4, METH_VARARGS,
   "@PPki *d *d"},
  {"AllReduce", PyvtkMultiProcessController_AllReduce_s5, METH_VARARGS,
   "@PPki *k *k"},
  {"AllReduce", PyvtkMultiProcessController_AllReduce_s7, METH_VARARGS,
   "@WW vtkBoundingBox &vtkBoundingBox"},
  {"AllReduce", PyvtkMultiProcessController_AllReduce_s8, METH_VARARGS,
   "@VV *vtkDataArraySelection *vtkDataArraySelection"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiProcessController_AllReduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiProcessController_AllReduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMultiProcessController_AllReduce_s6(self, args);
    case 2:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllReduce");
  return nullptr;
}


static PyObject *
PyvtkMultiProcessController_CanProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProbe() :
      op->vtkMultiProcessController::CanProbe());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiProcessController_Probe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiProcessController *op = static_cast<vtkMultiProcessController *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->Probe(temp0, temp1, temp2) :
      op->vtkMultiProcessController::Probe(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiProcessController_Methods[] = {
  {"IsTypeOf", PyvtkMultiProcessController_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiProcessController_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiProcessController_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMultiProcessController\nC++: static vtkMultiProcessController *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiProcessController_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMultiProcessController\nC++: vtkMultiProcessController *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMultiProcessController_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMultiProcessController_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Finalize", PyvtkMultiProcessController_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: virtual void Finalize()\nFinalize(self, finalizedExternally:int) -> None\nC++: virtual void Finalize(int finalizedExternally)\n\nThis method is for cleaning up. If a subclass needs to clean up\nprocess communication (i.e. MPI) it would over ride this method.\n"},
  {"SetNumberOfProcesses", PyvtkMultiProcessController_SetNumberOfProcesses, METH_VARARGS,
   "SetNumberOfProcesses(self, num:int) -> None\nC++: void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {"GetNumberOfProcesses", PyvtkMultiProcessController_GetNumberOfProcesses, METH_VARARGS,
   "GetNumberOfProcesses(self) -> int\nC++: int GetNumberOfProcesses()\n\n"},
  {"SetSingleProcessObject", PyvtkMultiProcessController_SetSingleProcessObject, METH_VARARGS,
   "SetSingleProcessObject(self, p:vtkProcess) -> None\nC++: void SetSingleProcessObject(vtkProcess *p)\n\nObject-oriented flavor of SetSingleMethod(). Instead of passing\nsome function pointer and user data, a vtkProcess object is\npassed where the method to execute is Execute() and the data the\nobject itself.\n"},
  {"SingleMethodExecute", PyvtkMultiProcessController_SingleMethodExecute, METH_VARARGS,
   "SingleMethodExecute(self) -> None\nC++: virtual void SingleMethodExecute()\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfProcesses processes.  This will only return when\nall the processes finish executing their methods.\n"},
  {"MultipleMethodExecute", PyvtkMultiProcessController_MultipleMethodExecute, METH_VARARGS,
   "MultipleMethodExecute(self) -> None\nC++: virtual void MultipleMethodExecute()\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required\nthis->NumberOfProcesses methods) using this->NumberOfProcesses\nprocesses.\n"},
  {"GetLocalProcessId", PyvtkMultiProcessController_GetLocalProcessId, METH_VARARGS,
   "GetLocalProcessId(self) -> int\nC++: int GetLocalProcessId()\n\nTells you which process [0, NumProcess) you are in.\n"},
  {"GetGlobalController", PyvtkMultiProcessController_GetGlobalController, METH_VARARGS,
   "GetGlobalController() -> vtkMultiProcessController\nC++: static vtkMultiProcessController *GetGlobalController()\n\nThis convenience method returns the controller associated with\nthe local process.  It returns nullptr until the processes are\nspawned. It is better if you hang on to the controller passed as\nan argument to the SingleMethod or MultipleMethod functions.\n"},
  {"CreateOutputWindow", PyvtkMultiProcessController_CreateOutputWindow, METH_VARARGS,
   "CreateOutputWindow(self) -> None\nC++: virtual void CreateOutputWindow()\n\nThis method can be used to tell the controller to create a\nspecial output window in which all messages are preceded by the\nprocess id.\n"},
  {"CreateSubController", PyvtkMultiProcessController_CreateSubController, METH_VARARGS,
   "CreateSubController(self, group:vtkProcessGroup)\n    -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *CreateSubController(\n    vtkProcessGroup *group)\n\nCreates a new controller with the processes specified by the\ngiven group. The new controller will already be initialized for\nyou.  You are responsible for deleting the controller once you\nare done.  It is invalid to pass this method a group with a\ndifferent communicator than is used by this controller.  This\noperation is collective across all processes defined in the\ngroup.  It is undefined what will happen if the group is not the\nsame on all processes.  This method must be called by all\nprocesses in the controller regardless of whether they are in the\ngroup.  nullptr is returned on all process not in the group.\n"},
  {"PartitionController", PyvtkMultiProcessController_PartitionController, METH_VARARGS,
   "PartitionController(self, localColor:int, localKey:int)\n    -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *PartitionController(\n    int localColor, int localKey)\n\nPartitions this controller based on a coloring.  That is, each\nprocess passes in a color.  All processes with the same color are\ngrouped into the same partition.  The processes are ordered by\ntheir self-assigned key. Lower keys have lower process ids.  Ties\nare broken by the current process ids.  (For example, if all the\nkeys are 0, then the resulting processes will be ordered in the\nsame way.)  This method returns a new controller to each process\nthat represents the local partition.  This is basically the same\noperation as MPI_Comm_split.\n"},
  {"RemoveFirstRMI", PyvtkMultiProcessController_RemoveFirstRMI, METH_VARARGS,
   "RemoveFirstRMI(self, tag:int) -> int\nC++: virtual int RemoveFirstRMI(int tag)\n\nRemove the first RMI matching the tag.\n"},
  {"RemoveRMI", PyvtkMultiProcessController_RemoveRMI, METH_VARARGS,
   "RemoveRMI(self, id:int) -> int\nC++: virtual int RemoveRMI(unsigned long id)\n\nRemove the RMI matching the id. The id is the same id returned by\nAddRMI().\n"},
  {"RemoveAllRMICallbacks", PyvtkMultiProcessController_RemoveAllRMICallbacks, METH_VARARGS,
   "RemoveAllRMICallbacks(self, tag:int) -> None\nC++: virtual void RemoveAllRMICallbacks(int tag)\n\nThese methods are a part of the newer API to add multiple rmi\ncallbacks. When the RMI is triggered, all the callbacks are\ncalled Removes all callbacks for the tag.\n"},
  {"RemoveRMICallback", PyvtkMultiProcessController_RemoveRMICallback, METH_VARARGS,
   "RemoveRMICallback(self, id:int) -> bool\nC++: virtual bool RemoveRMICallback(unsigned long id)\n\nRemove a callback. Returns true is the remove was successful.\n"},
  {"TriggerRMI", PyvtkMultiProcessController_TriggerRMI, METH_VARARGS,
   "TriggerRMI(self, remoteProcessId:int, arg:Pointer, argLength:int,\n    tag:int) -> None\nC++: void TriggerRMI(int remoteProcessId, void *arg,\n    int argLength, int tag)\nTriggerRMI(self, remoteProcessId:int, arg:str, tag:int) -> None\nC++: void TriggerRMI(int remoteProcessId, const char *arg,\n    int tag)\nTriggerRMI(self, remoteProcessId:int, tag:int) -> None\nC++: void TriggerRMI(int remoteProcessId, int tag)\n\nA method to trigger a method invocation in another process.\n"},
  {"TriggerBreakRMIs", PyvtkMultiProcessController_TriggerBreakRMIs, METH_VARARGS,
   "TriggerBreakRMIs(self) -> None\nC++: void TriggerBreakRMIs()\n\nA convenience method.  Called on process 0 to break \"ProcessRMIs\"\nloop on all other processes.\n"},
  {"TriggerRMIOnAllChildren", PyvtkMultiProcessController_TriggerRMIOnAllChildren, METH_VARARGS,
   "TriggerRMIOnAllChildren(self, arg:Pointer, argLength:int, tag:int)\n     -> None\nC++: void TriggerRMIOnAllChildren(void *arg, int argLength,\n    int tag)\nTriggerRMIOnAllChildren(self, arg:str, tag:int) -> None\nC++: void TriggerRMIOnAllChildren(const char *arg, int tag)\nTriggerRMIOnAllChildren(self, tag:int) -> None\nC++: void TriggerRMIOnAllChildren(int tag)\n\nThis is a convenicence method to trigger an RMI call on all the\n\"children\" of the current node. The children of the current node\ncan be determined by drawing a binary tree starting at node 0 and\nthen assigned nodes ids incrementally in a breadth-first fashion\nfrom left to right. This is designed to be used when trigger an\nRMI call on all satellites from the root node.\n"},
  {"BroadcastTriggerRMIOnAllChildren", PyvtkMultiProcessController_BroadcastTriggerRMIOnAllChildren, METH_VARARGS,
   "BroadcastTriggerRMIOnAllChildren(self, arg:Pointer, argLength:int,\n     tag:int) -> None\nC++: void BroadcastTriggerRMIOnAllChildren(void *arg,\n    int argLength, int tag)\n\n"},
  {"ProcessRMIs", PyvtkMultiProcessController_ProcessRMIs, METH_VARARGS,
   "ProcessRMIs(self, reportErrors:int, dont_loop:int=0) -> int\nC++: int ProcessRMIs(int reportErrors, int dont_loop=0)\nProcessRMIs(self) -> int\nC++: int ProcessRMIs()\n\nCalling this method gives control to the controller to start\nprocessing RMIs. Possible return values are: RMI_NO_ERROR,\nRMI_TAG_ERROR : rmi tag could not be received, RMI_ARG_ERROR :\nrmi arg could not be received. If reportErrors is false, no\nvtkErrorMacro is called. ProcessRMIs() calls ProcessRMIs(int)\nwith reportErrors = 0. If dont_loop is 1, this call just process\none RMI message and exits.\n"},
  {"BroadcastProcessRMIs", PyvtkMultiProcessController_BroadcastProcessRMIs, METH_VARARGS,
   "BroadcastProcessRMIs(self, reportErrors:int, dont_loop:int=0)\n    -> int\nC++: int BroadcastProcessRMIs(int reportErrors, int dont_loop=0)\n\n"},
  {"SetBreakFlag", PyvtkMultiProcessController_SetBreakFlag, METH_VARARGS,
   "SetBreakFlag(self, _arg:int) -> None\nC++: virtual void SetBreakFlag(int _arg)\n\nSetting this flag to 1 will cause the ProcessRMIs loop to return.\nThis also causes vtkUpStreamPorts to return from their\nWaitForUpdate loops.\n"},
  {"GetBreakFlag", PyvtkMultiProcessController_GetBreakFlag, METH_VARARGS,
   "GetBreakFlag(self) -> int\nC++: virtual int GetBreakFlag()\n\n"},
  {"SetBroadcastTriggerRMI", PyvtkMultiProcessController_SetBroadcastTriggerRMI, METH_VARARGS,
   "SetBroadcastTriggerRMI(self, _arg:bool) -> None\nC++: virtual void SetBroadcastTriggerRMI(bool _arg)\n\nSetting this flag to 1 will cause the TriggerRMIOnAllChildren to\nuse a collective broadcast operation to communicate the RMI tag\nto the satellites.\n"},
  {"GetBroadcastTriggerRMI", PyvtkMultiProcessController_GetBroadcastTriggerRMI, METH_VARARGS,
   "GetBroadcastTriggerRMI(self) -> bool\nC++: virtual bool GetBroadcastTriggerRMI()\n\n"},
  {"BroadcastTriggerRMIOn", PyvtkMultiProcessController_BroadcastTriggerRMIOn, METH_VARARGS,
   "BroadcastTriggerRMIOn(self) -> None\nC++: virtual void BroadcastTriggerRMIOn()\n\n"},
  {"BroadcastTriggerRMIOff", PyvtkMultiProcessController_BroadcastTriggerRMIOff, METH_VARARGS,
   "BroadcastTriggerRMIOff(self) -> None\nC++: virtual void BroadcastTriggerRMIOff()\n\n"},
  {"GetCommunicator", PyvtkMultiProcessController_GetCommunicator, METH_VARARGS,
   "GetCommunicator(self) -> vtkCommunicator\nC++: virtual vtkCommunicator *GetCommunicator()\n\nReturns the communicator associated with this controller. A\ndefault communicator is created in constructor.\n"},
  {"GetBreakRMITag", PyvtkMultiProcessController_GetBreakRMITag, METH_VARARGS,
   "GetBreakRMITag() -> int\nC++: static int GetBreakRMITag()\n\nAccessor to some default tags.\n"},
  {"GetRMITag", PyvtkMultiProcessController_GetRMITag, METH_VARARGS,
   "GetRMITag() -> int\nC++: static int GetRMITag()\n\n"},
  {"GetRMIArgTag", PyvtkMultiProcessController_GetRMIArgTag, METH_VARARGS,
   "GetRMIArgTag() -> int\nC++: static int GetRMIArgTag()\n\n"},
  {"Barrier", PyvtkMultiProcessController_Barrier, METH_VARARGS,
   "Barrier(self) -> None\nC++: void Barrier()\n\nThis method can be used to synchronize processes.\n"},
  {"SetGlobalController", PyvtkMultiProcessController_SetGlobalController, METH_VARARGS,
   "SetGlobalController(controller:vtkMultiProcessController) -> None\nC++: static void SetGlobalController(\n    vtkMultiProcessController *controller)\n\n"},
  {"Send", PyvtkMultiProcessController_Send, METH_VARARGS,
   "Send(self, data:(int, ...), length:int, remoteProcessId:int,\n    tag:int) -> int\nC++: int Send(const int *data, vtkIdType length,\n    int remoteProcessId, int tag)\nSend(self, data:(int, ...), length:int, remoteProcessId:int,\n    tag:int) -> int\nC++: int Send(const long *data, vtkIdType length,\n    int remoteProcessId, int tag)\nSend(self, data:str, length:int, remoteProcessId:int, tag:int)\n    -> int\nC++: int Send(const char *data, vtkIdType length,\n    int remoteProcessId, int tag)\nSend(self, data:(float, ...), length:int, remoteProcessId:int,\n    tag:int) -> int\nC++: int Send(const double *data, vtkIdType length,\n    int remoteProcessId, int tag)\nSend(self, data:(int, ...), length:int, remoteProcessId:int,\n    tag:int) -> int\nC++: int Send(const long long *data, vtkIdType length,\n    int remoteProcessId, int tag)\nSend(self, data:vtkDataObject, remoteId:int, tag:int) -> int\nC++: int Send(vtkDataObject *data, int remoteId, int tag)\nSend(self, data:vtkDataArray, remoteId:int, tag:int) -> int\nC++: int Send(vtkDataArray *data, int remoteId, int tag)\nSend(self, stream:vtkMultiProcessStream, remoteId:int, tag:int)\n    -> int\nC++: int Send(const vtkMultiProcessStream &stream, int remoteId,\n    int tag)\n\nThis method sends data to another process.  Tag eliminates\nambiguity when multiple sends or receives exist in the same\nprocess. It is recommended to use custom tag number over 100.\nvtkMultiProcessController has reserved tags between 1 and 4.\nvtkCommunicator has reserved tags between 10 and 16.\n"},
  {"Receive", PyvtkMultiProcessController_Receive, METH_VARARGS,
   "Receive(self, data:[int, ...], maxlength:int, remoteProcessId:int,\n     tag:int) -> int\nC++: int Receive(int *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nReceive(self, data:[int, ...], maxlength:int, remoteProcessId:int,\n     tag:int) -> int\nC++: int Receive(long *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nReceive(self, data:str, maxlength:int, remoteProcessId:int,\n    tag:int) -> int\nC++: int Receive(char *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nReceive(self, data:[float, ...], maxlength:int,\n    remoteProcessId:int, tag:int) -> int\nC++: int Receive(double *data, vtkIdType maxlength,\n    int remoteProcessId, int tag)\nReceive(self, data:[int, ...], maxLength:int, remoteProcessId:int,\n     tag:int) -> int\nC++: int Receive(long long *data, vtkIdType maxLength,\n    int remoteProcessId, int tag)\nReceive(self, data:vtkDataObject, remoteId:int, tag:int) -> int\nC++: int Receive(vtkDataObject *data, int remoteId, int tag)\nReceive(self, data:vtkDataArray, remoteId:int, tag:int) -> int\nC++: int Receive(vtkDataArray *data, int remoteId, int tag)\nReceive(self, stream:vtkMultiProcessStream, remoteId:int, tag:int)\n     -> int\nC++: int Receive(vtkMultiProcessStream &stream, int remoteId,\n    int tag)\n\nThis method receives data from a corresponding send. It blocks\nuntil the receive is finished.  It calls methods in \"data\" to\ncommunicate the sending data. In the overrloads that take in a \\c\nmaxlength argument, this length is the maximum length of the\nmessage to receive. If the maxlength is less than the length of\nthe message sent by the sender, an error will be flagged. Once a\nmessage is received, use the GetCount() method to determine the\nactual size of the data received.\n"},
  {"ReceiveDataObject", PyvtkMultiProcessController_ReceiveDataObject, METH_VARARGS,
   "ReceiveDataObject(self, remoteId:int, tag:int) -> vtkDataObject\nC++: vtkDataObject *ReceiveDataObject(int remoteId, int tag)\n\n"},
  {"GetCount", PyvtkMultiProcessController_GetCount, METH_VARARGS,
   "GetCount(self) -> int\nC++: vtkIdType GetCount()\n\nReturns the number of words received by the most recent\nReceive(). Note that this is not the number of bytes received,\nbut the number of items of the data-type received by the most\nrecent Receive() eg. if Receive(int*,..) was used, then this\nreturns the number of ints received; if Receive(double*,..) was\nused, then this returns the number of doubles received etc. The\nreturn value is valid only after a successful Receive().\n"},
  {"Broadcast", PyvtkMultiProcessController_Broadcast, METH_VARARGS,
   "Broadcast(self, data:[int, ...], length:int, srcProcessId:int)\n    -> int\nC++: int Broadcast(int *data, vtkIdType length, int srcProcessId)\nBroadcast(self, data:[int, ...], length:int, srcProcessId:int)\n    -> int\nC++: int Broadcast(long *data, vtkIdType length, int srcProcessId)\nBroadcast(self, data:str, length:int, srcProcessId:int) -> int\nC++: int Broadcast(char *data, vtkIdType length, int srcProcessId)\nBroadcast(self, data:[float, ...], length:int, srcProcessId:int)\n    -> int\nC++: int Broadcast(double *data, vtkIdType length,\n    int srcProcessId)\nBroadcast(self, data:[int, ...], length:int, srcProcessId:int)\n    -> int\nC++: int Broadcast(long long *data, vtkIdType length,\n    int srcProcessId)\nBroadcast(self, data:vtkDataObject, srcProcessId:int) -> int\nC++: int Broadcast(vtkDataObject *data, int srcProcessId)\nBroadcast(self, data:vtkDataArray, srcProcessId:int) -> int\nC++: int Broadcast(vtkDataArray *data, int srcProcessId)\nBroadcast(self, stream:vtkMultiProcessStream, srcProcessId:int)\n    -> int\nC++: int Broadcast(vtkMultiProcessStream &stream,\n    int srcProcessId)\n\nBroadcast sends the array in the process with id srcProcessId to\nall of the other processes.  All processes must call these method\nwith the same arguments in order for it to complete.\n"},
  {"Gather", PyvtkMultiProcessController_Gather, METH_VARARGS,
   "Gather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, destProcessId:int) -> int\nC++: int Gather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int destProcessId)\nGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, destProcessId:int) -> int\nC++: int Gather(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int destProcessId)\nGather(self, sendBuffer:str, recvBuffer:str, length:int,\n    destProcessId:int) -> int\nC++: int Gather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int destProcessId)\nGather(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int, destProcessId:int) -> int\nC++: int Gather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int destProcessId)\nGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, destProcessId:int) -> int\nC++: int Gather(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int destProcessId)\nGather(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    destProcessId:int) -> int\nC++: int Gather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\nGather(self, sendBuffer:vtkDataObject, recvBuffer:[vtkDataObject,\n    ...], destProcessId:int) -> int\nC++: int Gather(vtkDataObject *sendBuffer,\n    std::vector<vtkSmartPointer<vtkDataObject> > &recvBuffer,\n    int destProcessId)\n\nGather collects arrays in the process with id destProcessId. \nEach process (including the destination) sends the contents of\nits send buffer to the destination process.  The destination\nprocess receives the messages and stores them in rank order.  The\nlength argument (which must be the same on all processes) is the\nlength of the sendBuffers.  The recvBuffer (on the destination\nprocess) must be of length length*numProcesses.  Gather is the\ninverse operation of Scatter.\n"},
  {"GatherV", PyvtkMultiProcessController_GatherV, METH_VARARGS,
   "GatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    destProcessId:int) -> int\nC++: int GatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    destProcessId:int) -> int\nC++: int GatherV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:str, recvBuffer:str, sendLength:int,\n    recvLengths:[int, ...], offsets:[int, ...], destProcessId:int)\n     -> int\nC++: int GatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    destProcessId:int) -> int\nC++: int GatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    destProcessId:int) -> int\nC++: int GatherV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    recvLengths:[int, ...], offsets:[int, ...], destProcessId:int)\n     -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\n\nGatherV is the vector variant of Gather.  It extends the\nfunctionality of Gather by allowing a varying count of data from\neach process. GatherV collects arrays in the  ...\n [Truncated]\n"},
  {"Scatter", PyvtkMultiProcessController_Scatter, METH_VARARGS,
   "Scatter(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, srcProcessId:int) -> int\nC++: int Scatter(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, srcProcessId:int) -> int\nC++: int Scatter(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:str, recvBuffer:str, length:int,\n    srcProcessId:int) -> int\nC++: int Scatter(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int, srcProcessId:int) -> int\nC++: int Scatter(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, srcProcessId:int) -> int\nC++: int Scatter(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    srcProcessId:int) -> int\nC++: int Scatter(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int srcProcessId)\n\nScatter takes an array in the process with id srcProcessId and\ndistributes it.  Each process (including the source) receives a\nportion of the send buffer.  Process 0 receives the first length\nvalues, process 1 receives the second length values, and so on. \nScatter is the inverse operation of Gather.\n"},
  {"ScatterV", PyvtkMultiProcessController_ScatterV, METH_VARARGS,
   "ScatterV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    srcProcessId:int) -> int\nC++: int ScatterV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nScatterV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    srcProcessId:int) -> int\nC++: int ScatterV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nScatterV(self, sendBuffer:str, recvBuffer:str, sendLengths:[int,\n    ...], offsets:[int, ...], recvLength:int, srcProcessId:int)\n    -> int\nC++: int ScatterV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nScatterV(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    srcProcessId:int) -> int\nC++: int ScatterV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nScatterV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    srcProcessId:int) -> int\nC++: int ScatterV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType *sendLengths,\n    vtkIdType *offsets, vtkIdType recvLength, int srcProcessId)\n\nScatterV is the vector variant of Scatter.  It extends the\nfunctionality of Scatter by allowing a varying count of data to\neach process. ScatterV takes an array in the process with id\nsrcProcessId and distributes it.  Each process (including the\nsource) receives a portion of the send buffer defined by the\nsendLengths and offsets arrays.\n"},
  {"AllGather", PyvtkMultiProcessController_AllGather, METH_VARARGS,
   "AllGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int) -> int\nC++: int AllGather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length)\nAllGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int) -> int\nC++: int AllGather(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length)\nAllGather(self, sendBuffer:str, recvBuffer:str, length:int) -> int\nC++: int AllGather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length)\nAllGather(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int) -> int\nC++: int AllGather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length)\nAllGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int) -> int\nC++: int AllGather(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length)\nAllGather(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray)\n    -> int\nC++: int AllGather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\nAllGather(self, sendBuffer:vtkDataObject,\n    recvBuffer:[vtkDataObject, ...]) -> int\nC++: int AllGather(vtkDataObject *sendBuffer,\n    std::vector<vtkSmartPointer<vtkDataObject> > &recvBuffer)\n\nSame as gather except that the result ends up on all processes.\n"},
  {"AllGatherV", PyvtkMultiProcessController_AllGatherV, METH_VARARGS,
   "AllGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...])\n    -> int\nC++: int AllGatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...])\n    -> int\nC++: int AllGatherV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:str, recvBuffer:str, sendLength:int,\n    recvLengths:[int, ...], offsets:[int, ...]) -> int\nC++: int AllGatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n     sendLength:int, recvLengths:[int, ...], offsets:[int, ...])\n    -> int\nC++: int AllGatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...])\n    -> int\nC++: int AllGatherV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets)\nAllGatherV(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n     recvLengths:[int, ...], offsets:[int, ...]) -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray)\n     -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as GatherV except that the result is placed in all\nprocesses.\n"},
  {"Reduce", PyvtkMultiProcessController_Reduce, METH_VARARGS,
   "Reduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int, destProcessId:int) -> int\nC++: int Reduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int, destProcessId:int) -> int\nC++: int Reduce(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nReduce(self, sendBuffer:str, recvBuffer:str, length:int,\n    operation:int, destProcessId:int) -> int\nC++: int Reduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nReduce(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int, operation:int, destProcessId:int) -> int\nC++: int Reduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int, destProcessId:int) -> int\nC++: int Reduce(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int operation,\n    int destProcessId)\nReduce(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    operation:int, destProcessId:int) -> int\nC++: int Reduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation, int destProcessId)\nReduce(self, sendBuffer:vtkBoundingBox, recvBuffer:vtkBoundingBox,\n     destProcessId:int) -> int\nC++: int Reduce(const vtkBoundingBox &sendBuffer,\n    vtkBoundingBox &recvBuffer, int destProcessId)\nReduce(self, sendBuffer:vtkDataArraySelection,\n    recvBuffer:vtkDataArraySelection, destProcessId:int) -> int\nC++: int Reduce(vtkDataArraySelection *sendBuffer,\n    vtkDataArraySelection *recvBuffer, int destProcessId)\n\nReduce an array to the given destination process.  This version\nof Reduce takes an identifier defined in the\nvtkCommunicator::StandardOperations enum to define the operation.\n"},
  {"AllReduce", PyvtkMultiProcessController_AllReduce, METH_VARARGS,
   "AllReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int) -> int\nC++: int AllReduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation)\nAllReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int) -> int\nC++: int AllReduce(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int operation)\nAllReduce(self, sendBuffer:str, recvBuffer:str, length:int,\n    operation:int) -> int\nC++: int AllReduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation)\nAllReduce(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int, operation:int) -> int\nC++: int AllReduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation)\nAllReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int) -> int\nC++: int AllReduce(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int operation)\nAllReduce(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    operation:int) -> int\nC++: int AllReduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation)\nAllReduce(self, sendBuffer:vtkBoundingBox,\n    recvBuffer:vtkBoundingBox) -> int\nC++: int AllReduce(const vtkBoundingBox &sendBuffer,\n    vtkBoundingBox &recvBuffer)\nAllReduce(self, sendBuffer:vtkDataArraySelection,\n    recvBuffer:vtkDataArraySelection) -> int\nC++: int AllReduce(vtkDataArraySelection *sendBuffer,\n    vtkDataArraySelection *recvBuffer)\n\nSame as Reduce except that the result is placed in all of the\nprocesses.\n"},
  {"CanProbe", PyvtkMultiProcessController_CanProbe, METH_VARARGS,
   "CanProbe(self) -> bool\nC++: virtual bool CanProbe()\n\nCheck if this controller implements a probe operation\n"},
  {"Probe", PyvtkMultiProcessController_Probe, METH_VARARGS,
   "Probe(self, source:int, tag:int, actualSource:[int, ...]) -> int\nC++: virtual int Probe(int source, int tag, int *actualSource)\n\nBlocking test for checking for a message tagged with tag from\nsource process (if source == ANY_SOURCE check for any message).\nRank in actualSource is rank sending a message.\n\nCheck if implemented in the current communicator using the\nCanProbe method before using.\n\nReturns 1 on success and 0 on failure.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMultiProcessController_Doc =
  "vtkMultiProcessController - Multiprocessing communication superclass\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMultiProcessController is used to control multiple processes in a\n"
  "distributed computing environment. It has methods for executing\n"
  "single/multiple method(s) on multiple processors, triggering\n"
  "registered callbacks (Remote Methods) (AddRMI(), TriggerRMI()) and\n"
  "communication. Please note that the communication is done using the\n"
  "communicator which is accessible to the user. Therefore it is\n"
  "possible to get the communicator with GetCommunicator() and use it to\n"
  "send and receive data. This is the encouraged communication method.\n"
  "The internal (RMI) communications are done using a second internal\n"
  "communicator (called RMICommunicator).\n\n"
  "There are two modes for RMI communication: (1) Send/Receive mode and\n"
  "(2) Broadcast (collective) mode. The Send/Receive mode arranges\n"
  "processes in a binary tree using post-order traversal and propagates\n"
  "the RMI trigger starting from the root (rank 0) to the children. It\n"
  "is commonly employed to communicate between client/server over TCP.\n"
  "Although, the Send/Receive mode can be employed transparently over\n"
  "TCP or MPI, it is not optimal for triggering the RMIs on the\n"
  "satellite ranks. The Broadcast mode provides a more desirable\n"
  "alternative, namely, it uses MPI_Broadcast for communication, which\n"
  "is the nominal way of achieving this in an MPI context. The\n"
  "underlying communication mode used for triggering RMIs is controlled\n"
  "by the \"BroadcastTriggerRMI\" variable. Note, that mixing between the\n"
  "two modes for RMI communication is not correct behavior. All\n"
  "processes within the vtkMultiProcessController must use the same mode\n"
  "for triggering RMI.\n\n"
  "@sa\n"
  "vtkMPIController vtkCommunicator vtkMPICommunicator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiProcessController_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkMultiProcessController", // tp_name
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
  PyvtkMultiProcessController_Doc, // tp_doc
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

PyObject *PyvtkMultiProcessController_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMultiProcessController_Type, PyvtkMultiProcessController_Methods,
    "vtkMultiProcessController",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMultiProcessController_Errors_Type);
  PyVTKEnum_Add(&PyvtkMultiProcessController_Errors_Type, "vtkMultiProcessController.Errors");

  o = (PyObject *)&PyvtkMultiProcessController_Errors_Type;
  if (PyDict_SetItemString(d, "Errors", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMultiProcessController_Consts_Type);
  PyVTKEnum_Add(&PyvtkMultiProcessController_Consts_Type, "vtkMultiProcessController.Consts");

  o = (PyObject *)&PyvtkMultiProcessController_Consts_Type;
  if (PyDict_SetItemString(d, "Consts", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkMultiProcessController_Tags_Type);
  PyVTKEnum_Add(&PyvtkMultiProcessController_Tags_Type, "vtkMultiProcessController.Tags");

  o = (PyObject *)&PyvtkMultiProcessController_Tags_Type;
  if (PyDict_SetItemString(d, "Tags", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkMultiProcessController::Errors cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "RMI_NO_ERROR", vtkMultiProcessController::RMI_NO_ERROR },
        { "RMI_TAG_ERROR", vtkMultiProcessController::RMI_TAG_ERROR },
        { "RMI_ARG_ERROR", vtkMultiProcessController::RMI_ARG_ERROR },
      };

    o = PyvtkMultiProcessController_Errors_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkMultiProcessController::Consts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ANY_SOURCE", vtkMultiProcessController::ANY_SOURCE },
        { "INVALID_SOURCE", vtkMultiProcessController::INVALID_SOURCE },
      };

    o = PyvtkMultiProcessController_Consts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkMultiProcessController::Tags cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "RMI_TAG", vtkMultiProcessController::RMI_TAG },
        { "RMI_ARG_TAG", vtkMultiProcessController::RMI_ARG_TAG },
        { "BREAK_RMI_TAG", vtkMultiProcessController::BREAK_RMI_TAG },
        { "XML_WRITER_DATA_INFO", vtkMultiProcessController::XML_WRITER_DATA_INFO },
      };

    o = PyvtkMultiProcessController_Tags_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiProcessController(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiProcessController_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiProcessController", o) != 0)
  {
    Py_DECREF(o);
  }

}

