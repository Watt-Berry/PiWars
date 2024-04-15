// python wrapper for vtkParallelCoordinatesInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParallelCoordinatesInteractorStyle.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(PyObject *dict); }
extern "C" { PyObject *PyvtkParallelCoordinatesInteractorStyle_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleTrackballCamera_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
#endif

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelCoordinatesInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelCoordinatesInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelCoordinatesInteractorStyle *tempr = vtkParallelCoordinatesInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelCoordinatesInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelCoordinatesInteractorStyle::NewInstance());

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
PyvtkParallelCoordinatesInteractorStyle_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParallelCoordinatesInteractorStyle::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParallelCoordinatesInteractorStyle::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCursorStartPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

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
      op->GetCursorStartPosition(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorStartPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorStartPosition");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCursorCurrentPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorCurrentPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorCurrentPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

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
      op->GetCursorCurrentPosition(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorCurrentPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorCurrentPosition");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorLastPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCursorLastPosition() :
      op->vtkParallelCoordinatesInteractorStyle::GetCursorLastPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorLastPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

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
      op->GetCursorLastPosition(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::GetCursorLastPosition(temp0, temp1);
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
PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s1(self, args);
    case 2:
      return PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCursorLastPosition");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeave();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnLeave();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartInspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartInspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->StartInspect(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::StartInspect(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Inspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Inspect(temp0, temp1);
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::Inspect(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndInspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndInspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndInspect();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::EndInspect();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartZoom();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::StartZoom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Zoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Zoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Zoom();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::Zoom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndZoom();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::EndZoom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_StartPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartPan();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::StartPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pan();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::Pan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_EndPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndPan();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::EndPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesInteractorStyle_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesInteractorStyle *op = static_cast<vtkParallelCoordinatesInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkParallelCoordinatesInteractorStyle::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkParallelCoordinatesInteractorStyle_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelCoordinatesInteractorStyle_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelCoordinatesInteractorStyle_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkParallelCoordinatesInteractorStyle\nC++: static vtkParallelCoordinatesInteractorStyle *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelCoordinatesInteractorStyle_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParallelCoordinatesInteractorStyle\nC++: vtkParallelCoordinatesInteractorStyle *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParallelCoordinatesInteractorStyle_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParallelCoordinatesInteractorStyle_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCursorStartPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorStartPosition, METH_VARARGS,
   "GetCursorStartPosition(self) -> (int, int)\nC++: virtual int *GetCursorStartPosition()\nGetCursorStartPosition(self, viewport:vtkViewport, pos:[float,\n    float]) -> None\nC++: void GetCursorStartPosition(vtkViewport *viewport,\n    double pos[2])\n\nGet the cursor positions in pixel coords\n"},
  {"GetCursorCurrentPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorCurrentPosition, METH_VARARGS,
   "GetCursorCurrentPosition(self) -> (int, int)\nC++: virtual int *GetCursorCurrentPosition()\nGetCursorCurrentPosition(self, viewport:vtkViewport, pos:[float,\n    float]) -> None\nC++: void GetCursorCurrentPosition(vtkViewport *viewport,\n    double pos[2])\n\n"},
  {"GetCursorLastPosition", PyvtkParallelCoordinatesInteractorStyle_GetCursorLastPosition, METH_VARARGS,
   "GetCursorLastPosition(self) -> (int, int)\nC++: virtual int *GetCursorLastPosition()\nGetCursorLastPosition(self, viewport:vtkViewport, pos:[float,\n    float]) -> None\nC++: void GetCursorLastPosition(vtkViewport *viewport,\n    double pos[2])\n\n"},
  {"OnMouseMove", PyvtkParallelCoordinatesInteractorStyle_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: void OnMouseMove() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonDown, METH_VARARGS,
   "OnLeftButtonDown(self) -> None\nC++: void OnLeftButtonDown() override;\n\n"},
  {"OnLeftButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnLeftButtonUp, METH_VARARGS,
   "OnLeftButtonUp(self) -> None\nC++: void OnLeftButtonUp() override;\n\n"},
  {"OnMiddleButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonDown, METH_VARARGS,
   "OnMiddleButtonDown(self) -> None\nC++: void OnMiddleButtonDown() override;\n\n"},
  {"OnMiddleButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnMiddleButtonUp, METH_VARARGS,
   "OnMiddleButtonUp(self) -> None\nC++: void OnMiddleButtonUp() override;\n\n"},
  {"OnRightButtonDown", PyvtkParallelCoordinatesInteractorStyle_OnRightButtonDown, METH_VARARGS,
   "OnRightButtonDown(self) -> None\nC++: void OnRightButtonDown() override;\n\n"},
  {"OnRightButtonUp", PyvtkParallelCoordinatesInteractorStyle_OnRightButtonUp, METH_VARARGS,
   "OnRightButtonUp(self) -> None\nC++: void OnRightButtonUp() override;\n\n"},
  {"OnLeave", PyvtkParallelCoordinatesInteractorStyle_OnLeave, METH_VARARGS,
   "OnLeave(self) -> None\nC++: void OnLeave() override;\n\n"},
  {"StartInspect", PyvtkParallelCoordinatesInteractorStyle_StartInspect, METH_VARARGS,
   "StartInspect(self, x:int, y:int) -> None\nC++: virtual void StartInspect(int x, int y)\n\n"},
  {"Inspect", PyvtkParallelCoordinatesInteractorStyle_Inspect, METH_VARARGS,
   "Inspect(self, x:int, y:int) -> None\nC++: virtual void Inspect(int x, int y)\n\n"},
  {"EndInspect", PyvtkParallelCoordinatesInteractorStyle_EndInspect, METH_VARARGS,
   "EndInspect(self) -> None\nC++: virtual void EndInspect()\n\n"},
  {"StartZoom", PyvtkParallelCoordinatesInteractorStyle_StartZoom, METH_VARARGS,
   "StartZoom(self) -> None\nC++: void StartZoom() override;\n\n"},
  {"Zoom", PyvtkParallelCoordinatesInteractorStyle_Zoom, METH_VARARGS,
   "Zoom(self) -> None\nC++: void Zoom() override;\n\n"},
  {"EndZoom", PyvtkParallelCoordinatesInteractorStyle_EndZoom, METH_VARARGS,
   "EndZoom(self) -> None\nC++: void EndZoom() override;\n\n"},
  {"StartPan", PyvtkParallelCoordinatesInteractorStyle_StartPan, METH_VARARGS,
   "StartPan(self) -> None\nC++: void StartPan() override;\n\n"},
  {"Pan", PyvtkParallelCoordinatesInteractorStyle_Pan, METH_VARARGS,
   "Pan(self) -> None\nC++: void Pan() override;\n\n"},
  {"EndPan", PyvtkParallelCoordinatesInteractorStyle_EndPan, METH_VARARGS,
   "EndPan(self) -> None\nC++: void EndPan() override;\n\n"},
  {"OnChar", PyvtkParallelCoordinatesInteractorStyle_OnChar, METH_VARARGS,
   "OnChar(self) -> None\nC++: void OnChar() override;\n\nOverride the \"fly-to\" (f keypress) for images.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParallelCoordinatesInteractorStyle_Doc =
  "vtkParallelCoordinatesInteractorStyle - interactive manipulation of\nthe camera specialized for parallel coordinates\n\n"
  "Superclass: vtkInteractorStyleTrackballCamera\n\n"
  "vtkParallelCoordinatesInteractorStyle allows the user to\n"
  "interactively manipulate (rotate, pan, zoom etc.) the camera. Several\n"
  "events are overloaded from its superclass\n"
  "vtkInteractorStyleTrackballCamera, hence the mouse bindings are\n"
  "different. (The bindings keep the camera's view plane normal\n"
  "perpendicular to the x-y plane.) In summary, the mouse events are as\n"
  "follows: + Left Mouse button triggers window level events + CTRL Left\n"
  "Mouse spins the camera around its view plane normal + SHIFT Left\n"
  "Mouse pans the camera + CTRL SHIFT Left Mouse dollys (a positional\n"
  "zoom) the camera + Middle mouse button pans the camera + Right mouse\n"
  "button dollys the camera. + SHIFT Right Mouse triggers pick events\n\n"
  "Note that the renderer's actors are not moved; instead the camera is\n"
  "moved.\n\n"
  "@sa\n"
  "vtkInteractorStyle vtkInteractorStyleTrackballActor\n"
  "vtkInteractorStyleJoystickCamera vtkInteractorStyleJoystickActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParallelCoordinatesInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionStyle.vtkParallelCoordinatesInteractorStyle", // tp_name
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
  PyvtkParallelCoordinatesInteractorStyle_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelCoordinatesInteractorStyle_StaticNew()
{
  return vtkParallelCoordinatesInteractorStyle::New();
}

PyObject *PyvtkParallelCoordinatesInteractorStyle_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParallelCoordinatesInteractorStyle_Type, PyvtkParallelCoordinatesInteractorStyle_Methods,
    "vtkParallelCoordinatesInteractorStyle",
 &PyvtkParallelCoordinatesInteractorStyle_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyleTrackballCamera_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "INTERACT_HOVER", vtkParallelCoordinatesInteractorStyle::INTERACT_HOVER },
        { "INTERACT_INSPECT", vtkParallelCoordinatesInteractorStyle::INTERACT_INSPECT },
        { "INTERACT_ZOOM", vtkParallelCoordinatesInteractorStyle::INTERACT_ZOOM },
        { "INTERACT_PAN", vtkParallelCoordinatesInteractorStyle::INTERACT_PAN },
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

void PyVTKAddFile_vtkParallelCoordinatesInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelCoordinatesInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelCoordinatesInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

