// python wrapper for vtkVolume
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVolume.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolume(PyObject *dict); }
extern "C" { PyObject *PyvtkVolume_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static PyObject *
PyvtkVolume_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolume::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolume::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolume *tempr = vtkVolume::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolume *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolume::NewInstance());

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
PyvtkVolume_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVolume::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVolume::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkAbstractVolumeMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkVolume::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractVolumeMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkVolume::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkVolumeProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkVolume::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkVolume::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetVolumes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetVolumes(temp0);
    }
    else
    {
      op->vtkVolume::GetVolumes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkVolume::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkVolume::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

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
      op->vtkVolume::GetBounds(temp0);
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
PyvtkVolume_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkVolume_GetBounds_s1(self, args);
    case 1:
      return PyvtkVolume_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkVolume_GetMinXBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinXBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinXBound() :
      op->vtkVolume::GetMinXBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxXBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxXBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxXBound() :
      op->vtkVolume::GetMaxXBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMinYBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinYBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinYBound() :
      op->vtkVolume::GetMinYBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxYBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxYBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxYBound() :
      op->vtkVolume::GetMaxYBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMinZBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinZBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinZBound() :
      op->vtkVolume::GetMinZBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMaxZBound(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxZBound");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxZBound() :
      op->vtkVolume::GetMaxZBound());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkVolume::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkVolume::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkVolume::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderVolumetricGeometry(temp0) :
      op->vtkVolume::RenderVolumetricGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

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
      op->vtkVolume::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrectedScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetCorrectedScalarOpacityArray(temp0) :
      op->vtkVolume::GetCorrectedScalarOpacityArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorrectedScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetCorrectedScalarOpacityArray() :
      op->vtkVolume::GetCorrectedScalarOpacityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetCorrectedScalarOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetCorrectedScalarOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetCorrectedScalarOpacityArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCorrectedScalarOpacityArray");
  return nullptr;
}


static PyObject *
PyvtkVolume_GetScalarOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetScalarOpacityArray(temp0) :
      op->vtkVolume::GetScalarOpacityArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetScalarOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetScalarOpacityArray() :
      op->vtkVolume::GetScalarOpacityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetScalarOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetScalarOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetScalarOpacityArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarOpacityArray");
  return nullptr;
}


static PyObject *
PyvtkVolume_GetGradientOpacityArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGradientOpacityArray(temp0) :
      op->vtkVolume::GetGradientOpacityArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGradientOpacityArray() :
      op->vtkVolume::GetGradientOpacityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetGradientOpacityArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetGradientOpacityArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacityArray");
  return nullptr;
}


static PyObject *
PyvtkVolume_GetGrayArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGrayArray(temp0) :
      op->vtkVolume::GetGrayArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGrayArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrayArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGrayArray() :
      op->vtkVolume::GetGrayArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGrayArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetGrayArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetGrayArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGrayArray");
  return nullptr;
}


static PyObject *
PyvtkVolume_GetRGBArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRGBArray(temp0) :
      op->vtkVolume::GetRGBArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetRGBArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRGBArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRGBArray() :
      op->vtkVolume::GetRGBArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetRGBArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetRGBArray_s1(self, args);
    case 0:
      return PyvtkVolume_GetRGBArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRGBArray");
  return nullptr;
}


static PyObject *
PyvtkVolume_GetGradientOpacityConstant_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientOpacityConstant(temp0) :
      op->vtkVolume::GetGradientOpacityConstant(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityConstant_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientOpacityConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientOpacityConstant() :
      op->vtkVolume::GetGradientOpacityConstant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkVolume_GetGradientOpacityConstant(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVolume_GetGradientOpacityConstant_s1(self, args);
    case 0:
      return PyvtkVolume_GetGradientOpacityConstant_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientOpacityConstant");
  return nullptr;
}


static PyObject *
PyvtkVolume_GetArraySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetArraySize() :
      op->vtkVolume::GetArraySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_UpdateTransferFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateTransferFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->UpdateTransferFunctions(temp0);
    }
    else
    {
      op->vtkVolume::UpdateTransferFunctions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_UpdateScalarOpacityforSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateScalarOpacityforSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  vtkRenderer *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateScalarOpacityforSampleSize(temp0, temp1);
    }
    else
    {
      op->vtkVolume::UpdateScalarOpacityforSampleSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolume_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolume *op = static_cast<vtkVolume *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkVolume::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolume_Methods[] = {
  {"IsTypeOf", PyvtkVolume_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolume_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolume_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVolume\nC++: static vtkVolume *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolume_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVolume\nC++: vtkVolume *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVolume_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVolume_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMapper", PyvtkVolume_SetMapper, METH_VARARGS,
   "SetMapper(self, mapper:vtkAbstractVolumeMapper) -> None\nC++: void SetMapper(vtkAbstractVolumeMapper *mapper)\n\nSet/Get the volume mapper.\n"},
  {"GetMapper", PyvtkVolume_GetMapper, METH_VARARGS,
   "GetMapper(self) -> vtkAbstractVolumeMapper\nC++: virtual vtkAbstractVolumeMapper *GetMapper()\n\n"},
  {"SetProperty", PyvtkVolume_SetProperty, METH_VARARGS,
   "SetProperty(self, property:vtkVolumeProperty) -> None\nC++: virtual void SetProperty(vtkVolumeProperty *property)\n\nSet/Get the volume property.\n"},
  {"GetProperty", PyvtkVolume_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkVolumeProperty\nC++: virtual vtkVolumeProperty *GetProperty()\n\n"},
  {"GetVolumes", PyvtkVolume_GetVolumes, METH_VARARGS,
   "GetVolumes(self, vc:vtkPropCollection) -> None\nC++: void GetVolumes(vtkPropCollection *vc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. This method is used in that\nprocess.\n"},
  {"Update", PyvtkVolume_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update()\n\nUpdate the volume rendering pipeline by updating the volume\nmapper\n"},
  {"GetBounds", PyvtkVolume_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the bounds - either all six at once (xmin, xmax, ymin, ymax,\nzmin, zmax) or one at a time.\n"},
  {"GetMinXBound", PyvtkVolume_GetMinXBound, METH_VARARGS,
   "GetMinXBound(self) -> float\nC++: double GetMinXBound()\n\n"},
  {"GetMaxXBound", PyvtkVolume_GetMaxXBound, METH_VARARGS,
   "GetMaxXBound(self) -> float\nC++: double GetMaxXBound()\n\n"},
  {"GetMinYBound", PyvtkVolume_GetMinYBound, METH_VARARGS,
   "GetMinYBound(self) -> float\nC++: double GetMinYBound()\n\n"},
  {"GetMaxYBound", PyvtkVolume_GetMaxYBound, METH_VARARGS,
   "GetMaxYBound(self) -> float\nC++: double GetMaxYBound()\n\n"},
  {"GetMinZBound", PyvtkVolume_GetMinZBound, METH_VARARGS,
   "GetMinZBound(self) -> float\nC++: double GetMinZBound()\n\n"},
  {"GetMaxZBound", PyvtkVolume_GetMaxZBound, METH_VARARGS,
   "GetMaxZBound(self) -> float\nC++: double GetMaxZBound()\n\n"},
  {"GetMTime", PyvtkVolume_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the property etc.\n"},
  {"GetRedrawMTime", PyvtkVolume_GetRedrawMTime, METH_VARARGS,
   "GetRedrawMTime(self) -> int\nC++: vtkMTimeType GetRedrawMTime() override;\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\nmappers, etc.\n"},
  {"ShallowCopy", PyvtkVolume_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkVolume. Overloads the virtual vtkProp\nmethod.\n"},
  {"RenderVolumetricGeometry", PyvtkVolume_RenderVolumetricGeometry, METH_VARARGS,
   "RenderVolumetricGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderVolumetricGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Support the\nstandard render methods. Depending on the mapper type, the volume\nmay be rendered using this method (FRAMEBUFFER volume such as\ntexture mapping will be rendered this way)\n"},
  {"ReleaseGraphicsResources", PyvtkVolume_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this volume.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {"GetCorrectedScalarOpacityArray", PyvtkVolume_GetCorrectedScalarOpacityArray, METH_VARARGS,
   "GetCorrectedScalarOpacityArray(self, __a:int) -> Pointer\nC++: float *GetCorrectedScalarOpacityArray(int)\nGetCorrectedScalarOpacityArray(self) -> Pointer\nC++: float *GetCorrectedScalarOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetScalarOpacityArray", PyvtkVolume_GetScalarOpacityArray, METH_VARARGS,
   "GetScalarOpacityArray(self, __a:int) -> Pointer\nC++: float *GetScalarOpacityArray(int)\nGetScalarOpacityArray(self) -> Pointer\nC++: float *GetScalarOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetGradientOpacityArray", PyvtkVolume_GetGradientOpacityArray, METH_VARARGS,
   "GetGradientOpacityArray(self, __a:int) -> Pointer\nC++: float *GetGradientOpacityArray(int)\nGetGradientOpacityArray(self) -> Pointer\nC++: float *GetGradientOpacityArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetGrayArray", PyvtkVolume_GetGrayArray, METH_VARARGS,
   "GetGrayArray(self, __a:int) -> Pointer\nC++: float *GetGrayArray(int)\nGetGrayArray(self) -> Pointer\nC++: float *GetGrayArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetRGBArray", PyvtkVolume_GetRGBArray, METH_VARARGS,
   "GetRGBArray(self, __a:int) -> Pointer\nC++: float *GetRGBArray(int)\nGetRGBArray(self) -> Pointer\nC++: float *GetRGBArray()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetGradientOpacityConstant", PyvtkVolume_GetGradientOpacityConstant, METH_VARARGS,
   "GetGradientOpacityConstant(self, __a:int) -> float\nC++: float GetGradientOpacityConstant(int)\nGetGradientOpacityConstant(self) -> float\nC++: float GetGradientOpacityConstant()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetArraySize", PyvtkVolume_GetArraySize, METH_VARARGS,
   "GetArraySize(self) -> float\nC++: float GetArraySize()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"UpdateTransferFunctions", PyvtkVolume_UpdateTransferFunctions, METH_VARARGS,
   "UpdateTransferFunctions(self, ren:vtkRenderer) -> None\nC++: void UpdateTransferFunctions(vtkRenderer *ren)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"UpdateScalarOpacityforSampleSize", PyvtkVolume_UpdateScalarOpacityforSampleSize, METH_VARARGS,
   "UpdateScalarOpacityforSampleSize(self, ren:vtkRenderer,\n    sample_distance:float) -> None\nC++: void UpdateScalarOpacityforSampleSize(vtkRenderer *ren,\n    float sample_distance)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {"GetSupportsSelection", PyvtkVolume_GetSupportsSelection, METH_VARARGS,
   "GetSupportsSelection(self) -> bool\nC++: bool GetSupportsSelection() override;\n\nUsed by vtkHardwareSelector to determine if the prop supports\nhardware selection.\n\n@warning INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\nDO NOT USE THIS METHOD OUTSIDE OF THE RENDERING PROCESS\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVolume_Doc =
  "vtkVolume - represents a volume (data & properties) in a rendered\nscene\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkVolume is used to represent a volumetric entity in a rendering\n"
  "scene. It inherits functions related to the volume's position,\n"
  "orientation and origin from vtkProp3D. The volume maintains a\n"
  "reference to the volumetric data (i.e., the volume mapper). The\n"
  "volume also contains a reference to a volume property which contains\n"
  "all common volume rendering parameters.\n\n"
  "@sa\n"
  "vtkAbstractVolumeMapper vtkVolumeProperty vtkProp3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVolume_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkVolume", // tp_name
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
  PyvtkVolume_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolume_StaticNew()
{
  return vtkVolume::New();
}

PyObject *PyvtkVolume_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVolume_Type, PyvtkVolume_Methods,
    "vtkVolume",
 &PyvtkVolume_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolume(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolume_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolume", o) != 0)
  {
    Py_DECREF(o);
  }

}

