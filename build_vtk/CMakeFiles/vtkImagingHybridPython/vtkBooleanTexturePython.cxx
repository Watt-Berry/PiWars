// python wrapper for vtkBooleanTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBooleanTexture.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBooleanTexture(PyObject *dict); }
extern "C" { PyObject *PyvtkBooleanTexture_ClassNew(); }


static PyObject *
PyvtkBooleanTexture_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBooleanTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBooleanTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBooleanTexture *tempr = vtkBooleanTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBooleanTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBooleanTexture::NewInstance());

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
PyvtkBooleanTexture_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBooleanTexture::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBooleanTexture::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXSize(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetXSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetXSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXSize() :
      op->vtkBooleanTexture::GetXSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYSize(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetYSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetYSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYSize() :
      op->vtkBooleanTexture::GetYSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThickness(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_GetThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThickness() :
      op->vtkBooleanTexture::GetThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInIn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetInIn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInIn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetInIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetInIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInIn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInIn");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetInIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInIn() :
      op->vtkBooleanTexture::GetInIn());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInOut(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetInOut(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInOut(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetInOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetInOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInOut_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInOut");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetInOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInOut() :
      op->vtkBooleanTexture::GetInOut());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutIn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOutIn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutIn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOutIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOutIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutIn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutIn");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetOutIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutIn() :
      op->vtkBooleanTexture::GetOutIn());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutOut(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOutOut(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutOut(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOutOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOutOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutOut_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutOut");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetOutOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutOut() :
      op->vtkBooleanTexture::GetOutOut());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOnOn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOnOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOnOn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOnOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOnOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnOn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOnOn");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetOnOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnOn() :
      op->vtkBooleanTexture::GetOnOn());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnIn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOnIn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOnIn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnIn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOnIn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOnIn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnIn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOnIn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnIn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOnIn");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetOnIn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnIn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnIn() :
      op->vtkBooleanTexture::GetOnIn());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOnOut_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOnOut(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOnOut(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOut_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOnOut(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOnOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOnOut(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOnOut_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOnOut_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOnOut");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetOnOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOnOut() :
      op->vtkBooleanTexture::GetOnOut());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetInOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInOn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetInOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetInOn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetInOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetInOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetInOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetInOn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInOn");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetInOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetInOn() :
      op->vtkBooleanTexture::GetInOn());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBooleanTexture_SetOutOn_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOutOn(temp0, temp1);
    }
    else
    {
      op->vtkBooleanTexture::SetOutOn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOn_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  const size_t size0 = 2;
  unsigned char temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutOn(temp0);
    }
    else
    {
      op->vtkBooleanTexture::SetOutOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBooleanTexture_SetOutOn(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBooleanTexture_SetOutOn_s1(self, args);
    case 1:
      return PyvtkBooleanTexture_SetOutOn_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutOn");
  return nullptr;
}


static PyObject *
PyvtkBooleanTexture_GetOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBooleanTexture *op = static_cast<vtkBooleanTexture *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetOutOn() :
      op->vtkBooleanTexture::GetOutOn());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkBooleanTexture_Methods[] = {
  {"IsTypeOf", PyvtkBooleanTexture_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBooleanTexture_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBooleanTexture_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBooleanTexture\nC++: static vtkBooleanTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBooleanTexture_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBooleanTexture\nC++: vtkBooleanTexture *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBooleanTexture_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBooleanTexture_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetXSize", PyvtkBooleanTexture_SetXSize, METH_VARARGS,
   "SetXSize(self, _arg:int) -> None\nC++: virtual void SetXSize(int _arg)\n\nSet the X texture map dimension.\n"},
  {"GetXSize", PyvtkBooleanTexture_GetXSize, METH_VARARGS,
   "GetXSize(self) -> int\nC++: virtual int GetXSize()\n\n"},
  {"SetYSize", PyvtkBooleanTexture_SetYSize, METH_VARARGS,
   "SetYSize(self, _arg:int) -> None\nC++: virtual void SetYSize(int _arg)\n\nSet the Y texture map dimension.\n"},
  {"GetYSize", PyvtkBooleanTexture_GetYSize, METH_VARARGS,
   "GetYSize(self) -> int\nC++: virtual int GetYSize()\n\n"},
  {"SetThickness", PyvtkBooleanTexture_SetThickness, METH_VARARGS,
   "SetThickness(self, _arg:int) -> None\nC++: virtual void SetThickness(int _arg)\n\nSet the thickness of the \"on\" region.\n"},
  {"GetThickness", PyvtkBooleanTexture_GetThickness, METH_VARARGS,
   "GetThickness(self) -> int\nC++: virtual int GetThickness()\n\n"},
  {"SetInIn", PyvtkBooleanTexture_SetInIn, METH_VARARGS,
   "SetInIn(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetInIn(unsigned char _arg1,\n    unsigned char _arg2)\nSetInIn(self, _arg:(int, int)) -> None\nC++: void SetInIn(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"in/in\" region.\n"},
  {"GetInIn", PyvtkBooleanTexture_GetInIn, METH_VARARGS,
   "GetInIn(self) -> (int, int)\nC++: virtual unsigned char *GetInIn()\n\n"},
  {"SetInOut", PyvtkBooleanTexture_SetInOut, METH_VARARGS,
   "SetInOut(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetInOut(unsigned char _arg1,\n    unsigned char _arg2)\nSetInOut(self, _arg:(int, int)) -> None\nC++: void SetInOut(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"in/out\" region.\n"},
  {"GetInOut", PyvtkBooleanTexture_GetInOut, METH_VARARGS,
   "GetInOut(self) -> (int, int)\nC++: virtual unsigned char *GetInOut()\n\n"},
  {"SetOutIn", PyvtkBooleanTexture_SetOutIn, METH_VARARGS,
   "SetOutIn(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetOutIn(unsigned char _arg1,\n    unsigned char _arg2)\nSetOutIn(self, _arg:(int, int)) -> None\nC++: void SetOutIn(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"out/in\" region.\n"},
  {"GetOutIn", PyvtkBooleanTexture_GetOutIn, METH_VARARGS,
   "GetOutIn(self) -> (int, int)\nC++: virtual unsigned char *GetOutIn()\n\n"},
  {"SetOutOut", PyvtkBooleanTexture_SetOutOut, METH_VARARGS,
   "SetOutOut(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetOutOut(unsigned char _arg1,\n    unsigned char _arg2)\nSetOutOut(self, _arg:(int, int)) -> None\nC++: void SetOutOut(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"out/out\" region.\n"},
  {"GetOutOut", PyvtkBooleanTexture_GetOutOut, METH_VARARGS,
   "GetOutOut(self) -> (int, int)\nC++: virtual unsigned char *GetOutOut()\n\n"},
  {"SetOnOn", PyvtkBooleanTexture_SetOnOn, METH_VARARGS,
   "SetOnOn(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetOnOn(unsigned char _arg1,\n    unsigned char _arg2)\nSetOnOn(self, _arg:(int, int)) -> None\nC++: void SetOnOn(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"on/on\" region.\n"},
  {"GetOnOn", PyvtkBooleanTexture_GetOnOn, METH_VARARGS,
   "GetOnOn(self) -> (int, int)\nC++: virtual unsigned char *GetOnOn()\n\n"},
  {"SetOnIn", PyvtkBooleanTexture_SetOnIn, METH_VARARGS,
   "SetOnIn(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetOnIn(unsigned char _arg1,\n    unsigned char _arg2)\nSetOnIn(self, _arg:(int, int)) -> None\nC++: void SetOnIn(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"on/in\" region.\n"},
  {"GetOnIn", PyvtkBooleanTexture_GetOnIn, METH_VARARGS,
   "GetOnIn(self) -> (int, int)\nC++: virtual unsigned char *GetOnIn()\n\n"},
  {"SetOnOut", PyvtkBooleanTexture_SetOnOut, METH_VARARGS,
   "SetOnOut(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetOnOut(unsigned char _arg1,\n    unsigned char _arg2)\nSetOnOut(self, _arg:(int, int)) -> None\nC++: void SetOnOut(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"on/out\" region.\n"},
  {"GetOnOut", PyvtkBooleanTexture_GetOnOut, METH_VARARGS,
   "GetOnOut(self) -> (int, int)\nC++: virtual unsigned char *GetOnOut()\n\n"},
  {"SetInOn", PyvtkBooleanTexture_SetInOn, METH_VARARGS,
   "SetInOn(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetInOn(unsigned char _arg1,\n    unsigned char _arg2)\nSetInOn(self, _arg:(int, int)) -> None\nC++: void SetInOn(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"in/on\" region.\n"},
  {"GetInOn", PyvtkBooleanTexture_GetInOn, METH_VARARGS,
   "GetInOn(self) -> (int, int)\nC++: virtual unsigned char *GetInOn()\n\n"},
  {"SetOutOn", PyvtkBooleanTexture_SetOutOn, METH_VARARGS,
   "SetOutOn(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetOutOn(unsigned char _arg1,\n    unsigned char _arg2)\nSetOutOn(self, _arg:(int, int)) -> None\nC++: void SetOutOn(const unsigned char _arg[2])\n\nSpecify intensity/transparency for \"out/on\" region.\n"},
  {"GetOutOn", PyvtkBooleanTexture_GetOutOn, METH_VARARGS,
   "GetOutOn(self) -> (int, int)\nC++: virtual unsigned char *GetOutOn()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBooleanTexture_Doc =
  "vtkBooleanTexture - generate 2D texture map based on combinations of\ninside, outside, and on region boundary\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkBooleanTexture is a filter to generate a 2D texture map based on\n"
  "combinations of inside, outside, and on region boundary. The \"region\"\n"
  "is implicitly represented via 2D texture coordinates. These texture\n"
  "coordinates are normally generated using a filter like\n"
  "vtkImplicitTextureCoords, which generates the texture coordinates for\n"
  "any implicit function.\n\n"
  "vtkBooleanTexture generates the map according to the s-t texture\n"
  "coordinates plus the notion of being in, on, or outside of a region.\n"
  "An in region is when the texture coordinate is between\n"
  "(0,0.5-thickness/2).  An out region is where the texture coordinate\n"
  "is (0.5+thickness/2). An on region is between\n"
  "(0.5-thickness/2,0.5+thickness/2). The combination in, on, and out\n"
  "for each of the s-t texture coordinates results in 16 possible\n"
  "combinations (see text). For each combination, a different value of\n"
  "intensity and transparency can be assigned. To assign maximum\n"
  "intensity and/or opacity use the value 255. A minimum value of 0\n"
  "results in a black region (for intensity) and a fully transparent\n"
  "region (for transparency).\n\n"
  "@sa\n"
  "vtkImplicitTextureCoords vtkThresholdTextureCoords\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBooleanTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingHybrid.vtkBooleanTexture", // tp_name
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
  PyvtkBooleanTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBooleanTexture_StaticNew()
{
  return vtkBooleanTexture::New();
}

PyObject *PyvtkBooleanTexture_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBooleanTexture_Type, PyvtkBooleanTexture_Methods,
    "vtkBooleanTexture",
 &PyvtkBooleanTexture_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBooleanTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBooleanTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBooleanTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

