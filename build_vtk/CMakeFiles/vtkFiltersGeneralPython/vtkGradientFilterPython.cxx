// python wrapper for vtkGradientFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGradientFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGradientFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkGradientFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGradientFilter_ContributingCellEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkGradientFilter.ContributingCellEnum", // tp_name
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
PyObject *PyvtkGradientFilter_ContributingCellEnum_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGradientFilter_ContributingCellEnum_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGradientFilter_ReplacementValueEnum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkGradientFilter.ReplacementValueEnum", // tp_name
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
PyObject *PyvtkGradientFilter_ReplacementValueEnum_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGradientFilter_ReplacementValueEnum_Type, static_cast<int>(val));
}


static PyObject *
PyvtkGradientFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGradientFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGradientFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGradientFilter *tempr = vtkGradientFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGradientFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGradientFilter::NewInstance());

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
PyvtkGradientFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGradientFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGradientFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetInputScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputScalars(temp0, temp1);
    }
    else
    {
      op->vtkGradientFilter::SetInputScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGradientFilter_SetInputScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputScalars(temp0, temp1);
    }
    else
    {
      op->vtkGradientFilter::SetInputScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGradientFilter_SetInputScalars_Methods[] = {
  {"SetInputScalars", PyvtkGradientFilter_SetInputScalars_s1, METH_VARARGS,
   "@iz"},
  {"SetInputScalars", PyvtkGradientFilter_SetInputScalars_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGradientFilter_SetInputScalars(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGradientFilter_SetInputScalars_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputScalars");
  return nullptr;
}


static PyObject *
PyvtkGradientFilter_GetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetResultArrayName() :
      op->vtkGradientFilter::GetResultArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetResultArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResultArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkGradientFilter::SetResultArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetDivergenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivergenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDivergenceArrayName() :
      op->vtkGradientFilter::GetDivergenceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetDivergenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivergenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

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
      op->vtkGradientFilter::SetDivergenceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetVorticityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVorticityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVorticityArrayName() :
      op->vtkGradientFilter::GetVorticityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetVorticityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVorticityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

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
      op->vtkGradientFilter::SetVorticityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetQCriterionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQCriterionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetQCriterionArrayName() :
      op->vtkGradientFilter::GetQCriterionArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetQCriterionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQCriterionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

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
      op->vtkGradientFilter::SetQCriterionArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetFasterApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFasterApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFasterApproximation() :
      op->vtkGradientFilter::GetFasterApproximation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetFasterApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFasterApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFasterApproximation(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetFasterApproximation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_FasterApproximationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FasterApproximationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FasterApproximationOn();
    }
    else
    {
      op->vtkGradientFilter::FasterApproximationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_FasterApproximationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FasterApproximationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FasterApproximationOff();
    }
    else
    {
      op->vtkGradientFilter::FasterApproximationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
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
      op->vtkGradientFilter::SetComputeGradient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradient() :
      op->vtkGradientFilter::GetComputeGradient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeGradientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOn();
    }
    else
    {
      op->vtkGradientFilter::ComputeGradientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeGradientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOff();
    }
    else
    {
      op->vtkGradientFilter::ComputeGradientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeDivergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeDivergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
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
      op->vtkGradientFilter::SetComputeDivergence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeDivergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeDivergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeDivergence() :
      op->vtkGradientFilter::GetComputeDivergence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeDivergenceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDivergenceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDivergenceOn();
    }
    else
    {
      op->vtkGradientFilter::ComputeDivergenceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeDivergenceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDivergenceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeDivergenceOff();
    }
    else
    {
      op->vtkGradientFilter::ComputeDivergenceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
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
      op->vtkGradientFilter::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkGradientFilter::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeVorticityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVorticityOn();
    }
    else
    {
      op->vtkGradientFilter::ComputeVorticityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeVorticityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeVorticityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeVorticityOff();
    }
    else
    {
      op->vtkGradientFilter::ComputeVorticityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetComputeQCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeQCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
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
      op->vtkGradientFilter::SetComputeQCriterion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetComputeQCriterion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeQCriterion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeQCriterion() :
      op->vtkGradientFilter::GetComputeQCriterion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeQCriterionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeQCriterionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeQCriterionOn();
    }
    else
    {
      op->vtkGradientFilter::ComputeQCriterionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_ComputeQCriterionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeQCriterionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeQCriterionOff();
    }
    else
    {
      op->vtkGradientFilter::ComputeQCriterionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetContributingCellOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContributingCellOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContributingCellOption(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetContributingCellOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetContributingCellOptionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOptionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOptionMinValue() :
      op->vtkGradientFilter::GetContributingCellOptionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetContributingCellOptionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOptionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOptionMaxValue() :
      op->vtkGradientFilter::GetContributingCellOptionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetContributingCellOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContributingCellOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContributingCellOption() :
      op->vtkGradientFilter::GetContributingCellOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_SetReplacementValueOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValueOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplacementValueOption(temp0);
    }
    else
    {
      op->vtkGradientFilter::SetReplacementValueOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetReplacementValueOptionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValueOptionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplacementValueOptionMinValue() :
      op->vtkGradientFilter::GetReplacementValueOptionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetReplacementValueOptionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValueOptionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplacementValueOptionMaxValue() :
      op->vtkGradientFilter::GetReplacementValueOptionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGradientFilter_GetReplacementValueOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValueOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGradientFilter *op = static_cast<vtkGradientFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplacementValueOption() :
      op->vtkGradientFilter::GetReplacementValueOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGradientFilter_Methods[] = {
  {"IsTypeOf", PyvtkGradientFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGradientFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGradientFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGradientFilter\nC++: static vtkGradientFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGradientFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGradientFilter\nC++: vtkGradientFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGradientFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGradientFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputScalars", PyvtkGradientFilter_SetInputScalars, METH_VARARGS,
   "SetInputScalars(self, fieldAssociation:int, name:str) -> None\nC++: virtual void SetInputScalars(int fieldAssociation,\n    const char *name)\nSetInputScalars(self, fieldAssociation:int,\n    fieldAttributeType:int) -> None\nC++: virtual void SetInputScalars(int fieldAssociation,\n    int fieldAttributeType)\n\nThese are basically a convenience method that calls\nSetInputArrayToProcess to set the array used as the input\nscalars.  The fieldAssociation comes from the\nvtkDataObject::FieldAssociations enum.  The fieldAttributeType\ncomes from the vtkDataSetAttributes::AttributeTypes enum.\n"},
  {"GetResultArrayName", PyvtkGradientFilter_GetResultArrayName, METH_VARARGS,
   "GetResultArrayName(self) -> str\nC++: virtual char *GetResultArrayName()\n\nGet/Set the name of the gradient array to create.  This is only\nused if ComputeGradient is non-zero. If nullptr (the default)\nthen the output array will be named \"Gradients\".\n"},
  {"SetResultArrayName", PyvtkGradientFilter_SetResultArrayName, METH_VARARGS,
   "SetResultArrayName(self, _arg:str) -> None\nC++: virtual void SetResultArrayName(const char *_arg)\n\n"},
  {"GetDivergenceArrayName", PyvtkGradientFilter_GetDivergenceArrayName, METH_VARARGS,
   "GetDivergenceArrayName(self) -> str\nC++: virtual char *GetDivergenceArrayName()\n\nGet/Set the name of the divergence array to create. This is only\nused if ComputeDivergence is non-zero. If nullptr (the default)\nthen the output array will be named \"Divergence\".\n"},
  {"SetDivergenceArrayName", PyvtkGradientFilter_SetDivergenceArrayName, METH_VARARGS,
   "SetDivergenceArrayName(self, _arg:str) -> None\nC++: virtual void SetDivergenceArrayName(const char *_arg)\n\n"},
  {"GetVorticityArrayName", PyvtkGradientFilter_GetVorticityArrayName, METH_VARARGS,
   "GetVorticityArrayName(self) -> str\nC++: virtual char *GetVorticityArrayName()\n\nGet/Set the name of the vorticity array to create. This is only\nused if ComputeVorticity is non-zero. If nullptr (the default)\nthen the output array will be named \"Vorticity\".\n"},
  {"SetVorticityArrayName", PyvtkGradientFilter_SetVorticityArrayName, METH_VARARGS,
   "SetVorticityArrayName(self, _arg:str) -> None\nC++: virtual void SetVorticityArrayName(const char *_arg)\n\n"},
  {"GetQCriterionArrayName", PyvtkGradientFilter_GetQCriterionArrayName, METH_VARARGS,
   "GetQCriterionArrayName(self) -> str\nC++: virtual char *GetQCriterionArrayName()\n\nGet/Set the name of the Q criterion array to create. This is only\nused if ComputeQCriterion is non-zero. If nullptr (the default)\nthen the output array will be named \"Q-criterion\".\n"},
  {"SetQCriterionArrayName", PyvtkGradientFilter_SetQCriterionArrayName, METH_VARARGS,
   "SetQCriterionArrayName(self, _arg:str) -> None\nC++: virtual void SetQCriterionArrayName(const char *_arg)\n\n"},
  {"GetFasterApproximation", PyvtkGradientFilter_GetFasterApproximation, METH_VARARGS,
   "GetFasterApproximation(self) -> int\nC++: virtual vtkTypeBool GetFasterApproximation()\n\nWhen this flag is on (default is off), the gradient filter will\nprovide a less accurate (but close) algorithm that performs fewer\nderivative calculations (and is therefore faster).  The error\ncontains some smoothing of the output data and some possible\nerrors on the boundary.  This parameter has no effect when\nperforming the gradient of cell data. This only applies if the\ninput grid is a vtkUnstructuredGrid or a vtkPolyData, and when\npoint gradients are computed.\n"},
  {"SetFasterApproximation", PyvtkGradientFilter_SetFasterApproximation, METH_VARARGS,
   "SetFasterApproximation(self, _arg:int) -> None\nC++: virtual void SetFasterApproximation(vtkTypeBool _arg)\n\n"},
  {"FasterApproximationOn", PyvtkGradientFilter_FasterApproximationOn, METH_VARARGS,
   "FasterApproximationOn(self) -> None\nC++: virtual void FasterApproximationOn()\n\n"},
  {"FasterApproximationOff", PyvtkGradientFilter_FasterApproximationOff, METH_VARARGS,
   "FasterApproximationOff(self) -> None\nC++: virtual void FasterApproximationOff()\n\n"},
  {"SetComputeGradient", PyvtkGradientFilter_SetComputeGradient, METH_VARARGS,
   "SetComputeGradient(self, _arg:int) -> None\nC++: virtual void SetComputeGradient(vtkTypeBool _arg)\n\nAdd the gradient to the output field data.  The name of the array\nwill be ResultArrayName and will be the same type as the input\narray. The default is on.\n"},
  {"GetComputeGradient", PyvtkGradientFilter_GetComputeGradient, METH_VARARGS,
   "GetComputeGradient(self) -> int\nC++: virtual vtkTypeBool GetComputeGradient()\n\n"},
  {"ComputeGradientOn", PyvtkGradientFilter_ComputeGradientOn, METH_VARARGS,
   "ComputeGradientOn(self) -> None\nC++: virtual void ComputeGradientOn()\n\n"},
  {"ComputeGradientOff", PyvtkGradientFilter_ComputeGradientOff, METH_VARARGS,
   "ComputeGradientOff(self) -> None\nC++: virtual void ComputeGradientOff()\n\n"},
  {"SetComputeDivergence", PyvtkGradientFilter_SetComputeDivergence, METH_VARARGS,
   "SetComputeDivergence(self, _arg:int) -> None\nC++: virtual void SetComputeDivergence(vtkTypeBool _arg)\n\nAdd divergence to the output field data.  The name of the array\nwill be DivergenceArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"GetComputeDivergence", PyvtkGradientFilter_GetComputeDivergence, METH_VARARGS,
   "GetComputeDivergence(self) -> int\nC++: virtual vtkTypeBool GetComputeDivergence()\n\n"},
  {"ComputeDivergenceOn", PyvtkGradientFilter_ComputeDivergenceOn, METH_VARARGS,
   "ComputeDivergenceOn(self) -> None\nC++: virtual void ComputeDivergenceOn()\n\n"},
  {"ComputeDivergenceOff", PyvtkGradientFilter_ComputeDivergenceOff, METH_VARARGS,
   "ComputeDivergenceOff(self) -> None\nC++: virtual void ComputeDivergenceOff()\n\n"},
  {"SetComputeVorticity", PyvtkGradientFilter_SetComputeVorticity, METH_VARARGS,
   "SetComputeVorticity(self, _arg:int) -> None\nC++: virtual void SetComputeVorticity(vtkTypeBool _arg)\n\nAdd voriticity/curl to the output field data.  The name of the\narray will be VorticityArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this. The default is off.\n"},
  {"GetComputeVorticity", PyvtkGradientFilter_GetComputeVorticity, METH_VARARGS,
   "GetComputeVorticity(self) -> int\nC++: virtual vtkTypeBool GetComputeVorticity()\n\n"},
  {"ComputeVorticityOn", PyvtkGradientFilter_ComputeVorticityOn, METH_VARARGS,
   "ComputeVorticityOn(self) -> None\nC++: virtual void ComputeVorticityOn()\n\n"},
  {"ComputeVorticityOff", PyvtkGradientFilter_ComputeVorticityOff, METH_VARARGS,
   "ComputeVorticityOff(self) -> None\nC++: virtual void ComputeVorticityOff()\n\n"},
  {"SetComputeQCriterion", PyvtkGradientFilter_SetComputeQCriterion, METH_VARARGS,
   "SetComputeQCriterion(self, _arg:int) -> None\nC++: virtual void SetComputeQCriterion(vtkTypeBool _arg)\n\nAdd Q-criterion to the output field data.  The name of the array\nwill be QCriterionArrayName and will be the same type as the\ninput array.  The input array must have 3 components in order to\ncompute this.  Note that Q-citerion is a balance of the rate of\nvorticity and the rate of strain. The default is off.\n"},
  {"GetComputeQCriterion", PyvtkGradientFilter_GetComputeQCriterion, METH_VARARGS,
   "GetComputeQCriterion(self) -> int\nC++: virtual vtkTypeBool GetComputeQCriterion()\n\n"},
  {"ComputeQCriterionOn", PyvtkGradientFilter_ComputeQCriterionOn, METH_VARARGS,
   "ComputeQCriterionOn(self) -> None\nC++: virtual void ComputeQCriterionOn()\n\n"},
  {"ComputeQCriterionOff", PyvtkGradientFilter_ComputeQCriterionOff, METH_VARARGS,
   "ComputeQCriterionOff(self) -> None\nC++: virtual void ComputeQCriterionOff()\n\n"},
  {"SetContributingCellOption", PyvtkGradientFilter_SetContributingCellOption, METH_VARARGS,
   "SetContributingCellOption(self, _arg:int) -> None\nC++: virtual void SetContributingCellOption(int _arg)\n\nOption to specify what cells to include in the gradient\ncomputation. Options are all cells (All, Patch and DataSetMax).\nThe default is All.\n"},
  {"GetContributingCellOptionMinValue", PyvtkGradientFilter_GetContributingCellOptionMinValue, METH_VARARGS,
   "GetContributingCellOptionMinValue(self) -> int\nC++: virtual int GetContributingCellOptionMinValue()\n\n"},
  {"GetContributingCellOptionMaxValue", PyvtkGradientFilter_GetContributingCellOptionMaxValue, METH_VARARGS,
   "GetContributingCellOptionMaxValue(self) -> int\nC++: virtual int GetContributingCellOptionMaxValue()\n\n"},
  {"GetContributingCellOption", PyvtkGradientFilter_GetContributingCellOption, METH_VARARGS,
   "GetContributingCellOption(self) -> int\nC++: virtual int GetContributingCellOption()\n\n"},
  {"SetReplacementValueOption", PyvtkGradientFilter_SetReplacementValueOption, METH_VARARGS,
   "SetReplacementValueOption(self, _arg:int) -> None\nC++: virtual void SetReplacementValueOption(int _arg)\n\nOption to specify what replacement value or entities that don't\nhave any gradient computed over them based on the\nContributingCellOption. Options are (Zero, NaN, DataTypeMin,\nDataTypeMax). The default is Zero.\n"},
  {"GetReplacementValueOptionMinValue", PyvtkGradientFilter_GetReplacementValueOptionMinValue, METH_VARARGS,
   "GetReplacementValueOptionMinValue(self) -> int\nC++: virtual int GetReplacementValueOptionMinValue()\n\n"},
  {"GetReplacementValueOptionMaxValue", PyvtkGradientFilter_GetReplacementValueOptionMaxValue, METH_VARARGS,
   "GetReplacementValueOptionMaxValue(self) -> int\nC++: virtual int GetReplacementValueOptionMaxValue()\n\n"},
  {"GetReplacementValueOption", PyvtkGradientFilter_GetReplacementValueOption, METH_VARARGS,
   "GetReplacementValueOption(self) -> int\nC++: virtual int GetReplacementValueOption()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGradientFilter_Doc =
  "vtkGradientFilter - A general filter for gradient estimation.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "This filter estimates the gradient of a field in a data set.  The\n"
  "gradient calculation is dependent on the input dataset type.  The\n"
  "created gradient array is of the same type as the array it is\n"
  "calculated from (e.g. point data or cell data) but the data type will\n"
  "be either float or double.  At the boundary the gradient does not use\n"
  "central differencing.  The output gradient array has 3*number of\n"
  "components of the input data array.  The ordering for the output\n"
  "gradient tuple will be {du/dx, du/dy, du/dz, dv/dx, dv/dy, dv/dz,\n"
  "dw/dx, dw/dy, dw/dz} for an input array {u, v, w}. There are also the\n"
  "options to additionally compute the vorticity and Q criterion of a\n"
  "vector field.  Unstructured grids and polydata can have cells of\n"
  "different dimensions.  To handle different use cases in this\n"
  "situation, the user can specify which cells contribute to the\n"
  "computation. The options for this are All (default), Patch and\n"
  "DataSetMax. Patch uses only the highest dimension cells attached to a\n"
  "point. DataSetMax uses the highest cell dimension in the entire data\n"
  "set. For Patch or DataSetMax it is possible that some values will not\n"
  "be computed. The ReplacementValueOption specifies what to use for\n"
  "these values.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGradientFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkGradientFilter", // tp_name
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
  PyvtkGradientFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGradientFilter_StaticNew()
{
  return vtkGradientFilter::New();
}

PyObject *PyvtkGradientFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGradientFilter_Type, PyvtkGradientFilter_Methods,
    "vtkGradientFilter",
 &PyvtkGradientFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGradientFilter_ContributingCellEnum_Type);
  PyVTKEnum_Add(&PyvtkGradientFilter_ContributingCellEnum_Type, "vtkGradientFilter.ContributingCellEnum");

  o = (PyObject *)&PyvtkGradientFilter_ContributingCellEnum_Type;
  if (PyDict_SetItemString(d, "ContributingCellEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGradientFilter_ReplacementValueEnum_Type);
  PyVTKEnum_Add(&PyvtkGradientFilter_ReplacementValueEnum_Type, "vtkGradientFilter.ReplacementValueEnum");

  o = (PyObject *)&PyvtkGradientFilter_ReplacementValueEnum_Type;
  if (PyDict_SetItemString(d, "ReplacementValueEnum", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkGradientFilter::ContributingCellEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "All", vtkGradientFilter::All },
        { "Patch", vtkGradientFilter::Patch },
        { "DataSetMax", vtkGradientFilter::DataSetMax },
      };

    o = PyvtkGradientFilter_ContributingCellEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkGradientFilter::ReplacementValueEnum cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "Zero", vtkGradientFilter::Zero },
        { "NaN", vtkGradientFilter::NaN },
        { "DataTypeMin", vtkGradientFilter::DataTypeMin },
        { "DataTypeMax", vtkGradientFilter::DataTypeMax },
      };

    o = PyvtkGradientFilter_ReplacementValueEnum_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGradientFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGradientFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGradientFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

