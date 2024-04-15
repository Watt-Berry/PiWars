// python wrapper for vtkTableFFT
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTableFFT.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableFFT(PyObject *dict); }
extern "C" { PyObject *PyvtkTableFFT_ClassNew(); }


static PyObject *
PyvtkTableFFT_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableFFT::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableFFT::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableFFT *tempr = vtkTableFFT::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableFFT *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableFFT::NewInstance());

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
PyvtkTableFFT_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTableFFT::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTableFFT::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetCreateFrequencyColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateFrequencyColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCreateFrequencyColumn() :
      op->vtkTableFFT::GetCreateFrequencyColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetCreateFrequencyColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateFrequencyColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateFrequencyColumn(temp0);
    }
    else
    {
      op->vtkTableFFT::SetCreateFrequencyColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_CreateFrequencyColumnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateFrequencyColumnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateFrequencyColumnOn();
    }
    else
    {
      op->vtkTableFFT::CreateFrequencyColumnOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_CreateFrequencyColumnOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateFrequencyColumnOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateFrequencyColumnOff();
    }
    else
    {
      op->vtkTableFFT::CreateFrequencyColumnOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetDefaultSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultSampleRate() :
      op->vtkTableFFT::GetDefaultSampleRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetDefaultSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultSampleRate(temp0);
    }
    else
    {
      op->vtkTableFFT::SetDefaultSampleRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetWindowingFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowingFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWindowingFunction() :
      op->vtkTableFFT::GetWindowingFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetWindowingFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowingFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWindowingFunction(temp0);
    }
    else
    {
      op->vtkTableFFT::SetWindowingFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetReturnOnesided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReturnOnesided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReturnOnesided() :
      op->vtkTableFFT::GetReturnOnesided());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetReturnOnesided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReturnOnesided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReturnOnesided(temp0);
    }
    else
    {
      op->vtkTableFFT::SetReturnOnesided(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_ReturnOnesidedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReturnOnesidedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReturnOnesidedOn();
    }
    else
    {
      op->vtkTableFFT::ReturnOnesidedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_ReturnOnesidedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReturnOnesidedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReturnOnesidedOff();
    }
    else
    {
      op->vtkTableFFT::ReturnOnesidedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetAverageFft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAverageFft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAverageFft() :
      op->vtkTableFFT::GetAverageFft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetAverageFft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAverageFft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAverageFft(temp0);
    }
    else
    {
      op->vtkTableFFT::SetAverageFft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_AverageFftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AverageFftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AverageFftOn();
    }
    else
    {
      op->vtkTableFFT::AverageFftOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_AverageFftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AverageFftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AverageFftOff();
    }
    else
    {
      op->vtkTableFFT::AverageFftOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNormalize() :
      op->vtkTableFFT::GetNormalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalize(temp0);
    }
    else
    {
      op->vtkTableFFT::SetNormalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_NormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeOn();
    }
    else
    {
      op->vtkTableFFT::NormalizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_NormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeOff();
    }
    else
    {
      op->vtkTableFFT::NormalizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockSize() :
      op->vtkTableFFT::GetBlockSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockSize(temp0);
    }
    else
    {
      op->vtkTableFFT::SetBlockSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetBlockOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockOverlap() :
      op->vtkTableFFT::GetBlockOverlap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetBlockOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockOverlap(temp0);
    }
    else
    {
      op->vtkTableFFT::SetBlockOverlap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetScalingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalingMethod() :
      op->vtkTableFFT::GetScalingMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetScalingMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingMethod(temp0);
    }
    else
    {
      op->vtkTableFFT::SetScalingMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetScalingMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalingMethodMinValue() :
      op->vtkTableFFT::GetScalingMethodMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetScalingMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalingMethodMaxValue() :
      op->vtkTableFFT::GetScalingMethodMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetDetrend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDetrend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDetrend() :
      op->vtkTableFFT::GetDetrend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetDetrend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDetrend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDetrend(temp0);
    }
    else
    {
      op->vtkTableFFT::SetDetrend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_DetrendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetrendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DetrendOn();
    }
    else
    {
      op->vtkTableFFT::DetrendOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_DetrendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetrendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DetrendOff();
    }
    else
    {
      op->vtkTableFFT::DetrendOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetPrefixOutputArrays(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetPrefixOutputArrays."
    " (" "Deprecated in favor of always keeping the output array names the same as the input." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetPrefixOutputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPrefixOutputArrays() :
      op->vtkTableFFT::GetPrefixOutputArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetPrefixOutputArrays(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetPrefixOutputArrays."
    " (" "Deprecated in favor of always keeping the output array names the same as the input." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetPrefixOutputArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrefixOutputArrays(temp0);
    }
    else
    {
      op->vtkTableFFT::SetPrefixOutputArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetOptimizeForRealInput(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetOptimizeForRealInput."
    " (" "Function has been renamed GetReturnOnesided" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetOptimizeForRealInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOptimizeForRealInput() :
      op->vtkTableFFT::GetOptimizeForRealInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetOptimizeForRealInput(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetOptimizeForRealInput."
    " (" "Function has been renamed SetReturnOnesided" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetOptimizeForRealInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOptimizeForRealInput(temp0);
    }
    else
    {
      op->vtkTableFFT::SetOptimizeForRealInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_OptimizeForRealInputOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method OptimizeForRealInputOn."
    " (" "Function has been renamed ReturnOnesidedOn" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "OptimizeForRealInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OptimizeForRealInputOn();
    }
    else
    {
      op->vtkTableFFT::OptimizeForRealInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_OptimizeForRealInputOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method OptimizeForRealInputOff."
    " (" "Function has been renamed ReturnOnesidedOff" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "OptimizeForRealInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OptimizeForRealInputOff();
    }
    else
    {
      op->vtkTableFFT::OptimizeForRealInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_GetNumberOfBlock(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetNumberOfBlock."
    " (" "Block behavior is not controlled using BlockSize and BlockOverlap properties." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetNumberOfBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlock() :
      op->vtkTableFFT::GetNumberOfBlock());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableFFT_SetNumberOfBlock(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetNumberOfBlock."
    " (" "Block behavior is not controlled using BlockSize and BlockOverlap properties." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetNumberOfBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableFFT *op = static_cast<vtkTableFFT *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBlock(temp0);
    }
    else
    {
      op->vtkTableFFT::SetNumberOfBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTableFFT_Methods[] = {
  {"IsTypeOf", PyvtkTableFFT_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableFFT_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableFFT_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTableFFT\nC++: static vtkTableFFT *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableFFT_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTableFFT\nC++: vtkTableFFT *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTableFFT_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTableFFT_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCreateFrequencyColumn", PyvtkTableFFT_GetCreateFrequencyColumn, METH_VARARGS,
   "GetCreateFrequencyColumn(self) -> bool\nC++: virtual bool GetCreateFrequencyColumn()\n\nSpecify if the filter should create a frequency column based on a\ncolumn named \"time\" (not case sensitive). An evenly-spaced time\narray is expected.\n\n@see vtkTableFFT::SetDefaultSampleRate(double)\n\nDefault is false\n"},
  {"SetCreateFrequencyColumn", PyvtkTableFFT_SetCreateFrequencyColumn, METH_VARARGS,
   "SetCreateFrequencyColumn(self, _arg:bool) -> None\nC++: virtual void SetCreateFrequencyColumn(bool _arg)\n\n"},
  {"CreateFrequencyColumnOn", PyvtkTableFFT_CreateFrequencyColumnOn, METH_VARARGS,
   "CreateFrequencyColumnOn(self) -> None\nC++: virtual void CreateFrequencyColumnOn()\n\n"},
  {"CreateFrequencyColumnOff", PyvtkTableFFT_CreateFrequencyColumnOff, METH_VARARGS,
   "CreateFrequencyColumnOff(self) -> None\nC++: virtual void CreateFrequencyColumnOff()\n\n"},
  {"GetDefaultSampleRate", PyvtkTableFFT_GetDefaultSampleRate, METH_VARARGS,
   "GetDefaultSampleRate(self) -> float\nC++: virtual double GetDefaultSampleRate()\n\nIf the \"Time\" column is not found then this value will be used.\nExpressed in Hz.\n\nDefault is 10'000 (Hz)\n"},
  {"SetDefaultSampleRate", PyvtkTableFFT_SetDefaultSampleRate, METH_VARARGS,
   "SetDefaultSampleRate(self, _arg:float) -> None\nC++: virtual void SetDefaultSampleRate(double _arg)\n\n"},
  {"GetWindowingFunction", PyvtkTableFFT_GetWindowingFunction, METH_VARARGS,
   "GetWindowingFunction(self) -> int\nC++: virtual int GetWindowingFunction()\n\nSpecify the windowing function to apply on the input. If\nAverageFft is true the windowing function will be applied per\nblock and not on the whole input.\n\nDefault is RECTANGULAR (does nothing)\n"},
  {"SetWindowingFunction", PyvtkTableFFT_SetWindowingFunction, METH_VARARGS,
   "SetWindowingFunction(self, __a:int) -> None\nC++: virtual void SetWindowingFunction(int)\n\n"},
  {"GetReturnOnesided", PyvtkTableFFT_GetReturnOnesided, METH_VARARGS,
   "GetReturnOnesided(self) -> bool\nC++: virtual bool GetReturnOnesided()\n\nSpecify if the filter should use the optimized discrete fourier\ntransform for real values and return a onesided spectrum : this\nwill cause output columns to have from n to ((n / 2) + 1) values.\nIf ReturnOnesided is true but the input contains columns with 2\ncomponents (aka complex data) or started with `vtk`, these\ncolumns will be ignored.\n\nDefault is false\n"},
  {"SetReturnOnesided", PyvtkTableFFT_SetReturnOnesided, METH_VARARGS,
   "SetReturnOnesided(self, _arg:bool) -> None\nC++: virtual void SetReturnOnesided(bool _arg)\n\n"},
  {"ReturnOnesidedOn", PyvtkTableFFT_ReturnOnesidedOn, METH_VARARGS,
   "ReturnOnesidedOn(self) -> None\nC++: virtual void ReturnOnesidedOn()\n\n"},
  {"ReturnOnesidedOff", PyvtkTableFFT_ReturnOnesidedOff, METH_VARARGS,
   "ReturnOnesidedOff(self) -> None\nC++: virtual void ReturnOnesidedOff()\n\n"},
  {"GetAverageFft", PyvtkTableFFT_GetAverageFft, METH_VARARGS,
   "GetAverageFft(self) -> bool\nC++: virtual bool GetAverageFft()\n\nSpecify if filter should use the Welch / periodogram method. If\ntrue the input should be split in multiple segment to compute an\naverage fft across all segments / blocks.\n\nNote that in this case, complex data and array with name started\nwith \"vtk\" will be ignored.\n\n@see vtkTableFFT::SetBlockSize(int)@see\nvtkTableFFT::SetBlockOverlap(int)\n\nDefault is false\n"},
  {"SetAverageFft", PyvtkTableFFT_SetAverageFft, METH_VARARGS,
   "SetAverageFft(self, __a:bool) -> None\nC++: virtual void SetAverageFft(bool)\n\n"},
  {"AverageFftOn", PyvtkTableFFT_AverageFftOn, METH_VARARGS,
   "AverageFftOn(self) -> None\nC++: virtual void AverageFftOn()\n\n"},
  {"AverageFftOff", PyvtkTableFFT_AverageFftOff, METH_VARARGS,
   "AverageFftOff(self) -> None\nC++: virtual void AverageFftOff()\n\n"},
  {"GetNormalize", PyvtkTableFFT_GetNormalize, METH_VARARGS,
   "GetNormalize(self) -> bool\nC++: virtual bool GetNormalize()\n\nSpecify if the output should be normalized so that Parseval's\ntheorem is respected. If enabled output will be scaled according\nto the number of samples and the window energy. Else the raw FFT\nwill be returned as is. Only used if AverageFft is false.\n\n@see vtkTableFFT::SetAverageFft(bool)\n\nDefault is false\n"},
  {"SetNormalize", PyvtkTableFFT_SetNormalize, METH_VARARGS,
   "SetNormalize(self, _arg:bool) -> None\nC++: virtual void SetNormalize(bool _arg)\n\n"},
  {"NormalizeOn", PyvtkTableFFT_NormalizeOn, METH_VARARGS,
   "NormalizeOn(self) -> None\nC++: virtual void NormalizeOn()\n\n"},
  {"NormalizeOff", PyvtkTableFFT_NormalizeOff, METH_VARARGS,
   "NormalizeOff(self) -> None\nC++: virtual void NormalizeOff()\n\n"},
  {"GetBlockSize", PyvtkTableFFT_GetBlockSize, METH_VARARGS,
   "GetBlockSize(self) -> int\nC++: virtual int GetBlockSize()\n\nSpecify the number of samples to use for each block / segment in\nthe Welch method. Only used if AverageFft is true\n\n@see vtkTableFFT::SetAverageFft(bool)\n\nDefault is 1024\n"},
  {"SetBlockSize", PyvtkTableFFT_SetBlockSize, METH_VARARGS,
   "SetBlockSize(self, __a:int) -> None\nC++: virtual void SetBlockSize(int)\n\n"},
  {"GetBlockOverlap", PyvtkTableFFT_GetBlockOverlap, METH_VARARGS,
   "GetBlockOverlap(self) -> int\nC++: virtual int GetBlockOverlap()\n\nSpecify the number of samples which will overlap between each\nblock / segment. If value is not in a valid range (ie < 0 or >=\nBlockSize) then the value BlockSize / 2 will be used. Only used\nif AverageFft is true.\n\n@see vtkTableFFT::SetAverageFft(bool)@see\nvtkTableFFT::SetBlockSize(int)\n\nDefault is -1\n"},
  {"SetBlockOverlap", PyvtkTableFFT_SetBlockOverlap, METH_VARARGS,
   "SetBlockOverlap(self, _arg:int) -> None\nC++: virtual void SetBlockOverlap(int _arg)\n\n"},
  {"GetScalingMethod", PyvtkTableFFT_GetScalingMethod, METH_VARARGS,
   "GetScalingMethod(self) -> int\nC++: virtual int GetScalingMethod()\n\nSet what scaling should be used when applying the Welch method.\nIt uses vtkFFT::Scaling enum as values.\n\n@see vtkFFT::Scaling\n\nDefault is vtkFFT::Scaling::Density (aka 0)\n"},
  {"SetScalingMethod", PyvtkTableFFT_SetScalingMethod, METH_VARARGS,
   "SetScalingMethod(self, _arg:int) -> None\nC++: virtual void SetScalingMethod(int _arg)\n\n"},
  {"GetScalingMethodMinValue", PyvtkTableFFT_GetScalingMethodMinValue, METH_VARARGS,
   "GetScalingMethodMinValue(self) -> int\nC++: virtual int GetScalingMethodMinValue()\n\n"},
  {"GetScalingMethodMaxValue", PyvtkTableFFT_GetScalingMethodMaxValue, METH_VARARGS,
   "GetScalingMethodMaxValue(self) -> int\nC++: virtual int GetScalingMethodMaxValue()\n\n"},
  {"GetDetrend", PyvtkTableFFT_GetDetrend, METH_VARARGS,
   "GetDetrend(self) -> bool\nC++: virtual bool GetDetrend()\n\nRemove trend on each segment before applying the FFT. This is a\nconstant detrend where the mean of the signal is substracted to\nthe signal. Only used if AverageFft is true.\n\n@see vtkTableFFT::SetAverageFft(bool)\n\nDefault is false.\n"},
  {"SetDetrend", PyvtkTableFFT_SetDetrend, METH_VARARGS,
   "SetDetrend(self, _arg:bool) -> None\nC++: virtual void SetDetrend(bool _arg)\n\n"},
  {"DetrendOn", PyvtkTableFFT_DetrendOn, METH_VARARGS,
   "DetrendOn(self) -> None\nC++: virtual void DetrendOn()\n\n"},
  {"DetrendOff", PyvtkTableFFT_DetrendOff, METH_VARARGS,
   "DetrendOff(self) -> None\nC++: virtual void DetrendOff()\n\n"},
  {"GetPrefixOutputArrays", PyvtkTableFFT_GetPrefixOutputArrays, METH_VARARGS,
   "GetPrefixOutputArrays(self) -> bool\nC++: virtual bool GetPrefixOutputArrays()\n\n@deprecated in v9.2. Behavior was not coherent with VTK\nphilosophy.\n\nSpecify if output array should be prefixed by \"FFT_\" or not. This\nbehavior was introduced in v9.1. Default is false.\n"},
  {"SetPrefixOutputArrays", PyvtkTableFFT_SetPrefixOutputArrays, METH_VARARGS,
   "SetPrefixOutputArrays(self, _arg:bool) -> None\nC++: virtual void SetPrefixOutputArrays(bool _arg)\n\n"},
  {"GetOptimizeForRealInput", PyvtkTableFFT_GetOptimizeForRealInput, METH_VARARGS,
   "GetOptimizeForRealInput(self) -> bool\nC++: virtual bool GetOptimizeForRealInput()\n\n@deprecated in v9.3. Property has been renamed ReturnOnesided.\n\n@see vtkTableFFT::SetReturnOnesided(bool)\n\nSpecify if the filter should use the optimized discrete fourier\ntransform for real values. This will cause output columns to have\nfrom n to ((n / 2) + 1) rows. If OptimizeForRealInput is On but\nthe input contains columns with 2 components, these columns will\nbe ignored.\n"},
  {"SetOptimizeForRealInput", PyvtkTableFFT_SetOptimizeForRealInput, METH_VARARGS,
   "SetOptimizeForRealInput(self, _arg:bool) -> None\nC++: virtual void SetOptimizeForRealInput(bool _arg)\n\n"},
  {"OptimizeForRealInputOn", PyvtkTableFFT_OptimizeForRealInputOn, METH_VARARGS,
   "OptimizeForRealInputOn(self) -> None\nC++: virtual void OptimizeForRealInputOn()\n\n"},
  {"OptimizeForRealInputOff", PyvtkTableFFT_OptimizeForRealInputOff, METH_VARARGS,
   "OptimizeForRealInputOff(self) -> None\nC++: virtual void OptimizeForRealInputOff()\n\n"},
  {"GetNumberOfBlock", PyvtkTableFFT_GetNumberOfBlock, METH_VARARGS,
   "GetNumberOfBlock(self) -> int\nC++: virtual int GetNumberOfBlock()\n\n@deprecated in v9.3, in favor of the more intuitive API\nBlockOverlap and BlockSize. Does not have any effect anymore.\n\n@see vtkTableFFT::SetBlockSize(int)@see\nvtkTableFFT::SetBlockOverlap(int)\n"},
  {"SetNumberOfBlock", PyvtkTableFFT_SetNumberOfBlock, METH_VARARGS,
   "SetNumberOfBlock(self, __a:int) -> None\nC++: virtual void SetNumberOfBlock(int)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTableFFT_Doc =
  "vtkTableFFT - FFT for table columns\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkTableFFT performs the Fast Fourier Transform on the columns of a\n"
  "table. It can perform the FFT per block : this performs something\n"
  "close to the Welch method but it uses raw FFTs instead of\n"
  "periodograms. This allows to reduce the impact of noise as well as\n"
  "speeding up the filter when the input signal is too big.\n\n"
  "It is also possible to apply a window on the input signal. If\n"
  "performing the FFT per block then the window will be applied to each\n"
  "block instead.\n\n"
  "The filter will look for a \"Time\" array (case insensitive) to\n"
  "determine the sampling frequency. \"Time\" array is considered to have\n"
  "the same frequency all along. If no \"Time\" array is found then the\n"
  "filter use the default frequency value.\n\n"
  "This filter will not apply the FFT on any arrays which names begin\n"
  "with 'vtk'.\n\n"
  "This filter will consider arrays with 2 components as arrays of\n"
  "complex numbers, the first column representing the real part and the\n"
  "second the imaginary part.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTableFFT_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkTableFFT", // tp_name
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
  PyvtkTableFFT_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableFFT_StaticNew()
{
  return vtkTableFFT::New();
}

PyObject *PyvtkTableFFT_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTableFFT_Type, PyvtkTableFFT_Methods,
    "vtkTableFFT",
 &PyvtkTableFFT_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "HANNING", vtkTableFFT::HANNING },
        { "BARTLETT", vtkTableFFT::BARTLETT },
        { "SINE", vtkTableFFT::SINE },
        { "BLACKMAN", vtkTableFFT::BLACKMAN },
        { "RECTANGULAR", vtkTableFFT::RECTANGULAR },
        { "MAX_WINDOWING_FUNCTION", vtkTableFFT::MAX_WINDOWING_FUNCTION },
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

void PyVTKAddFile_vtkTableFFT(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableFFT_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableFFT", o) != 0)
  {
    Py_DECREF(o);
  }

}

