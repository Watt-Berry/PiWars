// python wrapper for vtkAppendFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAppendFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAppendFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkAppendFilter_ClassNew(); }


static PyObject *
PyvtkAppendFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendFilter *tempr = vtkAppendFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendFilter::NewInstance());

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
PyvtkAppendFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAppendFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAppendFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkAppendFilter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAppendFilter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkAppendFilter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAppendFilter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAppendFilter_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendFilter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyObject *
PyvtkAppendFilter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkAppendFilter::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePoints(temp0);
    }
    else
    {
      op->vtkAppendFilter::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOn();
    }
    else
    {
      op->vtkAppendFilter::MergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOff();
    }
    else
    {
      op->vtkAppendFilter::MergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkAppendFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkAppendFilter::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkAppendFilter::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAppendFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToleranceIsAbsolute(temp0);
    }
    else
    {
      op->vtkAppendFilter::SetToleranceIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkAppendFilter::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOn();
    }
    else
    {
      op->vtkAppendFilter::ToleranceIsAbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOff();
    }
    else
    {
      op->vtkAppendFilter::ToleranceIsAbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_RemoveInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputData(temp0);
    }
    else
    {
      op->vtkAppendFilter::RemoveInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->GetInputList() :
      op->vtkAppendFilter::GetInputList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkAppendFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkAppendFilter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkAppendFilter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendFilter *op = static_cast<vtkAppendFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkAppendFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendFilter_Methods[] = {
  {"IsTypeOf", PyvtkAppendFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAppendFilter\nC++: static vtkAppendFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAppendFilter\nC++: vtkAppendFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAppendFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAppendFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInput", PyvtkAppendFilter_GetInput, METH_VARARGS,
   "GetInput(self, idx:int) -> vtkDataSet\nC++: vtkDataSet *GetInput(int idx)\nGetInput(self) -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet any input of this filter.\n"},
  {"GetMergePoints", PyvtkAppendFilter_GetMergePoints, METH_VARARGS,
   "GetMergePoints(self) -> int\nC++: virtual vtkTypeBool GetMergePoints()\n\nGet/Set if the filter should merge coincidental points Note: The\nfilter will only merge points if the ghost cell array doesn't\nexist Defaults to Off\n"},
  {"SetMergePoints", PyvtkAppendFilter_SetMergePoints, METH_VARARGS,
   "SetMergePoints(self, _arg:int) -> None\nC++: virtual void SetMergePoints(vtkTypeBool _arg)\n\n"},
  {"MergePointsOn", PyvtkAppendFilter_MergePointsOn, METH_VARARGS,
   "MergePointsOn(self) -> None\nC++: virtual void MergePointsOn()\n\n"},
  {"MergePointsOff", PyvtkAppendFilter_MergePointsOff, METH_VARARGS,
   "MergePointsOff(self) -> None\nC++: virtual void MergePointsOff()\n\n"},
  {"SetTolerance", PyvtkAppendFilter_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nGet/Set the tolerance to use to find coincident points when\n`MergePoints` is `true`. Default is 0.0.\n\nThis is simply passed on to the internal vtkLocator used to merge\npoints.\n@sa `vtkLocator::SetTolerance`.\n"},
  {"GetToleranceMinValue", PyvtkAppendFilter_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkAppendFilter_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkAppendFilter_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetToleranceIsAbsolute", PyvtkAppendFilter_SetToleranceIsAbsolute, METH_VARARGS,
   "SetToleranceIsAbsolute(self, _arg:bool) -> None\nC++: virtual void SetToleranceIsAbsolute(bool _arg)\n\nGet/Set whether Tolerance is treated as an absolute or relative\ntolerance. The default is to treat it as an absolute tolerance.\nWhen off, the tolerance is multiplied by the diagonal of the\nbounding box of the input.\n"},
  {"GetToleranceIsAbsolute", PyvtkAppendFilter_GetToleranceIsAbsolute, METH_VARARGS,
   "GetToleranceIsAbsolute(self) -> bool\nC++: virtual bool GetToleranceIsAbsolute()\n\n"},
  {"ToleranceIsAbsoluteOn", PyvtkAppendFilter_ToleranceIsAbsoluteOn, METH_VARARGS,
   "ToleranceIsAbsoluteOn(self) -> None\nC++: virtual void ToleranceIsAbsoluteOn()\n\n"},
  {"ToleranceIsAbsoluteOff", PyvtkAppendFilter_ToleranceIsAbsoluteOff, METH_VARARGS,
   "ToleranceIsAbsoluteOff(self) -> None\nC++: virtual void ToleranceIsAbsoluteOff()\n\n"},
  {"RemoveInputData", PyvtkAppendFilter_RemoveInputData, METH_VARARGS,
   "RemoveInputData(self, in_:vtkDataSet) -> None\nC++: void RemoveInputData(vtkDataSet *in)\n\nRemove a dataset from the list of data to append.\n"},
  {"GetInputList", PyvtkAppendFilter_GetInputList, METH_VARARGS,
   "GetInputList(self) -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetInputList()\n\nReturns a copy of the input array.  Modifications to this list\nwill not be reflected in the actual inputs.\n"},
  {"SetOutputPointsPrecision", PyvtkAppendFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkAppendFilter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "GetOutputPointsPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkAppendFilter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "GetOutputPointsPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\n"},
  {"GetOutputPointsPrecision", PyvtkAppendFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAppendFilter_Doc =
  "vtkAppendFilter - appends one or more datasets together into a single\nunstructured grid\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkAppendFilter is a filter that appends one of more datasets into a\n"
  "single unstructured grid. All geometry is extracted and appended, but\n"
  "point attributes (i.e., scalars, vectors, normals, field data, etc.)\n"
  "are extracted and appended only if all datasets have the point\n"
  "attributes available. (For example, if one dataset has scalars but\n"
  "another does not, scalars will not be appended.)\n\n"
  "You can decide to merge points that are coincident by setting\n"
  "`MergePoints`. If this flag is set, points are merged if they are\n"
  "within `Tolerance` radius. If a point global id array is available\n"
  "(point data named \"GlobalPointIds\"), then two points are merged if\n"
  "they share the same point global id, without checking for coincident\n"
  "point.\n\n"
  "@sa\n"
  "vtkAppendPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAppendFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAppendFilter", // tp_name
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
  PyvtkAppendFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendFilter_StaticNew()
{
  return vtkAppendFilter::New();
}

PyObject *PyvtkAppendFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAppendFilter_Type, PyvtkAppendFilter_Methods,
    "vtkAppendFilter",
 &PyvtkAppendFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAppendFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

