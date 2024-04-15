// python wrapper for vtkGLTFWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGLTFWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGLTFWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkGLTFWriter_ClassNew(); }


static PyObject *
PyvtkGLTFWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGLTFWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGLTFWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGLTFWriter *tempr = vtkGLTFWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGLTFWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGLTFWriter::NewInstance());

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
PyvtkGLTFWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGLTFWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGLTFWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

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
      op->vtkGLTFWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkGLTFWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetTextureBaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureBaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureBaseDirectory(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetTextureBaseDirectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetTextureBaseDirectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureBaseDirectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTextureBaseDirectory() :
      op->vtkGLTFWriter::GetTextureBaseDirectory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetPropertyTextureFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPropertyTextureFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPropertyTextureFile(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetPropertyTextureFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetPropertyTextureFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropertyTextureFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPropertyTextureFile() :
      op->vtkGLTFWriter::GetPropertyTextureFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetInlineData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInlineData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInlineData() :
      op->vtkGLTFWriter::GetInlineData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetInlineData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInlineData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInlineData(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetInlineData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_InlineDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InlineDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InlineDataOn();
    }
    else
    {
      op->vtkGLTFWriter::InlineDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_InlineDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InlineDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InlineDataOff();
    }
    else
    {
      op->vtkGLTFWriter::InlineDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetSaveNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveNormal() :
      op->vtkGLTFWriter::GetSaveNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetSaveNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveNormal(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetSaveNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SaveNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveNormalOn();
    }
    else
    {
      op->vtkGLTFWriter::SaveNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SaveNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveNormalOff();
    }
    else
    {
      op->vtkGLTFWriter::SaveNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetSaveBatchId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveBatchId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveBatchId() :
      op->vtkGLTFWriter::GetSaveBatchId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetSaveBatchId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveBatchId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveBatchId(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetSaveBatchId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SaveBatchIdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveBatchIdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveBatchIdOn();
    }
    else
    {
      op->vtkGLTFWriter::SaveBatchIdOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SaveBatchIdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveBatchIdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveBatchIdOff();
    }
    else
    {
      op->vtkGLTFWriter::SaveBatchIdOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetSaveTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveTextures() :
      op->vtkGLTFWriter::GetSaveTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetSaveTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveTextures(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetSaveTextures(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SaveTexturesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveTexturesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveTexturesOn();
    }
    else
    {
      op->vtkGLTFWriter::SaveTexturesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SaveTexturesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveTexturesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveTexturesOff();
    }
    else
    {
      op->vtkGLTFWriter::SaveTexturesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetCopyTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyTextures() :
      op->vtkGLTFWriter::GetCopyTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetCopyTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyTextures(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetCopyTextures(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_CopyTexturesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTexturesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTexturesOn();
    }
    else
    {
      op->vtkGLTFWriter::CopyTexturesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_CopyTexturesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTexturesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTexturesOff();
    }
    else
    {
      op->vtkGLTFWriter::CopyTexturesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetSaveActivePointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveActivePointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveActivePointColor() :
      op->vtkGLTFWriter::GetSaveActivePointColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetSaveActivePointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveActivePointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveActivePointColor(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetSaveActivePointColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SaveActivePointColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveActivePointColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveActivePointColorOn();
    }
    else
    {
      op->vtkGLTFWriter::SaveActivePointColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SaveActivePointColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveActivePointColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveActivePointColorOff();
    }
    else
    {
      op->vtkGLTFWriter::SaveActivePointColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetRelativeCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRelativeCoordinates() :
      op->vtkGLTFWriter::GetRelativeCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_SetRelativeCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeCoordinates(temp0);
    }
    else
    {
      op->vtkGLTFWriter::SetRelativeCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_RelativeCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RelativeCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RelativeCoordinatesOn();
    }
    else
    {
      op->vtkGLTFWriter::RelativeCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_RelativeCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RelativeCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RelativeCoordinatesOff();
    }
    else
    {
      op->vtkGLTFWriter::RelativeCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBinary() :
      op->vtkGLTFWriter::GetBinary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_WriteToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFWriter *op = static_cast<vtkGLTFWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->WriteToString() :
      op->vtkGLTFWriter::WriteToString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFWriter_GetFieldAsStringVector(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFieldAsStringVector");

  vtkDataObject *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    std::vector<std::string> tempr = vtkGLTFWriter::GetFieldAsStringVector(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyMethodDef PyvtkGLTFWriter_Methods[] = {
  {"IsTypeOf", PyvtkGLTFWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGLTFWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGLTFWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGLTFWriter\nC++: static vtkGLTFWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGLTFWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGLTFWriter\nC++: vtkGLTFWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGLTFWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGLTFWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkGLTFWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the name of the GLTF file to write.\n"},
  {"GetFileName", PyvtkGLTFWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetTextureBaseDirectory", PyvtkGLTFWriter_SetTextureBaseDirectory, METH_VARARGS,
   "SetTextureBaseDirectory(self, _arg:str) -> None\nC++: virtual void SetTextureBaseDirectory(const char *_arg)\n\nSpecify the base directory for texture files.\n"},
  {"GetTextureBaseDirectory", PyvtkGLTFWriter_GetTextureBaseDirectory, METH_VARARGS,
   "GetTextureBaseDirectory(self) -> str\nC++: virtual char *GetTextureBaseDirectory()\n\n"},
  {"SetPropertyTextureFile", PyvtkGLTFWriter_SetPropertyTextureFile, METH_VARARGS,
   "SetPropertyTextureFile(self, _arg:str) -> None\nC++: virtual void SetPropertyTextureFile(const char *_arg)\n\nSpecify the property texture file. This is a json file described\nby\nhttps://github.com/CesiumGS/3d-tiles/tree/main/specification/Metad\nata and\nhttps://github.com/CesiumGS/glTF/tree/3d-tiles-next/extensions/2.0\n/Vendor/EXT_structural_metadata\n"},
  {"GetPropertyTextureFile", PyvtkGLTFWriter_GetPropertyTextureFile, METH_VARARGS,
   "GetPropertyTextureFile(self) -> str\nC++: virtual char *GetPropertyTextureFile()\n\n"},
  {"GetInlineData", PyvtkGLTFWriter_GetInlineData, METH_VARARGS,
   "GetInlineData(self) -> bool\nC++: virtual bool GetInlineData()\n\nShould the binary data be included in the json file as a base64\nstring.\n"},
  {"SetInlineData", PyvtkGLTFWriter_SetInlineData, METH_VARARGS,
   "SetInlineData(self, _arg:bool) -> None\nC++: virtual void SetInlineData(bool _arg)\n\n"},
  {"InlineDataOn", PyvtkGLTFWriter_InlineDataOn, METH_VARARGS,
   "InlineDataOn(self) -> None\nC++: virtual void InlineDataOn()\n\n"},
  {"InlineDataOff", PyvtkGLTFWriter_InlineDataOff, METH_VARARGS,
   "InlineDataOff(self) -> None\nC++: virtual void InlineDataOff()\n\n"},
  {"GetSaveNormal", PyvtkGLTFWriter_GetSaveNormal, METH_VARARGS,
   "GetSaveNormal(self) -> bool\nC++: virtual bool GetSaveNormal()\n\nIt looks for the normals point attribute and saves it in the GLTF\nfile if found with the name NORMAL Cesium needs this to render\nbuildings correctly if there is no texture.\n"},
  {"SetSaveNormal", PyvtkGLTFWriter_SetSaveNormal, METH_VARARGS,
   "SetSaveNormal(self, _arg:bool) -> None\nC++: virtual void SetSaveNormal(bool _arg)\n\n"},
  {"SaveNormalOn", PyvtkGLTFWriter_SaveNormalOn, METH_VARARGS,
   "SaveNormalOn(self) -> None\nC++: virtual void SaveNormalOn()\n\n"},
  {"SaveNormalOff", PyvtkGLTFWriter_SaveNormalOff, METH_VARARGS,
   "SaveNormalOff(self) -> None\nC++: virtual void SaveNormalOff()\n\n"},
  {"GetSaveBatchId", PyvtkGLTFWriter_GetSaveBatchId, METH_VARARGS,
   "GetSaveBatchId(self) -> bool\nC++: virtual bool GetSaveBatchId()\n\nIt looks for point arrays called _BATCHID in the data and it\nsaves it in the GLTF file if found. _BATCHID is an index used in\n3D Tiles b3dm format. This format stores a binary gltf with a\nmesh that has several objects (buildings). Objects are indexed\nfrom 0 to number of objects - 1, all points of an objects have\nthe same index. These index values are stored in _BATCHID\n"},
  {"SetSaveBatchId", PyvtkGLTFWriter_SetSaveBatchId, METH_VARARGS,
   "SetSaveBatchId(self, _arg:bool) -> None\nC++: virtual void SetSaveBatchId(bool _arg)\n\n"},
  {"SaveBatchIdOn", PyvtkGLTFWriter_SaveBatchIdOn, METH_VARARGS,
   "SaveBatchIdOn(self) -> None\nC++: virtual void SaveBatchIdOn()\n\n"},
  {"SaveBatchIdOff", PyvtkGLTFWriter_SaveBatchIdOff, METH_VARARGS,
   "SaveBatchIdOff(self) -> None\nC++: virtual void SaveBatchIdOff()\n\n"},
  {"GetSaveTextures", PyvtkGLTFWriter_GetSaveTextures, METH_VARARGS,
   "GetSaveTextures(self) -> bool\nC++: virtual bool GetSaveTextures()\n\nIf true (default) we save textures. We only include a reference\nto the texture file unless CopyTextures is true or you want to\ninclude the binary data in the json file using InlineData in\nwhich case we have to load the texture in memory and save it\nencoded in the json file.\n@sa TextureBaseDirectory\n"},
  {"SetSaveTextures", PyvtkGLTFWriter_SetSaveTextures, METH_VARARGS,
   "SetSaveTextures(self, _arg:bool) -> None\nC++: virtual void SetSaveTextures(bool _arg)\n\n"},
  {"SaveTexturesOn", PyvtkGLTFWriter_SaveTexturesOn, METH_VARARGS,
   "SaveTexturesOn(self) -> None\nC++: virtual void SaveTexturesOn()\n\n"},
  {"SaveTexturesOff", PyvtkGLTFWriter_SaveTexturesOff, METH_VARARGS,
   "SaveTexturesOff(self) -> None\nC++: virtual void SaveTexturesOff()\n\n"},
  {"GetCopyTextures", PyvtkGLTFWriter_GetCopyTextures, METH_VARARGS,
   "GetCopyTextures(self) -> bool\nC++: virtual bool GetCopyTextures()\n\nIf true we copy the textures the the same directory where\nFileName is saved. Default is false.\n@sa TextureBaseDirectory\n"},
  {"SetCopyTextures", PyvtkGLTFWriter_SetCopyTextures, METH_VARARGS,
   "SetCopyTextures(self, _arg:bool) -> None\nC++: virtual void SetCopyTextures(bool _arg)\n\n"},
  {"CopyTexturesOn", PyvtkGLTFWriter_CopyTexturesOn, METH_VARARGS,
   "CopyTexturesOn(self) -> None\nC++: virtual void CopyTexturesOn()\n\n"},
  {"CopyTexturesOff", PyvtkGLTFWriter_CopyTexturesOff, METH_VARARGS,
   "CopyTexturesOff(self) -> None\nC++: virtual void CopyTexturesOff()\n\n"},
  {"GetSaveActivePointColor", PyvtkGLTFWriter_GetSaveActivePointColor, METH_VARARGS,
   "GetSaveActivePointColor(self) -> bool\nC++: virtual bool GetSaveActivePointColor()\n\nIf true, the writer looks at the active scalar and if it finds a\n3 or 4 component, float, unsigned char or unsigned short it\nstores a RGB or RGBA attribute called COLOR_0 in the GLTF file.\nThe default is false.  Note a float component has to be bewtween\n[0, 1] while the unsigned chars and unsigned short are OpenGL\nnormalized integers (are either between [0, 255] for unsigned\nchar, they are between [0, 65536] for unsigned short - they are\nused to quantize a float between [0, 1]).\n"},
  {"SetSaveActivePointColor", PyvtkGLTFWriter_SetSaveActivePointColor, METH_VARARGS,
   "SetSaveActivePointColor(self, _arg:bool) -> None\nC++: virtual void SetSaveActivePointColor(bool _arg)\n\n"},
  {"SaveActivePointColorOn", PyvtkGLTFWriter_SaveActivePointColorOn, METH_VARARGS,
   "SaveActivePointColorOn(self) -> None\nC++: virtual void SaveActivePointColorOn()\n\n"},
  {"SaveActivePointColorOff", PyvtkGLTFWriter_SaveActivePointColorOff, METH_VARARGS,
   "SaveActivePointColorOff(self) -> None\nC++: virtual void SaveActivePointColorOff()\n\n"},
  {"GetRelativeCoordinates", PyvtkGLTFWriter_GetRelativeCoordinates, METH_VARARGS,
   "GetRelativeCoordinates(self) -> bool\nC++: virtual bool GetRelativeCoordinates()\n\nSave mesh point coordinates relative to the bounding box origin\nand add the corresponding translation to the root node.  This is\nespecially important for 3D Tiles as points are stored as\ncartesian coordinates relative to the earth center so they are\nstored as doubles. As GLTF can only store floats not setting this\nvariable on results in a loss of precision of about a meter. Note\nthat the translation information is stored in json which can\nstore doubles.\n"},
  {"SetRelativeCoordinates", PyvtkGLTFWriter_SetRelativeCoordinates, METH_VARARGS,
   "SetRelativeCoordinates(self, _arg:bool) -> None\nC++: virtual void SetRelativeCoordinates(bool _arg)\n\n"},
  {"RelativeCoordinatesOn", PyvtkGLTFWriter_RelativeCoordinatesOn, METH_VARARGS,
   "RelativeCoordinatesOn(self) -> None\nC++: virtual void RelativeCoordinatesOn()\n\n"},
  {"RelativeCoordinatesOff", PyvtkGLTFWriter_RelativeCoordinatesOff, METH_VARARGS,
   "RelativeCoordinatesOff(self) -> None\nC++: virtual void RelativeCoordinatesOff()\n\n"},
  {"GetBinary", PyvtkGLTFWriter_GetBinary, METH_VARARGS,
   "GetBinary(self) -> bool\nC++: virtual bool GetBinary()\n\nIf true, save as GLB (Binary GLTF). This is set by using .glb\nextension for FileName and unset for any other extension (usually\n.gltf)\n"},
  {"WriteToString", PyvtkGLTFWriter_WriteToString, METH_VARARGS,
   "WriteToString(self) -> str\nC++: std::string WriteToString()\n\nWrite the result to a string instead of a file\n"},
  {"GetFieldAsStringVector", PyvtkGLTFWriter_GetFieldAsStringVector, METH_VARARGS,
   "GetFieldAsStringVector(obj:vtkDataObject, name:str) -> (str, ...)\nC++: static std::vector<std::string> GetFieldAsStringVector(\n    vtkDataObject *obj, const char *name)\n\nThis is used to read texture_uri fields that contain a list of\ntexture paths@see vtkCityGMLReader\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGLTFWriter_Doc =
  "vtkGLTFWriter - export a scene into GLTF 2.0 format.\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkGLTFWriter is a concrete subclass of vtkWriter that writes GLTF\n"
  "2.0 files. Its input is a multiblock dataset as it is produced by the\n"
  "CityGML reader. The dataset contains a list of buildings, a mesh or a\n"
  "point cloud.\n\n"
  "For buildings, each building is made of pieces (polydata), each piece\n"
  "could potentially have several textures. The mesh input is the same\n"
  "as one building. The point cloud input, is the same as mesh input but\n"
  "with Verts cells instead of Polys.\n\n"
  "* Materials, including textures, are described as fields in the\n"
  "* polydata. If InlineData is false, we only refer to textures files\n"
  "* referred in the data, otherwise we read the textures and save them\n"
  "* encoded in the file.\n"
  "*\n"
  "* @sa\n"
  "* vtkCityGMLReader\n"
  "* vtkPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLTFWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkGLTFWriter", // tp_name
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
  PyvtkGLTFWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGLTFWriter_StaticNew()
{
  return vtkGLTFWriter::New();
}

PyObject *PyvtkGLTFWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGLTFWriter_Type, PyvtkGLTFWriter_Methods,
    "vtkGLTFWriter",
 &PyvtkGLTFWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGLTFWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGLTFWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGLTFWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

