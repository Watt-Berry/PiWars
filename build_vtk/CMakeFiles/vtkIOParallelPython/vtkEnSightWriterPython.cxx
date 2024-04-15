// python wrapper for vtkEnSightWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEnSightWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnSightWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkEnSightWriter_ClassNew(); }


static PyObject *
PyvtkEnSightWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSightWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSightWriter *tempr = vtkEnSightWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSightWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightWriter::NewInstance());

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
PyvtkEnSightWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEnSightWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEnSightWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetProcessNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessNumber(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetProcessNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetProcessNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessNumber() :
      op->vtkEnSightWriter::GetProcessNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPath(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPath() :
      op->vtkEnSightWriter::GetPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBaseName(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetBaseName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetBaseName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBaseName() :
      op->vtkEnSightWriter::GetBaseName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

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
      op->vtkEnSightWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkEnSightWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkEnSightWriter::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevel(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetGhostLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkEnSightWriter::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetTransientGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransientGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransientGeometry(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetTransientGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetTransientGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransientGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransientGeometry() :
      op->vtkEnSightWriter::GetTransientGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBlocks(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetNumberOfBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkEnSightWriter::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteNodeIDsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteNodeIDsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteNodeIDsOn();
    }
    else
    {
      op->vtkEnSightWriter::WriteNodeIDsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteNodeIDsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteNodeIDsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteNodeIDsOff();
    }
    else
    {
      op->vtkEnSightWriter::WriteNodeIDsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetWriteNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteNodeIDs(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetWriteNodeIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetWriteNodeIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteNodeIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteNodeIDs() :
      op->vtkEnSightWriter::GetWriteNodeIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteElementIDsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteElementIDsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteElementIDsOn();
    }
    else
    {
      op->vtkEnSightWriter::WriteElementIDsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteElementIDsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteElementIDsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteElementIDsOff();
    }
    else
    {
      op->vtkEnSightWriter::WriteElementIDsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetWriteElementIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteElementIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteElementIDs(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetWriteElementIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetWriteElementIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteElementIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteElementIDs() :
      op->vtkEnSightWriter::GetWriteElementIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetBlockIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetBlockIDs(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetBlockIDs(temp0);
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
PyvtkEnSightWriter_GetBlockIDs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBlockIDs() :
      op->vtkEnSightWriter::GetBlockIDs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkEnSightWriter::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkEnSightWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteCaseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteCaseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteCaseFile(temp0);
    }
    else
    {
      op->vtkEnSightWriter::WriteCaseFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightWriter_WriteSOSCaseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSOSCaseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightWriter *op = static_cast<vtkEnSightWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteSOSCaseFile(temp0);
    }
    else
    {
      op->vtkEnSightWriter::WriteSOSCaseFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkEnSightWriter_Methods[] = {
  {"IsTypeOf", PyvtkEnSightWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSightWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSightWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEnSightWriter\nC++: static vtkEnSightWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSightWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEnSightWriter\nC++: vtkEnSightWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEnSightWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEnSightWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetProcessNumber", PyvtkEnSightWriter_SetProcessNumber, METH_VARARGS,
   "SetProcessNumber(self, _arg:int) -> None\nC++: virtual void SetProcessNumber(int _arg)\n\nSpecify which process this writer is\n"},
  {"GetProcessNumber", PyvtkEnSightWriter_GetProcessNumber, METH_VARARGS,
   "GetProcessNumber(self) -> int\nC++: virtual int GetProcessNumber()\n\n"},
  {"SetPath", PyvtkEnSightWriter_SetPath, METH_VARARGS,
   "SetPath(self, _arg:str) -> None\nC++: virtual void SetPath(const char *_arg)\n\nSpecify path of EnSight data files to write.\n"},
  {"GetPath", PyvtkEnSightWriter_GetPath, METH_VARARGS,
   "GetPath(self) -> str\nC++: virtual char *GetPath()\n\n"},
  {"SetBaseName", PyvtkEnSightWriter_SetBaseName, METH_VARARGS,
   "SetBaseName(self, _arg:str) -> None\nC++: virtual void SetBaseName(const char *_arg)\n\nSpecify base name of EnSight data files to write.\n"},
  {"GetBaseName", PyvtkEnSightWriter_GetBaseName, METH_VARARGS,
   "GetBaseName(self) -> str\nC++: virtual char *GetBaseName()\n\n"},
  {"SetFileName", PyvtkEnSightWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the path and base name of the output files.\n"},
  {"GetFileName", PyvtkEnSightWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetTimeStep", PyvtkEnSightWriter_SetTimeStep, METH_VARARGS,
   "SetTimeStep(self, _arg:int) -> None\nC++: virtual void SetTimeStep(int _arg)\n\nSpecify the Timestep that this data is for\n"},
  {"GetTimeStep", PyvtkEnSightWriter_GetTimeStep, METH_VARARGS,
   "GetTimeStep(self) -> int\nC++: virtual int GetTimeStep()\n\n"},
  {"SetGhostLevel", PyvtkEnSightWriter_SetGhostLevel, METH_VARARGS,
   "SetGhostLevel(self, _arg:int) -> None\nC++: virtual void SetGhostLevel(int _arg)\n\nSpecify the number of ghost levels to include in output files\n"},
  {"GetGhostLevel", PyvtkEnSightWriter_GetGhostLevel, METH_VARARGS,
   "GetGhostLevel(self) -> int\nC++: virtual int GetGhostLevel()\n\n"},
  {"SetTransientGeometry", PyvtkEnSightWriter_SetTransientGeometry, METH_VARARGS,
   "SetTransientGeometry(self, _arg:bool) -> None\nC++: virtual void SetTransientGeometry(bool _arg)\n\nSpecify whether the geometry changes each timestep if false,\ngeometry is only written at timestep 0\n"},
  {"GetTransientGeometry", PyvtkEnSightWriter_GetTransientGeometry, METH_VARARGS,
   "GetTransientGeometry(self) -> bool\nC++: virtual bool GetTransientGeometry()\n\n"},
  {"SetNumberOfBlocks", PyvtkEnSightWriter_SetNumberOfBlocks, METH_VARARGS,
   "SetNumberOfBlocks(self, _arg:int) -> None\nC++: virtual void SetNumberOfBlocks(int _arg)\n\nset the number of block ID's\n"},
  {"GetNumberOfBlocks", PyvtkEnSightWriter_GetNumberOfBlocks, METH_VARARGS,
   "GetNumberOfBlocks(self) -> int\nC++: virtual int GetNumberOfBlocks()\n\n"},
  {"WriteNodeIDsOn", PyvtkEnSightWriter_WriteNodeIDsOn, METH_VARARGS,
   "WriteNodeIDsOn(self) -> None\nC++: virtual void WriteNodeIDsOn()\n\nTurn on/off writing node IDs (default: on). If this is on,\ngeometry files will contain node IDs for each part (node id\ngiven), otherwise node IDs are omitted (node id off).\n\nThe EnSight node IDs correspond to VTK point IDs in the input\ndataset.\n"},
  {"WriteNodeIDsOff", PyvtkEnSightWriter_WriteNodeIDsOff, METH_VARARGS,
   "WriteNodeIDsOff(self) -> None\nC++: virtual void WriteNodeIDsOff()\n\n"},
  {"SetWriteNodeIDs", PyvtkEnSightWriter_SetWriteNodeIDs, METH_VARARGS,
   "SetWriteNodeIDs(self, _arg:bool) -> None\nC++: virtual void SetWriteNodeIDs(bool _arg)\n\n"},
  {"GetWriteNodeIDs", PyvtkEnSightWriter_GetWriteNodeIDs, METH_VARARGS,
   "GetWriteNodeIDs(self) -> bool\nC++: virtual bool GetWriteNodeIDs()\n\n"},
  {"WriteElementIDsOn", PyvtkEnSightWriter_WriteElementIDsOn, METH_VARARGS,
   "WriteElementIDsOn(self) -> None\nC++: virtual void WriteElementIDsOn()\n\nTurn on/off writing element IDs (default: on). If this is on,\ngeometry files will contain element IDs for each part (element id\ngiven), otherwise element IDs are omitted (element id off).\n\nThe EnSight element IDs correspond to VTK cell IDs in the input\ndataset.\n"},
  {"WriteElementIDsOff", PyvtkEnSightWriter_WriteElementIDsOff, METH_VARARGS,
   "WriteElementIDsOff(self) -> None\nC++: virtual void WriteElementIDsOff()\n\n"},
  {"SetWriteElementIDs", PyvtkEnSightWriter_SetWriteElementIDs, METH_VARARGS,
   "SetWriteElementIDs(self, _arg:bool) -> None\nC++: virtual void SetWriteElementIDs(bool _arg)\n\n"},
  {"GetWriteElementIDs", PyvtkEnSightWriter_GetWriteElementIDs, METH_VARARGS,
   "GetWriteElementIDs(self) -> bool\nC++: virtual bool GetWriteElementIDs()\n\n"},
  {"SetBlockIDs", PyvtkEnSightWriter_SetBlockIDs, METH_VARARGS,
   "SetBlockIDs(self, val:[int, ...]) -> None\nC++: virtual void SetBlockIDs(int *val)\n\nset the array of Block ID's this class keeps a reference to the\narray and will not delete it\n"},
  {"GetBlockIDs", PyvtkEnSightWriter_GetBlockIDs, METH_VARARGS,
   "GetBlockIDs(self) -> Pointer\nC++: virtual int *GetBlockIDs()\n\n"},
  {"SetInputData", PyvtkEnSightWriter_SetInputData, METH_VARARGS,
   "SetInputData(self, input:vtkUnstructuredGrid) -> None\nC++: virtual void SetInputData(vtkUnstructuredGrid *input)\n\nSpecify the input data or filter.\n"},
  {"GetInput", PyvtkEnSightWriter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetInput()\n\n"},
  {"WriteCaseFile", PyvtkEnSightWriter_WriteCaseFile, METH_VARARGS,
   "WriteCaseFile(self, TotalTimeSteps:int) -> None\nC++: virtual void WriteCaseFile(int TotalTimeSteps)\n\nWrites the case file that EnSight is capable of reading The other\ndata files must be written before the case file and the input\nmust be one of the time steps variables must be the same for all\ntime steps or the case file will be missing variables\n"},
  {"WriteSOSCaseFile", PyvtkEnSightWriter_WriteSOSCaseFile, METH_VARARGS,
   "WriteSOSCaseFile(self, NumProcs:int) -> None\nC++: virtual void WriteSOSCaseFile(int NumProcs)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEnSightWriter_Doc =
  "vtkEnSightWriter - write vtk unstructured grid data as an EnSight file\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkEnSightWriter is a source object that writes binary unstructured\n"
  "grid data files in EnSight format. See EnSight Manual for format\n"
  "details\n\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems. Be sure to specify the endian-ness of the file when reading\n"
  "it into EnSight\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEnSightWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOParallel.vtkEnSightWriter", // tp_name
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
  PyvtkEnSightWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnSightWriter_StaticNew()
{
  return vtkEnSightWriter::New();
}

PyObject *PyvtkEnSightWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEnSightWriter_Type, PyvtkEnSightWriter_Methods,
    "vtkEnSightWriter",
 &PyvtkEnSightWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnSightWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSightWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSightWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

