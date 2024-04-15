// python wrapper for vtkMCubesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMCubesReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMCubesReader(PyObject *dict); }
extern "C" { PyObject *PyvtkMCubesReader_ClassNew(); }


static PyObject *
PyvtkMCubesReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMCubesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMCubesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMCubesReader *tempr = vtkMCubesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMCubesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMCubesReader::NewInstance());

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
PyvtkMCubesReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMCubesReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMCubesReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      op->vtkMCubesReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMCubesReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLimitsFileName(temp0);
    }
    else
    {
      op->vtkMCubesReader::SetLimitsFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLimitsFileName() :
      op->vtkMCubesReader::GetLimitsFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeaderSize(temp0);
    }
    else
    {
      op->vtkMCubesReader::SetHeaderSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeaderSizeMinValue() :
      op->vtkMCubesReader::GetHeaderSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeaderSizeMaxValue() :
      op->vtkMCubesReader::GetHeaderSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetHeaderSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeaderSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHeaderSize() :
      op->vtkMCubesReader::GetHeaderSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipNormals(temp0);
    }
    else
    {
      op->vtkMCubesReader::SetFlipNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetFlipNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipNormals() :
      op->vtkMCubesReader::GetFlipNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_FlipNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOn();
    }
    else
    {
      op->vtkMCubesReader::FlipNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_FlipNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipNormalsOff();
    }
    else
    {
      op->vtkMCubesReader::FlipNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormals(temp0);
    }
    else
    {
      op->vtkMCubesReader::SetNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormals() :
      op->vtkMCubesReader::GetNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_NormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalsOn();
    }
    else
    {
      op->vtkMCubesReader::NormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_NormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalsOff();
    }
    else
    {
      op->vtkMCubesReader::NormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToBigEndian();
    }
    else
    {
      op->vtkMCubesReader::SetDataByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataByteOrderToLittleEndian();
    }
    else
    {
      op->vtkMCubesReader::SetDataByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataByteOrder() :
      op->vtkMCubesReader::GetDataByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetDataByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

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
      op->vtkMCubesReader::SetDataByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetDataByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataByteOrderAsString() :
      op->vtkMCubesReader::GetDataByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwapBytes(temp0);
    }
    else
    {
      op->vtkMCubesReader::SetSwapBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetSwapBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytes() :
      op->vtkMCubesReader::GetSwapBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SwapBytesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBytesOn();
    }
    else
    {
      op->vtkMCubesReader::SwapBytesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SwapBytesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapBytesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SwapBytesOff();
    }
    else
    {
      op->vtkMCubesReader::SwapBytesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkMCubesReader::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkMCubesReader::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkMCubesReader::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMCubesReader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesReader *op = static_cast<vtkMCubesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMCubesReader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMCubesReader_Methods[] = {
  {"IsTypeOf", PyvtkMCubesReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMCubesReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMCubesReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMCubesReader\nC++: static vtkMCubesReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMCubesReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMCubesReader\nC++: vtkMCubesReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMCubesReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMCubesReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkMCubesReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of marching cubes file.\n"},
  {"GetFileName", PyvtkMCubesReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetLimitsFileName", PyvtkMCubesReader_SetLimitsFileName, METH_VARARGS,
   "SetLimitsFileName(self, _arg:str) -> None\nC++: virtual void SetLimitsFileName(const char *_arg)\n\nSet / get the file name of the marching cubes limits file.\n"},
  {"GetLimitsFileName", PyvtkMCubesReader_GetLimitsFileName, METH_VARARGS,
   "GetLimitsFileName(self) -> str\nC++: virtual char *GetLimitsFileName()\n\n"},
  {"SetHeaderSize", PyvtkMCubesReader_SetHeaderSize, METH_VARARGS,
   "SetHeaderSize(self, _arg:int) -> None\nC++: virtual void SetHeaderSize(int _arg)\n\nSpecify a header size if one exists. The header is skipped and\nnot used at this time.\n"},
  {"GetHeaderSizeMinValue", PyvtkMCubesReader_GetHeaderSizeMinValue, METH_VARARGS,
   "GetHeaderSizeMinValue(self) -> int\nC++: virtual int GetHeaderSizeMinValue()\n\n"},
  {"GetHeaderSizeMaxValue", PyvtkMCubesReader_GetHeaderSizeMaxValue, METH_VARARGS,
   "GetHeaderSizeMaxValue(self) -> int\nC++: virtual int GetHeaderSizeMaxValue()\n\n"},
  {"GetHeaderSize", PyvtkMCubesReader_GetHeaderSize, METH_VARARGS,
   "GetHeaderSize(self) -> int\nC++: virtual int GetHeaderSize()\n\n"},
  {"SetFlipNormals", PyvtkMCubesReader_SetFlipNormals, METH_VARARGS,
   "SetFlipNormals(self, _arg:int) -> None\nC++: virtual void SetFlipNormals(vtkTypeBool _arg)\n\nSpecify whether to flip normals in opposite direction. Flipping\nONLY changes the direction of the normal vector. Contrast this\nwith flipping in vtkPolyDataNormals which flips both the normal\nand the cell point order.\n"},
  {"GetFlipNormals", PyvtkMCubesReader_GetFlipNormals, METH_VARARGS,
   "GetFlipNormals(self) -> int\nC++: virtual vtkTypeBool GetFlipNormals()\n\n"},
  {"FlipNormalsOn", PyvtkMCubesReader_FlipNormalsOn, METH_VARARGS,
   "FlipNormalsOn(self) -> None\nC++: virtual void FlipNormalsOn()\n\n"},
  {"FlipNormalsOff", PyvtkMCubesReader_FlipNormalsOff, METH_VARARGS,
   "FlipNormalsOff(self) -> None\nC++: virtual void FlipNormalsOff()\n\n"},
  {"SetNormals", PyvtkMCubesReader_SetNormals, METH_VARARGS,
   "SetNormals(self, _arg:int) -> None\nC++: virtual void SetNormals(vtkTypeBool _arg)\n\nSpecify whether to read normals.\n"},
  {"GetNormals", PyvtkMCubesReader_GetNormals, METH_VARARGS,
   "GetNormals(self) -> int\nC++: virtual vtkTypeBool GetNormals()\n\n"},
  {"NormalsOn", PyvtkMCubesReader_NormalsOn, METH_VARARGS,
   "NormalsOn(self) -> None\nC++: virtual void NormalsOn()\n\n"},
  {"NormalsOff", PyvtkMCubesReader_NormalsOff, METH_VARARGS,
   "NormalsOff(self) -> None\nC++: virtual void NormalsOff()\n\n"},
  {"SetDataByteOrderToBigEndian", PyvtkMCubesReader_SetDataByteOrderToBigEndian, METH_VARARGS,
   "SetDataByteOrderToBigEndian(self) -> None\nC++: void SetDataByteOrderToBigEndian()\n\nThese methods should be used instead of the SwapBytes methods.\nThey indicate the byte ordering of the file you are trying to\nread in. These methods will then either swap or not swap the\nbytes depending on the byte ordering of the machine it is being\nrun on. For example, reading in a BigEndian file on a BigEndian\nmachine will result in no swapping. Trying to read the same file\non a LittleEndian machine will result in swapping. As a quick\nnote most UNIX machines are BigEndian while PC's and VAX tend to\nbe LittleEndian. So if the file you are reading in was generated\non a VAX or PC, SetDataByteOrderToLittleEndian otherwise\nSetDataByteOrderToBigEndian.\n"},
  {"SetDataByteOrderToLittleEndian", PyvtkMCubesReader_SetDataByteOrderToLittleEndian, METH_VARARGS,
   "SetDataByteOrderToLittleEndian(self) -> None\nC++: void SetDataByteOrderToLittleEndian()\n\n"},
  {"GetDataByteOrder", PyvtkMCubesReader_GetDataByteOrder, METH_VARARGS,
   "GetDataByteOrder(self) -> int\nC++: int GetDataByteOrder()\n\n"},
  {"SetDataByteOrder", PyvtkMCubesReader_SetDataByteOrder, METH_VARARGS,
   "SetDataByteOrder(self, __a:int) -> None\nC++: void SetDataByteOrder(int)\n\n"},
  {"GetDataByteOrderAsString", PyvtkMCubesReader_GetDataByteOrderAsString, METH_VARARGS,
   "GetDataByteOrderAsString(self) -> str\nC++: const char *GetDataByteOrderAsString()\n\n"},
  {"SetSwapBytes", PyvtkMCubesReader_SetSwapBytes, METH_VARARGS,
   "SetSwapBytes(self, _arg:int) -> None\nC++: virtual void SetSwapBytes(vtkTypeBool _arg)\n\nTurn on/off byte swapping.\n"},
  {"GetSwapBytes", PyvtkMCubesReader_GetSwapBytes, METH_VARARGS,
   "GetSwapBytes(self) -> int\nC++: virtual vtkTypeBool GetSwapBytes()\n\n"},
  {"SwapBytesOn", PyvtkMCubesReader_SwapBytesOn, METH_VARARGS,
   "SwapBytesOn(self) -> None\nC++: virtual void SwapBytesOn()\n\n"},
  {"SwapBytesOff", PyvtkMCubesReader_SwapBytesOff, METH_VARARGS,
   "SwapBytesOff(self) -> None\nC++: virtual void SwapBytesOff()\n\n"},
  {"SetLocator", PyvtkMCubesReader_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkMCubesReader_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkMCubesReader_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkMCubesReader_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the mtime also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMCubesReader_Doc =
  "vtkMCubesReader - read binary marching cubes file\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkMCubesReader is a source object that reads binary marching cubes\n"
  "files. (Marching cubes is an isosurfacing technique that generates\n"
  "many triangles.) The binary format is supported by W. Lorensen's\n"
  "marching cubes program (and the vtkSliceCubes object). The format\n"
  "repeats point coordinates, so this object will merge the points with\n"
  "a vtkLocator object. You can choose to supply the vtkLocator or use\n"
  "the default.\n\n"
  "@warning\n"
  "Binary files assumed written in sun/hp/sgi (i.e., Big Endian) form.\n\n"
  "@warning\n"
  "Because points are merged when read, degenerate triangles may be\n"
  "removed. Thus the number of triangles read may be fewer than the\n"
  "number of triangles actually created.\n\n"
  "@warning\n"
  "The point merging does not take into account that the same point may\n"
  "have different normals. For example, running vtkPolyDataNormals after\n"
  "vtkContourFilter may split triangles because of the FeatureAngle\n"
  "ivar. Subsequent reading with vtkMCubesReader will merge the points\n"
  "and use the first point's normal. For the most part, this is\n"
  "undesirable.\n\n"
  "@warning\n"
  "Normals are generated from the gradient of the data scalar values.\n"
  "Hence the normals may on occasion point in a direction inconsistent\n"
  "with the ordering of the triangle vertices. If this happens, the\n"
  "resulting surface may be \"black\".  Reverse the sense of the\n"
  "FlipNormals boolean flag to correct this.\n\n"
  "@sa\n"
  "vtkContourFilter vtkMarchingCubes vtkSliceCubes vtkLocator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMCubesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkMCubesReader", // tp_name
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
  PyvtkMCubesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMCubesReader_StaticNew()
{
  return vtkMCubesReader::New();
}

PyObject *PyvtkMCubesReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMCubesReader_Type, PyvtkMCubesReader_Methods,
    "vtkMCubesReader",
 &PyvtkMCubesReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMCubesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMCubesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMCubesReader", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_FILE_BYTE_ORDER_BIG_ENDIAN", 0 },
        { "VTK_FILE_BYTE_ORDER_LITTLE_ENDIAN", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

