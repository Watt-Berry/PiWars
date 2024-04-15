// python wrapper for vtkInteractorStyleImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleImage.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleImage(PyObject *dict); }
extern "C" { PyObject *PyvtkInteractorStyleImage_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleTrackballCamera_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
#endif

static PyObject *
PyvtkInteractorStyleImage_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleImage *tempr = vtkInteractorStyleImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleImage::NewInstance());

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
PyvtkInteractorStyleImage_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorStyleImage::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorStyleImage::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetWindowLevelStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWindowLevelStartPosition() :
      op->vtkInteractorStyleImage::GetWindowLevelStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetWindowLevelCurrentPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWindowLevelCurrentPosition() :
      op->vtkInteractorStyleImage::GetWindowLevelCurrentPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleImage::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleImage::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleImage::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkInteractorStyleImage::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkInteractorStyleImage::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkInteractorStyleImage::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkInteractorStyleImage::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorStyleImage::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_WindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WindowLevel();
    }
    else
    {
      op->vtkInteractorStyleImage::WindowLevel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_Pick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pick();
    }
    else
    {
      op->vtkInteractorStyleImage::Pick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_Slice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Slice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Slice();
    }
    else
    {
      op->vtkInteractorStyleImage::Slice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartWindowLevel();
    }
    else
    {
      op->vtkInteractorStyleImage::StartWindowLevel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndWindowLevel();
    }
    else
    {
      op->vtkInteractorStyleImage::EndWindowLevel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPick();
    }
    else
    {
      op->vtkInteractorStyleImage::StartPick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndPick(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPick();
    }
    else
    {
      op->vtkInteractorStyleImage::EndPick();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_StartSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartSlice();
    }
    else
    {
      op->vtkInteractorStyleImage::StartSlice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_EndSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndSlice();
    }
    else
    {
      op->vtkInteractorStyleImage::EndSlice();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionMode(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetInteractionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionModeMinValue() :
      op->vtkInteractorStyleImage::GetInteractionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionModeMaxValue() :
      op->vtkInteractorStyleImage::GetInteractionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetInteractionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractionMode() :
      op->vtkInteractorStyleImage::GetInteractionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImage2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImage2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionModeToImage2D();
    }
    else
    {
      op->vtkInteractorStyleImage::SetInteractionModeToImage2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImage3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImage3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionModeToImage3D();
    }
    else
    {
      op->vtkInteractorStyleImage::SetInteractionModeToImage3D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetInteractionModeToImageSlicing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionModeToImageSlicing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionModeToImageSlicing();
    }
    else
    {
      op->vtkInteractorStyleImage::SetInteractionModeToImageSlicing();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetXViewRightVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetXViewRightVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXViewRightVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetXViewRightVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetXViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetXViewRightVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXViewRightVector");
  return nullptr;
}


static PyObject *
PyvtkInteractorStyleImage_GetXViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXViewRightVector() :
      op->vtkInteractorStyleImage::GetXViewRightVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetXViewUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetXViewUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXViewUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetXViewUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetXViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetXViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetXViewUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXViewUpVector");
  return nullptr;
}


static PyObject *
PyvtkInteractorStyleImage_GetXViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXViewUpVector() :
      op->vtkInteractorStyleImage::GetXViewUpVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetYViewRightVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetYViewRightVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYViewRightVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetYViewRightVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetYViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetYViewRightVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYViewRightVector");
  return nullptr;
}


static PyObject *
PyvtkInteractorStyleImage_GetYViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYViewRightVector() :
      op->vtkInteractorStyleImage::GetYViewRightVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetYViewUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetYViewUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYViewUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetYViewUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetYViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetYViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetYViewUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYViewUpVector");
  return nullptr;
}


static PyObject *
PyvtkInteractorStyleImage_GetYViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYViewUpVector() :
      op->vtkInteractorStyleImage::GetYViewUpVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetZViewRightVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetZViewRightVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZViewRightVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetZViewRightVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewRightVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetZViewRightVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetZViewRightVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZViewRightVector");
  return nullptr;
}


static PyObject *
PyvtkInteractorStyleImage_GetZViewRightVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZViewRightVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZViewRightVector() :
      op->vtkInteractorStyleImage::GetZViewRightVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

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
      op->SetZViewUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleImage::SetZViewUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZViewUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetZViewUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleImage_SetZViewUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkInteractorStyleImage_SetZViewUpVector_s1(self, args);
    case 1:
      return PyvtkInteractorStyleImage_SetZViewUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZViewUpVector");
  return nullptr;
}


static PyObject *
PyvtkInteractorStyleImage_GetZViewUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZViewUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetZViewUpVector() :
      op->vtkInteractorStyleImage::GetZViewUpVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetImageOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetImageOrientation(temp0, temp1);
    }
    else
    {
      op->vtkInteractorStyleImage::SetImageOrientation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_SetCurrentImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentImageNumber(temp0);
    }
    else
    {
      op->vtkInteractorStyleImage::SetCurrentImageNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetCurrentImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentImageNumber() :
      op->vtkInteractorStyleImage::GetCurrentImageNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleImage_GetCurrentImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleImage *op = static_cast<vtkInteractorStyleImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageProperty *tempr = (ap.IsBound() ?
      op->GetCurrentImageProperty() :
      op->vtkInteractorStyleImage::GetCurrentImageProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleImage_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleImage_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleImage_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleImage_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorStyleImage\nC++: static vtkInteractorStyleImage *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleImage_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorStyleImage\nC++: vtkInteractorStyleImage *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorStyleImage_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorStyleImage_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetWindowLevelStartPosition", PyvtkInteractorStyleImage_GetWindowLevelStartPosition, METH_VARARGS,
   "GetWindowLevelStartPosition(self) -> (int, int)\nC++: virtual int *GetWindowLevelStartPosition()\n\nSome useful information for handling window level\n"},
  {"GetWindowLevelCurrentPosition", PyvtkInteractorStyleImage_GetWindowLevelCurrentPosition, METH_VARARGS,
   "GetWindowLevelCurrentPosition(self) -> (int, int)\nC++: virtual int *GetWindowLevelCurrentPosition()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleImage_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: void OnMouseMove() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleImage_OnLeftButtonDown, METH_VARARGS,
   "OnLeftButtonDown(self) -> None\nC++: void OnLeftButtonDown() override;\n\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleImage_OnLeftButtonUp, METH_VARARGS,
   "OnLeftButtonUp(self) -> None\nC++: void OnLeftButtonUp() override;\n\n"},
  {"OnMiddleButtonDown", PyvtkInteractorStyleImage_OnMiddleButtonDown, METH_VARARGS,
   "OnMiddleButtonDown(self) -> None\nC++: void OnMiddleButtonDown() override;\n\n"},
  {"OnMiddleButtonUp", PyvtkInteractorStyleImage_OnMiddleButtonUp, METH_VARARGS,
   "OnMiddleButtonUp(self) -> None\nC++: void OnMiddleButtonUp() override;\n\n"},
  {"OnRightButtonDown", PyvtkInteractorStyleImage_OnRightButtonDown, METH_VARARGS,
   "OnRightButtonDown(self) -> None\nC++: void OnRightButtonDown() override;\n\n"},
  {"OnRightButtonUp", PyvtkInteractorStyleImage_OnRightButtonUp, METH_VARARGS,
   "OnRightButtonUp(self) -> None\nC++: void OnRightButtonUp() override;\n\n"},
  {"OnChar", PyvtkInteractorStyleImage_OnChar, METH_VARARGS,
   "OnChar(self) -> None\nC++: void OnChar() override;\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {"WindowLevel", PyvtkInteractorStyleImage_WindowLevel, METH_VARARGS,
   "WindowLevel(self) -> None\nC++: virtual void WindowLevel()\n\n"},
  {"Pick", PyvtkInteractorStyleImage_Pick, METH_VARARGS,
   "Pick(self) -> None\nC++: virtual void Pick()\n\n"},
  {"Slice", PyvtkInteractorStyleImage_Slice, METH_VARARGS,
   "Slice(self) -> None\nC++: virtual void Slice()\n\n"},
  {"StartWindowLevel", PyvtkInteractorStyleImage_StartWindowLevel, METH_VARARGS,
   "StartWindowLevel(self) -> None\nC++: virtual void StartWindowLevel()\n\n"},
  {"EndWindowLevel", PyvtkInteractorStyleImage_EndWindowLevel, METH_VARARGS,
   "EndWindowLevel(self) -> None\nC++: virtual void EndWindowLevel()\n\n"},
  {"StartPick", PyvtkInteractorStyleImage_StartPick, METH_VARARGS,
   "StartPick(self) -> None\nC++: virtual void StartPick()\n\n"},
  {"EndPick", PyvtkInteractorStyleImage_EndPick, METH_VARARGS,
   "EndPick(self) -> None\nC++: virtual void EndPick()\n\n"},
  {"StartSlice", PyvtkInteractorStyleImage_StartSlice, METH_VARARGS,
   "StartSlice(self) -> None\nC++: virtual void StartSlice()\n\n"},
  {"EndSlice", PyvtkInteractorStyleImage_EndSlice, METH_VARARGS,
   "EndSlice(self) -> None\nC++: virtual void EndSlice()\n\n"},
  {"SetInteractionMode", PyvtkInteractorStyleImage_SetInteractionMode, METH_VARARGS,
   "SetInteractionMode(self, _arg:int) -> None\nC++: virtual void SetInteractionMode(int _arg)\n\nSet/Get current mode to 2D or 3D.  The default is 2D.  In 3D\nmode, it is possible to rotate the camera to view oblique slices.\n In Slicing mode, it is possible to slice through the data, but\nnot to generate oblique views by rotating the camera.\n"},
  {"GetInteractionModeMinValue", PyvtkInteractorStyleImage_GetInteractionModeMinValue, METH_VARARGS,
   "GetInteractionModeMinValue(self) -> int\nC++: virtual int GetInteractionModeMinValue()\n\n"},
  {"GetInteractionModeMaxValue", PyvtkInteractorStyleImage_GetInteractionModeMaxValue, METH_VARARGS,
   "GetInteractionModeMaxValue(self) -> int\nC++: virtual int GetInteractionModeMaxValue()\n\n"},
  {"GetInteractionMode", PyvtkInteractorStyleImage_GetInteractionMode, METH_VARARGS,
   "GetInteractionMode(self) -> int\nC++: virtual int GetInteractionMode()\n\n"},
  {"SetInteractionModeToImage2D", PyvtkInteractorStyleImage_SetInteractionModeToImage2D, METH_VARARGS,
   "SetInteractionModeToImage2D(self) -> None\nC++: void SetInteractionModeToImage2D()\n\n"},
  {"SetInteractionModeToImage3D", PyvtkInteractorStyleImage_SetInteractionModeToImage3D, METH_VARARGS,
   "SetInteractionModeToImage3D(self) -> None\nC++: void SetInteractionModeToImage3D()\n\n"},
  {"SetInteractionModeToImageSlicing", PyvtkInteractorStyleImage_SetInteractionModeToImageSlicing, METH_VARARGS,
   "SetInteractionModeToImageSlicing(self) -> None\nC++: void SetInteractionModeToImageSlicing()\n\n"},
  {"SetXViewRightVector", PyvtkInteractorStyleImage_SetXViewRightVector, METH_VARARGS,
   "SetXViewRightVector(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetXViewRightVector(double _arg1, double _arg2,\n    double _arg3)\nSetXViewRightVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetXViewRightVector(const double _arg[3])\n\nSet the orientations that will be used when the X, Y, or Z keys\nare pressed.  See SetImageOrientation for more information.\n"},
  {"GetXViewRightVector", PyvtkInteractorStyleImage_GetXViewRightVector, METH_VARARGS,
   "GetXViewRightVector(self) -> (float, float, float)\nC++: virtual double *GetXViewRightVector()\n\n"},
  {"SetXViewUpVector", PyvtkInteractorStyleImage_SetXViewUpVector, METH_VARARGS,
   "SetXViewUpVector(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetXViewUpVector(double _arg1, double _arg2,\n    double _arg3)\nSetXViewUpVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetXViewUpVector(const double _arg[3])\n\n"},
  {"GetXViewUpVector", PyvtkInteractorStyleImage_GetXViewUpVector, METH_VARARGS,
   "GetXViewUpVector(self) -> (float, float, float)\nC++: virtual double *GetXViewUpVector()\n\n"},
  {"SetYViewRightVector", PyvtkInteractorStyleImage_SetYViewRightVector, METH_VARARGS,
   "SetYViewRightVector(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetYViewRightVector(double _arg1, double _arg2,\n    double _arg3)\nSetYViewRightVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetYViewRightVector(const double _arg[3])\n\n"},
  {"GetYViewRightVector", PyvtkInteractorStyleImage_GetYViewRightVector, METH_VARARGS,
   "GetYViewRightVector(self) -> (float, float, float)\nC++: virtual double *GetYViewRightVector()\n\n"},
  {"SetYViewUpVector", PyvtkInteractorStyleImage_SetYViewUpVector, METH_VARARGS,
   "SetYViewUpVector(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetYViewUpVector(double _arg1, double _arg2,\n    double _arg3)\nSetYViewUpVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetYViewUpVector(const double _arg[3])\n\n"},
  {"GetYViewUpVector", PyvtkInteractorStyleImage_GetYViewUpVector, METH_VARARGS,
   "GetYViewUpVector(self) -> (float, float, float)\nC++: virtual double *GetYViewUpVector()\n\n"},
  {"SetZViewRightVector", PyvtkInteractorStyleImage_SetZViewRightVector, METH_VARARGS,
   "SetZViewRightVector(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetZViewRightVector(double _arg1, double _arg2,\n    double _arg3)\nSetZViewRightVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetZViewRightVector(const double _arg[3])\n\n"},
  {"GetZViewRightVector", PyvtkInteractorStyleImage_GetZViewRightVector, METH_VARARGS,
   "GetZViewRightVector(self) -> (float, float, float)\nC++: virtual double *GetZViewRightVector()\n\n"},
  {"SetZViewUpVector", PyvtkInteractorStyleImage_SetZViewUpVector, METH_VARARGS,
   "SetZViewUpVector(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetZViewUpVector(double _arg1, double _arg2,\n    double _arg3)\nSetZViewUpVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetZViewUpVector(const double _arg[3])\n\n"},
  {"GetZViewUpVector", PyvtkInteractorStyleImage_GetZViewUpVector, METH_VARARGS,
   "GetZViewUpVector(self) -> (float, float, float)\nC++: virtual double *GetZViewUpVector()\n\n"},
  {"SetImageOrientation", PyvtkInteractorStyleImage_SetImageOrientation, METH_VARARGS,
   "SetImageOrientation(self, leftToRight:(float, float, float),\n    bottomToTop:(float, float, float)) -> None\nC++: void SetImageOrientation(const double leftToRight[3],\n    const double bottomToTop[3])\n\nSet the view orientation, in terms of the horizontal and vertical\ndirections of the computer screen.  The first vector gives the\ndirection that will correspond to moving horizontally\nleft-to-right across the screen, and the second vector gives the\ndirection that will correspond to moving bottom-to-top up the\nscreen.  This method changes the position of the camera to\nprovide the desired view.\n"},
  {"SetCurrentImageNumber", PyvtkInteractorStyleImage_SetCurrentImageNumber, METH_VARARGS,
   "SetCurrentImageNumber(self, i:int) -> None\nC++: virtual void SetCurrentImageNumber(int i)\n\nSet the image to use for WindowLevel interaction. Any images for\nwhich the Pickable flag is off are ignored. Images are counted\nback-to-front, so 0 is the rearmost image. Negative values can be\nused to count front-to-back, so -1 is the frontmost image, -2 is\nthe image behind that one, etc. The default is to use the\nfrontmost image for interaction. If the specified image does not\nexist, then no WindowLevel interaction will take place.\n"},
  {"GetCurrentImageNumber", PyvtkInteractorStyleImage_GetCurrentImageNumber, METH_VARARGS,
   "GetCurrentImageNumber(self) -> int\nC++: int GetCurrentImageNumber()\n\n"},
  {"GetCurrentImageProperty", PyvtkInteractorStyleImage_GetCurrentImageProperty, METH_VARARGS,
   "GetCurrentImageProperty(self) -> vtkImageProperty\nC++: vtkImageProperty *GetCurrentImageProperty()\n\nGet the current image property, which is set when\nStartWindowLevel is called immediately before\nStartWindowLevelEvent is generated. This is the image property of\nthe topmost vtkImageSlice in the renderer or nullptr if no image\nactors are present.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInteractorStyleImage_Doc =
  "vtkInteractorStyleImage - interactive manipulation of the camera\nspecialized for images\n\n"
  "Superclass: vtkInteractorStyleTrackballCamera\n\n"
  "vtkInteractorStyleImage allows the user to interactively manipulate\n"
  "(rotate, pan, zoom etc.) the camera. vtkInteractorStyleImage is\n"
  "specially designed to work with images that are being rendered with\n"
  "vtkImageActor. Several events are overloaded from its superclass\n"
  "vtkInteractorStyle, hence the mouse bindings are different. (The\n"
  "bindings keep the camera's view plane normal perpendicular to the x-y\n"
  "plane.) In summary the mouse events for 2D image interaction are as\n"
  "follows:\n"
  "- Left Mouse button triggers window level events\n"
  "- CTRL Left Mouse spins the camera around its view plane normal\n"
  "- SHIFT Left Mouse pans the camera\n"
  "- CTRL SHIFT Left Mouse dollys (a positional zoom) the camera\n"
  "- Middle mouse button pans the camera\n"
  "- Right mouse button dollys the camera.\n"
  "- SHIFT Right Mouse triggers pick events\n\n"
  "If SetInteractionModeToImageSlicing() is called, then some of the\n"
  "mouse events are changed as follows:\n"
  "- CTRL Left Mouse slices through the image\n"
  "- SHIFT Middle Mouse slices through the image\n"
  "- CTRL Right Mouse spins the camera\n\n"
  "If SetInteractionModeToImage3D() is called, then some of the mouse\n"
  "events are changed as follows:\n"
  "- SHIFT Left Mouse rotates the camera for oblique slicing\n"
  "- SHIFT Middle Mouse slices through the image\n"
  "- CTRL Right Mouse also slices through the image\n\n"
  "In all modes, the following key bindings are in effect:\n"
  "- R Reset the Window/Level\n"
  "- X Reset to a sagittal view\n"
  "- Y Reset to a coronal view\n"
  "- Z Reset to an axial view\n\n"
  "Note that the renderer's actors are not moved; instead the camera is\n"
  "moved.\n\n"
  "@sa\n"
  "vtkInteractorStyle vtkInteractorStyleTrackballActor\n"
  "vtkInteractorStyleJoystickCamera vtkInteractorStyleJoystickActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorStyleImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionStyle.vtkInteractorStyleImage", // tp_name
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
  PyvtkInteractorStyleImage_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleImage_StaticNew()
{
  return vtkInteractorStyleImage::New();
}

PyObject *PyvtkInteractorStyleImage_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorStyleImage_Type, PyvtkInteractorStyleImage_Methods,
    "vtkInteractorStyleImage",
 &PyvtkInteractorStyleImage_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyleTrackballCamera_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleImage", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTKIS_WINDOW_LEVEL", 1024 },
        { "VTKIS_SLICE", 1025 },
        { "VTKIS_IMAGE2D", 2 },
        { "VTKIS_IMAGE3D", 3 },
        { "VTKIS_IMAGE_SLICING", 4 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

