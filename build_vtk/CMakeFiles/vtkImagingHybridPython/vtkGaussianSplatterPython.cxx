// python wrapper for vtkGaussianSplatter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGaussianSplatter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGaussianSplatter(PyObject *dict); }
extern "C" { PyObject *PyvtkGaussianSplatter_ClassNew(); }


static PyObject *
PyvtkGaussianSplatter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGaussianSplatter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGaussianSplatter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGaussianSplatter *tempr = vtkGaussianSplatter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGaussianSplatter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGaussianSplatter::NewInstance());

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
PyvtkGaussianSplatter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGaussianSplatter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGaussianSplatter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

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
      op->vtkGaussianSplatter::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGaussianSplatter_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

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
      op->vtkGaussianSplatter::SetSampleDimensions(temp0);
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
PyvtkGaussianSplatter_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGaussianSplatter_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkGaussianSplatter_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}


static PyObject *
PyvtkGaussianSplatter_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkGaussianSplatter::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

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
      op->vtkGaussianSplatter::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGaussianSplatter_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

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
      op->vtkGaussianSplatter::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGaussianSplatter_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGaussianSplatter_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkGaussianSplatter_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}


static PyObject *
PyvtkGaussianSplatter_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkGaussianSplatter::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

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
      op->vtkGaussianSplatter::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkGaussianSplatter::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkGaussianSplatter::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkGaussianSplatter::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetScaleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactorMinValue() :
      op->vtkGaussianSplatter::GetScaleFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetScaleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactorMaxValue() :
      op->vtkGaussianSplatter::GetScaleFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkGaussianSplatter::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetExponentFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExponentFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExponentFactor(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetExponentFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetExponentFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExponentFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExponentFactor() :
      op->vtkGaussianSplatter::GetExponentFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetNormalWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalWarping(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetNormalWarping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetNormalWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalWarping() :
      op->vtkGaussianSplatter::GetNormalWarping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_NormalWarpingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalWarpingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalWarpingOn();
    }
    else
    {
      op->vtkGaussianSplatter::NormalWarpingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_NormalWarpingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalWarpingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalWarpingOff();
    }
    else
    {
      op->vtkGaussianSplatter::NormalWarpingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetEccentricity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEccentricity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEccentricity(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetEccentricity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetEccentricityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricityMinValue() :
      op->vtkGaussianSplatter::GetEccentricityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetEccentricityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricityMaxValue() :
      op->vtkGaussianSplatter::GetEccentricityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetEccentricity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricity() :
      op->vtkGaussianSplatter::GetEccentricity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetScalarWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarWarping(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetScalarWarping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetScalarWarping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarWarping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarWarping() :
      op->vtkGaussianSplatter::GetScalarWarping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_ScalarWarpingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarWarpingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarWarpingOn();
    }
    else
    {
      op->vtkGaussianSplatter::ScalarWarpingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_ScalarWarpingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarWarpingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarWarpingOff();
    }
    else
    {
      op->vtkGaussianSplatter::ScalarWarpingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkGaussianSplatter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkGaussianSplatter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkGaussianSplatter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapValue(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetCapValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetCapValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCapValue() :
      op->vtkGaussianSplatter::GetCapValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetAccumulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulationMode(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetAccumulationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetAccumulationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccumulationModeMinValue() :
      op->vtkGaussianSplatter::GetAccumulationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetAccumulationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccumulationModeMaxValue() :
      op->vtkGaussianSplatter::GetAccumulationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetAccumulationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccumulationMode() :
      op->vtkGaussianSplatter::GetAccumulationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetAccumulationModeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulationModeToMin();
    }
    else
    {
      op->vtkGaussianSplatter::SetAccumulationModeToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetAccumulationModeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulationModeToMax();
    }
    else
    {
      op->vtkGaussianSplatter::SetAccumulationModeToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetAccumulationModeToSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulationModeToSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulationModeToSum();
    }
    else
    {
      op->vtkGaussianSplatter::SetAccumulationModeToSum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetAccumulationModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulationModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAccumulationModeAsString() :
      op->vtkGaussianSplatter::GetAccumulationModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNullValue(temp0);
    }
    else
    {
      op->vtkGaussianSplatter::SetNullValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_GetNullValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNullValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNullValue() :
      op->vtkGaussianSplatter::GetNullValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_ComputeModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->ComputeModelBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGaussianSplatter::ComputeModelBounds(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGaussianSplatter_ComputeModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  vtkCompositeDataSet *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->ComputeModelBounds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGaussianSplatter::ComputeModelBounds(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGaussianSplatter_ComputeModelBounds_Methods[] = {
  {"ComputeModelBounds", PyvtkGaussianSplatter_ComputeModelBounds_s1, METH_VARARGS,
   "@VVV *vtkDataSet *vtkImageData *vtkInformation"},
  {"ComputeModelBounds", PyvtkGaussianSplatter_ComputeModelBounds_s2, METH_VARARGS,
   "@VVV *vtkCompositeDataSet *vtkImageData *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGaussianSplatter_ComputeModelBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGaussianSplatter_ComputeModelBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeModelBounds");
  return nullptr;
}


static PyObject *
PyvtkGaussianSplatter_SamplePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SamplePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->SamplePoint(temp0) :
      op->vtkGaussianSplatter::SamplePoint(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianSplatter_SetScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianSplatter *op = static_cast<vtkGaussianSplatter *>(vp);

  long long temp0;
  double temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->SetScalar(temp0, temp1, temp2);
    }
    else
    {
      op->vtkGaussianSplatter::SetScalar(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGaussianSplatter_Methods[] = {
  {"IsTypeOf", PyvtkGaussianSplatter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGaussianSplatter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGaussianSplatter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGaussianSplatter\nC++: static vtkGaussianSplatter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGaussianSplatter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGaussianSplatter\nC++: vtkGaussianSplatter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGaussianSplatter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGaussianSplatter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSampleDimensions", PyvtkGaussianSplatter_SetSampleDimensions, METH_VARARGS,
   "SetSampleDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetSampleDimensions(int i, int j, int k)\nSetSampleDimensions(self, dim:[int, int, int]) -> None\nC++: void SetSampleDimensions(int dim[3])\n\nSet / get the dimensions of the sampling structured point set.\nHigher values produce better results but are much slower.\n"},
  {"GetSampleDimensions", PyvtkGaussianSplatter_GetSampleDimensions, METH_VARARGS,
   "GetSampleDimensions(self) -> (int, int, int)\nC++: virtual int *GetSampleDimensions()\n\n"},
  {"SetModelBounds", PyvtkGaussianSplatter_SetModelBounds, METH_VARARGS,
   "SetModelBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetModelBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetModelBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetModelBounds(const double _arg[6])\n\nSet / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in\nwhich the sampling is performed. If any of the (min,max) bounds\nvalues are min >= max, then the bounds will be computed\nautomatically from the input data. Otherwise, the user-specified\nbounds will be used.\n"},
  {"GetModelBounds", PyvtkGaussianSplatter_GetModelBounds, METH_VARARGS,
   "GetModelBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetModelBounds()\n\n"},
  {"SetRadius", PyvtkGaussianSplatter_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet / get the radius of propagation of the splat. This value is\nexpressed as a percentage of the length of the longest side of\nthe sampling volume. Smaller numbers greatly reduce execution\ntime.\n"},
  {"GetRadiusMinValue", PyvtkGaussianSplatter_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkGaussianSplatter_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkGaussianSplatter_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetScaleFactor", PyvtkGaussianSplatter_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nMultiply Gaussian splat distribution by this value. If\nScalarWarping is on, then the Scalar value will be multiplied by\nthe ScaleFactor times the Gaussian function.\n"},
  {"GetScaleFactorMinValue", PyvtkGaussianSplatter_GetScaleFactorMinValue, METH_VARARGS,
   "GetScaleFactorMinValue(self) -> float\nC++: virtual double GetScaleFactorMinValue()\n\n"},
  {"GetScaleFactorMaxValue", PyvtkGaussianSplatter_GetScaleFactorMaxValue, METH_VARARGS,
   "GetScaleFactorMaxValue(self) -> float\nC++: virtual double GetScaleFactorMaxValue()\n\n"},
  {"GetScaleFactor", PyvtkGaussianSplatter_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetExponentFactor", PyvtkGaussianSplatter_SetExponentFactor, METH_VARARGS,
   "SetExponentFactor(self, _arg:float) -> None\nC++: virtual void SetExponentFactor(double _arg)\n\nSet / get the sharpness of decay of the splats. This is the\nexponent constant in the Gaussian equation. Normally this is a\nnegative value.\n"},
  {"GetExponentFactor", PyvtkGaussianSplatter_GetExponentFactor, METH_VARARGS,
   "GetExponentFactor(self) -> float\nC++: virtual double GetExponentFactor()\n\n"},
  {"SetNormalWarping", PyvtkGaussianSplatter_SetNormalWarping, METH_VARARGS,
   "SetNormalWarping(self, _arg:int) -> None\nC++: virtual void SetNormalWarping(vtkTypeBool _arg)\n\nTurn on/off the generation of elliptical splats. If normal\nwarping is on, then the input normals affect the distribution of\nthe splat. This boolean is used in combination with the\nEccentricity ivar.\n"},
  {"GetNormalWarping", PyvtkGaussianSplatter_GetNormalWarping, METH_VARARGS,
   "GetNormalWarping(self) -> int\nC++: virtual vtkTypeBool GetNormalWarping()\n\n"},
  {"NormalWarpingOn", PyvtkGaussianSplatter_NormalWarpingOn, METH_VARARGS,
   "NormalWarpingOn(self) -> None\nC++: virtual void NormalWarpingOn()\n\n"},
  {"NormalWarpingOff", PyvtkGaussianSplatter_NormalWarpingOff, METH_VARARGS,
   "NormalWarpingOff(self) -> None\nC++: virtual void NormalWarpingOff()\n\n"},
  {"SetEccentricity", PyvtkGaussianSplatter_SetEccentricity, METH_VARARGS,
   "SetEccentricity(self, _arg:float) -> None\nC++: virtual void SetEccentricity(double _arg)\n\nControl the shape of elliptical splatting. Eccentricity is the\nratio of the major axis (aligned along normal) to the minor\n(axes) aligned along other two axes. So Eccentricity > 1 creates\nneedles with the long axis in the direction of the normal;\nEccentricity<1 creates pancakes perpendicular to the normal\nvector.\n"},
  {"GetEccentricityMinValue", PyvtkGaussianSplatter_GetEccentricityMinValue, METH_VARARGS,
   "GetEccentricityMinValue(self) -> float\nC++: virtual double GetEccentricityMinValue()\n\n"},
  {"GetEccentricityMaxValue", PyvtkGaussianSplatter_GetEccentricityMaxValue, METH_VARARGS,
   "GetEccentricityMaxValue(self) -> float\nC++: virtual double GetEccentricityMaxValue()\n\n"},
  {"GetEccentricity", PyvtkGaussianSplatter_GetEccentricity, METH_VARARGS,
   "GetEccentricity(self) -> float\nC++: virtual double GetEccentricity()\n\n"},
  {"SetScalarWarping", PyvtkGaussianSplatter_SetScalarWarping, METH_VARARGS,
   "SetScalarWarping(self, _arg:int) -> None\nC++: virtual void SetScalarWarping(vtkTypeBool _arg)\n\nTurn on/off the scaling of splats by scalar value.\n"},
  {"GetScalarWarping", PyvtkGaussianSplatter_GetScalarWarping, METH_VARARGS,
   "GetScalarWarping(self) -> int\nC++: virtual vtkTypeBool GetScalarWarping()\n\n"},
  {"ScalarWarpingOn", PyvtkGaussianSplatter_ScalarWarpingOn, METH_VARARGS,
   "ScalarWarpingOn(self) -> None\nC++: virtual void ScalarWarpingOn()\n\n"},
  {"ScalarWarpingOff", PyvtkGaussianSplatter_ScalarWarpingOff, METH_VARARGS,
   "ScalarWarpingOff(self) -> None\nC++: virtual void ScalarWarpingOff()\n\n"},
  {"SetCapping", PyvtkGaussianSplatter_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:int) -> None\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off the capping of the outer boundary of the volume to a\nspecified cap value. This can be used to close surfaces (after\niso-surfacing) and create other effects.\n"},
  {"GetCapping", PyvtkGaussianSplatter_GetCapping, METH_VARARGS,
   "GetCapping(self) -> int\nC++: virtual vtkTypeBool GetCapping()\n\n"},
  {"CappingOn", PyvtkGaussianSplatter_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkGaussianSplatter_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"SetCapValue", PyvtkGaussianSplatter_SetCapValue, METH_VARARGS,
   "SetCapValue(self, _arg:float) -> None\nC++: virtual void SetCapValue(double _arg)\n\nSpecify the cap value to use. (This instance variable only has\neffect if the ivar Capping is on.)\n"},
  {"GetCapValue", PyvtkGaussianSplatter_GetCapValue, METH_VARARGS,
   "GetCapValue(self) -> float\nC++: virtual double GetCapValue()\n\n"},
  {"SetAccumulationMode", PyvtkGaussianSplatter_SetAccumulationMode, METH_VARARGS,
   "SetAccumulationMode(self, _arg:int) -> None\nC++: virtual void SetAccumulationMode(int _arg)\n\nSpecify the scalar accumulation mode. This mode expresses how\nscalar values are combined when splats are overlapped. The Max\nmode acts like a set union operation and is the most commonly\nused; the Min mode acts like a set intersection, and the sum is\njust weird.\n"},
  {"GetAccumulationModeMinValue", PyvtkGaussianSplatter_GetAccumulationModeMinValue, METH_VARARGS,
   "GetAccumulationModeMinValue(self) -> int\nC++: virtual int GetAccumulationModeMinValue()\n\n"},
  {"GetAccumulationModeMaxValue", PyvtkGaussianSplatter_GetAccumulationModeMaxValue, METH_VARARGS,
   "GetAccumulationModeMaxValue(self) -> int\nC++: virtual int GetAccumulationModeMaxValue()\n\n"},
  {"GetAccumulationMode", PyvtkGaussianSplatter_GetAccumulationMode, METH_VARARGS,
   "GetAccumulationMode(self) -> int\nC++: virtual int GetAccumulationMode()\n\n"},
  {"SetAccumulationModeToMin", PyvtkGaussianSplatter_SetAccumulationModeToMin, METH_VARARGS,
   "SetAccumulationModeToMin(self) -> None\nC++: void SetAccumulationModeToMin()\n\n"},
  {"SetAccumulationModeToMax", PyvtkGaussianSplatter_SetAccumulationModeToMax, METH_VARARGS,
   "SetAccumulationModeToMax(self) -> None\nC++: void SetAccumulationModeToMax()\n\n"},
  {"SetAccumulationModeToSum", PyvtkGaussianSplatter_SetAccumulationModeToSum, METH_VARARGS,
   "SetAccumulationModeToSum(self) -> None\nC++: void SetAccumulationModeToSum()\n\n"},
  {"GetAccumulationModeAsString", PyvtkGaussianSplatter_GetAccumulationModeAsString, METH_VARARGS,
   "GetAccumulationModeAsString(self) -> str\nC++: const char *GetAccumulationModeAsString()\n\n"},
  {"SetNullValue", PyvtkGaussianSplatter_SetNullValue, METH_VARARGS,
   "SetNullValue(self, _arg:float) -> None\nC++: virtual void SetNullValue(double _arg)\n\nSet the Null value for output points not receiving a contribution\nfrom the input points. (This is the initial value of the voxel\nsamples.)\n"},
  {"GetNullValue", PyvtkGaussianSplatter_GetNullValue, METH_VARARGS,
   "GetNullValue(self) -> float\nC++: virtual double GetNullValue()\n\n"},
  {"ComputeModelBounds", PyvtkGaussianSplatter_ComputeModelBounds, METH_VARARGS,
   "ComputeModelBounds(self, input:vtkDataSet, output:vtkImageData,\n    outInfo:vtkInformation) -> None\nC++: void ComputeModelBounds(vtkDataSet *input,\n    vtkImageData *output, vtkInformation *outInfo)\nComputeModelBounds(self, input:vtkCompositeDataSet,\n    output:vtkImageData, outInfo:vtkInformation) -> None\nC++: void ComputeModelBounds(vtkCompositeDataSet *input,\n    vtkImageData *output, vtkInformation *outInfo)\n\nCompute the size of the sample bounding box automatically from\nthe input data. This is an internal helper function.\n"},
  {"SamplePoint", PyvtkGaussianSplatter_SamplePoint, METH_VARARGS,
   "SamplePoint(self, x:[float, float, float]) -> float\nC++: double SamplePoint(double x[3])\n\n"},
  {"SetScalar", PyvtkGaussianSplatter_SetScalar, METH_VARARGS,
   "SetScalar(self, idx:int, dist2:float, sPtr:[float, ...]) -> None\nC++: void SetScalar(vtkIdType idx, double dist2, double *sPtr)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGaussianSplatter_Doc =
  "vtkGaussianSplatter - splat points into a volume with an elliptical,\nGaussian distribution\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkGaussianSplatter is a filter that injects input points into a\n"
  "structured points (volume) dataset. As each point is injected, it\n"
  "\"splats\" or distributes values to nearby voxels. Data is distributed\n"
  "using an elliptical, Gaussian distribution function. The distribution\n"
  "function is modified using scalar values (expands distribution) or\n"
  "normals (creates ellipsoidal distribution rather than spherical).\n\n"
  "In general, the Gaussian distribution function f(x) around a given\n"
  "splat point p is given by\n\n\n"
  "    f(x) = ScaleFactor * exp( ExponentFactor*((r/Radius)**2) )\n\n"
  "where x is the current voxel sample point; r is the distance |x-p|\n"
  "ExponentFactor <= 0.0, and ScaleFactor can be multiplied by the\n"
  "scalar value of the point p that is currently being splatted.\n\n"
  "If points normals are present (and NormalWarping is on), then the\n"
  "splat function becomes elliptical (as compared to the spherical one\n"
  "described by the previous equation). The Gaussian distribution\n"
  "function then becomes:\n\n\n"
  "    f(x) = ScaleFactor *\n"
  "              exp( ExponentFactor*( ((rxy/E)**2 + z**2)/R**2) )\n\n"
  "where E is a user-defined eccentricity factor that controls the\n"
  "elliptical shape of the splat; z is the distance of the current voxel\n"
  "sample point along normal N; and rxy is the distance of x in the\n"
  "direction perpendicular to N.\n\n"
  "This class is typically used to convert point-valued distributions\n"
  "into a volume representation. The volume is then usually iso-surfaced\n"
  "or volume rendered to generate a visualization. It can be used to\n"
  "create surfaces from point distributions, or to create structure\n"
  "(i.e., topology) when none exists.\n\n"
  "@warning\n"
  "The input to this filter is any dataset type. This filter can be used\n"
  "to resample any form of data, i.e., the input data need not be\n"
  "unstructured.\n\n"
  "@warning\n"
  "Some voxels may never receive a contribution during the splatting\n"
  "process. The final value of these points can be specified with the\n"
  "\"NullValue\" instance variable.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkShepardMethod vtkCheckerboardSplatter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGaussianSplatter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingHybrid.vtkGaussianSplatter", // tp_name
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
  PyvtkGaussianSplatter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGaussianSplatter_StaticNew()
{
  return vtkGaussianSplatter::New();
}

PyObject *PyvtkGaussianSplatter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGaussianSplatter_Type, PyvtkGaussianSplatter_Methods,
    "vtkGaussianSplatter",
 &PyvtkGaussianSplatter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGaussianSplatter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGaussianSplatter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGaussianSplatter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_ACCUMULATION_MODE_MIN", 0 },
        { "VTK_ACCUMULATION_MODE_MAX", 1 },
        { "VTK_ACCUMULATION_MODE_SUM", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

