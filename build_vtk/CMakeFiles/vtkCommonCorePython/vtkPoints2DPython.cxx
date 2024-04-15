// python wrapper for vtkPoints2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPoints2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPoints2D(PyObject *dict); }
extern "C" { PyObject *PyvtkPoints2D_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkPoints2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPoints2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPoints2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPoints2D *tempr = vtkPoints2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPoints2D::NewInstance());

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
PyvtkPoints2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPoints2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPoints2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkPoints2D::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPoints2D::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetData(temp0);
    }
    else
    {
      op->vtkPoints2D::SetData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkPoints2D::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkPoints2D::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataType(temp0);
    }
    else
    {
      op->vtkPoints2D::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToBit();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToBit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToChar();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedChar();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToShort();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedShort();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToInt();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedInt();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToLong();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToUnsignedLong();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToFloat();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetDataTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataTypeToDouble();
    }
    else
    {
      op->vtkPoints2D::SetDataTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkPoints2D::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkPoints2D::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPoints2D::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkPoints2D::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkPoints2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkPoints2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkPoints2D::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkPoints2D::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkPoints2D::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1);
    }
    else
    {
      op->vtkPoints2D::GetPoint(temp0, temp1);
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
PyvtkPoints2D_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPoints2D_GetPoint_s1(self, args);
    case 2:
      return PyvtkPoints2D_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}


static PyObject *
PyvtkPoints2D_SetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetPoint(temp0, temp1);
    }
    else
    {
      op->vtkPoints2D::SetPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_SetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
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
      op->SetPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPoints2D::SetPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_SetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPoints2D_SetPoint_s1(self, args);
    case 3:
      return PyvtkPoints2D_SetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint");
  return nullptr;
}


static PyObject *
PyvtkPoints2D_InsertPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->InsertPoint(temp0, temp1);
    }
    else
    {
      op->vtkPoints2D::InsertPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
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
      op->InsertPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPoints2D::InsertPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPoints2D_InsertPoint_s1(self, args);
    case 3:
      return PyvtkPoints2D_InsertPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertPoint");
  return nullptr;
}


static PyObject *
PyvtkPoints2D_InsertNextPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0) :
      op->vtkPoints2D::InsertNextPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertNextPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextPoint(temp0, temp1) :
      op->vtkPoints2D::InsertNextPoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_InsertNextPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPoints2D_InsertNextPoint_s1(self, args);
    case 2:
      return PyvtkPoints2D_InsertNextPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextPoint");
  return nullptr;
}


static PyObject *
PyvtkPoints2D_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePoint(temp0);
    }
    else
    {
      op->vtkPoints2D::RemovePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPoints(temp0);
    }
    else
    {
      op->vtkPoints2D::SetNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Resize(temp0) :
      op->vtkPoints2D::Resize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkPoints2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkPoints2D"))
  {
    if (ap.IsBound())
    {
      op->GetPoints(temp0, temp1);
    }
    else
    {
      op->vtkPoints2D::GetPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkPoints2D::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPoints2D_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkPoints2D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPoints2D_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPoints2D *op = static_cast<vtkPoints2D *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkPoints2D::GetBounds(temp0);
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
PyvtkPoints2D_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPoints2D_GetBounds_s1(self, args);
    case 1:
      return PyvtkPoints2D_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}

static PyMethodDef PyvtkPoints2D_Methods[] = {
  {"IsTypeOf", PyvtkPoints2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPoints2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPoints2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPoints2D\nC++: static vtkPoints2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPoints2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPoints2D\nC++: vtkPoints2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPoints2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPoints2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Allocate", PyvtkPoints2D_Allocate, METH_VARARGS,
   "Allocate(self, sz:int, ext:int=1000) -> int\nC++: virtual vtkTypeBool Allocate(vtkIdType sz,\n    vtkIdType ext=1000)\n\nAllocate initial memory size. ext is no longer used.\n"},
  {"Initialize", PyvtkPoints2D_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nReturn object to instantiated state.\n"},
  {"SetData", PyvtkPoints2D_SetData, METH_VARARGS,
   "SetData(self, __a:vtkDataArray) -> None\nC++: virtual void SetData(vtkDataArray *)\n\nSet/Get the underlying data array. This function must be\nimplemented in a concrete subclass to check for consistency. (The\ntuple size must match the type of data. For example, 3-tuple data\narray can be assigned to a vector, normal, or points object, but\nnot a tensor object, which has a tuple dimension of 9. Scalars,\non the other hand, can have tuple dimension from 1-4, depending\non the type of scalar.)\n"},
  {"GetData", PyvtkPoints2D_GetData, METH_VARARGS,
   "GetData(self) -> vtkDataArray\nC++: vtkDataArray *GetData()\n\n"},
  {"GetDataType", PyvtkPoints2D_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: virtual int GetDataType()\n\nReturn the underlying data type. An integer indicating data type\nis returned as specified in vtkSetGet.h.\n"},
  {"SetDataType", PyvtkPoints2D_SetDataType, METH_VARARGS,
   "SetDataType(self, dataType:int) -> None\nC++: virtual void SetDataType(int dataType)\n\nSpecify the underlying data type of the object.\n"},
  {"SetDataTypeToBit", PyvtkPoints2D_SetDataTypeToBit, METH_VARARGS,
   "SetDataTypeToBit(self) -> None\nC++: void SetDataTypeToBit()\n\n"},
  {"SetDataTypeToChar", PyvtkPoints2D_SetDataTypeToChar, METH_VARARGS,
   "SetDataTypeToChar(self) -> None\nC++: void SetDataTypeToChar()\n\n"},
  {"SetDataTypeToUnsignedChar", PyvtkPoints2D_SetDataTypeToUnsignedChar, METH_VARARGS,
   "SetDataTypeToUnsignedChar(self) -> None\nC++: void SetDataTypeToUnsignedChar()\n\n"},
  {"SetDataTypeToShort", PyvtkPoints2D_SetDataTypeToShort, METH_VARARGS,
   "SetDataTypeToShort(self) -> None\nC++: void SetDataTypeToShort()\n\n"},
  {"SetDataTypeToUnsignedShort", PyvtkPoints2D_SetDataTypeToUnsignedShort, METH_VARARGS,
   "SetDataTypeToUnsignedShort(self) -> None\nC++: void SetDataTypeToUnsignedShort()\n\n"},
  {"SetDataTypeToInt", PyvtkPoints2D_SetDataTypeToInt, METH_VARARGS,
   "SetDataTypeToInt(self) -> None\nC++: void SetDataTypeToInt()\n\n"},
  {"SetDataTypeToUnsignedInt", PyvtkPoints2D_SetDataTypeToUnsignedInt, METH_VARARGS,
   "SetDataTypeToUnsignedInt(self) -> None\nC++: void SetDataTypeToUnsignedInt()\n\n"},
  {"SetDataTypeToLong", PyvtkPoints2D_SetDataTypeToLong, METH_VARARGS,
   "SetDataTypeToLong(self) -> None\nC++: void SetDataTypeToLong()\n\n"},
  {"SetDataTypeToUnsignedLong", PyvtkPoints2D_SetDataTypeToUnsignedLong, METH_VARARGS,
   "SetDataTypeToUnsignedLong(self) -> None\nC++: void SetDataTypeToUnsignedLong()\n\n"},
  {"SetDataTypeToFloat", PyvtkPoints2D_SetDataTypeToFloat, METH_VARARGS,
   "SetDataTypeToFloat(self) -> None\nC++: void SetDataTypeToFloat()\n\n"},
  {"SetDataTypeToDouble", PyvtkPoints2D_SetDataTypeToDouble, METH_VARARGS,
   "SetDataTypeToDouble(self) -> None\nC++: void SetDataTypeToDouble()\n\n"},
  {"GetVoidPointer", PyvtkPoints2D_GetVoidPointer, METH_VARARGS,
   "GetVoidPointer(self, id:int) -> Pointer\nC++: void *GetVoidPointer(const int id)\n\nReturn a void pointer. For image pipeline interface and other\nspecial pointer manipulation.\n"},
  {"Squeeze", PyvtkPoints2D_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: virtual void Squeeze()\n\nReclaim any extra memory.\n"},
  {"Reset", PyvtkPoints2D_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: virtual void Reset()\n\nMake object look empty but do not delete memory.\n"},
  {"DeepCopy", PyvtkPoints2D_DeepCopy, METH_VARARGS,
   "DeepCopy(self, ad:vtkPoints2D) -> None\nC++: virtual void DeepCopy(vtkPoints2D *ad)\n\nDifferent ways to copy data. Shallow copy does reference count\n(i.e., assigns pointers and updates reference count); deep copy\nruns through entire data array assigning values.\n"},
  {"ShallowCopy", PyvtkPoints2D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, ad:vtkPoints2D) -> None\nC++: virtual void ShallowCopy(vtkPoints2D *ad)\n\n"},
  {"GetActualMemorySize", PyvtkPoints2D_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this\nattribute data. Used to support streaming and reading/writing\ndata. The value returned is guaranteed to be greater than or\nequal to the memory required to actually represent the data\nrepresented by this object. The information returned is valid\nonly after the pipeline has been updated.\n"},
  {"GetNumberOfPoints", PyvtkPoints2D_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: vtkIdType GetNumberOfPoints()\n\nReturn number of points in array.\n"},
  {"GetPoint", PyvtkPoints2D_GetPoint, METH_VARARGS,
   "GetPoint(self, id:int) -> (float, float)\nC++: double *GetPoint(vtkIdType id)\nGetPoint(self, id:int, x:[float, float]) -> None\nC++: void GetPoint(vtkIdType id, double x[2])\n\nReturn a pointer to a double point x[2] for a specific id.\nWARNING: Just don't use this error-prone method, the returned\npointer and its values are only valid as long as another method\ninvocation is not performed. Prefer GetPoint() with the return\nvalue in argument.\n"},
  {"SetPoint", PyvtkPoints2D_SetPoint, METH_VARARGS,
   "SetPoint(self, id:int, x:(float, float)) -> None\nC++: void SetPoint(vtkIdType id, const double x[2])\nSetPoint(self, id:int, x:float, y:float) -> None\nC++: void SetPoint(vtkIdType id, double x, double y)\n\n"},
  {"InsertPoint", PyvtkPoints2D_InsertPoint, METH_VARARGS,
   "InsertPoint(self, id:int, x:(float, float)) -> None\nC++: void InsertPoint(vtkIdType id, const double x[2])\nInsertPoint(self, id:int, x:float, y:float) -> None\nC++: void InsertPoint(vtkIdType id, double x, double y)\n\n"},
  {"InsertNextPoint", PyvtkPoints2D_InsertNextPoint, METH_VARARGS,
   "InsertNextPoint(self, x:(float, float)) -> int\nC++: vtkIdType InsertNextPoint(const double x[2])\nInsertNextPoint(self, x:float, y:float) -> int\nC++: vtkIdType InsertNextPoint(double x, double y)\n\n"},
  {"RemovePoint", PyvtkPoints2D_RemovePoint, METH_VARARGS,
   "RemovePoint(self, id:int) -> None\nC++: void RemovePoint(vtkIdType id)\n\nRemove point described by its id\n"},
  {"SetNumberOfPoints", PyvtkPoints2D_SetNumberOfPoints, METH_VARARGS,
   "SetNumberOfPoints(self, numPoints:int) -> None\nC++: void SetNumberOfPoints(vtkIdType numPoints)\n\nSpecify the number of points for this object to hold. Does an\nallocation as well as setting the MaxId ivar. Used in conjunction\nwith SetPoint() method for fast insertion.\n"},
  {"Resize", PyvtkPoints2D_Resize, METH_VARARGS,
   "Resize(self, numPoints:int) -> int\nC++: vtkTypeBool Resize(vtkIdType numPoints)\n\nResize the internal array while conserving the data.  Returns 1\nif resizing succeeded and 0 otherwise.\n"},
  {"GetPoints", PyvtkPoints2D_GetPoints, METH_VARARGS,
   "GetPoints(self, ptId:vtkIdList, fp:vtkPoints2D) -> None\nC++: void GetPoints(vtkIdList *ptId, vtkPoints2D *fp)\n\nGiven a list of pt ids, return an array of points.\n"},
  {"ComputeBounds", PyvtkPoints2D_ComputeBounds, METH_VARARGS,
   "ComputeBounds(self) -> None\nC++: virtual void ComputeBounds()\n\nDetermine (xmin,xmax, ymin,ymax) bounds of points.\n"},
  {"GetBounds", PyvtkPoints2D_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float)\nC++: double *GetBounds()\nGetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4])\n\nReturn the bounds of the points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPoints2D_Doc =
  "vtkPoints2D - represent and manipulate 2D points\n\n"
  "Superclass: vtkObject\n\n"
  "vtkPoints2D represents 2D points. The data model for vtkPoints2D is\n"
  "an array of vx-vy doublets accessible by (point or cell) id.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPoints2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkPoints2D", // tp_name
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
  PyvtkPoints2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPoints2D_StaticNew()
{
  return vtkPoints2D::New();
}

PyObject *PyvtkPoints2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPoints2D_Type, PyvtkPoints2D_Methods,
    "vtkPoints2D",
 &PyvtkPoints2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPoints2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPoints2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPoints2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

