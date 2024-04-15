// python wrapper for vtkImageSliceMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageSliceMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSliceMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkImageSliceMapper_ClassNew(); }

#ifndef DECLARED_PyvtkImageMapper3D_ClassNew
extern "C" { PyObject *PyvtkImageMapper3D_ClassNew(); }
#define DECLARED_PyvtkImageMapper3D_ClassNew
#endif

static PyObject *
PyvtkImageSliceMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSliceMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSliceMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSliceMapper *tempr = vtkImageSliceMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSliceMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSliceMapper::NewInstance());

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
PyvtkImageSliceMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageSliceMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageSliceMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceNumber(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetSliceNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumber() :
      op->vtkImageSliceMapper::GetSliceNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumberMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMinValue() :
      op->vtkImageSliceMapper::GetSliceNumberMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetSliceNumberMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceNumberMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceNumberMaxValue() :
      op->vtkImageSliceMapper::GetSliceNumberMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkImageSliceMapper::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkImageSliceMapper::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkImageSliceMapper::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToI();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToJ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToJ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToJ();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToJ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToK();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToX();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToY();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetOrientationToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToZ();
    }
    else
    {
      op->vtkImageSliceMapper::SetOrientationToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropping(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetCropping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_CroppingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOn();
    }
    else
    {
      op->vtkImageSliceMapper::CroppingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_CroppingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOff();
    }
    else
    {
      op->vtkImageSliceMapper::CroppingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkImageSliceMapper::GetCropping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageSliceMapper::SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegion(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetCroppingRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_SetCroppingRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageSliceMapper_SetCroppingRegion_s1(self, args);
    case 1:
      return PyvtkImageSliceMapper_SetCroppingRegion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegion");
  return nullptr;
}


static PyObject *
PyvtkImageSliceMapper_GetCroppingRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCroppingRegion() :
      op->vtkImageSliceMapper::GetCroppingRegion());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageSliceMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkImageSliceMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageSliceMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::GetBounds(temp0);
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
PyvtkImageSliceMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageSliceMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkImageSliceMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkImageSliceMapper_GetIndexBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

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
      op->vtkImageSliceMapper::GetIndexBounds(temp0);
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
PyvtkImageSliceMapper_GetSlicePlaneInDataCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePlaneInDataCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSlicePlaneInDataCoords(temp0, temp1);
    }
    else
    {
      op->vtkImageSliceMapper::GetSlicePlaneInDataCoords(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSliceMapper_SetDisplayExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSliceMapper *op = static_cast<vtkImageSliceMapper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayExtent(temp0);
    }
    else
    {
      op->vtkImageSliceMapper::SetDisplayExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSliceMapper_Methods[] = {
  {"IsTypeOf", PyvtkImageSliceMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSliceMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSliceMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageSliceMapper\nC++: static vtkImageSliceMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSliceMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageSliceMapper\nC++: vtkImageSliceMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageSliceMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageSliceMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSliceNumber", PyvtkImageSliceMapper_SetSliceNumber, METH_VARARGS,
   "SetSliceNumber(self, slice:int) -> None\nC++: virtual void SetSliceNumber(int slice)\n\nThe slice to display, if there are multiple slices.\n"},
  {"GetSliceNumber", PyvtkImageSliceMapper_GetSliceNumber, METH_VARARGS,
   "GetSliceNumber(self) -> int\nC++: virtual int GetSliceNumber()\n\n"},
  {"GetSliceNumberMinValue", PyvtkImageSliceMapper_GetSliceNumberMinValue, METH_VARARGS,
   "GetSliceNumberMinValue(self) -> int\nC++: virtual int GetSliceNumberMinValue()\n\nUse GetSliceNumberMinValue() and GetSliceNumberMaxValue() to get\nthe range of allowed slices.  These methods call\nUpdateInformation as a side-effect.\n"},
  {"GetSliceNumberMaxValue", PyvtkImageSliceMapper_GetSliceNumberMaxValue, METH_VARARGS,
   "GetSliceNumberMaxValue(self) -> int\nC++: virtual int GetSliceNumberMaxValue()\n\n"},
  {"SetOrientation", PyvtkImageSliceMapper_SetOrientation, METH_VARARGS,
   "SetOrientation(self, _arg:int) -> None\nC++: virtual void SetOrientation(int _arg)\n\nSet the orientation of the slices to display.  The default\norientation is 2, which is K. Not the orientaiton here is in\nindex space. Not physical or world.\n"},
  {"GetOrientationMinValue", PyvtkImageSliceMapper_GetOrientationMinValue, METH_VARARGS,
   "GetOrientationMinValue(self) -> int\nC++: virtual int GetOrientationMinValue()\n\n"},
  {"GetOrientationMaxValue", PyvtkImageSliceMapper_GetOrientationMaxValue, METH_VARARGS,
   "GetOrientationMaxValue(self) -> int\nC++: virtual int GetOrientationMaxValue()\n\n"},
  {"GetOrientation", PyvtkImageSliceMapper_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: virtual int GetOrientation()\n\n"},
  {"SetOrientationToI", PyvtkImageSliceMapper_SetOrientationToI, METH_VARARGS,
   "SetOrientationToI(self) -> None\nC++: void SetOrientationToI()\n\n"},
  {"SetOrientationToJ", PyvtkImageSliceMapper_SetOrientationToJ, METH_VARARGS,
   "SetOrientationToJ(self) -> None\nC++: void SetOrientationToJ()\n\n"},
  {"SetOrientationToK", PyvtkImageSliceMapper_SetOrientationToK, METH_VARARGS,
   "SetOrientationToK(self) -> None\nC++: void SetOrientationToK()\n\n"},
  {"SetOrientationToX", PyvtkImageSliceMapper_SetOrientationToX, METH_VARARGS,
   "SetOrientationToX(self) -> None\nC++: void SetOrientationToX()\n\n"},
  {"SetOrientationToY", PyvtkImageSliceMapper_SetOrientationToY, METH_VARARGS,
   "SetOrientationToY(self) -> None\nC++: void SetOrientationToY()\n\n"},
  {"SetOrientationToZ", PyvtkImageSliceMapper_SetOrientationToZ, METH_VARARGS,
   "SetOrientationToZ(self) -> None\nC++: void SetOrientationToZ()\n\n"},
  {"SetCropping", PyvtkImageSliceMapper_SetCropping, METH_VARARGS,
   "SetCropping(self, _arg:int) -> None\nC++: virtual void SetCropping(vtkTypeBool _arg)\n\nUse the specified CroppingRegion.  The default is to display the\nfull slice.\n"},
  {"CroppingOn", PyvtkImageSliceMapper_CroppingOn, METH_VARARGS,
   "CroppingOn(self) -> None\nC++: virtual void CroppingOn()\n\n"},
  {"CroppingOff", PyvtkImageSliceMapper_CroppingOff, METH_VARARGS,
   "CroppingOff(self) -> None\nC++: virtual void CroppingOff()\n\n"},
  {"GetCropping", PyvtkImageSliceMapper_GetCropping, METH_VARARGS,
   "GetCropping(self) -> int\nC++: virtual vtkTypeBool GetCropping()\n\n"},
  {"SetCroppingRegion", PyvtkImageSliceMapper_SetCroppingRegion, METH_VARARGS,
   "SetCroppingRegion(self, _arg1:int, _arg2:int, _arg3:int,\n    _arg4:int, _arg5:int, _arg6:int) -> None\nC++: virtual void SetCroppingRegion(int _arg1, int _arg2,\n    int _arg3, int _arg4, int _arg5, int _arg6)\nSetCroppingRegion(self, _arg:(int, int, int, int, int, int))\n    -> None\nC++: virtual void SetCroppingRegion(const int _arg[6])\n\nSet the display extent.  This is ignored unless Cropping is set.\n"},
  {"GetCroppingRegion", PyvtkImageSliceMapper_GetCroppingRegion, METH_VARARGS,
   "GetCroppingRegion(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetCroppingRegion()\n\n"},
  {"Render", PyvtkImageSliceMapper_Render, METH_VARARGS,
   "Render(self, renderer:vtkRenderer, prop:vtkImageSlice) -> None\nC++: void Render(vtkRenderer *renderer, vtkImageSlice *prop)\n    override;\n\nThis should only be called by the renderer.\n"},
  {"ReleaseGraphicsResources", PyvtkImageSliceMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper.  The parameter window is used to determine which graphic\nresources to release.\n"},
  {"GetMTime", PyvtkImageSliceMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime for the mapper.\n"},
  {"GetBounds", PyvtkImageSliceMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nThe bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"GetIndexBounds", PyvtkImageSliceMapper_GetIndexBounds, METH_VARARGS,
   "GetIndexBounds(self, extent:[float, float, float, float, float,\n    float]) -> None\nC++: void GetIndexBounds(double extent[6]) override;\n\n"},
  {"GetSlicePlaneInDataCoords", PyvtkImageSliceMapper_GetSlicePlaneInDataCoords, METH_VARARGS,
   "GetSlicePlaneInDataCoords(self, propMatrix:vtkMatrix4x4,\n    plane:[float, float, float, float]) -> None\nC++: void GetSlicePlaneInDataCoords(vtkMatrix4x4 *propMatrix,\n    double plane[4]) override;\n\nGet the plane as a homogeneous 4-vector that gives the plane\nequation coefficients.  It is computed from the Orientation and\nSliceNumber, the propMatrix is unused and can be zero.\n"},
  {"SetDisplayExtent", PyvtkImageSliceMapper_SetDisplayExtent, METH_VARARGS,
   "SetDisplayExtent(self, extent:(int, int, int, int, int, int))\n    -> None\nC++: void SetDisplayExtent(const int extent[6])\n\nSet the display extent.  For when this mapper is used as a helper\nclass.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageSliceMapper_Doc =
  "vtkImageSliceMapper - map a slice of a vtkImageData to the screen\n\n"
  "Superclass: vtkImageMapper3D\n\n"
  "vtkImageSliceMapper is a mapper that will draw a 2D image, or a slice\n"
  "of a 3D image.  For 3D images, the slice may be oriented in the X, Y,\n"
  "or Z direction.  This mapper works via 2D textures with accelerated\n"
  "zoom and pan operations.@par Thanks: Thanks to David Gobbi at the\n"
  "Seaman Family MR Centre and Dept. of Clinical Neurosciences,\n"
  "Foothills Medical Centre, Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImageSlice vtkImageProperty vtkImageResliceMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageSliceMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkImageSliceMapper", // tp_name
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
  PyvtkImageSliceMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSliceMapper_StaticNew()
{
  return vtkImageSliceMapper::New();
}

PyObject *PyvtkImageSliceMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageSliceMapper_Type, PyvtkImageSliceMapper_Methods,
    "vtkImageSliceMapper",
 &PyvtkImageSliceMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageMapper3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSliceMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSliceMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSliceMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

