// python wrapper for vtkUnstructuredGridVolumeRayCastMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridVolumeRayCastMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkUnstructuredGridVolumeRayCastMapper_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridVolumeMapper_ClassNew
#endif

static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridVolumeRayCastMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridVolumeRayCastMapper *tempr = vtkUnstructuredGridVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridVolumeRayCastMapper::NewInstance());

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
PyvtkUnstructuredGridVolumeRayCastMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUnstructuredGridVolumeRayCastMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageSampleDistance(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMinValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistanceMaxValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumImageSampleDistance(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetMinimumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMinValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistanceMaxValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMinimumImageSampleDistance() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetMinimumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumImageSampleDistance(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetMaximumImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMinValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistanceMaxValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumImageSampleDistance() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetMaximumImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdjustSampleDistances(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetAutoAdjustSampleDistances(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMinValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistancesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistancesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistancesMaxValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistancesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistances(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustSampleDistances");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustSampleDistances() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetAutoAdjustSampleDistances());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_AutoAdjustSampleDistancesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOn();
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::AutoAdjustSampleDistancesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_AutoAdjustSampleDistancesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustSampleDistancesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustSampleDistancesOff();
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::AutoAdjustSampleDistancesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfThreads(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntermixIntersectingGeometry(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetIntermixIntersectingGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometryMinValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometryMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometryMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometryMaxValue() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometryMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermixIntersectingGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntermixIntersectingGeometry() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetIntermixIntersectingGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_IntermixIntersectingGeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntermixIntersectingGeometryOn();
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::IntermixIntersectingGeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_IntermixIntersectingGeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntermixIntersectingGeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IntermixIntersectingGeometryOff();
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::IntermixIntersectingGeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetRayCastFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayCastFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkUnstructuredGridVolumeRayCastFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayCastFunction"))
  {
    if (ap.IsBound())
    {
      op->SetRayCastFunction(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetRayCastFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetRayCastFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayCastFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRayCastFunction *tempr = (ap.IsBound() ?
      op->GetRayCastFunction() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetRayCastFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_SetRayIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRayIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkUnstructuredGridVolumeRayIntegrator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGridVolumeRayIntegrator"))
  {
    if (ap.IsBound())
    {
      op->SetRayIntegrator(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::SetRayIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetRayIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRayIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridVolumeRayIntegrator *tempr = (ap.IsBound() ?
      op->GetRayIntegrator() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetRayIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageInUseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageInUseSize() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetImageInUseSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageOrigin() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetImageOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageViewportSize() :
      op->vtkUnstructuredGridVolumeRayCastMapper::GetImageViewportSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridVolumeRayCastMapper_CastRays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CastRays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridVolumeRayCastMapper *op = static_cast<vtkUnstructuredGridVolumeRayCastMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->CastRays(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGridVolumeRayCastMapper::CastRays(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridVolumeRayCastMapper_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridVolumeRayCastMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridVolumeRayCastMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridVolumeRayCastMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkUnstructuredGridVolumeRayCastMapper\nC++: static vtkUnstructuredGridVolumeRayCastMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridVolumeRayCastMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUnstructuredGridVolumeRayCastMapper\nC++: vtkUnstructuredGridVolumeRayCastMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUnstructuredGridVolumeRayCastMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUnstructuredGridVolumeRayCastMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_SetImageSampleDistance, METH_VARARGS,
   "SetImageSampleDistance(self, _arg:float) -> None\nC++: virtual void SetImageSampleDistance(float _arg)\n\nSampling distance in the XY image dimensions. Default value of 1\nmeaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast\nper pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2)\npixels.\n"},
  {"GetImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistanceMinValue, METH_VARARGS,
   "GetImageSampleDistanceMinValue(self) -> float\nC++: virtual float GetImageSampleDistanceMinValue()\n\n"},
  {"GetImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistanceMaxValue, METH_VARARGS,
   "GetImageSampleDistanceMaxValue(self) -> float\nC++: virtual float GetImageSampleDistanceMaxValue()\n\n"},
  {"GetImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageSampleDistance, METH_VARARGS,
   "GetImageSampleDistance(self) -> float\nC++: virtual float GetImageSampleDistance()\n\n"},
  {"SetMinimumImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_SetMinimumImageSampleDistance, METH_VARARGS,
   "SetMinimumImageSampleDistance(self, _arg:float) -> None\nC++: virtual void SetMinimumImageSampleDistance(float _arg)\n\nThis is the minimum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"GetMinimumImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistanceMinValue, METH_VARARGS,
   "GetMinimumImageSampleDistanceMinValue(self) -> float\nC++: virtual float GetMinimumImageSampleDistanceMinValue()\n\n"},
  {"GetMinimumImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistanceMaxValue, METH_VARARGS,
   "GetMinimumImageSampleDistanceMaxValue(self) -> float\nC++: virtual float GetMinimumImageSampleDistanceMaxValue()\n\n"},
  {"GetMinimumImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_GetMinimumImageSampleDistance, METH_VARARGS,
   "GetMinimumImageSampleDistance(self) -> float\nC++: virtual float GetMinimumImageSampleDistance()\n\n"},
  {"SetMaximumImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_SetMaximumImageSampleDistance, METH_VARARGS,
   "SetMaximumImageSampleDistance(self, _arg:float) -> None\nC++: virtual void SetMaximumImageSampleDistance(float _arg)\n\nThis is the maximum image sample distance allow when the image\nsample distance is being automatically adjusted\n"},
  {"GetMaximumImageSampleDistanceMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistanceMinValue, METH_VARARGS,
   "GetMaximumImageSampleDistanceMinValue(self) -> float\nC++: virtual float GetMaximumImageSampleDistanceMinValue()\n\n"},
  {"GetMaximumImageSampleDistanceMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistanceMaxValue, METH_VARARGS,
   "GetMaximumImageSampleDistanceMaxValue(self) -> float\nC++: virtual float GetMaximumImageSampleDistanceMaxValue()\n\n"},
  {"GetMaximumImageSampleDistance", PyvtkUnstructuredGridVolumeRayCastMapper_GetMaximumImageSampleDistance, METH_VARARGS,
   "GetMaximumImageSampleDistance(self) -> float\nC++: virtual float GetMaximumImageSampleDistance()\n\n"},
  {"SetAutoAdjustSampleDistances", PyvtkUnstructuredGridVolumeRayCastMapper_SetAutoAdjustSampleDistances, METH_VARARGS,
   "SetAutoAdjustSampleDistances(self, _arg:int) -> None\nC++: virtual void SetAutoAdjustSampleDistances(vtkTypeBool _arg)\n\nIf AutoAdjustSampleDistances is on, the ImageSampleDistance will\nbe varied to achieve the allocated render time of this prop\n(controlled by the desired update rate and any culling in use).\n"},
  {"GetAutoAdjustSampleDistancesMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistancesMinValue, METH_VARARGS,
   "GetAutoAdjustSampleDistancesMinValue(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMinValue()\n\n"},
  {"GetAutoAdjustSampleDistancesMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistancesMaxValue, METH_VARARGS,
   "GetAutoAdjustSampleDistancesMaxValue(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistancesMaxValue()\n\n"},
  {"GetAutoAdjustSampleDistances", PyvtkUnstructuredGridVolumeRayCastMapper_GetAutoAdjustSampleDistances, METH_VARARGS,
   "GetAutoAdjustSampleDistances(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustSampleDistances()\n\n"},
  {"AutoAdjustSampleDistancesOn", PyvtkUnstructuredGridVolumeRayCastMapper_AutoAdjustSampleDistancesOn, METH_VARARGS,
   "AutoAdjustSampleDistancesOn(self) -> None\nC++: virtual void AutoAdjustSampleDistancesOn()\n\n"},
  {"AutoAdjustSampleDistancesOff", PyvtkUnstructuredGridVolumeRayCastMapper_AutoAdjustSampleDistancesOff, METH_VARARGS,
   "AutoAdjustSampleDistancesOff(self) -> None\nC++: virtual void AutoAdjustSampleDistancesOff()\n\n"},
  {"SetNumberOfThreads", PyvtkUnstructuredGridVolumeRayCastMapper_SetNumberOfThreads, METH_VARARGS,
   "SetNumberOfThreads(self, _arg:int) -> None\nC++: virtual void SetNumberOfThreads(int _arg)\n\nSet/Get the number of threads to use. This by default is equal to\nthe number of available processors detected.\n"},
  {"GetNumberOfThreads", PyvtkUnstructuredGridVolumeRayCastMapper_GetNumberOfThreads, METH_VARARGS,
   "GetNumberOfThreads(self) -> int\nC++: virtual int GetNumberOfThreads()\n\n"},
  {"SetIntermixIntersectingGeometry", PyvtkUnstructuredGridVolumeRayCastMapper_SetIntermixIntersectingGeometry, METH_VARARGS,
   "SetIntermixIntersectingGeometry(self, _arg:int) -> None\nC++: virtual void SetIntermixIntersectingGeometry(\n    vtkTypeBool _arg)\n\nIf IntermixIntersectingGeometry is turned on, the zbuffer will be\ncaptured and used to limit the traversal of the rays.\n"},
  {"GetIntermixIntersectingGeometryMinValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometryMinValue, METH_VARARGS,
   "GetIntermixIntersectingGeometryMinValue(self) -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometryMinValue()\n\n"},
  {"GetIntermixIntersectingGeometryMaxValue", PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometryMaxValue, METH_VARARGS,
   "GetIntermixIntersectingGeometryMaxValue(self) -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometryMaxValue()\n\n"},
  {"GetIntermixIntersectingGeometry", PyvtkUnstructuredGridVolumeRayCastMapper_GetIntermixIntersectingGeometry, METH_VARARGS,
   "GetIntermixIntersectingGeometry(self) -> int\nC++: virtual vtkTypeBool GetIntermixIntersectingGeometry()\n\n"},
  {"IntermixIntersectingGeometryOn", PyvtkUnstructuredGridVolumeRayCastMapper_IntermixIntersectingGeometryOn, METH_VARARGS,
   "IntermixIntersectingGeometryOn(self) -> None\nC++: virtual void IntermixIntersectingGeometryOn()\n\n"},
  {"IntermixIntersectingGeometryOff", PyvtkUnstructuredGridVolumeRayCastMapper_IntermixIntersectingGeometryOff, METH_VARARGS,
   "IntermixIntersectingGeometryOff(self) -> None\nC++: virtual void IntermixIntersectingGeometryOff()\n\n"},
  {"SetRayCastFunction", PyvtkUnstructuredGridVolumeRayCastMapper_SetRayCastFunction, METH_VARARGS,
   "SetRayCastFunction(self,\n    f:vtkUnstructuredGridVolumeRayCastFunction) -> None\nC++: virtual void SetRayCastFunction(\n    vtkUnstructuredGridVolumeRayCastFunction *f)\n\nSet/Get the helper class for casting rays.\n"},
  {"GetRayCastFunction", PyvtkUnstructuredGridVolumeRayCastMapper_GetRayCastFunction, METH_VARARGS,
   "GetRayCastFunction(self)\n    -> vtkUnstructuredGridVolumeRayCastFunction\nC++: virtual vtkUnstructuredGridVolumeRayCastFunction *GetRayCastFunction(\n    )\n\n"},
  {"SetRayIntegrator", PyvtkUnstructuredGridVolumeRayCastMapper_SetRayIntegrator, METH_VARARGS,
   "SetRayIntegrator(self, ri:vtkUnstructuredGridVolumeRayIntegrator)\n    -> None\nC++: virtual void SetRayIntegrator(\n    vtkUnstructuredGridVolumeRayIntegrator *ri)\n\nSet/Get the helper class for integrating rays.  If set to NULL, a\ndefault integrator will be assigned.\n"},
  {"GetRayIntegrator", PyvtkUnstructuredGridVolumeRayCastMapper_GetRayIntegrator, METH_VARARGS,
   "GetRayIntegrator(self) -> vtkUnstructuredGridVolumeRayIntegrator\nC++: virtual vtkUnstructuredGridVolumeRayIntegrator *GetRayIntegrator(\n    )\n\n"},
  {"Render", PyvtkUnstructuredGridVolumeRayCastMapper_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:vtkVolume) -> None\nC++: void Render(vtkRenderer *, vtkVolume *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nInitialize rendering for this volume.\n"},
  {"ReleaseGraphicsResources", PyvtkUnstructuredGridVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {"GetImageInUseSize", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageInUseSize, METH_VARARGS,
   "GetImageInUseSize(self) -> (int, int)\nC++: virtual int *GetImageInUseSize()\n\n"},
  {"GetImageOrigin", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageOrigin, METH_VARARGS,
   "GetImageOrigin(self) -> (int, int)\nC++: virtual int *GetImageOrigin()\n\n"},
  {"GetImageViewportSize", PyvtkUnstructuredGridVolumeRayCastMapper_GetImageViewportSize, METH_VARARGS,
   "GetImageViewportSize(self) -> (int, int)\nC++: virtual int *GetImageViewportSize()\n\n"},
  {"CastRays", PyvtkUnstructuredGridVolumeRayCastMapper_CastRays, METH_VARARGS,
   "CastRays(self, threadID:int, threadCount:int) -> None\nC++: void CastRays(int threadID, int threadCount)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUnstructuredGridVolumeRayCastMapper_Doc =
  "vtkUnstructuredGridVolumeRayCastMapper - A software mapper for\nunstructured volumes\n\n"
  "Superclass: vtkUnstructuredGridVolumeMapper\n\n"
  "This is a software ray caster for rendering volumes in\n"
  "vtkUnstructuredGrid.\n\n"
  "@sa\n"
  "vtkVolumeMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUnstructuredGridVolumeRayCastMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkUnstructuredGridVolumeRayCastMapper", // tp_name
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
  PyvtkUnstructuredGridVolumeRayCastMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGridVolumeRayCastMapper_StaticNew()
{
  return vtkUnstructuredGridVolumeRayCastMapper::New();
}

PyObject *PyvtkUnstructuredGridVolumeRayCastMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUnstructuredGridVolumeRayCastMapper_Type, PyvtkUnstructuredGridVolumeRayCastMapper_Methods,
    "vtkUnstructuredGridVolumeRayCastMapper",
 &PyvtkUnstructuredGridVolumeRayCastMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridVolumeMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridVolumeRayCastMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridVolumeRayCastMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridVolumeRayCastMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

