// python wrapper for vtkProjectedTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProjectedTexture.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProjectedTexture(PyObject *dict); }
extern "C" { PyObject *PyvtkProjectedTexture_ClassNew(); }


static PyObject *
PyvtkProjectedTexture_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProjectedTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectedTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProjectedTexture *tempr = vtkProjectedTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectedTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectedTexture::NewInstance());

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
PyvtkProjectedTexture_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProjectedTexture::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProjectedTexture::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectedTexture::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectedTexture_SetPosition_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkProjectedTexture_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkProjectedTexture::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetFocalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFocalPoint(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetFocalPoint(temp0);
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
PyvtkProjectedTexture_SetFocalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetFocalPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectedTexture::SetFocalPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetFocalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkProjectedTexture_SetFocalPoint_s1(self, args);
    case 3:
      return PyvtkProjectedTexture_SetFocalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFocalPoint");
  return nullptr;
}


static PyObject *
PyvtkProjectedTexture_GetFocalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFocalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetFocalPoint() :
      op->vtkProjectedTexture::GetFocalPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCameraMode(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetCameraMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetCameraMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCameraMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCameraMode() :
      op->vtkProjectedTexture::GetCameraMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraModeToPinhole(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraModeToPinhole");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCameraModeToPinhole();
    }
    else
    {
      op->vtkProjectedTexture::SetCameraModeToPinhole();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetCameraModeToTwoMirror(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCameraModeToTwoMirror");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCameraModeToTwoMirror();
    }
    else
    {
      op->vtkProjectedTexture::SetCameraModeToTwoMirror();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetMirrorSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMirrorSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMirrorSeparation(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetMirrorSeparation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetMirrorSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMirrorSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMirrorSeparation() :
      op->vtkProjectedTexture::GetMirrorSeparation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkProjectedTexture::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetUp_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectedTexture::SetUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetUp_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUp(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetUp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetUp(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectedTexture_SetUp_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetUp_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUp");
  return nullptr;
}


static PyObject *
PyvtkProjectedTexture_GetUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUp() :
      op->vtkProjectedTexture::GetUp());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetAspectRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

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
      op->SetAspectRatio(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectedTexture::SetAspectRatio(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetAspectRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAspectRatio(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetAspectRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetAspectRatio(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectedTexture_SetAspectRatio_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetAspectRatio_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAspectRatio");
  return nullptr;
}


static PyObject *
PyvtkProjectedTexture_GetAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAspectRatio() :
      op->vtkProjectedTexture::GetAspectRatio());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetSRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSRange(temp0, temp1);
    }
    else
    {
      op->vtkProjectedTexture::SetSRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetSRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSRange(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetSRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetSRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkProjectedTexture_SetSRange_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetSRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSRange");
  return nullptr;
}


static PyObject *
PyvtkProjectedTexture_GetSRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSRange() :
      op->vtkProjectedTexture::GetSRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectedTexture_SetTRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTRange(temp0, temp1);
    }
    else
    {
      op->vtkProjectedTexture::SetTRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetTRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTRange(temp0);
    }
    else
    {
      op->vtkProjectedTexture::SetTRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectedTexture_SetTRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkProjectedTexture_SetTRange_s1(self, args);
    case 1:
      return PyvtkProjectedTexture_SetTRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTRange");
  return nullptr;
}


static PyObject *
PyvtkProjectedTexture_GetTRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectedTexture *op = static_cast<vtkProjectedTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTRange() :
      op->vtkProjectedTexture::GetTRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkProjectedTexture_Methods[] = {
  {"IsTypeOf", PyvtkProjectedTexture_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProjectedTexture_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProjectedTexture_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProjectedTexture\nC++: static vtkProjectedTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProjectedTexture_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProjectedTexture\nC++: vtkProjectedTexture *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProjectedTexture_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProjectedTexture_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPosition", PyvtkProjectedTexture_SetPosition, METH_VARARGS,
   "SetPosition(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPosition(double _arg1, double _arg2,\n    double _arg3)\nSetPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPosition(const double _arg[3])\n\nSet/Get the position of the focus of the projector.\n"},
  {"GetPosition", PyvtkProjectedTexture_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float, float)\nC++: virtual double *GetPosition()\n\n"},
  {"SetFocalPoint", PyvtkProjectedTexture_SetFocalPoint, METH_VARARGS,
   "SetFocalPoint(self, focalPoint:[float, float, float]) -> None\nC++: void SetFocalPoint(double focalPoint[3])\nSetFocalPoint(self, x:float, y:float, z:float) -> None\nC++: void SetFocalPoint(double x, double y, double z)\n\nSet/Get the focal point of the projector (a point that lies along\nthe center axis of the projector's frustum).\n"},
  {"GetFocalPoint", PyvtkProjectedTexture_GetFocalPoint, METH_VARARGS,
   "GetFocalPoint(self) -> (float, float, float)\nC++: virtual double *GetFocalPoint()\n\n"},
  {"SetCameraMode", PyvtkProjectedTexture_SetCameraMode, METH_VARARGS,
   "SetCameraMode(self, _arg:int) -> None\nC++: virtual void SetCameraMode(int _arg)\n\nSet/Get the camera mode of the projection -- pinhole projection\nor two mirror projection.\n"},
  {"GetCameraMode", PyvtkProjectedTexture_GetCameraMode, METH_VARARGS,
   "GetCameraMode(self) -> int\nC++: virtual int GetCameraMode()\n\n"},
  {"SetCameraModeToPinhole", PyvtkProjectedTexture_SetCameraModeToPinhole, METH_VARARGS,
   "SetCameraModeToPinhole(self) -> None\nC++: void SetCameraModeToPinhole()\n\n"},
  {"SetCameraModeToTwoMirror", PyvtkProjectedTexture_SetCameraModeToTwoMirror, METH_VARARGS,
   "SetCameraModeToTwoMirror(self) -> None\nC++: void SetCameraModeToTwoMirror()\n\n"},
  {"SetMirrorSeparation", PyvtkProjectedTexture_SetMirrorSeparation, METH_VARARGS,
   "SetMirrorSeparation(self, _arg:float) -> None\nC++: virtual void SetMirrorSeparation(double _arg)\n\nSet/Get the mirror separation for the two mirror system.\n"},
  {"GetMirrorSeparation", PyvtkProjectedTexture_GetMirrorSeparation, METH_VARARGS,
   "GetMirrorSeparation(self) -> float\nC++: virtual double GetMirrorSeparation()\n\n"},
  {"GetOrientation", PyvtkProjectedTexture_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> (float, float, float)\nC++: virtual double *GetOrientation()\n\nGet the normalized orientation vector of the projector.\n"},
  {"SetUp", PyvtkProjectedTexture_SetUp, METH_VARARGS,
   "SetUp(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetUp(double _arg1, double _arg2, double _arg3)\nSetUp(self, _arg:(float, float, float)) -> None\nC++: virtual void SetUp(const double _arg[3])\n\nSet/Get the up vector of the projector.\n"},
  {"GetUp", PyvtkProjectedTexture_GetUp, METH_VARARGS,
   "GetUp(self) -> (float, float, float)\nC++: virtual double *GetUp()\n\n"},
  {"SetAspectRatio", PyvtkProjectedTexture_SetAspectRatio, METH_VARARGS,
   "SetAspectRatio(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAspectRatio(double _arg1, double _arg2,\n    double _arg3)\nSetAspectRatio(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAspectRatio(const double _arg[3])\n\nSet/Get the aspect ratio of a perpendicular cross-section of the\nthe projector's frustum.  The aspect ratio consists of three\nnumbers:  (x, y, z), where x is the width of the frustum, y is\nthe height, and z is the perpendicular distance from the focus of\nthe projector.\n\n* For example, if the source of the image is a pinhole camera\n  with\n* view angle A, then you could set x=1, y=1, z=1/tan(A).\n"},
  {"GetAspectRatio", PyvtkProjectedTexture_GetAspectRatio, METH_VARARGS,
   "GetAspectRatio(self) -> (float, float, float)\nC++: virtual double *GetAspectRatio()\n\n"},
  {"SetSRange", PyvtkProjectedTexture_SetSRange, METH_VARARGS,
   "SetSRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetSRange(double _arg1, double _arg2)\nSetSRange(self, _arg:(float, float)) -> None\nC++: void SetSRange(const double _arg[2])\n\nSpecify s-coordinate range for texture s-t coordinate pair.\n"},
  {"GetSRange", PyvtkProjectedTexture_GetSRange, METH_VARARGS,
   "GetSRange(self) -> (float, float)\nC++: virtual double *GetSRange()\n\n"},
  {"SetTRange", PyvtkProjectedTexture_SetTRange, METH_VARARGS,
   "SetTRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetTRange(double _arg1, double _arg2)\nSetTRange(self, _arg:(float, float)) -> None\nC++: void SetTRange(const double _arg[2])\n\nSpecify t-coordinate range for texture s-t coordinate pair.\n"},
  {"GetTRange", PyvtkProjectedTexture_GetTRange, METH_VARARGS,
   "GetTRange(self) -> (float, float)\nC++: virtual double *GetTRange()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProjectedTexture_Doc =
  "vtkProjectedTexture - assign texture coordinates for a projected\ntexture\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkProjectedTexture assigns texture coordinates to a dataset as if\n"
  "the texture was projected from a slide projected located somewhere in\n"
  "the scene.  Methods are provided to position the projector and aim it\n"
  "at a location, to set the width of the projector's frustum, and to\n"
  "set the range of texture coordinates assigned to the dataset.\n\n"
  "Objects in the scene that appear behind the projector are also\n"
  "assigned texture coordinates; the projected image is left-right and\n"
  "top-bottom flipped, much as a lens' focus flips the rays of light\n"
  "that pass through it.  A warning is issued if a point in the dataset\n"
  "falls at the focus of the projector.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProjectedTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkProjectedTexture", // tp_name
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
  PyvtkProjectedTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProjectedTexture_StaticNew()
{
  return vtkProjectedTexture::New();
}

PyObject *PyvtkProjectedTexture_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProjectedTexture_Type, PyvtkProjectedTexture_Methods,
    "vtkProjectedTexture",
 &PyvtkProjectedTexture_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProjectedTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProjectedTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProjectedTexture", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_PROJECTED_TEXTURE_USE_PINHOLE", 0 },
        { "VTK_PROJECTED_TEXTURE_USE_TWO_MIRRORS", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

