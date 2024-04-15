// python wrapper for vtkTextActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTextActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextActor(PyObject *dict); }
extern "C" { PyObject *PyvtkTextActor_ClassNew(); }

#ifndef DECLARED_PyvtkTexturedActor2D_ClassNew
extern "C" { PyObject *PyvtkTexturedActor2D_ClassNew(); }
#define DECLARED_PyvtkTexturedActor2D_ClassNew
#endif

static PyObject *
PyvtkTextActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextActor *tempr = vtkTextActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextActor::NewInstance());

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
PyvtkTextActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

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
      op->vtkTextActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkTextActor::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTextActor::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetMinimumSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSize(temp0, temp1);
    }
    else
    {
      op->vtkTextActor::SetMinimumSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextActor_SetMinimumSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSize(temp0);
    }
    else
    {
      op->vtkTextActor::SetMinimumSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextActor_SetMinimumSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextActor_SetMinimumSize_s1(self, args);
    case 1:
      return PyvtkTextActor_SetMinimumSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMinimumSize");
  return nullptr;
}


static PyObject *
PyvtkTextActor_GetMinimumSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMinimumSize() :
      op->vtkTextActor::GetMinimumSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLineHeight(temp0);
    }
    else
    {
      op->vtkTextActor::SetMaximumLineHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetMaximumLineHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLineHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMaximumLineHeight() :
      op->vtkTextActor::GetMaximumLineHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextScaleMode(temp0);
    }
    else
    {
      op->vtkTextActor::SetTextScaleMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextScaleModeMinValue() :
      op->vtkTextActor::GetTextScaleModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextScaleModeMaxValue() :
      op->vtkTextActor::GetTextScaleModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextScaleMode() :
      op->vtkTextActor::GetTextScaleMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextScaleModeToNone();
    }
    else
    {
      op->vtkTextActor::SetTextScaleModeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextScaleModeToProp();
    }
    else
    {
      op->vtkTextActor::SetTextScaleModeToProp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextScaleModeToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextScaleModeToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextScaleModeToViewport();
    }
    else
    {
      op->vtkTextActor::SetTextScaleModeToViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetUseBorderAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBorderAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBorderAlign(temp0);
    }
    else
    {
      op->vtkTextActor::SetUseBorderAlign(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetUseBorderAlign(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBorderAlign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseBorderAlign() :
      op->vtkTextActor::GetUseBorderAlign());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_UseBorderAlignOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBorderAlignOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBorderAlignOn();
    }
    else
    {
      op->vtkTextActor::UseBorderAlignOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_UseBorderAlignOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBorderAlignOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBorderAlignOff();
    }
    else
    {
      op->vtkTextActor::UseBorderAlignOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetAlignmentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlignmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlignmentPoint(temp0);
    }
    else
    {
      op->vtkTextActor::SetAlignmentPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetAlignmentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlignmentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlignmentPoint() :
      op->vtkTextActor::GetAlignmentPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  float temp0;
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
      op->vtkTextActor::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkTextActor::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkTextActor::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkTextActor::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = nullptr;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBoundingBox(temp0, temp1);
    }
    else
    {
      op->vtkTextActor::GetBoundingBox(temp0, temp1);
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
PyvtkTextActor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetSize(temp0, temp1);
    }
    else
    {
      op->vtkTextActor::GetSize(temp0, temp1);
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
PyvtkTextActor_SetConstrainedFontSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetConstrainedFontSize(temp0, temp1, temp2) :
      op->vtkTextActor::SetConstrainedFontSize(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextActor_SetConstrainedFontSize_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetConstrainedFontSize");

  vtkTextActor *temp0 = nullptr;
  vtkViewport *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTextActor") &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = vtkTextActor::SetConstrainedFontSize(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTextActor_SetConstrainedFontSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextActor_SetConstrainedFontSize_s1(self, args);
    case 4:
      return PyvtkTextActor_SetConstrainedFontSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetConstrainedFontSize");
  return nullptr;
}


static PyObject *
PyvtkTextActor_SetNonLinearFontScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonLinearFontScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  double temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNonLinearFontScale(temp0, temp1);
    }
    else
    {
      op->vtkTextActor::SetNonLinearFontScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_SpecifiedToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpecifiedToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkViewport *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SpecifiedToDisplay(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextActor::SpecifiedToDisplay(temp0, temp1, temp2);
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
PyvtkTextActor_DisplayToSpecified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayToSpecified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkViewport *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkViewport") &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DisplayToSpecified(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextActor::DisplayToSpecified(temp0, temp1, temp2);
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
PyvtkTextActor_ComputeScaledFont(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScaledFont");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->ComputeScaledFont(temp0);
    }
    else
    {
      op->vtkTextActor::ComputeScaledFont(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetScaledTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetScaledTextProperty() :
      op->vtkTextActor::GetScaledTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_GetFontScale(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFontScale");

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    float tempr = vtkTextActor::GetFontScale(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

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
      op->vtkTextActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTextActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkTextActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkTextActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextActor *op = static_cast<vtkTextActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTextActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTextActor_Methods[] = {
  {"IsTypeOf", PyvtkTextActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextActor\nC++: static vtkTextActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextActor\nC++: vtkTextActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkTextActor_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this text actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"SetInput", PyvtkTextActor_SetInput, METH_VARARGS,
   "SetInput(self, inputString:str) -> None\nC++: void SetInput(const char *inputString)\n\nSet the text string to be displayed. \"\\n\" is recognized as a\ncarriage return/linefeed (line separator). The characters must be\nin the UTF-8 encoding. Convenience method to the underlying\nmapper\n"},
  {"GetInput", PyvtkTextActor_GetInput, METH_VARARGS,
   "GetInput(self) -> str\nC++: char *GetInput()\n\n"},
  {"SetMinimumSize", PyvtkTextActor_SetMinimumSize, METH_VARARGS,
   "SetMinimumSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetMinimumSize(int _arg1, int _arg2)\nSetMinimumSize(self, _arg:(int, int)) -> None\nC++: void SetMinimumSize(const int _arg[2])\n\nSet/Get the minimum size in pixels for this actor. Defaults to\n10,10. Only valid when TextScaleMode is PROP.\n"},
  {"GetMinimumSize", PyvtkTextActor_GetMinimumSize, METH_VARARGS,
   "GetMinimumSize(self) -> (int, int)\nC++: virtual int *GetMinimumSize()\n\n"},
  {"SetMaximumLineHeight", PyvtkTextActor_SetMaximumLineHeight, METH_VARARGS,
   "SetMaximumLineHeight(self, _arg:float) -> None\nC++: virtual void SetMaximumLineHeight(float _arg)\n\nSet/Get the maximum height of a line of text as a percentage of\nthe vertical area allocated to this scaled text actor. Defaults\nto 1.0. Only valid when TextScaleMode is PROP.\n"},
  {"GetMaximumLineHeight", PyvtkTextActor_GetMaximumLineHeight, METH_VARARGS,
   "GetMaximumLineHeight(self) -> float\nC++: virtual float GetMaximumLineHeight()\n\n"},
  {"SetTextScaleMode", PyvtkTextActor_SetTextScaleMode, METH_VARARGS,
   "SetTextScaleMode(self, _arg:int) -> None\nC++: virtual void SetTextScaleMode(int _arg)\n\nSet how text should be scaled.  If set to\nvtkTextActor::TEXT_SCALE_MODE_NONE, the font size will be fixed\nby the size given in TextProperty.  If set to\nvtkTextActor::TEXT_SCALE_MODE_PROP, the text will be scaled to\nfit exactly in the prop as specified by the position 1 & 2\ncoordinates.  If set to vtkTextActor::TEXT_SCALE_MODE_VIEWPORT,\nthe text will be scaled based on the size of the viewport it is\ndisplayed in.\n"},
  {"GetTextScaleModeMinValue", PyvtkTextActor_GetTextScaleModeMinValue, METH_VARARGS,
   "GetTextScaleModeMinValue(self) -> int\nC++: virtual int GetTextScaleModeMinValue()\n\n"},
  {"GetTextScaleModeMaxValue", PyvtkTextActor_GetTextScaleModeMaxValue, METH_VARARGS,
   "GetTextScaleModeMaxValue(self) -> int\nC++: virtual int GetTextScaleModeMaxValue()\n\n"},
  {"GetTextScaleMode", PyvtkTextActor_GetTextScaleMode, METH_VARARGS,
   "GetTextScaleMode(self) -> int\nC++: virtual int GetTextScaleMode()\n\n"},
  {"SetTextScaleModeToNone", PyvtkTextActor_SetTextScaleModeToNone, METH_VARARGS,
   "SetTextScaleModeToNone(self) -> None\nC++: void SetTextScaleModeToNone()\n\n"},
  {"SetTextScaleModeToProp", PyvtkTextActor_SetTextScaleModeToProp, METH_VARARGS,
   "SetTextScaleModeToProp(self) -> None\nC++: void SetTextScaleModeToProp()\n\n"},
  {"SetTextScaleModeToViewport", PyvtkTextActor_SetTextScaleModeToViewport, METH_VARARGS,
   "SetTextScaleModeToViewport(self) -> None\nC++: void SetTextScaleModeToViewport()\n\n"},
  {"SetUseBorderAlign", PyvtkTextActor_SetUseBorderAlign, METH_VARARGS,
   "SetUseBorderAlign(self, _arg:int) -> None\nC++: virtual void SetUseBorderAlign(vtkTypeBool _arg)\n\nTurn on or off the UseBorderAlign option. When UseBorderAlign is\non, the bounding rectangle is used to align the text, which is\nthe proper behavior when using vtkTextRepresentation\n"},
  {"GetUseBorderAlign", PyvtkTextActor_GetUseBorderAlign, METH_VARARGS,
   "GetUseBorderAlign(self) -> int\nC++: virtual vtkTypeBool GetUseBorderAlign()\n\n"},
  {"UseBorderAlignOn", PyvtkTextActor_UseBorderAlignOn, METH_VARARGS,
   "UseBorderAlignOn(self) -> None\nC++: virtual void UseBorderAlignOn()\n\n"},
  {"UseBorderAlignOff", PyvtkTextActor_UseBorderAlignOff, METH_VARARGS,
   "UseBorderAlignOff(self) -> None\nC++: virtual void UseBorderAlignOff()\n\n"},
  {"SetAlignmentPoint", PyvtkTextActor_SetAlignmentPoint, METH_VARARGS,
   "SetAlignmentPoint(self, point:int) -> None\nC++: void SetAlignmentPoint(int point)\n\nThis method is being deprecated.  Use SetJustification and\nSetVerticalJustification in text property instead. Set/Get the\nAlignment point if zero (default), the text aligns itself to the\nbottom left corner (which is defined by the PositionCoordinate)\notherwise the text aligns itself to corner/midpoint or centre\n 6   7   8\n 3   4   5\n 0   1   2\n  This is the same as setting the TextProperty's justification.\nCurrently TextActor is not oriented around its AlignmentPoint.\n"},
  {"GetAlignmentPoint", PyvtkTextActor_GetAlignmentPoint, METH_VARARGS,
   "GetAlignmentPoint(self) -> int\nC++: int GetAlignmentPoint()\n\n"},
  {"SetOrientation", PyvtkTextActor_SetOrientation, METH_VARARGS,
   "SetOrientation(self, orientation:float) -> None\nC++: void SetOrientation(float orientation)\n\nCounterclockwise rotation around the Alignment point. Units are\nin degrees and defaults to 0. The orientation in the text\nproperty rotates the text in the texture map.  It will proba ly\nnot give you the effect you desire.\n"},
  {"GetOrientation", PyvtkTextActor_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> float\nC++: virtual float GetOrientation()\n\n"},
  {"SetTextProperty", PyvtkTextActor_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {"GetTextProperty", PyvtkTextActor_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\n"},
  {"GetBoundingBox", PyvtkTextActor_GetBoundingBox, METH_VARARGS,
   "GetBoundingBox(self, vport:vtkViewport, bbox:[float, float, float,\n     float]) -> None\nC++: virtual void GetBoundingBox(vtkViewport *vport,\n    double bbox[4])\n\nReturn the bounding box coordinates of the text in pixels. The\nbbox array is populated with [ xmin, xmax, ymin, ymax ] values in\nthat order.\n"},
  {"GetSize", PyvtkTextActor_GetSize, METH_VARARGS,
   "GetSize(self, vport:vtkViewport, size:[float, float]) -> None\nC++: virtual void GetSize(vtkViewport *vport, double size[2])\n\nSyntactic sugar to get the size of text instead of the entire\nbounding box.\n"},
  {"SetConstrainedFontSize", PyvtkTextActor_SetConstrainedFontSize, METH_VARARGS,
   "SetConstrainedFontSize(self, __a:vtkViewport, targetWidth:int,\n    targetHeight:int) -> int\nC++: virtual int SetConstrainedFontSize(vtkViewport *,\n    int targetWidth, int targetHeight)\nSetConstrainedFontSize(__a:vtkTextActor, __b:vtkViewport,\n    targetWidth:int, targetHeight:int) -> int\nC++: static int SetConstrainedFontSize(vtkTextActor *,\n    vtkViewport *, int targetWidth, int targetHeight)\n\nSet and return the font size required to make this mapper fit in\na given target rectangle (width x height, in pixels). A static\nversion of the method is also available for convenience to other\nclasses (e.g., widgets).\n"},
  {"SetNonLinearFontScale", PyvtkTextActor_SetNonLinearFontScale, METH_VARARGS,
   "SetNonLinearFontScale(self, exponent:float, target:int) -> None\nC++: virtual void SetNonLinearFontScale(double exponent,\n    int target)\n\nEnable non-linear scaling of font sizes. This is useful in\ncombination with scaled text. With small windows you want to use\nthe entire scaled text area. With larger windows you want to\nreduce the font size some so that the entire area is not used.\nThese values modify the computed font size as follows:\nnewFontSize = pow(FontSize,exponent)*pow(target,1.0 - exponent)\ntypically exponent should be around 0.7 and target should be\naround 10\n"},
  {"SpecifiedToDisplay", PyvtkTextActor_SpecifiedToDisplay, METH_VARARGS,
   "SpecifiedToDisplay(self, pos:[float, ...], vport:vtkViewport,\n    specified:int) -> None\nC++: void SpecifiedToDisplay(double *pos, vtkViewport *vport,\n    int specified)\n\nThis is just a simple coordinate conversion method used in the\nrender process.\n"},
  {"DisplayToSpecified", PyvtkTextActor_DisplayToSpecified, METH_VARARGS,
   "DisplayToSpecified(self, pos:[float, ...], vport:vtkViewport,\n    specified:int) -> None\nC++: void DisplayToSpecified(double *pos, vtkViewport *vport,\n    int specified)\n\nThis is just a simple coordinate conversion method used in the\nrender process.\n"},
  {"ComputeScaledFont", PyvtkTextActor_ComputeScaledFont, METH_VARARGS,
   "ComputeScaledFont(self, viewport:vtkViewport) -> None\nC++: virtual void ComputeScaledFont(vtkViewport *viewport)\n\nCompute the scale the font should be given the viewport.  The\nresult is placed in the ScaledTextProperty ivar.\n"},
  {"GetScaledTextProperty", PyvtkTextActor_GetScaledTextProperty, METH_VARARGS,
   "GetScaledTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetScaledTextProperty()\n\nGet the scaled font.  Use ComputeScaledFont to set the scale for\na given viewport.\n"},
  {"GetFontScale", PyvtkTextActor_GetFontScale, METH_VARARGS,
   "GetFontScale(viewport:vtkViewport) -> float\nC++: static float GetFontScale(vtkViewport *viewport)\n\nProvide a font scaling based on a viewport.  This is the scaling\nfactor used when the TextScaleMode is set to VIEWPORT and has\nbeen made public for other components to use.  This scaling\nassumes that the long dimension of the viewport is meant to be 6\ninches (a typical width of text in a paper) and then resizes\nbased on if that long dimension was 72 DPI.\n"},
  {"ReleaseGraphicsResources", PyvtkTextActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Release any\ngraphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkTextActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the text\nactor to the screen.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkTextActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"RenderOverlay", PyvtkTextActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkTextActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextActor_Doc =
  "vtkTextActor - An actor that displays text.\n\n"
  "Superclass: vtkTexturedActor2D\n\n"
  "Scaled or unscaled\n\n"
  "vtkTextActor can be used to place text annotation into a window. When\n"
  "TextScaleMode is NONE, the text is fixed font and operation is the\n"
  "same as a vtkPolyDataMapper2D/vtkActor2D pair. When TextScaleMode is\n"
  "VIEWPORT, the font resizes such that it maintains a consistent size\n"
  "relative to the viewport in which it is rendered. When TextScaleMode\n"
  "is PROP, the font resizes such that the text fits inside the box\n"
  "defined by the position 1 & 2 coordinates. This class replaces the\n"
  "deprecated vtkScaledTextActor and acts as a convenient wrapper for a\n"
  "vtkTextMapper/vtkActor2D pair. Set the text property/attributes\n"
  "through the vtkTextProperty associated to this actor.\n\n"
  "@sa\n"
  "vtkActor2D vtkPolyDataMapper vtkTextProperty vtkTextRenderer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTextActor", // tp_name
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
  PyvtkTextActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextActor_StaticNew()
{
  return vtkTextActor::New();
}

PyObject *PyvtkTextActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextActor_Type, PyvtkTextActor_Methods,
    "vtkTextActor",
 &PyvtkTextActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkTexturedActor2D_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "TEXT_SCALE_MODE_NONE", vtkTextActor::TEXT_SCALE_MODE_NONE },
        { "TEXT_SCALE_MODE_PROP", vtkTextActor::TEXT_SCALE_MODE_PROP },
        { "TEXT_SCALE_MODE_VIEWPORT", vtkTextActor::TEXT_SCALE_MODE_VIEWPORT },
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

void PyVTKAddFile_vtkTextActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

