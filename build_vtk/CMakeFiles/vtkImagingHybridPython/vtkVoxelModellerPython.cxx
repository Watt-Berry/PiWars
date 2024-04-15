// python wrapper for vtkVoxelModeller
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVoxelModeller.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVoxelModeller(PyObject *dict); }
extern "C" { PyObject *PyvtkVoxelModeller_ClassNew(); }


static PyObject *
PyvtkVoxelModeller_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVoxelModeller::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoxelModeller::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVoxelModeller *tempr = vtkVoxelModeller::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVoxelModeller *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoxelModeller::NewInstance());

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
PyvtkVoxelModeller_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVoxelModeller::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVoxelModeller::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_ComputeModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->ComputeModelBounds(temp0, temp1) :
      op->vtkVoxelModeller::ComputeModelBounds(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkVoxelModeller_SetSampleDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->SetSampleDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVoxelModeller::SetSampleDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetSampleDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetSampleDimensions(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetSampleDimensions(temp0);
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
PyvtkVoxelModeller_SetSampleDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVoxelModeller_SetSampleDimensions_s1(self, args);
    case 1:
      return PyvtkVoxelModeller_SetSampleDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleDimensions");
  return nullptr;
}


static PyObject *
PyvtkVoxelModeller_GetSampleDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleDimensions() :
      op->vtkVoxelModeller::GetSampleDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumDistance(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMinValue() :
      op->vtkVoxelModeller::GetMaximumDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistanceMaxValue() :
      op->vtkVoxelModeller::GetMaximumDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumDistance() :
      op->vtkVoxelModeller::GetMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetModelBounds(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetModelBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkVoxelModeller::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelModeller_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkVoxelModeller_SetModelBounds_s1(self, args);
    case 6:
      return PyvtkVoxelModeller_SetModelBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return nullptr;
}


static PyObject *
PyvtkVoxelModeller_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetModelBounds() :
      op->vtkVoxelModeller::GetModelBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarType(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToFloat();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToDouble();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToInt();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToLong();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToShort();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToChar();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetScalarTypeToBit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToBit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToBit();
    }
    else
    {
      op->vtkVoxelModeller::SetScalarTypeToBit();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkVoxelModeller::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetForegroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForegroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForegroundValue(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetForegroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetForegroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForegroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetForegroundValue() :
      op->vtkVoxelModeller::GetForegroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_SetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundValue(temp0);
    }
    else
    {
      op->vtkVoxelModeller::SetBackgroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelModeller_GetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelModeller *op = static_cast<vtkVoxelModeller *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundValue() :
      op->vtkVoxelModeller::GetBackgroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVoxelModeller_Methods[] = {
  {"IsTypeOf", PyvtkVoxelModeller_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVoxelModeller_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVoxelModeller_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVoxelModeller\nC++: static vtkVoxelModeller *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVoxelModeller_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVoxelModeller\nC++: vtkVoxelModeller *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVoxelModeller_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVoxelModeller_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ComputeModelBounds", PyvtkVoxelModeller_ComputeModelBounds, METH_VARARGS,
   "ComputeModelBounds(self, origin:[float, float, float],\n    spacing:[float, float, float]) -> float\nC++: double ComputeModelBounds(double origin[3],\n    double spacing[3])\n\nCompute the ModelBounds based on the input geometry.\n"},
  {"SetSampleDimensions", PyvtkVoxelModeller_SetSampleDimensions, METH_VARARGS,
   "SetSampleDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetSampleDimensions(int i, int j, int k)\nSetSampleDimensions(self, dim:[int, int, int]) -> None\nC++: void SetSampleDimensions(int dim[3])\n\nSet the i-j-k dimensions on which to sample the distance\nfunction. Default is (50, 50, 50)\n"},
  {"GetSampleDimensions", PyvtkVoxelModeller_GetSampleDimensions, METH_VARARGS,
   "GetSampleDimensions(self) -> (int, int, int)\nC++: virtual int *GetSampleDimensions()\n\n"},
  {"SetMaximumDistance", PyvtkVoxelModeller_SetMaximumDistance, METH_VARARGS,
   "SetMaximumDistance(self, _arg:float) -> None\nC++: virtual void SetMaximumDistance(double _arg)\n\nSpecify distance away from surface of input geometry to sample.\nSmaller values make large increases in performance. Default is\n1.0.\n"},
  {"GetMaximumDistanceMinValue", PyvtkVoxelModeller_GetMaximumDistanceMinValue, METH_VARARGS,
   "GetMaximumDistanceMinValue(self) -> float\nC++: virtual double GetMaximumDistanceMinValue()\n\n"},
  {"GetMaximumDistanceMaxValue", PyvtkVoxelModeller_GetMaximumDistanceMaxValue, METH_VARARGS,
   "GetMaximumDistanceMaxValue(self) -> float\nC++: virtual double GetMaximumDistanceMaxValue()\n\n"},
  {"GetMaximumDistance", PyvtkVoxelModeller_GetMaximumDistance, METH_VARARGS,
   "GetMaximumDistance(self) -> float\nC++: virtual double GetMaximumDistance()\n\n"},
  {"SetModelBounds", PyvtkVoxelModeller_SetModelBounds, METH_VARARGS,
   "SetModelBounds(self, bounds:(float, float, float, float, float,\n    float)) -> None\nC++: void SetModelBounds(const double bounds[6])\nSetModelBounds(self, xmin:float, xmax:float, ymin:float,\n    ymax:float, zmin:float, zmax:float) -> None\nC++: void SetModelBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nSpecify the position in space to perform the voxelization.\nDefault is (0, 0, 0, 0, 0, 0)\n"},
  {"GetModelBounds", PyvtkVoxelModeller_GetModelBounds, METH_VARARGS,
   "GetModelBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetModelBounds()\n\n"},
  {"SetScalarType", PyvtkVoxelModeller_SetScalarType, METH_VARARGS,
   "SetScalarType(self, _arg:int) -> None\nC++: virtual void SetScalarType(int _arg)\n\nControl the scalar type of the output image. The default is\nVTK_BIT. NOTE: Not all filters/readers/writers support the\nVTK_BIT scalar type. You may want to use VTK_CHAR as an\nalternative.\n"},
  {"SetScalarTypeToFloat", PyvtkVoxelModeller_SetScalarTypeToFloat, METH_VARARGS,
   "SetScalarTypeToFloat(self) -> None\nC++: void SetScalarTypeToFloat()\n\n"},
  {"SetScalarTypeToDouble", PyvtkVoxelModeller_SetScalarTypeToDouble, METH_VARARGS,
   "SetScalarTypeToDouble(self) -> None\nC++: void SetScalarTypeToDouble()\n\n"},
  {"SetScalarTypeToInt", PyvtkVoxelModeller_SetScalarTypeToInt, METH_VARARGS,
   "SetScalarTypeToInt(self) -> None\nC++: void SetScalarTypeToInt()\n\n"},
  {"SetScalarTypeToUnsignedInt", PyvtkVoxelModeller_SetScalarTypeToUnsignedInt, METH_VARARGS,
   "SetScalarTypeToUnsignedInt(self) -> None\nC++: void SetScalarTypeToUnsignedInt()\n\n"},
  {"SetScalarTypeToLong", PyvtkVoxelModeller_SetScalarTypeToLong, METH_VARARGS,
   "SetScalarTypeToLong(self) -> None\nC++: void SetScalarTypeToLong()\n\n"},
  {"SetScalarTypeToUnsignedLong", PyvtkVoxelModeller_SetScalarTypeToUnsignedLong, METH_VARARGS,
   "SetScalarTypeToUnsignedLong(self) -> None\nC++: void SetScalarTypeToUnsignedLong()\n\n"},
  {"SetScalarTypeToShort", PyvtkVoxelModeller_SetScalarTypeToShort, METH_VARARGS,
   "SetScalarTypeToShort(self) -> None\nC++: void SetScalarTypeToShort()\n\n"},
  {"SetScalarTypeToUnsignedShort", PyvtkVoxelModeller_SetScalarTypeToUnsignedShort, METH_VARARGS,
   "SetScalarTypeToUnsignedShort(self) -> None\nC++: void SetScalarTypeToUnsignedShort()\n\n"},
  {"SetScalarTypeToUnsignedChar", PyvtkVoxelModeller_SetScalarTypeToUnsignedChar, METH_VARARGS,
   "SetScalarTypeToUnsignedChar(self) -> None\nC++: void SetScalarTypeToUnsignedChar()\n\n"},
  {"SetScalarTypeToChar", PyvtkVoxelModeller_SetScalarTypeToChar, METH_VARARGS,
   "SetScalarTypeToChar(self) -> None\nC++: void SetScalarTypeToChar()\n\n"},
  {"SetScalarTypeToBit", PyvtkVoxelModeller_SetScalarTypeToBit, METH_VARARGS,
   "SetScalarTypeToBit(self) -> None\nC++: void SetScalarTypeToBit()\n\n"},
  {"GetScalarType", PyvtkVoxelModeller_GetScalarType, METH_VARARGS,
   "GetScalarType(self) -> int\nC++: virtual int GetScalarType()\n\n"},
  {"SetForegroundValue", PyvtkVoxelModeller_SetForegroundValue, METH_VARARGS,
   "SetForegroundValue(self, _arg:float) -> None\nC++: virtual void SetForegroundValue(double _arg)\n\nSet the Foreground/Background values of the output. The\nForeground value is set when a voxel is occupied. The Background\nvalue is set when a voxel is not occupied. The default\nForegroundValue is 1. The default BackgroundValue is 0.\n"},
  {"GetForegroundValue", PyvtkVoxelModeller_GetForegroundValue, METH_VARARGS,
   "GetForegroundValue(self) -> float\nC++: virtual double GetForegroundValue()\n\n"},
  {"SetBackgroundValue", PyvtkVoxelModeller_SetBackgroundValue, METH_VARARGS,
   "SetBackgroundValue(self, _arg:float) -> None\nC++: virtual void SetBackgroundValue(double _arg)\n\n"},
  {"GetBackgroundValue", PyvtkVoxelModeller_GetBackgroundValue, METH_VARARGS,
   "GetBackgroundValue(self) -> float\nC++: virtual double GetBackgroundValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVoxelModeller_Doc =
  "vtkVoxelModeller - convert an arbitrary dataset to a voxel\nrepresentation\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkVoxelModeller is a filter that converts an arbitrary data set to a\n"
  "structured point (i.e., voxel) representation. It is very similar to\n"
  "vtkImplicitModeller, except that it doesn't record distance; instead\n"
  "it records occupancy. By default it supports a compact output of 0/1\n"
  "VTK_BIT. Other vtk scalar types can be specified. The Foreground and\n"
  "Background values of the output can also be specified. NOTE: Not all\n"
  "vtk filters/readers/writers support the VTK_BIT scalar type. You may\n"
  "want to use VTK_CHAR as an alternative.\n"
  "@sa\n"
  "vtkImplicitModeller\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVoxelModeller_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingHybrid.vtkVoxelModeller", // tp_name
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
  PyvtkVoxelModeller_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVoxelModeller_StaticNew()
{
  return vtkVoxelModeller::New();
}

PyObject *PyvtkVoxelModeller_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVoxelModeller_Type, PyvtkVoxelModeller_Methods,
    "vtkVoxelModeller",
 &PyvtkVoxelModeller_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVoxelModeller(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVoxelModeller_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVoxelModeller", o) != 0)
  {
    Py_DECREF(o);
  }

}

