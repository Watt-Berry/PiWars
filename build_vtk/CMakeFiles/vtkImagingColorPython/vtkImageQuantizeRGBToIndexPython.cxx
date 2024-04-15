// python wrapper for vtkImageQuantizeRGBToIndex
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageQuantizeRGBToIndex.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageQuantizeRGBToIndex(PyObject *dict); }
extern "C" { PyObject *PyvtkImageQuantizeRGBToIndex_ClassNew(); }


static PyObject *
PyvtkImageQuantizeRGBToIndex_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageQuantizeRGBToIndex::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageQuantizeRGBToIndex::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageQuantizeRGBToIndex *tempr = vtkImageQuantizeRGBToIndex::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageQuantizeRGBToIndex *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageQuantizeRGBToIndex::NewInstance());

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
PyvtkImageQuantizeRGBToIndex_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageQuantizeRGBToIndex::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageQuantizeRGBToIndex::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfColors(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColorsMinValue() :
      op->vtkImageQuantizeRGBToIndex::GetNumberOfColorsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColorsMaxValue() :
      op->vtkImageQuantizeRGBToIndex::GetNumberOfColorsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfColors() :
      op->vtkImageQuantizeRGBToIndex::GetNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetSamplingRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

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
      op->SetSamplingRate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetSamplingRate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageQuantizeRGBToIndex_SetSamplingRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingRate(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetSamplingRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageQuantizeRGBToIndex_SetSamplingRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageQuantizeRGBToIndex_SetSamplingRate_s1(self, args);
    case 1:
      return PyvtkImageQuantizeRGBToIndex_SetSamplingRate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingRate");
  return nullptr;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetSamplingRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSamplingRate() :
      op->vtkImageQuantizeRGBToIndex::GetSamplingRate());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetSortIndexByLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortIndexByLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortIndexByLuminance(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetSortIndexByLuminance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetSortIndexByLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortIndexByLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSortIndexByLuminance() :
      op->vtkImageQuantizeRGBToIndex::GetSortIndexByLuminance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SortIndexByLuminanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortIndexByLuminanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortIndexByLuminanceOn();
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SortIndexByLuminanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SortIndexByLuminanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortIndexByLuminanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortIndexByLuminanceOff();
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SortIndexByLuminanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageQuantizeRGBToIndex::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetInitializeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitializeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInitializeExecuteTime() :
      op->vtkImageQuantizeRGBToIndex::GetInitializeExecuteTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetBuildTreeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTreeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBuildTreeExecuteTime() :
      op->vtkImageQuantizeRGBToIndex::GetBuildTreeExecuteTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetLookupIndexExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupIndexExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLookupIndexExecuteTime() :
      op->vtkImageQuantizeRGBToIndex::GetLookupIndexExecuteTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_GetInputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputType() :
      op->vtkImageQuantizeRGBToIndex::GetInputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetInitializeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitializeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitializeExecuteTime(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetInitializeExecuteTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetBuildTreeExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildTreeExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildTreeExecuteTime(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetBuildTreeExecuteTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageQuantizeRGBToIndex_SetLookupIndexExecuteTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupIndexExecuteTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageQuantizeRGBToIndex *op = static_cast<vtkImageQuantizeRGBToIndex *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLookupIndexExecuteTime(temp0);
    }
    else
    {
      op->vtkImageQuantizeRGBToIndex::SetLookupIndexExecuteTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageQuantizeRGBToIndex_Methods[] = {
  {"IsTypeOf", PyvtkImageQuantizeRGBToIndex_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageQuantizeRGBToIndex_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageQuantizeRGBToIndex_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageQuantizeRGBToIndex\nC++: static vtkImageQuantizeRGBToIndex *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageQuantizeRGBToIndex_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageQuantizeRGBToIndex\nC++: vtkImageQuantizeRGBToIndex *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageQuantizeRGBToIndex_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageQuantizeRGBToIndex_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfColors", PyvtkImageQuantizeRGBToIndex_SetNumberOfColors, METH_VARARGS,
   "SetNumberOfColors(self, _arg:int) -> None\nC++: virtual void SetNumberOfColors(int _arg)\n\nSet / Get the number of color index values to produce - must be a\nnumber between 2 and 65536.\n"},
  {"GetNumberOfColorsMinValue", PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMinValue, METH_VARARGS,
   "GetNumberOfColorsMinValue(self) -> int\nC++: virtual int GetNumberOfColorsMinValue()\n\n"},
  {"GetNumberOfColorsMaxValue", PyvtkImageQuantizeRGBToIndex_GetNumberOfColorsMaxValue, METH_VARARGS,
   "GetNumberOfColorsMaxValue(self) -> int\nC++: virtual int GetNumberOfColorsMaxValue()\n\n"},
  {"GetNumberOfColors", PyvtkImageQuantizeRGBToIndex_GetNumberOfColors, METH_VARARGS,
   "GetNumberOfColors(self) -> int\nC++: virtual int GetNumberOfColors()\n\n"},
  {"SetSamplingRate", PyvtkImageQuantizeRGBToIndex_SetSamplingRate, METH_VARARGS,
   "SetSamplingRate(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetSamplingRate(int _arg1, int _arg2, int _arg3)\nSetSamplingRate(self, _arg:(int, int, int)) -> None\nC++: virtual void SetSamplingRate(const int _arg[3])\n\n"},
  {"GetSamplingRate", PyvtkImageQuantizeRGBToIndex_GetSamplingRate, METH_VARARGS,
   "GetSamplingRate(self) -> (int, int, int)\nC++: virtual int *GetSamplingRate()\n\n"},
  {"SetSortIndexByLuminance", PyvtkImageQuantizeRGBToIndex_SetSortIndexByLuminance, METH_VARARGS,
   "SetSortIndexByLuminance(self, _arg:bool) -> None\nC++: virtual void SetSortIndexByLuminance(bool _arg)\n\n"},
  {"GetSortIndexByLuminance", PyvtkImageQuantizeRGBToIndex_GetSortIndexByLuminance, METH_VARARGS,
   "GetSortIndexByLuminance(self) -> bool\nC++: virtual bool GetSortIndexByLuminance()\n\n"},
  {"SortIndexByLuminanceOn", PyvtkImageQuantizeRGBToIndex_SortIndexByLuminanceOn, METH_VARARGS,
   "SortIndexByLuminanceOn(self) -> None\nC++: virtual void SortIndexByLuminanceOn()\n\n"},
  {"SortIndexByLuminanceOff", PyvtkImageQuantizeRGBToIndex_SortIndexByLuminanceOff, METH_VARARGS,
   "SortIndexByLuminanceOff(self) -> None\nC++: virtual void SortIndexByLuminanceOff()\n\n"},
  {"GetLookupTable", PyvtkImageQuantizeRGBToIndex_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\nGet the resulting lookup table that contains the color\ndefinitions corresponding to the index values in the output\nimage.\n"},
  {"GetInitializeExecuteTime", PyvtkImageQuantizeRGBToIndex_GetInitializeExecuteTime, METH_VARARGS,
   "GetInitializeExecuteTime(self) -> float\nC++: virtual double GetInitializeExecuteTime()\n\n"},
  {"GetBuildTreeExecuteTime", PyvtkImageQuantizeRGBToIndex_GetBuildTreeExecuteTime, METH_VARARGS,
   "GetBuildTreeExecuteTime(self) -> float\nC++: virtual double GetBuildTreeExecuteTime()\n\n"},
  {"GetLookupIndexExecuteTime", PyvtkImageQuantizeRGBToIndex_GetLookupIndexExecuteTime, METH_VARARGS,
   "GetLookupIndexExecuteTime(self) -> float\nC++: virtual double GetLookupIndexExecuteTime()\n\n"},
  {"GetInputType", PyvtkImageQuantizeRGBToIndex_GetInputType, METH_VARARGS,
   "GetInputType(self) -> int\nC++: virtual int GetInputType()\n\nFor internal use only - get the type of the image\n"},
  {"SetInitializeExecuteTime", PyvtkImageQuantizeRGBToIndex_SetInitializeExecuteTime, METH_VARARGS,
   "SetInitializeExecuteTime(self, _arg:float) -> None\nC++: virtual void SetInitializeExecuteTime(double _arg)\n\nFor internal use only - set the times for execution\n"},
  {"SetBuildTreeExecuteTime", PyvtkImageQuantizeRGBToIndex_SetBuildTreeExecuteTime, METH_VARARGS,
   "SetBuildTreeExecuteTime(self, _arg:float) -> None\nC++: virtual void SetBuildTreeExecuteTime(double _arg)\n\n"},
  {"SetLookupIndexExecuteTime", PyvtkImageQuantizeRGBToIndex_SetLookupIndexExecuteTime, METH_VARARGS,
   "SetLookupIndexExecuteTime(self, _arg:float) -> None\nC++: virtual void SetLookupIndexExecuteTime(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageQuantizeRGBToIndex_Doc =
  "vtkImageQuantizeRGBToIndex - generalized histograms up to 4 dimensions\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageQuantizeRGBToIndex takes a 3 component RGB image as input and\n"
  "produces a one component index image as output, along with a lookup\n"
  "table that contains the color definitions for the index values. This\n"
  "filter works on the entire input extent - it does not perform\n"
  "streaming, and it does not supported threaded execution (because it\n"
  "has to process the entire image).\n\n"
  "To use this filter, you typically set the number of colors (between 2\n"
  "and 65536), execute it, and then retrieve the lookup table. The\n"
  "colors can then be using the lookup table and the image index.\n\n"
  "This filter can run faster, by initially sampling the colors at a\n"
  "coarser level. This can be specified by the SamplingRate parameter.\n\n"
  "The \"index-image\" viewed as a greyscale image, is usually quite\n"
  "arbitrary, accentuating contrast where none can be perceived in the\n"
  "original color image. To make the index image more meaningful (e.g.\n"
  "for image segmentation operating on scalar images), we sort the mean\n"
  "colors by luminance and re-map the indices accordingly. This option\n"
  "does not introduce any computational complexity and has no impact on\n"
  "actual colors in the lookup table (only their order).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageQuantizeRGBToIndex_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingColor.vtkImageQuantizeRGBToIndex", // tp_name
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
  PyvtkImageQuantizeRGBToIndex_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageQuantizeRGBToIndex_StaticNew()
{
  return vtkImageQuantizeRGBToIndex::New();
}

PyObject *PyvtkImageQuantizeRGBToIndex_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageQuantizeRGBToIndex_Type, PyvtkImageQuantizeRGBToIndex_Methods,
    "vtkImageQuantizeRGBToIndex",
 &PyvtkImageQuantizeRGBToIndex_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageQuantizeRGBToIndex(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageQuantizeRGBToIndex_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageQuantizeRGBToIndex", o) != 0)
  {
    Py_DECREF(o);
  }

}

