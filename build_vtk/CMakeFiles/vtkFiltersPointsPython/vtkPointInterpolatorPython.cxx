// python wrapper for vtkPointInterpolator
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
#include "vtkPointInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkPointInterpolator_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointInterpolator_Strategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPointInterpolator.Strategy", // tp_name
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
PyObject *PyvtkPointInterpolator_Strategy_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPointInterpolator_Strategy_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPointInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointInterpolator *tempr = vtkPointInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointInterpolator::NewInstance());

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
PyvtkPointInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

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
      op->vtkPointInterpolator::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkPointInterpolator::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

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
      op->vtkPointInterpolator::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

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
      op->vtkPointInterpolator::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkPointInterpolator::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  vtkInterpolationKernel *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInterpolationKernel"))
  {
    if (ap.IsBound())
    {
      op->SetKernel(temp0);
    }
    else
    {
      op->vtkPointInterpolator::SetKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInterpolationKernel *tempr = (ap.IsBound() ?
      op->GetKernel() :
      op->vtkPointInterpolator::GetKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetNullPointsStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullPointsStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

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
      op->vtkPointInterpolator::SetNullPointsStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetNullPointsStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullPointsStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNullPointsStrategy() :
      op->vtkPointInterpolator::GetNullPointsStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetNullPointsStrategyToMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullPointsStrategyToMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNullPointsStrategyToMaskPoints();
    }
    else
    {
      op->vtkPointInterpolator::SetNullPointsStrategyToMaskPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetNullPointsStrategyToNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullPointsStrategyToNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNullPointsStrategyToNullValue();
    }
    else
    {
      op->vtkPointInterpolator::SetNullPointsStrategyToNullValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetNullPointsStrategyToClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullPointsStrategyToClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNullPointsStrategyToClosestPoint();
    }
    else
    {
      op->vtkPointInterpolator::SetNullPointsStrategyToClosestPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetValidPointsMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointsMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

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
      op->vtkPointInterpolator::SetValidPointsMaskArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetValidPointsMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointsMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetValidPointsMaskArrayName() :
      op->vtkPointInterpolator::GetValidPointsMaskArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

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
      op->vtkPointInterpolator::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNullValue() :
      op->vtkPointInterpolator::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_AddExcludedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExcludedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

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
      op->vtkPointInterpolator::AddExcludedArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_ClearExcludedArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearExcludedArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearExcludedArrays();
    }
    else
    {
      op->vtkPointInterpolator::ClearExcludedArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetNumberOfExcludedArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExcludedArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExcludedArrays() :
      op->vtkPointInterpolator::GetNumberOfExcludedArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetExcludedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExcludedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExcludedArray(temp0) :
      op->vtkPointInterpolator::GetExcludedArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetPromoteOutputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPromoteOutputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  bool temp0 = false;
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
      op->vtkPointInterpolator::SetPromoteOutputArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_PromoteOutputArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromoteOutputArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PromoteOutputArraysOn();
    }
    else
    {
      op->vtkPointInterpolator::PromoteOutputArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_PromoteOutputArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromoteOutputArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PromoteOutputArraysOff();
    }
    else
    {
      op->vtkPointInterpolator::PromoteOutputArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetPromoteOutputArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPromoteOutputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPromoteOutputArrays() :
      op->vtkPointInterpolator::GetPromoteOutputArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  bool temp0 = false;
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
      op->vtkPointInterpolator::SetPassPointArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_PassPointArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOn();
    }
    else
    {
      op->vtkPointInterpolator::PassPointArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_PassPointArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOff();
    }
    else
    {
      op->vtkPointInterpolator::PassPointArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPointArrays() :
      op->vtkPointInterpolator::GetPassPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  bool temp0 = false;
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
      op->vtkPointInterpolator::SetPassCellArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_PassCellArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOn();
    }
    else
    {
      op->vtkPointInterpolator::PassCellArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_PassCellArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOff();
    }
    else
    {
      op->vtkPointInterpolator::PassCellArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCellArrays() :
      op->vtkPointInterpolator::GetPassCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_SetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  bool temp0 = false;
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
      op->vtkPointInterpolator::SetPassFieldArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_PassFieldArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOn();
    }
    else
    {
      op->vtkPointInterpolator::PassFieldArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_PassFieldArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOff();
    }
    else
    {
      op->vtkPointInterpolator::PassFieldArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassFieldArrays() :
      op->vtkPointInterpolator::GetPassFieldArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator *op = static_cast<vtkPointInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPointInterpolator::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkPointInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointInterpolator\nC++: static vtkPointInterpolator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointInterpolator\nC++: vtkPointInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceData", PyvtkPointInterpolator_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkDataObject) -> None\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the dataset Pc that will be probed by the input points P.\n The Input P defines the dataset structure (the points and cells)\nfor the output, while the Source Pc is probed (interpolated) to\ngenerate the scalars, vectors, etc. for the output points based\non the point locations.\n"},
  {"GetSource", PyvtkPointInterpolator_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkDataObject\nC++: vtkDataObject *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkPointInterpolator_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the dataset Pc that will be probed by the input points P.\n The Input P defines the structure (the points and cells) for the\noutput, while the Source Pc is probed (interpolated) to generate\nthe scalars, vectors, etc. for the output points based on the\npoint locations.\n"},
  {"SetLocator", PyvtkPointInterpolator_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractPointLocator) -> None\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate near a\nspecified interpolation position.\n"},
  {"GetLocator", PyvtkPointInterpolator_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\n"},
  {"SetKernel", PyvtkPointInterpolator_SetKernel, METH_VARARGS,
   "SetKernel(self, kernel:vtkInterpolationKernel) -> None\nC++: void SetKernel(vtkInterpolationKernel *kernel)\n\nSpecify an interpolation kernel. By default a vtkLinearKernel is\nused (i.e., linear combination of closest points). The\ninterpolation kernel changes the basis of the interpolation.\n"},
  {"GetKernel", PyvtkPointInterpolator_GetKernel, METH_VARARGS,
   "GetKernel(self) -> vtkInterpolationKernel\nC++: virtual vtkInterpolationKernel *GetKernel()\n\n"},
  {"SetNullPointsStrategy", PyvtkPointInterpolator_SetNullPointsStrategy, METH_VARARGS,
   "SetNullPointsStrategy(self, _arg:int) -> None\nC++: virtual void SetNullPointsStrategy(int _arg)\n\nSpecify a strategy to use when encountering a \"null\" point during\nthe interpolation process. Null points occur when the local\nneighborhood (of nearby points to interpolate from) is empty. If\nthe strategy is set to MaskPoints, then an output array is\ncreated that marks points as being valid (=1) or null (invalid\n=0) (and the NullValue is set as well). If the strategy is set to\nNullValue (this is the default), then the output data value(s)\nare set to the NullPoint value (specified in the output point\ndata). Finally, the strategy ClosestPoint is to simply use the\nclosest point to perform the interpolation.\n"},
  {"GetNullPointsStrategy", PyvtkPointInterpolator_GetNullPointsStrategy, METH_VARARGS,
   "GetNullPointsStrategy(self) -> int\nC++: virtual int GetNullPointsStrategy()\n\n"},
  {"SetNullPointsStrategyToMaskPoints", PyvtkPointInterpolator_SetNullPointsStrategyToMaskPoints, METH_VARARGS,
   "SetNullPointsStrategyToMaskPoints(self) -> None\nC++: void SetNullPointsStrategyToMaskPoints()\n\n"},
  {"SetNullPointsStrategyToNullValue", PyvtkPointInterpolator_SetNullPointsStrategyToNullValue, METH_VARARGS,
   "SetNullPointsStrategyToNullValue(self) -> None\nC++: void SetNullPointsStrategyToNullValue()\n\n"},
  {"SetNullPointsStrategyToClosestPoint", PyvtkPointInterpolator_SetNullPointsStrategyToClosestPoint, METH_VARARGS,
   "SetNullPointsStrategyToClosestPoint(self) -> None\nC++: void SetNullPointsStrategyToClosestPoint()\n\n"},
  {"SetValidPointsMaskArrayName", PyvtkPointInterpolator_SetValidPointsMaskArrayName, METH_VARARGS,
   "SetValidPointsMaskArrayName(self, _arg:str) -> None\nC++: virtual void SetValidPointsMaskArrayName(vtkStdString _arg)\n\nIf the NullPointsStrategy == MASK_POINTS, then an array is\ngenerated for each input point. This vtkCharArray is placed into\nthe output of the filter, with a non-zero value for a valid\npoint, and zero otherwise. The name of this masking array is\nspecified here.\n"},
  {"GetValidPointsMaskArrayName", PyvtkPointInterpolator_GetValidPointsMaskArrayName, METH_VARARGS,
   "GetValidPointsMaskArrayName(self) -> str\nC++: virtual vtkStdString GetValidPointsMaskArrayName()\n\n"},
  {"SetNullValue", PyvtkPointInterpolator_SetNullValue, METH_VARARGS,
   "SetNullValue(self, _arg:float) -> None\nC++: virtual void SetNullValue(double _arg)\n\nSpecify the null point value. When a null point is encountered\nthen all components of each null tuple are set to this value. By\ndefault the null value is set to zero.\n"},
  {"GetNullValue", PyvtkPointInterpolator_GetNullValue, METH_VARARGS,
   "GetNullValue(self) -> float\nC++: virtual double GetNullValue()\n\n"},
  {"AddExcludedArray", PyvtkPointInterpolator_AddExcludedArray, METH_VARARGS,
   "AddExcludedArray(self, excludedArray:str) -> None\nC++: void AddExcludedArray(const vtkStdString &excludedArray)\n\nAdds an array to the list of arrays which are to be excluded from\nthe interpolation process.\n"},
  {"ClearExcludedArrays", PyvtkPointInterpolator_ClearExcludedArrays, METH_VARARGS,
   "ClearExcludedArrays(self) -> None\nC++: void ClearExcludedArrays()\n\nClears the contents of excluded array list.\n"},
  {"GetNumberOfExcludedArrays", PyvtkPointInterpolator_GetNumberOfExcludedArrays, METH_VARARGS,
   "GetNumberOfExcludedArrays(self) -> int\nC++: int GetNumberOfExcludedArrays()\n\nReturn the number of excluded arrays.\n"},
  {"GetExcludedArray", PyvtkPointInterpolator_GetExcludedArray, METH_VARARGS,
   "GetExcludedArray(self, i:int) -> str\nC++: const char *GetExcludedArray(int i)\n\nReturn the name of the ith excluded array.\n"},
  {"SetPromoteOutputArrays", PyvtkPointInterpolator_SetPromoteOutputArrays, METH_VARARGS,
   "SetPromoteOutputArrays(self, _arg:bool) -> None\nC++: virtual void SetPromoteOutputArrays(bool _arg)\n\nIf enabled, then input arrays that are non-real types (i.e., not\nfloat or double) are promoted to float type on output. This is\nbecause the interpolation process may not be well behaved when\nintegral types are combined using interpolation weights.\n"},
  {"PromoteOutputArraysOn", PyvtkPointInterpolator_PromoteOutputArraysOn, METH_VARARGS,
   "PromoteOutputArraysOn(self) -> None\nC++: virtual void PromoteOutputArraysOn()\n\n"},
  {"PromoteOutputArraysOff", PyvtkPointInterpolator_PromoteOutputArraysOff, METH_VARARGS,
   "PromoteOutputArraysOff(self) -> None\nC++: virtual void PromoteOutputArraysOff()\n\n"},
  {"GetPromoteOutputArrays", PyvtkPointInterpolator_GetPromoteOutputArrays, METH_VARARGS,
   "GetPromoteOutputArrays(self) -> bool\nC++: virtual bool GetPromoteOutputArrays()\n\n"},
  {"SetPassPointArrays", PyvtkPointInterpolator_SetPassPointArrays, METH_VARARGS,
   "SetPassPointArrays(self, _arg:bool) -> None\nC++: virtual void SetPassPointArrays(bool _arg)\n\nIndicate whether to shallow copy the input point data arrays to\nthe output.  On by default.\n"},
  {"PassPointArraysOn", PyvtkPointInterpolator_PassPointArraysOn, METH_VARARGS,
   "PassPointArraysOn(self) -> None\nC++: virtual void PassPointArraysOn()\n\n"},
  {"PassPointArraysOff", PyvtkPointInterpolator_PassPointArraysOff, METH_VARARGS,
   "PassPointArraysOff(self) -> None\nC++: virtual void PassPointArraysOff()\n\n"},
  {"GetPassPointArrays", PyvtkPointInterpolator_GetPassPointArrays, METH_VARARGS,
   "GetPassPointArrays(self) -> bool\nC++: virtual bool GetPassPointArrays()\n\n"},
  {"SetPassCellArrays", PyvtkPointInterpolator_SetPassCellArrays, METH_VARARGS,
   "SetPassCellArrays(self, _arg:bool) -> None\nC++: virtual void SetPassCellArrays(bool _arg)\n\nIndicate whether to shallow copy the input cell data arrays to\nthe output.  On by default.\n"},
  {"PassCellArraysOn", PyvtkPointInterpolator_PassCellArraysOn, METH_VARARGS,
   "PassCellArraysOn(self) -> None\nC++: virtual void PassCellArraysOn()\n\n"},
  {"PassCellArraysOff", PyvtkPointInterpolator_PassCellArraysOff, METH_VARARGS,
   "PassCellArraysOff(self) -> None\nC++: virtual void PassCellArraysOff()\n\n"},
  {"GetPassCellArrays", PyvtkPointInterpolator_GetPassCellArrays, METH_VARARGS,
   "GetPassCellArrays(self) -> bool\nC++: virtual bool GetPassCellArrays()\n\n"},
  {"SetPassFieldArrays", PyvtkPointInterpolator_SetPassFieldArrays, METH_VARARGS,
   "SetPassFieldArrays(self, _arg:bool) -> None\nC++: virtual void SetPassFieldArrays(bool _arg)\n\nIndicate whether to pass the field-data arrays from the input to\nthe output. On by default.\n"},
  {"PassFieldArraysOn", PyvtkPointInterpolator_PassFieldArraysOn, METH_VARARGS,
   "PassFieldArraysOn(self) -> None\nC++: virtual void PassFieldArraysOn()\n\n"},
  {"PassFieldArraysOff", PyvtkPointInterpolator_PassFieldArraysOff, METH_VARARGS,
   "PassFieldArraysOff(self) -> None\nC++: virtual void PassFieldArraysOff()\n\n"},
  {"GetPassFieldArrays", PyvtkPointInterpolator_GetPassFieldArrays, METH_VARARGS,
   "GetPassFieldArrays(self) -> bool\nC++: virtual bool GetPassFieldArrays()\n\n"},
  {"GetMTime", PyvtkPointInterpolator_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime of this object also considering the locator and\nkernel.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointInterpolator_Doc =
  "vtkPointInterpolator - interpolate over point cloud using various\nkernels\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkPointInterpolator probes a point cloud Pc (the filter Source) with\n"
  "a set of points P (the filter Input), interpolating the data values\n"
  "from Pc onto P. Note however that the descriptive phrase \"point\n"
  "cloud\" is a misnomer: Pc can be represented by any vtkDataSet type,\n"
  "with the points of the dataset forming Pc. Similarly, the output P\n"
  "can also be represented by any vtkDataSet type; and the\n"
  "topology/geometry structure of P is passed through to the output\n"
  "along with the newly interpolated arrays.\n\n"
  "A key input to this filter is the specification of the interpolation\n"
  "kernel, and the parameters which control the associated interpolation\n"
  "process. Interpolation kernels include Voronoi, Gaussian, Shepard,\n"
  "and SPH (smoothed particle hydrodynamics), with additional kernels to\n"
  "be added in the future.\n\n"
  "An overview of the algorithm is as follows. For each p from P, Np\n"
  "\"close\" points to p are found. (The meaning of what is \"close\" can be\n"
  "specified as either the N closest points, or all points within a\n"
  "given radius Rp. This depends on how the kernel is defined.) Once the\n"
  "Np close points are found, then the interpolation kernel is applied\n"
  "to compute new data values located on p. Note that for reasonable\n"
  "performance, finding the Np closest points requires a point locator.\n"
  "The locator may be specified as input to the algorithm. (By default,\n"
  "a vtkStaticPointLocator is used because generally it is much faster\n"
  "to build, delete, and search with. However, with highly non-uniform\n"
  "point distributions, octree- or kd-tree based locators may perform\n"
  "better.)\n\n"
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
  "@sa\n"
  "vtkPointInterpolator2D vtkProbeFilter vtkGaussianSplatter\n"
  "vtkCheckerboardSplatter vtkShepardMethod vtkVoronoiKernel\n"
  "vtkShepardKernel vtkGaussianKernel vtkSPHKernel\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPointInterpolator", // tp_name
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
  PyvtkPointInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointInterpolator_StaticNew()
{
  return vtkPointInterpolator::New();
}

PyObject *PyvtkPointInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointInterpolator_Type, PyvtkPointInterpolator_Methods,
    "vtkPointInterpolator",
 &PyvtkPointInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPointInterpolator_Strategy_Type);
  PyVTKEnum_Add(&PyvtkPointInterpolator_Strategy_Type, "vtkPointInterpolator.Strategy");

  o = (PyObject *)&PyvtkPointInterpolator_Strategy_Type;
  if (PyDict_SetItemString(d, "Strategy", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPointInterpolator::Strategy cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MASK_POINTS", vtkPointInterpolator::MASK_POINTS },
        { "NULL_VALUE", vtkPointInterpolator::NULL_VALUE },
        { "CLOSEST_POINT", vtkPointInterpolator::CLOSEST_POINT },
      };

    o = PyvtkPointInterpolator_Strategy_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

