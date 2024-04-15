// python wrapper for vtkAVSucdReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAVSucdReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAVSucdReader(PyObject *dict); }
extern "C" { PyObject *PyvtkAVSucdReader_ClassNew(); }


static PyObject *
PyvtkAVSucdReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAVSucdReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAVSucdReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAVSucdReader *tempr = vtkAVSucdReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAVSucdReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAVSucdReader::NewInstance());

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
PyvtkAVSucdReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAVSucdReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAVSucdReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

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
      op->vtkAVSucdReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAVSucdReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBinaryFile(temp0);
    }
    else
    {
      op->vtkAVSucdReader::SetBinaryFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetBinaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinaryFile() :
      op->vtkAVSucdReader::GetBinaryFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_BinaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryFileOn();
    }
    else
    {
      op->vtkAVSucdReader::BinaryFileOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_BinaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BinaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BinaryFileOff();
    }
    else
    {
      op->vtkAVSucdReader::BinaryFileOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkAVSucdReader::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkAVSucdReader::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodeFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeFields() :
      op->vtkAVSucdReader::GetNumberOfNodeFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellFields() :
      op->vtkAVSucdReader::GetNumberOfCellFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFields() :
      op->vtkAVSucdReader::GetNumberOfFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfNodeComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeComponents() :
      op->vtkAVSucdReader::GetNumberOfNodeComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellComponents() :
      op->vtkAVSucdReader::GetNumberOfCellComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrderToBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToBigEndian();
    }
    else
    {
      op->vtkAVSucdReader::SetByteOrderToBigEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrderToLittleEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrderToLittleEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrderToLittleEndian();
    }
    else
    {
      op->vtkAVSucdReader::SetByteOrderToLittleEndian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetByteOrderAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrderAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetByteOrderAsString() :
      op->vtkAVSucdReader::GetByteOrderAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetByteOrder(temp0);
    }
    else
    {
      op->vtkAVSucdReader::SetByteOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetByteOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetByteOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetByteOrder() :
      op->vtkAVSucdReader::GetByteOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkAVSucdReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkAVSucdReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkAVSucdReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkAVSucdReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkAVSucdReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkAVSucdReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkAVSucdReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkAVSucdReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllCellArrays();
    }
    else
    {
      op->vtkAVSucdReader::DisableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllCellArrays();
    }
    else
    {
      op->vtkAVSucdReader::EnableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkAVSucdReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkAVSucdReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetCellDataRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<float> store3(2*size3);
  float *temp3 = store3.Data();
  float *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetCellDataRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAVSucdReader::GetCellDataRange(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAVSucdReader_GetNodeDataRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeDataRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAVSucdReader *op = static_cast<vtkAVSucdReader *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<float> store3(2*size3);
  float *temp3 = store3.Data();
  float *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetNodeDataRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAVSucdReader::GetNodeDataRange(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAVSucdReader_Methods[] = {
  {"IsTypeOf", PyvtkAVSucdReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAVSucdReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAVSucdReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAVSucdReader\nC++: static vtkAVSucdReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAVSucdReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAVSucdReader\nC++: vtkAVSucdReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAVSucdReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAVSucdReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkAVSucdReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify file name of AVS UCD datafile to read\n"},
  {"GetFileName", PyvtkAVSucdReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetBinaryFile", PyvtkAVSucdReader_SetBinaryFile, METH_VARARGS,
   "SetBinaryFile(self, _arg:int) -> None\nC++: virtual void SetBinaryFile(vtkTypeBool _arg)\n\nIs the file to be read written in binary format (as opposed to\nascii).\n"},
  {"GetBinaryFile", PyvtkAVSucdReader_GetBinaryFile, METH_VARARGS,
   "GetBinaryFile(self) -> int\nC++: virtual vtkTypeBool GetBinaryFile()\n\n"},
  {"BinaryFileOn", PyvtkAVSucdReader_BinaryFileOn, METH_VARARGS,
   "BinaryFileOn(self) -> None\nC++: virtual void BinaryFileOn()\n\n"},
  {"BinaryFileOff", PyvtkAVSucdReader_BinaryFileOff, METH_VARARGS,
   "BinaryFileOff(self) -> None\nC++: virtual void BinaryFileOff()\n\n"},
  {"GetNumberOfCells", PyvtkAVSucdReader_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: virtual int GetNumberOfCells()\n\nGet the total number of cells.\n"},
  {"GetNumberOfNodes", PyvtkAVSucdReader_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self) -> int\nC++: virtual int GetNumberOfNodes()\n\nGet the total number of nodes.\n"},
  {"GetNumberOfNodeFields", PyvtkAVSucdReader_GetNumberOfNodeFields, METH_VARARGS,
   "GetNumberOfNodeFields(self) -> int\nC++: virtual int GetNumberOfNodeFields()\n\nGet the number of data fields at the nodes.\n"},
  {"GetNumberOfCellFields", PyvtkAVSucdReader_GetNumberOfCellFields, METH_VARARGS,
   "GetNumberOfCellFields(self) -> int\nC++: virtual int GetNumberOfCellFields()\n\nGet the number of data fields at the cell centers.\n"},
  {"GetNumberOfFields", PyvtkAVSucdReader_GetNumberOfFields, METH_VARARGS,
   "GetNumberOfFields(self) -> int\nC++: virtual int GetNumberOfFields()\n\nGet the number of data fields for the model. Unused because VTK\nhas no methods for it.\n"},
  {"GetNumberOfNodeComponents", PyvtkAVSucdReader_GetNumberOfNodeComponents, METH_VARARGS,
   "GetNumberOfNodeComponents(self) -> int\nC++: virtual int GetNumberOfNodeComponents()\n\nGet the number of data components at the nodes and cells.\n"},
  {"GetNumberOfCellComponents", PyvtkAVSucdReader_GetNumberOfCellComponents, METH_VARARGS,
   "GetNumberOfCellComponents(self) -> int\nC++: virtual int GetNumberOfCellComponents()\n\n"},
  {"SetByteOrderToBigEndian", PyvtkAVSucdReader_SetByteOrderToBigEndian, METH_VARARGS,
   "SetByteOrderToBigEndian(self) -> None\nC++: void SetByteOrderToBigEndian()\n\nSet/Get the endian-ness of the binary file.\n"},
  {"SetByteOrderToLittleEndian", PyvtkAVSucdReader_SetByteOrderToLittleEndian, METH_VARARGS,
   "SetByteOrderToLittleEndian(self) -> None\nC++: void SetByteOrderToLittleEndian()\n\n"},
  {"GetByteOrderAsString", PyvtkAVSucdReader_GetByteOrderAsString, METH_VARARGS,
   "GetByteOrderAsString(self) -> str\nC++: const char *GetByteOrderAsString()\n\n"},
  {"SetByteOrder", PyvtkAVSucdReader_SetByteOrder, METH_VARARGS,
   "SetByteOrder(self, _arg:int) -> None\nC++: virtual void SetByteOrder(int _arg)\n\n"},
  {"GetByteOrder", PyvtkAVSucdReader_GetByteOrder, METH_VARARGS,
   "GetByteOrder(self) -> int\nC++: virtual int GetByteOrder()\n\n"},
  {"GetNumberOfPointArrays", PyvtkAVSucdReader_GetNumberOfPointArrays, METH_VARARGS,
   "GetNumberOfPointArrays(self) -> int\nC++: int GetNumberOfPointArrays()\n\nThe following methods allow selective reading of solutions\nfields.  by default, ALL data fields are the nodes and cells are\nread, but this can be modified.\n"},
  {"GetNumberOfCellArrays", PyvtkAVSucdReader_GetNumberOfCellArrays, METH_VARARGS,
   "GetNumberOfCellArrays(self) -> int\nC++: int GetNumberOfCellArrays()\n\n"},
  {"GetPointArrayName", PyvtkAVSucdReader_GetPointArrayName, METH_VARARGS,
   "GetPointArrayName(self, index:int) -> str\nC++: const char *GetPointArrayName(int index)\n\n"},
  {"GetCellArrayName", PyvtkAVSucdReader_GetCellArrayName, METH_VARARGS,
   "GetCellArrayName(self, index:int) -> str\nC++: const char *GetCellArrayName(int index)\n\n"},
  {"GetPointArrayStatus", PyvtkAVSucdReader_GetPointArrayStatus, METH_VARARGS,
   "GetPointArrayStatus(self, name:str) -> int\nC++: int GetPointArrayStatus(const char *name)\n\n"},
  {"GetCellArrayStatus", PyvtkAVSucdReader_GetCellArrayStatus, METH_VARARGS,
   "GetCellArrayStatus(self, name:str) -> int\nC++: int GetCellArrayStatus(const char *name)\n\n"},
  {"SetPointArrayStatus", PyvtkAVSucdReader_SetPointArrayStatus, METH_VARARGS,
   "SetPointArrayStatus(self, name:str, status:int) -> None\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {"SetCellArrayStatus", PyvtkAVSucdReader_SetCellArrayStatus, METH_VARARGS,
   "SetCellArrayStatus(self, name:str, status:int) -> None\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllCellArrays", PyvtkAVSucdReader_DisableAllCellArrays, METH_VARARGS,
   "DisableAllCellArrays(self) -> None\nC++: void DisableAllCellArrays()\n\n"},
  {"EnableAllCellArrays", PyvtkAVSucdReader_EnableAllCellArrays, METH_VARARGS,
   "EnableAllCellArrays(self) -> None\nC++: void EnableAllCellArrays()\n\n"},
  {"DisableAllPointArrays", PyvtkAVSucdReader_DisableAllPointArrays, METH_VARARGS,
   "DisableAllPointArrays(self) -> None\nC++: void DisableAllPointArrays()\n\n"},
  {"EnableAllPointArrays", PyvtkAVSucdReader_EnableAllPointArrays, METH_VARARGS,
   "EnableAllPointArrays(self) -> None\nC++: void EnableAllPointArrays()\n\n"},
  {"GetCellDataRange", PyvtkAVSucdReader_GetCellDataRange, METH_VARARGS,
   "GetCellDataRange(self, cellComp:int, index:int, min:[float, ...],\n    max:[float, ...]) -> None\nC++: void GetCellDataRange(int cellComp, int index, float *min,\n    float *max)\n\n"},
  {"GetNodeDataRange", PyvtkAVSucdReader_GetNodeDataRange, METH_VARARGS,
   "GetNodeDataRange(self, nodeComp:int, index:int, min:[float, ...],\n    max:[float, ...]) -> None\nC++: void GetNodeDataRange(int nodeComp, int index, float *min,\n    float *max)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAVSucdReader_Doc =
  "vtkAVSucdReader - reads a dataset in AVS \"UCD\" format\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkAVSucdReader creates an unstructured grid dataset. It reads binary\n"
  "or ASCII files stored in UCD format, with optional data stored at the\n"
  "nodes or at the cells of the model. A cell-based fielddata stores the\n"
  "material id. The class can automatically detect the endian-ness of\n"
  "the binary files.\n\n"
  "@par Thanks: Thanks to Guenole Harel and Emmanuel Colin (Supelec\n"
  "engineering school, France) and Jean M. Favre (CSCS, Switzerland) who\n"
  "co-developed this class. Thanks to Isabelle Surin (isabelle.surin at\n"
  "cea.fr, CEA-DAM, France) who supervised the internship of the first\n"
  "two authors. Thanks to Daniel Aguilera (daniel.aguilera at cea.fr,\n"
  "CEA-DAM, France) who contributed code and advice. Please address all\n"
  "comments to Jean Favre (jfavre at cscs.ch)\n\n"
  "@sa\n"
  "vtkGAMBITReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAVSucdReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkAVSucdReader", // tp_name
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
  PyvtkAVSucdReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAVSucdReader_StaticNew()
{
  return vtkAVSucdReader::New();
}

PyObject *PyvtkAVSucdReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAVSucdReader_Type, PyvtkAVSucdReader_Methods,
    "vtkAVSucdReader",
 &PyvtkAVSucdReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAVSucdReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAVSucdReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAVSucdReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

