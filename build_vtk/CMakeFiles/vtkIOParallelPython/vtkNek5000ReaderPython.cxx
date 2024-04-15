// python wrapper for vtkNek5000Reader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkNek5000Reader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNek5000Reader(PyObject *dict); }
extern "C" { PyObject *PyvtkNek5000Reader_ClassNew(); }


static PyObject *
PyvtkNek5000Reader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNek5000Reader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNek5000Reader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNek5000Reader *tempr = vtkNek5000Reader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNek5000Reader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNek5000Reader::NewInstance());

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
PyvtkNek5000Reader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkNek5000Reader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkNek5000Reader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkNek5000Reader::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

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
      op->vtkNek5000Reader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkNek5000Reader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_SetDataFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataFileName(temp0);
    }
    else
    {
      op->vtkNek5000Reader::SetDataFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetDataFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDataFileName() :
      op->vtkNek5000Reader::GetDataFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkNek5000Reader::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkNek5000Reader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_SetTimeStepRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

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
      op->vtkNek5000Reader::SetTimeStepRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNek5000Reader_SetTimeStepRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

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
      op->vtkNek5000Reader::SetTimeStepRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkNek5000Reader_SetTimeStepRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkNek5000Reader_SetTimeStepRange_s1(self, args);
    case 1:
      return PyvtkNek5000Reader_SetTimeStepRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTimeStepRange");
  return nullptr;
}


static PyObject *
PyvtkNek5000Reader_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkNek5000Reader::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetPointArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayName(temp0) :
      op->vtkNek5000Reader::GetPointArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_SetCleanGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCleanGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCleanGrid(temp0);
    }
    else
    {
      op->vtkNek5000Reader::SetCleanGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetCleanGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCleanGrid() :
      op->vtkNek5000Reader::GetCleanGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_CleanGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanGridOn();
    }
    else
    {
      op->vtkNek5000Reader::CleanGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_CleanGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanGridOff();
    }
    else
    {
      op->vtkNek5000Reader::CleanGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_SetSpectralElementIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpectralElementIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpectralElementIds(temp0);
    }
    else
    {
      op->vtkNek5000Reader::SetSpectralElementIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetSpectralElementIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpectralElementIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSpectralElementIds() :
      op->vtkNek5000Reader::GetSpectralElementIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_SpectralElementIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpectralElementIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpectralElementIdsOn();
    }
    else
    {
      op->vtkNek5000Reader::SpectralElementIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_SpectralElementIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpectralElementIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SpectralElementIdsOff();
    }
    else
    {
      op->vtkNek5000Reader::SpectralElementIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetPointArrayStatus_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkNek5000Reader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNek5000Reader_GetPointArrayStatus_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPointArrayStatus(temp0) :
      op->vtkNek5000Reader::GetPointArrayStatus(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNek5000Reader_GetPointArrayStatus_Methods[] = {
  {"GetPointArrayStatus", PyvtkNek5000Reader_GetPointArrayStatus_s1, METH_VARARGS,
   "@z"},
  {"GetPointArrayStatus", PyvtkNek5000Reader_GetPointArrayStatus_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkNek5000Reader_GetPointArrayStatus(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkNek5000Reader_GetPointArrayStatus_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointArrayStatus");
  return nullptr;
}


static PyObject *
PyvtkNek5000Reader_SetPointArrayStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

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
      op->vtkNek5000Reader::SetPointArrayStatus(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_DisableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllPointArrays();
    }
    else
    {
      op->vtkNek5000Reader::DisableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_EnableAllPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllPointArrays();
    }
    else
    {
      op->vtkNek5000Reader::EnableAllPointArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_GetVariableNamesFromData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVariableNamesFromData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    size_t tempr = (ap.IsBound() ?
      op->GetVariableNamesFromData(temp0) :
      op->vtkNek5000Reader::GetVariableNamesFromData(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNek5000Reader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNek5000Reader *op = static_cast<vtkNek5000Reader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkNek5000Reader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNek5000Reader_Methods[] = {
  {"IsTypeOf", PyvtkNek5000Reader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNek5000Reader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNek5000Reader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkNek5000Reader\nC++: static vtkNek5000Reader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNek5000Reader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkNek5000Reader\nC++: vtkNek5000Reader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkNek5000Reader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkNek5000Reader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkNek5000Reader_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {"SetFileName", PyvtkNek5000Reader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetFileName", PyvtkNek5000Reader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetDataFileName", PyvtkNek5000Reader_SetDataFileName, METH_VARARGS,
   "SetDataFileName(self, _arg:str) -> None\nC++: virtual void SetDataFileName(const char *_arg)\n\n"},
  {"GetDataFileName", PyvtkNek5000Reader_GetDataFileName, METH_VARARGS,
   "GetDataFileName(self) -> str\nC++: virtual char *GetDataFileName()\n\n"},
  {"GetNumberOfTimeSteps", PyvtkNek5000Reader_GetNumberOfTimeSteps, METH_VARARGS,
   "GetNumberOfTimeSteps(self) -> int\nC++: virtual int GetNumberOfTimeSteps()\n\n"},
  {"GetTimeStepRange", PyvtkNek5000Reader_GetTimeStepRange, METH_VARARGS,
   "GetTimeStepRange(self) -> (int, int)\nC++: virtual int *GetTimeStepRange()\n\nReturns the available range of valid integer time steps.\n"},
  {"SetTimeStepRange", PyvtkNek5000Reader_SetTimeStepRange, METH_VARARGS,
   "SetTimeStepRange(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetTimeStepRange(int _arg1, int _arg2)\nSetTimeStepRange(self, _arg:(int, int)) -> None\nC++: void SetTimeStepRange(const int _arg[2])\n\n"},
  {"GetNumberOfPointArrays", PyvtkNek5000Reader_GetNumberOfPointArrays, METH_VARARGS,
   "GetNumberOfPointArrays(self) -> int\nC++: int GetNumberOfPointArrays()\n\nGet the number of point arrays available in the input.\n"},
  {"GetPointArrayName", PyvtkNek5000Reader_GetPointArrayName, METH_VARARGS,
   "GetPointArrayName(self, index:int) -> str\nC++: const char *GetPointArrayName(int index)\n\nGet the name of the  point array with the given index in the\ninput.\n"},
  {"SetCleanGrid", PyvtkNek5000Reader_SetCleanGrid, METH_VARARGS,
   "SetCleanGrid(self, _arg:int) -> None\nC++: virtual void SetCleanGrid(int _arg)\n\nused for ParaView to decide if cleaning the grid to merge points\n"},
  {"GetCleanGrid", PyvtkNek5000Reader_GetCleanGrid, METH_VARARGS,
   "GetCleanGrid(self) -> int\nC++: virtual int GetCleanGrid()\n\n"},
  {"CleanGridOn", PyvtkNek5000Reader_CleanGridOn, METH_VARARGS,
   "CleanGridOn(self) -> None\nC++: virtual void CleanGridOn()\n\n"},
  {"CleanGridOff", PyvtkNek5000Reader_CleanGridOff, METH_VARARGS,
   "CleanGridOff(self) -> None\nC++: virtual void CleanGridOff()\n\n"},
  {"SetSpectralElementIds", PyvtkNek5000Reader_SetSpectralElementIds, METH_VARARGS,
   "SetSpectralElementIds(self, _arg:int) -> None\nC++: virtual void SetSpectralElementIds(int _arg)\n\nused for ParaView to decide if showing the spectral elements ids\nas cell-data\n"},
  {"GetSpectralElementIds", PyvtkNek5000Reader_GetSpectralElementIds, METH_VARARGS,
   "GetSpectralElementIds(self) -> int\nC++: virtual int GetSpectralElementIds()\n\n"},
  {"SpectralElementIdsOn", PyvtkNek5000Reader_SpectralElementIdsOn, METH_VARARGS,
   "SpectralElementIdsOn(self) -> None\nC++: virtual void SpectralElementIdsOn()\n\n"},
  {"SpectralElementIdsOff", PyvtkNek5000Reader_SpectralElementIdsOff, METH_VARARGS,
   "SpectralElementIdsOff(self) -> None\nC++: virtual void SpectralElementIdsOff()\n\n"},
  {"GetPointArrayStatus", PyvtkNek5000Reader_GetPointArrayStatus, METH_VARARGS,
   "GetPointArrayStatus(self, name:str) -> bool\nC++: bool GetPointArrayStatus(const char *name)\nGetPointArrayStatus(self, index:int) -> bool\nC++: bool GetPointArrayStatus(int index)\n\nGet/Set whether the point array with the given name or index is\nto be read.\n"},
  {"SetPointArrayStatus", PyvtkNek5000Reader_SetPointArrayStatus, METH_VARARGS,
   "SetPointArrayStatus(self, name:str, status:int) -> None\nC++: void SetPointArrayStatus(const char *name, int status)\n\n"},
  {"DisableAllPointArrays", PyvtkNek5000Reader_DisableAllPointArrays, METH_VARARGS,
   "DisableAllPointArrays(self) -> None\nC++: void DisableAllPointArrays()\n\nTurn on/off all point arrays.\n"},
  {"EnableAllPointArrays", PyvtkNek5000Reader_EnableAllPointArrays, METH_VARARGS,
   "EnableAllPointArrays(self) -> None\nC++: void EnableAllPointArrays()\n\n"},
  {"GetVariableNamesFromData", PyvtkNek5000Reader_GetVariableNamesFromData, METH_VARARGS,
   "GetVariableNamesFromData(self, varTags:str) -> int\nC++: size_t GetVariableNamesFromData(char *varTags)\n\nGet the names of variables stored in the data\n"},
  {"CanReadFile", PyvtkNek5000Reader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, fname:str) -> int\nC++: int CanReadFile(const char *fname)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkNek5000Reader_Doc =
  "vtkNek5000Reader - Reads Nek5000 format data files.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "@par Thanks: This class was developed by  Jean Favre (jfavre@cscs.ch)\n"
  "from the Swiss National Supercomputing Centre\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNek5000Reader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOParallel.vtkNek5000Reader", // tp_name
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
  PyvtkNek5000Reader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNek5000Reader_StaticNew()
{
  return vtkNek5000Reader::New();
}

PyObject *PyvtkNek5000Reader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkNek5000Reader_Type, PyvtkNek5000Reader_Methods,
    "vtkNek5000Reader",
 &PyvtkNek5000Reader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNek5000Reader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNek5000Reader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNek5000Reader", o) != 0)
  {
    Py_DECREF(o);
  }

}

