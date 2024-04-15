// python wrapper for vtkAvatar
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAvatar.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAvatar(PyObject *dict); }
extern "C" { PyObject *PyvtkAvatar_ClassNew(); }

#ifndef DECLARED_PyvtkActor_ClassNew
extern "C" { PyObject *PyvtkActor_ClassNew(); }
#define DECLARED_PyvtkActor_ClassNew
#endif

static PyObject *
PyvtkAvatar_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAvatar::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAvatar::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAvatar *tempr = vtkAvatar::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAvatar *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAvatar::NewInstance());

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
PyvtkAvatar_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAvatar::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAvatar::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_GetHeadPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHeadPosition() :
      op->vtkAvatar::GetHeadPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetHeadPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

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
      op->SetHeadPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAvatar::SetHeadPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetHeadPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetHeadPosition(temp0);
    }
    else
    {
      op->vtkAvatar::SetHeadPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetHeadPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAvatar_SetHeadPosition_s1(self, args);
    case 1:
      return PyvtkAvatar_SetHeadPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHeadPosition");
  return nullptr;
}


static PyObject *
PyvtkAvatar_GetHeadOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeadOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHeadOrientation() :
      op->vtkAvatar::GetHeadOrientation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetHeadOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

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
      op->SetHeadOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAvatar::SetHeadOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetHeadOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeadOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetHeadOrientation(temp0);
    }
    else
    {
      op->vtkAvatar::SetHeadOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetHeadOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAvatar_SetHeadOrientation_s1(self, args);
    case 1:
      return PyvtkAvatar_SetHeadOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHeadOrientation");
  return nullptr;
}


static PyObject *
PyvtkAvatar_GetLeftHandPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftHandPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLeftHandPosition() :
      op->vtkAvatar::GetLeftHandPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetLeftHandPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftHandPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

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
      op->SetLeftHandPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAvatar::SetLeftHandPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetLeftHandPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftHandPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLeftHandPosition(temp0);
    }
    else
    {
      op->vtkAvatar::SetLeftHandPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetLeftHandPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAvatar_SetLeftHandPosition_s1(self, args);
    case 1:
      return PyvtkAvatar_SetLeftHandPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLeftHandPosition");
  return nullptr;
}


static PyObject *
PyvtkAvatar_GetLeftHandOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftHandOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLeftHandOrientation() :
      op->vtkAvatar::GetLeftHandOrientation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetLeftHandOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftHandOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

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
      op->SetLeftHandOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAvatar::SetLeftHandOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetLeftHandOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftHandOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLeftHandOrientation(temp0);
    }
    else
    {
      op->vtkAvatar::SetLeftHandOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetLeftHandOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAvatar_SetLeftHandOrientation_s1(self, args);
    case 1:
      return PyvtkAvatar_SetLeftHandOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLeftHandOrientation");
  return nullptr;
}


static PyObject *
PyvtkAvatar_GetRightHandPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightHandPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRightHandPosition() :
      op->vtkAvatar::GetRightHandPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetRightHandPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightHandPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

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
      op->SetRightHandPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAvatar::SetRightHandPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetRightHandPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightHandPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRightHandPosition(temp0);
    }
    else
    {
      op->vtkAvatar::SetRightHandPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetRightHandPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAvatar_SetRightHandPosition_s1(self, args);
    case 1:
      return PyvtkAvatar_SetRightHandPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRightHandPosition");
  return nullptr;
}


static PyObject *
PyvtkAvatar_GetRightHandOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightHandOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRightHandOrientation() :
      op->vtkAvatar::GetRightHandOrientation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetRightHandOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightHandOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

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
      op->SetRightHandOrientation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAvatar::SetRightHandOrientation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetRightHandOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightHandOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRightHandOrientation(temp0);
    }
    else
    {
      op->vtkAvatar::SetRightHandOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetRightHandOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAvatar_SetRightHandOrientation_s1(self, args);
    case 1:
      return PyvtkAvatar_SetRightHandOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRightHandOrientation");
  return nullptr;
}


static PyObject *
PyvtkAvatar_GetUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUpVector() :
      op->vtkAvatar::GetUpVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

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
      op->SetUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAvatar::SetUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUpVector(temp0);
    }
    else
    {
      op->vtkAvatar::SetUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAvatar_SetUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkAvatar_SetUpVector_s1(self, args);
    case 1:
      return PyvtkAvatar_SetUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUpVector");
  return nullptr;
}


static PyObject *
PyvtkAvatar_SetUseLeftHand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLeftHand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLeftHand(temp0);
    }
    else
    {
      op->vtkAvatar::SetUseLeftHand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_GetUseLeftHand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLeftHand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseLeftHand() :
      op->vtkAvatar::GetUseLeftHand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_UseLeftHandOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLeftHandOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLeftHandOn();
    }
    else
    {
      op->vtkAvatar::UseLeftHandOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_UseLeftHandOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLeftHandOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLeftHandOff();
    }
    else
    {
      op->vtkAvatar::UseLeftHandOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetUseRightHand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRightHand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRightHand(temp0);
    }
    else
    {
      op->vtkAvatar::SetUseRightHand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_GetUseRightHand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRightHand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRightHand() :
      op->vtkAvatar::GetUseRightHand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_UseRightHandOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRightHandOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRightHandOn();
    }
    else
    {
      op->vtkAvatar::UseRightHandOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_UseRightHandOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRightHandOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRightHandOff();
    }
    else
    {
      op->vtkAvatar::UseRightHandOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_SetShowHandsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowHandsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowHandsOnly(temp0);
    }
    else
    {
      op->vtkAvatar::SetShowHandsOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_GetShowHandsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowHandsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowHandsOnly() :
      op->vtkAvatar::GetShowHandsOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_ShowHandsOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowHandsOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowHandsOnlyOn();
    }
    else
    {
      op->vtkAvatar::ShowHandsOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAvatar_ShowHandsOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowHandsOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAvatar *op = static_cast<vtkAvatar *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowHandsOnlyOff();
    }
    else
    {
      op->vtkAvatar::ShowHandsOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAvatar_Methods[] = {
  {"IsTypeOf", PyvtkAvatar_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAvatar_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAvatar_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAvatar\nC++: static vtkAvatar *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAvatar_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAvatar\nC++: vtkAvatar *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAvatar_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAvatar_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetHeadPosition", PyvtkAvatar_GetHeadPosition, METH_VARARGS,
   "GetHeadPosition(self) -> (float, float, float)\nC++: virtual double *GetHeadPosition()\n\nSet/Get the head and hand transforms.\n"},
  {"SetHeadPosition", PyvtkAvatar_SetHeadPosition, METH_VARARGS,
   "SetHeadPosition(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetHeadPosition(double _arg1, double _arg2,\n    double _arg3)\nSetHeadPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetHeadPosition(const double _arg[3])\n\n"},
  {"GetHeadOrientation", PyvtkAvatar_GetHeadOrientation, METH_VARARGS,
   "GetHeadOrientation(self) -> (float, float, float)\nC++: virtual double *GetHeadOrientation()\n\n"},
  {"SetHeadOrientation", PyvtkAvatar_SetHeadOrientation, METH_VARARGS,
   "SetHeadOrientation(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetHeadOrientation(double _arg1, double _arg2,\n    double _arg3)\nSetHeadOrientation(self, _arg:(float, float, float)) -> None\nC++: virtual void SetHeadOrientation(const double _arg[3])\n\n"},
  {"GetLeftHandPosition", PyvtkAvatar_GetLeftHandPosition, METH_VARARGS,
   "GetLeftHandPosition(self) -> (float, float, float)\nC++: virtual double *GetLeftHandPosition()\n\n"},
  {"SetLeftHandPosition", PyvtkAvatar_SetLeftHandPosition, METH_VARARGS,
   "SetLeftHandPosition(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetLeftHandPosition(double _arg1, double _arg2,\n    double _arg3)\nSetLeftHandPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetLeftHandPosition(const double _arg[3])\n\n"},
  {"GetLeftHandOrientation", PyvtkAvatar_GetLeftHandOrientation, METH_VARARGS,
   "GetLeftHandOrientation(self) -> (float, float, float)\nC++: virtual double *GetLeftHandOrientation()\n\n"},
  {"SetLeftHandOrientation", PyvtkAvatar_SetLeftHandOrientation, METH_VARARGS,
   "SetLeftHandOrientation(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetLeftHandOrientation(double _arg1,\n    double _arg2, double _arg3)\nSetLeftHandOrientation(self, _arg:(float, float, float)) -> None\nC++: virtual void SetLeftHandOrientation(const double _arg[3])\n\n"},
  {"GetRightHandPosition", PyvtkAvatar_GetRightHandPosition, METH_VARARGS,
   "GetRightHandPosition(self) -> (float, float, float)\nC++: virtual double *GetRightHandPosition()\n\n"},
  {"SetRightHandPosition", PyvtkAvatar_SetRightHandPosition, METH_VARARGS,
   "SetRightHandPosition(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetRightHandPosition(double _arg1, double _arg2,\n     double _arg3)\nSetRightHandPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetRightHandPosition(const double _arg[3])\n\n"},
  {"GetRightHandOrientation", PyvtkAvatar_GetRightHandOrientation, METH_VARARGS,
   "GetRightHandOrientation(self) -> (float, float, float)\nC++: virtual double *GetRightHandOrientation()\n\n"},
  {"SetRightHandOrientation", PyvtkAvatar_SetRightHandOrientation, METH_VARARGS,
   "SetRightHandOrientation(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetRightHandOrientation(double _arg1,\n    double _arg2, double _arg3)\nSetRightHandOrientation(self, _arg:(float, float, float)) -> None\nC++: virtual void SetRightHandOrientation(const double _arg[3])\n\n"},
  {"GetUpVector", PyvtkAvatar_GetUpVector, METH_VARARGS,
   "GetUpVector(self) -> (float, float, float)\nC++: virtual double *GetUpVector()\n\nUp vector, in world coords. Must be normalized.\n"},
  {"SetUpVector", PyvtkAvatar_SetUpVector, METH_VARARGS,
   "SetUpVector(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetUpVector(double _arg1, double _arg2,\n    double _arg3)\nSetUpVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetUpVector(const double _arg[3])\n\n"},
  {"SetUseLeftHand", PyvtkAvatar_SetUseLeftHand, METH_VARARGS,
   "SetUseLeftHand(self, _arg:bool) -> None\nC++: virtual void SetUseLeftHand(bool _arg)\n\nNormally, hand position/orientation is set explicitly. If set to\nfalse, hand and arm will follow the torso in a neutral position.\n"},
  {"GetUseLeftHand", PyvtkAvatar_GetUseLeftHand, METH_VARARGS,
   "GetUseLeftHand(self) -> bool\nC++: virtual bool GetUseLeftHand()\n\n"},
  {"UseLeftHandOn", PyvtkAvatar_UseLeftHandOn, METH_VARARGS,
   "UseLeftHandOn(self) -> None\nC++: virtual void UseLeftHandOn()\n\n"},
  {"UseLeftHandOff", PyvtkAvatar_UseLeftHandOff, METH_VARARGS,
   "UseLeftHandOff(self) -> None\nC++: virtual void UseLeftHandOff()\n\n"},
  {"SetUseRightHand", PyvtkAvatar_SetUseRightHand, METH_VARARGS,
   "SetUseRightHand(self, _arg:bool) -> None\nC++: virtual void SetUseRightHand(bool _arg)\n\n"},
  {"GetUseRightHand", PyvtkAvatar_GetUseRightHand, METH_VARARGS,
   "GetUseRightHand(self) -> bool\nC++: virtual bool GetUseRightHand()\n\n"},
  {"UseRightHandOn", PyvtkAvatar_UseRightHandOn, METH_VARARGS,
   "UseRightHandOn(self) -> None\nC++: virtual void UseRightHandOn()\n\n"},
  {"UseRightHandOff", PyvtkAvatar_UseRightHandOff, METH_VARARGS,
   "UseRightHandOff(self) -> None\nC++: virtual void UseRightHandOff()\n\n"},
  {"SetShowHandsOnly", PyvtkAvatar_SetShowHandsOnly, METH_VARARGS,
   "SetShowHandsOnly(self, _arg:bool) -> None\nC++: virtual void SetShowHandsOnly(bool _arg)\n\nShow just the hands. Default false.\n"},
  {"GetShowHandsOnly", PyvtkAvatar_GetShowHandsOnly, METH_VARARGS,
   "GetShowHandsOnly(self) -> bool\nC++: virtual bool GetShowHandsOnly()\n\n"},
  {"ShowHandsOnlyOn", PyvtkAvatar_ShowHandsOnlyOn, METH_VARARGS,
   "ShowHandsOnlyOn(self) -> None\nC++: virtual void ShowHandsOnlyOn()\n\n"},
  {"ShowHandsOnlyOff", PyvtkAvatar_ShowHandsOnlyOff, METH_VARARGS,
   "ShowHandsOnlyOff(self) -> None\nC++: virtual void ShowHandsOnlyOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAvatar_Doc =
  "vtkAvatar - Renders head and hands for a user in VR\n\n"
  "Superclass: vtkActor\n\n"
  "Set position and orientation for the head and two hands, shows an\n"
  "observer where the avatar is looking and pointing.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAvatar_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkAvatar", // tp_name
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
  PyvtkAvatar_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAvatar_StaticNew()
{
  return vtkAvatar::New();
}

PyObject *PyvtkAvatar_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAvatar_Type, PyvtkAvatar_Methods,
    "vtkAvatar",
 &PyvtkAvatar_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkActor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAvatar(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAvatar_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAvatar", o) != 0)
  {
    Py_DECREF(o);
  }

}

