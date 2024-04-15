// python wrapper for vtkFixedPointRayCastImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFixedPointRayCastImage.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFixedPointRayCastImage(PyObject *dict); }
extern "C" { PyObject *PyvtkFixedPointRayCastImage_ClassNew(); }


static PyObject *
PyvtkFixedPointRayCastImage_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFixedPointRayCastImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedPointRayCastImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFixedPointRayCastImage *tempr = vtkFixedPointRayCastImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointRayCastImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedPointRayCastImage::NewInstance());

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
PyvtkFixedPointRayCastImage_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFixedPointRayCastImage::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFixedPointRayCastImage::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetImage() :
      op->vtkFixedPointRayCastImage::GetImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageViewportSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImageViewportSize(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageViewportSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageViewportSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetImageViewportSize(temp0);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageViewportSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageViewportSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFixedPointRayCastImage_SetImageViewportSize_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetImageViewportSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImageViewportSize");
  return nullptr;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetImageViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageViewportSize() :
      op->vtkFixedPointRayCastImage::GetImageViewportSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageMemorySize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImageMemorySize(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageMemorySize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageMemorySize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetImageMemorySize(temp0);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageMemorySize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageMemorySize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFixedPointRayCastImage_SetImageMemorySize_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetImageMemorySize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImageMemorySize");
  return nullptr;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetImageMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageMemorySize() :
      op->vtkFixedPointRayCastImage::GetImageMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageInUseSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImageInUseSize(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageInUseSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageInUseSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetImageInUseSize(temp0);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageInUseSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageInUseSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFixedPointRayCastImage_SetImageInUseSize_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetImageInUseSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImageInUseSize");
  return nullptr;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetImageInUseSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageInUseSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageInUseSize() :
      op->vtkFixedPointRayCastImage::GetImageInUseSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetImageOrigin(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageOrigin(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetImageOrigin(temp0);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetImageOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFixedPointRayCastImage_SetImageOrigin_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetImageOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetImageOrigin");
  return nullptr;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetImageOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetImageOrigin() :
      op->vtkFixedPointRayCastImage::GetImageOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageSampleDistance(temp0);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetImageSampleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetImageSampleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSampleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetImageSampleDistance() :
      op->vtkFixedPointRayCastImage::GetImageSampleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_AllocateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllocateImage();
    }
    else
    {
      op->vtkFixedPointRayCastImage::AllocateImage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_ClearImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearImage();
    }
    else
    {
      op->vtkFixedPointRayCastImage::ClearImage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetZBufferSize(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetZBufferSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZBufferSize(temp0);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetZBufferSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFixedPointRayCastImage_SetZBufferSize_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetZBufferSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZBufferSize");
  return nullptr;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetZBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetZBufferSize() :
      op->vtkFixedPointRayCastImage::GetZBufferSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBufferOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetZBufferOrigin(temp0, temp1);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetZBufferOrigin(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZBufferOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetZBufferOrigin(temp0);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetZBufferOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFixedPointRayCastImage_SetZBufferOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFixedPointRayCastImage_SetZBufferOrigin_s1(self, args);
    case 1:
      return PyvtkFixedPointRayCastImage_SetZBufferOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetZBufferOrigin");
  return nullptr;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetZBufferOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetZBufferOrigin() :
      op->vtkFixedPointRayCastImage::GetZBufferOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_SetUseZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseZBuffer(temp0);
    }
    else
    {
      op->vtkFixedPointRayCastImage::SetUseZBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetUseZBufferMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseZBufferMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseZBufferMinValue() :
      op->vtkFixedPointRayCastImage::GetUseZBufferMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetUseZBufferMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseZBufferMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseZBufferMaxValue() :
      op->vtkFixedPointRayCastImage::GetUseZBufferMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetUseZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseZBuffer() :
      op->vtkFixedPointRayCastImage::GetUseZBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_UseZBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseZBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseZBufferOn();
    }
    else
    {
      op->vtkFixedPointRayCastImage::UseZBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_UseZBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseZBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseZBufferOff();
    }
    else
    {
      op->vtkFixedPointRayCastImage::UseZBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetZBufferValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBufferValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    float tempr = (ap.IsBound() ?
      op->GetZBufferValue(temp0, temp1) :
      op->vtkFixedPointRayCastImage::GetZBufferValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_GetZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetZBuffer() :
      op->vtkFixedPointRayCastImage::GetZBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointRayCastImage_AllocateZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointRayCastImage *op = static_cast<vtkFixedPointRayCastImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllocateZBuffer();
    }
    else
    {
      op->vtkFixedPointRayCastImage::AllocateZBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFixedPointRayCastImage_Methods[] = {
  {"IsTypeOf", PyvtkFixedPointRayCastImage_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFixedPointRayCastImage_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFixedPointRayCastImage_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFixedPointRayCastImage\nC++: static vtkFixedPointRayCastImage *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFixedPointRayCastImage_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFixedPointRayCastImage\nC++: vtkFixedPointRayCastImage *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFixedPointRayCastImage_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFixedPointRayCastImage_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetImage", PyvtkFixedPointRayCastImage_GetImage, METH_VARARGS,
   "GetImage(self) -> Pointer\nC++: unsigned short *GetImage()\n\nGet the internal storage for the image. It is a pointer to\nunsigned short with four components (RGBA) per pixel. This memory\nis allocated when the AllocateImage method is called.\n"},
  {"SetImageViewportSize", PyvtkFixedPointRayCastImage_SetImageViewportSize, METH_VARARGS,
   "SetImageViewportSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetImageViewportSize(int _arg1, int _arg2)\nSetImageViewportSize(self, _arg:(int, int)) -> None\nC++: void SetImageViewportSize(const int _arg[2])\n\nSet / Get the ImageViewportSize. This is the size of the whole\nviewport in pixels.\n"},
  {"GetImageViewportSize", PyvtkFixedPointRayCastImage_GetImageViewportSize, METH_VARARGS,
   "GetImageViewportSize(self) -> (int, int)\nC++: virtual int *GetImageViewportSize()\n\n"},
  {"SetImageMemorySize", PyvtkFixedPointRayCastImage_SetImageMemorySize, METH_VARARGS,
   "SetImageMemorySize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetImageMemorySize(int _arg1, int _arg2)\nSetImageMemorySize(self, _arg:(int, int)) -> None\nC++: void SetImageMemorySize(const int _arg[2])\n\nSet / Get the ImageMemorySize. This is the size in pixels of the\nImage ivar. This will be a power of two in order to ensure that\nthe texture can be rendered by graphics hardware that requires\npower of two textures.\n"},
  {"GetImageMemorySize", PyvtkFixedPointRayCastImage_GetImageMemorySize, METH_VARARGS,
   "GetImageMemorySize(self) -> (int, int)\nC++: virtual int *GetImageMemorySize()\n\n"},
  {"SetImageInUseSize", PyvtkFixedPointRayCastImage_SetImageInUseSize, METH_VARARGS,
   "SetImageInUseSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetImageInUseSize(int _arg1, int _arg2)\nSetImageInUseSize(self, _arg:(int, int)) -> None\nC++: void SetImageInUseSize(const int _arg[2])\n\nSet / Get the size of the image we are actually using. As long as\nthe memory size is big enough, but not too big, we won't bother deleting and re-allocated,\nwe'll just continue to use the memory size we have. This size\nwill always be equal to or less than the ImageMemorySize.\n"},
  {"GetImageInUseSize", PyvtkFixedPointRayCastImage_GetImageInUseSize, METH_VARARGS,
   "GetImageInUseSize(self) -> (int, int)\nC++: virtual int *GetImageInUseSize()\n\n"},
  {"SetImageOrigin", PyvtkFixedPointRayCastImage_SetImageOrigin, METH_VARARGS,
   "SetImageOrigin(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetImageOrigin(int _arg1, int _arg2)\nSetImageOrigin(self, _arg:(int, int)) -> None\nC++: void SetImageOrigin(const int _arg[2])\n\nSet / Get the origin of the image. This is the starting pixel\nwithin the whole viewport that our Image starts on. That is, we\ncould be generating just a subregion of the whole viewport due to\nthe fact that our volume occupies only a portion of the viewport.\nThe Image pixels will start from this location.\n"},
  {"GetImageOrigin", PyvtkFixedPointRayCastImage_GetImageOrigin, METH_VARARGS,
   "GetImageOrigin(self) -> (int, int)\nC++: virtual int *GetImageOrigin()\n\n"},
  {"SetImageSampleDistance", PyvtkFixedPointRayCastImage_SetImageSampleDistance, METH_VARARGS,
   "SetImageSampleDistance(self, _arg:float) -> None\nC++: virtual void SetImageSampleDistance(float _arg)\n\nSet / Get the ImageSampleDistance that will be used for\nrendering. This is a copy of the value stored in the mapper. It\nis stored here for sharing between all mappers that are\nparticipating in the creation of this image.\n"},
  {"GetImageSampleDistance", PyvtkFixedPointRayCastImage_GetImageSampleDistance, METH_VARARGS,
   "GetImageSampleDistance(self) -> float\nC++: virtual float GetImageSampleDistance()\n\n"},
  {"AllocateImage", PyvtkFixedPointRayCastImage_AllocateImage, METH_VARARGS,
   "AllocateImage(self) -> None\nC++: void AllocateImage()\n\nCall this method once the ImageMemorySize has been set the\nallocate the image. If an image already exists, it will be\ndeleted first.\n"},
  {"ClearImage", PyvtkFixedPointRayCastImage_ClearImage, METH_VARARGS,
   "ClearImage(self) -> None\nC++: void ClearImage()\n\nClear the image to (0,0,0,0) for each pixel.\n"},
  {"SetZBufferSize", PyvtkFixedPointRayCastImage_SetZBufferSize, METH_VARARGS,
   "SetZBufferSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetZBufferSize(int _arg1, int _arg2)\nSetZBufferSize(self, _arg:(int, int)) -> None\nC++: void SetZBufferSize(const int _arg[2])\n\nSet / Get the size of the ZBuffer in pixels. The zbuffer will be\ncaptured for the region of the screen covered by the\nImageInUseSize image. However, due to subsampling, the size of\nthe ImageInUseSize image may be smaller than this ZBuffer image\nwhich will be captured at screen resolution.\n"},
  {"GetZBufferSize", PyvtkFixedPointRayCastImage_GetZBufferSize, METH_VARARGS,
   "GetZBufferSize(self) -> (int, int)\nC++: virtual int *GetZBufferSize()\n\n"},
  {"SetZBufferOrigin", PyvtkFixedPointRayCastImage_SetZBufferOrigin, METH_VARARGS,
   "SetZBufferOrigin(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetZBufferOrigin(int _arg1, int _arg2)\nSetZBufferOrigin(self, _arg:(int, int)) -> None\nC++: void SetZBufferOrigin(const int _arg[2])\n\nSet / Get the origin of the ZBuffer. This is the distance from\nthe lower left corner of the viewport where the ZBuffer started\n(multiply the ImageOrigin by the ImageSampleDistance) This is the\npixel location on the full resolution viewport where the ZBuffer\ncapture will start. These values are used to convert the (x,y)\npixel location within the ImageInUseSize image into a ZBuffer\nlocation.\n"},
  {"GetZBufferOrigin", PyvtkFixedPointRayCastImage_GetZBufferOrigin, METH_VARARGS,
   "GetZBufferOrigin(self) -> (int, int)\nC++: virtual int *GetZBufferOrigin()\n\n"},
  {"SetUseZBuffer", PyvtkFixedPointRayCastImage_SetUseZBuffer, METH_VARARGS,
   "SetUseZBuffer(self, _arg:int) -> None\nC++: virtual void SetUseZBuffer(vtkTypeBool _arg)\n\nThe UseZBuffer flag indicates whether the ZBuffer is in use. The\nZBuffer is captured and used when IntermixIntersectingGeometry is\non in the mapper, and when there are props that have been\nrendered before the current volume.\n"},
  {"GetUseZBufferMinValue", PyvtkFixedPointRayCastImage_GetUseZBufferMinValue, METH_VARARGS,
   "GetUseZBufferMinValue(self) -> int\nC++: virtual vtkTypeBool GetUseZBufferMinValue()\n\n"},
  {"GetUseZBufferMaxValue", PyvtkFixedPointRayCastImage_GetUseZBufferMaxValue, METH_VARARGS,
   "GetUseZBufferMaxValue(self) -> int\nC++: virtual vtkTypeBool GetUseZBufferMaxValue()\n\n"},
  {"GetUseZBuffer", PyvtkFixedPointRayCastImage_GetUseZBuffer, METH_VARARGS,
   "GetUseZBuffer(self) -> int\nC++: virtual vtkTypeBool GetUseZBuffer()\n\n"},
  {"UseZBufferOn", PyvtkFixedPointRayCastImage_UseZBufferOn, METH_VARARGS,
   "UseZBufferOn(self) -> None\nC++: virtual void UseZBufferOn()\n\n"},
  {"UseZBufferOff", PyvtkFixedPointRayCastImage_UseZBufferOff, METH_VARARGS,
   "UseZBufferOff(self) -> None\nC++: virtual void UseZBufferOff()\n\n"},
  {"GetZBufferValue", PyvtkFixedPointRayCastImage_GetZBufferValue, METH_VARARGS,
   "GetZBufferValue(self, x:int, y:int) -> float\nC++: float GetZBufferValue(int x, int y)\n\nGet the ZBuffer value corresponding to location (x,y) where (x,y)\nare indexing into the ImageInUse image. This must be converted to\nthe zbuffer image coordinates. Nearest neighbor value is\nreturned. If UseZBuffer is off, then 1.0 is always returned.\n"},
  {"GetZBuffer", PyvtkFixedPointRayCastImage_GetZBuffer, METH_VARARGS,
   "GetZBuffer(self) -> Pointer\nC++: float *GetZBuffer()\n\nGet the ZBuffer. The size of the ZBuffer should be specific with\nSetZBufferSize, and AllocateZBuffer method should be called\nbefore getting the ZBuffer.\n"},
  {"AllocateZBuffer", PyvtkFixedPointRayCastImage_AllocateZBuffer, METH_VARARGS,
   "AllocateZBuffer(self) -> None\nC++: void AllocateZBuffer()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFixedPointRayCastImage_Doc =
  "vtkFixedPointRayCastImage - helper class for a ray cast image\n\n"
  "Superclass: vtkObject\n\n"
  "This is a helper class for storing the ray cast image including the\n"
  "underlying data and the size of the image. This class is not intended\n"
  "to be used directly - just as an internal class in the\n"
  "vtkFixedPointVolumeRayCastMapper so that multiple mappers can share\n"
  "the same image. This class also stored the ZBuffer (if necessary due\n"
  "to intermixed geometry). Perhaps this class could be generalized in\n"
  "the future to be used for other ray cast methods other than the fixed\n"
  "point method.\n\n"
  "@sa\n"
  "vtkFixedPointVolumeRayCastMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFixedPointRayCastImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkFixedPointRayCastImage", // tp_name
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
  PyvtkFixedPointRayCastImage_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFixedPointRayCastImage_StaticNew()
{
  return vtkFixedPointRayCastImage::New();
}

PyObject *PyvtkFixedPointRayCastImage_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFixedPointRayCastImage_Type, PyvtkFixedPointRayCastImage_Methods,
    "vtkFixedPointRayCastImage",
 &PyvtkFixedPointRayCastImage_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFixedPointRayCastImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFixedPointRayCastImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFixedPointRayCastImage", o) != 0)
  {
    Py_DECREF(o);
  }

}

