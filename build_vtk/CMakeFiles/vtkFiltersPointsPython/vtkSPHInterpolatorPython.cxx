// python wrapper for vtkSPHInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkSPHInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSPHInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkSPHInterpolator_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSPHInterpolator_NullStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkSPHInterpolator.NullStrategy", // tp_name
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
PyObject *PyvtkSPHInterpolator_NullStrategy_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSPHInterpolator_NullStrategy_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSPHInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSPHInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSPHInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSPHInterpolator *tempr = vtkSPHInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSPHInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSPHInterpolator::NewInstance());

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
PyvtkSPHInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSPHInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSPHInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

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
      op->vtkSPHInterpolator::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkSPHInterpolator::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

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
      op->vtkSPHInterpolator::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkSPHInterpolator::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkSPHKernel *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSPHKernel"))
  {
    if (ap.IsBound())
    {
      op->SetKernel(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSPHKernel *tempr = (ap.IsBound() ?
      op->GetKernel() :
      op->vtkSPHInterpolator::GetKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetCutoffArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutoffArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCutoffArrayName(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetCutoffArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetCutoffArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutoffArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetCutoffArrayName() :
      op->vtkSPHInterpolator::GetCutoffArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetDensityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDensityArrayName(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetDensityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetDensityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetDensityArrayName() :
      op->vtkSPHInterpolator::GetDensityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetMassArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMassArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMassArrayName(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetMassArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetMassArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMassArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetMassArrayName() :
      op->vtkSPHInterpolator::GetMassArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_AddExcludedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExcludedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddExcludedArray(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::AddExcludedArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_ClearExcludedArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearExcludedArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearExcludedArrays();
    }
    else
    {
      op->vtkSPHInterpolator::ClearExcludedArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetNumberOfExcludedArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExcludedArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExcludedArrays() :
      op->vtkSPHInterpolator::GetNumberOfExcludedArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetExcludedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExcludedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExcludedArray(temp0) :
      op->vtkSPHInterpolator::GetExcludedArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_AddDerivativeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDerivativeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddDerivativeArray(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::AddDerivativeArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_ClearDerivativeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearDerivativeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearDerivativeArrays();
    }
    else
    {
      op->vtkSPHInterpolator::ClearDerivativeArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetNumberOfDerivativeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDerivativeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDerivativeArrays() :
      op->vtkSPHInterpolator::GetNumberOfDerivativeArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetDerivativeArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDerivativeArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDerivativeArray(temp0) :
      op->vtkSPHInterpolator::GetDerivativeArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetNullPointsStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullPointsStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullPointsStrategy(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetNullPointsStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetNullPointsStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullPointsStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNullPointsStrategy() :
      op->vtkSPHInterpolator::GetNullPointsStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetNullPointsStrategyToMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullPointsStrategyToMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNullPointsStrategyToMaskPoints();
    }
    else
    {
      op->vtkSPHInterpolator::SetNullPointsStrategyToMaskPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetNullPointsStrategyToNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullPointsStrategyToNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNullPointsStrategyToNullValue();
    }
    else
    {
      op->vtkSPHInterpolator::SetNullPointsStrategyToNullValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetValidPointsMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointsMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidPointsMaskArrayName(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetValidPointsMaskArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetValidPointsMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointsMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetValidPointsMaskArrayName() :
      op->vtkSPHInterpolator::GetValidPointsMaskArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNullValue() :
      op->vtkSPHInterpolator::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetComputeShepardSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeShepardSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeShepardSum(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetComputeShepardSum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_ComputeShepardSumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeShepardSumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeShepardSumOn();
    }
    else
    {
      op->vtkSPHInterpolator::ComputeShepardSumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_ComputeShepardSumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeShepardSumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeShepardSumOff();
    }
    else
    {
      op->vtkSPHInterpolator::ComputeShepardSumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetComputeShepardSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeShepardSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeShepardSum() :
      op->vtkSPHInterpolator::GetComputeShepardSum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetShepardSumArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShepardSumArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShepardSumArrayName(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetShepardSumArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetShepardSumArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShepardSumArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetShepardSumArrayName() :
      op->vtkSPHInterpolator::GetShepardSumArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetPromoteOutputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPromoteOutputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPromoteOutputArrays(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetPromoteOutputArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_PromoteOutputArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromoteOutputArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PromoteOutputArraysOn();
    }
    else
    {
      op->vtkSPHInterpolator::PromoteOutputArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_PromoteOutputArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromoteOutputArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PromoteOutputArraysOff();
    }
    else
    {
      op->vtkSPHInterpolator::PromoteOutputArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetPromoteOutputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPromoteOutputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPromoteOutputArrays() :
      op->vtkSPHInterpolator::GetPromoteOutputArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointArrays(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetPassPointArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_PassPointArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOn();
    }
    else
    {
      op->vtkSPHInterpolator::PassPointArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_PassPointArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOff();
    }
    else
    {
      op->vtkSPHInterpolator::PassPointArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassPointArrays() :
      op->vtkSPHInterpolator::GetPassPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellArrays(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetPassCellArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_PassCellArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOn();
    }
    else
    {
      op->vtkSPHInterpolator::PassCellArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_PassCellArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOff();
    }
    else
    {
      op->vtkSPHInterpolator::PassCellArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassCellArrays() :
      op->vtkSPHInterpolator::GetPassCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassFieldArrays(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetPassFieldArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_PassFieldArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOn();
    }
    else
    {
      op->vtkSPHInterpolator::PassFieldArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_PassFieldArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOff();
    }
    else
    {
      op->vtkSPHInterpolator::PassFieldArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassFieldArrays() :
      op->vtkSPHInterpolator::GetPassFieldArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_SetShepardNormalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShepardNormalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShepardNormalization(temp0);
    }
    else
    {
      op->vtkSPHInterpolator::SetShepardNormalization(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_ShepardNormalizationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShepardNormalizationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShepardNormalizationOn();
    }
    else
    {
      op->vtkSPHInterpolator::ShepardNormalizationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_ShepardNormalizationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShepardNormalizationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShepardNormalizationOff();
    }
    else
    {
      op->vtkSPHInterpolator::ShepardNormalizationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetShepardNormalization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShepardNormalization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShepardNormalization() :
      op->vtkSPHInterpolator::GetShepardNormalization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHInterpolator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHInterpolator *op = static_cast<vtkSPHInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSPHInterpolator::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSPHInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkSPHInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSPHInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSPHInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSPHInterpolator\nC++: static vtkSPHInterpolator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSPHInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSPHInterpolator\nC++: vtkSPHInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSPHInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSPHInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceData", PyvtkSPHInterpolator_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkDataObject) -> None\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the dataset Pc that will be probed by the input points P.\n The Input P defines the dataset structure (the points and cells)\nfor the output, while the Source Pc is probed (interpolated) to\ngenerate the scalars, vectors, etc. for the output points based\non the point locations.\n"},
  {"GetSource", PyvtkSPHInterpolator_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkDataObject\nC++: vtkDataObject *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkSPHInterpolator_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the dataset Pc that will be probed by the input points P.\n The Input P defines the structure (the points and cells) for the\noutput, while the Source Pc is probed (interpolated) to generate\nthe scalars, vectors, etc. for the output points based on the\npoint locations.\n"},
  {"SetLocator", PyvtkSPHInterpolator_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractPointLocator) -> None\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate near a\nspecified interpolation position.\n"},
  {"GetLocator", PyvtkSPHInterpolator_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\n"},
  {"SetKernel", PyvtkSPHInterpolator_SetKernel, METH_VARARGS,
   "SetKernel(self, kernel:vtkSPHKernel) -> None\nC++: void SetKernel(vtkSPHKernel *kernel)\n\nSpecify an interpolation kernel. By default a vtkSPHQuinticKernel\nis used (i.e., closest point). The interpolation kernel changes\nthe basis of the interpolation.\n"},
  {"GetKernel", PyvtkSPHInterpolator_GetKernel, METH_VARARGS,
   "GetKernel(self) -> vtkSPHKernel\nC++: virtual vtkSPHKernel *GetKernel()\n\n"},
  {"SetCutoffArrayName", PyvtkSPHInterpolator_SetCutoffArrayName, METH_VARARGS,
   "SetCutoffArrayName(self, _arg:str) -> None\nC++: virtual void SetCutoffArrayName(vtkStdString _arg)\n\nSpecify an (optional) cutoff distance for each point in the input\nP. If not specified, then the kernel cutoff is used.\n"},
  {"GetCutoffArrayName", PyvtkSPHInterpolator_GetCutoffArrayName, METH_VARARGS,
   "GetCutoffArrayName(self) -> str\nC++: virtual vtkStdString GetCutoffArrayName()\n\n"},
  {"SetDensityArrayName", PyvtkSPHInterpolator_SetDensityArrayName, METH_VARARGS,
   "SetDensityArrayName(self, _arg:str) -> None\nC++: virtual void SetDensityArrayName(vtkStdString _arg)\n\nSpecify the density array name. This is optional. Typically both\nthe density and mass arrays are specified together (in order to\ncompute the local volume). Both the mass and density arrays must\nconsist of tuples of 1-component. (Note that the density array\nname specifies a point array found in the Pc source.)\n"},
  {"GetDensityArrayName", PyvtkSPHInterpolator_GetDensityArrayName, METH_VARARGS,
   "GetDensityArrayName(self) -> str\nC++: virtual vtkStdString GetDensityArrayName()\n\n"},
  {"SetMassArrayName", PyvtkSPHInterpolator_SetMassArrayName, METH_VARARGS,
   "SetMassArrayName(self, _arg:str) -> None\nC++: virtual void SetMassArrayName(vtkStdString _arg)\n\nSpecify the mass array name. This is optional. Typically both the\ndensity and mass arrays are specified together (in order to\ncompute the local volume).  Both the mass and density arrays must\nconsist of tuples of 1-component. (Note that the mass array name\nspecifies a point array found in the Pc source.)\n"},
  {"GetMassArrayName", PyvtkSPHInterpolator_GetMassArrayName, METH_VARARGS,
   "GetMassArrayName(self) -> str\nC++: virtual vtkStdString GetMassArrayName()\n\n"},
  {"AddExcludedArray", PyvtkSPHInterpolator_AddExcludedArray, METH_VARARGS,
   "AddExcludedArray(self, excludedArray:str) -> None\nC++: void AddExcludedArray(const vtkStdString &excludedArray)\n\nAdds an array to the list of arrays which are to be excluded from\nthe interpolation process.\n"},
  {"ClearExcludedArrays", PyvtkSPHInterpolator_ClearExcludedArrays, METH_VARARGS,
   "ClearExcludedArrays(self) -> None\nC++: void ClearExcludedArrays()\n\nClears the contents of excluded array list.\n"},
  {"GetNumberOfExcludedArrays", PyvtkSPHInterpolator_GetNumberOfExcludedArrays, METH_VARARGS,
   "GetNumberOfExcludedArrays(self) -> int\nC++: int GetNumberOfExcludedArrays()\n\nReturn the number of excluded arrays.\n"},
  {"GetExcludedArray", PyvtkSPHInterpolator_GetExcludedArray, METH_VARARGS,
   "GetExcludedArray(self, i:int) -> str\nC++: const char *GetExcludedArray(int i)\n\nReturn the name of the ith excluded array.\n"},
  {"AddDerivativeArray", PyvtkSPHInterpolator_AddDerivativeArray, METH_VARARGS,
   "AddDerivativeArray(self, derivArray:str) -> None\nC++: void AddDerivativeArray(const vtkStdString &derivArray)\n\nAdds an array to the list of arrays whose derivative is to be\ntaken. If the name of the array is \"derivArray\" this will produce\nan output array with the name \"derivArray_deriv\" (after filter\nexecution).\n"},
  {"ClearDerivativeArrays", PyvtkSPHInterpolator_ClearDerivativeArrays, METH_VARARGS,
   "ClearDerivativeArrays(self) -> None\nC++: void ClearDerivativeArrays()\n\nClears the contents of derivative array list.\n"},
  {"GetNumberOfDerivativeArrays", PyvtkSPHInterpolator_GetNumberOfDerivativeArrays, METH_VARARGS,
   "GetNumberOfDerivativeArrays(self) -> int\nC++: int GetNumberOfDerivativeArrays()\n\nReturn the number of derivative arrays.\n"},
  {"GetDerivativeArray", PyvtkSPHInterpolator_GetDerivativeArray, METH_VARARGS,
   "GetDerivativeArray(self, i:int) -> str\nC++: const char *GetDerivativeArray(int i)\n\nReturn the name of the ith derivative array.\n"},
  {"SetNullPointsStrategy", PyvtkSPHInterpolator_SetNullPointsStrategy, METH_VARARGS,
   "SetNullPointsStrategy(self, _arg:int) -> None\nC++: virtual void SetNullPointsStrategy(int _arg)\n\nSpecify a strategy to use when encountering a \"null\" point during\nthe interpolation process. Null points occur when the local\nneighborhood (of nearby points to interpolate from) is empty. If\nthe strategy is set to MaskPoints, then an output array is\ncreated that marks points as being valid (=1) or null (invalid\n=0) (and the NullValue is set as well). If the strategy is set to\nNullValue, then the output data value(s) are set to the NullPoint\nvalue.\n"},
  {"GetNullPointsStrategy", PyvtkSPHInterpolator_GetNullPointsStrategy, METH_VARARGS,
   "GetNullPointsStrategy(self) -> int\nC++: virtual int GetNullPointsStrategy()\n\n"},
  {"SetNullPointsStrategyToMaskPoints", PyvtkSPHInterpolator_SetNullPointsStrategyToMaskPoints, METH_VARARGS,
   "SetNullPointsStrategyToMaskPoints(self) -> None\nC++: void SetNullPointsStrategyToMaskPoints()\n\n"},
  {"SetNullPointsStrategyToNullValue", PyvtkSPHInterpolator_SetNullPointsStrategyToNullValue, METH_VARARGS,
   "SetNullPointsStrategyToNullValue(self) -> None\nC++: void SetNullPointsStrategyToNullValue()\n\n"},
  {"SetValidPointsMaskArrayName", PyvtkSPHInterpolator_SetValidPointsMaskArrayName, METH_VARARGS,
   "SetValidPointsMaskArrayName(self, _arg:str) -> None\nC++: virtual void SetValidPointsMaskArrayName(vtkStdString _arg)\n\nIf the NullPointsStrategy == MASK_POINTS, then an array is\ngenerated for each input point. This vtkCharArray is placed into\nthe output of the filter, with a non-zero value for a valid\npoint, and zero otherwise. The name of this masking array is\nspecified here.\n"},
  {"GetValidPointsMaskArrayName", PyvtkSPHInterpolator_GetValidPointsMaskArrayName, METH_VARARGS,
   "GetValidPointsMaskArrayName(self) -> str\nC++: virtual vtkStdString GetValidPointsMaskArrayName()\n\n"},
  {"SetNullValue", PyvtkSPHInterpolator_SetNullValue, METH_VARARGS,
   "SetNullValue(self, _arg:float) -> None\nC++: virtual void SetNullValue(double _arg)\n\nSpecify the null point value. When a null point is encountered\nthen all components of each null tuple are set to this value. By\ndefault the null value is set to zero.\n"},
  {"GetNullValue", PyvtkSPHInterpolator_GetNullValue, METH_VARARGS,
   "GetNullValue(self) -> float\nC++: virtual double GetNullValue()\n\n"},
  {"SetComputeShepardSum", PyvtkSPHInterpolator_SetComputeShepardSum, METH_VARARGS,
   "SetComputeShepardSum(self, _arg:int) -> None\nC++: virtual void SetComputeShepardSum(vtkTypeBool _arg)\n\nIndicate whether to compute the summation of weighting\ncoefficients (the so-called Shepard sum). In the interior of a\nSPH point cloud, the Shepard summation value should be ~1.0. \nTowards the boundary, the Shepard summation generally falls off\n<1.0. If ComputeShepardSum is specified, then the output will\ncontain an array of summed Shepard weights for each output point.\nOn by default.\n"},
  {"ComputeShepardSumOn", PyvtkSPHInterpolator_ComputeShepardSumOn, METH_VARARGS,
   "ComputeShepardSumOn(self) -> None\nC++: virtual void ComputeShepardSumOn()\n\n"},
  {"ComputeShepardSumOff", PyvtkSPHInterpolator_ComputeShepardSumOff, METH_VARARGS,
   "ComputeShepardSumOff(self) -> None\nC++: virtual void ComputeShepardSumOff()\n\n"},
  {"GetComputeShepardSum", PyvtkSPHInterpolator_GetComputeShepardSum, METH_VARARGS,
   "GetComputeShepardSum(self) -> int\nC++: virtual vtkTypeBool GetComputeShepardSum()\n\n"},
  {"SetShepardSumArrayName", PyvtkSPHInterpolator_SetShepardSumArrayName, METH_VARARGS,
   "SetShepardSumArrayName(self, _arg:str) -> None\nC++: virtual void SetShepardSumArrayName(vtkStdString _arg)\n\nIf ComputeShepardSum is on, then an array is generated with name\nShepardSumArrayName for each input point. This vtkFloatArray is\nplaced into the output of the filter, and NullPoints have value\n=0.0. The default name is \"Shepard Summation\".\n"},
  {"GetShepardSumArrayName", PyvtkSPHInterpolator_GetShepardSumArrayName, METH_VARARGS,
   "GetShepardSumArrayName(self) -> str\nC++: virtual vtkStdString GetShepardSumArrayName()\n\n"},
  {"SetPromoteOutputArrays", PyvtkSPHInterpolator_SetPromoteOutputArrays, METH_VARARGS,
   "SetPromoteOutputArrays(self, _arg:int) -> None\nC++: virtual void SetPromoteOutputArrays(vtkTypeBool _arg)\n\nIf enabled, then input arrays that are non-real types (i.e., not\nfloat or double) are promoted to float type on output. This is\nbecause the interpolation process may not be well behaved when\nintegral types are combined using interpolation weights.\n"},
  {"PromoteOutputArraysOn", PyvtkSPHInterpolator_PromoteOutputArraysOn, METH_VARARGS,
   "PromoteOutputArraysOn(self) -> None\nC++: virtual void PromoteOutputArraysOn()\n\n"},
  {"PromoteOutputArraysOff", PyvtkSPHInterpolator_PromoteOutputArraysOff, METH_VARARGS,
   "PromoteOutputArraysOff(self) -> None\nC++: virtual void PromoteOutputArraysOff()\n\n"},
  {"GetPromoteOutputArrays", PyvtkSPHInterpolator_GetPromoteOutputArrays, METH_VARARGS,
   "GetPromoteOutputArrays(self) -> int\nC++: virtual vtkTypeBool GetPromoteOutputArrays()\n\n"},
  {"SetPassPointArrays", PyvtkSPHInterpolator_SetPassPointArrays, METH_VARARGS,
   "SetPassPointArrays(self, _arg:int) -> None\nC++: virtual void SetPassPointArrays(vtkTypeBool _arg)\n\nIndicate whether to shallow copy the input point data arrays to\nthe output. On by default.\n"},
  {"PassPointArraysOn", PyvtkSPHInterpolator_PassPointArraysOn, METH_VARARGS,
   "PassPointArraysOn(self) -> None\nC++: virtual void PassPointArraysOn()\n\n"},
  {"PassPointArraysOff", PyvtkSPHInterpolator_PassPointArraysOff, METH_VARARGS,
   "PassPointArraysOff(self) -> None\nC++: virtual void PassPointArraysOff()\n\n"},
  {"GetPassPointArrays", PyvtkSPHInterpolator_GetPassPointArrays, METH_VARARGS,
   "GetPassPointArrays(self) -> int\nC++: virtual vtkTypeBool GetPassPointArrays()\n\n"},
  {"SetPassCellArrays", PyvtkSPHInterpolator_SetPassCellArrays, METH_VARARGS,
   "SetPassCellArrays(self, _arg:int) -> None\nC++: virtual void SetPassCellArrays(vtkTypeBool _arg)\n\nIndicate whether to shallow copy the input cell data arrays to\nthe output. On by default.\n"},
  {"PassCellArraysOn", PyvtkSPHInterpolator_PassCellArraysOn, METH_VARARGS,
   "PassCellArraysOn(self) -> None\nC++: virtual void PassCellArraysOn()\n\n"},
  {"PassCellArraysOff", PyvtkSPHInterpolator_PassCellArraysOff, METH_VARARGS,
   "PassCellArraysOff(self) -> None\nC++: virtual void PassCellArraysOff()\n\n"},
  {"GetPassCellArrays", PyvtkSPHInterpolator_GetPassCellArrays, METH_VARARGS,
   "GetPassCellArrays(self) -> int\nC++: virtual vtkTypeBool GetPassCellArrays()\n\n"},
  {"SetPassFieldArrays", PyvtkSPHInterpolator_SetPassFieldArrays, METH_VARARGS,
   "SetPassFieldArrays(self, _arg:int) -> None\nC++: virtual void SetPassFieldArrays(vtkTypeBool _arg)\n\nIndicate whether to pass the field-data arrays from the input to\nthe output. On by default.\n"},
  {"PassFieldArraysOn", PyvtkSPHInterpolator_PassFieldArraysOn, METH_VARARGS,
   "PassFieldArraysOn(self) -> None\nC++: virtual void PassFieldArraysOn()\n\n"},
  {"PassFieldArraysOff", PyvtkSPHInterpolator_PassFieldArraysOff, METH_VARARGS,
   "PassFieldArraysOff(self) -> None\nC++: virtual void PassFieldArraysOff()\n\n"},
  {"GetPassFieldArrays", PyvtkSPHInterpolator_GetPassFieldArrays, METH_VARARGS,
   "GetPassFieldArrays(self) -> int\nC++: virtual vtkTypeBool GetPassFieldArrays()\n\n"},
  {"SetShepardNormalization", PyvtkSPHInterpolator_SetShepardNormalization, METH_VARARGS,
   "SetShepardNormalization(self, _arg:int) -> None\nC++: virtual void SetShepardNormalization(vtkTypeBool _arg)\n\nIndicate whether to normalize all arrays with the Shepard\ncoefficients (except the density array and the Shepard sum\narray). If the Shepard coefficient is 0, then the data value is\nset to zero. Note that enabling ShepardNormalization forces the\ncomputation of the ShepardSum array.\n"},
  {"ShepardNormalizationOn", PyvtkSPHInterpolator_ShepardNormalizationOn, METH_VARARGS,
   "ShepardNormalizationOn(self) -> None\nC++: virtual void ShepardNormalizationOn()\n\n"},
  {"ShepardNormalizationOff", PyvtkSPHInterpolator_ShepardNormalizationOff, METH_VARARGS,
   "ShepardNormalizationOff(self) -> None\nC++: virtual void ShepardNormalizationOff()\n\n"},
  {"GetShepardNormalization", PyvtkSPHInterpolator_GetShepardNormalization, METH_VARARGS,
   "GetShepardNormalization(self) -> int\nC++: virtual vtkTypeBool GetShepardNormalization()\n\n"},
  {"GetMTime", PyvtkSPHInterpolator_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime of this object also considering the locator and\nkernel.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSPHInterpolator_Doc =
  "vtkSPHInterpolator - interpolate over point cloud using SPH kernels\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "This filter uses SPH (smooth particle hydrodynamics) kernels to\n"
  "interpolate a data source onto an input structure. For example, while\n"
  "the data source is a set of particles, the data from these particles\n"
  "can be interpolated onto an input object such as a line, plane or\n"
  "volume. Then the output (which consists of the input structure plus\n"
  "interpolated data) can then be visualized using classical\n"
  "visualization techniques such as isocontouring, slicing, heat maps\n"
  "and so on.\n\n"
  "To use this filter, besides setting the input P and source Pc,\n"
  "specify a point locator (which accelerates queries about points and\n"
  "their neighbors) and an interpolation kernel (a subclass of\n"
  "vtkSPHKernel). In addition, the name of the source's density and mass\n"
  "arrays can optionally be provided; however if not provided then the\n"
  "local volume is computed from the kernel's spatial step. Finally, a\n"
  "cutoff distance array can optionally be provided (as part of the\n"
  "input P point data) when the local neighborhood around each sample\n"
  "point varies. The cutoff distance defines a local neighborhood in\n"
  "which the points in that neighborhood are used to interpolate values.\n"
  "If not provided, then the cutoff distance is computed from the\n"
  "spatial step size times the cutoff factor (see vtkSPHKernel).\n\n"
  "Other options to the filter include specifying which data attributes\n"
  "to interpolate from the source. By default, all data attributes\n"
  "contained in the source are interpolated. However, by adding array\n"
  "names to the exclusion list, these arrays will not be interpolated.\n"
  "Also, it is possible to use a SPH derivative formulation to\n"
  "interpolate from the source data attributes. This requires adding\n"
  "arrays (by name) to the derivative list, in which case the derivative\n"
  "formulation will be applied to create a new output array named\n"
  "\"X_deriv\" where X is the name of a source point attribute array.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@warning\n"
  "For widely spaced points in Pc, or when p is located outside the\n"
  "bounding region of Pc, the interpolation may behave badly and the\n"
  "interpolation process will adapt as necessary to produce output. For\n"
  "example, if the N closest points within R are requested to\n"
  "interpolate p, if N=0 then the interpolation will switch to a\n"
  "different strategy (which can be controlled as in the\n"
  "NullPointsStrategy).\n\n"
  "@warning\n"
  "For more information and technical reference, see D.J. Price,\n"
  "Smoothed particle hydrodynamics and magnetohydrodynamics, J. Comput.\n"
  "Phys. 231:759-794, 2012. Especially equation 49.\n\n"
  "@par Acknowledgments: The following work has been generously\n"
  "supported by Altair Engineering and FluiDyna GmbH. Please contact\n"
  "Steve Cosgrove or Milos Stanic for more information.\n\n"
  "@sa\n"
  "vtkPointInterpolator vtkSPHKernel vtkSPHQuinticKernel\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSPHInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkSPHInterpolator", // tp_name
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
  PyvtkSPHInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSPHInterpolator_StaticNew()
{
  return vtkSPHInterpolator::New();
}

PyObject *PyvtkSPHInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSPHInterpolator_Type, PyvtkSPHInterpolator_Methods,
    "vtkSPHInterpolator",
 &PyvtkSPHInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSPHInterpolator_NullStrategy_Type);
  PyVTKEnum_Add(&PyvtkSPHInterpolator_NullStrategy_Type, "vtkSPHInterpolator.NullStrategy");

  o = (PyObject *)&PyvtkSPHInterpolator_NullStrategy_Type;
  if (PyDict_SetItemString(d, "NullStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSPHInterpolator::NullStrategy cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "MASK_POINTS", vtkSPHInterpolator::MASK_POINTS },
        { "NULL_VALUE", vtkSPHInterpolator::NULL_VALUE },
      };

    o = PyvtkSPHInterpolator_NullStrategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSPHInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSPHInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSPHInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

