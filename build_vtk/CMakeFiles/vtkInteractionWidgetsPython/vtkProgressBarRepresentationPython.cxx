// python wrapper for vtkProgressBarRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProgressBarRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgressBarRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkProgressBarRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBorderRepresentation_ClassNew
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }
#define DECLARED_PyvtkBorderRepresentation_ClassNew
#endif

static PyObject *
PyvtkProgressBarRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgressBarRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgressBarRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgressBarRepresentation *tempr = vtkProgressBarRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgressBarRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgressBarRepresentation::NewInstance());

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
PyvtkProgressBarRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProgressBarRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProgressBarRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkProgressBarRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetProgressRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgressRate(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetProgressRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetProgressRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressRateMinValue() :
      op->vtkProgressBarRepresentation::GetProgressRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetProgressRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressRateMaxValue() :
      op->vtkProgressBarRepresentation::GetProgressRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetProgressRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProgressRate() :
      op->vtkProgressBarRepresentation::GetProgressRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetPadding_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0, temp1);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetPadding(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetPadding_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetPadding(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkProgressBarRepresentation_SetPadding_s1(self, args);
    case 1:
      return PyvtkProgressBarRepresentation_SetPadding_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPadding");
  return nullptr;
}


static PyObject *
PyvtkProgressBarRepresentation_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkProgressBarRepresentation::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetDrawFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawFrame(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetDrawFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetDrawFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawFrame() :
      op->vtkProgressBarRepresentation::GetDrawFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_DrawFrameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawFrameOn();
    }
    else
    {
      op->vtkProgressBarRepresentation::DrawFrameOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_DrawFrameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawFrameOff();
    }
    else
    {
      op->vtkProgressBarRepresentation::DrawFrameOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetProgressBarColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

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
      op->SetProgressBarColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetProgressBarColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetProgressBarColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgressBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetProgressBarColor(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetProgressBarColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetProgressBarColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProgressBarRepresentation_SetProgressBarColor_s1(self, args);
    case 1:
      return PyvtkProgressBarRepresentation_SetProgressBarColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetProgressBarColor");
  return nullptr;
}


static PyObject *
PyvtkProgressBarRepresentation_GetProgressBarColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgressBarColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetProgressBarColor() :
      op->vtkProgressBarRepresentation::GetProgressBarColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProgressBarRepresentation_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProgressBarRepresentation_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkProgressBarRepresentation_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}


static PyObject *
PyvtkProgressBarRepresentation_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkProgressBarRepresentation::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_SetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBackground(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::SetDrawBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawBackground() :
      op->vtkProgressBarRepresentation::GetDrawBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_DrawBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOn();
    }
    else
    {
      op->vtkProgressBarRepresentation::DrawBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_DrawBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOff();
    }
    else
    {
      op->vtkProgressBarRepresentation::DrawBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkProgressBarRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkProgressBarRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

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
      op->vtkProgressBarRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkProgressBarRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkProgressBarRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkProgressBarRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgressBarRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgressBarRepresentation *op = static_cast<vtkProgressBarRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkProgressBarRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProgressBarRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkProgressBarRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgressBarRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgressBarRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProgressBarRepresentation\nC++: static vtkProgressBarRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgressBarRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProgressBarRepresentation\nC++: vtkProgressBarRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProgressBarRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProgressBarRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetProperty", PyvtkProgressBarRepresentation_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nBy obtaining this property you can specify the properties of the\nrepresentation.\n"},
  {"SetProgressRate", PyvtkProgressBarRepresentation_SetProgressRate, METH_VARARGS,
   "SetProgressRate(self, _arg:float) -> None\nC++: virtual void SetProgressRate(double _arg)\n\nSet/Get the progress rate of the progress bar, between 0 and 1\ndefault is 0\n"},
  {"GetProgressRateMinValue", PyvtkProgressBarRepresentation_GetProgressRateMinValue, METH_VARARGS,
   "GetProgressRateMinValue(self) -> float\nC++: virtual double GetProgressRateMinValue()\n\n"},
  {"GetProgressRateMaxValue", PyvtkProgressBarRepresentation_GetProgressRateMaxValue, METH_VARARGS,
   "GetProgressRateMaxValue(self) -> float\nC++: virtual double GetProgressRateMaxValue()\n\n"},
  {"GetProgressRate", PyvtkProgressBarRepresentation_GetProgressRate, METH_VARARGS,
   "GetProgressRate(self) -> float\nC++: virtual double GetProgressRate()\n\n"},
  {"SetPadding", PyvtkProgressBarRepresentation_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetPadding(double _arg1, double _arg2)\nSetPadding(self, _arg:(float, float)) -> None\nC++: void SetPadding(const double _arg[2])\n\nSet/Get the padding between the border and the progressbar. The\npadding is expressed in percentage of the border box size default\nis 0.017,0.1\n"},
  {"GetPadding", PyvtkProgressBarRepresentation_GetPadding, METH_VARARGS,
   "GetPadding(self) -> (float, float)\nC++: virtual double *GetPadding()\n\n"},
  {"SetDrawFrame", PyvtkProgressBarRepresentation_SetDrawFrame, METH_VARARGS,
   "SetDrawFrame(self, _arg:bool) -> None\nC++: virtual void SetDrawFrame(bool _arg)\n\nSet/Get frame visibility default is on\n"},
  {"GetDrawFrame", PyvtkProgressBarRepresentation_GetDrawFrame, METH_VARARGS,
   "GetDrawFrame(self) -> bool\nC++: virtual bool GetDrawFrame()\n\n"},
  {"DrawFrameOn", PyvtkProgressBarRepresentation_DrawFrameOn, METH_VARARGS,
   "DrawFrameOn(self) -> None\nC++: virtual void DrawFrameOn()\n\n"},
  {"DrawFrameOff", PyvtkProgressBarRepresentation_DrawFrameOff, METH_VARARGS,
   "DrawFrameOff(self) -> None\nC++: virtual void DrawFrameOff()\n\n"},
  {"SetProgressBarColor", PyvtkProgressBarRepresentation_SetProgressBarColor, METH_VARARGS,
   "SetProgressBarColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetProgressBarColor(double _arg1, double _arg2,\n    double _arg3)\nSetProgressBarColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetProgressBarColor(const double _arg[3])\n\nSet/Get the progress bar color Default is pure green\n"},
  {"GetProgressBarColor", PyvtkProgressBarRepresentation_GetProgressBarColor, METH_VARARGS,
   "GetProgressBarColor(self) -> (float, float, float)\nC++: virtual double *GetProgressBarColor()\n\n"},
  {"SetBackgroundColor", PyvtkProgressBarRepresentation_SetBackgroundColor, METH_VARARGS,
   "SetBackgroundColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackgroundColor(double _arg1, double _arg2,\n    double _arg3)\nSetBackgroundColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackgroundColor(const double _arg[3])\n\nSet/Get the background color Default is white\n"},
  {"GetBackgroundColor", PyvtkProgressBarRepresentation_GetBackgroundColor, METH_VARARGS,
   "GetBackgroundColor(self) -> (float, float, float)\nC++: virtual double *GetBackgroundColor()\n\n"},
  {"SetDrawBackground", PyvtkProgressBarRepresentation_SetDrawBackground, METH_VARARGS,
   "SetDrawBackground(self, _arg:bool) -> None\nC++: virtual void SetDrawBackground(bool _arg)\n\nSet/Get background visibility Default is off\n"},
  {"GetDrawBackground", PyvtkProgressBarRepresentation_GetDrawBackground, METH_VARARGS,
   "GetDrawBackground(self) -> bool\nC++: virtual bool GetDrawBackground()\n\n"},
  {"DrawBackgroundOn", PyvtkProgressBarRepresentation_DrawBackgroundOn, METH_VARARGS,
   "DrawBackgroundOn(self) -> None\nC++: virtual void DrawBackgroundOn()\n\n"},
  {"DrawBackgroundOff", PyvtkProgressBarRepresentation_DrawBackgroundOff, METH_VARARGS,
   "DrawBackgroundOff(self) -> None\nC++: virtual void DrawBackgroundOff()\n\n"},
  {"BuildRepresentation", PyvtkProgressBarRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nSatisfy the superclasses' API.\n"},
  {"GetActors2D", PyvtkProgressBarRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkProgressBarRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkProgressBarRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkProgressBarRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkProgressBarRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkProgressBarRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProgressBarRepresentation_Doc =
  "vtkProgressBarRepresentation - represent a vtkProgressBarWidget\n\n"
  "Superclass: vtkBorderRepresentation\n\n"
  "This class is used to represent a vtkProgressBarWidget.\n\n"
  "@sa\n"
  "vtkProgressBarWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProgressBarRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkProgressBarRepresentation", // tp_name
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
  PyvtkProgressBarRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgressBarRepresentation_StaticNew()
{
  return vtkProgressBarRepresentation::New();
}

PyObject *PyvtkProgressBarRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProgressBarRepresentation_Type, PyvtkProgressBarRepresentation_Methods,
    "vtkProgressBarRepresentation",
 &PyvtkProgressBarRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBorderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgressBarRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgressBarRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgressBarRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

