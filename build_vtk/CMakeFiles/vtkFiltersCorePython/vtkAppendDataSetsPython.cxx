// python wrapper for vtkAppendDataSets
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAppendDataSets.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAppendDataSets(PyObject *dict); }
extern "C" { PyObject *PyvtkAppendDataSets_ClassNew(); }


static PyObject *
PyvtkAppendDataSets_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendDataSets::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendDataSets::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendDataSets *tempr = vtkAppendDataSets::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendDataSets *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendDataSets::NewInstance());

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
PyvtkAppendDataSets_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAppendDataSets::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAppendDataSets::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkAppendDataSets::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  bool temp0 = false;
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
      op->vtkAppendDataSets::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOn();
    }
    else
    {
      op->vtkAppendDataSets::MergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOff();
    }
    else
    {
      op->vtkAppendDataSets::MergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

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
      op->vtkAppendDataSets::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkAppendDataSets::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkAppendDataSets::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAppendDataSets::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

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
      op->vtkAppendDataSets::SetToleranceIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkAppendDataSets::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOn();
    }
    else
    {
      op->vtkAppendDataSets::ToleranceIsAbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOff();
    }
    else
    {
      op->vtkAppendDataSets::ToleranceIsAbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_SetOutputDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputDataSetType(temp0);
    }
    else
    {
      op->vtkAppendDataSets::SetOutputDataSetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetOutputDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputDataSetType() :
      op->vtkAppendDataSets::GetOutputDataSetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

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
      op->vtkAppendDataSets::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkAppendDataSets::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkAppendDataSets::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendDataSets_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendDataSets *op = static_cast<vtkAppendDataSets *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkAppendDataSets::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendDataSets_Methods[] = {
  {"IsTypeOf", PyvtkAppendDataSets_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendDataSets_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendDataSets_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAppendDataSets\nC++: static vtkAppendDataSets *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendDataSets_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAppendDataSets\nC++: vtkAppendDataSets *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAppendDataSets_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAppendDataSets_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMergePoints", PyvtkAppendDataSets_GetMergePoints, METH_VARARGS,
   "GetMergePoints(self) -> bool\nC++: virtual bool GetMergePoints()\n\nGet/Set if the filter should merge coincidental points Note: The\nfilter will only merge points if the ghost cell array doesn't\nexist Defaults to Off\n"},
  {"SetMergePoints", PyvtkAppendDataSets_SetMergePoints, METH_VARARGS,
   "SetMergePoints(self, _arg:bool) -> None\nC++: virtual void SetMergePoints(bool _arg)\n\n"},
  {"MergePointsOn", PyvtkAppendDataSets_MergePointsOn, METH_VARARGS,
   "MergePointsOn(self) -> None\nC++: virtual void MergePointsOn()\n\n"},
  {"MergePointsOff", PyvtkAppendDataSets_MergePointsOff, METH_VARARGS,
   "MergePointsOff(self) -> None\nC++: virtual void MergePointsOff()\n\n"},
  {"SetTolerance", PyvtkAppendDataSets_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nGet/Set the tolerance to use to find coincident points when\n`MergePoints` is `true`. Default is 0.0.\n\nThis is simply passed on to the internal vtkLocator used to merge\npoints.\n@sa `vtkLocator::SetTolerance`.\n"},
  {"GetToleranceMinValue", PyvtkAppendDataSets_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkAppendDataSets_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkAppendDataSets_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetToleranceIsAbsolute", PyvtkAppendDataSets_SetToleranceIsAbsolute, METH_VARARGS,
   "SetToleranceIsAbsolute(self, _arg:bool) -> None\nC++: virtual void SetToleranceIsAbsolute(bool _arg)\n\nGet/Set whether Tolerance is treated as an absolute or relative\ntolerance. The default is to treat it as an absolute tolerance.\nWhen off, the tolerance is multiplied by the diagonal of the\nbounding box of the input.\n"},
  {"GetToleranceIsAbsolute", PyvtkAppendDataSets_GetToleranceIsAbsolute, METH_VARARGS,
   "GetToleranceIsAbsolute(self) -> bool\nC++: virtual bool GetToleranceIsAbsolute()\n\n"},
  {"ToleranceIsAbsoluteOn", PyvtkAppendDataSets_ToleranceIsAbsoluteOn, METH_VARARGS,
   "ToleranceIsAbsoluteOn(self) -> None\nC++: virtual void ToleranceIsAbsoluteOn()\n\n"},
  {"ToleranceIsAbsoluteOff", PyvtkAppendDataSets_ToleranceIsAbsoluteOff, METH_VARARGS,
   "ToleranceIsAbsoluteOff(self) -> None\nC++: virtual void ToleranceIsAbsoluteOff()\n\n"},
  {"SetOutputDataSetType", PyvtkAppendDataSets_SetOutputDataSetType, METH_VARARGS,
   "SetOutputDataSetType(self, _arg:int) -> None\nC++: virtual void SetOutputDataSetType(int _arg)\n\nGet/Set the output type produced by this filter. Only input\ndatasets compatible with the output type will be merged in the\noutput. For example, if the output type is vtkPolyData, then\nblocks of type vtkImageData, vtkStructuredGrid, etc. will not be\nmerged - only vtkPolyData can be merged into a vtkPolyData. On\nthe other hand, if the output type is vtkUnstructuredGrid, then\nblocks of almost any type will be merged in the output. Valid\nvalues are VTK_POLY_DATA and VTK_UNSTRUCTURED_GRID defined in\nvtkType.h. Defaults to VTK_UNSTRUCTURED_GRID.\n"},
  {"GetOutputDataSetType", PyvtkAppendDataSets_GetOutputDataSetType, METH_VARARGS,
   "GetOutputDataSetType(self) -> int\nC++: virtual int GetOutputDataSetType()\n\n"},
  {"SetOutputPointsPrecision", PyvtkAppendDataSets_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkAppendDataSets_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "GetOutputPointsPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkAppendDataSets_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "GetOutputPointsPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\n"},
  {"GetOutputPointsPrecision", PyvtkAppendDataSets_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAppendDataSets_Doc =
  "vtkAppendDataSets - Appends one or more datasets together into a\nsingle output vtkPointSet.\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkAppendDataSets is a filter that appends one of more datasets into\n"
  "a single output point set. The type of the output is set with the\n"
  "OutputDataSetType option. Only inputs that can be converted to the\n"
  "selected output dataset type are appended to the output. By default,\n"
  "the output is vtkUnstructuredGrid, and all input types can be\n"
  "appended to it. If the OutputDataSetType is set to produce\n"
  "vtkPolyData, then only datasets that can be converted to vtkPolyData\n"
  "(i.e., vtkPolyData) are appended to the output.\n\n"
  "All cells are extracted and appended, but point and cell attributes\n"
  "(i.e., scalars, vectors, normals, field data, etc.) are extracted and\n"
  "appended only if all datasets have the same point and/or cell\n"
  "attributes available. (For example, if one dataset has scalars but\n"
  "another does not, scalars will not be appended.)\n\n"
  "Points can be merged if MergePoints is set to true. In this case,\n"
  "points are really merged if there are no ghost cells and no global\n"
  "point ids, or if there are global point ids. In the case of the\n"
  "presence of global point ids, the filter exclusively relies on those\n"
  "ids, not checking if points are coincident. It assumes that the\n"
  "global ids were properly set. In the case of the absence of global\n"
  "ids, points within Tolerance are merged.\n\n"
  "@sa\n"
  "vtkAppendFilter vtkAppendPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAppendDataSets_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAppendDataSets", // tp_name
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
  PyvtkAppendDataSets_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendDataSets_StaticNew()
{
  return vtkAppendDataSets::New();
}

PyObject *PyvtkAppendDataSets_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAppendDataSets_Type, PyvtkAppendDataSets_Methods,
    "vtkAppendDataSets",
 &PyvtkAppendDataSets_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAppendDataSets(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendDataSets_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendDataSets", o) != 0)
  {
    Py_DECREF(o);
  }

}

