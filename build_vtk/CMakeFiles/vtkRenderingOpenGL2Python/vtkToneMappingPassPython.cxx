// python wrapper for vtkToneMappingPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkToneMappingPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkToneMappingPass(PyObject *dict); }
extern "C" { PyObject *PyvtkToneMappingPass_ClassNew(); }

#ifndef DECLARED_PyvtkImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkImageProcessingPass_ClassNew
#endif

static PyObject *
PyvtkToneMappingPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkToneMappingPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkToneMappingPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkToneMappingPass *tempr = vtkToneMappingPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkToneMappingPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkToneMappingPass::NewInstance());

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
PyvtkToneMappingPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkToneMappingPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkToneMappingPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

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
      op->vtkToneMappingPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetGenericFilmicDefaultPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenericFilmicDefaultPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenericFilmicDefaultPresets();
    }
    else
    {
      op->vtkToneMappingPass::SetGenericFilmicDefaultPresets();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetGenericFilmicUncharted2Presets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenericFilmicUncharted2Presets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGenericFilmicUncharted2Presets();
    }
    else
    {
      op->vtkToneMappingPass::SetGenericFilmicUncharted2Presets();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetToneMappingType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToneMappingType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToneMappingType(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetToneMappingType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetToneMappingTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToneMappingTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToneMappingTypeMinValue() :
      op->vtkToneMappingPass::GetToneMappingTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetToneMappingTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToneMappingTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToneMappingTypeMaxValue() :
      op->vtkToneMappingPass::GetToneMappingTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetToneMappingType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToneMappingType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToneMappingType() :
      op->vtkToneMappingPass::GetToneMappingType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetExposure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExposure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetExposure() :
      op->vtkToneMappingPass::GetExposure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetExposure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExposure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExposure(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetExposure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContrast(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetContrast(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetContrastMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContrastMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetContrastMinValue() :
      op->vtkToneMappingPass::GetContrastMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetContrastMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContrastMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetContrastMaxValue() :
      op->vtkToneMappingPass::GetContrastMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetContrast() :
      op->vtkToneMappingPass::GetContrast());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetShoulder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShoulder(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetShoulder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetShoulderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetShoulderMinValue() :
      op->vtkToneMappingPass::GetShoulderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetShoulderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetShoulderMaxValue() :
      op->vtkToneMappingPass::GetShoulderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetShoulder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetShoulder() :
      op->vtkToneMappingPass::GetShoulder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetMidIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMidIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMidIn(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetMidIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetMidInMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMidInMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMidInMinValue() :
      op->vtkToneMappingPass::GetMidInMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetMidInMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMidInMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMidInMaxValue() :
      op->vtkToneMappingPass::GetMidInMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetMidIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMidIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMidIn() :
      op->vtkToneMappingPass::GetMidIn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetMidOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMidOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMidOut(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetMidOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetMidOutMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMidOutMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMidOutMinValue() :
      op->vtkToneMappingPass::GetMidOutMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetMidOutMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMidOutMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMidOutMaxValue() :
      op->vtkToneMappingPass::GetMidOutMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetMidOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMidOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMidOut() :
      op->vtkToneMappingPass::GetMidOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetHdrMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHdrMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHdrMax(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetHdrMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetHdrMaxMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHdrMaxMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHdrMaxMinValue() :
      op->vtkToneMappingPass::GetHdrMaxMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetHdrMaxMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHdrMaxMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHdrMaxMaxValue() :
      op->vtkToneMappingPass::GetHdrMaxMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetHdrMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHdrMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHdrMax() :
      op->vtkToneMappingPass::GetHdrMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_SetUseACES(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseACES");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseACES(temp0);
    }
    else
    {
      op->vtkToneMappingPass::SetUseACES(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkToneMappingPass_GetUseACES(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseACES");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToneMappingPass *op = static_cast<vtkToneMappingPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseACES() :
      op->vtkToneMappingPass::GetUseACES());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkToneMappingPass_Methods[] = {
  {"IsTypeOf", PyvtkToneMappingPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkToneMappingPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkToneMappingPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkToneMappingPass\nC++: static vtkToneMappingPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkToneMappingPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkToneMappingPass\nC++: vtkToneMappingPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkToneMappingPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkToneMappingPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkToneMappingPass_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n"},
  {"SetGenericFilmicDefaultPresets", PyvtkToneMappingPass_SetGenericFilmicDefaultPresets, METH_VARARGS,
   "SetGenericFilmicDefaultPresets(self) -> None\nC++: void SetGenericFilmicDefaultPresets()\n\nSet function to set uncharted 2 presets, and default presets\n"},
  {"SetGenericFilmicUncharted2Presets", PyvtkToneMappingPass_SetGenericFilmicUncharted2Presets, METH_VARARGS,
   "SetGenericFilmicUncharted2Presets(self) -> None\nC++: void SetGenericFilmicUncharted2Presets()\n\n"},
  {"SetToneMappingType", PyvtkToneMappingPass_SetToneMappingType, METH_VARARGS,
   "SetToneMappingType(self, _arg:int) -> None\nC++: virtual void SetToneMappingType(int _arg)\n\nGet/Set the tone mapping type. Default is GenericFilmic\n"},
  {"GetToneMappingTypeMinValue", PyvtkToneMappingPass_GetToneMappingTypeMinValue, METH_VARARGS,
   "GetToneMappingTypeMinValue(self) -> int\nC++: virtual int GetToneMappingTypeMinValue()\n\n"},
  {"GetToneMappingTypeMaxValue", PyvtkToneMappingPass_GetToneMappingTypeMaxValue, METH_VARARGS,
   "GetToneMappingTypeMaxValue(self) -> int\nC++: virtual int GetToneMappingTypeMaxValue()\n\n"},
  {"GetToneMappingType", PyvtkToneMappingPass_GetToneMappingType, METH_VARARGS,
   "GetToneMappingType(self) -> int\nC++: virtual int GetToneMappingType()\n\n"},
  {"GetExposure", PyvtkToneMappingPass_GetExposure, METH_VARARGS,
   "GetExposure(self) -> float\nC++: virtual float GetExposure()\n\nGet/Set Exposure coefficient used for exponential and Generic\nFilmic tone mapping. Default is 1.0\n"},
  {"SetExposure", PyvtkToneMappingPass_SetExposure, METH_VARARGS,
   "SetExposure(self, _arg:float) -> None\nC++: virtual void SetExposure(float _arg)\n\n"},
  {"SetContrast", PyvtkToneMappingPass_SetContrast, METH_VARARGS,
   "SetContrast(self, _arg:float) -> None\nC++: virtual void SetContrast(float _arg)\n\nContrast adjust the toe of the curve. Typically in [1-2]. Default\nis 1.6773\n"},
  {"GetContrastMinValue", PyvtkToneMappingPass_GetContrastMinValue, METH_VARARGS,
   "GetContrastMinValue(self) -> float\nC++: virtual float GetContrastMinValue()\n\n"},
  {"GetContrastMaxValue", PyvtkToneMappingPass_GetContrastMaxValue, METH_VARARGS,
   "GetContrastMaxValue(self) -> float\nC++: virtual float GetContrastMaxValue()\n\n"},
  {"GetContrast", PyvtkToneMappingPass_GetContrast, METH_VARARGS,
   "GetContrast(self) -> float\nC++: virtual float GetContrast()\n\n"},
  {"SetShoulder", PyvtkToneMappingPass_SetShoulder, METH_VARARGS,
   "SetShoulder(self, _arg:float) -> None\nC++: virtual void SetShoulder(float _arg)\n\nShoulder limit the output in the shoulder region of the curve.\nTypically in [0.9-1]. Default is 0.9714\n"},
  {"GetShoulderMinValue", PyvtkToneMappingPass_GetShoulderMinValue, METH_VARARGS,
   "GetShoulderMinValue(self) -> float\nC++: virtual float GetShoulderMinValue()\n\n"},
  {"GetShoulderMaxValue", PyvtkToneMappingPass_GetShoulderMaxValue, METH_VARARGS,
   "GetShoulderMaxValue(self) -> float\nC++: virtual float GetShoulderMaxValue()\n\n"},
  {"GetShoulder", PyvtkToneMappingPass_GetShoulder, METH_VARARGS,
   "GetShoulder(self) -> float\nC++: virtual float GetShoulder()\n\n"},
  {"SetMidIn", PyvtkToneMappingPass_SetMidIn, METH_VARARGS,
   "SetMidIn(self, _arg:float) -> None\nC++: virtual void SetMidIn(float _arg)\n\nMid level anchor input. Default is 0.18 (in percent gray)\n"},
  {"GetMidInMinValue", PyvtkToneMappingPass_GetMidInMinValue, METH_VARARGS,
   "GetMidInMinValue(self) -> float\nC++: virtual float GetMidInMinValue()\n\n"},
  {"GetMidInMaxValue", PyvtkToneMappingPass_GetMidInMaxValue, METH_VARARGS,
   "GetMidInMaxValue(self) -> float\nC++: virtual float GetMidInMaxValue()\n\n"},
  {"GetMidIn", PyvtkToneMappingPass_GetMidIn, METH_VARARGS,
   "GetMidIn(self) -> float\nC++: virtual float GetMidIn()\n\n"},
  {"SetMidOut", PyvtkToneMappingPass_SetMidOut, METH_VARARGS,
   "SetMidOut(self, _arg:float) -> None\nC++: virtual void SetMidOut(float _arg)\n\nMid level anchor output. Default is 0.18 (in percent gray)\n"},
  {"GetMidOutMinValue", PyvtkToneMappingPass_GetMidOutMinValue, METH_VARARGS,
   "GetMidOutMinValue(self) -> float\nC++: virtual float GetMidOutMinValue()\n\n"},
  {"GetMidOutMaxValue", PyvtkToneMappingPass_GetMidOutMaxValue, METH_VARARGS,
   "GetMidOutMaxValue(self) -> float\nC++: virtual float GetMidOutMaxValue()\n\n"},
  {"GetMidOut", PyvtkToneMappingPass_GetMidOut, METH_VARARGS,
   "GetMidOut(self) -> float\nC++: virtual float GetMidOut()\n\n"},
  {"SetHdrMax", PyvtkToneMappingPass_SetHdrMax, METH_VARARGS,
   "SetHdrMax(self, _arg:float) -> None\nC++: virtual void SetHdrMax(float _arg)\n\nMaximum HDR input that is not clipped. Default is 11.0785\n"},
  {"GetHdrMaxMinValue", PyvtkToneMappingPass_GetHdrMaxMinValue, METH_VARARGS,
   "GetHdrMaxMinValue(self) -> float\nC++: virtual float GetHdrMaxMinValue()\n\n"},
  {"GetHdrMaxMaxValue", PyvtkToneMappingPass_GetHdrMaxMaxValue, METH_VARARGS,
   "GetHdrMaxMaxValue(self) -> float\nC++: virtual float GetHdrMaxMaxValue()\n\n"},
  {"GetHdrMax", PyvtkToneMappingPass_GetHdrMax, METH_VARARGS,
   "GetHdrMax(self) -> float\nC++: virtual float GetHdrMax()\n\n"},
  {"SetUseACES", PyvtkToneMappingPass_SetUseACES, METH_VARARGS,
   "SetUseACES(self, _arg:bool) -> None\nC++: virtual void SetUseACES(bool _arg)\n\nApply or not the Academy Color Encoding System (ACES). Default is\ntrue\n"},
  {"GetUseACES", PyvtkToneMappingPass_GetUseACES, METH_VARARGS,
   "GetUseACES(self) -> bool\nC++: virtual bool GetUseACES()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkToneMappingPass_Doc =
  "vtkToneMappingPass - Implement a post-processing Tone Mapping.\n\n"
  "Superclass: vtkImageProcessingPass\n\n"
  "Tone mapping is the process of mapping HDR colors to [0;1] range.\n"
  "This render pass supports four different modes:\n"
  "- Clamp: clamps the color to [0;1] range\n"
  "- Reinhard: maps the color using formula: x/(x+1)\n"
  "- Exponential: maps the colors using a coefficient and the formula:\n"
  "  1-exp(-a*x)\n"
  "- GenericFilmic: maps the color using five parameters that allow to\n"
  "  shape the tonemapping curve : Contrast adjust the toe (left part)\n"
  "  of the curve; Shoulder adjusts the right part; MidIn and MidOut\n"
  "  adjusts the middle gray level in percent of the curve for input and\n"
  "output (ie. the halfway point between white and black); and HdrMax is\n"
  "the maximum HDR input that is not clipped. A boolean UseACES allows\n"
  "  to use the Academy Color Encoding System.\n\n"
  "Advanced tone mapping like GenericFilmic, Reinhard or Exponential can\n"
  "be useful when several lights are added to the renderer.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkToneMappingPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkToneMappingPass", // tp_name
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
  PyvtkToneMappingPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkToneMappingPass_StaticNew()
{
  return vtkToneMappingPass::New();
}

PyObject *PyvtkToneMappingPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkToneMappingPass_Type, PyvtkToneMappingPass_Methods,
    "vtkToneMappingPass",
 &PyvtkToneMappingPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageProcessingPass_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "Clamp", vtkToneMappingPass::Clamp },
        { "Reinhard", vtkToneMappingPass::Reinhard },
        { "Exponential", vtkToneMappingPass::Exponential },
        { "GenericFilmic", vtkToneMappingPass::GenericFilmic },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkToneMappingPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkToneMappingPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkToneMappingPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

