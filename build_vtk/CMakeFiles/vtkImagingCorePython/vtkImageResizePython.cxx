// python wrapper for vtkImageResize
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageResize.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageResize(PyObject *dict); }
extern "C" { PyObject *PyvtkImageResize_ClassNew(); }


static PyObject *
PyvtkImageResize_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageResize::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResize::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageResize *tempr = vtkImageResize::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageResize *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResize::NewInstance());

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
PyvtkImageResize_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageResize::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageResize::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResizeMethod(temp0);
    }
    else
    {
      op->vtkImageResize::SetResizeMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethodMinValue() :
      op->vtkImageResize::GetResizeMethodMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethodMaxValue() :
      op->vtkImageResize::GetResizeMethodMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResizeMethod() :
      op->vtkImageResize::GetResizeMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToOutputDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResizeMethodToOutputDimensions();
    }
    else
    {
      op->vtkImageResize::SetResizeMethodToOutputDimensions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResizeMethodToOutputSpacing();
    }
    else
    {
      op->vtkImageResize::SetResizeMethodToOutputSpacing();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetResizeMethodToMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizeMethodToMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResizeMethodToMagnificationFactors();
    }
    else
    {
      op->vtkImageResize::SetResizeMethodToMagnificationFactors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetResizeMethodAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizeMethodAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetResizeMethodAsString() :
      op->vtkImageResize::GetResizeMethodAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetOutputDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOutputDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResize::SetOutputDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDimensions(temp0);
    }
    else
    {
      op->vtkImageResize::SetOutputDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResize_SetOutputDimensions_s1(self, args);
    case 1:
      return PyvtkImageResize_SetOutputDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputDimensions");
  return nullptr;
}


static PyObject *
PyvtkImageResize_GetOutputDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputDimensions() :
      op->vtkImageResize::GetOutputDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResize::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkImageResize::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResize_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageResize_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageResize_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkImageResize::GetOutputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetMagnificationFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

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
      op->SetMagnificationFactors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResize::SetMagnificationFactors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetMagnificationFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMagnificationFactors(temp0);
    }
    else
    {
      op->vtkImageResize::SetMagnificationFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetMagnificationFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResize_SetMagnificationFactors_s1(self, args);
    case 1:
      return PyvtkImageResize_SetMagnificationFactors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMagnificationFactors");
  return nullptr;
}


static PyObject *
PyvtkImageResize_GetMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMagnificationFactors() :
      op->vtkImageResize::GetMagnificationFactors());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkImageResize::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOn();
    }
    else
    {
      op->vtkImageResize::BorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOff();
    }
    else
    {
      op->vtkImageResize::BorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkImageResize::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropping(temp0);
    }
    else
    {
      op->vtkImageResize::SetCropping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_CroppingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOn();
    }
    else
    {
      op->vtkImageResize::CroppingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_CroppingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CroppingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CroppingOff();
    }
    else
    {
      op->vtkImageResize::CroppingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCropping() :
      op->vtkImageResize::GetCropping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetCroppingRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageResize::SetCroppingRegion(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetCroppingRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegion(temp0);
    }
    else
    {
      op->vtkImageResize::SetCroppingRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResize_SetCroppingRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageResize_SetCroppingRegion_s1(self, args);
    case 1:
      return PyvtkImageResize_SetCroppingRegion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegion");
  return nullptr;
}


static PyObject *
PyvtkImageResize_GetCroppingRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCroppingRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCroppingRegion() :
      op->vtkImageResize::GetCroppingRegion());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkImageResize::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkImageResize::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkImageResize::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkImageResize::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  vtkAbstractImageInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractImageInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolator(temp0);
    }
    else
    {
      op->vtkImageResize::SetInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractImageInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkImageResize::GetInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResize_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResize *op = static_cast<vtkImageResize *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageResize::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageResize_Methods[] = {
  {"IsTypeOf", PyvtkImageResize_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageResize_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageResize_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageResize\nC++: static vtkImageResize *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageResize_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageResize\nC++: vtkImageResize *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageResize_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageResize_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetResizeMethod", PyvtkImageResize_SetResizeMethod, METH_VARARGS,
   "SetResizeMethod(self, _arg:int) -> None\nC++: virtual void SetResizeMethod(int _arg)\n\nThe resizing method to use.  The default is to set the output\nimage dimensions, and allow the filter to resize the image to\nthese new dimensions.  It is also possible to resize the image by\nsetting the output image spacing or by setting a magnification\nfactor.\n"},
  {"GetResizeMethodMinValue", PyvtkImageResize_GetResizeMethodMinValue, METH_VARARGS,
   "GetResizeMethodMinValue(self) -> int\nC++: virtual int GetResizeMethodMinValue()\n\n"},
  {"GetResizeMethodMaxValue", PyvtkImageResize_GetResizeMethodMaxValue, METH_VARARGS,
   "GetResizeMethodMaxValue(self) -> int\nC++: virtual int GetResizeMethodMaxValue()\n\n"},
  {"GetResizeMethod", PyvtkImageResize_GetResizeMethod, METH_VARARGS,
   "GetResizeMethod(self) -> int\nC++: virtual int GetResizeMethod()\n\n"},
  {"SetResizeMethodToOutputDimensions", PyvtkImageResize_SetResizeMethodToOutputDimensions, METH_VARARGS,
   "SetResizeMethodToOutputDimensions(self) -> None\nC++: void SetResizeMethodToOutputDimensions()\n\n"},
  {"SetResizeMethodToOutputSpacing", PyvtkImageResize_SetResizeMethodToOutputSpacing, METH_VARARGS,
   "SetResizeMethodToOutputSpacing(self) -> None\nC++: void SetResizeMethodToOutputSpacing()\n\n"},
  {"SetResizeMethodToMagnificationFactors", PyvtkImageResize_SetResizeMethodToMagnificationFactors, METH_VARARGS,
   "SetResizeMethodToMagnificationFactors(self) -> None\nC++: void SetResizeMethodToMagnificationFactors()\n\n"},
  {"GetResizeMethodAsString", PyvtkImageResize_GetResizeMethodAsString, METH_VARARGS,
   "GetResizeMethodAsString(self) -> str\nC++: virtual const char *GetResizeMethodAsString()\n\n"},
  {"SetOutputDimensions", PyvtkImageResize_SetOutputDimensions, METH_VARARGS,
   "SetOutputDimensions(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetOutputDimensions(int _arg1, int _arg2,\n    int _arg3)\nSetOutputDimensions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetOutputDimensions(const int _arg[3])\n\nThe desired output dimensions.  This is only used if the\nResizeMethod is set to OutputDimensions.  If you want to keep one\nof the image dimensions the same as the input, then set that\ndimension to -1.\n"},
  {"GetOutputDimensions", PyvtkImageResize_GetOutputDimensions, METH_VARARGS,
   "GetOutputDimensions(self) -> (int, int, int)\nC++: virtual int *GetOutputDimensions()\n\n"},
  {"SetOutputSpacing", PyvtkImageResize_SetOutputSpacing, METH_VARARGS,
   "SetOutputSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOutputSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetOutputSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOutputSpacing(const double _arg[3])\n\nThe desired output spacing.  This is only used if the\nResizeMethod is set to OutputSpacing.  If you want to keep one of\nthe original spacing values, then set that spacing value to zero.\n"},
  {"GetOutputSpacing", PyvtkImageResize_GetOutputSpacing, METH_VARARGS,
   "GetOutputSpacing(self) -> (float, float, float)\nC++: virtual double *GetOutputSpacing()\n\n"},
  {"SetMagnificationFactors", PyvtkImageResize_SetMagnificationFactors, METH_VARARGS,
   "SetMagnificationFactors(self, _arg1:float, _arg2:float,\n    _arg3:float) -> None\nC++: virtual void SetMagnificationFactors(double _arg1,\n    double _arg2, double _arg3)\nSetMagnificationFactors(self, _arg:(float, float, float)) -> None\nC++: virtual void SetMagnificationFactors(const double _arg[3])\n\nThe desired magnification factor, meaning that the sample spacing\nwill be reduced by this factor.  This setting is only used if the\nResizeMethod is set to MagnificationFactors.\n"},
  {"GetMagnificationFactors", PyvtkImageResize_GetMagnificationFactors, METH_VARARGS,
   "GetMagnificationFactors(self) -> (float, float, float)\nC++: virtual double *GetMagnificationFactors()\n\n"},
  {"SetBorder", PyvtkImageResize_SetBorder, METH_VARARGS,
   "SetBorder(self, _arg:int) -> None\nC++: virtual void SetBorder(vtkTypeBool _arg)\n\nIf Border is Off (the default), then the centers of each of the\ncorner voxels will be considered to form the rectangular bounds\nof the image. This is the way that VTK normally computes image\nbounds.  If Border is On, then the image bounds will be defined\nby the outer corners of the voxels. This setting impacts how the\nresizing is done.  For example, if a MagnificationFactor of two\nis applied to a 256x256 image, the output image will be 512x512\nif Border is On, or 511x511 if Border is Off.\n"},
  {"BorderOn", PyvtkImageResize_BorderOn, METH_VARARGS,
   "BorderOn(self) -> None\nC++: virtual void BorderOn()\n\n"},
  {"BorderOff", PyvtkImageResize_BorderOff, METH_VARARGS,
   "BorderOff(self) -> None\nC++: virtual void BorderOff()\n\n"},
  {"GetBorder", PyvtkImageResize_GetBorder, METH_VARARGS,
   "GetBorder(self) -> int\nC++: virtual vtkTypeBool GetBorder()\n\n"},
  {"SetCropping", PyvtkImageResize_SetCropping, METH_VARARGS,
   "SetCropping(self, _arg:int) -> None\nC++: virtual void SetCropping(vtkTypeBool _arg)\n\nWhether to crop the input image before resizing (Off by default).\n If this is On, then the CroppingRegion must be set.\n"},
  {"CroppingOn", PyvtkImageResize_CroppingOn, METH_VARARGS,
   "CroppingOn(self) -> None\nC++: virtual void CroppingOn()\n\n"},
  {"CroppingOff", PyvtkImageResize_CroppingOff, METH_VARARGS,
   "CroppingOff(self) -> None\nC++: virtual void CroppingOff()\n\n"},
  {"GetCropping", PyvtkImageResize_GetCropping, METH_VARARGS,
   "GetCropping(self) -> int\nC++: virtual vtkTypeBool GetCropping()\n\n"},
  {"SetCroppingRegion", PyvtkImageResize_SetCroppingRegion, METH_VARARGS,
   "SetCroppingRegion(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetCroppingRegion(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetCroppingRegion(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetCroppingRegion(const double _arg[6])\n\nIf Cropping is On, then the CroppingRegion will be used to crop\nthe image before it is resized.  The region must be specified in\ndata coordinates, rather than voxel indices.\n"},
  {"GetCroppingRegion", PyvtkImageResize_GetCroppingRegion, METH_VARARGS,
   "GetCroppingRegion(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetCroppingRegion()\n\n"},
  {"SetInterpolate", PyvtkImageResize_SetInterpolate, METH_VARARGS,
   "SetInterpolate(self, _arg:int) -> None\nC++: virtual void SetInterpolate(vtkTypeBool _arg)\n\nTurn interpolation on or off (by default, interpolation is on).\n"},
  {"InterpolateOn", PyvtkImageResize_InterpolateOn, METH_VARARGS,
   "InterpolateOn(self) -> None\nC++: virtual void InterpolateOn()\n\n"},
  {"InterpolateOff", PyvtkImageResize_InterpolateOff, METH_VARARGS,
   "InterpolateOff(self) -> None\nC++: virtual void InterpolateOff()\n\n"},
  {"GetInterpolate", PyvtkImageResize_GetInterpolate, METH_VARARGS,
   "GetInterpolate(self) -> int\nC++: virtual vtkTypeBool GetInterpolate()\n\n"},
  {"SetInterpolator", PyvtkImageResize_SetInterpolator, METH_VARARGS,
   "SetInterpolator(self, sampler:vtkAbstractImageInterpolator)\n    -> None\nC++: virtual void SetInterpolator(\n    vtkAbstractImageInterpolator *sampler)\n\nSet the interpolator for resampling the data.\n"},
  {"GetInterpolator", PyvtkImageResize_GetInterpolator, METH_VARARGS,
   "GetInterpolator(self) -> vtkAbstractImageInterpolator\nC++: virtual vtkAbstractImageInterpolator *GetInterpolator()\n\n"},
  {"GetMTime", PyvtkImageResize_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the modified time of the filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageResize_Doc =
  "vtkImageResize - High-quality image resizing filter\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageResize will magnify or shrink an image with interpolation and\n"
  "antialiasing.  The resizing is done with a 5-lobe Lanczos-windowed\n"
  "sinc filter that is bandlimited to the output sampling frequency in\n"
  "order to avoid aliasing when the image size is reduced.  This filter\n"
  "utilizes a O(n) algorithm to provide good efficiency even though the\n"
  "filtering kernel is large.  The sinc interpolator can be turned off\n"
  "if nearest-neighbor interpolation is required, or it can be replaced\n"
  "with a different vtkImageInterpolator object.@par Thanks: Thanks to\n"
  "David Gobbi for contributing this class to VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageResize_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageResize", // tp_name
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
  PyvtkImageResize_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageResize_StaticNew()
{
  return vtkImageResize::New();
}

PyObject *PyvtkImageResize_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageResize_Type, PyvtkImageResize_Methods,
    "vtkImageResize",
 &PyvtkImageResize_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "OUTPUT_DIMENSIONS", vtkImageResize::OUTPUT_DIMENSIONS },
        { "OUTPUT_SPACING", vtkImageResize::OUTPUT_SPACING },
        { "MAGNIFICATION_FACTORS", vtkImageResize::MAGNIFICATION_FACTORS },
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

void PyVTKAddFile_vtkImageResize(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageResize_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageResize", o) != 0)
  {
    Py_DECREF(o);
  }

}

