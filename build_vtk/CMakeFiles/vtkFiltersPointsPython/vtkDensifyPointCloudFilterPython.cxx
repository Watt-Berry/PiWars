// python wrapper for vtkDensifyPointCloudFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDensifyPointCloudFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDensifyPointCloudFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkDensifyPointCloudFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDensifyPointCloudFilter_NeighborhoodType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkDensifyPointCloudFilter.NeighborhoodType", // tp_name
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
PyObject *PyvtkDensifyPointCloudFilter_NeighborhoodType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDensifyPointCloudFilter_NeighborhoodType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDensifyPointCloudFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDensifyPointCloudFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDensifyPointCloudFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDensifyPointCloudFilter *tempr = vtkDensifyPointCloudFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDensifyPointCloudFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDensifyPointCloudFilter::NewInstance());

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
PyvtkDensifyPointCloudFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDensifyPointCloudFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDensifyPointCloudFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetNeighborhoodType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodType(temp0);
    }
    else
    {
      op->vtkDensifyPointCloudFilter::SetNeighborhoodType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetNeighborhoodType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeighborhoodType() :
      op->vtkDensifyPointCloudFilter::GetNeighborhoodType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetNeighborhoodTypeToRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodTypeToRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodTypeToRadius();
    }
    else
    {
      op->vtkDensifyPointCloudFilter::SetNeighborhoodTypeToRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetNeighborhoodTypeToNClosest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodTypeToNClosest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodTypeToNClosest();
    }
    else
    {
      op->vtkDensifyPointCloudFilter::SetNeighborhoodTypeToNClosest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

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
      op->vtkDensifyPointCloudFilter::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkDensifyPointCloudFilter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkDensifyPointCloudFilter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkDensifyPointCloudFilter::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetNumberOfClosestPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfClosestPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfClosestPoints(temp0);
    }
    else
    {
      op->vtkDensifyPointCloudFilter::SetNumberOfClosestPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetNumberOfClosestPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfClosestPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfClosestPointsMinValue() :
      op->vtkDensifyPointCloudFilter::GetNumberOfClosestPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetNumberOfClosestPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfClosestPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfClosestPointsMaxValue() :
      op->vtkDensifyPointCloudFilter::GetNumberOfClosestPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetNumberOfClosestPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfClosestPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfClosestPoints() :
      op->vtkDensifyPointCloudFilter::GetNumberOfClosestPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetTargetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetDistance(temp0);
    }
    else
    {
      op->vtkDensifyPointCloudFilter::SetTargetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetTargetDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetDistanceMinValue() :
      op->vtkDensifyPointCloudFilter::GetTargetDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetTargetDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetDistanceMaxValue() :
      op->vtkDensifyPointCloudFilter::GetTargetDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetTargetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetDistance() :
      op->vtkDensifyPointCloudFilter::GetTargetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfIterations(temp0);
    }
    else
    {
      op->vtkDensifyPointCloudFilter::SetMaximumNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetMaximumNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterationsMinValue() :
      op->vtkDensifyPointCloudFilter::GetMaximumNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetMaximumNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterationsMaxValue() :
      op->vtkDensifyPointCloudFilter::GetMaximumNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterations() :
      op->vtkDensifyPointCloudFilter::GetMaximumNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfPoints(temp0);
    }
    else
    {
      op->vtkDensifyPointCloudFilter::SetMaximumNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetMaximumNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPointsMinValue() :
      op->vtkDensifyPointCloudFilter::GetMaximumNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetMaximumNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPointsMaxValue() :
      op->vtkDensifyPointCloudFilter::GetMaximumNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetMaximumNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPoints() :
      op->vtkDensifyPointCloudFilter::GetMaximumNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_SetInterpolateAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateAttributeData(temp0);
    }
    else
    {
      op->vtkDensifyPointCloudFilter::SetInterpolateAttributeData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_GetInterpolateAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolateAttributeData() :
      op->vtkDensifyPointCloudFilter::GetInterpolateAttributeData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_InterpolateAttributeDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributeDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributeDataOn();
    }
    else
    {
      op->vtkDensifyPointCloudFilter::InterpolateAttributeDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDensifyPointCloudFilter_InterpolateAttributeDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributeDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDensifyPointCloudFilter *op = static_cast<vtkDensifyPointCloudFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributeDataOff();
    }
    else
    {
      op->vtkDensifyPointCloudFilter::InterpolateAttributeDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDensifyPointCloudFilter_Methods[] = {
  {"IsTypeOf", PyvtkDensifyPointCloudFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDensifyPointCloudFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDensifyPointCloudFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDensifyPointCloudFilter\nC++: static vtkDensifyPointCloudFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDensifyPointCloudFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDensifyPointCloudFilter\nC++: vtkDensifyPointCloudFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDensifyPointCloudFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDensifyPointCloudFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNeighborhoodType", PyvtkDensifyPointCloudFilter_SetNeighborhoodType, METH_VARARGS,
   "SetNeighborhoodType(self, _arg:int) -> None\nC++: virtual void SetNeighborhoodType(int _arg)\n\nSpecify how the local point neighborhood is defined. By default\nan N closest neighborhood is used. This tends to avoid explosive\npoint creation.\n"},
  {"GetNeighborhoodType", PyvtkDensifyPointCloudFilter_GetNeighborhoodType, METH_VARARGS,
   "GetNeighborhoodType(self) -> int\nC++: virtual int GetNeighborhoodType()\n\n"},
  {"SetNeighborhoodTypeToRadius", PyvtkDensifyPointCloudFilter_SetNeighborhoodTypeToRadius, METH_VARARGS,
   "SetNeighborhoodTypeToRadius(self) -> None\nC++: void SetNeighborhoodTypeToRadius()\n\n"},
  {"SetNeighborhoodTypeToNClosest", PyvtkDensifyPointCloudFilter_SetNeighborhoodTypeToNClosest, METH_VARARGS,
   "SetNeighborhoodTypeToNClosest(self) -> None\nC++: void SetNeighborhoodTypeToNClosest()\n\n"},
  {"SetRadius", PyvtkDensifyPointCloudFilter_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nDefine a local neighborhood for each point in terms of a local\nradius. By default, the radius is 1.0. This data member is\nrelevant only if the neighborhood type is RADIUS.\n"},
  {"GetRadiusMinValue", PyvtkDensifyPointCloudFilter_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkDensifyPointCloudFilter_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkDensifyPointCloudFilter_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetNumberOfClosestPoints", PyvtkDensifyPointCloudFilter_SetNumberOfClosestPoints, METH_VARARGS,
   "SetNumberOfClosestPoints(self, _arg:int) -> None\nC++: virtual void SetNumberOfClosestPoints(int _arg)\n\nDefine a local neighborhood in terms of the N closest points. By\ndefault the number of the closest points is =6. This data member\nis relevant only if the neighborhood type is N_CLOSEST.\n"},
  {"GetNumberOfClosestPointsMinValue", PyvtkDensifyPointCloudFilter_GetNumberOfClosestPointsMinValue, METH_VARARGS,
   "GetNumberOfClosestPointsMinValue(self) -> int\nC++: virtual int GetNumberOfClosestPointsMinValue()\n\n"},
  {"GetNumberOfClosestPointsMaxValue", PyvtkDensifyPointCloudFilter_GetNumberOfClosestPointsMaxValue, METH_VARARGS,
   "GetNumberOfClosestPointsMaxValue(self) -> int\nC++: virtual int GetNumberOfClosestPointsMaxValue()\n\n"},
  {"GetNumberOfClosestPoints", PyvtkDensifyPointCloudFilter_GetNumberOfClosestPoints, METH_VARARGS,
   "GetNumberOfClosestPoints(self) -> int\nC++: virtual int GetNumberOfClosestPoints()\n\n"},
  {"SetTargetDistance", PyvtkDensifyPointCloudFilter_SetTargetDistance, METH_VARARGS,
   "SetTargetDistance(self, _arg:float) -> None\nC++: virtual void SetTargetDistance(double _arg)\n\nSet / get the target point distance. Points will be created in an\niterative fashion until all points in their local neighborhood\nare the target distance apart or less. Note that the process may\nterminate early due to the limit on the maximum number of\niterations. By default the target distance is set to 0.5. Note\nthat the TargetDistance should be less than the Radius or nothing\nwill change on output.\n"},
  {"GetTargetDistanceMinValue", PyvtkDensifyPointCloudFilter_GetTargetDistanceMinValue, METH_VARARGS,
   "GetTargetDistanceMinValue(self) -> float\nC++: virtual double GetTargetDistanceMinValue()\n\n"},
  {"GetTargetDistanceMaxValue", PyvtkDensifyPointCloudFilter_GetTargetDistanceMaxValue, METH_VARARGS,
   "GetTargetDistanceMaxValue(self) -> float\nC++: virtual double GetTargetDistanceMaxValue()\n\n"},
  {"GetTargetDistance", PyvtkDensifyPointCloudFilter_GetTargetDistance, METH_VARARGS,
   "GetTargetDistance(self) -> float\nC++: virtual double GetTargetDistance()\n\n"},
  {"SetMaximumNumberOfIterations", PyvtkDensifyPointCloudFilter_SetMaximumNumberOfIterations, METH_VARARGS,
   "SetMaximumNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfIterations(int _arg)\n\nThe maximum number of iterations to run. By default the maximum\nis one.\n"},
  {"GetMaximumNumberOfIterationsMinValue", PyvtkDensifyPointCloudFilter_GetMaximumNumberOfIterationsMinValue, METH_VARARGS,
   "GetMaximumNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetMaximumNumberOfIterationsMinValue()\n\n"},
  {"GetMaximumNumberOfIterationsMaxValue", PyvtkDensifyPointCloudFilter_GetMaximumNumberOfIterationsMaxValue, METH_VARARGS,
   "GetMaximumNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetMaximumNumberOfIterationsMaxValue()\n\n"},
  {"GetMaximumNumberOfIterations", PyvtkDensifyPointCloudFilter_GetMaximumNumberOfIterations, METH_VARARGS,
   "GetMaximumNumberOfIterations(self) -> int\nC++: virtual int GetMaximumNumberOfIterations()\n\n"},
  {"SetMaximumNumberOfPoints", PyvtkDensifyPointCloudFilter_SetMaximumNumberOfPoints, METH_VARARGS,
   "SetMaximumNumberOfPoints(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfPoints(vtkIdType _arg)\n\nSet a limit on the maximum number of points that can be created.\nThis data member serves as a crude barrier to explosive point\ncreation; it does not guarantee that precisely these many points\nwill be created. Once this limit is hit, it may result in\npremature termination of the algorithm. Consider it a pressure\nrelief valve.\n"},
  {"GetMaximumNumberOfPointsMinValue", PyvtkDensifyPointCloudFilter_GetMaximumNumberOfPointsMinValue, METH_VARARGS,
   "GetMaximumNumberOfPointsMinValue(self) -> int\nC++: virtual vtkIdType GetMaximumNumberOfPointsMinValue()\n\n"},
  {"GetMaximumNumberOfPointsMaxValue", PyvtkDensifyPointCloudFilter_GetMaximumNumberOfPointsMaxValue, METH_VARARGS,
   "GetMaximumNumberOfPointsMaxValue(self) -> int\nC++: virtual vtkIdType GetMaximumNumberOfPointsMaxValue()\n\n"},
  {"GetMaximumNumberOfPoints", PyvtkDensifyPointCloudFilter_GetMaximumNumberOfPoints, METH_VARARGS,
   "GetMaximumNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetMaximumNumberOfPoints()\n\n"},
  {"SetInterpolateAttributeData", PyvtkDensifyPointCloudFilter_SetInterpolateAttributeData, METH_VARARGS,
   "SetInterpolateAttributeData(self, _arg:bool) -> None\nC++: virtual void SetInterpolateAttributeData(bool _arg)\n\nTurn on/off the interpolation of attribute data from the input\npoint cloud to new, added points.\n"},
  {"GetInterpolateAttributeData", PyvtkDensifyPointCloudFilter_GetInterpolateAttributeData, METH_VARARGS,
   "GetInterpolateAttributeData(self) -> bool\nC++: virtual bool GetInterpolateAttributeData()\n\n"},
  {"InterpolateAttributeDataOn", PyvtkDensifyPointCloudFilter_InterpolateAttributeDataOn, METH_VARARGS,
   "InterpolateAttributeDataOn(self) -> None\nC++: virtual void InterpolateAttributeDataOn()\n\n"},
  {"InterpolateAttributeDataOff", PyvtkDensifyPointCloudFilter_InterpolateAttributeDataOff, METH_VARARGS,
   "InterpolateAttributeDataOff(self) -> None\nC++: virtual void InterpolateAttributeDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDensifyPointCloudFilter_Doc =
  "vtkDensifyPointCloudFilter - add points to a point cloud to make it\ndenser\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDensifyPointCloudFilter adds new points to an input point cloud.\n"
  "The new points are created in such a way that all points in any local\n"
  "neighborhood are within a target distance of one another. Optionally,\n"
  "attribute data can be interpolated from the input point cloud as\n"
  "well.\n\n"
  "A high-level overview of the algorithm is as follows. For each input\n"
  "point, the distance to all points in its neighborhood is computed. If\n"
  "any of its neighbors is further than the target distance, the edge\n"
  "connecting the point and its neighbor is bisected and a new point is\n"
  "inserted at the bisection point (optionally the attribute data is\n"
  "interpolated as well). A single pass is completed once all the input\n"
  "points are visited. Then the process repeats to the limit of the\n"
  "maximum number of iterations.\n\n"
  "@warning\n"
  "This class can generate a lot of points very quickly. The maximum\n"
  "number of iterations is by default set to =1.0 for this reason.\n"
  "Increase the number of iterations very carefully. Also the\n"
  "MaximumNumberOfPoints data member can be set to limit the explosion\n"
  "of points. It is also recommended that a N closest neighborhood is\n"
  "used.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkVoxelGridFilter vtkEuclideanClusterExtraction\n"
  "vtkBoundedPointSource\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDensifyPointCloudFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkDensifyPointCloudFilter", // tp_name
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
  PyvtkDensifyPointCloudFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDensifyPointCloudFilter_StaticNew()
{
  return vtkDensifyPointCloudFilter::New();
}

PyObject *PyvtkDensifyPointCloudFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDensifyPointCloudFilter_Type, PyvtkDensifyPointCloudFilter_Methods,
    "vtkDensifyPointCloudFilter",
 &PyvtkDensifyPointCloudFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDensifyPointCloudFilter_NeighborhoodType_Type);
  PyVTKEnum_Add(&PyvtkDensifyPointCloudFilter_NeighborhoodType_Type, "vtkDensifyPointCloudFilter.NeighborhoodType");

  o = (PyObject *)&PyvtkDensifyPointCloudFilter_NeighborhoodType_Type;
  if (PyDict_SetItemString(d, "NeighborhoodType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "RADIUS", vtkDensifyPointCloudFilter::RADIUS },
        { "N_CLOSEST", vtkDensifyPointCloudFilter::N_CLOSEST },
      };

    o = PyvtkDensifyPointCloudFilter_NeighborhoodType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDensifyPointCloudFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDensifyPointCloudFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDensifyPointCloudFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

