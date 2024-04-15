// python wrapper for vtkDataTransferHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataTransferHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataTransferHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkDataTransferHelper_ClassNew(); }


static PyObject *
PyvtkDataTransferHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataTransferHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataTransferHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataTransferHelper *tempr = vtkDataTransferHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataTransferHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataTransferHelper::NewInstance());

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
PyvtkDataTransferHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataTransferHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataTransferHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkDataTransferHelper::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkDataTransferHelper::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetCPUExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

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
      op->SetCPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataTransferHelper::SetCPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetCPUExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCPUExtent(temp0);
    }
    else
    {
      op->vtkDataTransferHelper::SetCPUExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetCPUExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkDataTransferHelper_SetCPUExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetCPUExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCPUExtent");
  return nullptr;
}


static PyObject *
PyvtkDataTransferHelper_GetCPUExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCPUExtent() :
      op->vtkDataTransferHelper::GetCPUExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetGPUExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

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
      op->SetGPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataTransferHelper::SetGPUExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetGPUExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGPUExtent(temp0);
    }
    else
    {
      op->vtkDataTransferHelper::SetGPUExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetGPUExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkDataTransferHelper_SetGPUExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetGPUExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGPUExtent");
  return nullptr;
}


static PyObject *
PyvtkDataTransferHelper_GetGPUExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGPUExtent() :
      op->vtkDataTransferHelper::GetGPUExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetTextureExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

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
      op->SetTextureExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataTransferHelper::SetTextureExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetTextureExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTextureExtent(temp0);
    }
    else
    {
      op->vtkDataTransferHelper::SetTextureExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataTransferHelper_SetTextureExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkDataTransferHelper_SetTextureExtent_s1(self, args);
    case 1:
      return PyvtkDataTransferHelper_SetTextureExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTextureExtent");
  return nullptr;
}


static PyObject *
PyvtkDataTransferHelper_GetTextureExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTextureExtent() :
      op->vtkDataTransferHelper::GetTextureExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetExtentIsValid(temp0) :
      op->vtkDataTransferHelper::GetExtentIsValid(temp0));

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
PyvtkDataTransferHelper_GetCPUExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCPUExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCPUExtentIsValid() :
      op->vtkDataTransferHelper::GetCPUExtentIsValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetGPUExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGPUExtentIsValid() :
      op->vtkDataTransferHelper::GetGPUExtentIsValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetTextureExtentIsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureExtentIsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTextureExtentIsValid() :
      op->vtkDataTransferHelper::GetTextureExtentIsValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetMinTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinTextureDimension(temp0);
    }
    else
    {
      op->vtkDataTransferHelper::SetMinTextureDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetMinTextureDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinTextureDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinTextureDimension() :
      op->vtkDataTransferHelper::GetMinTextureDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkDataTransferHelper::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0);
    }
    else
    {
      op->vtkDataTransferHelper::SetArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkDataTransferHelper::GetTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0);
    }
    else
    {
      op->vtkDataTransferHelper::SetTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_Upload(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Upload");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  int temp0 = 0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->Upload(temp0, temp1) :
      op->vtkDataTransferHelper::Upload(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_Download(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Download");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->Download() :
      op->vtkDataTransferHelper::Download());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_DownloadAsync1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadAsync1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->DownloadAsync1() :
      op->vtkDataTransferHelper::DownloadAsync1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_DownloadAsync2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DownloadAsync2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->DownloadAsync2() :
      op->vtkDataTransferHelper::DownloadAsync2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_GetShaderSupportsTextureInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderSupportsTextureInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShaderSupportsTextureInt() :
      op->vtkDataTransferHelper::GetShaderSupportsTextureInt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_SetShaderSupportsTextureInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaderSupportsTextureInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataTransferHelper *op = static_cast<vtkDataTransferHelper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaderSupportsTextureInt(temp0);
    }
    else
    {
      op->vtkDataTransferHelper::SetShaderSupportsTextureInt(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataTransferHelper_IsSupported(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = vtkDataTransferHelper::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataTransferHelper_Methods[] = {
  {"IsTypeOf", PyvtkDataTransferHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataTransferHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataTransferHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataTransferHelper\nC++: static vtkDataTransferHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataTransferHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataTransferHelper\nC++: vtkDataTransferHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataTransferHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataTransferHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetContext", PyvtkDataTransferHelper_SetContext, METH_VARARGS,
   "SetContext(self, context:vtkRenderWindow) -> None\nC++: void SetContext(vtkRenderWindow *context)\n\nGet/Set the context. Context must be a vtkOpenGLRenderWindow.\nThis does not increase the reference count of the context to\navoid reference loops. SetContext() may raise an error if the\nOpenGL context does not support the required OpenGL extensions.\n"},
  {"GetContext", PyvtkDataTransferHelper_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\n"},
  {"SetCPUExtent", PyvtkDataTransferHelper_SetCPUExtent, METH_VARARGS,
   "SetCPUExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetCPUExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetCPUExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetCPUExtent(const int _arg[6])\n\nSet the CPU data extent. The extent matches the vtkDataArray\nsize. If the vtkDataArray comes from an vtkImageData and it is\npart of the point data, it is usually the vtkImageData extent. It\ncan be on cell data too, but in this case it does not match the\nvtkImageData extent. If the vtkDataArray comes from a vtkDataSet,\njust set it to a one-dimenstional extent equal to the number of\ntuples. Initial value is (0,0,0,0,0,0), a valid one tuple array.\n"},
  {"GetCPUExtent", PyvtkDataTransferHelper_GetCPUExtent, METH_VARARGS,
   "GetCPUExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetCPUExtent()\n\n"},
  {"SetGPUExtent", PyvtkDataTransferHelper_SetGPUExtent, METH_VARARGS,
   "SetGPUExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetGPUExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetGPUExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetGPUExtent(const int _arg[6])\n\nSet the GPU data extent. This is the sub-extent to copy from or\nto the GPU. This extent matches the size of the data to transfer.\nGPUExtent and TextureExtent don't have to match (GPUExtent can be\n1D whereas TextureExtent is 2D) but the number of elements have\nto match. Initial value is (0,0,0,0,0,0), a valid one tuple\narray.\n"},
  {"GetGPUExtent", PyvtkDataTransferHelper_GetGPUExtent, METH_VARARGS,
   "GetGPUExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetGPUExtent()\n\n"},
  {"SetTextureExtent", PyvtkDataTransferHelper_SetTextureExtent, METH_VARARGS,
   "SetTextureExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n     _arg5:int, _arg6:int) -> None\nC++: virtual void SetTextureExtent(int _arg1, int _arg2,\n    int _arg3, int _arg4, int _arg5, int _arg6)\nSetTextureExtent(self, _arg:(int, int, int, int, int, int))\n    -> None\nC++: virtual void SetTextureExtent(const int _arg[6])\n\nSet the texture data extent. This is the extent of the texture\nimage that will receive the data. This extent matches the size of\nthe data to transfer. If it is set to an invalid extent,\nGPUExtent is used. See more comment on GPUExtent. Initial value\nis an invalid extent.\n"},
  {"GetTextureExtent", PyvtkDataTransferHelper_GetTextureExtent, METH_VARARGS,
   "GetTextureExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetTextureExtent()\n\n"},
  {"GetExtentIsValid", PyvtkDataTransferHelper_GetExtentIsValid, METH_VARARGS,
   "GetExtentIsValid(self, extent:[int, ...]) -> bool\nC++: bool GetExtentIsValid(int *extent)\n\nTells if the given extent (6 int) is valid. True if min\nextent<=max extent.\n\\pre extent_exists: extent!=0\n"},
  {"GetCPUExtentIsValid", PyvtkDataTransferHelper_GetCPUExtentIsValid, METH_VARARGS,
   "GetCPUExtentIsValid(self) -> bool\nC++: bool GetCPUExtentIsValid()\n\nTells if CPUExtent is valid. True if min extent<=max extent.\n"},
  {"GetGPUExtentIsValid", PyvtkDataTransferHelper_GetGPUExtentIsValid, METH_VARARGS,
   "GetGPUExtentIsValid(self) -> bool\nC++: bool GetGPUExtentIsValid()\n\nTells if GPUExtent is valid. True if min extent<=max extent.\n"},
  {"GetTextureExtentIsValid", PyvtkDataTransferHelper_GetTextureExtentIsValid, METH_VARARGS,
   "GetTextureExtentIsValid(self) -> bool\nC++: bool GetTextureExtentIsValid()\n\nTells if TextureExtent is valid. True if min extent<=max extent.\n"},
  {"SetMinTextureDimension", PyvtkDataTransferHelper_SetMinTextureDimension, METH_VARARGS,
   "SetMinTextureDimension(self, _arg:int) -> None\nC++: virtual void SetMinTextureDimension(int _arg)\n\nDefine the minimal dimension of the texture regardless of the\ndimensions of the TextureExtent. Initial value is 1. A texture\nextent can have a given dimension 0D (one value), 1D, 2D or 3D.\nBy default 0D and 1D are translated into a 1D texture, 2D is\ntranslated into a 2D texture, 3D is translated into a 3D texture.\nTo make life easier when writing GLSL code and use only one type\nof sampler (ex: sampler2d), the default behavior can be changed\nby forcing a type of texture with this ivar. 1: default behavior.\nInitial value. 2: force 0D and 1D to be in a 2D texture 3: force\n0D, 1D and 2D texture to be in a 3D texture.\n"},
  {"GetMinTextureDimension", PyvtkDataTransferHelper_GetMinTextureDimension, METH_VARARGS,
   "GetMinTextureDimension(self) -> int\nC++: virtual int GetMinTextureDimension()\n\n"},
  {"GetArray", PyvtkDataTransferHelper_GetArray, METH_VARARGS,
   "GetArray(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetArray()\n\nGet/Set the CPU data buffer. Initial value is 0.\n"},
  {"SetArray", PyvtkDataTransferHelper_SetArray, METH_VARARGS,
   "SetArray(self, array:vtkDataArray) -> None\nC++: void SetArray(vtkDataArray *array)\n\n"},
  {"GetTexture", PyvtkDataTransferHelper_GetTexture, METH_VARARGS,
   "GetTexture(self) -> vtkTextureObject\nC++: virtual vtkTextureObject *GetTexture()\n\nGet/Set the GPU data buffer. Initial value is 0.\n"},
  {"SetTexture", PyvtkDataTransferHelper_SetTexture, METH_VARARGS,
   "SetTexture(self, texture:vtkTextureObject) -> None\nC++: void SetTexture(vtkTextureObject *texture)\n\n"},
  {"Upload", PyvtkDataTransferHelper_Upload, METH_VARARGS,
   "Upload(self, components:int=0, componentList:[int, ...]=...)\n    -> bool\nC++: bool Upload(int components=0, int *componentList=nullptr)\n\nOld comment. Upload Extent from CPU data buffer to GPU. The\nWholeExtent must match the Array size. New comment. Upload\nGPUExtent from CPU vtkDataArray to GPU texture. It is possible to\nsend a subset of the components or to specify and order of\ncomponents or both. If components=0, componentList is ignored and\nall components are passed, a texture cannot have more than 4\ncomponents.\n\\pre array_exists: array!=0\n\\pre array_not_empty: array->GetNumberOfTuples()>0\n\\pre valid_cpu_extent: this->GetCPUExtentIsValid()\n\\pre valid_cpu_extent_size:\n(CPUExtent[1]-CPUExtent[0]+1)*(CPUExtent[3]-CPUExtent[2]+1)*(CPUEx\ntent[5]-CPUExtent[4]+1)==array->GetNumberOfTuples()\n\\pre valid_gpu_extent: this->GetGPUExtentIsValid()\n\\pre gpu_extent_in_cpu_extent: CPUExtent[0]<=GPUExtent[0] &&\n    GPUExtent[1]<=CPUExtent[1] &&\nCPUExtent[2]<=GPUExtent[2] && GPUExtent[3]<=CPUExtent[3] &&\nCPUExtent[4]<=GPUExtent[4] && GPUExtent[5]<=CPUExtent[5] \\pre\ngpu_texture_size: !this->GetTextureExtentIsValid() ||\n(GPUExtent[1]-GPUExtent[0]+1)*(GPUExtent[3]-GPUExtent[2]+1)*(GPUEx\ntent[5]-GPUExtent[4]+1)==(TextureExtent[1]-TextureExtent[0]+1)*(Te\nxtureExtent[3]-TextureExtent[2]+1)*(TextureExtent[5]-TextureExtent\n[4]+1)\n\\pre texture_can_exist_or_not: texture==0 || texture!=0\n\\pre valid_components: (components==0 && componentList==0 &&\n    array->GetNumberOfComponents()<=4)\n|| (components>=1 && components<=array->GetNumberOfComponents()\n&& components<=4 && componentList!=0)\n"},
  {"Download", PyvtkDataTransferHelper_Download, METH_VARARGS,
   "Download(self) -> bool\nC++: bool Download()\n\nold comment: Download Extent from GPU data buffer to CPU. GPU\ndata size must exactly match Extent. CPU data buffer will be\nresized to match WholeExtent in which only the Extent will be\nfilled with the GPU data. new comment: Download GPUExtent from\nGPU texture to CPU vtkDataArray. If Array is not provided, it\nwill be created with the size of CPUExtent. But only the tuples\ncovered by GPUExtent will be download. In this case, if GPUExtent\ndoes not cover all GPUExtent, some of the vtkDataArray will be\nuninitialized. Reminder: A=>B <=> !A||B\n\\pre texture_exists: texture!=0\n\\pre array_not_empty: array==0 || array->GetNumberOfTuples()>0\n\\pre valid_cpu_extent: this->GetCPUExtentIsValid()\n\\pre valid_cpu_extent_size: array==0 ||\n(CPUExtent[1]-CPUExtent[0]+1)*(CPUExtent[3]-CPUExtent[2]+1)*(CPUEx\ntent[5]-CPUExtent[4]+1)==array->GetNumberOfTuples()\n\\pre valid_gpu_extent: this->GetGPUExtentIsValid()\n\\pre gpu_extent_in_cpu_extent: CPUExtent[0]<=GPUExtent[0] &&\n    GPUExtent[1]<=CPUExtent[1] &&\nCPUExtent[2]<=GPUExtent[2] && GPUExtent[3]<=CPUExtent[3] &&\nCPUExtent[4]<=GPUExtent[4] && GPUExtent[5]<=CPUExtent[5] \\pre\ngpu_texture_size: !this->GetTextureExtentIsValid() ||\n(GPUExtent[1]-GPUExtent[0]+1)*(GPUExtent[3]-GPUExtent[2]+1)*(GPUEx\ntent[5]-GPUExtent[4]+1)==(TextureExtent[1]-TextureExtent[0]+1)*(Te\nxtureExtent[3]-TextureExtent[2]+1)*(TextureExtent[5]-TextureExtent\n[4]+1)\n\\pre valid_components: array==0 ||\n    array->GetNumberOfComponents()<=4\n\\pre components_match: array==0 ||\n    (texture->GetComponents()==array->GetNumberOfComponents())\n"},
  {"DownloadAsync1", PyvtkDataTransferHelper_DownloadAsync1, METH_VARARGS,
   "DownloadAsync1(self) -> bool\nC++: bool DownloadAsync1()\n\nSplits the download in two operations\n* Asynchronously download from texture memory to PBO\n  (DownloadAsync1()).\n* Copy from pbo to user array (DownloadAsync2()).\n"},
  {"DownloadAsync2", PyvtkDataTransferHelper_DownloadAsync2, METH_VARARGS,
   "DownloadAsync2(self) -> bool\nC++: bool DownloadAsync2()\n\n"},
  {"GetShaderSupportsTextureInt", PyvtkDataTransferHelper_GetShaderSupportsTextureInt, METH_VARARGS,
   "GetShaderSupportsTextureInt(self) -> bool\nC++: bool GetShaderSupportsTextureInt()\n\n"},
  {"SetShaderSupportsTextureInt", PyvtkDataTransferHelper_SetShaderSupportsTextureInt, METH_VARARGS,
   "SetShaderSupportsTextureInt(self, value:bool) -> None\nC++: void SetShaderSupportsTextureInt(bool value)\n\n"},
  {"IsSupported", PyvtkDataTransferHelper_IsSupported, METH_VARARGS,
   "IsSupported(renWin:vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataTransferHelper_Doc =
  "vtkDataTransferHelper - is a helper class that aids in transferring\n data between CPU memory and GPU memory.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataTransferHelper is a helper class that aids in transferring\n"
  "data\n"
  " between the CPU memory and the GPU memory. The data in GPU memory is\n"
  " stored as textures which that in CPU memory is stored as\n"
  "vtkDataArray.\n"
  " vtkDataTransferHelper provides API to transfer only a sub-extent of\n"
  "CPU\n"
  " structured data to/from the GPU.\n\n"
  "@sa\n"
  " vtkPixelBufferObject vtkTextureObject vtkOpenGLExtensionManager\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataTransferHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkDataTransferHelper", // tp_name
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
  PyvtkDataTransferHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataTransferHelper_StaticNew()
{
  return vtkDataTransferHelper::New();
}

PyObject *PyvtkDataTransferHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataTransferHelper_Type, PyvtkDataTransferHelper_Methods,
    "vtkDataTransferHelper",
 &PyvtkDataTransferHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataTransferHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataTransferHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataTransferHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

