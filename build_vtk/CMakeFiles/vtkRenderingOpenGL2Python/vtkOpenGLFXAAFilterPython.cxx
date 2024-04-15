// python wrapper for vtkOpenGLFXAAFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFXAAOptions.h"
#include "vtkOpenGLFXAAFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLFXAAFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLFXAAFilter_ClassNew(); }


static PyObject *
PyvtkOpenGLFXAAFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLFXAAFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLFXAAFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLFXAAFilter *tempr = vtkOpenGLFXAAFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLFXAAFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLFXAAFilter::NewInstance());

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
PyvtkOpenGLFXAAFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLFXAAFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLFXAAFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  vtkOpenGLRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLRenderer"))
  {
    if (ap.IsBound())
    {
      op->Execute(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::Execute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkOpenGLFXAAFilter::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_UpdateConfiguration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateConfiguration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  vtkFXAAOptions *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFXAAOptions"))
  {
    if (ap.IsBound())
    {
      op->UpdateConfiguration(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::UpdateConfiguration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetRelativeContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeContrastThreshold(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetRelativeContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetRelativeContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThresholdMinValue() :
      op->vtkOpenGLFXAAFilter::GetRelativeContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetRelativeContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThresholdMaxValue() :
      op->vtkOpenGLFXAAFilter::GetRelativeContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetRelativeContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRelativeContrastThreshold() :
      op->vtkOpenGLFXAAFilter::GetRelativeContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetHardContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHardContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHardContrastThreshold(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetHardContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetHardContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThresholdMinValue() :
      op->vtkOpenGLFXAAFilter::GetHardContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetHardContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThresholdMaxValue() :
      op->vtkOpenGLFXAAFilter::GetHardContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetHardContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHardContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHardContrastThreshold() :
      op->vtkOpenGLFXAAFilter::GetHardContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetSubpixelBlendLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubpixelBlendLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubpixelBlendLimit(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetSubpixelBlendLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimitMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimitMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimitMinValue() :
      op->vtkOpenGLFXAAFilter::GetSubpixelBlendLimitMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimitMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimitMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimitMaxValue() :
      op->vtkOpenGLFXAAFilter::GetSubpixelBlendLimitMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelBlendLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelBlendLimit() :
      op->vtkOpenGLFXAAFilter::GetSubpixelBlendLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetSubpixelContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubpixelContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubpixelContrastThreshold(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetSubpixelContrastThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelContrastThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThresholdMinValue() :
      op->vtkOpenGLFXAAFilter::GetSubpixelContrastThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelContrastThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThresholdMaxValue() :
      op->vtkOpenGLFXAAFilter::GetSubpixelContrastThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetSubpixelContrastThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubpixelContrastThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSubpixelContrastThreshold() :
      op->vtkOpenGLFXAAFilter::GetSubpixelContrastThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetUseHighQualityEndpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseHighQualityEndpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseHighQualityEndpoints(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetUseHighQualityEndpoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetUseHighQualityEndpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseHighQualityEndpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseHighQualityEndpoints() :
      op->vtkOpenGLFXAAFilter::GetUseHighQualityEndpoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_UseHighQualityEndpointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHighQualityEndpointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHighQualityEndpointsOn();
    }
    else
    {
      op->vtkOpenGLFXAAFilter::UseHighQualityEndpointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_UseHighQualityEndpointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseHighQualityEndpointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseHighQualityEndpointsOff();
    }
    else
    {
      op->vtkOpenGLFXAAFilter::UseHighQualityEndpointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetEndpointSearchIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndpointSearchIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndpointSearchIterations(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetEndpointSearchIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetEndpointSearchIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterationsMinValue() :
      op->vtkOpenGLFXAAFilter::GetEndpointSearchIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetEndpointSearchIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterationsMaxValue() :
      op->vtkOpenGLFXAAFilter::GetEndpointSearchIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetEndpointSearchIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndpointSearchIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEndpointSearchIterations() :
      op->vtkOpenGLFXAAFilter::GetEndpointSearchIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_SetDebugOptionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDebugOptionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  vtkFXAAOptions::DebugOption temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkFXAAOptions.DebugOption"))
  {
    if (ap.IsBound())
    {
      op->SetDebugOptionValue(temp0);
    }
    else
    {
      op->vtkOpenGLFXAAFilter::SetDebugOptionValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLFXAAFilter_GetDebugOptionValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDebugOptionValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLFXAAFilter *op = static_cast<vtkOpenGLFXAAFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFXAAOptions::DebugOption tempr = (ap.IsBound() ?
      op->GetDebugOptionValue() :
      op->vtkOpenGLFXAAFilter::GetDebugOptionValue());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkFXAAOptions.DebugOption");
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLFXAAFilter_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLFXAAFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLFXAAFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLFXAAFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLFXAAFilter\nC++: static vtkOpenGLFXAAFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLFXAAFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLFXAAFilter\nC++: vtkOpenGLFXAAFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLFXAAFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLFXAAFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Execute", PyvtkOpenGLFXAAFilter_Execute, METH_VARARGS,
   "Execute(self, ren:vtkOpenGLRenderer) -> None\nC++: void Execute(vtkOpenGLRenderer *ren)\n\nPerform FXAA on the current render buffer in ren.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLFXAAFilter_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self) -> None\nC++: void ReleaseGraphicsResources()\n\nRelease all OpenGL state.\n"},
  {"UpdateConfiguration", PyvtkOpenGLFXAAFilter_UpdateConfiguration, METH_VARARGS,
   "UpdateConfiguration(self, opts:vtkFXAAOptions) -> None\nC++: void UpdateConfiguration(vtkFXAAOptions *opts)\n\nCopy the configuration values from opts into this filter. Note\nthat this copies the configuration values from opts -- it does\nnot save theopts pointer.\n"},
  {"SetRelativeContrastThreshold", PyvtkOpenGLFXAAFilter_SetRelativeContrastThreshold, METH_VARARGS,
   "SetRelativeContrastThreshold(self, _arg:float) -> None\nC++: virtual void SetRelativeContrastThreshold(float _arg)\n\nParameter for tuning the FXAA implementation. See vtkFXAAOptions\nfor details and suggested values.\n"},
  {"GetRelativeContrastThresholdMinValue", PyvtkOpenGLFXAAFilter_GetRelativeContrastThresholdMinValue, METH_VARARGS,
   "GetRelativeContrastThresholdMinValue(self) -> float\nC++: virtual float GetRelativeContrastThresholdMinValue()\n\n"},
  {"GetRelativeContrastThresholdMaxValue", PyvtkOpenGLFXAAFilter_GetRelativeContrastThresholdMaxValue, METH_VARARGS,
   "GetRelativeContrastThresholdMaxValue(self) -> float\nC++: virtual float GetRelativeContrastThresholdMaxValue()\n\n"},
  {"GetRelativeContrastThreshold", PyvtkOpenGLFXAAFilter_GetRelativeContrastThreshold, METH_VARARGS,
   "GetRelativeContrastThreshold(self) -> float\nC++: virtual float GetRelativeContrastThreshold()\n\n"},
  {"SetHardContrastThreshold", PyvtkOpenGLFXAAFilter_SetHardContrastThreshold, METH_VARARGS,
   "SetHardContrastThreshold(self, _arg:float) -> None\nC++: virtual void SetHardContrastThreshold(float _arg)\n\n"},
  {"GetHardContrastThresholdMinValue", PyvtkOpenGLFXAAFilter_GetHardContrastThresholdMinValue, METH_VARARGS,
   "GetHardContrastThresholdMinValue(self) -> float\nC++: virtual float GetHardContrastThresholdMinValue()\n\n"},
  {"GetHardContrastThresholdMaxValue", PyvtkOpenGLFXAAFilter_GetHardContrastThresholdMaxValue, METH_VARARGS,
   "GetHardContrastThresholdMaxValue(self) -> float\nC++: virtual float GetHardContrastThresholdMaxValue()\n\n"},
  {"GetHardContrastThreshold", PyvtkOpenGLFXAAFilter_GetHardContrastThreshold, METH_VARARGS,
   "GetHardContrastThreshold(self) -> float\nC++: virtual float GetHardContrastThreshold()\n\n"},
  {"SetSubpixelBlendLimit", PyvtkOpenGLFXAAFilter_SetSubpixelBlendLimit, METH_VARARGS,
   "SetSubpixelBlendLimit(self, _arg:float) -> None\nC++: virtual void SetSubpixelBlendLimit(float _arg)\n\n"},
  {"GetSubpixelBlendLimitMinValue", PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimitMinValue, METH_VARARGS,
   "GetSubpixelBlendLimitMinValue(self) -> float\nC++: virtual float GetSubpixelBlendLimitMinValue()\n\n"},
  {"GetSubpixelBlendLimitMaxValue", PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimitMaxValue, METH_VARARGS,
   "GetSubpixelBlendLimitMaxValue(self) -> float\nC++: virtual float GetSubpixelBlendLimitMaxValue()\n\n"},
  {"GetSubpixelBlendLimit", PyvtkOpenGLFXAAFilter_GetSubpixelBlendLimit, METH_VARARGS,
   "GetSubpixelBlendLimit(self) -> float\nC++: virtual float GetSubpixelBlendLimit()\n\n"},
  {"SetSubpixelContrastThreshold", PyvtkOpenGLFXAAFilter_SetSubpixelContrastThreshold, METH_VARARGS,
   "SetSubpixelContrastThreshold(self, _arg:float) -> None\nC++: virtual void SetSubpixelContrastThreshold(float _arg)\n\n"},
  {"GetSubpixelContrastThresholdMinValue", PyvtkOpenGLFXAAFilter_GetSubpixelContrastThresholdMinValue, METH_VARARGS,
   "GetSubpixelContrastThresholdMinValue(self) -> float\nC++: virtual float GetSubpixelContrastThresholdMinValue()\n\n"},
  {"GetSubpixelContrastThresholdMaxValue", PyvtkOpenGLFXAAFilter_GetSubpixelContrastThresholdMaxValue, METH_VARARGS,
   "GetSubpixelContrastThresholdMaxValue(self) -> float\nC++: virtual float GetSubpixelContrastThresholdMaxValue()\n\n"},
  {"GetSubpixelContrastThreshold", PyvtkOpenGLFXAAFilter_GetSubpixelContrastThreshold, METH_VARARGS,
   "GetSubpixelContrastThreshold(self) -> float\nC++: virtual float GetSubpixelContrastThreshold()\n\n"},
  {"SetUseHighQualityEndpoints", PyvtkOpenGLFXAAFilter_SetUseHighQualityEndpoints, METH_VARARGS,
   "SetUseHighQualityEndpoints(self, val:bool) -> None\nC++: virtual void SetUseHighQualityEndpoints(bool val)\n\n"},
  {"GetUseHighQualityEndpoints", PyvtkOpenGLFXAAFilter_GetUseHighQualityEndpoints, METH_VARARGS,
   "GetUseHighQualityEndpoints(self) -> bool\nC++: virtual bool GetUseHighQualityEndpoints()\n\n"},
  {"UseHighQualityEndpointsOn", PyvtkOpenGLFXAAFilter_UseHighQualityEndpointsOn, METH_VARARGS,
   "UseHighQualityEndpointsOn(self) -> None\nC++: virtual void UseHighQualityEndpointsOn()\n\n"},
  {"UseHighQualityEndpointsOff", PyvtkOpenGLFXAAFilter_UseHighQualityEndpointsOff, METH_VARARGS,
   "UseHighQualityEndpointsOff(self) -> None\nC++: virtual void UseHighQualityEndpointsOff()\n\n"},
  {"SetEndpointSearchIterations", PyvtkOpenGLFXAAFilter_SetEndpointSearchIterations, METH_VARARGS,
   "SetEndpointSearchIterations(self, _arg:int) -> None\nC++: virtual void SetEndpointSearchIterations(int _arg)\n\n"},
  {"GetEndpointSearchIterationsMinValue", PyvtkOpenGLFXAAFilter_GetEndpointSearchIterationsMinValue, METH_VARARGS,
   "GetEndpointSearchIterationsMinValue(self) -> int\nC++: virtual int GetEndpointSearchIterationsMinValue()\n\n"},
  {"GetEndpointSearchIterationsMaxValue", PyvtkOpenGLFXAAFilter_GetEndpointSearchIterationsMaxValue, METH_VARARGS,
   "GetEndpointSearchIterationsMaxValue(self) -> int\nC++: virtual int GetEndpointSearchIterationsMaxValue()\n\n"},
  {"GetEndpointSearchIterations", PyvtkOpenGLFXAAFilter_GetEndpointSearchIterations, METH_VARARGS,
   "GetEndpointSearchIterations(self) -> int\nC++: virtual int GetEndpointSearchIterations()\n\n"},
  {"SetDebugOptionValue", PyvtkOpenGLFXAAFilter_SetDebugOptionValue, METH_VARARGS,
   "SetDebugOptionValue(self, opt:vtkFXAAOptions.DebugOption) -> None\nC++: virtual void SetDebugOptionValue(\n    vtkFXAAOptions::DebugOption opt)\n\n"},
  {"GetDebugOptionValue", PyvtkOpenGLFXAAFilter_GetDebugOptionValue, METH_VARARGS,
   "GetDebugOptionValue(self) -> vtkFXAAOptions.DebugOption\nC++: virtual vtkFXAAOptions::DebugOption GetDebugOptionValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLFXAAFilter_Doc =
  "vtkOpenGLFXAAFilter - Perform FXAA antialiasing on the current\nframebuffer.\n\n"
  "Superclass: vtkObject\n\n"
  "Call Execute() to run a FXAA antialiasing pass on the current OpenGL\n"
  "framebuffer. See method documentation for tunable parameters.\n\n"
  "Based on the following implementation and description:\n\n"
  "Whitepaper:\n"
  "http://developer.download.nvidia.com/assets/gamedev/files/sdk/11/FXAA_\n"
  "WhitePaper.pdf\n\n"
  "Sample implementation:\n"
  "https://github.com/NVIDIAGameWorks/GraphicsSamples/blob/master/samples\n"
  "/es3-kepler/FXAA/FXAA3_11.h\n\n"
  "TODO there are currently some \"banding\" artifacts on some edges,\n"
  "particularly single pixel lines. These seem to be caused by using a\n"
  "linear RGB input, rather than a gamma-correct sRGB input. Future work\n"
  "should combine this pass with a gamma correction pass to correct\n"
  "this. Bonus points for precomputing luminosity into the sRGB's alpha\n"
  "channel to save cycles in the FXAA shader!\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLFXAAFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLFXAAFilter", // tp_name
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
  PyvtkOpenGLFXAAFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLFXAAFilter_StaticNew()
{
  return vtkOpenGLFXAAFilter::New();
}

PyObject *PyvtkOpenGLFXAAFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLFXAAFilter_Type, PyvtkOpenGLFXAAFilter_Methods,
    "vtkOpenGLFXAAFilter",
 &PyvtkOpenGLFXAAFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLFXAAFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLFXAAFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLFXAAFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

