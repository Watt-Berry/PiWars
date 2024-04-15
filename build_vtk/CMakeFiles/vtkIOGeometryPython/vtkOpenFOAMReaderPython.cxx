// python wrapper for vtkOpenFOAMReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkOpenFOAMReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenFOAMReader(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenFOAMReader_ClassNew(); }


static PyObject *
PyvtkOpenFOAMReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenFOAMReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenFOAMReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenFOAMReader *tempr = vtkOpenFOAMReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenFOAMReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenFOAMReader::NewInstance());

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
PyvtkOpenFOAMReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenFOAMReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenFOAMReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkOpenFOAMReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkOpenFOAMReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkOpenFOAMReader::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetCellArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCellArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetCellArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCellArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayName(temp0) :
      op->vtkOpenFOAMReader::GetCellArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllCellArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::DisableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllCellArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::EnableAllCellArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkOpenFOAMReader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

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
      op->vtkOpenFOAMReader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkOpenFOAMReader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLagrangianArrays() :
      op->vtkOpenFOAMReader::GetNumberOfLagrangianArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetLagrangianArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLagrangianArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLagrangianArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetLagrangianArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetLagrangianArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLagrangianArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLagrangianArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkOpenFOAMReader::SetLagrangianArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetLagrangianArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLagrangianArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLagrangianArrayName(temp0) :
      op->vtkOpenFOAMReader::GetLagrangianArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllLagrangianArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::DisableAllLagrangianArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllLagrangianArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllLagrangianArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllLagrangianArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::EnableAllLagrangianArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetNumberOfPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPatchArrays() :
      op->vtkOpenFOAMReader::GetNumberOfPatchArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPatchArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatchArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatchArrayStatus(temp0) :
      op->vtkOpenFOAMReader::GetPatchArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPatchArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatchArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPatchArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkOpenFOAMReader::SetPatchArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPatchArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatchArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPatchArrayName(temp0) :
      op->vtkOpenFOAMReader::GetPatchArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DisableAllPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPatchArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::DisableAllPatchArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_EnableAllPatchArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPatchArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPatchArrays();
    }
    else
    {
      op->vtkOpenFOAMReader::EnableAllPatchArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCreateCellToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateCellToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateCellToPoint(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetCreateCellToPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCreateCellToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateCellToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCreateCellToPoint() :
      op->vtkOpenFOAMReader::GetCreateCellToPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CreateCellToPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellToPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateCellToPointOn();
    }
    else
    {
      op->vtkOpenFOAMReader::CreateCellToPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CreateCellToPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellToPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateCellToPointOff();
    }
    else
    {
      op->vtkOpenFOAMReader::CreateCellToPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetSizeAverageCellToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeAverageCellToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSizeAverageCellToPoint(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetSizeAverageCellToPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetSizeAverageCellToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeAverageCellToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeAverageCellToPoint() :
      op->vtkOpenFOAMReader::GetSizeAverageCellToPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SizeAverageCellToPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeAverageCellToPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SizeAverageCellToPointOn();
    }
    else
    {
      op->vtkOpenFOAMReader::SizeAverageCellToPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SizeAverageCellToPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeAverageCellToPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SizeAverageCellToPointOff();
    }
    else
    {
      op->vtkOpenFOAMReader::SizeAverageCellToPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCacheMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCacheMesh(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetCacheMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCacheMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheMesh() :
      op->vtkOpenFOAMReader::GetCacheMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CacheMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheMeshOn();
    }
    else
    {
      op->vtkOpenFOAMReader::CacheMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CacheMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CacheMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CacheMeshOff();
    }
    else
    {
      op->vtkOpenFOAMReader::CacheMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetDecomposePolyhedra(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetDecomposePolyhedra."
    " (" "Decomposing polyhedra will be removed." ")"
    " -- Deprecated since version " "9.1.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetDecomposePolyhedra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDecomposePolyhedra(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetDecomposePolyhedra(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetDecomposePolyhedra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecomposePolyhedra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDecomposePolyhedra() :
      op->vtkOpenFOAMReader::GetDecomposePolyhedra());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DecomposePolyhedraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecomposePolyhedraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DecomposePolyhedraOn();
    }
    else
    {
      op->vtkOpenFOAMReader::DecomposePolyhedraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_DecomposePolyhedraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecomposePolyhedraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DecomposePolyhedraOff();
    }
    else
    {
      op->vtkOpenFOAMReader::DecomposePolyhedraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetPositionsIsIn13Format(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionsIsIn13Format");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPositionsIsIn13Format(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetPositionsIsIn13Format(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetPositionsIsIn13Format(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionsIsIn13Format");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionsIsIn13Format() :
      op->vtkOpenFOAMReader::GetPositionsIsIn13Format());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_PositionsIsIn13FormatOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsIsIn13FormatOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionsIsIn13FormatOn();
    }
    else
    {
      op->vtkOpenFOAMReader::PositionsIsIn13FormatOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_PositionsIsIn13FormatOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionsIsIn13FormatOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PositionsIsIn13FormatOff();
    }
    else
    {
      op->vtkOpenFOAMReader::PositionsIsIn13FormatOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetSkipZeroTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipZeroTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipZeroTime(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetSkipZeroTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetSkipZeroTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipZeroTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSkipZeroTime() :
      op->vtkOpenFOAMReader::GetSkipZeroTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SkipZeroTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipZeroTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipZeroTimeOn();
    }
    else
    {
      op->vtkOpenFOAMReader::SkipZeroTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SkipZeroTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipZeroTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipZeroTimeOff();
    }
    else
    {
      op->vtkOpenFOAMReader::SkipZeroTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetListTimeStepsByControlDict(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetListTimeStepsByControlDict");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetListTimeStepsByControlDict(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetListTimeStepsByControlDict(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetListTimeStepsByControlDict(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetListTimeStepsByControlDict");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetListTimeStepsByControlDict() :
      op->vtkOpenFOAMReader::GetListTimeStepsByControlDict());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ListTimeStepsByControlDictOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ListTimeStepsByControlDictOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ListTimeStepsByControlDictOn();
    }
    else
    {
      op->vtkOpenFOAMReader::ListTimeStepsByControlDictOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ListTimeStepsByControlDictOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ListTimeStepsByControlDictOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ListTimeStepsByControlDictOff();
    }
    else
    {
      op->vtkOpenFOAMReader::ListTimeStepsByControlDictOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetAddDimensionsToArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddDimensionsToArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddDimensionsToArrayNames(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetAddDimensionsToArrayNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetAddDimensionsToArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddDimensionsToArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddDimensionsToArrayNames() :
      op->vtkOpenFOAMReader::GetAddDimensionsToArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimensionsToArrayNamesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddDimensionsToArrayNamesOn();
    }
    else
    {
      op->vtkOpenFOAMReader::AddDimensionsToArrayNamesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDimensionsToArrayNamesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddDimensionsToArrayNamesOff();
    }
    else
    {
      op->vtkOpenFOAMReader::AddDimensionsToArrayNamesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetReadZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadZones(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetReadZones(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetReadZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadZones() :
      op->vtkOpenFOAMReader::GetReadZones());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ReadZonesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadZonesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadZonesOn();
    }
    else
    {
      op->vtkOpenFOAMReader::ReadZonesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_ReadZonesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadZonesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadZonesOff();
    }
    else
    {
      op->vtkOpenFOAMReader::ReadZonesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetUse64BitLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse64BitLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse64BitLabels(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetUse64BitLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetUse64BitLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse64BitLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUse64BitLabels() :
      op->vtkOpenFOAMReader::GetUse64BitLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_Use64BitLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitLabelsOn();
    }
    else
    {
      op->vtkOpenFOAMReader::Use64BitLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_Use64BitLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitLabelsOff();
    }
    else
    {
      op->vtkOpenFOAMReader::Use64BitLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetCopyDataToCellZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyDataToCellZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyDataToCellZones() :
      op->vtkOpenFOAMReader::GetCopyDataToCellZones());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetCopyDataToCellZones(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyDataToCellZones");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyDataToCellZones(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetCopyDataToCellZones(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CopyDataToCellZonesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDataToCellZonesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyDataToCellZonesOn();
    }
    else
    {
      op->vtkOpenFOAMReader::CopyDataToCellZonesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_CopyDataToCellZonesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyDataToCellZonesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyDataToCellZonesOff();
    }
    else
    {
      op->vtkOpenFOAMReader::CopyDataToCellZonesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetUse64BitFloats(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUse64BitFloats");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUse64BitFloats(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetUse64BitFloats(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetUse64BitFloats(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUse64BitFloats");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUse64BitFloats() :
      op->vtkOpenFOAMReader::GetUse64BitFloats());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_Use64BitFloatsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitFloatsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitFloatsOn();
    }
    else
    {
      op->vtkOpenFOAMReader::Use64BitFloatsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_Use64BitFloatsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitFloatsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitFloatsOff();
    }
    else
    {
      op->vtkOpenFOAMReader::Use64BitFloatsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetRefresh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRefresh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRefresh();
    }
    else
    {
      op->vtkOpenFOAMReader::SetRefresh();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  vtkOpenFOAMReader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenFOAMReader"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkOpenFOAMReader::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_MakeInformationVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeInformationVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  vtkInformationVector *temp0 = nullptr;
  vtkStdString temp1;
  vtkStringArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkDoubleArray")))
  {
    int tempr = (ap.IsBound() ?
      op->MakeInformationVector(temp0, temp1, temp2, temp3) :
      op->vtkOpenFOAMReader::MakeInformationVector(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeValue() :
      op->vtkOpenFOAMReader::GetTimeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->SetTimeValue(temp0) :
      op->vtkOpenFOAMReader::SetTimeValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetTimeNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetTimeNames() :
      op->vtkOpenFOAMReader::GetTimeNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_GetTimeValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetTimeValues() :
      op->vtkOpenFOAMReader::GetTimeValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenFOAMReader_MakeMetaDataAtTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeMetaDataAtTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenFOAMReader *op = static_cast<vtkOpenFOAMReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->MakeMetaDataAtTimeStep(temp0) :
      op->vtkOpenFOAMReader::MakeMetaDataAtTimeStep(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenFOAMReader_Methods[] = {
  {"IsTypeOf", PyvtkOpenFOAMReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenFOAMReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenFOAMReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenFOAMReader\nC++: static vtkOpenFOAMReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenFOAMReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenFOAMReader\nC++: vtkOpenFOAMReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenFOAMReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenFOAMReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CanReadFile", PyvtkOpenFOAMReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, __a:str) -> int\nC++: int CanReadFile(const char *)\n\nDetermine if the file can be read with this reader.\n"},
  {"SetFileName", PyvtkOpenFOAMReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSet/Get the filename.\n"},
  {"GetFileName", PyvtkOpenFOAMReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetNumberOfCellArrays", PyvtkOpenFOAMReader_GetNumberOfCellArrays, METH_VARARGS,
   "GetNumberOfCellArrays(self) -> int\nC++: int GetNumberOfCellArrays()\n\nGet the number of cell arrays available in the input.\n"},
  {"GetCellArrayStatus", PyvtkOpenFOAMReader_GetCellArrayStatus, METH_VARARGS,
   "GetCellArrayStatus(self, name:str) -> int\nC++: int GetCellArrayStatus(const char *name)\n\nGet/Set whether the cell array with the given name is to be read.\n"},
  {"SetCellArrayStatus", PyvtkOpenFOAMReader_SetCellArrayStatus, METH_VARARGS,
   "SetCellArrayStatus(self, name:str, status:int) -> None\nC++: void SetCellArrayStatus(const char *name, int status)\n\n"},
  {"GetCellArrayName", PyvtkOpenFOAMReader_GetCellArrayName, METH_VARARGS,
   "GetCellArrayName(self, index:int) -> str\nC++: const char *GetCellArrayName(int index)\n\nGet the name of the cell array with the given index in the input.\n"},
  {"DisableAllCellArrays", PyvtkOpenFOAMReader_DisableAllCellArrays, METH_VARARGS,
   "DisableAllCellArrays(self) -> None\nC++: void DisableAllCellArrays()\n\nTurn on/off all cell arrays.\n"},
  {"EnableAllCellArrays", PyvtkOpenFOAMReader_EnableAllCellArrays, METH_VARARGS,
   "EnableAllCellArrays(self) -> None\nC++: void EnableAllCellArrays()\n\n"},
  {"GetNumberOfPointArrays", PyvtkOpenFOAMReader_GetNumberOfPointArrays, METH_VARARGS,
   "GetNumberOfPointArrays(self) -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point arrays available in the input.\n"},
  {"GetPointArrayStatus", PyvtkOpenFOAMReader_GetPointArrayStatus, METH_VARARGS,
   "GetPointArrayStatus(self, name:str) -> int\nC++: int GetPointArrayStatus(const char *name)\n\nGet/Set whether the point array with the given name is to be\nread.\n"},
  {"SetPointArrayStatus", PyvtkOpenFOAMReader_SetPointArrayStatus, METH_VARARGS,
   "SetPointArrayStatus(self, name:str, status:int) -> None\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {"GetPointArrayName", PyvtkOpenFOAMReader_GetPointArrayName, METH_VARARGS,
   "GetPointArrayName(self, index:int) -> str\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the point array with the given index in the\ninput.\n"},
  {"DisableAllPointArrays", PyvtkOpenFOAMReader_DisableAllPointArrays, METH_VARARGS,
   "DisableAllPointArrays(self) -> None\nC++: void DisableAllPointArrays()\n\nTurn on/off all point arrays.\n"},
  {"EnableAllPointArrays", PyvtkOpenFOAMReader_EnableAllPointArrays, METH_VARARGS,
   "EnableAllPointArrays(self) -> None\nC++: void EnableAllPointArrays()\n\n"},
  {"GetNumberOfLagrangianArrays", PyvtkOpenFOAMReader_GetNumberOfLagrangianArrays, METH_VARARGS,
   "GetNumberOfLagrangianArrays(self) -> int\nC++: int GetNumberOfLagrangianArrays()\n\nGet the number of Lagrangian arrays available in the input.\n"},
  {"GetLagrangianArrayStatus", PyvtkOpenFOAMReader_GetLagrangianArrayStatus, METH_VARARGS,
   "GetLagrangianArrayStatus(self, name:str) -> int\nC++: int GetLagrangianArrayStatus(const char *name)\n\nGet/Set whether the Lagrangian array with the given name is to be\nread.\n"},
  {"SetLagrangianArrayStatus", PyvtkOpenFOAMReader_SetLagrangianArrayStatus, METH_VARARGS,
   "SetLagrangianArrayStatus(self, name:str, status:int) -> None\nC++: void SetLagrangianArrayStatus(const char *name, int status)\n\n"},
  {"GetLagrangianArrayName", PyvtkOpenFOAMReader_GetLagrangianArrayName, METH_VARARGS,
   "GetLagrangianArrayName(self, index:int) -> str\nC++: const char *GetLagrangianArrayName(int index)\n\nGet the name of the Lagrangian array with the given index in the\ninput.\n"},
  {"DisableAllLagrangianArrays", PyvtkOpenFOAMReader_DisableAllLagrangianArrays, METH_VARARGS,
   "DisableAllLagrangianArrays(self) -> None\nC++: void DisableAllLagrangianArrays()\n\nTurn on/off all Lagrangian arrays.\n"},
  {"EnableAllLagrangianArrays", PyvtkOpenFOAMReader_EnableAllLagrangianArrays, METH_VARARGS,
   "EnableAllLagrangianArrays(self) -> None\nC++: void EnableAllLagrangianArrays()\n\n"},
  {"GetNumberOfPatchArrays", PyvtkOpenFOAMReader_GetNumberOfPatchArrays, METH_VARARGS,
   "GetNumberOfPatchArrays(self) -> int\nC++: int GetNumberOfPatchArrays()\n\nGet the number of Patches (including Internal Mesh) available in\nthe input.\n"},
  {"GetPatchArrayStatus", PyvtkOpenFOAMReader_GetPatchArrayStatus, METH_VARARGS,
   "GetPatchArrayStatus(self, name:str) -> int\nC++: int GetPatchArrayStatus(const char *name)\n\nGet/Set whether the Patch with the given name is to be read.\n"},
  {"SetPatchArrayStatus", PyvtkOpenFOAMReader_SetPatchArrayStatus, METH_VARARGS,
   "SetPatchArrayStatus(self, name:str, status:int) -> None\nC++: void SetPatchArrayStatus(const char *name, int status)\n\n"},
  {"GetPatchArrayName", PyvtkOpenFOAMReader_GetPatchArrayName, METH_VARARGS,
   "GetPatchArrayName(self, index:int) -> str\nC++: const char *GetPatchArrayName(int index)\n\nGet the name of the Patch with the given index in the input.\n"},
  {"DisableAllPatchArrays", PyvtkOpenFOAMReader_DisableAllPatchArrays, METH_VARARGS,
   "DisableAllPatchArrays(self) -> None\nC++: void DisableAllPatchArrays()\n\nTurn on/off all Patches including the Internal Mesh.\n"},
  {"EnableAllPatchArrays", PyvtkOpenFOAMReader_EnableAllPatchArrays, METH_VARARGS,
   "EnableAllPatchArrays(self) -> None\nC++: void EnableAllPatchArrays()\n\n"},
  {"SetCreateCellToPoint", PyvtkOpenFOAMReader_SetCreateCellToPoint, METH_VARARGS,
   "SetCreateCellToPoint(self, _arg:int) -> None\nC++: virtual void SetCreateCellToPoint(vtkTypeBool _arg)\n\nSet/Get whether to create cell-to-point translated data for\ncell-type data\n"},
  {"GetCreateCellToPoint", PyvtkOpenFOAMReader_GetCreateCellToPoint, METH_VARARGS,
   "GetCreateCellToPoint(self) -> int\nC++: virtual vtkTypeBool GetCreateCellToPoint()\n\n"},
  {"CreateCellToPointOn", PyvtkOpenFOAMReader_CreateCellToPointOn, METH_VARARGS,
   "CreateCellToPointOn(self) -> None\nC++: virtual void CreateCellToPointOn()\n\n"},
  {"CreateCellToPointOff", PyvtkOpenFOAMReader_CreateCellToPointOff, METH_VARARGS,
   "CreateCellToPointOff(self) -> None\nC++: virtual void CreateCellToPointOff()\n\n"},
  {"SetSizeAverageCellToPoint", PyvtkOpenFOAMReader_SetSizeAverageCellToPoint, METH_VARARGS,
   "SetSizeAverageCellToPoint(self, _arg:int) -> None\nC++: virtual void SetSizeAverageCellToPoint(vtkTypeBool _arg)\n\nSet/Get whether to weigh cell to point averaging by size of cells\n(only meaningful when CreateCellToPoint is true)\n\n@sa\nCreateCellToPoint\n"},
  {"GetSizeAverageCellToPoint", PyvtkOpenFOAMReader_GetSizeAverageCellToPoint, METH_VARARGS,
   "GetSizeAverageCellToPoint(self) -> int\nC++: virtual vtkTypeBool GetSizeAverageCellToPoint()\n\n"},
  {"SizeAverageCellToPointOn", PyvtkOpenFOAMReader_SizeAverageCellToPointOn, METH_VARARGS,
   "SizeAverageCellToPointOn(self) -> None\nC++: virtual void SizeAverageCellToPointOn()\n\n"},
  {"SizeAverageCellToPointOff", PyvtkOpenFOAMReader_SizeAverageCellToPointOff, METH_VARARGS,
   "SizeAverageCellToPointOff(self) -> None\nC++: virtual void SizeAverageCellToPointOff()\n\n"},
  {"SetCacheMesh", PyvtkOpenFOAMReader_SetCacheMesh, METH_VARARGS,
   "SetCacheMesh(self, _arg:int) -> None\nC++: virtual void SetCacheMesh(vtkTypeBool _arg)\n\nSet/Get whether mesh is to be cached.\n"},
  {"GetCacheMesh", PyvtkOpenFOAMReader_GetCacheMesh, METH_VARARGS,
   "GetCacheMesh(self) -> int\nC++: virtual vtkTypeBool GetCacheMesh()\n\n"},
  {"CacheMeshOn", PyvtkOpenFOAMReader_CacheMeshOn, METH_VARARGS,
   "CacheMeshOn(self) -> None\nC++: virtual void CacheMeshOn()\n\n"},
  {"CacheMeshOff", PyvtkOpenFOAMReader_CacheMeshOff, METH_VARARGS,
   "CacheMeshOff(self) -> None\nC++: virtual void CacheMeshOff()\n\n"},
  {"SetDecomposePolyhedra", PyvtkOpenFOAMReader_SetDecomposePolyhedra, METH_VARARGS,
   "SetDecomposePolyhedra(self, _arg:int) -> None\nC++: virtual void SetDecomposePolyhedra(vtkTypeBool _arg)\n\nSet/Get whether polyhedra are to be decomposed.\n"},
  {"GetDecomposePolyhedra", PyvtkOpenFOAMReader_GetDecomposePolyhedra, METH_VARARGS,
   "GetDecomposePolyhedra(self) -> int\nC++: virtual vtkTypeBool GetDecomposePolyhedra()\n\n"},
  {"DecomposePolyhedraOn", PyvtkOpenFOAMReader_DecomposePolyhedraOn, METH_VARARGS,
   "DecomposePolyhedraOn(self) -> None\nC++: virtual void DecomposePolyhedraOn()\n\n"},
  {"DecomposePolyhedraOff", PyvtkOpenFOAMReader_DecomposePolyhedraOff, METH_VARARGS,
   "DecomposePolyhedraOff(self) -> None\nC++: virtual void DecomposePolyhedraOff()\n\n"},
  {"SetPositionsIsIn13Format", PyvtkOpenFOAMReader_SetPositionsIsIn13Format, METH_VARARGS,
   "SetPositionsIsIn13Format(self, _arg:int) -> None\nC++: virtual void SetPositionsIsIn13Format(vtkTypeBool _arg)\n\nSet/Get whether the lagrangian/positions have additional data or\nnot. For historical reasons, PositionsIsIn13Format is used to\ndenote that the positions only have x,y,z value and the cell of\nthe enclosing cell. In OpenFOAM 1.4-2.4, positions included facei\nand stepFraction information.\n"},
  {"GetPositionsIsIn13Format", PyvtkOpenFOAMReader_GetPositionsIsIn13Format, METH_VARARGS,
   "GetPositionsIsIn13Format(self) -> int\nC++: virtual vtkTypeBool GetPositionsIsIn13Format()\n\n"},
  {"PositionsIsIn13FormatOn", PyvtkOpenFOAMReader_PositionsIsIn13FormatOn, METH_VARARGS,
   "PositionsIsIn13FormatOn(self) -> None\nC++: virtual void PositionsIsIn13FormatOn()\n\n"},
  {"PositionsIsIn13FormatOff", PyvtkOpenFOAMReader_PositionsIsIn13FormatOff, METH_VARARGS,
   "PositionsIsIn13FormatOff(self) -> None\nC++: virtual void PositionsIsIn13FormatOff()\n\n"},
  {"SetSkipZeroTime", PyvtkOpenFOAMReader_SetSkipZeroTime, METH_VARARGS,
   "SetSkipZeroTime(self, _arg:bool) -> None\nC++: virtual void SetSkipZeroTime(bool _arg)\n\nIgnore 0/ time directory, which is normally missing Lagrangian\nfields and may have many dictionary functionality that we cannot\neasily handle.\n"},
  {"GetSkipZeroTime", PyvtkOpenFOAMReader_GetSkipZeroTime, METH_VARARGS,
   "GetSkipZeroTime(self) -> bool\nC++: virtual bool GetSkipZeroTime()\n\n"},
  {"SkipZeroTimeOn", PyvtkOpenFOAMReader_SkipZeroTimeOn, METH_VARARGS,
   "SkipZeroTimeOn(self) -> None\nC++: virtual void SkipZeroTimeOn()\n\n"},
  {"SkipZeroTimeOff", PyvtkOpenFOAMReader_SkipZeroTimeOff, METH_VARARGS,
   "SkipZeroTimeOff(self) -> None\nC++: virtual void SkipZeroTimeOff()\n\n"},
  {"SetListTimeStepsByControlDict", PyvtkOpenFOAMReader_SetListTimeStepsByControlDict, METH_VARARGS,
   "SetListTimeStepsByControlDict(self, _arg:int) -> None\nC++: virtual void SetListTimeStepsByControlDict(vtkTypeBool _arg)\n\nDetermine if time directories are to be listed according to\ncontrolDict\n"},
  {"GetListTimeStepsByControlDict", PyvtkOpenFOAMReader_GetListTimeStepsByControlDict, METH_VARARGS,
   "GetListTimeStepsByControlDict(self) -> int\nC++: virtual vtkTypeBool GetListTimeStepsByControlDict()\n\n"},
  {"ListTimeStepsByControlDictOn", PyvtkOpenFOAMReader_ListTimeStepsByControlDictOn, METH_VARARGS,
   "ListTimeStepsByControlDictOn(self) -> None\nC++: virtual void ListTimeStepsByControlDictOn()\n\n"},
  {"ListTimeStepsByControlDictOff", PyvtkOpenFOAMReader_ListTimeStepsByControlDictOff, METH_VARARGS,
   "ListTimeStepsByControlDictOff(self) -> None\nC++: virtual void ListTimeStepsByControlDictOff()\n\n"},
  {"SetAddDimensionsToArrayNames", PyvtkOpenFOAMReader_SetAddDimensionsToArrayNames, METH_VARARGS,
   "SetAddDimensionsToArrayNames(self, _arg:int) -> None\nC++: virtual void SetAddDimensionsToArrayNames(vtkTypeBool _arg)\n\nAdd dimensions to array names\n"},
  {"GetAddDimensionsToArrayNames", PyvtkOpenFOAMReader_GetAddDimensionsToArrayNames, METH_VARARGS,
   "GetAddDimensionsToArrayNames(self) -> int\nC++: virtual vtkTypeBool GetAddDimensionsToArrayNames()\n\n"},
  {"AddDimensionsToArrayNamesOn", PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOn, METH_VARARGS,
   "AddDimensionsToArrayNamesOn(self) -> None\nC++: virtual void AddDimensionsToArrayNamesOn()\n\n"},
  {"AddDimensionsToArrayNamesOff", PyvtkOpenFOAMReader_AddDimensionsToArrayNamesOff, METH_VARARGS,
   "AddDimensionsToArrayNamesOff(self) -> None\nC++: virtual void AddDimensionsToArrayNamesOff()\n\n"},
  {"SetReadZones", PyvtkOpenFOAMReader_SetReadZones, METH_VARARGS,
   "SetReadZones(self, _arg:int) -> None\nC++: virtual void SetReadZones(vtkTypeBool _arg)\n\nSet/Get whether zones will be read.\n"},
  {"GetReadZones", PyvtkOpenFOAMReader_GetReadZones, METH_VARARGS,
   "GetReadZones(self) -> int\nC++: virtual vtkTypeBool GetReadZones()\n\n"},
  {"ReadZonesOn", PyvtkOpenFOAMReader_ReadZonesOn, METH_VARARGS,
   "ReadZonesOn(self) -> None\nC++: virtual void ReadZonesOn()\n\n"},
  {"ReadZonesOff", PyvtkOpenFOAMReader_ReadZonesOff, METH_VARARGS,
   "ReadZonesOff(self) -> None\nC++: virtual void ReadZonesOff()\n\n"},
  {"SetUse64BitLabels", PyvtkOpenFOAMReader_SetUse64BitLabels, METH_VARARGS,
   "SetUse64BitLabels(self, val:bool) -> None\nC++: virtual void SetUse64BitLabels(bool val)\n\nIf true, labels are expected to be 64-bit, rather than 32.\n"},
  {"GetUse64BitLabels", PyvtkOpenFOAMReader_GetUse64BitLabels, METH_VARARGS,
   "GetUse64BitLabels(self) -> bool\nC++: virtual bool GetUse64BitLabels()\n\n"},
  {"Use64BitLabelsOn", PyvtkOpenFOAMReader_Use64BitLabelsOn, METH_VARARGS,
   "Use64BitLabelsOn(self) -> None\nC++: virtual void Use64BitLabelsOn()\n\n"},
  {"Use64BitLabelsOff", PyvtkOpenFOAMReader_Use64BitLabelsOff, METH_VARARGS,
   "Use64BitLabelsOff(self) -> None\nC++: virtual void Use64BitLabelsOff()\n\n"},
  {"GetCopyDataToCellZones", PyvtkOpenFOAMReader_GetCopyDataToCellZones, METH_VARARGS,
   "GetCopyDataToCellZones(self) -> bool\nC++: virtual bool GetCopyDataToCellZones()\n\nIf true, data of the internal mesh are copied to the cell zones.\nDefault is false.\n"},
  {"SetCopyDataToCellZones", PyvtkOpenFOAMReader_SetCopyDataToCellZones, METH_VARARGS,
   "SetCopyDataToCellZones(self, _arg:bool) -> None\nC++: virtual void SetCopyDataToCellZones(bool _arg)\n\n"},
  {"CopyDataToCellZonesOn", PyvtkOpenFOAMReader_CopyDataToCellZonesOn, METH_VARARGS,
   "CopyDataToCellZonesOn(self) -> None\nC++: virtual void CopyDataToCellZonesOn()\n\n"},
  {"CopyDataToCellZonesOff", PyvtkOpenFOAMReader_CopyDataToCellZonesOff, METH_VARARGS,
   "CopyDataToCellZonesOff(self) -> None\nC++: virtual void CopyDataToCellZonesOff()\n\n"},
  {"SetUse64BitFloats", PyvtkOpenFOAMReader_SetUse64BitFloats, METH_VARARGS,
   "SetUse64BitFloats(self, val:bool) -> None\nC++: virtual void SetUse64BitFloats(bool val)\n\nIf true, floats are expected to be 64-bit, rather than 32. Note\nthat vtkFloatArrays may still be used in the output if this is\ntrue. This flag is only used to ensure that binary data is\ncorrectly parsed.\n"},
  {"GetUse64BitFloats", PyvtkOpenFOAMReader_GetUse64BitFloats, METH_VARARGS,
   "GetUse64BitFloats(self) -> bool\nC++: virtual bool GetUse64BitFloats()\n\n"},
  {"Use64BitFloatsOn", PyvtkOpenFOAMReader_Use64BitFloatsOn, METH_VARARGS,
   "Use64BitFloatsOn(self) -> None\nC++: virtual void Use64BitFloatsOn()\n\n"},
  {"Use64BitFloatsOff", PyvtkOpenFOAMReader_Use64BitFloatsOff, METH_VARARGS,
   "Use64BitFloatsOff(self) -> None\nC++: virtual void Use64BitFloatsOff()\n\n"},
  {"SetRefresh", PyvtkOpenFOAMReader_SetRefresh, METH_VARARGS,
   "SetRefresh(self) -> None\nC++: void SetRefresh()\n\n"},
  {"SetParent", PyvtkOpenFOAMReader_SetParent, METH_VARARGS,
   "SetParent(self, parent:vtkOpenFOAMReader) -> None\nC++: void SetParent(vtkOpenFOAMReader *parent)\n\n"},
  {"MakeInformationVector", PyvtkOpenFOAMReader_MakeInformationVector, METH_VARARGS,
   "MakeInformationVector(self, __a:vtkInformationVector,\n    procDirName:str, timeNames:vtkStringArray=...,\n    timeValues:vtkDoubleArray=...) -> int\nC++: int MakeInformationVector(vtkInformationVector *,\n    const vtkStdString &procDirName,\n    vtkStringArray *timeNames=nullptr,\n    vtkDoubleArray *timeValues=nullptr)\n\n"},
  {"GetTimeValue", PyvtkOpenFOAMReader_GetTimeValue, METH_VARARGS,
   "GetTimeValue(self) -> float\nC++: double GetTimeValue()\n\n"},
  {"SetTimeValue", PyvtkOpenFOAMReader_SetTimeValue, METH_VARARGS,
   "SetTimeValue(self, __a:float) -> bool\nC++: bool SetTimeValue(double)\n\n"},
  {"GetTimeNames", PyvtkOpenFOAMReader_GetTimeNames, METH_VARARGS,
   "GetTimeNames(self) -> vtkStringArray\nC++: vtkStringArray *GetTimeNames()\n\n"},
  {"GetTimeValues", PyvtkOpenFOAMReader_GetTimeValues, METH_VARARGS,
   "GetTimeValues(self) -> vtkDoubleArray\nC++: vtkDoubleArray *GetTimeValues()\n\n"},
  {"MakeMetaDataAtTimeStep", PyvtkOpenFOAMReader_MakeMetaDataAtTimeStep, METH_VARARGS,
   "MakeMetaDataAtTimeStep(self, __a:bool) -> int\nC++: int MakeMetaDataAtTimeStep(bool)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenFOAMReader_Doc =
  "vtkOpenFOAMReader - reads a dataset in OpenFOAM format\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkOpenFOAMReader creates a multiblock dataset. It reads mesh\n"
  "information and time dependent data.  The polyMesh folders contain\n"
  "mesh information. The time folders contain transient data for the\n"
  "cells. Each folder can contain any number of data files.\n\n"
  "@par Thanks: Thanks to Terry Jordan (terry.jordan@sa.netl.doe.gov) of\n"
  "SAIC at the National Energy Technology Laboratory who originally\n"
  "developed this class.\n\n"
  "Takuya Oshima of Niigata University, Japan\n"
  "(oshima@eng.niigata-u.ac.jp) provided the major bulk of improvements\n"
  "(rewrite) that made the reader truly functional and included the\n"
  "following features: Token-based FoamFile format lexer/parser,\n"
  "performance/stability/compatibility enhancements, gzipped file\n"
  "support, lagrangian field support, variable timestep support, builtin\n"
  "cell-to-point filter, pointField support, polyhedron decomposition\n"
  "support, multiregion support, parallelization support for decomposed\n"
  "cases in conjunction with vtkPOpenFOAMReader etc.\n\n"
  "Philippose Rajan (sarith@rocketmail.com) added GUI-based selection of\n"
  "mesh regions and fields available in the case, minor bug fixes,\n"
  "strict memory allocation checks,\n\n"
  "Mark Olesen (OpenCFD Ltd.) www.openfoam.com has provided various\n"
  "bugfixes, improvements, cleanup\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenFOAMReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkOpenFOAMReader", // tp_name
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
  PyvtkOpenFOAMReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenFOAMReader_StaticNew()
{
  return vtkOpenFOAMReader::New();
}

PyObject *PyvtkOpenFOAMReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenFOAMReader_Type, PyvtkOpenFOAMReader_Methods,
    "vtkOpenFOAMReader",
 &PyvtkOpenFOAMReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenFOAMReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenFOAMReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenFOAMReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

