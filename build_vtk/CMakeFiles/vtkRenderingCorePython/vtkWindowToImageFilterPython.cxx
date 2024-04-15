// python wrapper for vtkWindowToImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWindowToImageFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWindowToImageFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkWindowToImageFilter_ClassNew(); }


static PyObject *
PyvtkWindowToImageFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWindowToImageFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindowToImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWindowToImageFilter *tempr = vtkWindowToImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindowToImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindowToImageFilter::NewInstance());

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
PyvtkWindowToImageFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWindowToImageFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWindowToImageFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkWindowToImageFilter::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindow *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkWindowToImageFilter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0, temp1);
    }
    else
    {
      op->vtkWindowToImageFilter::SetScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowToImageFilter_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkWindowToImageFilter::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowToImageFilter_SetScale_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkWindowToImageFilter::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWindowToImageFilter_SetScale_Methods[] = {
  {"SetScale", PyvtkWindowToImageFilter_SetScale_s2, METH_VARARGS,
   "@P *i"},
  {"SetScale", PyvtkWindowToImageFilter_SetScale_s3, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWindowToImageFilter_SetScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWindowToImageFilter_SetScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWindowToImageFilter_SetScale_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}


static PyObject *
PyvtkWindowToImageFilter_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkWindowToImageFilter::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetFixBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixBoundary(temp0);
    }
    else
    {
      op->vtkWindowToImageFilter::SetFixBoundary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetFixBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFixBoundary() :
      op->vtkWindowToImageFilter::GetFixBoundary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_FixBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixBoundaryOn();
    }
    else
    {
      op->vtkWindowToImageFilter::FixBoundaryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_FixBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixBoundaryOff();
    }
    else
    {
      op->vtkWindowToImageFilter::FixBoundaryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_ReadFrontBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFrontBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFrontBufferOn();
    }
    else
    {
      op->vtkWindowToImageFilter::ReadFrontBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_ReadFrontBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadFrontBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadFrontBufferOff();
    }
    else
    {
      op->vtkWindowToImageFilter::ReadFrontBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetReadFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadFrontBuffer() :
      op->vtkWindowToImageFilter::GetReadFrontBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetReadFrontBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadFrontBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadFrontBuffer(temp0);
    }
    else
    {
      op->vtkWindowToImageFilter::SetReadFrontBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_ShouldRerenderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShouldRerenderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShouldRerenderOn();
    }
    else
    {
      op->vtkWindowToImageFilter::ShouldRerenderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_ShouldRerenderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShouldRerenderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShouldRerenderOff();
    }
    else
    {
      op->vtkWindowToImageFilter::ShouldRerenderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetShouldRerender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShouldRerender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShouldRerender(temp0);
    }
    else
    {
      op->vtkWindowToImageFilter::SetShouldRerender(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetShouldRerender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShouldRerender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShouldRerender() :
      op->vtkWindowToImageFilter::GetShouldRerender());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetViewport_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWindowToImageFilter::SetViewport(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWindowToImageFilter_SetViewport_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkWindowToImageFilter::SetViewport(temp0);
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
PyvtkWindowToImageFilter_SetViewport(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkWindowToImageFilter_SetViewport_s1(self, args);
    case 1:
      return PyvtkWindowToImageFilter_SetViewport_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetViewport");
  return nullptr;
}


static PyObject *
PyvtkWindowToImageFilter_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkWindowToImageFilter::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInputBufferType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputBufferType(temp0);
    }
    else
    {
      op->vtkWindowToImageFilter::SetInputBufferType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetInputBufferType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputBufferType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputBufferType() :
      op->vtkWindowToImageFilter::GetInputBufferType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInputBufferTypeToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputBufferTypeToRGB();
    }
    else
    {
      op->vtkWindowToImageFilter::SetInputBufferTypeToRGB();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInputBufferTypeToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputBufferTypeToRGBA();
    }
    else
    {
      op->vtkWindowToImageFilter::SetInputBufferTypeToRGBA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_SetInputBufferTypeToZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputBufferTypeToZBuffer();
    }
    else
    {
      op->vtkWindowToImageFilter::SetInputBufferTypeToZBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowToImageFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowToImageFilter *op = static_cast<vtkWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkWindowToImageFilter::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWindowToImageFilter_Methods[] = {
  {"IsTypeOf", PyvtkWindowToImageFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWindowToImageFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWindowToImageFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWindowToImageFilter\nC++: static vtkWindowToImageFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWindowToImageFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWindowToImageFilter\nC++: vtkWindowToImageFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWindowToImageFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWindowToImageFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInput", PyvtkWindowToImageFilter_SetInput, METH_VARARGS,
   "SetInput(self, input:vtkWindow) -> None\nC++: void SetInput(vtkWindow *input)\n\nIndicates what renderer to get the pixel data from. Initial value\nis 0.\n"},
  {"GetInput", PyvtkWindowToImageFilter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkWindow\nC++: virtual vtkWindow *GetInput()\n\nReturns which renderer is being used as the source for the pixel\ndata. Initial value is 0.\n"},
  {"SetScale", PyvtkWindowToImageFilter_SetScale, METH_VARARGS,
   "SetScale(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetScale(int _arg1, int _arg2)\nSetScale(self, _arg:(int, int)) -> None\nC++: void SetScale(const int _arg[2])\nSetScale(self, scale:int) -> None\nC++: void SetScale(int scale)\n\nGet/Set the scale (or magnification) factors in X and Y.\n"},
  {"GetScale", PyvtkWindowToImageFilter_GetScale, METH_VARARGS,
   "GetScale(self) -> (int, int)\nC++: virtual int *GetScale()\n\n"},
  {"SetFixBoundary", PyvtkWindowToImageFilter_SetFixBoundary, METH_VARARGS,
   "SetFixBoundary(self, _arg:bool) -> None\nC++: virtual void SetFixBoundary(bool _arg)\n\nWhen scale factor > 1, this class render the full image in tiles.\nSometimes that results in artificial artifacts at internal tile\nseams. To overcome this issue, set this flag to true.\n"},
  {"GetFixBoundary", PyvtkWindowToImageFilter_GetFixBoundary, METH_VARARGS,
   "GetFixBoundary(self) -> bool\nC++: virtual bool GetFixBoundary()\n\n"},
  {"FixBoundaryOn", PyvtkWindowToImageFilter_FixBoundaryOn, METH_VARARGS,
   "FixBoundaryOn(self) -> None\nC++: virtual void FixBoundaryOn()\n\n"},
  {"FixBoundaryOff", PyvtkWindowToImageFilter_FixBoundaryOff, METH_VARARGS,
   "FixBoundaryOff(self) -> None\nC++: virtual void FixBoundaryOff()\n\n"},
  {"ReadFrontBufferOn", PyvtkWindowToImageFilter_ReadFrontBufferOn, METH_VARARGS,
   "ReadFrontBufferOn(self) -> None\nC++: virtual void ReadFrontBufferOn()\n\nSet/Get the flag that determines which buffer to read from. The\ndefault is to read from the front buffer.\n"},
  {"ReadFrontBufferOff", PyvtkWindowToImageFilter_ReadFrontBufferOff, METH_VARARGS,
   "ReadFrontBufferOff(self) -> None\nC++: virtual void ReadFrontBufferOff()\n\n"},
  {"GetReadFrontBuffer", PyvtkWindowToImageFilter_GetReadFrontBuffer, METH_VARARGS,
   "GetReadFrontBuffer(self) -> int\nC++: virtual vtkTypeBool GetReadFrontBuffer()\n\n"},
  {"SetReadFrontBuffer", PyvtkWindowToImageFilter_SetReadFrontBuffer, METH_VARARGS,
   "SetReadFrontBuffer(self, _arg:int) -> None\nC++: virtual void SetReadFrontBuffer(vtkTypeBool _arg)\n\n"},
  {"ShouldRerenderOn", PyvtkWindowToImageFilter_ShouldRerenderOn, METH_VARARGS,
   "ShouldRerenderOn(self) -> None\nC++: virtual void ShouldRerenderOn()\n\nSet/get whether to re-render the input window. Initial value is\ntrue. (This option makes no difference if scale factor > 1.)\n"},
  {"ShouldRerenderOff", PyvtkWindowToImageFilter_ShouldRerenderOff, METH_VARARGS,
   "ShouldRerenderOff(self) -> None\nC++: virtual void ShouldRerenderOff()\n\n"},
  {"SetShouldRerender", PyvtkWindowToImageFilter_SetShouldRerender, METH_VARARGS,
   "SetShouldRerender(self, _arg:int) -> None\nC++: virtual void SetShouldRerender(vtkTypeBool _arg)\n\n"},
  {"GetShouldRerender", PyvtkWindowToImageFilter_GetShouldRerender, METH_VARARGS,
   "GetShouldRerender(self) -> int\nC++: virtual vtkTypeBool GetShouldRerender()\n\n"},
  {"SetViewport", PyvtkWindowToImageFilter_SetViewport, METH_VARARGS,
   "SetViewport(self, __a:float, __b:float, __c:float, __d:float)\n    -> None\nC++: void SetViewport(double, double, double, double)\nSetViewport(self, __a:[float, ...]) -> None\nC++: void SetViewport(double *)\n\nSet/get the extents to be used to generate the image. Initial\nvalue is {0,0,1,1} (This option does not work if scale factor >\n1.)\n"},
  {"GetViewport", PyvtkWindowToImageFilter_GetViewport, METH_VARARGS,
   "GetViewport(self) -> (float, float, float, float)\nC++: virtual double *GetViewport()\n\n"},
  {"SetInputBufferType", PyvtkWindowToImageFilter_SetInputBufferType, METH_VARARGS,
   "SetInputBufferType(self, _arg:int) -> None\nC++: virtual void SetInputBufferType(int _arg)\n\nSet/get the window buffer from which data will be read.  Choices\ninclude VTK_RGB (read the color image from the window), VTK_RGBA\n(same, but include the alpha channel), and VTK_ZBUFFER (depth\nbuffer, returned as a float array). Initial value is VTK_RGB.\n"},
  {"GetInputBufferType", PyvtkWindowToImageFilter_GetInputBufferType, METH_VARARGS,
   "GetInputBufferType(self) -> int\nC++: virtual int GetInputBufferType()\n\n"},
  {"SetInputBufferTypeToRGB", PyvtkWindowToImageFilter_SetInputBufferTypeToRGB, METH_VARARGS,
   "SetInputBufferTypeToRGB(self) -> None\nC++: void SetInputBufferTypeToRGB()\n\n"},
  {"SetInputBufferTypeToRGBA", PyvtkWindowToImageFilter_SetInputBufferTypeToRGBA, METH_VARARGS,
   "SetInputBufferTypeToRGBA(self) -> None\nC++: void SetInputBufferTypeToRGBA()\n\n"},
  {"SetInputBufferTypeToZBuffer", PyvtkWindowToImageFilter_SetInputBufferTypeToZBuffer, METH_VARARGS,
   "SetInputBufferTypeToZBuffer(self) -> None\nC++: void SetInputBufferTypeToZBuffer()\n\n"},
  {"GetOutput", PyvtkWindowToImageFilter_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWindowToImageFilter_Doc =
  "vtkWindowToImageFilter - Use a vtkWindow as input to image pipeline\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkWindowToImageFilter provides methods needed to read the data in a\n"
  "vtkWindow and use it as input to the imaging pipeline. This is useful\n"
  "for saving an image to a file for example. The window can be read as\n"
  "either RGB or RGBA pixels;  in addition, the depth buffer can also be\n"
  "read.   RGB and RGBA pixels are of type unsigned char, while Z-Buffer\n"
  "data is returned as floats.  Use this filter to convert RenderWindows\n"
  "or ImageWindows to an image format.\n\n"
  "@warning\n"
  "A vtkWindow doesn't behave like other parts of the VTK pipeline: its\n"
  "modification time doesn't get updated when an image is rendered.  As\n"
  "a result, naive use of vtkWindowToImageFilter will produce an image\n"
  "of the first image that the window rendered, but which is never\n"
  "updated on subsequent window updates.  This behavior is unexpected\n"
  "and in general undesirable.\n\n"
  "@warning\n"
  "To force an update of the output image, call vtkWindowToImageFilter's\n"
  "Modified method after rendering to the window.\n\n"
  "@warning\n"
  "In VTK versions 4 and later, this filter is part of the canonical way\n"
  "to output an image of a window to a file (replacing the obsolete\n"
  "SaveImageAsPPM method for vtkRenderWindows that existed in 3.2 and\n"
  "earlier).  Connect this filter to the output of the window, and\n"
  "filter's output to a writer such as vtkPNGWriter.\n\n"
  "@warning\n"
  "Reading back alpha planes is dependent on the correct operation of\n"
  "the render window's GetRGBACharPixelData method, which in turn is\n"
  "dependent on the configuration of the window's alpha planes.  As of\n"
  "VTK 4.4+, machine-independent behavior is not automatically assured\n"
  "because of these dependencies.\n\n"
  "@sa\n"
  "vtkRendererSource vtkRendererPointCloudSource vtkWindow\n"
  "vtkRenderLargeImage\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWindowToImageFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkWindowToImageFilter", // tp_name
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
  PyvtkWindowToImageFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWindowToImageFilter_StaticNew()
{
  return vtkWindowToImageFilter::New();
}

PyObject *PyvtkWindowToImageFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWindowToImageFilter_Type, PyvtkWindowToImageFilter_Methods,
    "vtkWindowToImageFilter",
 &PyvtkWindowToImageFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWindowToImageFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWindowToImageFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWindowToImageFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(5);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_ZBUFFER", o);
    Py_DECREF(o);
  }
}

