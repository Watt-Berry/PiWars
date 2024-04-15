// python wrapper for vtkPLYWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPLYWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPLYWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkPLYWriter_ClassNew(); }


static PyObject *
PyvtkPLYWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPLYWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPLYWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPLYWriter *tempr = vtkPLYWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPLYWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPLYWriter::NewInstance());

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
PyvtkPLYWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPLYWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPLYWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrder(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetDataByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrderMinValue() :
      op->vtkPLYWriter::GetDataByteOrderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrderMaxValue() :
      op->vtkPLYWriter::GetDataByteOrderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkPLYWriter::GetDataByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToBigEndian();
    }
    else
    {
      op->vtkPLYWriter::SetDataByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToLittleEndian();
    }
    else
    {
      op->vtkPLYWriter::SetDataByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteToOutputString(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkPLYWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkPLYWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkPLYWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetOutputString() :
      &op->vtkPLYWriter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetWriteObjectInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteObjectInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteObjectInformation(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetWriteObjectInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetWriteObjectInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteObjectInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteObjectInformation() :
      op->vtkPLYWriter::GetWriteObjectInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_WriteObjectInformationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteObjectInformationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteObjectInformationOn();
    }
    else
    {
      op->vtkPLYWriter::WriteObjectInformationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_WriteObjectInformationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteObjectInformationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteObjectInformationOff();
    }
    else
    {
      op->vtkPLYWriter::WriteObjectInformationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkPLYWriter::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDefault();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToUniformCellColor();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToUniformCellColor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToUniformPointColor();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToUniformPointColor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToUniformColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToUniformColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToUniformColor();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToUniformColor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColorModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToOff();
    }
    else
    {
      op->vtkPLYWriter::SetColorModeToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetEnableAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableAlpha(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetEnableAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetEnableAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableAlpha() :
      op->vtkPLYWriter::GetEnableAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_EnableAlphaOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAlphaOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAlphaOn();
    }
    else
    {
      op->vtkPLYWriter::EnableAlphaOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_EnableAlphaOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAlphaOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAlphaOff();
    }
    else
    {
      op->vtkPLYWriter::EnableAlphaOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkPLYWriter::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkPLYWriter::GetComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkPLYWriter::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkPLYWriter::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPLYWriter::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPLYWriter::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPLYWriter_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPLYWriter_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPLYWriter_SetColor_s1(self, args);
    case 1:
      return PyvtkPLYWriter_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkPLYWriter_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkPLYWriter::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlpha(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetAlpha() :
      op->vtkPLYWriter::GetAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPLYWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPLYWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkPLYWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPLYWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPLYWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkPLYWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyObject *
PyvtkPLYWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

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
      op->vtkPLYWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkPLYWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMinValue() :
      op->vtkPLYWriter::GetFileTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileTypeMaxValue() :
      op->vtkPLYWriter::GetFileTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkPLYWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkPLYWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkPLYWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetTextureCoordinatesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureCoordinatesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureCoordinatesName(temp0);
    }
    else
    {
      op->vtkPLYWriter::SetTextureCoordinatesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetTextureCoordinatesNameMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureCoordinatesNameMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureCoordinatesNameMinValue() :
      op->vtkPLYWriter::GetTextureCoordinatesNameMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetTextureCoordinatesNameMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureCoordinatesNameMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureCoordinatesNameMaxValue() :
      op->vtkPLYWriter::GetTextureCoordinatesNameMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_GetTextureCoordinatesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureCoordinatesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureCoordinatesName() :
      op->vtkPLYWriter::GetTextureCoordinatesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetTextureCoordinatesNameToUV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureCoordinatesNameToUV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextureCoordinatesNameToUV();
    }
    else
    {
      op->vtkPLYWriter::SetTextureCoordinatesNameToUV();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_SetTextureCoordinatesNameToTextureUV(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureCoordinatesNameToTextureUV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextureCoordinatesNameToTextureUV();
    }
    else
    {
      op->vtkPLYWriter::SetTextureCoordinatesNameToTextureUV();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPLYWriter_AddComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPLYWriter *op = static_cast<vtkPLYWriter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddComment(temp0);
    }
    else
    {
      op->vtkPLYWriter::AddComment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPLYWriter_Methods[] = {
  {"IsTypeOf", PyvtkPLYWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPLYWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPLYWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPLYWriter\nC++: static vtkPLYWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPLYWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPLYWriter\nC++: vtkPLYWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPLYWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPLYWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataByteOrder", PyvtkPLYWriter_SetDataByteOrder, METH_VARARGS,
   "SetDataByteOrder(self, _arg:int) -> None\nC++: virtual void SetDataByteOrder(int _arg)\n\nIf the file type is binary, then the user can specify which byte\norder to use (little versus big endian).\n"},
  {"GetDataByteOrderMinValue", PyvtkPLYWriter_GetDataByteOrderMinValue, METH_VARARGS,
   "GetDataByteOrderMinValue(self) -> int\nC++: virtual int GetDataByteOrderMinValue()\n\n"},
  {"GetDataByteOrderMaxValue", PyvtkPLYWriter_GetDataByteOrderMaxValue, METH_VARARGS,
   "GetDataByteOrderMaxValue(self) -> int\nC++: virtual int GetDataByteOrderMaxValue()\n\n"},
  {"GetDataByteOrder", PyvtkPLYWriter_GetDataByteOrder, METH_VARARGS,
   "GetDataByteOrder(self) -> int\nC++: virtual int GetDataByteOrder()\n\n"},
  {"SetDataByteOrderToBigEndian", PyvtkPLYWriter_SetDataByteOrderToBigEndian, METH_VARARGS,
   "SetDataByteOrderToBigEndian(self) -> None\nC++: void SetDataByteOrderToBigEndian()\n\n"},
  {"SetDataByteOrderToLittleEndian", PyvtkPLYWriter_SetDataByteOrderToLittleEndian, METH_VARARGS,
   "SetDataByteOrderToLittleEndian(self) -> None\nC++: void SetDataByteOrderToLittleEndian()\n\n"},
  {"SetWriteToOutputString", PyvtkPLYWriter_SetWriteToOutputString, METH_VARARGS,
   "SetWriteToOutputString(self, _arg:bool) -> None\nC++: virtual void SetWriteToOutputString(bool _arg)\n\nEnable writing to an OutputString instead of the default, a file.\nNote that writing to an output stream would be more flexible\n(enabling other kind of streams) and possibly more efficient\nbecause we don't need to write the whole stream to a string.\nHowever a stream interface does not translate well to python and\nthe string interface satisfies our current needs. So we leave the\nstream interface for future work.\n"},
  {"GetWriteToOutputString", PyvtkPLYWriter_GetWriteToOutputString, METH_VARARGS,
   "GetWriteToOutputString(self) -> bool\nC++: virtual bool GetWriteToOutputString()\n\n"},
  {"WriteToOutputStringOn", PyvtkPLYWriter_WriteToOutputStringOn, METH_VARARGS,
   "WriteToOutputStringOn(self) -> None\nC++: virtual void WriteToOutputStringOn()\n\n"},
  {"WriteToOutputStringOff", PyvtkPLYWriter_WriteToOutputStringOff, METH_VARARGS,
   "WriteToOutputStringOff(self) -> None\nC++: virtual void WriteToOutputStringOff()\n\n"},
  {"GetOutputString", PyvtkPLYWriter_GetOutputString, METH_VARARGS,
   "GetOutputString(self) -> str\nC++: const std::string &GetOutputString()\n\n"},
  {"SetWriteObjectInformation", PyvtkPLYWriter_SetWriteObjectInformation, METH_VARARGS,
   "SetWriteObjectInformation(self, _arg:bool) -> None\nC++: virtual void SetWriteObjectInformation(bool _arg)\n\nEnable writing the 'obj_info' in the header. Default is on. Note\nthat some software is unable to read ply files with the\n'obj_info' included.\n"},
  {"GetWriteObjectInformation", PyvtkPLYWriter_GetWriteObjectInformation, METH_VARARGS,
   "GetWriteObjectInformation(self) -> bool\nC++: virtual bool GetWriteObjectInformation()\n\n"},
  {"WriteObjectInformationOn", PyvtkPLYWriter_WriteObjectInformationOn, METH_VARARGS,
   "WriteObjectInformationOn(self) -> None\nC++: virtual void WriteObjectInformationOn()\n\n"},
  {"WriteObjectInformationOff", PyvtkPLYWriter_WriteObjectInformationOff, METH_VARARGS,
   "WriteObjectInformationOff(self) -> None\nC++: virtual void WriteObjectInformationOff()\n\n"},
  {"SetColorMode", PyvtkPLYWriter_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\nThese methods enable the user to control how to add color into\nthe PLY output file. The default behavior is as follows. The user\nprovides the name of an array and a component number. If the type\nof the array is three components, unsigned char, then the data is\nwritten as three separate \"red\", \"green\" and \"blue\" properties.\nIf the type of the array is four components, unsigned char, then\nthe data is written as three separate \"red\", \"green\" and \"blue\"\nproperties, dropping the \"alpha\". If the type is not unsigned\nchar, and a lookup table is provided, then the array/component\nare mapped through the table to generate three separate \"red\",\n\"green\" and \"blue\" properties in the PLY file. The user can also\nset the ColorMode to specify a uniform color for the whole part\n(on a vertex colors, face colors, or both. (Note: vertex colors\nor cell colors may be written, depending on where the named array\nis found. If points and cells have the arrays with the same name,\nthen both colors will be written.)\n"},
  {"GetColorMode", PyvtkPLYWriter_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetColorModeToDefault", PyvtkPLYWriter_SetColorModeToDefault, METH_VARARGS,
   "SetColorModeToDefault(self) -> None\nC++: void SetColorModeToDefault()\n\n"},
  {"SetColorModeToUniformCellColor", PyvtkPLYWriter_SetColorModeToUniformCellColor, METH_VARARGS,
   "SetColorModeToUniformCellColor(self) -> None\nC++: void SetColorModeToUniformCellColor()\n\n"},
  {"SetColorModeToUniformPointColor", PyvtkPLYWriter_SetColorModeToUniformPointColor, METH_VARARGS,
   "SetColorModeToUniformPointColor(self) -> None\nC++: void SetColorModeToUniformPointColor()\n\n"},
  {"SetColorModeToUniformColor", PyvtkPLYWriter_SetColorModeToUniformColor, METH_VARARGS,
   "SetColorModeToUniformColor(self) -> None\nC++: void SetColorModeToUniformColor()\n\n"},
  {"SetColorModeToOff", PyvtkPLYWriter_SetColorModeToOff, METH_VARARGS,
   "SetColorModeToOff(self) -> None\nC++: void SetColorModeToOff()\n\n"},
  {"SetEnableAlpha", PyvtkPLYWriter_SetEnableAlpha, METH_VARARGS,
   "SetEnableAlpha(self, _arg:bool) -> None\nC++: virtual void SetEnableAlpha(bool _arg)\n\nEnable alpha output. Default is off, i.e. only color values will\nbe saved based on ColorMode.\n"},
  {"GetEnableAlpha", PyvtkPLYWriter_GetEnableAlpha, METH_VARARGS,
   "GetEnableAlpha(self) -> bool\nC++: virtual bool GetEnableAlpha()\n\n"},
  {"EnableAlphaOn", PyvtkPLYWriter_EnableAlphaOn, METH_VARARGS,
   "EnableAlphaOn(self) -> None\nC++: virtual void EnableAlphaOn()\n\n"},
  {"EnableAlphaOff", PyvtkPLYWriter_EnableAlphaOff, METH_VARARGS,
   "EnableAlphaOff(self) -> None\nC++: virtual void EnableAlphaOff()\n\n"},
  {"SetArrayName", PyvtkPLYWriter_SetArrayName, METH_VARARGS,
   "SetArrayName(self, _arg:str) -> None\nC++: virtual void SetArrayName(const char *_arg)\n\nSpecify the array name to use to color the data.\n"},
  {"GetArrayName", PyvtkPLYWriter_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: virtual char *GetArrayName()\n\n"},
  {"SetComponent", PyvtkPLYWriter_SetComponent, METH_VARARGS,
   "SetComponent(self, _arg:int) -> None\nC++: virtual void SetComponent(int _arg)\n\nSpecify the array component to use to color the data.\n"},
  {"GetComponentMinValue", PyvtkPLYWriter_GetComponentMinValue, METH_VARARGS,
   "GetComponentMinValue(self) -> int\nC++: virtual int GetComponentMinValue()\n\n"},
  {"GetComponentMaxValue", PyvtkPLYWriter_GetComponentMaxValue, METH_VARARGS,
   "GetComponentMaxValue(self) -> int\nC++: virtual int GetComponentMaxValue()\n\n"},
  {"GetComponent", PyvtkPLYWriter_GetComponent, METH_VARARGS,
   "GetComponent(self) -> int\nC++: virtual int GetComponent()\n\n"},
  {"SetLookupTable", PyvtkPLYWriter_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, __a:vtkScalarsToColors) -> None\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nA lookup table can be specified in order to convert data arrays\nto RGBA colors.\n"},
  {"GetLookupTable", PyvtkPLYWriter_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\n"},
  {"SetColor", PyvtkPLYWriter_SetColor, METH_VARARGS,
   "SetColor(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetColor(unsigned char _arg1,\n    unsigned char _arg2, unsigned char _arg3)\nSetColor(self, _arg:(int, int, int)) -> None\nC++: virtual void SetColor(const unsigned char _arg[3])\n\nSet the color to use when using a uniform color (either point or\ncells, or both). The color is specified as a triplet of three\nunsigned chars between (0,255). This only takes effect when the\nColorMode is set to uniform point, uniform cell, or uniform\ncolor.\n"},
  {"GetColor", PyvtkPLYWriter_GetColor, METH_VARARGS,
   "GetColor(self) -> (int, int, int)\nC++: virtual unsigned char *GetColor()\n\n"},
  {"SetAlpha", PyvtkPLYWriter_SetAlpha, METH_VARARGS,
   "SetAlpha(self, _arg:int) -> None\nC++: virtual void SetAlpha(unsigned char _arg)\n\nSet the alpha to use when using a uniform color (effect point or\ncells, or both) and EnableAlpha is ON.\n"},
  {"GetAlpha", PyvtkPLYWriter_GetAlpha, METH_VARARGS,
   "GetAlpha(self) -> int\nC++: virtual unsigned char GetAlpha()\n\n"},
  {"GetInput", PyvtkPLYWriter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkPolyData\nC++: vtkPolyData *GetInput()\nGetInput(self, port:int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"SetFileName", PyvtkPLYWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of vtk polygon data file to write.\n"},
  {"GetFileName", PyvtkPLYWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetFileType", PyvtkPLYWriter_SetFileType, METH_VARARGS,
   "SetFileType(self, _arg:int) -> None\nC++: virtual void SetFileType(int _arg)\n\nSpecify file type (ASCII or BINARY) for vtk data file.\n"},
  {"GetFileTypeMinValue", PyvtkPLYWriter_GetFileTypeMinValue, METH_VARARGS,
   "GetFileTypeMinValue(self) -> int\nC++: virtual int GetFileTypeMinValue()\n\n"},
  {"GetFileTypeMaxValue", PyvtkPLYWriter_GetFileTypeMaxValue, METH_VARARGS,
   "GetFileTypeMaxValue(self) -> int\nC++: virtual int GetFileTypeMaxValue()\n\n"},
  {"GetFileType", PyvtkPLYWriter_GetFileType, METH_VARARGS,
   "GetFileType(self) -> int\nC++: virtual int GetFileType()\n\n"},
  {"SetFileTypeToASCII", PyvtkPLYWriter_SetFileTypeToASCII, METH_VARARGS,
   "SetFileTypeToASCII(self) -> None\nC++: void SetFileTypeToASCII()\n\n"},
  {"SetFileTypeToBinary", PyvtkPLYWriter_SetFileTypeToBinary, METH_VARARGS,
   "SetFileTypeToBinary(self) -> None\nC++: void SetFileTypeToBinary()\n\n"},
  {"SetTextureCoordinatesName", PyvtkPLYWriter_SetTextureCoordinatesName, METH_VARARGS,
   "SetTextureCoordinatesName(self, _arg:int) -> None\nC++: virtual void SetTextureCoordinatesName(int _arg)\n\nChoose the name used for the texture coordinates. (u, v) or\n(texture_u, texture_v)\n"},
  {"GetTextureCoordinatesNameMinValue", PyvtkPLYWriter_GetTextureCoordinatesNameMinValue, METH_VARARGS,
   "GetTextureCoordinatesNameMinValue(self) -> int\nC++: virtual int GetTextureCoordinatesNameMinValue()\n\n"},
  {"GetTextureCoordinatesNameMaxValue", PyvtkPLYWriter_GetTextureCoordinatesNameMaxValue, METH_VARARGS,
   "GetTextureCoordinatesNameMaxValue(self) -> int\nC++: virtual int GetTextureCoordinatesNameMaxValue()\n\n"},
  {"GetTextureCoordinatesName", PyvtkPLYWriter_GetTextureCoordinatesName, METH_VARARGS,
   "GetTextureCoordinatesName(self) -> int\nC++: virtual int GetTextureCoordinatesName()\n\n"},
  {"SetTextureCoordinatesNameToUV", PyvtkPLYWriter_SetTextureCoordinatesNameToUV, METH_VARARGS,
   "SetTextureCoordinatesNameToUV(self) -> None\nC++: void SetTextureCoordinatesNameToUV()\n\n"},
  {"SetTextureCoordinatesNameToTextureUV", PyvtkPLYWriter_SetTextureCoordinatesNameToTextureUV, METH_VARARGS,
   "SetTextureCoordinatesNameToTextureUV(self) -> None\nC++: void SetTextureCoordinatesNameToTextureUV()\n\n"},
  {"AddComment", PyvtkPLYWriter_AddComment, METH_VARARGS,
   "AddComment(self, comment:str) -> None\nC++: void AddComment(const std::string &comment)\n\nAdd a comment in the header part.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPLYWriter_Doc =
  "vtkPLYWriter - write Stanford PLY file format\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkPLYWriter writes polygonal data in Stanford University PLY format\n"
  "(see http://graphics.stanford.edu/data/3Dscanrep/). The data can be\n"
  "written in either binary (little or big endian) or ASCII\n"
  "representation. As for PointData and CellData, vtkPLYWriter cannot\n"
  "handle normals or vectors. It only handles RGB PointData and\n"
  "CellData. You need to set the name of the array (using SetName for\n"
  "the array and SetArrayName for the writer). If the array is not a\n"
  "vtkUnsignedCharArray with 3 or 4 components, you need to specify a\n"
  "vtkLookupTable to map the scalars to RGB.\n\n"
  "To enable saving out alpha (opacity) values, you must enable alpha\n"
  "using `vtkPLYWriter::SetEnableAlpha()`.\n\n"
  "@warning\n"
  "PLY does not handle big endian versus little endian correctly.\n\n"
  "@sa\n"
  "vtkPLYReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPLYWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOPLY.vtkPLYWriter", // tp_name
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
  PyvtkPLYWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPLYWriter_StaticNew()
{
  return vtkPLYWriter::New();
}

PyObject *PyvtkPLYWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPLYWriter_Type, PyvtkPLYWriter_Methods,
    "vtkPLYWriter",
 &PyvtkPLYWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPLYWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPLYWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPLYWriter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VTK_LITTLE_ENDIAN", 0 },
        { "VTK_BIG_ENDIAN", 1 },
        { "VTK_COLOR_MODE_DEFAULT", 0 },
        { "VTK_COLOR_MODE_UNIFORM_CELL_COLOR", 1 },
        { "VTK_COLOR_MODE_UNIFORM_POINT_COLOR", 2 },
        { "VTK_COLOR_MODE_UNIFORM_COLOR", 3 },
        { "VTK_COLOR_MODE_OFF", 4 },
        { "VTK_TEXTURECOORDS_UV", 0 },
        { "VTK_TEXTURECOORDS_TEXTUREUV", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

