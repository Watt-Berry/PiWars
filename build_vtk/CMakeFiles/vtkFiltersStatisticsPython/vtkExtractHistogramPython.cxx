// python wrapper for vtkExtractHistogram
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractHistogram.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractHistogram(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractHistogram_ClassNew(); }


static PyObject *
PyvtkExtractHistogram_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractHistogram::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractHistogram::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractHistogram *tempr = vtkExtractHistogram::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractHistogram *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractHistogram::NewInstance());

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
PyvtkExtractHistogram_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractHistogram::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractHistogram::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkExtractHistogram::GetComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkExtractHistogram::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkExtractHistogram::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinCount(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetBinCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCountMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCountMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinCountMinValue() :
      op->vtkExtractHistogram::GetBinCountMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCountMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCountMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinCountMaxValue() :
      op->vtkExtractHistogram::GetBinCountMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinCount() :
      op->vtkExtractHistogram::GetBinCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetCenterBinsAroundMinAndMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterBinsAroundMinAndMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenterBinsAroundMinAndMax(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetCenterBinsAroundMinAndMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetCenterBinsAroundMinAndMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterBinsAroundMinAndMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCenterBinsAroundMinAndMax() :
      op->vtkExtractHistogram::GetCenterBinsAroundMinAndMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CenterBinsAroundMinAndMaxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterBinsAroundMinAndMaxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterBinsAroundMinAndMaxOn();
    }
    else
    {
      op->vtkExtractHistogram::CenterBinsAroundMinAndMaxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CenterBinsAroundMinAndMaxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterBinsAroundMinAndMaxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CenterBinsAroundMinAndMaxOff();
    }
    else
    {
      op->vtkExtractHistogram::CenterBinsAroundMinAndMaxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCustomBinRanges(temp0, temp1);
    }
    else
    {
      op->vtkExtractHistogram::SetCustomBinRanges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomBinRanges(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetCustomBinRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractHistogram_SetCustomBinRanges(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExtractHistogram_SetCustomBinRanges_s1(self, args);
    case 1:
      return PyvtkExtractHistogram_SetCustomBinRanges_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomBinRanges");
  return nullptr;
}


static PyObject *
PyvtkExtractHistogram_GetCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomBinRanges() :
      op->vtkExtractHistogram::GetCustomBinRanges());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomBinRanges(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetUseCustomBinRanges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetUseCustomBinRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomBinRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomBinRanges() :
      op->vtkExtractHistogram::GetUseCustomBinRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_UseCustomBinRangesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomBinRangesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomBinRangesOn();
    }
    else
    {
      op->vtkExtractHistogram::UseCustomBinRangesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_UseCustomBinRangesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomBinRangesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomBinRangesOff();
    }
    else
    {
      op->vtkExtractHistogram::UseCustomBinRangesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetCalculateAverages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateAverages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateAverages(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetCalculateAverages(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetCalculateAverages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateAverages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateAverages() :
      op->vtkExtractHistogram::GetCalculateAverages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CalculateAveragesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateAveragesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateAveragesOn();
    }
    else
    {
      op->vtkExtractHistogram::CalculateAveragesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_CalculateAveragesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateAveragesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateAveragesOff();
    }
    else
    {
      op->vtkExtractHistogram::CalculateAveragesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetBinExtentsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinExtentsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinExtentsArrayName(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetBinExtentsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinExtentsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinExtentsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBinExtentsArrayName() :
      op->vtkExtractHistogram::GetBinExtentsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetBinValuesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinValuesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinValuesArrayName(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetBinValuesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinValuesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinValuesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBinValuesArrayName() :
      op->vtkExtractHistogram::GetBinValuesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

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
      op->vtkExtractHistogram::SetNormalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_NormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeOn();
    }
    else
    {
      op->vtkExtractHistogram::NormalizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_NormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeOff();
    }
    else
    {
      op->vtkExtractHistogram::NormalizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNormalize() :
      op->vtkExtractHistogram::GetNormalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetAccumulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulation(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetAccumulation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_AccumulationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AccumulationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AccumulationOn();
    }
    else
    {
      op->vtkExtractHistogram::AccumulationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_AccumulationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AccumulationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AccumulationOff();
    }
    else
    {
      op->vtkExtractHistogram::AccumulationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetAccumulation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAccumulation() :
      op->vtkExtractHistogram::GetAccumulation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_SetBinAccumulationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinAccumulationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinAccumulationArrayName(temp0);
    }
    else
    {
      op->vtkExtractHistogram::SetBinAccumulationArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinAccumulationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinAccumulationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBinAccumulationArrayName() :
      op->vtkExtractHistogram::GetBinAccumulationArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHistogram_GetBinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHistogram *op = static_cast<vtkExtractHistogram *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBinRange() :
      op->vtkExtractHistogram::GetBinRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractHistogram_Methods[] = {
  {"IsTypeOf", PyvtkExtractHistogram_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractHistogram_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractHistogram_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractHistogram\nC++: static vtkExtractHistogram *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractHistogram_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractHistogram\nC++: vtkExtractHistogram *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractHistogram_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractHistogram_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetComponent", PyvtkExtractHistogram_SetComponent, METH_VARARGS,
   "SetComponent(self, _arg:int) -> None\nC++: virtual void SetComponent(int _arg)\n\nControls which input data component should be binned, for input\narrays with more-than-one component.  Setting this to the number\nof components will compute the histogram of the magnitude (L2\nnorm) of the tuple. Default is 0.\n"},
  {"GetComponentMinValue", PyvtkExtractHistogram_GetComponentMinValue, METH_VARARGS,
   "GetComponentMinValue(self) -> int\nC++: virtual int GetComponentMinValue()\n\n"},
  {"GetComponentMaxValue", PyvtkExtractHistogram_GetComponentMaxValue, METH_VARARGS,
   "GetComponentMaxValue(self) -> int\nC++: virtual int GetComponentMaxValue()\n\n"},
  {"GetComponent", PyvtkExtractHistogram_GetComponent, METH_VARARGS,
   "GetComponent(self) -> int\nC++: virtual int GetComponent()\n\n"},
  {"SetBinCount", PyvtkExtractHistogram_SetBinCount, METH_VARARGS,
   "SetBinCount(self, _arg:int) -> None\nC++: virtual void SetBinCount(int _arg)\n\nControls the number of bins N in the output histogram data.\nDefault is 10.\n"},
  {"GetBinCountMinValue", PyvtkExtractHistogram_GetBinCountMinValue, METH_VARARGS,
   "GetBinCountMinValue(self) -> int\nC++: virtual int GetBinCountMinValue()\n\n"},
  {"GetBinCountMaxValue", PyvtkExtractHistogram_GetBinCountMaxValue, METH_VARARGS,
   "GetBinCountMaxValue(self) -> int\nC++: virtual int GetBinCountMaxValue()\n\n"},
  {"GetBinCount", PyvtkExtractHistogram_GetBinCount, METH_VARARGS,
   "GetBinCount(self) -> int\nC++: virtual int GetBinCount()\n\n"},
  {"SetCenterBinsAroundMinAndMax", PyvtkExtractHistogram_SetCenterBinsAroundMinAndMax, METH_VARARGS,
   "SetCenterBinsAroundMinAndMax(self, _arg:bool) -> None\nC++: virtual void SetCenterBinsAroundMinAndMax(bool _arg)\n\nGet/Set if first and last bins must be centered around the min\nand max data. This is only used when UseCustomBinRanges is set to\nfalse. Default is false.\n"},
  {"GetCenterBinsAroundMinAndMax", PyvtkExtractHistogram_GetCenterBinsAroundMinAndMax, METH_VARARGS,
   "GetCenterBinsAroundMinAndMax(self) -> bool\nC++: virtual bool GetCenterBinsAroundMinAndMax()\n\n"},
  {"CenterBinsAroundMinAndMaxOn", PyvtkExtractHistogram_CenterBinsAroundMinAndMaxOn, METH_VARARGS,
   "CenterBinsAroundMinAndMaxOn(self) -> None\nC++: virtual void CenterBinsAroundMinAndMaxOn()\n\n"},
  {"CenterBinsAroundMinAndMaxOff", PyvtkExtractHistogram_CenterBinsAroundMinAndMaxOff, METH_VARARGS,
   "CenterBinsAroundMinAndMaxOff(self) -> None\nC++: virtual void CenterBinsAroundMinAndMaxOff()\n\n"},
  {"SetCustomBinRanges", PyvtkExtractHistogram_SetCustomBinRanges, METH_VARARGS,
   "SetCustomBinRanges(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetCustomBinRanges(double _arg1, double _arg2)\nSetCustomBinRanges(self, _arg:(float, float)) -> None\nC++: void SetCustomBinRanges(const double _arg[2])\n\nGet/Set custom bin range to use. These are used only when\nUseCustomBinRanges is set to true. Default is [0, 100].\n"},
  {"GetCustomBinRanges", PyvtkExtractHistogram_GetCustomBinRanges, METH_VARARGS,
   "GetCustomBinRanges(self) -> (float, float)\nC++: virtual double *GetCustomBinRanges()\n\n"},
  {"SetUseCustomBinRanges", PyvtkExtractHistogram_SetUseCustomBinRanges, METH_VARARGS,
   "SetUseCustomBinRanges(self, _arg:bool) -> None\nC++: virtual void SetUseCustomBinRanges(bool _arg)\n\nWhen set to true, CustomBinRanges will  be used instead of using\nthe full range for the selected array. Default is false.\n"},
  {"GetUseCustomBinRanges", PyvtkExtractHistogram_GetUseCustomBinRanges, METH_VARARGS,
   "GetUseCustomBinRanges(self) -> bool\nC++: virtual bool GetUseCustomBinRanges()\n\n"},
  {"UseCustomBinRangesOn", PyvtkExtractHistogram_UseCustomBinRangesOn, METH_VARARGS,
   "UseCustomBinRangesOn(self) -> None\nC++: virtual void UseCustomBinRangesOn()\n\n"},
  {"UseCustomBinRangesOff", PyvtkExtractHistogram_UseCustomBinRangesOff, METH_VARARGS,
   "UseCustomBinRangesOff(self) -> None\nC++: virtual void UseCustomBinRangesOff()\n\n"},
  {"SetCalculateAverages", PyvtkExtractHistogram_SetCalculateAverages, METH_VARARGS,
   "SetCalculateAverages(self, _arg:bool) -> None\nC++: virtual void SetCalculateAverages(bool _arg)\n\nThis option controls whether the algorithm calculates averages of\nvariables other than the primary variable that fall into each\nbin. Default is false.\n"},
  {"GetCalculateAverages", PyvtkExtractHistogram_GetCalculateAverages, METH_VARARGS,
   "GetCalculateAverages(self) -> bool\nC++: virtual bool GetCalculateAverages()\n\n"},
  {"CalculateAveragesOn", PyvtkExtractHistogram_CalculateAveragesOn, METH_VARARGS,
   "CalculateAveragesOn(self) -> None\nC++: virtual void CalculateAveragesOn()\n\n"},
  {"CalculateAveragesOff", PyvtkExtractHistogram_CalculateAveragesOff, METH_VARARGS,
   "CalculateAveragesOff(self) -> None\nC++: virtual void CalculateAveragesOff()\n\n"},
  {"SetBinExtentsArrayName", PyvtkExtractHistogram_SetBinExtentsArrayName, METH_VARARGS,
   "SetBinExtentsArrayName(self, _arg:str) -> None\nC++: virtual void SetBinExtentsArrayName(const char *_arg)\n\nSet/Get the name of the bin extents array. Default is\n\"bin_extents\".\n"},
  {"GetBinExtentsArrayName", PyvtkExtractHistogram_GetBinExtentsArrayName, METH_VARARGS,
   "GetBinExtentsArrayName(self) -> str\nC++: virtual char *GetBinExtentsArrayName()\n\n"},
  {"SetBinValuesArrayName", PyvtkExtractHistogram_SetBinValuesArrayName, METH_VARARGS,
   "SetBinValuesArrayName(self, _arg:str) -> None\nC++: virtual void SetBinValuesArrayName(const char *_arg)\n\nSet/Get the name of the bin values array. Default is\n\"bin_values\".\n"},
  {"GetBinValuesArrayName", PyvtkExtractHistogram_GetBinValuesArrayName, METH_VARARGS,
   "GetBinValuesArrayName(self) -> str\nC++: virtual char *GetBinValuesArrayName()\n\n"},
  {"SetNormalize", PyvtkExtractHistogram_SetNormalize, METH_VARARGS,
   "SetNormalize(self, _arg:bool) -> None\nC++: virtual void SetNormalize(bool _arg)\n\nIf this option is set then the bin values will be normalized so\nthat the sum of the bin values adds up to 1.0. Default is false.\n"},
  {"NormalizeOn", PyvtkExtractHistogram_NormalizeOn, METH_VARARGS,
   "NormalizeOn(self) -> None\nC++: virtual void NormalizeOn()\n\n"},
  {"NormalizeOff", PyvtkExtractHistogram_NormalizeOff, METH_VARARGS,
   "NormalizeOff(self) -> None\nC++: virtual void NormalizeOff()\n\n"},
  {"GetNormalize", PyvtkExtractHistogram_GetNormalize, METH_VARARGS,
   "GetNormalize(self) -> bool\nC++: virtual bool GetNormalize()\n\n"},
  {"SetAccumulation", PyvtkExtractHistogram_SetAccumulation, METH_VARARGS,
   "SetAccumulation(self, _arg:bool) -> None\nC++: virtual void SetAccumulation(bool _arg)\n\nIf this option is set to true then the output table will contain\nan additional column with accumulated bin values. Default is\nfalse.\n"},
  {"AccumulationOn", PyvtkExtractHistogram_AccumulationOn, METH_VARARGS,
   "AccumulationOn(self) -> None\nC++: virtual void AccumulationOn()\n\n"},
  {"AccumulationOff", PyvtkExtractHistogram_AccumulationOff, METH_VARARGS,
   "AccumulationOff(self) -> None\nC++: virtual void AccumulationOff()\n\n"},
  {"GetAccumulation", PyvtkExtractHistogram_GetAccumulation, METH_VARARGS,
   "GetAccumulation(self) -> bool\nC++: virtual bool GetAccumulation()\n\n"},
  {"SetBinAccumulationArrayName", PyvtkExtractHistogram_SetBinAccumulationArrayName, METH_VARARGS,
   "SetBinAccumulationArrayName(self, _arg:str) -> None\nC++: virtual void SetBinAccumulationArrayName(const char *_arg)\n\nSet/Get the name of the optional bin accumulation array. Default\nis \"bin_accumulation\".\n"},
  {"GetBinAccumulationArrayName", PyvtkExtractHistogram_GetBinAccumulationArrayName, METH_VARARGS,
   "GetBinAccumulationArrayName(self) -> str\nC++: virtual char *GetBinAccumulationArrayName()\n\n"},
  {"GetBinRange", PyvtkExtractHistogram_GetBinRange, METH_VARARGS,
   "GetBinRange(self) -> (float, float)\nC++: virtual double *GetBinRange()\n\nGet the bin range which was used to create the bin extents.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractHistogram_Doc =
  "vtkExtractHistogram - Extract histogram data (binned values) from any\ndataset\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkExtractHistogram accepts any vtkDataSet as input and produces a\n"
  "vtkTable containing histogram data as output.  The output vtkTable\n"
  "will contains a vtkDoubleArray named \"bin_extents\" which contains the\n"
  "boundaries between each histogram bin, and a vtkUnsignedLongArray\n"
  "named \"bin_values\" which will contain the value for each bin.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractHistogram_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkExtractHistogram", // tp_name
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
  PyvtkExtractHistogram_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractHistogram_StaticNew()
{
  return vtkExtractHistogram::New();
}

PyObject *PyvtkExtractHistogram_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractHistogram_Type, PyvtkExtractHistogram_Methods,
    "vtkExtractHistogram",
 &PyvtkExtractHistogram_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractHistogram(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractHistogram_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractHistogram", o) != 0)
  {
    Py_DECREF(o);
  }

}

