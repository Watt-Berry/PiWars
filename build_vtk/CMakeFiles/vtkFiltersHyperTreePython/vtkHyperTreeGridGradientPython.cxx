// python wrapper for vtkHyperTreeGridGradient
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridGradient.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridGradient(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridGradient_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridGradient_ComputeMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridGradient.ComputeMode", // tp_name
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
PyObject *PyvtkHyperTreeGridGradient_ComputeMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHyperTreeGridGradient_ComputeMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHyperTreeGridGradient_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridGradient::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridGradient::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridGradient *tempr = vtkHyperTreeGridGradient::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridGradient *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridGradient::NewInstance());

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
PyvtkHyperTreeGridGradient_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridGradient::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridGradient::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradient(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetComputeGradient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeGradient() :
      op->vtkHyperTreeGridGradient::GetComputeGradient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ComputeGradientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOn();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ComputeGradientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ComputeGradientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOff();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ComputeGradientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetGradientArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetGradientArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetGradientArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGradientArrayName() :
      op->vtkHyperTreeGridGradient::GetGradientArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetResultArrayName(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetResultArrayName."
    " (" "Please use unambiguous SetGradientArrayName method instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResultArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetResultArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetResultArrayName(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetResultArrayName."
    " (" "Please use unambiguous GetGradientArrayName method instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetResultArrayName() :
      op->vtkHyperTreeGridGradient::GetResultArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkHyperTreeGridGradient::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkHyperTreeGridGradient::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkHyperTreeGridGradient::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetExtensiveComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtensiveComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtensiveComputation(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetExtensiveComputation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetExtensiveComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensiveComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExtensiveComputation() :
      op->vtkHyperTreeGridGradient::GetExtensiveComputation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ExtensiveComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtensiveComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtensiveComputationOn();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ExtensiveComputationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ExtensiveComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtensiveComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtensiveComputationOff();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ExtensiveComputationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetComputeDivergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeDivergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeDivergence(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetComputeDivergence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetComputeDivergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeDivergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeDivergence() :
      op->vtkHyperTreeGridGradient::GetComputeDivergence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ComputeDivergenceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDivergenceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDivergenceOn();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ComputeDivergenceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ComputeDivergenceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDivergenceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDivergenceOff();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ComputeDivergenceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetDivergenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivergenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDivergenceArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetDivergenceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetDivergenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivergenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDivergenceArrayName() :
      op->vtkHyperTreeGridGradient::GetDivergenceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

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
      op->vtkHyperTreeGridGradient::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkHyperTreeGridGradient::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ComputeVorticityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVorticityOn();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ComputeVorticityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ComputeVorticityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVorticityOff();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ComputeVorticityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetVorticityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVorticityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVorticityArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetVorticityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetVorticityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVorticityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVorticityArrayName() :
      op->vtkHyperTreeGridGradient::GetVorticityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetComputeQCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeQCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeQCriterion(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetComputeQCriterion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetComputeQCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeQCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeQCriterion() :
      op->vtkHyperTreeGridGradient::GetComputeQCriterion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ComputeQCriterionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeQCriterionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeQCriterionOn();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ComputeQCriterionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_ComputeQCriterionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeQCriterionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeQCriterionOff();
    }
    else
    {
      op->vtkHyperTreeGridGradient::ComputeQCriterionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_SetQCriterionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQCriterionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQCriterionArrayName(temp0);
    }
    else
    {
      op->vtkHyperTreeGridGradient::SetQCriterionArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridGradient_GetQCriterionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQCriterionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridGradient *op = static_cast<vtkHyperTreeGridGradient *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetQCriterionArrayName() :
      op->vtkHyperTreeGridGradient::GetQCriterionArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridGradient_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridGradient_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridGradient_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridGradient_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridGradient\nC++: static vtkHyperTreeGridGradient *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridGradient_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridGradient\nC++: vtkHyperTreeGridGradient *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridGradient_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridGradient_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetComputeGradient", PyvtkHyperTreeGridGradient_SetComputeGradient, METH_VARARGS,
   "SetComputeGradient(self, _arg:bool) -> None\nC++: virtual void SetComputeGradient(bool _arg)\n\nEnable / disable gradient computation. default is On.\n"},
  {"GetComputeGradient", PyvtkHyperTreeGridGradient_GetComputeGradient, METH_VARARGS,
   "GetComputeGradient(self) -> bool\nC++: virtual bool GetComputeGradient()\n\n"},
  {"ComputeGradientOn", PyvtkHyperTreeGridGradient_ComputeGradientOn, METH_VARARGS,
   "ComputeGradientOn(self) -> None\nC++: virtual void ComputeGradientOn()\n\n"},
  {"ComputeGradientOff", PyvtkHyperTreeGridGradient_ComputeGradientOff, METH_VARARGS,
   "ComputeGradientOff(self) -> None\nC++: virtual void ComputeGradientOff()\n\n"},
  {"SetGradientArrayName", PyvtkHyperTreeGridGradient_SetGradientArrayName, METH_VARARGS,
   "SetGradientArrayName(self, _arg:str) -> None\nC++: virtual void SetGradientArrayName(const char *_arg)\n\nSet/Get the name of gradient vector array.\n"},
  {"GetGradientArrayName", PyvtkHyperTreeGridGradient_GetGradientArrayName, METH_VARARGS,
   "GetGradientArrayName(self) -> str\nC++: virtual char *GetGradientArrayName()\n\n"},
  {"SetResultArrayName", PyvtkHyperTreeGridGradient_SetResultArrayName, METH_VARARGS,
   "SetResultArrayName(self, name:str) -> None\nC++: void SetResultArrayName(std::string name)\n\n"},
  {"GetResultArrayName", PyvtkHyperTreeGridGradient_GetResultArrayName, METH_VARARGS,
   "GetResultArrayName(self) -> str\nC++: std::string GetResultArrayName()\n\n"},
  {"SetMode", PyvtkHyperTreeGridGradient_SetMode, METH_VARARGS,
   "SetMode(self, _arg:int) -> None\nC++: virtual void SetMode(int _arg)\n\nSet/Get the gradient computation method to use:\n* Unlimited: virtually reffine neighbors\n* Unstructured: compute gradient like in UG Dfault is UNLIMITED\n"},
  {"GetModeMinValue", PyvtkHyperTreeGridGradient_GetModeMinValue, METH_VARARGS,
   "GetModeMinValue(self) -> int\nC++: virtual int GetModeMinValue()\n\n"},
  {"GetModeMaxValue", PyvtkHyperTreeGridGradient_GetModeMaxValue, METH_VARARGS,
   "GetModeMaxValue(self) -> int\nC++: virtual int GetModeMaxValue()\n\n"},
  {"GetMode", PyvtkHyperTreeGridGradient_GetMode, METH_VARARGS,
   "GetMode(self) -> int\nC++: virtual int GetMode()\n\n"},
  {"SetExtensiveComputation", PyvtkHyperTreeGridGradient_SetExtensiveComputation, METH_VARARGS,
   "SetExtensiveComputation(self, _arg:bool) -> None\nC++: virtual void SetExtensiveComputation(bool _arg)\n\nDo we apply ratio in unlimited mode for the gradient computation\n? No effect in Unstructured mode Default is false (intensive\ncomputation)\n"},
  {"GetExtensiveComputation", PyvtkHyperTreeGridGradient_GetExtensiveComputation, METH_VARARGS,
   "GetExtensiveComputation(self) -> bool\nC++: virtual bool GetExtensiveComputation()\n\n"},
  {"ExtensiveComputationOn", PyvtkHyperTreeGridGradient_ExtensiveComputationOn, METH_VARARGS,
   "ExtensiveComputationOn(self) -> None\nC++: virtual void ExtensiveComputationOn()\n\n"},
  {"ExtensiveComputationOff", PyvtkHyperTreeGridGradient_ExtensiveComputationOff, METH_VARARGS,
   "ExtensiveComputationOff(self) -> None\nC++: virtual void ExtensiveComputationOff()\n\n"},
  {"SetComputeDivergence", PyvtkHyperTreeGridGradient_SetComputeDivergence, METH_VARARGS,
   "SetComputeDivergence(self, _arg:bool) -> None\nC++: virtual void SetComputeDivergence(bool _arg)\n\nEnable / disable divergence computation. default is Off.\n"},
  {"GetComputeDivergence", PyvtkHyperTreeGridGradient_GetComputeDivergence, METH_VARARGS,
   "GetComputeDivergence(self) -> bool\nC++: virtual bool GetComputeDivergence()\n\n"},
  {"ComputeDivergenceOn", PyvtkHyperTreeGridGradient_ComputeDivergenceOn, METH_VARARGS,
   "ComputeDivergenceOn(self) -> None\nC++: virtual void ComputeDivergenceOn()\n\n"},
  {"ComputeDivergenceOff", PyvtkHyperTreeGridGradient_ComputeDivergenceOff, METH_VARARGS,
   "ComputeDivergenceOff(self) -> None\nC++: virtual void ComputeDivergenceOff()\n\n"},
  {"SetDivergenceArrayName", PyvtkHyperTreeGridGradient_SetDivergenceArrayName, METH_VARARGS,
   "SetDivergenceArrayName(self, _arg:str) -> None\nC++: virtual void SetDivergenceArrayName(const char *_arg)\n\nSet/Get the name of divergence vector array.\n"},
  {"GetDivergenceArrayName", PyvtkHyperTreeGridGradient_GetDivergenceArrayName, METH_VARARGS,
   "GetDivergenceArrayName(self) -> str\nC++: virtual char *GetDivergenceArrayName()\n\n"},
  {"SetComputeVorticity", PyvtkHyperTreeGridGradient_SetComputeVorticity, METH_VARARGS,
   "SetComputeVorticity(self, _arg:bool) -> None\nC++: virtual void SetComputeVorticity(bool _arg)\n\nEnable / disable vorticity computation. default is Off.\n"},
  {"GetComputeVorticity", PyvtkHyperTreeGridGradient_GetComputeVorticity, METH_VARARGS,
   "GetComputeVorticity(self) -> bool\nC++: virtual bool GetComputeVorticity()\n\n"},
  {"ComputeVorticityOn", PyvtkHyperTreeGridGradient_ComputeVorticityOn, METH_VARARGS,
   "ComputeVorticityOn(self) -> None\nC++: virtual void ComputeVorticityOn()\n\n"},
  {"ComputeVorticityOff", PyvtkHyperTreeGridGradient_ComputeVorticityOff, METH_VARARGS,
   "ComputeVorticityOff(self) -> None\nC++: virtual void ComputeVorticityOff()\n\n"},
  {"SetVorticityArrayName", PyvtkHyperTreeGridGradient_SetVorticityArrayName, METH_VARARGS,
   "SetVorticityArrayName(self, _arg:str) -> None\nC++: virtual void SetVorticityArrayName(const char *_arg)\n\nSet/Get the name of vorticity array.\n"},
  {"GetVorticityArrayName", PyvtkHyperTreeGridGradient_GetVorticityArrayName, METH_VARARGS,
   "GetVorticityArrayName(self) -> str\nC++: virtual char *GetVorticityArrayName()\n\n"},
  {"SetComputeQCriterion", PyvtkHyperTreeGridGradient_SetComputeQCriterion, METH_VARARGS,
   "SetComputeQCriterion(self, _arg:bool) -> None\nC++: virtual void SetComputeQCriterion(bool _arg)\n\nEnable / disable q-criterion computation. default is Off.\n"},
  {"GetComputeQCriterion", PyvtkHyperTreeGridGradient_GetComputeQCriterion, METH_VARARGS,
   "GetComputeQCriterion(self) -> bool\nC++: virtual bool GetComputeQCriterion()\n\n"},
  {"ComputeQCriterionOn", PyvtkHyperTreeGridGradient_ComputeQCriterionOn, METH_VARARGS,
   "ComputeQCriterionOn(self) -> None\nC++: virtual void ComputeQCriterionOn()\n\n"},
  {"ComputeQCriterionOff", PyvtkHyperTreeGridGradient_ComputeQCriterionOff, METH_VARARGS,
   "ComputeQCriterionOff(self) -> None\nC++: virtual void ComputeQCriterionOff()\n\n"},
  {"SetQCriterionArrayName", PyvtkHyperTreeGridGradient_SetQCriterionArrayName, METH_VARARGS,
   "SetQCriterionArrayName(self, _arg:str) -> None\nC++: virtual void SetQCriterionArrayName(const char *_arg)\n\nSet/Get the name of q-criterion array.\n"},
  {"GetQCriterionArrayName", PyvtkHyperTreeGridGradient_GetQCriterionArrayName, METH_VARARGS,
   "GetQCriterionArrayName(self) -> str\nC++: virtual char *GetQCriterionArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridGradient_Doc =
  "vtkHyperTreeGridGradient - Compute the gradient of a scalar field on\na Hyper Tree Grid.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "This filter compute the gradient of a given cell scalars array on a\n"
  "Hyper Tree Grid. This result in a new array attached to the original\n"
  "input.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm vtkGradientFilter\n\n"
  "@par Thanks: This class was created by Charles Gueunet, 2022 This\n"
  "work was supported by Commissariat a l'Energie Atomique CEA, DAM,\n"
  "DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridGradient_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridGradient", // tp_name
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
  PyvtkHyperTreeGridGradient_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridGradient_StaticNew()
{
  return vtkHyperTreeGridGradient::New();
}

PyObject *PyvtkHyperTreeGridGradient_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridGradient_Type, PyvtkHyperTreeGridGradient_Methods,
    "vtkHyperTreeGridGradient",
 &PyvtkHyperTreeGridGradient_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHyperTreeGridGradient_ComputeMode_Type);
  PyVTKEnum_Add(&PyvtkHyperTreeGridGradient_ComputeMode_Type, "vtkHyperTreeGridGradient.ComputeMode");

  o = (PyObject *)&PyvtkHyperTreeGridGradient_ComputeMode_Type;
  if (PyDict_SetItemString(d, "ComputeMode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkHyperTreeGridGradient::ComputeMode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "UNLIMITED", vtkHyperTreeGridGradient::UNLIMITED },
        { "UNSTRUCTURED", vtkHyperTreeGridGradient::UNSTRUCTURED },
      };

    o = PyvtkHyperTreeGridGradient_ComputeMode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridGradient(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridGradient_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridGradient", o) != 0)
  {
    Py_DECREF(o);
  }

}

