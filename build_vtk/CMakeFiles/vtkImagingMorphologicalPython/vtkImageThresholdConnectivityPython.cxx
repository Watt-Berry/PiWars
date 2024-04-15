// python wrapper for vtkImageThresholdConnectivity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageThresholdConnectivity.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageThresholdConnectivity(PyObject *dict); }
extern "C" { PyObject *PyvtkImageThresholdConnectivity_ClassNew(); }


static PyObject *
PyvtkImageThresholdConnectivity_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageThresholdConnectivity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageThresholdConnectivity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageThresholdConnectivity *tempr = vtkImageThresholdConnectivity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageThresholdConnectivity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageThresholdConnectivity::NewInstance());

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
PyvtkImageThresholdConnectivity_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageThresholdConnectivity::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageThresholdConnectivity::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSeedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetSeedPoints(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSeedPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetSeedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetSeedPoints() :
      op->vtkImageThresholdConnectivity::GetSeedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ThresholdByUpper(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::ThresholdByUpper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ThresholdByLower(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::ThresholdByLower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ThresholdBetween(temp0, temp1);
    }
    else
    {
      op->vtkImageThresholdConnectivity::ThresholdBetween(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceIn(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetReplaceIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetReplaceIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceIn() :
      op->vtkImageThresholdConnectivity::GetReplaceIn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceInOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInOn();
    }
    else
    {
      op->vtkImageThresholdConnectivity::ReplaceInOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceInOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInOff();
    }
    else
    {
      op->vtkImageThresholdConnectivity::ReplaceInOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInValue(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetInValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetInValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInValue() :
      op->vtkImageThresholdConnectivity::GetInValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceOut(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetReplaceOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetReplaceOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceOut() :
      op->vtkImageThresholdConnectivity::GetReplaceOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceOutOn();
    }
    else
    {
      op->vtkImageThresholdConnectivity::ReplaceOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_ReplaceOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceOutOff();
    }
    else
    {
      op->vtkImageThresholdConnectivity::ReplaceOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutValue(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetOutValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetOutValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutValue() :
      op->vtkImageThresholdConnectivity::GetOutValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpperThreshold() :
      op->vtkImageThresholdConnectivity::GetUpperThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowerThreshold() :
      op->vtkImageThresholdConnectivity::GetLowerThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeX(temp0, temp1);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeX(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeX(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeX_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeX");
  return nullptr;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeX() :
      op->vtkImageThresholdConnectivity::GetSliceRangeX());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeY(temp0, temp1);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeY(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeY(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeY_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeY");
  return nullptr;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeY() :
      op->vtkImageThresholdConnectivity::GetSliceRangeY());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeZ(temp0, temp1);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeZ(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceRangeZ(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetSliceRangeZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetSliceRangeZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageThresholdConnectivity_SetSliceRangeZ_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetSliceRangeZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceRangeZ");
  return nullptr;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetSliceRangeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceRangeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSliceRangeZ() :
      op->vtkImageThresholdConnectivity::GetSliceRangeZ());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->SetStencilData(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetStencilData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageThresholdConnectivity::GetStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetActiveComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkImageThresholdConnectivity::GetActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodRadius(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetNeighborhoodRadius(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodRadius(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetNeighborhoodRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodRadius(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s1(self, args);
    case 1:
      return PyvtkImageThresholdConnectivity_SetNeighborhoodRadius_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNeighborhoodRadius");
  return nullptr;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNeighborhoodRadius() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodRadius());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_SetNeighborhoodFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodFraction(temp0);
    }
    else
    {
      op->vtkImageThresholdConnectivity::SetNeighborhoodFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFractionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFractionMinValue() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFractionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFractionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFractionMaxValue() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFractionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNeighborhoodFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNeighborhoodFraction() :
      op->vtkImageThresholdConnectivity::GetNeighborhoodFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageThresholdConnectivity::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageThresholdConnectivity_GetNumberOfInVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageThresholdConnectivity *op = static_cast<vtkImageThresholdConnectivity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfInVoxels() :
      op->vtkImageThresholdConnectivity::GetNumberOfInVoxels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageThresholdConnectivity_Methods[] = {
  {"IsTypeOf", PyvtkImageThresholdConnectivity_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageThresholdConnectivity_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageThresholdConnectivity_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageThresholdConnectivity\nC++: static vtkImageThresholdConnectivity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageThresholdConnectivity_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageThresholdConnectivity\nC++: vtkImageThresholdConnectivity *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageThresholdConnectivity_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageThresholdConnectivity_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSeedPoints", PyvtkImageThresholdConnectivity_SetSeedPoints, METH_VARARGS,
   "SetSeedPoints(self, points:vtkPoints) -> None\nC++: void SetSeedPoints(vtkPoints *points)\n\nSet the seeds.  The seeds are in real data coordinates, not in\nvoxel index locations.\n"},
  {"GetSeedPoints", PyvtkImageThresholdConnectivity_GetSeedPoints, METH_VARARGS,
   "GetSeedPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetSeedPoints()\n\n"},
  {"ThresholdByUpper", PyvtkImageThresholdConnectivity_ThresholdByUpper, METH_VARARGS,
   "ThresholdByUpper(self, thresh:float) -> None\nC++: void ThresholdByUpper(double thresh)\n\nValues greater than or equal to this threshold will be filled.\n"},
  {"ThresholdByLower", PyvtkImageThresholdConnectivity_ThresholdByLower, METH_VARARGS,
   "ThresholdByLower(self, thresh:float) -> None\nC++: void ThresholdByLower(double thresh)\n\nValues less than or equal to this threshold will be filled.\n"},
  {"ThresholdBetween", PyvtkImageThresholdConnectivity_ThresholdBetween, METH_VARARGS,
   "ThresholdBetween(self, lower:float, upper:float) -> None\nC++: void ThresholdBetween(double lower, double upper)\n\nValues within this range will be filled, where the range includes\nvalues that are exactly equal to the lower and upper thresholds.\n"},
  {"SetReplaceIn", PyvtkImageThresholdConnectivity_SetReplaceIn, METH_VARARGS,
   "SetReplaceIn(self, _arg:int) -> None\nC++: virtual void SetReplaceIn(vtkTypeBool _arg)\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"GetReplaceIn", PyvtkImageThresholdConnectivity_GetReplaceIn, METH_VARARGS,
   "GetReplaceIn(self) -> int\nC++: virtual vtkTypeBool GetReplaceIn()\n\n"},
  {"ReplaceInOn", PyvtkImageThresholdConnectivity_ReplaceInOn, METH_VARARGS,
   "ReplaceInOn(self) -> None\nC++: virtual void ReplaceInOn()\n\n"},
  {"ReplaceInOff", PyvtkImageThresholdConnectivity_ReplaceInOff, METH_VARARGS,
   "ReplaceInOff(self) -> None\nC++: virtual void ReplaceInOff()\n\n"},
  {"SetInValue", PyvtkImageThresholdConnectivity_SetInValue, METH_VARARGS,
   "SetInValue(self, val:float) -> None\nC++: void SetInValue(double val)\n\nIf ReplaceIn is set, the filled region will be replaced by this\nvalue.\n"},
  {"GetInValue", PyvtkImageThresholdConnectivity_GetInValue, METH_VARARGS,
   "GetInValue(self) -> float\nC++: virtual double GetInValue()\n\n"},
  {"SetReplaceOut", PyvtkImageThresholdConnectivity_SetReplaceOut, METH_VARARGS,
   "SetReplaceOut(self, _arg:int) -> None\nC++: virtual void SetReplaceOut(vtkTypeBool _arg)\n\nReplace the filled region by the value set by SetInValue().\n"},
  {"GetReplaceOut", PyvtkImageThresholdConnectivity_GetReplaceOut, METH_VARARGS,
   "GetReplaceOut(self) -> int\nC++: virtual vtkTypeBool GetReplaceOut()\n\n"},
  {"ReplaceOutOn", PyvtkImageThresholdConnectivity_ReplaceOutOn, METH_VARARGS,
   "ReplaceOutOn(self) -> None\nC++: virtual void ReplaceOutOn()\n\n"},
  {"ReplaceOutOff", PyvtkImageThresholdConnectivity_ReplaceOutOff, METH_VARARGS,
   "ReplaceOutOff(self) -> None\nC++: virtual void ReplaceOutOff()\n\n"},
  {"SetOutValue", PyvtkImageThresholdConnectivity_SetOutValue, METH_VARARGS,
   "SetOutValue(self, val:float) -> None\nC++: void SetOutValue(double val)\n\nIf ReplaceOut is set, outside the fill will be replaced by this\nvalue.\n"},
  {"GetOutValue", PyvtkImageThresholdConnectivity_GetOutValue, METH_VARARGS,
   "GetOutValue(self) -> float\nC++: virtual double GetOutValue()\n\n"},
  {"GetUpperThreshold", PyvtkImageThresholdConnectivity_GetUpperThreshold, METH_VARARGS,
   "GetUpperThreshold(self) -> float\nC++: virtual double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {"GetLowerThreshold", PyvtkImageThresholdConnectivity_GetLowerThreshold, METH_VARARGS,
   "GetLowerThreshold(self) -> float\nC++: virtual double GetLowerThreshold()\n\n"},
  {"SetSliceRangeX", PyvtkImageThresholdConnectivity_SetSliceRangeX, METH_VARARGS,
   "SetSliceRangeX(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSliceRangeX(int _arg1, int _arg2)\nSetSliceRangeX(self, _arg:(int, int)) -> None\nC++: void SetSliceRangeX(const int _arg[2])\n\nLimit the flood to a range of slices in the specified direction.\n"},
  {"GetSliceRangeX", PyvtkImageThresholdConnectivity_GetSliceRangeX, METH_VARARGS,
   "GetSliceRangeX(self) -> (int, int)\nC++: virtual int *GetSliceRangeX()\n\n"},
  {"SetSliceRangeY", PyvtkImageThresholdConnectivity_SetSliceRangeY, METH_VARARGS,
   "SetSliceRangeY(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSliceRangeY(int _arg1, int _arg2)\nSetSliceRangeY(self, _arg:(int, int)) -> None\nC++: void SetSliceRangeY(const int _arg[2])\n\n"},
  {"GetSliceRangeY", PyvtkImageThresholdConnectivity_GetSliceRangeY, METH_VARARGS,
   "GetSliceRangeY(self) -> (int, int)\nC++: virtual int *GetSliceRangeY()\n\n"},
  {"SetSliceRangeZ", PyvtkImageThresholdConnectivity_SetSliceRangeZ, METH_VARARGS,
   "SetSliceRangeZ(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSliceRangeZ(int _arg1, int _arg2)\nSetSliceRangeZ(self, _arg:(int, int)) -> None\nC++: void SetSliceRangeZ(const int _arg[2])\n\n"},
  {"GetSliceRangeZ", PyvtkImageThresholdConnectivity_GetSliceRangeZ, METH_VARARGS,
   "GetSliceRangeZ(self) -> (int, int)\nC++: virtual int *GetSliceRangeZ()\n\n"},
  {"SetStencilData", PyvtkImageThresholdConnectivity_SetStencilData, METH_VARARGS,
   "SetStencilData(self, stencil:vtkImageStencilData) -> None\nC++: virtual void SetStencilData(vtkImageStencilData *stencil)\n\nSpecify a stencil that will be used to limit the flood fill to an\narbitrarily-shaped region of the image.\n"},
  {"GetStencil", PyvtkImageThresholdConnectivity_GetStencil, METH_VARARGS,
   "GetStencil(self) -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\n"},
  {"SetActiveComponent", PyvtkImageThresholdConnectivity_SetActiveComponent, METH_VARARGS,
   "SetActiveComponent(self, _arg:int) -> None\nC++: virtual void SetActiveComponent(int _arg)\n\nFor multi-component images, you can set which component will be\nused for the threshold checks.\n"},
  {"GetActiveComponent", PyvtkImageThresholdConnectivity_GetActiveComponent, METH_VARARGS,
   "GetActiveComponent(self) -> int\nC++: virtual int GetActiveComponent()\n\n"},
  {"SetNeighborhoodRadius", PyvtkImageThresholdConnectivity_SetNeighborhoodRadius, METH_VARARGS,
   "SetNeighborhoodRadius(self, _arg1:float, _arg2:float, _arg3:float)\n     -> None\nC++: virtual void SetNeighborhoodRadius(double _arg1,\n    double _arg2, double _arg3)\nSetNeighborhoodRadius(self, _arg:(float, float, float)) -> None\nC++: virtual void SetNeighborhoodRadius(const double _arg[3])\n\nThe radius of the neighborhood that must be within the threshold\nvalues in order for the voxel to be included in the mask.  The\ndefault radius is zero (one single voxel).  The radius is\nmeasured in voxels.\n"},
  {"GetNeighborhoodRadius", PyvtkImageThresholdConnectivity_GetNeighborhoodRadius, METH_VARARGS,
   "GetNeighborhoodRadius(self) -> (float, float, float)\nC++: virtual double *GetNeighborhoodRadius()\n\n"},
  {"SetNeighborhoodFraction", PyvtkImageThresholdConnectivity_SetNeighborhoodFraction, METH_VARARGS,
   "SetNeighborhoodFraction(self, _arg:float) -> None\nC++: virtual void SetNeighborhoodFraction(double _arg)\n\nThe fraction of the neighborhood that must be within the\nthresholds. The default value is 0.5.\n"},
  {"GetNeighborhoodFractionMinValue", PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMinValue, METH_VARARGS,
   "GetNeighborhoodFractionMinValue(self) -> float\nC++: virtual double GetNeighborhoodFractionMinValue()\n\n"},
  {"GetNeighborhoodFractionMaxValue", PyvtkImageThresholdConnectivity_GetNeighborhoodFractionMaxValue, METH_VARARGS,
   "GetNeighborhoodFractionMaxValue(self) -> float\nC++: virtual double GetNeighborhoodFractionMaxValue()\n\n"},
  {"GetNeighborhoodFraction", PyvtkImageThresholdConnectivity_GetNeighborhoodFraction, METH_VARARGS,
   "GetNeighborhoodFraction(self) -> float\nC++: virtual double GetNeighborhoodFraction()\n\n"},
  {"GetMTime", PyvtkImageThresholdConnectivity_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride the MTime to account for the seed points.\n"},
  {"GetNumberOfInVoxels", PyvtkImageThresholdConnectivity_GetNumberOfInVoxels, METH_VARARGS,
   "GetNumberOfInVoxels(self) -> int\nC++: virtual int GetNumberOfInVoxels()\n\nAfter the filter has executed, use GetNumberOfVoxels() to find\nout how many voxels were filled.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageThresholdConnectivity_Doc =
  "vtkImageThresholdConnectivity - Flood fill an image region.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageThresholdConnectivity will perform a flood fill on an image,\n"
  "given upper and lower pixel intensity thresholds. It works similarly\n"
  "to vtkImageThreshold, but also allows the user to set seed points to\n"
  "limit the threshold operation to contiguous regions of the image. The\n"
  "filled region, or the \"inside\", will be passed through to the output\n"
  "by default, while the \"outside\" will be replaced with zeros. This\n"
  "behavior can be changed by using the ReplaceIn() and ReplaceOut()\n"
  "methods.  The scalar type of the output is the same as the input.\n"
  "@sa\n"
  "vtkImageThreshold@par Thanks: Thanks to David Gobbi for contributing\n"
  "this class to VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageThresholdConnectivity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageThresholdConnectivity", // tp_name
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
  PyvtkImageThresholdConnectivity_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageThresholdConnectivity_StaticNew()
{
  return vtkImageThresholdConnectivity::New();
}

PyObject *PyvtkImageThresholdConnectivity_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageThresholdConnectivity_Type, PyvtkImageThresholdConnectivity_Methods,
    "vtkImageThresholdConnectivity",
 &PyvtkImageThresholdConnectivity_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageThresholdConnectivity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageThresholdConnectivity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageThresholdConnectivity", o) != 0)
  {
    Py_DECREF(o);
  }

}

