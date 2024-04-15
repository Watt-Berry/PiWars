// python wrapper for vtkPointDensityFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointDensityFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointDensityFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPointDensityFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointDensityFilter_FunctionClass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPointDensityFilter.FunctionClass", // tp_name
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
PyObject *PyvtkPointDensityFilter_FunctionClass_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPointDensityFilter_FunctionClass_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPointDensityFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointDensityFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointDensityFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointDensityFilter *tempr = vtkPointDensityFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointDensityFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointDensityFilter::NewInstance());

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
PyvtkPointDensityFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointDensityFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointDensityFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

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
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointDensityFilter::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointDensityFilter_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkPointDensityFilter::SetSampleDimensions(temp0);
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
PyvtkPointDensityFilter_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointDensityFilter_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkPointDensityFilter_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}


static PyObject *
PyvtkPointDensityFilter_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkPointDensityFilter::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPointDensityFilter::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointDensityFilter_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkPointDensityFilter::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointDensityFilter_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPointDensityFilter_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkPointDensityFilter_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}


static PyObject *
PyvtkPointDensityFilter_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkPointDensityFilter::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetAdjustDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustDistance(temp0);
    }
    else
    {
      op->vtkPointDensityFilter::SetAdjustDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetAdjustDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistanceMinValue() :
      op->vtkPointDensityFilter::GetAdjustDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetAdjustDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistanceMaxValue() :
      op->vtkPointDensityFilter::GetAdjustDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetAdjustDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAdjustDistance() :
      op->vtkPointDensityFilter::GetAdjustDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetDensityEstimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityEstimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDensityEstimate(temp0);
    }
    else
    {
      op->vtkPointDensityFilter::SetDensityEstimate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetDensityEstimateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityEstimateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDensityEstimateMinValue() :
      op->vtkPointDensityFilter::GetDensityEstimateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetDensityEstimateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityEstimateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDensityEstimateMaxValue() :
      op->vtkPointDensityFilter::GetDensityEstimateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetDensityEstimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityEstimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDensityEstimate() :
      op->vtkPointDensityFilter::GetDensityEstimate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetDensityEstimateToFixedRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityEstimateToFixedRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDensityEstimateToFixedRadius();
    }
    else
    {
      op->vtkPointDensityFilter::SetDensityEstimateToFixedRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetDensityEstimateToRelativeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityEstimateToRelativeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDensityEstimateToRelativeRadius();
    }
    else
    {
      op->vtkPointDensityFilter::SetDensityEstimateToRelativeRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetDensityEstimateAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityEstimateAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDensityEstimateAsString() :
      op->vtkPointDensityFilter::GetDensityEstimateAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetDensityForm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityForm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDensityForm(temp0);
    }
    else
    {
      op->vtkPointDensityFilter::SetDensityForm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetDensityFormMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityFormMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDensityFormMinValue() :
      op->vtkPointDensityFilter::GetDensityFormMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetDensityFormMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityFormMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDensityFormMaxValue() :
      op->vtkPointDensityFilter::GetDensityFormMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetDensityForm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityForm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDensityForm() :
      op->vtkPointDensityFilter::GetDensityForm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetDensityFormToVolumeNormalized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityFormToVolumeNormalized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDensityFormToVolumeNormalized();
    }
    else
    {
      op->vtkPointDensityFilter::SetDensityFormToVolumeNormalized();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetDensityFormToNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDensityFormToNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDensityFormToNumberOfPoints();
    }
    else
    {
      op->vtkPointDensityFilter::SetDensityFormToNumberOfPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetDensityFormAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDensityFormAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDensityFormAsString() :
      op->vtkPointDensityFilter::GetDensityFormAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkPointDensityFilter::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkPointDensityFilter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkPointDensityFilter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkPointDensityFilter::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetRelativeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeRadius(temp0);
    }
    else
    {
      op->vtkPointDensityFilter::SetRelativeRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetRelativeRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeRadiusMinValue() :
      op->vtkPointDensityFilter::GetRelativeRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetRelativeRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeRadiusMaxValue() :
      op->vtkPointDensityFilter::GetRelativeRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetRelativeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeRadius() :
      op->vtkPointDensityFilter::GetRelativeRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetScalarWeighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarWeighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarWeighting(temp0);
    }
    else
    {
      op->vtkPointDensityFilter::SetScalarWeighting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetScalarWeighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarWeighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarWeighting() :
      op->vtkPointDensityFilter::GetScalarWeighting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_ScalarWeightingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarWeightingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarWeightingOn();
    }
    else
    {
      op->vtkPointDensityFilter::ScalarWeightingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_ScalarWeightingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarWeightingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarWeightingOff();
    }
    else
    {
      op->vtkPointDensityFilter::ScalarWeightingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

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
      op->vtkPointDensityFilter::SetComputeGradient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeGradient() :
      op->vtkPointDensityFilter::GetComputeGradient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_ComputeGradientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOn();
    }
    else
    {
      op->vtkPointDensityFilter::ComputeGradientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_ComputeGradientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientOff();
    }
    else
    {
      op->vtkPointDensityFilter::ComputeGradientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

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
      op->vtkPointDensityFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDensityFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDensityFilter *op = static_cast<vtkPointDensityFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkPointDensityFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointDensityFilter_Methods[] = {
  {"IsTypeOf", PyvtkPointDensityFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointDensityFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointDensityFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointDensityFilter\nC++: static vtkPointDensityFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointDensityFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointDensityFilter\nC++: vtkPointDensityFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointDensityFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointDensityFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSampleDimensions", PyvtkPointDensityFilter_SetSampleDimensions, METH_VARARGS,
   "SetSampleDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetSampleDimensions(int i, int j, int k)\nSetSampleDimensions(self, dim:[int, int, int]) -> None\nC++: void SetSampleDimensions(int dim[3])\n\nSet / get the dimensions of the sampling volume. Higher values\ngenerally produce better results but may be much slower. Note\nhowever that too high a resolution can generate excessive noise;\ntoo low and data can be excessively smoothed.\n"},
  {"GetSampleDimensions", PyvtkPointDensityFilter_GetSampleDimensions, METH_VARARGS,
   "GetSampleDimensions(self) -> (int, int, int)\nC++: virtual int *GetSampleDimensions()\n\n"},
  {"SetModelBounds", PyvtkPointDensityFilter_SetModelBounds, METH_VARARGS,
   "SetModelBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetModelBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetModelBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetModelBounds(const double _arg[6])\n\nSet / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in\nwhich the sampling is performed. If any of the (min,max) bounds\nvalues are min >= max, then the bounds will be computed\nautomatically from the input data. Otherwise, the user-specified\nbounds will be used.\n"},
  {"GetModelBounds", PyvtkPointDensityFilter_GetModelBounds, METH_VARARGS,
   "GetModelBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetModelBounds()\n\n"},
  {"SetAdjustDistance", PyvtkPointDensityFilter_SetAdjustDistance, METH_VARARGS,
   "SetAdjustDistance(self, _arg:float) -> None\nC++: virtual void SetAdjustDistance(double _arg)\n\nSet / get the relative amount to pad the model bounds if\nautomatic computation is performed. The padding is the fraction\nto scale the model bounds in each of the x-y-z directions. By\ndefault the padding is 0.10 (i.e., 10% larger in each direction).\n"},
  {"GetAdjustDistanceMinValue", PyvtkPointDensityFilter_GetAdjustDistanceMinValue, METH_VARARGS,
   "GetAdjustDistanceMinValue(self) -> float\nC++: virtual double GetAdjustDistanceMinValue()\n\n"},
  {"GetAdjustDistanceMaxValue", PyvtkPointDensityFilter_GetAdjustDistanceMaxValue, METH_VARARGS,
   "GetAdjustDistanceMaxValue(self) -> float\nC++: virtual double GetAdjustDistanceMaxValue()\n\n"},
  {"GetAdjustDistance", PyvtkPointDensityFilter_GetAdjustDistance, METH_VARARGS,
   "GetAdjustDistance(self) -> float\nC++: virtual double GetAdjustDistance()\n\n"},
  {"SetDensityEstimate", PyvtkPointDensityFilter_SetDensityEstimate, METH_VARARGS,
   "SetDensityEstimate(self, _arg:int) -> None\nC++: virtual void SetDensityEstimate(int _arg)\n\nSpecify the method to estimate point density. The density can be\ncalculated using a fixed sphere radius; or a sphere radius that\nis relative to voxel size.\n"},
  {"GetDensityEstimateMinValue", PyvtkPointDensityFilter_GetDensityEstimateMinValue, METH_VARARGS,
   "GetDensityEstimateMinValue(self) -> int\nC++: virtual int GetDensityEstimateMinValue()\n\n"},
  {"GetDensityEstimateMaxValue", PyvtkPointDensityFilter_GetDensityEstimateMaxValue, METH_VARARGS,
   "GetDensityEstimateMaxValue(self) -> int\nC++: virtual int GetDensityEstimateMaxValue()\n\n"},
  {"GetDensityEstimate", PyvtkPointDensityFilter_GetDensityEstimate, METH_VARARGS,
   "GetDensityEstimate(self) -> int\nC++: virtual int GetDensityEstimate()\n\n"},
  {"SetDensityEstimateToFixedRadius", PyvtkPointDensityFilter_SetDensityEstimateToFixedRadius, METH_VARARGS,
   "SetDensityEstimateToFixedRadius(self) -> None\nC++: void SetDensityEstimateToFixedRadius()\n\n"},
  {"SetDensityEstimateToRelativeRadius", PyvtkPointDensityFilter_SetDensityEstimateToRelativeRadius, METH_VARARGS,
   "SetDensityEstimateToRelativeRadius(self) -> None\nC++: void SetDensityEstimateToRelativeRadius()\n\n"},
  {"GetDensityEstimateAsString", PyvtkPointDensityFilter_GetDensityEstimateAsString, METH_VARARGS,
   "GetDensityEstimateAsString(self) -> str\nC++: const char *GetDensityEstimateAsString()\n\n"},
  {"SetDensityForm", PyvtkPointDensityFilter_SetDensityForm, METH_VARARGS,
   "SetDensityForm(self, _arg:int) -> None\nC++: virtual void SetDensityForm(int _arg)\n\nSpecify the form by which the density is expressed. Either the\ndensity is expressed as (number of points/local sphere volume),\nor as simply the (number of points) within the local sphere.\n"},
  {"GetDensityFormMinValue", PyvtkPointDensityFilter_GetDensityFormMinValue, METH_VARARGS,
   "GetDensityFormMinValue(self) -> int\nC++: virtual int GetDensityFormMinValue()\n\n"},
  {"GetDensityFormMaxValue", PyvtkPointDensityFilter_GetDensityFormMaxValue, METH_VARARGS,
   "GetDensityFormMaxValue(self) -> int\nC++: virtual int GetDensityFormMaxValue()\n\n"},
  {"GetDensityForm", PyvtkPointDensityFilter_GetDensityForm, METH_VARARGS,
   "GetDensityForm(self) -> int\nC++: virtual int GetDensityForm()\n\n"},
  {"SetDensityFormToVolumeNormalized", PyvtkPointDensityFilter_SetDensityFormToVolumeNormalized, METH_VARARGS,
   "SetDensityFormToVolumeNormalized(self) -> None\nC++: void SetDensityFormToVolumeNormalized()\n\n"},
  {"SetDensityFormToNumberOfPoints", PyvtkPointDensityFilter_SetDensityFormToNumberOfPoints, METH_VARARGS,
   "SetDensityFormToNumberOfPoints(self) -> None\nC++: void SetDensityFormToNumberOfPoints()\n\n"},
  {"GetDensityFormAsString", PyvtkPointDensityFilter_GetDensityFormAsString, METH_VARARGS,
   "GetDensityFormAsString(self) -> str\nC++: const char *GetDensityFormAsString()\n\n"},
  {"SetRadius", PyvtkPointDensityFilter_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet / get the radius variable defining the local sphere used to\nestimate the density function. The Radius is used when the\ndensity estimate is ^ set to a fixed radius (i.e., the radius\ndoesn't change).\n"},
  {"GetRadiusMinValue", PyvtkPointDensityFilter_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkPointDensityFilter_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkPointDensityFilter_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetRelativeRadius", PyvtkPointDensityFilter_SetRelativeRadius, METH_VARARGS,
   "SetRelativeRadius(self, _arg:float) -> None\nC++: virtual void SetRelativeRadius(double _arg)\n\nSet / get the relative radius factor defining the local sphere\nused to estimate the density function. The relative sphere radius\nis equal to the diagonal length of a voxel times the radius\nfactor. The RelativeRadius is used when the density estimate is\nset to relative radius (i.e., relative to voxel size).\n"},
  {"GetRelativeRadiusMinValue", PyvtkPointDensityFilter_GetRelativeRadiusMinValue, METH_VARARGS,
   "GetRelativeRadiusMinValue(self) -> float\nC++: virtual double GetRelativeRadiusMinValue()\n\n"},
  {"GetRelativeRadiusMaxValue", PyvtkPointDensityFilter_GetRelativeRadiusMaxValue, METH_VARARGS,
   "GetRelativeRadiusMaxValue(self) -> float\nC++: virtual double GetRelativeRadiusMaxValue()\n\n"},
  {"GetRelativeRadius", PyvtkPointDensityFilter_GetRelativeRadius, METH_VARARGS,
   "GetRelativeRadius(self) -> float\nC++: virtual double GetRelativeRadius()\n\n"},
  {"SetScalarWeighting", PyvtkPointDensityFilter_SetScalarWeighting, METH_VARARGS,
   "SetScalarWeighting(self, _arg:bool) -> None\nC++: virtual void SetScalarWeighting(bool _arg)\n\nTurn on/off the weighting of point density by a scalar array. By\ndefault scalar weighting is off.\n"},
  {"GetScalarWeighting", PyvtkPointDensityFilter_GetScalarWeighting, METH_VARARGS,
   "GetScalarWeighting(self) -> bool\nC++: virtual bool GetScalarWeighting()\n\n"},
  {"ScalarWeightingOn", PyvtkPointDensityFilter_ScalarWeightingOn, METH_VARARGS,
   "ScalarWeightingOn(self) -> None\nC++: virtual void ScalarWeightingOn()\n\n"},
  {"ScalarWeightingOff", PyvtkPointDensityFilter_ScalarWeightingOff, METH_VARARGS,
   "ScalarWeightingOff(self) -> None\nC++: virtual void ScalarWeightingOff()\n\n"},
  {"SetComputeGradient", PyvtkPointDensityFilter_SetComputeGradient, METH_VARARGS,
   "SetComputeGradient(self, _arg:bool) -> None\nC++: virtual void SetComputeGradient(bool _arg)\n\nTurn on/off the generation of the gradient vector, gradient\nmagnitude scalar, and function classification scalar. By default\nthis is off. Note that this will increase execution time and the\nsize of the output. (The names of these point data arrays are:\n\"Gradient\", \"Gradient Magnitude\", and \"Classification\".)\n"},
  {"GetComputeGradient", PyvtkPointDensityFilter_GetComputeGradient, METH_VARARGS,
   "GetComputeGradient(self) -> bool\nC++: virtual bool GetComputeGradient()\n\n"},
  {"ComputeGradientOn", PyvtkPointDensityFilter_ComputeGradientOn, METH_VARARGS,
   "ComputeGradientOn(self) -> None\nC++: virtual void ComputeGradientOn()\n\n"},
  {"ComputeGradientOff", PyvtkPointDensityFilter_ComputeGradientOff, METH_VARARGS,
   "ComputeGradientOff(self) -> None\nC++: virtual void ComputeGradientOff()\n\n"},
  {"SetLocator", PyvtkPointDensityFilter_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractPointLocator) -> None\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate near a\nspecified interpolation position.\n"},
  {"GetLocator", PyvtkPointDensityFilter_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointDensityFilter_Doc =
  "vtkPointDensityFilter - produce density field from input point cloud\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkPointDensityFilter is a filter that generates a density field on a\n"
  "volume from a point cloud. Basically the density is computed as\n"
  "number of points in a local neighborhood per unit volume; or\n"
  "optionally, the number of points in a local neighborhood surrounding\n"
  "each voxel. The local neighborhood is specified as a radius around\n"
  "each sample position (i.e., each voxel) which can be of fixed value;\n"
  "or the radius can be relative to the voxel size. The density\n"
  "computation may be further weighted by a scalar value which is simply\n"
  "multiplied by each point's presumed density of 1.0.\n\n"
  "To use this filter, specify an input of type vtkPointSet (i.e., has\n"
  "an explicit representation of points). Optionally a scalar weighting\n"
  "function can be provided (part of the input to the filter). Then\n"
  "specify how the local spherical neighborhood is to be defined, either\n"
  "by a fixed radius or a radius relative to the voxel size. Finally,\n"
  "specify how the density is specified, either as a points/volume, or\n"
  "as number of points. (The weighting scalar array will affect both of\n"
  "these results if provided and enabled.)\n\n"
  "An optional capability of the filter is to compute the gradients of\n"
  "the resulting density function (a 3-component vector), which also\n"
  "includes the gradient magnitude (single component scalar) and\n"
  "classification (regions of zero function, a scalar with single\n"
  "unsigned char value per voxel).\n\n"
  "* @warning\n"
  "* A point locator is used to speed up searches. By default a fast\n"
  "* vtkStaticPointLocator is used; however the user may specify an\n"
  "  alternative\n"
  "* locator. In some situations adaptive locators may run faster\n"
  "  depending on\n"
  "* the relative variation in point cloud density.\n"
  "*\n"
  "* @warning\n"
  "* Note that the volume calculation can be affected by the boundary.\n"
  "  The\n"
  "* local spherical neighborhood around a \"near volume boundary\" voxel\n"
  "  may\n"
  "* extend beyond the volume extent, meaning that density computation\n"
  "  may be\n"
  "* reduced. To counter this effect, the volume may be increased in\n"
  "  size\n"
  "* and/or resolution so that the point cloud fits well within the\n"
  "  volume.\n"
  "*\n"
  "* @warning\n"
  "* While this class is very similar to many other of VTK's the point\n"
  "* splatting and interpolation classes, the algorithm density\n"
  "  computation is\n"
  "* specialized to generate the density computation over a volume, does\n"
  "not\n"
  "* require (scalar weighting) data attributes to run, and does not\n"
  "  require\n"
  "* multiple inputs. As an interesting side note: using the\n"
  "* vtkPointInterpolation class with a vtkLinearKernel, a (scalar)\n"
  "  weighting\n"
  "* point attribute, a point cloud source, and an input volume produces\n"
  "the\n"
  "* same result as this filter does (assuming that the input volume is\n"
  "  the\n"
  "* same).\n"
  "*\n"
  "* @warning\n"
  "* This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "* non-sequential type (set in the CMake variable\n"
  "* VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n"
  "*\n"
  "* @sa\n"
  "* vtkCheckerboardSplatter vtkShepardMethod vtkGaussianSplatter\n"
  "* vtkPointInterpolator vtkSPHInterpolator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointDensityFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPointDensityFilter", // tp_name
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
  PyvtkPointDensityFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointDensityFilter_StaticNew()
{
  return vtkPointDensityFilter::New();
}

PyObject *PyvtkPointDensityFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointDensityFilter_Type, PyvtkPointDensityFilter_Methods,
    "vtkPointDensityFilter",
 &PyvtkPointDensityFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPointDensityFilter_FunctionClass_Type);
  PyVTKEnum_Add(&PyvtkPointDensityFilter_FunctionClass_Type, "vtkPointDensityFilter.FunctionClass");

  o = (PyObject *)&PyvtkPointDensityFilter_FunctionClass_Type;
  if (PyDict_SetItemString(d, "FunctionClass", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkPointDensityFilter::FunctionClass cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "ZERO", vtkPointDensityFilter::ZERO },
        { "NON_ZERO", vtkPointDensityFilter::NON_ZERO },
      };

    o = PyvtkPointDensityFilter_FunctionClass_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointDensityFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointDensityFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointDensityFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_DENSITY_ESTIMATE_FIXED_RADIUS", 0 },
        { "VTK_DENSITY_ESTIMATE_RELATIVE_RADIUS", 1 },
        { "VTK_DENSITY_FORM_VOLUME_NORM", 0 },
        { "VTK_DENSITY_FORM_NPTS", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

