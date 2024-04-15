// python wrapper for vtkExtractTimeSteps
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractTimeSteps.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractTimeSteps(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractTimeSteps_ClassNew(); }


static PyObject *
PyvtkExtractTimeSteps_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractTimeSteps::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractTimeSteps::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractTimeSteps *tempr = vtkExtractTimeSteps::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractTimeSteps *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractTimeSteps::NewInstance());

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
PyvtkExtractTimeSteps_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractTimeSteps::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractTimeSteps::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractTimeSteps::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_AddTimeStepIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTimeStepIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddTimeStepIndex(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::AddTimeStepIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeStepIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepIndices(temp0, temp1);
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeStepIndices(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeStepIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

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
      op->GetTimeStepIndices(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::GetTimeStepIndices(temp0);
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
PyvtkExtractTimeSteps_GenerateTimeStepIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTimeStepIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GenerateTimeStepIndices(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExtractTimeSteps::GenerateTimeStepIndices(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_ClearTimeStepIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearTimeStepIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearTimeStepIndices();
    }
    else
    {
      op->vtkExtractTimeSteps::ClearTimeStepIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetUseRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRange() :
      op->vtkExtractTimeSteps::GetUseRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetUseRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRange(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::SetUseRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_UseRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRangeOn();
    }
    else
    {
      op->vtkExtractTimeSteps::UseRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_UseRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRangeOff();
    }
    else
    {
      op->vtkExtractTimeSteps::UseRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkExtractTimeSteps::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkExtractTimeSteps::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTimeSteps_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractTimeSteps_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExtractTimeSteps_SetRange_s1(self, args);
    case 1:
      return PyvtkExtractTimeSteps_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeStepInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepInterval() :
      op->vtkExtractTimeSteps::GetTimeStepInterval());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeStepInterval(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStepInterval");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStepInterval(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeStepInterval(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeStepIntervalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIntervalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIntervalMinValue() :
      op->vtkExtractTimeSteps::GetTimeStepIntervalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeStepIntervalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepIntervalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStepIntervalMaxValue() :
      op->vtkExtractTimeSteps::GetTimeStepIntervalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_GetTimeEstimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeEstimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeEstimationMode() :
      op->vtkExtractTimeSteps::GetTimeEstimationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeEstimationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeEstimationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeEstimationMode(temp0);
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeEstimationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeEstimationModeToPrevious(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeEstimationModeToPrevious");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTimeEstimationModeToPrevious();
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeEstimationModeToPrevious();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeEstimationModeToNext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeEstimationModeToNext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTimeEstimationModeToNext();
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeEstimationModeToNext();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractTimeSteps_SetTimeEstimationModeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeEstimationModeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTimeSteps *op = static_cast<vtkExtractTimeSteps *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTimeEstimationModeToNearest();
    }
    else
    {
      op->vtkExtractTimeSteps::SetTimeEstimationModeToNearest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractTimeSteps_Methods[] = {
  {"IsTypeOf", PyvtkExtractTimeSteps_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractTimeSteps_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractTimeSteps_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractTimeSteps\nC++: static vtkExtractTimeSteps *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractTimeSteps_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractTimeSteps\nC++: vtkExtractTimeSteps *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractTimeSteps_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractTimeSteps_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfTimeSteps", PyvtkExtractTimeSteps_GetNumberOfTimeSteps, METH_VARARGS,
   "GetNumberOfTimeSteps(self) -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps that will be extracted\n"},
  {"AddTimeStepIndex", PyvtkExtractTimeSteps_AddTimeStepIndex, METH_VARARGS,
   "AddTimeStepIndex(self, timeStepIndex:int) -> None\nC++: void AddTimeStepIndex(int timeStepIndex)\n\nAdd a time step index. Not added if the index already exists.\n"},
  {"SetTimeStepIndices", PyvtkExtractTimeSteps_SetTimeStepIndices, METH_VARARGS,
   "SetTimeStepIndices(self, count:int, timeStepIndices:(int, ...))\n    -> None\nC++: void SetTimeStepIndices(int count,\n    const int *timeStepIndices)\n\nGet/Set an array of time step indices. For the Get function,\ntimeStepIndices should be big enough for GetNumberOfTimeSteps()\nvalues.\n"},
  {"GetTimeStepIndices", PyvtkExtractTimeSteps_GetTimeStepIndices, METH_VARARGS,
   "GetTimeStepIndices(self, timeStepIndices:[int, ...]) -> None\nC++: void GetTimeStepIndices(int *timeStepIndices)\n\n"},
  {"GenerateTimeStepIndices", PyvtkExtractTimeSteps_GenerateTimeStepIndices, METH_VARARGS,
   "GenerateTimeStepIndices(self, begin:int, end:int, step:int)\n    -> None\nC++: void GenerateTimeStepIndices(int begin, int end, int step)\n\nGenerate a range of indices in [begin, end) with a step size of\n'step'\n"},
  {"ClearTimeStepIndices", PyvtkExtractTimeSteps_ClearTimeStepIndices, METH_VARARGS,
   "ClearTimeStepIndices(self) -> None\nC++: void ClearTimeStepIndices()\n\nClear the time step indices\n"},
  {"GetUseRange", PyvtkExtractTimeSteps_GetUseRange, METH_VARARGS,
   "GetUseRange(self) -> bool\nC++: virtual bool GetUseRange()\n\nGet/Set whether to extract a range of timesteps.  When false,\nextracts the time steps explicitly set with SetTimeStepIndices. \nDefaults to false.\n"},
  {"SetUseRange", PyvtkExtractTimeSteps_SetUseRange, METH_VARARGS,
   "SetUseRange(self, _arg:bool) -> None\nC++: virtual void SetUseRange(bool _arg)\n\n"},
  {"UseRangeOn", PyvtkExtractTimeSteps_UseRangeOn, METH_VARARGS,
   "UseRangeOn(self) -> None\nC++: virtual void UseRangeOn()\n\n"},
  {"UseRangeOff", PyvtkExtractTimeSteps_UseRangeOff, METH_VARARGS,
   "UseRangeOff(self) -> None\nC++: virtual void UseRangeOff()\n\n"},
  {"GetRange", PyvtkExtractTimeSteps_GetRange, METH_VARARGS,
   "GetRange(self) -> (int, int)\nC++: virtual int *GetRange()\n\nGet/Set the range of time steps to extract.\n"},
  {"SetRange", PyvtkExtractTimeSteps_SetRange, METH_VARARGS,
   "SetRange(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetRange(int _arg1, int _arg2)\nSetRange(self, _arg:(int, int)) -> None\nC++: void SetRange(const int _arg[2])\n\n"},
  {"GetTimeStepInterval", PyvtkExtractTimeSteps_GetTimeStepInterval, METH_VARARGS,
   "GetTimeStepInterval(self) -> int\nC++: virtual int GetTimeStepInterval()\n\nGet/Set the time step interval to extract.  This is the N in\n'extract every Nth timestep in this range'.  Default to 1 or\n'extract all timesteps in this range.\n"},
  {"SetTimeStepInterval", PyvtkExtractTimeSteps_SetTimeStepInterval, METH_VARARGS,
   "SetTimeStepInterval(self, _arg:int) -> None\nC++: virtual void SetTimeStepInterval(int _arg)\n\n"},
  {"GetTimeStepIntervalMinValue", PyvtkExtractTimeSteps_GetTimeStepIntervalMinValue, METH_VARARGS,
   "GetTimeStepIntervalMinValue(self) -> int\nC++: virtual int GetTimeStepIntervalMinValue()\n\n"},
  {"GetTimeStepIntervalMaxValue", PyvtkExtractTimeSteps_GetTimeStepIntervalMaxValue, METH_VARARGS,
   "GetTimeStepIntervalMaxValue(self) -> int\nC++: virtual int GetTimeStepIntervalMaxValue()\n\n"},
  {"GetTimeEstimationMode", PyvtkExtractTimeSteps_GetTimeEstimationMode, METH_VARARGS,
   "GetTimeEstimationMode(self) -> int\nC++: virtual int GetTimeEstimationMode()\n\nGet/Set what to do when the requested time is not one of the\ntimesteps this filter is set to extract.  Should be one of the\nvalues of the enum vtkExtractTimeSteps::EstimationMode. The\ndefault is PREVIOUS_TIMESTEP.\n"},
  {"SetTimeEstimationMode", PyvtkExtractTimeSteps_SetTimeEstimationMode, METH_VARARGS,
   "SetTimeEstimationMode(self, _arg:int) -> None\nC++: virtual void SetTimeEstimationMode(int _arg)\n\n"},
  {"SetTimeEstimationModeToPrevious", PyvtkExtractTimeSteps_SetTimeEstimationModeToPrevious, METH_VARARGS,
   "SetTimeEstimationModeToPrevious(self) -> None\nC++: void SetTimeEstimationModeToPrevious()\n\n"},
  {"SetTimeEstimationModeToNext", PyvtkExtractTimeSteps_SetTimeEstimationModeToNext, METH_VARARGS,
   "SetTimeEstimationModeToNext(self) -> None\nC++: void SetTimeEstimationModeToNext()\n\n"},
  {"SetTimeEstimationModeToNearest", PyvtkExtractTimeSteps_SetTimeEstimationModeToNearest, METH_VARARGS,
   "SetTimeEstimationModeToNearest(self) -> None\nC++: void SetTimeEstimationModeToNearest()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractTimeSteps_Doc =
  "vtkExtractTimeSteps - extract specific time-steps from dataset\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkExtractTimeSteps extracts the specified time steps from the input\n"
  "dataset. It has two modes, one to specify timesteps explicitly by\n"
  "their indices and one to specify a range of timesteps to extract.\n\n"
  "When specifying timesteps explicitly the timesteps to be extracted\n"
  "are specified by their indices. If no time step is specified, all of\n"
  "the input time steps are extracted.\n\n"
  "When specifying a range, the beginning and end times are specified\n"
  "and the timesteps in between are extracted.  This can be modified by\n"
  "the TimeStepInterval property that sets the filter to extract every\n"
  "Nth timestep.\n\n"
  "This filter is useful when one wants to work with only a sub-set of\n"
  "the input time steps.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractTimeSteps_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractTimeSteps", // tp_name
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
  PyvtkExtractTimeSteps_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractTimeSteps_StaticNew()
{
  return vtkExtractTimeSteps::New();
}

PyObject *PyvtkExtractTimeSteps_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractTimeSteps_Type, PyvtkExtractTimeSteps_Methods,
    "vtkExtractTimeSteps",
 &PyvtkExtractTimeSteps_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "PREVIOUS_TIMESTEP", vtkExtractTimeSteps::PREVIOUS_TIMESTEP },
        { "NEXT_TIMESTEP", vtkExtractTimeSteps::NEXT_TIMESTEP },
        { "NEAREST_TIMESTEP", vtkExtractTimeSteps::NEAREST_TIMESTEP },
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

void PyVTKAddFile_vtkExtractTimeSteps(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractTimeSteps_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractTimeSteps", o) != 0)
  {
    Py_DECREF(o);
  }

}

