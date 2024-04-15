// python wrapper for vtkAttributeSmoothingFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAttributeSmoothingFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAttributeSmoothingFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkAttributeSmoothingFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAttributeSmoothingFilter_SmoothingStrategyType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkAttributeSmoothingFilter.SmoothingStrategyType", // tp_name
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
PyObject *PyvtkAttributeSmoothingFilter_SmoothingStrategyType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAttributeSmoothingFilter_SmoothingStrategyType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAttributeSmoothingFilter_InterpolationWeightsType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkAttributeSmoothingFilter.InterpolationWeightsType", // tp_name
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
PyObject *PyvtkAttributeSmoothingFilter_InterpolationWeightsType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAttributeSmoothingFilter_InterpolationWeightsType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAttributeSmoothingFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAttributeSmoothingFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeSmoothingFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAttributeSmoothingFilter *tempr = vtkAttributeSmoothingFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAttributeSmoothingFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeSmoothingFilter::NewInstance());

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
PyvtkAttributeSmoothingFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAttributeSmoothingFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAttributeSmoothingFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMinValue() :
      op->vtkAttributeSmoothingFilter::GetNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMaxValue() :
      op->vtkAttributeSmoothingFilter::GetNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkAttributeSmoothingFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelaxationFactor(temp0);
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetRelaxationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetRelaxationFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelaxationFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelaxationFactorMinValue() :
      op->vtkAttributeSmoothingFilter::GetRelaxationFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetRelaxationFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelaxationFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelaxationFactorMaxValue() :
      op->vtkAttributeSmoothingFilter::GetRelaxationFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelaxationFactor() :
      op->vtkAttributeSmoothingFilter::GetRelaxationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetSmoothingStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingStrategy(temp0);
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetSmoothingStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetSmoothingStrategyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothingStrategyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothingStrategyMinValue() :
      op->vtkAttributeSmoothingFilter::GetSmoothingStrategyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetSmoothingStrategyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothingStrategyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothingStrategyMaxValue() :
      op->vtkAttributeSmoothingFilter::GetSmoothingStrategyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetSmoothingStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothingStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothingStrategy() :
      op->vtkAttributeSmoothingFilter::GetSmoothingStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetSmoothingStrategyToAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingStrategyToAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingStrategyToAllPoints();
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetSmoothingStrategyToAllPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetSmoothingStrategyToAllButBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingStrategyToAllButBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingStrategyToAllButBoundary();
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetSmoothingStrategyToAllButBoundary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetSmoothingStrategyToAdjacentToBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingStrategyToAdjacentToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingStrategyToAdjacentToBoundary();
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetSmoothingStrategyToAdjacentToBoundary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetSmoothingStrategyToSmoothingMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingStrategyToSmoothingMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingStrategyToSmoothingMask();
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetSmoothingStrategyToSmoothingMask();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetSmoothingMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingMask(temp0);
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetSmoothingMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetSmoothingMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothingMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetSmoothingMask() :
      op->vtkAttributeSmoothingFilter::GetSmoothingMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetWeightsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWeightsType(temp0);
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetWeightsType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetWeightsTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightsTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWeightsTypeMinValue() :
      op->vtkAttributeSmoothingFilter::GetWeightsTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetWeightsTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightsTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWeightsTypeMaxValue() :
      op->vtkAttributeSmoothingFilter::GetWeightsTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetWeightsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWeightsType() :
      op->vtkAttributeSmoothingFilter::GetWeightsType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetWeightsTypeToAverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightsTypeToAverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWeightsTypeToAverage();
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetWeightsTypeToAverage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetWeightsTypeToDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightsTypeToDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWeightsTypeToDistance();
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetWeightsTypeToDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_SetWeightsTypeToDistance2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightsTypeToDistance2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWeightsTypeToDistance2();
    }
    else
    {
      op->vtkAttributeSmoothingFilter::SetWeightsTypeToDistance2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_AddExcludedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddExcludedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  std::string temp0;
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
      op->vtkAttributeSmoothingFilter::AddExcludedArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_ClearExcludedArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearExcludedArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearExcludedArrays();
    }
    else
    {
      op->vtkAttributeSmoothingFilter::ClearExcludedArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetNumberOfExcludedArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfExcludedArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfExcludedArrays() :
      op->vtkAttributeSmoothingFilter::GetNumberOfExcludedArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeSmoothingFilter_GetExcludedArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExcludedArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeSmoothingFilter *op = static_cast<vtkAttributeSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExcludedArray(temp0) :
      op->vtkAttributeSmoothingFilter::GetExcludedArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAttributeSmoothingFilter_Methods[] = {
  {"IsTypeOf", PyvtkAttributeSmoothingFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAttributeSmoothingFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAttributeSmoothingFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAttributeSmoothingFilter\nC++: static vtkAttributeSmoothingFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAttributeSmoothingFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAttributeSmoothingFilter\nC++: vtkAttributeSmoothingFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAttributeSmoothingFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAttributeSmoothingFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfIterations", PyvtkAttributeSmoothingFilter_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetNumberOfIterations(int _arg)\n\nSpecify the maximum number of iterations for smoothing.  The\ndefault value is 5.\n"},
  {"GetNumberOfIterationsMinValue", PyvtkAttributeSmoothingFilter_GetNumberOfIterationsMinValue, METH_VARARGS,
   "GetNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetNumberOfIterationsMinValue()\n\n"},
  {"GetNumberOfIterationsMaxValue", PyvtkAttributeSmoothingFilter_GetNumberOfIterationsMaxValue, METH_VARARGS,
   "GetNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetNumberOfIterationsMaxValue()\n\n"},
  {"GetNumberOfIterations", PyvtkAttributeSmoothingFilter_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: virtual int GetNumberOfIterations()\n\n"},
  {"SetRelaxationFactor", PyvtkAttributeSmoothingFilter_SetRelaxationFactor, METH_VARARGS,
   "SetRelaxationFactor(self, _arg:float) -> None\nC++: virtual void SetRelaxationFactor(double _arg)\n\nSpecify the relaxation factor for smoothing. As in all iterative\nmethods, the stability of the process is sensitive to this\nparameter. In general, small relaxation factors and large numbers\nof iterations are more stable than larger relaxation factors and\nsmaller numbers of iterations. The default value is 0.10.\n"},
  {"GetRelaxationFactorMinValue", PyvtkAttributeSmoothingFilter_GetRelaxationFactorMinValue, METH_VARARGS,
   "GetRelaxationFactorMinValue(self) -> float\nC++: virtual double GetRelaxationFactorMinValue()\n\n"},
  {"GetRelaxationFactorMaxValue", PyvtkAttributeSmoothingFilter_GetRelaxationFactorMaxValue, METH_VARARGS,
   "GetRelaxationFactorMaxValue(self) -> float\nC++: virtual double GetRelaxationFactorMaxValue()\n\n"},
  {"GetRelaxationFactor", PyvtkAttributeSmoothingFilter_GetRelaxationFactor, METH_VARARGS,
   "GetRelaxationFactor(self) -> float\nC++: virtual double GetRelaxationFactor()\n\n"},
  {"SetSmoothingStrategy", PyvtkAttributeSmoothingFilter_SetSmoothingStrategy, METH_VARARGS,
   "SetSmoothingStrategy(self, _arg:int) -> None\nC++: virtual void SetSmoothingStrategy(int _arg)\n\nIndicate how to constrain smoothing of the attribute data. By\ndefault, all point data attributes are smoothed (ALL_POINTS). If\nALL_BUT_BOUNDARY is selected, then all point attribute data\nexcept those on the boundary of the mesh are smoothed.  If\nADJACENT_TO_BOUNDARY is selected, then only point data connected\nto a boundary point are smoothed, but boundary and interior\npoints are not. (ALL_BUT_BOUNDARY and ADJACENT_TO_BOUNDARY are\nuseful for transitioning from fixed boundary conditions to\ninterior data.) If desired, it is possible to explicitly specify\na smoothing mask controlling which points are smoothed and not\nsmoothed. The default constraint strategy is ALL_POINTS.\n"},
  {"GetSmoothingStrategyMinValue", PyvtkAttributeSmoothingFilter_GetSmoothingStrategyMinValue, METH_VARARGS,
   "GetSmoothingStrategyMinValue(self) -> int\nC++: virtual int GetSmoothingStrategyMinValue()\n\n"},
  {"GetSmoothingStrategyMaxValue", PyvtkAttributeSmoothingFilter_GetSmoothingStrategyMaxValue, METH_VARARGS,
   "GetSmoothingStrategyMaxValue(self) -> int\nC++: virtual int GetSmoothingStrategyMaxValue()\n\n"},
  {"GetSmoothingStrategy", PyvtkAttributeSmoothingFilter_GetSmoothingStrategy, METH_VARARGS,
   "GetSmoothingStrategy(self) -> int\nC++: virtual int GetSmoothingStrategy()\n\n"},
  {"SetSmoothingStrategyToAllPoints", PyvtkAttributeSmoothingFilter_SetSmoothingStrategyToAllPoints, METH_VARARGS,
   "SetSmoothingStrategyToAllPoints(self) -> None\nC++: void SetSmoothingStrategyToAllPoints()\n\n"},
  {"SetSmoothingStrategyToAllButBoundary", PyvtkAttributeSmoothingFilter_SetSmoothingStrategyToAllButBoundary, METH_VARARGS,
   "SetSmoothingStrategyToAllButBoundary(self) -> None\nC++: void SetSmoothingStrategyToAllButBoundary()\n\n"},
  {"SetSmoothingStrategyToAdjacentToBoundary", PyvtkAttributeSmoothingFilter_SetSmoothingStrategyToAdjacentToBoundary, METH_VARARGS,
   "SetSmoothingStrategyToAdjacentToBoundary(self) -> None\nC++: void SetSmoothingStrategyToAdjacentToBoundary()\n\n"},
  {"SetSmoothingStrategyToSmoothingMask", PyvtkAttributeSmoothingFilter_SetSmoothingStrategyToSmoothingMask, METH_VARARGS,
   "SetSmoothingStrategyToSmoothingMask(self) -> None\nC++: void SetSmoothingStrategyToSmoothingMask()\n\n"},
  {"SetSmoothingMask", PyvtkAttributeSmoothingFilter_SetSmoothingMask, METH_VARARGS,
   "SetSmoothingMask(self, _arg:vtkUnsignedCharArray) -> None\nC++: virtual void SetSmoothingMask(vtkUnsignedCharArray *_arg)\n\nSpecify the smoothing mask to use (which takes effect only when a\nSMOOTHING_MASK smoothing strategy is specified). The smoothing\nmask is a vtkUnsignedCharArray with a value ==1 at all points\nwhose attributes are to be smoothed.  The size of the data array\nmust match the number of input points. If there is a mismatch\nbetween the size of the smoothing mask, and the number of input\npoints, then an ALL_POINTS smoothing strategy is used.\n"},
  {"GetSmoothingMask", PyvtkAttributeSmoothingFilter_GetSmoothingMask, METH_VARARGS,
   "GetSmoothingMask(self) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetSmoothingMask()\n\n"},
  {"SetWeightsType", PyvtkAttributeSmoothingFilter_SetWeightsType, METH_VARARGS,
   "SetWeightsType(self, _arg:int) -> None\nC++: virtual void SetWeightsType(int _arg)\n\nIndicate how to compute weights, using 1) a simple average of all\nconnected points in the stencil; 2) a distance-weighted (i.e.,\n1/r) approach; or 3) distance**2-weighted (i.e., 1/(r**2)\ninterpolation weights). The default constraint strategy is\ndistance**2-weighted (i.e., DISTANCE2).\n"},
  {"GetWeightsTypeMinValue", PyvtkAttributeSmoothingFilter_GetWeightsTypeMinValue, METH_VARARGS,
   "GetWeightsTypeMinValue(self) -> int\nC++: virtual int GetWeightsTypeMinValue()\n\n"},
  {"GetWeightsTypeMaxValue", PyvtkAttributeSmoothingFilter_GetWeightsTypeMaxValue, METH_VARARGS,
   "GetWeightsTypeMaxValue(self) -> int\nC++: virtual int GetWeightsTypeMaxValue()\n\n"},
  {"GetWeightsType", PyvtkAttributeSmoothingFilter_GetWeightsType, METH_VARARGS,
   "GetWeightsType(self) -> int\nC++: virtual int GetWeightsType()\n\n"},
  {"SetWeightsTypeToAverage", PyvtkAttributeSmoothingFilter_SetWeightsTypeToAverage, METH_VARARGS,
   "SetWeightsTypeToAverage(self) -> None\nC++: void SetWeightsTypeToAverage()\n\n"},
  {"SetWeightsTypeToDistance", PyvtkAttributeSmoothingFilter_SetWeightsTypeToDistance, METH_VARARGS,
   "SetWeightsTypeToDistance(self) -> None\nC++: void SetWeightsTypeToDistance()\n\n"},
  {"SetWeightsTypeToDistance2", PyvtkAttributeSmoothingFilter_SetWeightsTypeToDistance2, METH_VARARGS,
   "SetWeightsTypeToDistance2(self) -> None\nC++: void SetWeightsTypeToDistance2()\n\n"},
  {"AddExcludedArray", PyvtkAttributeSmoothingFilter_AddExcludedArray, METH_VARARGS,
   "AddExcludedArray(self, excludedArray:str) -> None\nC++: void AddExcludedArray(const std::string &excludedArray)\n\nAdds an array to the list of arrays which are to be excluded from\nthe interpolation process. Any specified arrays are simply passed\nthrough to the filter output.\n"},
  {"ClearExcludedArrays", PyvtkAttributeSmoothingFilter_ClearExcludedArrays, METH_VARARGS,
   "ClearExcludedArrays(self) -> None\nC++: void ClearExcludedArrays()\n\nClears the contents of excluded array list.\n"},
  {"GetNumberOfExcludedArrays", PyvtkAttributeSmoothingFilter_GetNumberOfExcludedArrays, METH_VARARGS,
   "GetNumberOfExcludedArrays(self) -> int\nC++: int GetNumberOfExcludedArrays()\n\nReturn the number of excluded arrays.\n"},
  {"GetExcludedArray", PyvtkAttributeSmoothingFilter_GetExcludedArray, METH_VARARGS,
   "GetExcludedArray(self, i:int) -> str\nC++: const char *GetExcludedArray(int i)\n\nReturn the name of the ith excluded array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAttributeSmoothingFilter_Doc =
  "vtkAttributeSmoothingFilter - smooth mesh point attribute data using\ndistance weighted Laplacian kernel\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkAttributeSmoothingFilter is a filter that smooths point attribute\n"
  "data using a Laplacian smoothing approach. The effect is to \"relax\"\n"
  "or \"smooth\" the attributes, reducing high frequency information. Note\n"
  "that this filter operates on all dataset types.\n\n"
  "A central concept of this filter is the point smoothing stencil. A\n"
  "smoothing stencil for a point p(i) is the list of points p(j) which\n"
  "connect to p(i) via an edge. To smooth the attributes of point p(i),\n"
  "p(i)'s attribute data a(i) are iteratively averaged using the\n"
  "distance weighted average of the attributes of a(j) (the weights w[j]\n"
  "sum to 1). This averaging process is repeated until the maximum\n"
  "number of iterations is reached.\n\n"
  "The relaxation factor R is also important as the smoothing process\n"
  "proceeds in an iterative fashion. The a(i+1) attributes are\n"
  "determined from the a(i) attributes as follows: ``` a(i+1) =\n"
  "(1-R)*a(i) + R*sum(w(j)*a(j)) ```\n\n"
  "Convergence occurs faster for larger relaxation factors. Typically a\n"
  "small number of iterations is required for large relaxation factors,\n"
  "and in cases where only points adjacent to the boundary are being\n"
  "smoothed, a single iteration with R=1 may be adequate (i.e., just a\n"
  "distance weighted average is computed).\n\n"
  "To control what regions in the dataset have their attributes\n"
  "smoothed, it is possible to specify which points (and their\n"
  "attributes) are allowed to be smoothed (and therefore also those that\n"
  "are constrained). Typically point data attributes may be constrained\n"
  "on the boundary, or only point attributes directly connected (i.e.,\n"
  "adjacent) to the boundary may be allowed to change (this supports\n"
  "smooth transition of attributes from the boundary into the interior\n"
  "of the mesh). Note that the meaning of a boundary point (versus\n"
  "interior point) changes depending on the input dataset type. For\n"
  "vtkPolyData, boundary *edges* are used to identify boundary points;\n"
  "for all other dataset types, points used by a boundary\n"
  "*face* are considered boundary points. It is also possible to\n"
  "    explicitly specify which points are smoothed, and those that are\n"
  "    constrained, by specifying a smooth mask associated with each\n"
  "    input point.\n\n"
  "To control which point data attributes are to be smoothed, specify in\n"
  "ExcludedArrays which arrays should not be smoothed--these data arrays\n"
  "are simply passed through to the output of the filter.\n\n"
  "@warning\n"
  "Certain data attributes cannot be correctly interpolated using this\n"
  "filter.  For example, surface normals are expected to be |n|=1; after\n"
  "attribute smoothing this constraint is likely to be violated. Other\n"
  "vectors and tensors may suffer from similar issues. In such a\n"
  "situation, specify ExcludedArrays which will not be smoothed (and\n"
  "simply passed through to the output of the filter).\n\n"
  "@warning\n"
  "Currently the distance weighting function is based on averaging, 1/r,\n"
  "or 1/(r**2) weights (user selectable), where r is the distance\n"
  "between the point to be smoothed and an edge connected neighbor\n"
  "(defined by the smoothing stencil). The weights are normalized so\n"
  "that sum(w(i))==1. When smoothing based on averaging, the weights are\n"
  "simply 1/n, where n is the number of connected points in the stencil.\n\n"
  "@warning\n"
  "The smoothing process reduces high frequency information in the data\n"
  "attributes. With excessive smoothing (large numbers of iterations,\n"
  "and/or a large relaxation factor) important details may be lost, and\n"
  "the attributes will move towards an \"average\" value.\n\n"
  "@warning\n"
  "While this filter will process any dataset type, if the input data is\n"
  "a 3D image volume, it's likely much faster to use an image-based\n"
  "algorithm to perform data smoothing.\n\n"
  "@warning\n"
  "To determine boundary points in vtkPolyData, edges used by only one\n"
  "cell are considered boundary (and hence the associated points\n"
  "defining the edge). To determine boundary points for all other\n"
  "dataset types, a vtkMarkBoundaryFilter is used to extract the\n"
  "boundary faces - this can be time consuming for large data.\n\n"
  "@sa\n"
  "vtkConstrainedSmoothingFilter vtkWindowedSincPolyDataFilter\n"
  "vtkSmoothPolyDataFilter vtkExtractEdges vtkMarkBoundaryFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAttributeSmoothingFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkAttributeSmoothingFilter", // tp_name
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
  PyvtkAttributeSmoothingFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAttributeSmoothingFilter_StaticNew()
{
  return vtkAttributeSmoothingFilter::New();
}

PyObject *PyvtkAttributeSmoothingFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAttributeSmoothingFilter_Type, PyvtkAttributeSmoothingFilter_Methods,
    "vtkAttributeSmoothingFilter",
 &PyvtkAttributeSmoothingFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAttributeSmoothingFilter_SmoothingStrategyType_Type);
  PyVTKEnum_Add(&PyvtkAttributeSmoothingFilter_SmoothingStrategyType_Type, "vtkAttributeSmoothingFilter.SmoothingStrategyType");

  o = (PyObject *)&PyvtkAttributeSmoothingFilter_SmoothingStrategyType_Type;
  if (PyDict_SetItemString(d, "SmoothingStrategyType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkAttributeSmoothingFilter_InterpolationWeightsType_Type);
  PyVTKEnum_Add(&PyvtkAttributeSmoothingFilter_InterpolationWeightsType_Type, "vtkAttributeSmoothingFilter.InterpolationWeightsType");

  o = (PyObject *)&PyvtkAttributeSmoothingFilter_InterpolationWeightsType_Type;
  if (PyDict_SetItemString(d, "InterpolationWeightsType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkAttributeSmoothingFilter::SmoothingStrategyType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ALL_POINTS", vtkAttributeSmoothingFilter::ALL_POINTS },
        { "ALL_BUT_BOUNDARY", vtkAttributeSmoothingFilter::ALL_BUT_BOUNDARY },
        { "ADJACENT_TO_BOUNDARY", vtkAttributeSmoothingFilter::ADJACENT_TO_BOUNDARY },
        { "SMOOTHING_MASK", vtkAttributeSmoothingFilter::SMOOTHING_MASK },
      };

    o = PyvtkAttributeSmoothingFilter_SmoothingStrategyType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkAttributeSmoothingFilter::InterpolationWeightsType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "AVERAGE", vtkAttributeSmoothingFilter::AVERAGE },
        { "DISTANCE", vtkAttributeSmoothingFilter::DISTANCE },
        { "DISTANCE2", vtkAttributeSmoothingFilter::DISTANCE2 },
      };

    o = PyvtkAttributeSmoothingFilter_InterpolationWeightsType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAttributeSmoothingFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAttributeSmoothingFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAttributeSmoothingFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

