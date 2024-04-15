// python wrapper for vtkStatisticalOutlierRemoval
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStatisticalOutlierRemoval.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStatisticalOutlierRemoval(PyObject *dict); }
extern "C" { PyObject *PyvtkStatisticalOutlierRemoval_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static PyObject *
PyvtkStatisticalOutlierRemoval_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStatisticalOutlierRemoval::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStatisticalOutlierRemoval::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStatisticalOutlierRemoval *tempr = vtkStatisticalOutlierRemoval::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStatisticalOutlierRemoval *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStatisticalOutlierRemoval::NewInstance());

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
PyvtkStatisticalOutlierRemoval_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStatisticalOutlierRemoval::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStatisticalOutlierRemoval::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_SetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleSize(temp0);
    }
    else
    {
      op->vtkStatisticalOutlierRemoval::SetSampleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetSampleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMinValue() :
      op->vtkStatisticalOutlierRemoval::GetSampleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetSampleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMaxValue() :
      op->vtkStatisticalOutlierRemoval::GetSampleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSize() :
      op->vtkStatisticalOutlierRemoval::GetSampleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_SetStandardDeviationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviationFactor(temp0);
    }
    else
    {
      op->vtkStatisticalOutlierRemoval::SetStandardDeviationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetStandardDeviationFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviationFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStandardDeviationFactorMinValue() :
      op->vtkStatisticalOutlierRemoval::GetStandardDeviationFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetStandardDeviationFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviationFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStandardDeviationFactorMaxValue() :
      op->vtkStatisticalOutlierRemoval::GetStandardDeviationFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetStandardDeviationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStandardDeviationFactor() :
      op->vtkStatisticalOutlierRemoval::GetStandardDeviationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkStatisticalOutlierRemoval::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkStatisticalOutlierRemoval::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_SetComputedMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputedMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputedMean(temp0);
    }
    else
    {
      op->vtkStatisticalOutlierRemoval::SetComputedMean(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetComputedMeanMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedMeanMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetComputedMeanMinValue() :
      op->vtkStatisticalOutlierRemoval::GetComputedMeanMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetComputedMeanMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedMeanMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetComputedMeanMaxValue() :
      op->vtkStatisticalOutlierRemoval::GetComputedMeanMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetComputedMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetComputedMean() :
      op->vtkStatisticalOutlierRemoval::GetComputedMean());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_SetComputedStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputedStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputedStandardDeviation(temp0);
    }
    else
    {
      op->vtkStatisticalOutlierRemoval::SetComputedStandardDeviation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetComputedStandardDeviationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedStandardDeviationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetComputedStandardDeviationMinValue() :
      op->vtkStatisticalOutlierRemoval::GetComputedStandardDeviationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetComputedStandardDeviationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedStandardDeviationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetComputedStandardDeviationMaxValue() :
      op->vtkStatisticalOutlierRemoval::GetComputedStandardDeviationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStatisticalOutlierRemoval_GetComputedStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStatisticalOutlierRemoval *op = static_cast<vtkStatisticalOutlierRemoval *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetComputedStandardDeviation() :
      op->vtkStatisticalOutlierRemoval::GetComputedStandardDeviation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStatisticalOutlierRemoval_Methods[] = {
  {"IsTypeOf", PyvtkStatisticalOutlierRemoval_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStatisticalOutlierRemoval_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStatisticalOutlierRemoval_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStatisticalOutlierRemoval\nC++: static vtkStatisticalOutlierRemoval *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStatisticalOutlierRemoval_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStatisticalOutlierRemoval\nC++: vtkStatisticalOutlierRemoval *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStatisticalOutlierRemoval_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStatisticalOutlierRemoval_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSampleSize", PyvtkStatisticalOutlierRemoval_SetSampleSize, METH_VARARGS,
   "SetSampleSize(self, _arg:int) -> None\nC++: virtual void SetSampleSize(int _arg)\n\nFor each point sampled, specify the number of the closest,\nsurrounding points used to compute statistics. By default 25\npoints are used. Smaller numbers may speed performance.\n"},
  {"GetSampleSizeMinValue", PyvtkStatisticalOutlierRemoval_GetSampleSizeMinValue, METH_VARARGS,
   "GetSampleSizeMinValue(self) -> int\nC++: virtual int GetSampleSizeMinValue()\n\n"},
  {"GetSampleSizeMaxValue", PyvtkStatisticalOutlierRemoval_GetSampleSizeMaxValue, METH_VARARGS,
   "GetSampleSizeMaxValue(self) -> int\nC++: virtual int GetSampleSizeMaxValue()\n\n"},
  {"GetSampleSize", PyvtkStatisticalOutlierRemoval_GetSampleSize, METH_VARARGS,
   "GetSampleSize(self) -> int\nC++: virtual int GetSampleSize()\n\n"},
  {"SetStandardDeviationFactor", PyvtkStatisticalOutlierRemoval_SetStandardDeviationFactor, METH_VARARGS,
   "SetStandardDeviationFactor(self, _arg:float) -> None\nC++: virtual void SetStandardDeviationFactor(double _arg)\n\nThe filter uses this specified standard deviation factor to\nextract points. By default, points within 1.0 standard deviations\n(i.e., a StandardDeviationFactor=1.0) of the mean distance to\nneighboring points are retained.\n"},
  {"GetStandardDeviationFactorMinValue", PyvtkStatisticalOutlierRemoval_GetStandardDeviationFactorMinValue, METH_VARARGS,
   "GetStandardDeviationFactorMinValue(self) -> float\nC++: virtual double GetStandardDeviationFactorMinValue()\n\n"},
  {"GetStandardDeviationFactorMaxValue", PyvtkStatisticalOutlierRemoval_GetStandardDeviationFactorMaxValue, METH_VARARGS,
   "GetStandardDeviationFactorMaxValue(self) -> float\nC++: virtual double GetStandardDeviationFactorMaxValue()\n\n"},
  {"GetStandardDeviationFactor", PyvtkStatisticalOutlierRemoval_GetStandardDeviationFactor, METH_VARARGS,
   "GetStandardDeviationFactor(self) -> float\nC++: virtual double GetStandardDeviationFactor()\n\n"},
  {"SetLocator", PyvtkStatisticalOutlierRemoval_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractPointLocator) -> None\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\nsurroinding a sample point.\n"},
  {"GetLocator", PyvtkStatisticalOutlierRemoval_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\n"},
  {"SetComputedMean", PyvtkStatisticalOutlierRemoval_SetComputedMean, METH_VARARGS,
   "SetComputedMean(self, _arg:float) -> None\nC++: virtual void SetComputedMean(double _arg)\n\nAfter execution, return the value of the computed mean. Before\nexecution the value returned is invalid.\n"},
  {"GetComputedMeanMinValue", PyvtkStatisticalOutlierRemoval_GetComputedMeanMinValue, METH_VARARGS,
   "GetComputedMeanMinValue(self) -> float\nC++: virtual double GetComputedMeanMinValue()\n\n"},
  {"GetComputedMeanMaxValue", PyvtkStatisticalOutlierRemoval_GetComputedMeanMaxValue, METH_VARARGS,
   "GetComputedMeanMaxValue(self) -> float\nC++: virtual double GetComputedMeanMaxValue()\n\n"},
  {"GetComputedMean", PyvtkStatisticalOutlierRemoval_GetComputedMean, METH_VARARGS,
   "GetComputedMean(self) -> float\nC++: virtual double GetComputedMean()\n\n"},
  {"SetComputedStandardDeviation", PyvtkStatisticalOutlierRemoval_SetComputedStandardDeviation, METH_VARARGS,
   "SetComputedStandardDeviation(self, _arg:float) -> None\nC++: virtual void SetComputedStandardDeviation(double _arg)\n\nAfter execution, return the value of the computed sigma (standard\ndeviation). Before execution the value returned is invalid.\n"},
  {"GetComputedStandardDeviationMinValue", PyvtkStatisticalOutlierRemoval_GetComputedStandardDeviationMinValue, METH_VARARGS,
   "GetComputedStandardDeviationMinValue(self) -> float\nC++: virtual double GetComputedStandardDeviationMinValue()\n\n"},
  {"GetComputedStandardDeviationMaxValue", PyvtkStatisticalOutlierRemoval_GetComputedStandardDeviationMaxValue, METH_VARARGS,
   "GetComputedStandardDeviationMaxValue(self) -> float\nC++: virtual double GetComputedStandardDeviationMaxValue()\n\n"},
  {"GetComputedStandardDeviation", PyvtkStatisticalOutlierRemoval_GetComputedStandardDeviation, METH_VARARGS,
   "GetComputedStandardDeviation(self) -> float\nC++: virtual double GetComputedStandardDeviation()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStatisticalOutlierRemoval_Doc =
  "vtkStatisticalOutlierRemoval - remove sparse outlier points\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "The vtkStatisticalOutlierRemoval filter removes sparse outlier points\n"
  "through statistical analysis. The average (mean) distance between\n"
  "points in the point cloud is computed (taking a local sample size\n"
  "around each point); followed by computation of the global standard\n"
  "deviation of distances between points. This global, statistical\n"
  "information is compared against the mean separation distance for each\n"
  "point; those points whose average separation is greater than the\n"
  "user-specified variation in a multiple of standard deviation are\n"
  "removed.\n\n"
  "Note that while any vtkPointSet type can be provided as input, the\n"
  "output is represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output). Also, after filter\n"
  "execution, the user can request a vtkIdType* map which indicates how\n"
  "the input points were mapped to the output. A value of map[i] (where\n"
  "i is the ith input point) less than 0 means that the ith input point\n"
  "was removed. (See also the superclass documentation for accessing the\n"
  "removed points through the filter's second output.)\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointCloudFilter vtkRadiusOutlierRemoval vtkExtractPoints\n"
  "vtkThresholdPoints\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStatisticalOutlierRemoval_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkStatisticalOutlierRemoval", // tp_name
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
  PyvtkStatisticalOutlierRemoval_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStatisticalOutlierRemoval_StaticNew()
{
  return vtkStatisticalOutlierRemoval::New();
}

PyObject *PyvtkStatisticalOutlierRemoval_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStatisticalOutlierRemoval_Type, PyvtkStatisticalOutlierRemoval_Methods,
    "vtkStatisticalOutlierRemoval",
 &PyvtkStatisticalOutlierRemoval_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStatisticalOutlierRemoval(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStatisticalOutlierRemoval_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStatisticalOutlierRemoval", o) != 0)
  {
    Py_DECREF(o);
  }

}

