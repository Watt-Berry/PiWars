// python wrapper for vtkImageResliceMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageResliceMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageResliceMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkImageResliceMapper_ClassNew(); }


static PyObject *
PyvtkImageResliceMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageResliceMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResliceMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageResliceMapper *tempr = vtkImageResliceMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageResliceMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResliceMapper::NewInstance());

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
PyvtkImageResliceMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageResliceMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageResliceMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSlicePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetSlicePlane(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetSlicePlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetJumpToNearestSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJumpToNearestSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJumpToNearestSlice(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetJumpToNearestSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_JumpToNearestSliceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpToNearestSliceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JumpToNearestSliceOn();
    }
    else
    {
      op->vtkImageResliceMapper::JumpToNearestSliceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_JumpToNearestSliceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "JumpToNearestSliceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->JumpToNearestSliceOff();
    }
    else
    {
      op->vtkImageResliceMapper::JumpToNearestSliceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetJumpToNearestSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetJumpToNearestSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetJumpToNearestSlice() :
      op->vtkImageResliceMapper::GetJumpToNearestSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSlabThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabThickness(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetSlabThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSlabThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSlabThickness() :
      op->vtkImageResliceMapper::GetSlabThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSlabType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabType(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetSlabType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSlabTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabTypeMinValue() :
      op->vtkImageResliceMapper::GetSlabTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSlabTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabTypeMaxValue() :
      op->vtkImageResliceMapper::GetSlabTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSlabType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabType() :
      op->vtkImageResliceMapper::GetSlabType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSlabTypeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabTypeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSlabTypeToMin();
    }
    else
    {
      op->vtkImageResliceMapper::SetSlabTypeToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSlabTypeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabTypeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSlabTypeToMax();
    }
    else
    {
      op->vtkImageResliceMapper::SetSlabTypeToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSlabTypeToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabTypeToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSlabTypeToMean();
    }
    else
    {
      op->vtkImageResliceMapper::SetSlabTypeToMean();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSlabTypeToSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabTypeToSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSlabTypeToSum();
    }
    else
    {
      op->vtkImageResliceMapper::SetSlabTypeToSum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSlabTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSlabTypeAsString() :
      op->vtkImageResliceMapper::GetSlabTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSlabSampleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabSampleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabSampleFactor(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetSlabSampleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSlabSampleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabSampleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabSampleFactorMinValue() :
      op->vtkImageResliceMapper::GetSlabSampleFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSlabSampleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabSampleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabSampleFactorMaxValue() :
      op->vtkImageResliceMapper::GetSlabSampleFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSlabSampleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabSampleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSlabSampleFactor() :
      op->vtkImageResliceMapper::GetSlabSampleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetImageSampleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageSampleFactor(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetImageSampleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetImageSampleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageSampleFactorMinValue() :
      op->vtkImageResliceMapper::GetImageSampleFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetImageSampleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageSampleFactorMaxValue() :
      op->vtkImageResliceMapper::GetImageSampleFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetImageSampleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageSampleFactor() :
      op->vtkImageResliceMapper::GetImageSampleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetAutoAdjustImageQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustImageQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdjustImageQuality(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetAutoAdjustImageQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_AutoAdjustImageQualityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustImageQualityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustImageQualityOn();
    }
    else
    {
      op->vtkImageResliceMapper::AutoAdjustImageQualityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_AutoAdjustImageQualityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustImageQualityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustImageQualityOff();
    }
    else
    {
      op->vtkImageResliceMapper::AutoAdjustImageQualityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetAutoAdjustImageQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustImageQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoAdjustImageQuality() :
      op->vtkImageResliceMapper::GetAutoAdjustImageQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetResampleToScreenPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResampleToScreenPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResampleToScreenPixels(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetResampleToScreenPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_ResampleToScreenPixelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResampleToScreenPixelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResampleToScreenPixelsOn();
    }
    else
    {
      op->vtkImageResliceMapper::ResampleToScreenPixelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_ResampleToScreenPixelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResampleToScreenPixelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResampleToScreenPixelsOff();
    }
    else
    {
      op->vtkImageResliceMapper::ResampleToScreenPixelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetResampleToScreenPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResampleToScreenPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResampleToScreenPixels() :
      op->vtkImageResliceMapper::GetResampleToScreenPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetSeparateWindowLevelOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeparateWindowLevelOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeparateWindowLevelOperation(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetSeparateWindowLevelOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SeparateWindowLevelOperationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeparateWindowLevelOperationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SeparateWindowLevelOperationOn();
    }
    else
    {
      op->vtkImageResliceMapper::SeparateWindowLevelOperationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SeparateWindowLevelOperationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SeparateWindowLevelOperationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SeparateWindowLevelOperationOff();
    }
    else
    {
      op->vtkImageResliceMapper::SeparateWindowLevelOperationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetSeparateWindowLevelOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeparateWindowLevelOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSeparateWindowLevelOperation() :
      op->vtkImageResliceMapper::GetSeparateWindowLevelOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  vtkAbstractImageInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractImageInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolator(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::SetInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractImageInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkImageResliceMapper::GetInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkImageSlice *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkImageSlice"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkImageResliceMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

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
      op->vtkImageResliceMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageResliceMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageResliceMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageResliceMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::GetBounds(temp0);
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
PyvtkImageResliceMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageResliceMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageResliceMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkImageResliceMapper_GetIndexBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceMapper *op = static_cast<vtkImageResliceMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetIndexBounds(temp0);
    }
    else
    {
      op->vtkImageResliceMapper::GetIndexBounds(temp0);
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

static PyMethodDef PyvtkImageResliceMapper_Methods[] = {
  {"IsTypeOf", PyvtkImageResliceMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageResliceMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageResliceMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageResliceMapper\nC++: static vtkImageResliceMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageResliceMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageResliceMapper\nC++: vtkImageResliceMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageResliceMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageResliceMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSlicePlane", PyvtkImageResliceMapper_SetSlicePlane, METH_VARARGS,
   "SetSlicePlane(self, plane:vtkPlane) -> None\nC++: virtual void SetSlicePlane(vtkPlane *plane)\n\nSet the slice that will be used to cut through the image. This\nslice should be in world coordinates, rather than data\ncoordinates.  Use SliceFacesCamera and SliceAtFocalPoint if you\nwant the slice to automatically follow the camera.\n"},
  {"SetJumpToNearestSlice", PyvtkImageResliceMapper_SetJumpToNearestSlice, METH_VARARGS,
   "SetJumpToNearestSlice(self, _arg:int) -> None\nC++: virtual void SetJumpToNearestSlice(vtkTypeBool _arg)\n\nWhen using SliceAtFocalPoint, this causes the slicing to occur at\nthe closest slice to the focal point, instead of the default\nbehavior where a new slice is interpolated between the original\nslices.  This flag is ignored if the slicing is oblique to the\noriginal slices.\n"},
  {"JumpToNearestSliceOn", PyvtkImageResliceMapper_JumpToNearestSliceOn, METH_VARARGS,
   "JumpToNearestSliceOn(self) -> None\nC++: virtual void JumpToNearestSliceOn()\n\n"},
  {"JumpToNearestSliceOff", PyvtkImageResliceMapper_JumpToNearestSliceOff, METH_VARARGS,
   "JumpToNearestSliceOff(self) -> None\nC++: virtual void JumpToNearestSliceOff()\n\n"},
  {"GetJumpToNearestSlice", PyvtkImageResliceMapper_GetJumpToNearestSlice, METH_VARARGS,
   "GetJumpToNearestSlice(self) -> int\nC++: virtual vtkTypeBool GetJumpToNearestSlice()\n\n"},
  {"SetSlabThickness", PyvtkImageResliceMapper_SetSlabThickness, METH_VARARGS,
   "SetSlabThickness(self, _arg:float) -> None\nC++: virtual void SetSlabThickness(double _arg)\n\nThe slab thickness, for thick slicing (default: zero)\n"},
  {"GetSlabThickness", PyvtkImageResliceMapper_GetSlabThickness, METH_VARARGS,
   "GetSlabThickness(self) -> float\nC++: virtual double GetSlabThickness()\n\n"},
  {"SetSlabType", PyvtkImageResliceMapper_SetSlabType, METH_VARARGS,
   "SetSlabType(self, _arg:int) -> None\nC++: virtual void SetSlabType(int _arg)\n\nThe slab type, for thick slicing (default: Mean). The resulting\nview is a parallel projection through the volume.  This method\ncan be used to generate a facsimile of a digitally-reconstructed\nradiograph or a minimum-intensity projection as long as\nperspective geometry is not required.  Note that the Sum mode\nprovides an output with units of intensity times distance, while\nall other modes provide an output with units of intensity.\n"},
  {"GetSlabTypeMinValue", PyvtkImageResliceMapper_GetSlabTypeMinValue, METH_VARARGS,
   "GetSlabTypeMinValue(self) -> int\nC++: virtual int GetSlabTypeMinValue()\n\n"},
  {"GetSlabTypeMaxValue", PyvtkImageResliceMapper_GetSlabTypeMaxValue, METH_VARARGS,
   "GetSlabTypeMaxValue(self) -> int\nC++: virtual int GetSlabTypeMaxValue()\n\n"},
  {"GetSlabType", PyvtkImageResliceMapper_GetSlabType, METH_VARARGS,
   "GetSlabType(self) -> int\nC++: virtual int GetSlabType()\n\n"},
  {"SetSlabTypeToMin", PyvtkImageResliceMapper_SetSlabTypeToMin, METH_VARARGS,
   "SetSlabTypeToMin(self) -> None\nC++: void SetSlabTypeToMin()\n\n"},
  {"SetSlabTypeToMax", PyvtkImageResliceMapper_SetSlabTypeToMax, METH_VARARGS,
   "SetSlabTypeToMax(self) -> None\nC++: void SetSlabTypeToMax()\n\n"},
  {"SetSlabTypeToMean", PyvtkImageResliceMapper_SetSlabTypeToMean, METH_VARARGS,
   "SetSlabTypeToMean(self) -> None\nC++: void SetSlabTypeToMean()\n\n"},
  {"SetSlabTypeToSum", PyvtkImageResliceMapper_SetSlabTypeToSum, METH_VARARGS,
   "SetSlabTypeToSum(self) -> None\nC++: void SetSlabTypeToSum()\n\n"},
  {"GetSlabTypeAsString", PyvtkImageResliceMapper_GetSlabTypeAsString, METH_VARARGS,
   "GetSlabTypeAsString(self) -> str\nC++: virtual const char *GetSlabTypeAsString()\n\n"},
  {"SetSlabSampleFactor", PyvtkImageResliceMapper_SetSlabSampleFactor, METH_VARARGS,
   "SetSlabSampleFactor(self, _arg:int) -> None\nC++: virtual void SetSlabSampleFactor(int _arg)\n\nSet the number of slab samples to use as a factor of the number\nof input slices within the slab thickness.  The default value is\n2, but 1 will increase speed with very little loss of quality.\n"},
  {"GetSlabSampleFactorMinValue", PyvtkImageResliceMapper_GetSlabSampleFactorMinValue, METH_VARARGS,
   "GetSlabSampleFactorMinValue(self) -> int\nC++: virtual int GetSlabSampleFactorMinValue()\n\n"},
  {"GetSlabSampleFactorMaxValue", PyvtkImageResliceMapper_GetSlabSampleFactorMaxValue, METH_VARARGS,
   "GetSlabSampleFactorMaxValue(self) -> int\nC++: virtual int GetSlabSampleFactorMaxValue()\n\n"},
  {"GetSlabSampleFactor", PyvtkImageResliceMapper_GetSlabSampleFactor, METH_VARARGS,
   "GetSlabSampleFactor(self) -> int\nC++: virtual int GetSlabSampleFactor()\n\n"},
  {"SetImageSampleFactor", PyvtkImageResliceMapper_SetImageSampleFactor, METH_VARARGS,
   "SetImageSampleFactor(self, _arg:int) -> None\nC++: virtual void SetImageSampleFactor(int _arg)\n\nSet the reslice sample frequency as in relation to the input\nimage sample frequency.  The default value is 1, but higher\nvalues can be used to improve the results.  This is cheaper than\nturning on ResampleToScreenPixels.\n"},
  {"GetImageSampleFactorMinValue", PyvtkImageResliceMapper_GetImageSampleFactorMinValue, METH_VARARGS,
   "GetImageSampleFactorMinValue(self) -> int\nC++: virtual int GetImageSampleFactorMinValue()\n\n"},
  {"GetImageSampleFactorMaxValue", PyvtkImageResliceMapper_GetImageSampleFactorMaxValue, METH_VARARGS,
   "GetImageSampleFactorMaxValue(self) -> int\nC++: virtual int GetImageSampleFactorMaxValue()\n\n"},
  {"GetImageSampleFactor", PyvtkImageResliceMapper_GetImageSampleFactor, METH_VARARGS,
   "GetImageSampleFactor(self) -> int\nC++: virtual int GetImageSampleFactor()\n\n"},
  {"SetAutoAdjustImageQuality", PyvtkImageResliceMapper_SetAutoAdjustImageQuality, METH_VARARGS,
   "SetAutoAdjustImageQuality(self, _arg:int) -> None\nC++: virtual void SetAutoAdjustImageQuality(vtkTypeBool _arg)\n\nAutomatically reduce the rendering quality for greater speed when\ndoing an interactive render.  This is on by default.\n"},
  {"AutoAdjustImageQualityOn", PyvtkImageResliceMapper_AutoAdjustImageQualityOn, METH_VARARGS,
   "AutoAdjustImageQualityOn(self) -> None\nC++: virtual void AutoAdjustImageQualityOn()\n\n"},
  {"AutoAdjustImageQualityOff", PyvtkImageResliceMapper_AutoAdjustImageQualityOff, METH_VARARGS,
   "AutoAdjustImageQualityOff(self) -> None\nC++: virtual void AutoAdjustImageQualityOff()\n\n"},
  {"GetAutoAdjustImageQuality", PyvtkImageResliceMapper_GetAutoAdjustImageQuality, METH_VARARGS,
   "GetAutoAdjustImageQuality(self) -> int\nC++: virtual vtkTypeBool GetAutoAdjustImageQuality()\n\n"},
  {"SetResampleToScreenPixels", PyvtkImageResliceMapper_SetResampleToScreenPixels, METH_VARARGS,
   "SetResampleToScreenPixels(self, _arg:int) -> None\nC++: virtual void SetResampleToScreenPixels(vtkTypeBool _arg)\n\nResample the image directly to the screen pixels, instead of\nusing a texture to scale the image after resampling.  This is\nslower and uses more memory, but provides high-quality results.\nIt is On by default.\n"},
  {"ResampleToScreenPixelsOn", PyvtkImageResliceMapper_ResampleToScreenPixelsOn, METH_VARARGS,
   "ResampleToScreenPixelsOn(self) -> None\nC++: virtual void ResampleToScreenPixelsOn()\n\n"},
  {"ResampleToScreenPixelsOff", PyvtkImageResliceMapper_ResampleToScreenPixelsOff, METH_VARARGS,
   "ResampleToScreenPixelsOff(self) -> None\nC++: virtual void ResampleToScreenPixelsOff()\n\n"},
  {"GetResampleToScreenPixels", PyvtkImageResliceMapper_GetResampleToScreenPixels, METH_VARARGS,
   "GetResampleToScreenPixels(self) -> int\nC++: virtual vtkTypeBool GetResampleToScreenPixels()\n\n"},
  {"SetSeparateWindowLevelOperation", PyvtkImageResliceMapper_SetSeparateWindowLevelOperation, METH_VARARGS,
   "SetSeparateWindowLevelOperation(self, _arg:int) -> None\nC++: virtual void SetSeparateWindowLevelOperation(\n    vtkTypeBool _arg)\n\nKeep the color mapping stage distinct from the reslicing stage.\nThis will improve the quality and possibly the speed of\ninteractive window/level operations, but it uses more memory and\nmight slow down interactive slicing operations.  On by default.\n"},
  {"SeparateWindowLevelOperationOn", PyvtkImageResliceMapper_SeparateWindowLevelOperationOn, METH_VARARGS,
   "SeparateWindowLevelOperationOn(self) -> None\nC++: virtual void SeparateWindowLevelOperationOn()\n\n"},
  {"SeparateWindowLevelOperationOff", PyvtkImageResliceMapper_SeparateWindowLevelOperationOff, METH_VARARGS,
   "SeparateWindowLevelOperationOff(self) -> None\nC++: virtual void SeparateWindowLevelOperationOff()\n\n"},
  {"GetSeparateWindowLevelOperation", PyvtkImageResliceMapper_GetSeparateWindowLevelOperation, METH_VARARGS,
   "GetSeparateWindowLevelOperation(self) -> int\nC++: virtual vtkTypeBool GetSeparateWindowLevelOperation()\n\n"},
  {"SetInterpolator", PyvtkImageResliceMapper_SetInterpolator, METH_VARARGS,
   "SetInterpolator(self, interpolator:vtkAbstractImageInterpolator)\n    -> None\nC++: virtual void SetInterpolator(\n    vtkAbstractImageInterpolator *interpolator)\n\nSet a custom interpolator.  This will only be used if the\nResampleToScreenPixels option is on.\n"},
  {"GetInterpolator", PyvtkImageResliceMapper_GetInterpolator, METH_VARARGS,
   "GetInterpolator(self) -> vtkAbstractImageInterpolator\nC++: virtual vtkAbstractImageInterpolator *GetInterpolator()\n\n"},
  {"Render", PyvtkImageResliceMapper_Render, METH_VARARGS,
   "Render(self, renderer:vtkRenderer, prop:vtkImageSlice) -> None\nC++: void Render(vtkRenderer *renderer, vtkImageSlice *prop)\n    override;\n\nThis should only be called by the renderer.\n"},
  {"ReleaseGraphicsResources", PyvtkImageResliceMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper.  The parameter window is used to determine which graphic\nresources to release.\n"},
  {"GetMTime", PyvtkImageResliceMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime for the mapper.\n"},
  {"GetBounds", PyvtkImageResliceMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nThe bounding box (array of six doubles) of the data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"GetIndexBounds", PyvtkImageResliceMapper_GetIndexBounds, METH_VARARGS,
   "GetIndexBounds(self, extent:[float, float, float, float, float,\n    float]) -> None\nC++: void GetIndexBounds(double extent[6]) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageResliceMapper_Doc =
  "vtkImageResliceMapper - map a slice of a vtkImageData to the screen\n\n"
  "Superclass: vtkImageMapper3D\n\n"
  "vtkImageResliceMapper will cut a 3D image with an arbitrary slice\n"
  "plane and draw the results on the screen.  The slice can be set to\n"
  "automatically follow the camera, so that the camera controls the\n"
  "slicing.@par Thanks: Thanks to David Gobbi at the Seaman Family MR\n"
  "Centre and Dept. of Clinical Neurosciences, Foothills Medical Centre,\n"
  "Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImageSlice vtkImageProperty vtkImageSliceMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageResliceMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingImage.vtkImageResliceMapper", // tp_name
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
  PyvtkImageResliceMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageResliceMapper_StaticNew()
{
  return vtkImageResliceMapper::New();
}

PyObject *PyvtkImageResliceMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageResliceMapper_Type, PyvtkImageResliceMapper_Methods,
    "vtkImageResliceMapper",
 &PyvtkImageResliceMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageMapper3D");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageResliceMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageResliceMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageResliceMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

