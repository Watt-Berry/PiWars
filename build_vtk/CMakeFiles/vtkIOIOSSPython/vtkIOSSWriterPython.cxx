// python wrapper for vtkIOSSWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIOSSReader.h"
#include "vtkIOSSWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIOSSWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkIOSSWriter_ClassNew(); }


static PyObject *
PyvtkIOSSWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIOSSWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIOSSWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIOSSWriter *tempr = vtkIOSSWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIOSSWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIOSSWriter::NewInstance());

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
PyvtkIOSSWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIOSSWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIOSSWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

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
      op->vtkIOSSWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkIOSSWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetAssemblyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAssemblyName(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetAssemblyName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetAssemblyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAssemblyName() :
      op->vtkIOSSWriter::GetAssemblyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetChooseFieldsToWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChooseFieldsToWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChooseFieldsToWrite(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetChooseFieldsToWrite(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetChooseFieldsToWrite(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChooseFieldsToWrite");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetChooseFieldsToWrite() :
      op->vtkIOSSWriter::GetChooseFieldsToWrite());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ChooseFieldsToWriteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChooseFieldsToWriteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ChooseFieldsToWriteOn();
    }
    else
    {
      op->vtkIOSSWriter::ChooseFieldsToWriteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ChooseFieldsToWriteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChooseFieldsToWriteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ChooseFieldsToWriteOff();
    }
    else
    {
      op->vtkIOSSWriter::ChooseFieldsToWriteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  vtkIOSSReader::EntityType temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkIOSSReader.EntityType") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AddSelector(temp0, temp1) :
      op->vtkIOSSWriter::AddSelector(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  vtkIOSSReader::EntityType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkIOSSReader.EntityType"))
  {
    if (ap.IsBound())
    {
      op->ClearSelectors(temp0);
    }
    else
    {
      op->vtkIOSSWriter::ClearSelectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  vtkIOSSReader::EntityType temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkIOSSReader.EntityType") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSelector(temp0, temp1);
    }
    else
    {
      op->vtkIOSSWriter::SetSelector(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  vtkIOSSReader::EntityType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkIOSSReader.EntityType"))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSelectors(temp0) :
      op->vtkIOSSWriter::GetNumberOfSelectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  vtkIOSSReader::EntityType temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkIOSSReader.EntityType") &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSelector(temp0, temp1) :
      op->vtkIOSSWriter::GetSelector(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  vtkIOSSReader::EntityType temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkIOSSReader.EntityType"))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFieldSelection(temp0) :
      op->vtkIOSSWriter::GetFieldSelection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNodeBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetNodeBlockFieldSelection() :
      op->vtkIOSSWriter::GetNodeBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddEdgeBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdgeBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddEdgeBlockSelector(temp0) :
      op->vtkIOSSWriter::AddEdgeBlockSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearEdgeBlockSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEdgeBlockSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearEdgeBlockSelectors();
    }
    else
    {
      op->vtkIOSSWriter::ClearEdgeBlockSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetEdgeBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeBlockSelector(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetEdgeBlockSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfEdgeBlockSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeBlockSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeBlockSelectors() :
      op->vtkIOSSWriter::GetNumberOfEdgeBlockSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetEdgeBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeBlockSelector(temp0) :
      op->vtkIOSSWriter::GetEdgeBlockSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetEdgeBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEdgeBlockFieldSelection() :
      op->vtkIOSSWriter::GetEdgeBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddFaceBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFaceBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddFaceBlockSelector(temp0) :
      op->vtkIOSSWriter::AddFaceBlockSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearFaceBlockSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFaceBlockSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFaceBlockSelectors();
    }
    else
    {
      op->vtkIOSSWriter::ClearFaceBlockSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetFaceBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFaceBlockSelector(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetFaceBlockSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfFaceBlockSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceBlockSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaceBlockSelectors() :
      op->vtkIOSSWriter::GetNumberOfFaceBlockSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetFaceBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFaceBlockSelector(temp0) :
      op->vtkIOSSWriter::GetFaceBlockSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetFaceBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFaceBlockFieldSelection() :
      op->vtkIOSSWriter::GetFaceBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddElementBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddElementBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddElementBlockSelector(temp0) :
      op->vtkIOSSWriter::AddElementBlockSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearElementBlockSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearElementBlockSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearElementBlockSelectors();
    }
    else
    {
      op->vtkIOSSWriter::ClearElementBlockSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetElementBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetElementBlockSelector(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetElementBlockSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfElementBlockSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementBlockSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementBlockSelectors() :
      op->vtkIOSSWriter::GetNumberOfElementBlockSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetElementBlockSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementBlockSelector(temp0) :
      op->vtkIOSSWriter::GetElementBlockSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetElementBlockFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementBlockFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetElementBlockFieldSelection() :
      op->vtkIOSSWriter::GetElementBlockFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddNodeSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodeSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddNodeSetSelector(temp0) :
      op->vtkIOSSWriter::AddNodeSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearNodeSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearNodeSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearNodeSetSelectors();
    }
    else
    {
      op->vtkIOSSWriter::ClearNodeSetSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetNodeSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNodeSetSelector(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetNodeSetSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfNodeSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodeSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNodeSetSelectors() :
      op->vtkIOSSWriter::GetNumberOfNodeSetSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNodeSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeSetSelector(temp0) :
      op->vtkIOSSWriter::GetNodeSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNodeSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetNodeSetFieldSelection() :
      op->vtkIOSSWriter::GetNodeSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddEdgeSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdgeSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddEdgeSetSelector(temp0) :
      op->vtkIOSSWriter::AddEdgeSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearEdgeSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEdgeSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearEdgeSetSelectors();
    }
    else
    {
      op->vtkIOSSWriter::ClearEdgeSetSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetEdgeSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeSetSelector(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetEdgeSetSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfEdgeSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeSetSelectors() :
      op->vtkIOSSWriter::GetNumberOfEdgeSetSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetEdgeSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeSetSelector(temp0) :
      op->vtkIOSSWriter::GetEdgeSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetEdgeSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetEdgeSetFieldSelection() :
      op->vtkIOSSWriter::GetEdgeSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddFaceSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFaceSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddFaceSetSelector(temp0) :
      op->vtkIOSSWriter::AddFaceSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearFaceSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFaceSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFaceSetSelectors();
    }
    else
    {
      op->vtkIOSSWriter::ClearFaceSetSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetFaceSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFaceSetSelector(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetFaceSetSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfFaceSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaceSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaceSetSelectors() :
      op->vtkIOSSWriter::GetNumberOfFaceSetSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetFaceSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFaceSetSelector(temp0) :
      op->vtkIOSSWriter::GetFaceSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetFaceSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetFaceSetFieldSelection() :
      op->vtkIOSSWriter::GetFaceSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddElementSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddElementSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddElementSetSelector(temp0) :
      op->vtkIOSSWriter::AddElementSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearElementSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearElementSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearElementSetSelectors();
    }
    else
    {
      op->vtkIOSSWriter::ClearElementSetSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetElementSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetElementSetSelector(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetElementSetSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfElementSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElementSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfElementSetSelectors() :
      op->vtkIOSSWriter::GetNumberOfElementSetSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetElementSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetElementSetSelector(temp0) :
      op->vtkIOSSWriter::GetElementSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetElementSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetElementSetFieldSelection() :
      op->vtkIOSSWriter::GetElementSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_AddSideSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSideSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddSideSetSelector(temp0) :
      op->vtkIOSSWriter::AddSideSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_ClearSideSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSideSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSideSetSelectors();
    }
    else
    {
      op->vtkIOSSWriter::ClearSideSetSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetSideSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSideSetSelector(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetSideSetSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetNumberOfSideSetSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideSetSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideSetSelectors() :
      op->vtkIOSSWriter::GetNumberOfSideSetSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetSideSetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSideSetSelector(temp0) :
      op->vtkIOSSWriter::GetSideSetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetSideSetFieldSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideSetFieldSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->GetSideSetFieldSelection() :
      op->vtkIOSSWriter::GetSideSetFieldSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetRemoveGhosts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveGhosts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveGhosts(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetRemoveGhosts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetRemoveGhosts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveGhosts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveGhosts() :
      op->vtkIOSSWriter::GetRemoveGhosts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetOffsetGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffsetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffsetGlobalIds(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetOffsetGlobalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetOffsetGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOffsetGlobalIds() :
      op->vtkIOSSWriter::GetOffsetGlobalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_OffsetGlobalIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffsetGlobalIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OffsetGlobalIdsOn();
    }
    else
    {
      op->vtkIOSSWriter::OffsetGlobalIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_OffsetGlobalIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OffsetGlobalIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OffsetGlobalIdsOff();
    }
    else
    {
      op->vtkIOSSWriter::OffsetGlobalIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetPreserveInputEntityGroups(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetPreserveInputEntityGroups."
    " (" "PreserveInputEntityGroups is no longer needed." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetPreserveInputEntityGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveInputEntityGroups(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetPreserveInputEntityGroups(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetPreserveInputEntityGroups(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetPreserveInputEntityGroups."
    " (" "PreserveInputEntityGroups is no longer needed." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetPreserveInputEntityGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPreserveInputEntityGroups() :
      op->vtkIOSSWriter::GetPreserveInputEntityGroups());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_PreserveInputEntityGroupsOn(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method PreserveInputEntityGroupsOn."
    " (" "PreserveInputEntityGroups is no longer needed." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "PreserveInputEntityGroupsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveInputEntityGroupsOn();
    }
    else
    {
      op->vtkIOSSWriter::PreserveInputEntityGroupsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_PreserveInputEntityGroupsOff(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method PreserveInputEntityGroupsOff."
    " (" "PreserveInputEntityGroups is no longer needed." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "PreserveInputEntityGroupsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveInputEntityGroupsOff();
    }
    else
    {
      op->vtkIOSSWriter::PreserveInputEntityGroupsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetPreserveOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveOriginalIds(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetPreserveOriginalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetPreserveOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPreserveOriginalIds() :
      op->vtkIOSSWriter::GetPreserveOriginalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_PreserveOriginalIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveOriginalIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveOriginalIdsOn();
    }
    else
    {
      op->vtkIOSSWriter::PreserveOriginalIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_PreserveOriginalIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveOriginalIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveOriginalIdsOff();
    }
    else
    {
      op->vtkIOSSWriter::PreserveOriginalIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetWriteQAAndInformationRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteQAAndInformationRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteQAAndInformationRecords(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetWriteQAAndInformationRecords(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetWriteQAAndInformationRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteQAAndInformationRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetWriteQAAndInformationRecords() :
      op->vtkIOSSWriter::GetWriteQAAndInformationRecords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_WriteQAAndInformationRecordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteQAAndInformationRecordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteQAAndInformationRecordsOn();
    }
    else
    {
      op->vtkIOSSWriter::WriteQAAndInformationRecordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_WriteQAAndInformationRecordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteQAAndInformationRecordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteQAAndInformationRecordsOff();
    }
    else
    {
      op->vtkIOSSWriter::WriteQAAndInformationRecordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementMagnitude(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetDisplacementMagnitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetDisplacementMagnitudeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementMagnitudeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementMagnitudeMinValue() :
      op->vtkIOSSWriter::GetDisplacementMagnitudeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetDisplacementMagnitudeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementMagnitudeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementMagnitudeMaxValue() :
      op->vtkIOSSWriter::GetDisplacementMagnitudeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementMagnitude() :
      op->vtkIOSSWriter::GetDisplacementMagnitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetMaximumTimeStepsPerFile(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetMaximumTimeStepsPerFile."
    " (" "Use TimeStepRange/TimeStepStride instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetMaximumTimeStepsPerFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumTimeStepsPerFile(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetMaximumTimeStepsPerFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetMaximumTimeStepsPerFile(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetMaximumTimeStepsPerFile."
    " (" "Use TimeStepRange/TimeStepStride instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetMaximumTimeStepsPerFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumTimeStepsPerFile() :
      op->vtkIOSSWriter::GetMaximumTimeStepsPerFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepRange(temp0, temp1);
    }
    else
    {
      op->vtkIOSSWriter::SetTimeStepRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIOSSWriter_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepRange(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetTimeStepRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkIOSSWriter_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIOSSWriter_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkIOSSWriter_SetTimeStepRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return nullptr;
}


static PyObject *
PyvtkIOSSWriter_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkIOSSWriter::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetTimeStepStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepStride(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetTimeStepStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetTimeStepStrideMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepStrideMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepStrideMinValue() :
      op->vtkIOSSWriter::GetTimeStepStrideMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetTimeStepStrideMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepStrideMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepStrideMaxValue() :
      op->vtkIOSSWriter::GetTimeStepStrideMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetTimeStepStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepStride() :
      op->vtkIOSSWriter::GetTimeStepStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkIOSSWriter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIOSSWriter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIOSSWriter *op = static_cast<vtkIOSSWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkIOSSWriter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIOSSWriter_Methods[] = {
  {"IsTypeOf", PyvtkIOSSWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIOSSWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIOSSWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIOSSWriter\nC++: static vtkIOSSWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIOSSWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIOSSWriter\nC++: vtkIOSSWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIOSSWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIOSSWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkIOSSWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nGet/set the filename. When writing in a distributed environment,\nthe actual filename written out may be different.\n"},
  {"GetFileName", PyvtkIOSSWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetAssemblyName", PyvtkIOSSWriter_SetAssemblyName, METH_VARARGS,
   "SetAssemblyName(self, _arg:str) -> None\nC++: virtual void SetAssemblyName(const char *_arg)\n\nGet/Set the active assembly to use. The chosen assembly is used\nin combination with the selectors specified to determine which\nblocks are to be extracted.\n\nThe default is set to vtkDataAssemblyUtilities::HierarchyName().\n"},
  {"GetAssemblyName", PyvtkIOSSWriter_GetAssemblyName, METH_VARARGS,
   "GetAssemblyName(self) -> str\nC++: virtual char *GetAssemblyName()\n\n"},
  {"SetChooseFieldsToWrite", PyvtkIOSSWriter_SetChooseFieldsToWrite, METH_VARARGS,
   "SetChooseFieldsToWrite(self, _arg:bool) -> None\nC++: virtual void SetChooseFieldsToWrite(bool _arg)\n\nChoose which fields to write. If this is true, then only the\narrays selected will be written. If this is false, then all\narrays will be written.\n\nThe default is false.\n"},
  {"GetChooseFieldsToWrite", PyvtkIOSSWriter_GetChooseFieldsToWrite, METH_VARARGS,
   "GetChooseFieldsToWrite(self) -> bool\nC++: virtual bool GetChooseFieldsToWrite()\n\n"},
  {"ChooseFieldsToWriteOn", PyvtkIOSSWriter_ChooseFieldsToWriteOn, METH_VARARGS,
   "ChooseFieldsToWriteOn(self) -> None\nC++: virtual void ChooseFieldsToWriteOn()\n\n"},
  {"ChooseFieldsToWriteOff", PyvtkIOSSWriter_ChooseFieldsToWriteOff, METH_VARARGS,
   "ChooseFieldsToWriteOff(self) -> None\nC++: virtual void ChooseFieldsToWriteOff()\n\n"},
  {"AddSelector", PyvtkIOSSWriter_AddSelector, METH_VARARGS,
   "AddSelector(self, entity:vtkIOSSReader.EntityType, selector:str)\n    -> bool\nC++: bool AddSelector(EntityType entity, const char *selector)\n\nAPI to set entity selectors. Multiple selectors can be added\nusing `AddSelector`. The order in which selectors are specified\nis not preserved and has no impact on the result.\n\n`AddSelector` returns true if the selector was added, false if\nthe selector was already specified and hence not added.\n\n@sa vtkDataAssembly::SelectNodes\n"},
  {"ClearSelectors", PyvtkIOSSWriter_ClearSelectors, METH_VARARGS,
   "ClearSelectors(self, entity:vtkIOSSReader.EntityType) -> None\nC++: void ClearSelectors(EntityType entity)\n\n"},
  {"SetSelector", PyvtkIOSSWriter_SetSelector, METH_VARARGS,
   "SetSelector(self, entity:vtkIOSSReader.EntityType, selector:str)\n    -> None\nC++: void SetSelector(EntityType entity, const char *selector)\n\nConvenience method to set a single entity selector. This clears\nany other existing selectors.\n"},
  {"GetNumberOfSelectors", PyvtkIOSSWriter_GetNumberOfSelectors, METH_VARARGS,
   "GetNumberOfSelectors(self, entity:vtkIOSSReader.EntityType) -> int\nC++: int GetNumberOfSelectors(EntityType entity)\n\nAPI to access entity selectors.\n"},
  {"GetSelector", PyvtkIOSSWriter_GetSelector, METH_VARARGS,
   "GetSelector(self, entity:vtkIOSSReader.EntityType, index:int)\n    -> str\nC++: const char *GetSelector(EntityType entity, int index)\n\n"},
  {"GetFieldSelection", PyvtkIOSSWriter_GetFieldSelection, METH_VARARGS,
   "GetFieldSelection(self, type:vtkIOSSReader.EntityType)\n    -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFieldSelection(EntityType type)\n\nGet the selection object for the given entity type. This can be\nused to select which fields to write.\n"},
  {"GetNodeBlockFieldSelection", PyvtkIOSSWriter_GetNodeBlockFieldSelection, METH_VARARGS,
   "GetNodeBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetNodeBlockFieldSelection()\n\nReturns the field selection object for the element block arrays.\n"},
  {"AddEdgeBlockSelector", PyvtkIOSSWriter_AddEdgeBlockSelector, METH_VARARGS,
   "AddEdgeBlockSelector(self, selector:str) -> bool\nC++: bool AddEdgeBlockSelector(const char *selector)\n\nAdd/Clear/Set/Get edge block selectors\n"},
  {"ClearEdgeBlockSelectors", PyvtkIOSSWriter_ClearEdgeBlockSelectors, METH_VARARGS,
   "ClearEdgeBlockSelectors(self) -> None\nC++: void ClearEdgeBlockSelectors()\n\n"},
  {"SetEdgeBlockSelector", PyvtkIOSSWriter_SetEdgeBlockSelector, METH_VARARGS,
   "SetEdgeBlockSelector(self, selector:str) -> None\nC++: void SetEdgeBlockSelector(const char *selector)\n\n"},
  {"GetNumberOfEdgeBlockSelectors", PyvtkIOSSWriter_GetNumberOfEdgeBlockSelectors, METH_VARARGS,
   "GetNumberOfEdgeBlockSelectors(self) -> int\nC++: int GetNumberOfEdgeBlockSelectors()\n\n"},
  {"GetEdgeBlockSelector", PyvtkIOSSWriter_GetEdgeBlockSelector, METH_VARARGS,
   "GetEdgeBlockSelector(self, index:int) -> str\nC++: const char *GetEdgeBlockSelector(int index)\n\n"},
  {"GetEdgeBlockFieldSelection", PyvtkIOSSWriter_GetEdgeBlockFieldSelection, METH_VARARGS,
   "GetEdgeBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEdgeBlockFieldSelection()\n\nReturns the field selection object for the edge block arrays.\n"},
  {"AddFaceBlockSelector", PyvtkIOSSWriter_AddFaceBlockSelector, METH_VARARGS,
   "AddFaceBlockSelector(self, selector:str) -> bool\nC++: bool AddFaceBlockSelector(const char *selector)\n\nAdd/Clear/Set/Get face block selectors\n"},
  {"ClearFaceBlockSelectors", PyvtkIOSSWriter_ClearFaceBlockSelectors, METH_VARARGS,
   "ClearFaceBlockSelectors(self) -> None\nC++: void ClearFaceBlockSelectors()\n\n"},
  {"SetFaceBlockSelector", PyvtkIOSSWriter_SetFaceBlockSelector, METH_VARARGS,
   "SetFaceBlockSelector(self, selector:str) -> None\nC++: void SetFaceBlockSelector(const char *selector)\n\n"},
  {"GetNumberOfFaceBlockSelectors", PyvtkIOSSWriter_GetNumberOfFaceBlockSelectors, METH_VARARGS,
   "GetNumberOfFaceBlockSelectors(self) -> int\nC++: int GetNumberOfFaceBlockSelectors()\n\n"},
  {"GetFaceBlockSelector", PyvtkIOSSWriter_GetFaceBlockSelector, METH_VARARGS,
   "GetFaceBlockSelector(self, index:int) -> str\nC++: const char *GetFaceBlockSelector(int index)\n\n"},
  {"GetFaceBlockFieldSelection", PyvtkIOSSWriter_GetFaceBlockFieldSelection, METH_VARARGS,
   "GetFaceBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFaceBlockFieldSelection()\n\nReturns the field selection object for the face block arrays.\n"},
  {"AddElementBlockSelector", PyvtkIOSSWriter_AddElementBlockSelector, METH_VARARGS,
   "AddElementBlockSelector(self, selector:str) -> bool\nC++: bool AddElementBlockSelector(const char *selector)\n\nAdd/Clear/Set/Get element block selectors\n"},
  {"ClearElementBlockSelectors", PyvtkIOSSWriter_ClearElementBlockSelectors, METH_VARARGS,
   "ClearElementBlockSelectors(self) -> None\nC++: void ClearElementBlockSelectors()\n\n"},
  {"SetElementBlockSelector", PyvtkIOSSWriter_SetElementBlockSelector, METH_VARARGS,
   "SetElementBlockSelector(self, selector:str) -> None\nC++: void SetElementBlockSelector(const char *selector)\n\n"},
  {"GetNumberOfElementBlockSelectors", PyvtkIOSSWriter_GetNumberOfElementBlockSelectors, METH_VARARGS,
   "GetNumberOfElementBlockSelectors(self) -> int\nC++: int GetNumberOfElementBlockSelectors()\n\n"},
  {"GetElementBlockSelector", PyvtkIOSSWriter_GetElementBlockSelector, METH_VARARGS,
   "GetElementBlockSelector(self, index:int) -> str\nC++: const char *GetElementBlockSelector(int index)\n\n"},
  {"GetElementBlockFieldSelection", PyvtkIOSSWriter_GetElementBlockFieldSelection, METH_VARARGS,
   "GetElementBlockFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetElementBlockFieldSelection()\n\nReturns the field selection object for the element block arrays.\n"},
  {"AddNodeSetSelector", PyvtkIOSSWriter_AddNodeSetSelector, METH_VARARGS,
   "AddNodeSetSelector(self, selector:str) -> bool\nC++: bool AddNodeSetSelector(const char *selector)\n\nAdd/Clear/Set/Get node set selectors\n"},
  {"ClearNodeSetSelectors", PyvtkIOSSWriter_ClearNodeSetSelectors, METH_VARARGS,
   "ClearNodeSetSelectors(self) -> None\nC++: void ClearNodeSetSelectors()\n\n"},
  {"SetNodeSetSelector", PyvtkIOSSWriter_SetNodeSetSelector, METH_VARARGS,
   "SetNodeSetSelector(self, selector:str) -> None\nC++: void SetNodeSetSelector(const char *selector)\n\n"},
  {"GetNumberOfNodeSetSelectors", PyvtkIOSSWriter_GetNumberOfNodeSetSelectors, METH_VARARGS,
   "GetNumberOfNodeSetSelectors(self) -> int\nC++: int GetNumberOfNodeSetSelectors()\n\n"},
  {"GetNodeSetSelector", PyvtkIOSSWriter_GetNodeSetSelector, METH_VARARGS,
   "GetNodeSetSelector(self, index:int) -> str\nC++: const char *GetNodeSetSelector(int index)\n\n"},
  {"GetNodeSetFieldSelection", PyvtkIOSSWriter_GetNodeSetFieldSelection, METH_VARARGS,
   "GetNodeSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetNodeSetFieldSelection()\n\nReturns the field selection object for the node set arrays.\n"},
  {"AddEdgeSetSelector", PyvtkIOSSWriter_AddEdgeSetSelector, METH_VARARGS,
   "AddEdgeSetSelector(self, selector:str) -> bool\nC++: bool AddEdgeSetSelector(const char *selector)\n\nAdd/Clear/Set/Get edge set selectors\n"},
  {"ClearEdgeSetSelectors", PyvtkIOSSWriter_ClearEdgeSetSelectors, METH_VARARGS,
   "ClearEdgeSetSelectors(self) -> None\nC++: void ClearEdgeSetSelectors()\n\n"},
  {"SetEdgeSetSelector", PyvtkIOSSWriter_SetEdgeSetSelector, METH_VARARGS,
   "SetEdgeSetSelector(self, selector:str) -> None\nC++: void SetEdgeSetSelector(const char *selector)\n\n"},
  {"GetNumberOfEdgeSetSelectors", PyvtkIOSSWriter_GetNumberOfEdgeSetSelectors, METH_VARARGS,
   "GetNumberOfEdgeSetSelectors(self) -> int\nC++: int GetNumberOfEdgeSetSelectors()\n\n"},
  {"GetEdgeSetSelector", PyvtkIOSSWriter_GetEdgeSetSelector, METH_VARARGS,
   "GetEdgeSetSelector(self, index:int) -> str\nC++: const char *GetEdgeSetSelector(int index)\n\n"},
  {"GetEdgeSetFieldSelection", PyvtkIOSSWriter_GetEdgeSetFieldSelection, METH_VARARGS,
   "GetEdgeSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetEdgeSetFieldSelection()\n\nReturns the field selection object for the edge set arrays.\n"},
  {"AddFaceSetSelector", PyvtkIOSSWriter_AddFaceSetSelector, METH_VARARGS,
   "AddFaceSetSelector(self, selector:str) -> bool\nC++: bool AddFaceSetSelector(const char *selector)\n\nAdd/Clear/Set/Get edge set selectors\n"},
  {"ClearFaceSetSelectors", PyvtkIOSSWriter_ClearFaceSetSelectors, METH_VARARGS,
   "ClearFaceSetSelectors(self) -> None\nC++: void ClearFaceSetSelectors()\n\n"},
  {"SetFaceSetSelector", PyvtkIOSSWriter_SetFaceSetSelector, METH_VARARGS,
   "SetFaceSetSelector(self, selector:str) -> None\nC++: void SetFaceSetSelector(const char *selector)\n\n"},
  {"GetNumberOfFaceSetSelectors", PyvtkIOSSWriter_GetNumberOfFaceSetSelectors, METH_VARARGS,
   "GetNumberOfFaceSetSelectors(self) -> int\nC++: int GetNumberOfFaceSetSelectors()\n\n"},
  {"GetFaceSetSelector", PyvtkIOSSWriter_GetFaceSetSelector, METH_VARARGS,
   "GetFaceSetSelector(self, index:int) -> str\nC++: const char *GetFaceSetSelector(int index)\n\n"},
  {"GetFaceSetFieldSelection", PyvtkIOSSWriter_GetFaceSetFieldSelection, METH_VARARGS,
   "GetFaceSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetFaceSetFieldSelection()\n\nReturns the field selection object for the edge set arrays.\n"},
  {"AddElementSetSelector", PyvtkIOSSWriter_AddElementSetSelector, METH_VARARGS,
   "AddElementSetSelector(self, selector:str) -> bool\nC++: bool AddElementSetSelector(const char *selector)\n\nAdd/Clear/Set/Get element set selectors\n"},
  {"ClearElementSetSelectors", PyvtkIOSSWriter_ClearElementSetSelectors, METH_VARARGS,
   "ClearElementSetSelectors(self) -> None\nC++: void ClearElementSetSelectors()\n\n"},
  {"SetElementSetSelector", PyvtkIOSSWriter_SetElementSetSelector, METH_VARARGS,
   "SetElementSetSelector(self, selector:str) -> None\nC++: void SetElementSetSelector(const char *selector)\n\n"},
  {"GetNumberOfElementSetSelectors", PyvtkIOSSWriter_GetNumberOfElementSetSelectors, METH_VARARGS,
   "GetNumberOfElementSetSelectors(self) -> int\nC++: int GetNumberOfElementSetSelectors()\n\n"},
  {"GetElementSetSelector", PyvtkIOSSWriter_GetElementSetSelector, METH_VARARGS,
   "GetElementSetSelector(self, index:int) -> str\nC++: const char *GetElementSetSelector(int index)\n\n"},
  {"GetElementSetFieldSelection", PyvtkIOSSWriter_GetElementSetFieldSelection, METH_VARARGS,
   "GetElementSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetElementSetFieldSelection()\n\nReturns the field selection object for the element set arrays.\n"},
  {"AddSideSetSelector", PyvtkIOSSWriter_AddSideSetSelector, METH_VARARGS,
   "AddSideSetSelector(self, selector:str) -> bool\nC++: bool AddSideSetSelector(const char *selector)\n\nAdd/Clear/Set/Get side set selectors\n"},
  {"ClearSideSetSelectors", PyvtkIOSSWriter_ClearSideSetSelectors, METH_VARARGS,
   "ClearSideSetSelectors(self) -> None\nC++: void ClearSideSetSelectors()\n\n"},
  {"SetSideSetSelector", PyvtkIOSSWriter_SetSideSetSelector, METH_VARARGS,
   "SetSideSetSelector(self, selector:str) -> None\nC++: void SetSideSetSelector(const char *selector)\n\n"},
  {"GetNumberOfSideSetSelectors", PyvtkIOSSWriter_GetNumberOfSideSetSelectors, METH_VARARGS,
   "GetNumberOfSideSetSelectors(self) -> int\nC++: int GetNumberOfSideSetSelectors()\n\n"},
  {"GetSideSetSelector", PyvtkIOSSWriter_GetSideSetSelector, METH_VARARGS,
   "GetSideSetSelector(self, index:int) -> str\nC++: const char *GetSideSetSelector(int index)\n\n"},
  {"GetSideSetFieldSelection", PyvtkIOSSWriter_GetSideSetFieldSelection, METH_VARARGS,
   "GetSideSetFieldSelection(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *GetSideSetFieldSelection()\n\nReturns the field selection object for the side set arrays.\n"},
  {"SetRemoveGhosts", PyvtkIOSSWriter_SetRemoveGhosts, METH_VARARGS,
   "SetRemoveGhosts(self, _arg:bool) -> None\nC++: virtual void SetRemoveGhosts(bool _arg)\n\nSet/Get whether to write remove ghost cells from the input.\n\nThe default is 1.\n"},
  {"GetRemoveGhosts", PyvtkIOSSWriter_GetRemoveGhosts, METH_VARARGS,
   "GetRemoveGhosts(self) -> bool\nC++: virtual bool GetRemoveGhosts()\n\n"},
  {"SetOffsetGlobalIds", PyvtkIOSSWriter_SetOffsetGlobalIds, METH_VARARGS,
   "SetOffsetGlobalIds(self, _arg:bool) -> None\nC++: virtual void SetOffsetGlobalIds(bool _arg)\n\nExodus wants global ids to start with 1, while VTK generally\nproduces global ids starting with 0. Set this to true (default\nfalse), if the global ids are generated by VTK and hence start\nwith 0. When writing to the output file, they will be offset by 1\nto ensure the ids are valid exodus ids.\n"},
  {"GetOffsetGlobalIds", PyvtkIOSSWriter_GetOffsetGlobalIds, METH_VARARGS,
   "GetOffsetGlobalIds(self) -> bool\nC++: virtual bool GetOffsetGlobalIds()\n\n"},
  {"OffsetGlobalIdsOn", PyvtkIOSSWriter_OffsetGlobalIdsOn, METH_VARARGS,
   "OffsetGlobalIdsOn(self) -> None\nC++: virtual void OffsetGlobalIdsOn()\n\n"},
  {"OffsetGlobalIdsOff", PyvtkIOSSWriter_OffsetGlobalIdsOff, METH_VARARGS,
   "OffsetGlobalIdsOff(self) -> None\nC++: virtual void OffsetGlobalIdsOff()\n\n"},
  {"SetPreserveInputEntityGroups", PyvtkIOSSWriter_SetPreserveInputEntityGroups, METH_VARARGS,
   "SetPreserveInputEntityGroups(self, __a:bool) -> None\nC++: void SetPreserveInputEntityGroups(bool)\n\nIf input is untransformed IOSS dataset, then the writer can\npreserve entity group classifications, such as element blocks,\nside sets etc. The same is not true if the input has been\ntransformed e.g. through a clip filter. Thus flag is used to\nindicate whether the input has valid element classifications.\n"},
  {"GetPreserveInputEntityGroups", PyvtkIOSSWriter_GetPreserveInputEntityGroups, METH_VARARGS,
   "GetPreserveInputEntityGroups(self) -> bool\nC++: bool GetPreserveInputEntityGroups()\n\n"},
  {"PreserveInputEntityGroupsOn", PyvtkIOSSWriter_PreserveInputEntityGroupsOn, METH_VARARGS,
   "PreserveInputEntityGroupsOn(self) -> None\nC++: void PreserveInputEntityGroupsOn()\n\n"},
  {"PreserveInputEntityGroupsOff", PyvtkIOSSWriter_PreserveInputEntityGroupsOff, METH_VARARGS,
   "PreserveInputEntityGroupsOff(self) -> None\nC++: void PreserveInputEntityGroupsOff()\n\n"},
  {"SetPreserveOriginalIds", PyvtkIOSSWriter_SetPreserveOriginalIds, METH_VARARGS,
   "SetPreserveOriginalIds(self, _arg:bool) -> None\nC++: virtual void SetPreserveOriginalIds(bool _arg)\n\nIf input is transformed, e.g. through clipping, new element\nblocks may be created. This flag can be used to indicate whether\nto preserve the original ids from blocks.\n\nThe default is false.\n"},
  {"GetPreserveOriginalIds", PyvtkIOSSWriter_GetPreserveOriginalIds, METH_VARARGS,
   "GetPreserveOriginalIds(self) -> bool\nC++: virtual bool GetPreserveOriginalIds()\n\n"},
  {"PreserveOriginalIdsOn", PyvtkIOSSWriter_PreserveOriginalIdsOn, METH_VARARGS,
   "PreserveOriginalIdsOn(self) -> None\nC++: virtual void PreserveOriginalIdsOn()\n\n"},
  {"PreserveOriginalIdsOff", PyvtkIOSSWriter_PreserveOriginalIdsOff, METH_VARARGS,
   "PreserveOriginalIdsOff(self) -> None\nC++: virtual void PreserveOriginalIdsOff()\n\n"},
  {"SetWriteQAAndInformationRecords", PyvtkIOSSWriter_SetWriteQAAndInformationRecords, METH_VARARGS,
   "SetWriteQAAndInformationRecords(self, _arg:bool) -> None\nC++: virtual void SetWriteQAAndInformationRecords(bool _arg)\n\nWhen set to true (default), the writer will write quality\nassurance and information records.\n\nThese records are not copied from the input, but they are\ngenerated by the writer.\n"},
  {"GetWriteQAAndInformationRecords", PyvtkIOSSWriter_GetWriteQAAndInformationRecords, METH_VARARGS,
   "GetWriteQAAndInformationRecords(self) -> bool\nC++: virtual bool GetWriteQAAndInformationRecords()\n\n"},
  {"WriteQAAndInformationRecordsOn", PyvtkIOSSWriter_WriteQAAndInformationRecordsOn, METH_VARARGS,
   "WriteQAAndInformationRecordsOn(self) -> None\nC++: virtual void WriteQAAndInformationRecordsOn()\n\n"},
  {"WriteQAAndInformationRecordsOff", PyvtkIOSSWriter_WriteQAAndInformationRecordsOff, METH_VARARGS,
   "WriteQAAndInformationRecordsOff(self) -> None\nC++: virtual void WriteQAAndInformationRecordsOff()\n\n"},
  {"SetDisplacementMagnitude", PyvtkIOSSWriter_SetDisplacementMagnitude, METH_VARARGS,
   "SetDisplacementMagnitude(self, _arg:float) -> None\nC++: virtual void SetDisplacementMagnitude(double _arg)\n\nIf input dataset has displacements pre-applied, setting the\ndisplacement magnitude to non-zero ensures that the point\ncoordinates in the dataset are correctly transformed using the\ndisplacement field array, if present.\n\nDefaults to 1.0.\n"},
  {"GetDisplacementMagnitudeMinValue", PyvtkIOSSWriter_GetDisplacementMagnitudeMinValue, METH_VARARGS,
   "GetDisplacementMagnitudeMinValue(self) -> float\nC++: virtual double GetDisplacementMagnitudeMinValue()\n\n"},
  {"GetDisplacementMagnitudeMaxValue", PyvtkIOSSWriter_GetDisplacementMagnitudeMaxValue, METH_VARARGS,
   "GetDisplacementMagnitudeMaxValue(self) -> float\nC++: virtual double GetDisplacementMagnitudeMaxValue()\n\n"},
  {"GetDisplacementMagnitude", PyvtkIOSSWriter_GetDisplacementMagnitude, METH_VARARGS,
   "GetDisplacementMagnitude(self) -> float\nC++: virtual double GetDisplacementMagnitude()\n\n"},
  {"SetMaximumTimeStepsPerFile", PyvtkIOSSWriter_SetMaximumTimeStepsPerFile, METH_VARARGS,
   "SetMaximumTimeStepsPerFile(self, val:int) -> None\nC++: void SetMaximumTimeStepsPerFile(int val)\n\nA debugging variable, set this to non-zero positive number to\nsave at most the specified number of timesteps in a single file\nbefore starting a new one. The writer may start new files (aka\nrestarts) automatically if it determines that the mesh has\nchanged.\n\nDefaults to 0 i.e. unlimited timesteps per file.\n"},
  {"GetMaximumTimeStepsPerFile", PyvtkIOSSWriter_GetMaximumTimeStepsPerFile, METH_VARARGS,
   "GetMaximumTimeStepsPerFile(self) -> int\nC++: int GetMaximumTimeStepsPerFile()\n\n"},
  {"SetTimeStepRange", PyvtkIOSSWriter_SetTimeStepRange, METH_VARARGS,
   "SetTimeStepRange(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetTimeStepRange(int _arg1, int _arg2)\nSetTimeStepRange(self, _arg:(int, int)) -> None\nC++: void SetTimeStepRange(const int _arg[2])\n\n`TimeStepRange` and `TimeStepStride` can be used to limit which\ntimesteps will be written.\n\nIf the range is invalid, i.e. `TimeStepRange[0] >=\nTimeStepRange[1]`, it's assumed that no TimeStepRange overrides\nhave been specified and both TimeStepRange and TimeStepStride\nwill be ignored. When valid, only the chosen subset of files will\nbe processed.\n"},
  {"GetTimeStepRange", PyvtkIOSSWriter_GetTimeStepRange, METH_VARARGS,
   "GetTimeStepRange(self) -> (int, int)\nC++: virtual int *GetTimeStepRange()\n\n"},
  {"SetTimeStepStride", PyvtkIOSSWriter_SetTimeStepStride, METH_VARARGS,
   "SetTimeStepStride(self, _arg:int) -> None\nC++: virtual void SetTimeStepStride(int _arg)\n\n"},
  {"GetTimeStepStrideMinValue", PyvtkIOSSWriter_GetTimeStepStrideMinValue, METH_VARARGS,
   "GetTimeStepStrideMinValue(self) -> int\nC++: virtual int GetTimeStepStrideMinValue()\n\n"},
  {"GetTimeStepStrideMaxValue", PyvtkIOSSWriter_GetTimeStepStrideMaxValue, METH_VARARGS,
   "GetTimeStepStrideMaxValue(self) -> int\nC++: virtual int GetTimeStepStrideMaxValue()\n\n"},
  {"GetTimeStepStride", PyvtkIOSSWriter_GetTimeStepStride, METH_VARARGS,
   "GetTimeStepStride(self) -> int\nC++: virtual int GetTimeStepStride()\n\n"},
  {"SetController", PyvtkIOSSWriter_SetController, METH_VARARGS,
   "SetController(self, controller:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *controller)\n\nGet/Set the controller to use when working in parallel.\nInitialized to `vtkMultiProcessController::GetGlobalController`\nin the constructor.\n\nThe controller is used to determine the upstream piece request in\nRequestUpdateExtent.\n"},
  {"GetController", PyvtkIOSSWriter_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIOSSWriter_Doc =
  "vtkIOSSWriter - Writer for IOSS (Sierra IO System)\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkIOSSWriter is a writer that uses the IOSS (Sierra IO System)\n"
  "library to write files. Currently this writer supports the Exodus\n"
  "file format. IOSS imposes certain restrictions on the aforementioned\n"
  "file format and hence it may not be possible to write every dataset\n"
  "as an Exodus file using this writer. This is rare for the Exodus.\n\n"
  "This writer generates files using the same naming conventions that\n"
  "vtkIOSSReader understands.\n\n"
  "@section SelectingBlocksSetsToWrite Selecting blocks and sets to\n"
  "write\n\n"
  "An IOSS file comprises of blocks and sets of various types. These are\n"
  "described by the enum `vtkIOSSReader::EntityType`. If the input of\n"
  "the writer was initially read by the vtkIOSSReader, then the entity\n"
  "types can be automatically deduced. If it was not initially read by\n"
  "vtkIOSSReader (or even if it was), the assembly name and selectors\n"
  "can be utilized to define which blocks are e.g. element blocks, or\n"
  "side sets. `vtkIOSSWriter::SetAssemblyName(...)` can be used to set\n"
  "the assembly, and `vtkIOSSWriter::AddSelector(...)` (or one of its\n"
  "convenience variants) can be used to add selectors. If no selectors\n"
  "have been defined all partitions will be treated as element blocks.\n\n"
  "Typical usage is as follows:\n\n"
  "{.cpp}\n"
  "vtkNewwriter;\n"
  "writer->SetInputData(...)\n"
  "writer->SetFileName(...);\n"
  "writer->SetAssemblyName(\"Assembly\");\n"
  "writer->AddElementBlockSelector(\"/IOSS/element_blocks\");\n"
  "writer->Write();\n\n"
  "@section SelectingArraysToWrite Selecting arrays to write\n\n"
  "Similar arrays (or fields as IOSS refers to them) to read from each\n"
  "of the blocks or sets can be specified using the\n"
  "`vtkDataArraySelection` instance returned using\n"
  "`vtkIOSSWriter::GetFieldSelection` (or one of its convenience\n"
  "variants).\n\n"
  "By default all arrays are enabled. To write specific arrays, f\n"
  "ChooseFieldsToWrite has to be true, which can change using\n"
  "`vtkIOSSWriter::SetChooseFieldsToWrite(true)`.\n\n"
  "Typical usage is as follows:\n\n"
  "{.cpp}\n"
  "vtkNewwriter;\n"
  "writer->SetInputData(...)\n"
  "writer->SetFileName(...);\n"
  "writer->SetAssemblyName(\"Assembly\");\n"
  "writer->AddElementBlockSelector(\"/IOSS/element_blocks\");\n"
  "writer->SetChooseFieldsToWrite(true);\n"
  "writer->GetElementBlockFieldSelection()->EnableArray(\"EQPS\");\n"
  "writer->Write();\n\n"
  "@section SelectionTimeSteps Selection TimeSteps\n\n"
  "`vtkIOSSWriter::SetTimeStepRange(...)` and\n"
  "`vtkIOSSWriter::SetTimeStepStride(...)` can be used to write a subset\n"
  "of time steps using a range and a stride.\n\n"
  "@section UpcomingFeatures Upcoming features\n\n"
  "The following features are planned to be implemented in the future:\n"
  "\\li Support CGNS file format.\n"
  "\\li Support writing global data\n"
  "\\li Support writing pedigree IDs\n\n"
  "@section Apendix Apendix\n"
  "* [Sierra IO System](https://sandialabs.github.io/seacas-docs)\n"
  "* [Exodus file\n"
  "  format](https://sandialabs.github.io/seacas-docs/ExodusII-Addendum.p\n"
  "  df)\n\n"
  "@sa\n"
  "vtkIOSSReader, vtkExodusIIWriter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIOSSWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOIOSS.vtkIOSSWriter", // tp_name
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
  PyvtkIOSSWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIOSSWriter_StaticNew()
{
  return vtkIOSSWriter::New();
}

PyObject *PyvtkIOSSWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIOSSWriter_Type, PyvtkIOSSWriter_Methods,
    "vtkIOSSWriter",
 &PyvtkIOSSWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIOSSWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIOSSWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIOSSWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

