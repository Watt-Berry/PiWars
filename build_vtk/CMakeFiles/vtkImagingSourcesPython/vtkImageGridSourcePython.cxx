// python wrapper for vtkImageGridSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageGridSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageGridSource(PyObject *dict); }
extern "C" { PyObject *PyvtkImageGridSource_ClassNew(); }


static PyObject *
PyvtkImageGridSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageGridSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageGridSource *tempr = vtkImageGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGridSource::NewInstance());

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
PyvtkImageGridSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageGridSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageGridSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetGridSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetGridSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGridSource::SetGridSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridSpacing(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetGridSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGridSource_SetGridSpacing_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetGridSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageGridSource_GetGridSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGridSpacing() :
      op->vtkImageGridSource::GetGridSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetGridOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetGridOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGridSource::SetGridOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridOrigin(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetGridOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetGridOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGridSource_SetGridOrigin_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetGridOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageGridSource_GetGridOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGridOrigin() :
      op->vtkImageGridSource::GetGridOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetLineValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineValue(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetLineValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetLineValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineValue() :
      op->vtkImageGridSource::GetLineValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFillValue(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetFillValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetFillValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFillValue() :
      op->vtkImageGridSource::GetFillValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarType(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToDouble();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToInt();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToShort();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageGridSource::SetDataScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageGridSource::GetDataScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageGridSource::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageGridSource::SetDataExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataExtent(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetDataExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageGridSource_SetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataExtent");
  return nullptr;
}


static PyObject *
PyvtkImageGridSource_GetDataExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageGridSource::GetDataExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGridSource::SetDataSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataSpacing(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetDataSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGridSource_SetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageGridSource_GetDataSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageGridSource::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGridSource_SetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

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
      op->SetDataOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGridSource::SetDataOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDataOrigin(temp0);
    }
    else
    {
      op->vtkImageGridSource::SetDataOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGridSource_SetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGridSource_SetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageGridSource_SetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDataOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageGridSource_GetDataOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGridSource *op = static_cast<vtkImageGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageGridSource::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageGridSource_Methods[] = {
  {"IsTypeOf", PyvtkImageGridSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageGridSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageGridSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageGridSource\nC++: static vtkImageGridSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageGridSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageGridSource\nC++: vtkImageGridSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageGridSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageGridSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGridSpacing", PyvtkImageGridSource_SetGridSpacing, METH_VARARGS,
   "SetGridSpacing(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetGridSpacing(int _arg1, int _arg2, int _arg3)\nSetGridSpacing(self, _arg:(int, int, int)) -> None\nC++: virtual void SetGridSpacing(const int _arg[3])\n\nSet/Get the grid spacing in pixel units.  Default (10,10,0). A\nvalue of zero means no grid.\n"},
  {"GetGridSpacing", PyvtkImageGridSource_GetGridSpacing, METH_VARARGS,
   "GetGridSpacing(self) -> (int, int, int)\nC++: virtual int *GetGridSpacing()\n\n"},
  {"SetGridOrigin", PyvtkImageGridSource_SetGridOrigin, METH_VARARGS,
   "SetGridOrigin(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetGridOrigin(int _arg1, int _arg2, int _arg3)\nSetGridOrigin(self, _arg:(int, int, int)) -> None\nC++: virtual void SetGridOrigin(const int _arg[3])\n\nSet/Get the grid origin, in ijk integer values.  Default (0,0,0).\n"},
  {"GetGridOrigin", PyvtkImageGridSource_GetGridOrigin, METH_VARARGS,
   "GetGridOrigin(self) -> (int, int, int)\nC++: virtual int *GetGridOrigin()\n\n"},
  {"SetLineValue", PyvtkImageGridSource_SetLineValue, METH_VARARGS,
   "SetLineValue(self, _arg:float) -> None\nC++: virtual void SetLineValue(double _arg)\n\nSet the grey level of the lines. Default 1.0.\n"},
  {"GetLineValue", PyvtkImageGridSource_GetLineValue, METH_VARARGS,
   "GetLineValue(self) -> float\nC++: virtual double GetLineValue()\n\n"},
  {"SetFillValue", PyvtkImageGridSource_SetFillValue, METH_VARARGS,
   "SetFillValue(self, _arg:float) -> None\nC++: virtual void SetFillValue(double _arg)\n\nSet the grey level of the fill. Default 0.0.\n"},
  {"GetFillValue", PyvtkImageGridSource_GetFillValue, METH_VARARGS,
   "GetFillValue(self) -> float\nC++: virtual double GetFillValue()\n\n"},
  {"SetDataScalarType", PyvtkImageGridSource_SetDataScalarType, METH_VARARGS,
   "SetDataScalarType(self, _arg:int) -> None\nC++: virtual void SetDataScalarType(int _arg)\n\nSet/Get the data type of pixels in the imported data. As a\nconvenience, the OutputScalarType is set to the same value.\n"},
  {"SetDataScalarTypeToDouble", PyvtkImageGridSource_SetDataScalarTypeToDouble, METH_VARARGS,
   "SetDataScalarTypeToDouble(self) -> None\nC++: void SetDataScalarTypeToDouble()\n\n"},
  {"SetDataScalarTypeToInt", PyvtkImageGridSource_SetDataScalarTypeToInt, METH_VARARGS,
   "SetDataScalarTypeToInt(self) -> None\nC++: void SetDataScalarTypeToInt()\n\n"},
  {"SetDataScalarTypeToShort", PyvtkImageGridSource_SetDataScalarTypeToShort, METH_VARARGS,
   "SetDataScalarTypeToShort(self) -> None\nC++: void SetDataScalarTypeToShort()\n\n"},
  {"SetDataScalarTypeToUnsignedShort", PyvtkImageGridSource_SetDataScalarTypeToUnsignedShort, METH_VARARGS,
   "SetDataScalarTypeToUnsignedShort(self) -> None\nC++: void SetDataScalarTypeToUnsignedShort()\n\n"},
  {"SetDataScalarTypeToUnsignedChar", PyvtkImageGridSource_SetDataScalarTypeToUnsignedChar, METH_VARARGS,
   "SetDataScalarTypeToUnsignedChar(self) -> None\nC++: void SetDataScalarTypeToUnsignedChar()\n\n"},
  {"GetDataScalarType", PyvtkImageGridSource_GetDataScalarType, METH_VARARGS,
   "GetDataScalarType(self) -> int\nC++: virtual int GetDataScalarType()\n\n"},
  {"GetDataScalarTypeAsString", PyvtkImageGridSource_GetDataScalarTypeAsString, METH_VARARGS,
   "GetDataScalarTypeAsString(self) -> str\nC++: const char *GetDataScalarTypeAsString()\n\n"},
  {"SetDataExtent", PyvtkImageGridSource_SetDataExtent, METH_VARARGS,
   "SetDataExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetDataExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetDataExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetDataExtent(const int _arg[6])\n\nSet/Get the extent of the whole output image, Default:\n(0,255,0,255,0,0)\n"},
  {"GetDataExtent", PyvtkImageGridSource_GetDataExtent, METH_VARARGS,
   "GetDataExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetDataExtent()\n\n"},
  {"SetDataSpacing", PyvtkImageGridSource_SetDataSpacing, METH_VARARGS,
   "SetDataSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDataSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetDataSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataSpacing(const double _arg[3])\n\nSet/Get the pixel spacing.\n"},
  {"GetDataSpacing", PyvtkImageGridSource_GetDataSpacing, METH_VARARGS,
   "GetDataSpacing(self) -> (float, float, float)\nC++: virtual double *GetDataSpacing()\n\n"},
  {"SetDataOrigin", PyvtkImageGridSource_SetDataOrigin, METH_VARARGS,
   "SetDataOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetDataOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetDataOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDataOrigin(const double _arg[3])\n\nSet/Get the origin of the data.\n"},
  {"GetDataOrigin", PyvtkImageGridSource_GetDataOrigin, METH_VARARGS,
   "GetDataOrigin(self) -> (float, float, float)\nC++: virtual double *GetDataOrigin()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageGridSource_Doc =
  "vtkImageGridSource - Create an image of a grid.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageGridSource produces an image of a grid.  The default output\n"
  "type is double.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageGridSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingSources.vtkImageGridSource", // tp_name
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
  PyvtkImageGridSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageGridSource_StaticNew()
{
  return vtkImageGridSource::New();
}

PyObject *PyvtkImageGridSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageGridSource_Type, PyvtkImageGridSource_Methods,
    "vtkImageGridSource",
 &PyvtkImageGridSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageGridSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageGridSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageGridSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

