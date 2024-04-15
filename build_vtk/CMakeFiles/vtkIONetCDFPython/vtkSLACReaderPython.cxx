// python wrapper for vtkSLACReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSLACReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSLACReader(PyObject *dict); }
extern "C" { PyObject *PyvtkSLACReader_ClassNew(); }


static PyObject *
PyvtkSLACReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSLACReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSLACReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSLACReader *tempr = vtkSLACReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSLACReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSLACReader::NewInstance());

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
PyvtkSLACReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSLACReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSLACReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetMeshFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMeshFileName() :
      op->vtkSLACReader::GetMeshFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetMeshFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeshFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMeshFileName(temp0);
    }
    else
    {
      op->vtkSLACReader::SetMeshFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_AddModeFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddModeFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->AddModeFileName(temp0);
    }
    else
    {
      op->vtkSLACReader::AddModeFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_RemoveAllModeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllModeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllModeFileNames();
    }
    else
    {
      op->vtkSLACReader::RemoveAllModeFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfModeFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfModeFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfModeFileNames() :
      op->vtkSLACReader::GetNumberOfModeFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetModeFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetModeFileName(temp0) :
      op->vtkSLACReader::GetModeFileName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadInternalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadInternalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadInternalVolume() :
      op->vtkSLACReader::GetReadInternalVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadInternalVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadInternalVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadInternalVolume(temp0);
    }
    else
    {
      op->vtkSLACReader::SetReadInternalVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadInternalVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInternalVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadInternalVolumeOn();
    }
    else
    {
      op->vtkSLACReader::ReadInternalVolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadInternalVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadInternalVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadInternalVolumeOff();
    }
    else
    {
      op->vtkSLACReader::ReadInternalVolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadExternalSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadExternalSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadExternalSurface() :
      op->vtkSLACReader::GetReadExternalSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadExternalSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadExternalSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadExternalSurface(temp0);
    }
    else
    {
      op->vtkSLACReader::SetReadExternalSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadExternalSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadExternalSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadExternalSurfaceOn();
    }
    else
    {
      op->vtkSLACReader::ReadExternalSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadExternalSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadExternalSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadExternalSurfaceOff();
    }
    else
    {
      op->vtkSLACReader::ReadExternalSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetReadMidpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadMidpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReadMidpoints() :
      op->vtkSLACReader::GetReadMidpoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetReadMidpoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadMidpoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadMidpoints(temp0);
    }
    else
    {
      op->vtkSLACReader::SetReadMidpoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadMidpointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMidpointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadMidpointsOn();
    }
    else
    {
      op->vtkSLACReader::ReadMidpointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ReadMidpointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMidpointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadMidpointsOff();
    }
    else
    {
      op->vtkSLACReader::ReadMidpointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetNumberOfVariableArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVariableArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVariableArrays() :
      op->vtkSLACReader::GetNumberOfVariableArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetVariableArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVariableArrayName(temp0) :
      op->vtkSLACReader::GetVariableArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVariableArrayStatus(temp0) :
      op->vtkSLACReader::GetVariableArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetVariableArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariableArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariableArrayStatus(temp0, temp1);
    }
    else
    {
      op->vtkSLACReader::SetVariableArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ResetFrequencyScales(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFrequencyScales");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFrequencyScales();
    }
    else
    {
      op->vtkSLACReader::ResetFrequencyScales();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetFrequencyScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrequencyScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFrequencyScale(temp0, temp1);
    }
    else
    {
      op->vtkSLACReader::SetFrequencyScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_ResetPhaseShifts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetPhaseShifts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetPhaseShifts();
    }
    else
    {
      op->vtkSLACReader::ResetPhaseShifts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_SetPhaseShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhaseShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPhaseShift(temp0, temp1);
    }
    else
    {
      op->vtkSLACReader::SetPhaseShift(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetFrequencyScales(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrequencyScales");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetFrequencyScales() :
      op->vtkSLACReader::GetFrequencyScales());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_GetPhaseShifts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhaseShifts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACReader *op = static_cast<vtkSLACReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetPhaseShifts() :
      op->vtkSLACReader::GetPhaseShifts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_CanReadFile(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = vtkSLACReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_IS_INTERNAL_VOLUME(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IS_INTERNAL_VOLUME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSLACReader::IS_INTERNAL_VOLUME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_IS_EXTERNAL_SURFACE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IS_EXTERNAL_SURFACE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSLACReader::IS_EXTERNAL_SURFACE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_POINTS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "POINTS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSLACReader::POINTS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSLACReader_POINT_DATA(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_DATA");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSLACReader::POINT_DATA();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSLACReader_Methods[] = {
  {"IsTypeOf", PyvtkSLACReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSLACReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSLACReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSLACReader\nC++: static vtkSLACReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSLACReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSLACReader\nC++: vtkSLACReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSLACReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSLACReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMeshFileName", PyvtkSLACReader_GetMeshFileName, METH_VARARGS,
   "GetMeshFileName(self) -> str\nC++: virtual char *GetMeshFileName()\n\n"},
  {"SetMeshFileName", PyvtkSLACReader_SetMeshFileName, METH_VARARGS,
   "SetMeshFileName(self, _arg:str) -> None\nC++: virtual void SetMeshFileName(const char *_arg)\n\n"},
  {"AddModeFileName", PyvtkSLACReader_AddModeFileName, METH_VARARGS,
   "AddModeFileName(self, fname:str) -> None\nC++: virtual void AddModeFileName(const char *fname)\n\nThere may be one mode file (usually for actual modes) or multiple\nmode files (which usually actually represent time series).  These\nmethods set and clear the list of mode files (which can be a\nsingle mode file).\n"},
  {"RemoveAllModeFileNames", PyvtkSLACReader_RemoveAllModeFileNames, METH_VARARGS,
   "RemoveAllModeFileNames(self) -> None\nC++: virtual void RemoveAllModeFileNames()\n\n"},
  {"GetNumberOfModeFileNames", PyvtkSLACReader_GetNumberOfModeFileNames, METH_VARARGS,
   "GetNumberOfModeFileNames(self) -> int\nC++: virtual unsigned int GetNumberOfModeFileNames()\n\n"},
  {"GetModeFileName", PyvtkSLACReader_GetModeFileName, METH_VARARGS,
   "GetModeFileName(self, idx:int) -> str\nC++: virtual const char *GetModeFileName(unsigned int idx)\n\n"},
  {"GetReadInternalVolume", PyvtkSLACReader_GetReadInternalVolume, METH_VARARGS,
   "GetReadInternalVolume(self) -> int\nC++: virtual vtkTypeBool GetReadInternalVolume()\n\nIf on, reads the internal volume of the data set.  Set to off by\ndefault.\n"},
  {"SetReadInternalVolume", PyvtkSLACReader_SetReadInternalVolume, METH_VARARGS,
   "SetReadInternalVolume(self, _arg:int) -> None\nC++: virtual void SetReadInternalVolume(vtkTypeBool _arg)\n\n"},
  {"ReadInternalVolumeOn", PyvtkSLACReader_ReadInternalVolumeOn, METH_VARARGS,
   "ReadInternalVolumeOn(self) -> None\nC++: virtual void ReadInternalVolumeOn()\n\n"},
  {"ReadInternalVolumeOff", PyvtkSLACReader_ReadInternalVolumeOff, METH_VARARGS,
   "ReadInternalVolumeOff(self) -> None\nC++: virtual void ReadInternalVolumeOff()\n\n"},
  {"GetReadExternalSurface", PyvtkSLACReader_GetReadExternalSurface, METH_VARARGS,
   "GetReadExternalSurface(self) -> int\nC++: virtual vtkTypeBool GetReadExternalSurface()\n\nIf on, reads the external surfaces of the data set.  Set to on by\ndefault.\n"},
  {"SetReadExternalSurface", PyvtkSLACReader_SetReadExternalSurface, METH_VARARGS,
   "SetReadExternalSurface(self, _arg:int) -> None\nC++: virtual void SetReadExternalSurface(vtkTypeBool _arg)\n\n"},
  {"ReadExternalSurfaceOn", PyvtkSLACReader_ReadExternalSurfaceOn, METH_VARARGS,
   "ReadExternalSurfaceOn(self) -> None\nC++: virtual void ReadExternalSurfaceOn()\n\n"},
  {"ReadExternalSurfaceOff", PyvtkSLACReader_ReadExternalSurfaceOff, METH_VARARGS,
   "ReadExternalSurfaceOff(self) -> None\nC++: virtual void ReadExternalSurfaceOff()\n\n"},
  {"GetReadMidpoints", PyvtkSLACReader_GetReadMidpoints, METH_VARARGS,
   "GetReadMidpoints(self) -> int\nC++: virtual vtkTypeBool GetReadMidpoints()\n\nIf on, reads midpoint information for external surfaces and\nbuilds quadratic surface triangles.  Set to on by default.\n"},
  {"SetReadMidpoints", PyvtkSLACReader_SetReadMidpoints, METH_VARARGS,
   "SetReadMidpoints(self, _arg:int) -> None\nC++: virtual void SetReadMidpoints(vtkTypeBool _arg)\n\n"},
  {"ReadMidpointsOn", PyvtkSLACReader_ReadMidpointsOn, METH_VARARGS,
   "ReadMidpointsOn(self) -> None\nC++: virtual void ReadMidpointsOn()\n\n"},
  {"ReadMidpointsOff", PyvtkSLACReader_ReadMidpointsOff, METH_VARARGS,
   "ReadMidpointsOff(self) -> None\nC++: virtual void ReadMidpointsOff()\n\n"},
  {"GetNumberOfVariableArrays", PyvtkSLACReader_GetNumberOfVariableArrays, METH_VARARGS,
   "GetNumberOfVariableArrays(self) -> int\nC++: virtual int GetNumberOfVariableArrays()\n\nVariable array selection.\n"},
  {"GetVariableArrayName", PyvtkSLACReader_GetVariableArrayName, METH_VARARGS,
   "GetVariableArrayName(self, index:int) -> str\nC++: virtual const char *GetVariableArrayName(int index)\n\n"},
  {"GetVariableArrayStatus", PyvtkSLACReader_GetVariableArrayStatus, METH_VARARGS,
   "GetVariableArrayStatus(self, name:str) -> int\nC++: virtual int GetVariableArrayStatus(const char *name)\n\n"},
  {"SetVariableArrayStatus", PyvtkSLACReader_SetVariableArrayStatus, METH_VARARGS,
   "SetVariableArrayStatus(self, name:str, status:int) -> None\nC++: virtual void SetVariableArrayStatus(const char *name,\n    int status)\n\n"},
  {"ResetFrequencyScales", PyvtkSLACReader_ResetFrequencyScales, METH_VARARGS,
   "ResetFrequencyScales(self) -> None\nC++: virtual void ResetFrequencyScales()\n\nSets the scale factor for each mode. Each scale factor is reset\nto 1.\n"},
  {"SetFrequencyScale", PyvtkSLACReader_SetFrequencyScale, METH_VARARGS,
   "SetFrequencyScale(self, index:int, scale:float) -> None\nC++: virtual void SetFrequencyScale(int index, double scale)\n\n"},
  {"ResetPhaseShifts", PyvtkSLACReader_ResetPhaseShifts, METH_VARARGS,
   "ResetPhaseShifts(self) -> None\nC++: virtual void ResetPhaseShifts()\n\nSets the phase offset for each mode. Each shift is reset to 0.\n"},
  {"SetPhaseShift", PyvtkSLACReader_SetPhaseShift, METH_VARARGS,
   "SetPhaseShift(self, index:int, shift:float) -> None\nC++: virtual void SetPhaseShift(int index, double shift)\n\n"},
  {"GetFrequencyScales", PyvtkSLACReader_GetFrequencyScales, METH_VARARGS,
   "GetFrequencyScales(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetFrequencyScales()\n\nNOTE: This is not thread-safe.\n"},
  {"GetPhaseShifts", PyvtkSLACReader_GetPhaseShifts, METH_VARARGS,
   "GetPhaseShifts(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetPhaseShifts()\n\n"},
  {"CanReadFile", PyvtkSLACReader_CanReadFile, METH_VARARGS,
   "CanReadFile(filename:str) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read by this reader.\n"},
  {"IS_INTERNAL_VOLUME", PyvtkSLACReader_IS_INTERNAL_VOLUME, METH_VARARGS,
   "IS_INTERNAL_VOLUME() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IS_INTERNAL_VOLUME()\n\nThis key is attached to the metadata information of all data sets\nin the output that are part of the internal volume.\n"},
  {"IS_EXTERNAL_SURFACE", PyvtkSLACReader_IS_EXTERNAL_SURFACE, METH_VARARGS,
   "IS_EXTERNAL_SURFACE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *IS_EXTERNAL_SURFACE()\n\nThis key is attached to the metadata information of all data sets\nin the output that are part of the external surface.\n"},
  {"POINTS", PyvtkSLACReader_POINTS, METH_VARARGS,
   "POINTS() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *POINTS()\n\nAll the data sets stored in the multiblock output share the same\npoint data.  For convenience, the point coordinates (vtkPoints)\nand point data (vtkPointData) are saved under these keys in the\nvtkInformation of the output data set.\n"},
  {"POINT_DATA", PyvtkSLACReader_POINT_DATA, METH_VARARGS,
   "POINT_DATA() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *POINT_DATA()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSLACReader_Doc =
  "vtkSLACReader - A reader for a data format used by Omega3p, Tau3p,\nand several other tools used at the Standford Linear Accelerator\nCenter (SLAC).\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "The underlying format uses netCDF to store arrays, but also imposes\n"
  "several conventions to form an unstructured grid of elements.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSLACReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIONetCDF.vtkSLACReader", // tp_name
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
  PyvtkSLACReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSLACReader_StaticNew()
{
  return vtkSLACReader::New();
}

PyObject *PyvtkSLACReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSLACReader_Type, PyvtkSLACReader_Methods,
    "vtkSLACReader",
 &PyvtkSLACReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "SURFACE_OUTPUT", vtkSLACReader::SURFACE_OUTPUT },
        { "VOLUME_OUTPUT", vtkSLACReader::VOLUME_OUTPUT },
        { "NUM_OUTPUTS", vtkSLACReader::NUM_OUTPUTS },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSLACReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSLACReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSLACReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

