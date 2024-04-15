// python wrapper for vtkPTSReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPTSReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPTSReader(PyObject *dict); }
extern "C" { PyObject *PyvtkPTSReader_ClassNew(); }


static PyObject *
PyvtkPTSReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPTSReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPTSReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPTSReader *tempr = vtkPTSReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPTSReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPTSReader::NewInstance());

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
PyvtkPTSReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPTSReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPTSReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkPTSReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPTSReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_LimitReadToBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LimitReadToBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LimitReadToBoundsOn();
    }
    else
    {
      op->vtkPTSReader::LimitReadToBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_LimitReadToBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LimitReadToBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LimitReadToBoundsOff();
    }
    else
    {
      op->vtkPTSReader::LimitReadToBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SetLimitReadToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitReadToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLimitReadToBounds(temp0);
    }
    else
    {
      op->vtkPTSReader::SetLimitReadToBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetLimitReadToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitReadToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLimitReadToBounds() :
      op->vtkPTSReader::GetLimitReadToBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SetReadBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

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
      op->SetReadBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPTSReader::SetReadBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPTSReader_SetReadBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetReadBounds(temp0);
    }
    else
    {
      op->vtkPTSReader::SetReadBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPTSReader_SetReadBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPTSReader_SetReadBounds_s1(self, args);
    case 1:
      return PyvtkPTSReader_SetReadBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetReadBounds");
  return nullptr;
}


static PyObject *
PyvtkPTSReader_GetReadBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetReadBounds() :
      op->vtkPTSReader::GetReadBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_OutputDataTypeIsDoubleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputDataTypeIsDoubleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputDataTypeIsDoubleOn();
    }
    else
    {
      op->vtkPTSReader::OutputDataTypeIsDoubleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_OutputDataTypeIsDoubleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputDataTypeIsDoubleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputDataTypeIsDoubleOff();
    }
    else
    {
      op->vtkPTSReader::OutputDataTypeIsDoubleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SetOutputDataTypeIsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataTypeIsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDataTypeIsDouble(temp0);
    }
    else
    {
      op->vtkPTSReader::SetOutputDataTypeIsDouble(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetOutputDataTypeIsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataTypeIsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutputDataTypeIsDouble() :
      op->vtkPTSReader::GetOutputDataTypeIsDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_LimitToMaxNumberOfPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LimitToMaxNumberOfPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LimitToMaxNumberOfPointsOn();
    }
    else
    {
      op->vtkPTSReader::LimitToMaxNumberOfPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_LimitToMaxNumberOfPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LimitToMaxNumberOfPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LimitToMaxNumberOfPointsOff();
    }
    else
    {
      op->vtkPTSReader::LimitToMaxNumberOfPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SetLimitToMaxNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitToMaxNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLimitToMaxNumberOfPoints(temp0);
    }
    else
    {
      op->vtkPTSReader::SetLimitToMaxNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetLimitToMaxNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitToMaxNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLimitToMaxNumberOfPoints() :
      op->vtkPTSReader::GetLimitToMaxNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SetMaxNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfPoints(temp0);
    }
    else
    {
      op->vtkPTSReader::SetMaxNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetMaxNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxNumberOfPointsMinValue() :
      op->vtkPTSReader::GetMaxNumberOfPointsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetMaxNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxNumberOfPointsMaxValue() :
      op->vtkPTSReader::GetMaxNumberOfPointsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetMaxNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxNumberOfPoints() :
      op->vtkPTSReader::GetMaxNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_CreateCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateCellsOn();
    }
    else
    {
      op->vtkPTSReader::CreateCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_CreateCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateCellsOff();
    }
    else
    {
      op->vtkPTSReader::CreateCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SetCreateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateCells(temp0);
    }
    else
    {
      op->vtkPTSReader::SetCreateCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetCreateCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCreateCells() :
      op->vtkPTSReader::GetCreateCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_IncludeColorAndLuminanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeColorAndLuminanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeColorAndLuminanceOn();
    }
    else
    {
      op->vtkPTSReader::IncludeColorAndLuminanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_IncludeColorAndLuminanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeColorAndLuminanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeColorAndLuminanceOff();
    }
    else
    {
      op->vtkPTSReader::IncludeColorAndLuminanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_SetIncludeColorAndLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeColorAndLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeColorAndLuminance(temp0);
    }
    else
    {
      op->vtkPTSReader::SetIncludeColorAndLuminance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPTSReader_GetIncludeColorAndLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeColorAndLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPTSReader *op = static_cast<vtkPTSReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeColorAndLuminance() :
      op->vtkPTSReader::GetIncludeColorAndLuminance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPTSReader_Methods[] = {
  {"IsTypeOf", PyvtkPTSReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPTSReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPTSReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPTSReader\nC++: static vtkPTSReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPTSReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPTSReader\nC++: vtkPTSReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPTSReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPTSReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkPTSReader_SetFileName, METH_VARARGS,
   "SetFileName(self, filename:str) -> None\nC++: void SetFileName(const char *filename)\n\nSpecify file name.\n"},
  {"GetFileName", PyvtkPTSReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"LimitReadToBoundsOn", PyvtkPTSReader_LimitReadToBoundsOn, METH_VARARGS,
   "LimitReadToBoundsOn(self) -> None\nC++: virtual void LimitReadToBoundsOn()\n\nBoolean value indicates whether or not to limit points read to a\nspecified (ReadBounds) region.\n"},
  {"LimitReadToBoundsOff", PyvtkPTSReader_LimitReadToBoundsOff, METH_VARARGS,
   "LimitReadToBoundsOff(self) -> None\nC++: virtual void LimitReadToBoundsOff()\n\n"},
  {"SetLimitReadToBounds", PyvtkPTSReader_SetLimitReadToBounds, METH_VARARGS,
   "SetLimitReadToBounds(self, _arg:bool) -> None\nC++: virtual void SetLimitReadToBounds(bool _arg)\n\n"},
  {"GetLimitReadToBounds", PyvtkPTSReader_GetLimitReadToBounds, METH_VARARGS,
   "GetLimitReadToBounds(self) -> bool\nC++: virtual bool GetLimitReadToBounds()\n\n"},
  {"SetReadBounds", PyvtkPTSReader_SetReadBounds, METH_VARARGS,
   "SetReadBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetReadBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetReadBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetReadBounds(const double _arg[6])\n\nBounds to use if LimitReadToBounds is On\n"},
  {"GetReadBounds", PyvtkPTSReader_GetReadBounds, METH_VARARGS,
   "GetReadBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetReadBounds()\n\n"},
  {"OutputDataTypeIsDoubleOn", PyvtkPTSReader_OutputDataTypeIsDoubleOn, METH_VARARGS,
   "OutputDataTypeIsDoubleOn(self) -> None\nC++: virtual void OutputDataTypeIsDoubleOn()\n\nThe output type defaults to float, but can instead be double.\n"},
  {"OutputDataTypeIsDoubleOff", PyvtkPTSReader_OutputDataTypeIsDoubleOff, METH_VARARGS,
   "OutputDataTypeIsDoubleOff(self) -> None\nC++: virtual void OutputDataTypeIsDoubleOff()\n\n"},
  {"SetOutputDataTypeIsDouble", PyvtkPTSReader_SetOutputDataTypeIsDouble, METH_VARARGS,
   "SetOutputDataTypeIsDouble(self, _arg:bool) -> None\nC++: virtual void SetOutputDataTypeIsDouble(bool _arg)\n\n"},
  {"GetOutputDataTypeIsDouble", PyvtkPTSReader_GetOutputDataTypeIsDouble, METH_VARARGS,
   "GetOutputDataTypeIsDouble(self) -> bool\nC++: virtual bool GetOutputDataTypeIsDouble()\n\n"},
  {"LimitToMaxNumberOfPointsOn", PyvtkPTSReader_LimitToMaxNumberOfPointsOn, METH_VARARGS,
   "LimitToMaxNumberOfPointsOn(self) -> None\nC++: virtual void LimitToMaxNumberOfPointsOn()\n\nBoolean value indicates whether or not to limit number of points\nread based on MaxNumbeOfPoints.\n"},
  {"LimitToMaxNumberOfPointsOff", PyvtkPTSReader_LimitToMaxNumberOfPointsOff, METH_VARARGS,
   "LimitToMaxNumberOfPointsOff(self) -> None\nC++: virtual void LimitToMaxNumberOfPointsOff()\n\n"},
  {"SetLimitToMaxNumberOfPoints", PyvtkPTSReader_SetLimitToMaxNumberOfPoints, METH_VARARGS,
   "SetLimitToMaxNumberOfPoints(self, _arg:bool) -> None\nC++: virtual void SetLimitToMaxNumberOfPoints(bool _arg)\n\n"},
  {"GetLimitToMaxNumberOfPoints", PyvtkPTSReader_GetLimitToMaxNumberOfPoints, METH_VARARGS,
   "GetLimitToMaxNumberOfPoints(self) -> bool\nC++: virtual bool GetLimitToMaxNumberOfPoints()\n\n"},
  {"SetMaxNumberOfPoints", PyvtkPTSReader_SetMaxNumberOfPoints, METH_VARARGS,
   "SetMaxNumberOfPoints(self, _arg:int) -> None\nC++: virtual void SetMaxNumberOfPoints(vtkIdType _arg)\n\nThe maximum number of points to load if LimitToMaxNumberOfPoints\nis on/true. Sets a temporary onRatio.\n"},
  {"GetMaxNumberOfPointsMinValue", PyvtkPTSReader_GetMaxNumberOfPointsMinValue, METH_VARARGS,
   "GetMaxNumberOfPointsMinValue(self) -> int\nC++: virtual vtkIdType GetMaxNumberOfPointsMinValue()\n\n"},
  {"GetMaxNumberOfPointsMaxValue", PyvtkPTSReader_GetMaxNumberOfPointsMaxValue, METH_VARARGS,
   "GetMaxNumberOfPointsMaxValue(self) -> int\nC++: virtual vtkIdType GetMaxNumberOfPointsMaxValue()\n\n"},
  {"GetMaxNumberOfPoints", PyvtkPTSReader_GetMaxNumberOfPoints, METH_VARARGS,
   "GetMaxNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetMaxNumberOfPoints()\n\n"},
  {"CreateCellsOn", PyvtkPTSReader_CreateCellsOn, METH_VARARGS,
   "CreateCellsOn(self) -> None\nC++: virtual void CreateCellsOn()\n\nBoolean value indicates whether or not to create cells for this\ndataset. Otherwise only points and scalars are created. Defaults\nto true.\n"},
  {"CreateCellsOff", PyvtkPTSReader_CreateCellsOff, METH_VARARGS,
   "CreateCellsOff(self) -> None\nC++: virtual void CreateCellsOff()\n\n"},
  {"SetCreateCells", PyvtkPTSReader_SetCreateCells, METH_VARARGS,
   "SetCreateCells(self, _arg:bool) -> None\nC++: virtual void SetCreateCells(bool _arg)\n\n"},
  {"GetCreateCells", PyvtkPTSReader_GetCreateCells, METH_VARARGS,
   "GetCreateCells(self) -> bool\nC++: virtual bool GetCreateCells()\n\n"},
  {"IncludeColorAndLuminanceOn", PyvtkPTSReader_IncludeColorAndLuminanceOn, METH_VARARGS,
   "IncludeColorAndLuminanceOn(self) -> None\nC++: virtual void IncludeColorAndLuminanceOn()\n\nBoolean value indicates when color values are present if\nluminance should be read in as well Defaults to true.\n"},
  {"IncludeColorAndLuminanceOff", PyvtkPTSReader_IncludeColorAndLuminanceOff, METH_VARARGS,
   "IncludeColorAndLuminanceOff(self) -> None\nC++: virtual void IncludeColorAndLuminanceOff()\n\n"},
  {"SetIncludeColorAndLuminance", PyvtkPTSReader_SetIncludeColorAndLuminance, METH_VARARGS,
   "SetIncludeColorAndLuminance(self, _arg:bool) -> None\nC++: virtual void SetIncludeColorAndLuminance(bool _arg)\n\n"},
  {"GetIncludeColorAndLuminance", PyvtkPTSReader_GetIncludeColorAndLuminance, METH_VARARGS,
   "GetIncludeColorAndLuminance(self) -> bool\nC++: virtual bool GetIncludeColorAndLuminance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPTSReader_Doc =
  "vtkPTSReader - Read ASCII PTS Files.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPTSReader reads either a text file of\n"
  " points. The first line is the number of points. Point information is\n"
  " either x y z intensity or x y z intensity r g b\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPTSReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkPTSReader", // tp_name
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
  PyvtkPTSReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPTSReader_StaticNew()
{
  return vtkPTSReader::New();
}

PyObject *PyvtkPTSReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPTSReader_Type, PyvtkPTSReader_Methods,
    "vtkPTSReader",
 &PyvtkPTSReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPTSReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPTSReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPTSReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

