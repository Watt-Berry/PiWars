// python wrapper for vtkGraphLayoutFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphLayoutFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphLayoutFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkGraphLayoutFilter_ClassNew(); }


static PyObject *
PyvtkGraphLayoutFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphLayoutFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphLayoutFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphLayoutFilter *tempr = vtkGraphLayoutFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphLayoutFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphLayoutFilter::NewInstance());

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
PyvtkGraphLayoutFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphLayoutFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphLayoutFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetGraphBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraphLayoutFilter_SetGraphBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGraphBounds(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetGraphBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraphLayoutFilter_SetGraphBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGraphLayoutFilter_SetGraphBounds_s1(self, args);
    case 1:
      return PyvtkGraphLayoutFilter_SetGraphBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBounds");
  return nullptr;
}


static PyObject *
PyvtkGraphLayoutFilter_GetGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGraphBounds() :
      op->vtkGraphLayoutFilter::GetGraphBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticBoundsComputation(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetAutomaticBoundsComputation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticBoundsComputation() :
      op->vtkGraphLayoutFilter::GetAutomaticBoundsComputation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_AutomaticBoundsComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBoundsComputationOn();
    }
    else
    {
      op->vtkGraphLayoutFilter::AutomaticBoundsComputationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_AutomaticBoundsComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBoundsComputationOff();
    }
    else
    {
      op->vtkGraphLayoutFilter::AutomaticBoundsComputationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfIterations(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetMaxNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMinValue() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMaxValue() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterations() :
      op->vtkGraphLayoutFilter::GetMaxNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoolDownRate(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetCoolDownRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMinValue() :
      op->vtkGraphLayoutFilter::GetCoolDownRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMaxValue() :
      op->vtkGraphLayoutFilter::GetCoolDownRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRate() :
      op->vtkGraphLayoutFilter::GetCoolDownRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_SetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreeDimensionalLayout(temp0);
    }
    else
    {
      op->vtkGraphLayoutFilter::SetThreeDimensionalLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_GetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThreeDimensionalLayout() :
      op->vtkGraphLayoutFilter::GetThreeDimensionalLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLayoutOn();
    }
    else
    {
      op->vtkGraphLayoutFilter::ThreeDimensionalLayoutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutFilter *op = static_cast<vtkGraphLayoutFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLayoutOff();
    }
    else
    {
      op->vtkGraphLayoutFilter::ThreeDimensionalLayoutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphLayoutFilter_Methods[] = {
  {"IsTypeOf", PyvtkGraphLayoutFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphLayoutFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphLayoutFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphLayoutFilter\nC++: static vtkGraphLayoutFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphLayoutFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphLayoutFilter\nC++: vtkGraphLayoutFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphLayoutFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphLayoutFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGraphBounds", PyvtkGraphLayoutFilter_SetGraphBounds, METH_VARARGS,
   "SetGraphBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetGraphBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetGraphBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetGraphBounds(const double _arg[6])\n\nSet / get the region in space in which to place the final graph.\nThe GraphBounds only affects the results if\nAutomaticBoundsComputation is off.\n"},
  {"GetGraphBounds", PyvtkGraphLayoutFilter_GetGraphBounds, METH_VARARGS,
   "GetGraphBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetGraphBounds()\n\n"},
  {"SetAutomaticBoundsComputation", PyvtkGraphLayoutFilter_SetAutomaticBoundsComputation, METH_VARARGS,
   "SetAutomaticBoundsComputation(self, _arg:int) -> None\nC++: virtual void SetAutomaticBoundsComputation(vtkTypeBool _arg)\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {"GetAutomaticBoundsComputation", PyvtkGraphLayoutFilter_GetAutomaticBoundsComputation, METH_VARARGS,
   "GetAutomaticBoundsComputation(self) -> int\nC++: virtual vtkTypeBool GetAutomaticBoundsComputation()\n\n"},
  {"AutomaticBoundsComputationOn", PyvtkGraphLayoutFilter_AutomaticBoundsComputationOn, METH_VARARGS,
   "AutomaticBoundsComputationOn(self) -> None\nC++: virtual void AutomaticBoundsComputationOn()\n\n"},
  {"AutomaticBoundsComputationOff", PyvtkGraphLayoutFilter_AutomaticBoundsComputationOff, METH_VARARGS,
   "AutomaticBoundsComputationOff(self) -> None\nC++: virtual void AutomaticBoundsComputationOff()\n\n"},
  {"SetMaxNumberOfIterations", PyvtkGraphLayoutFilter_SetMaxNumberOfIterations, METH_VARARGS,
   "SetMaxNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetMaxNumberOfIterations(int _arg)\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified.\n"},
  {"GetMaxNumberOfIterationsMinValue", PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMinValue, METH_VARARGS,
   "GetMaxNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetMaxNumberOfIterationsMinValue()\n\n"},
  {"GetMaxNumberOfIterationsMaxValue", PyvtkGraphLayoutFilter_GetMaxNumberOfIterationsMaxValue, METH_VARARGS,
   "GetMaxNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetMaxNumberOfIterationsMaxValue()\n\n"},
  {"GetMaxNumberOfIterations", PyvtkGraphLayoutFilter_GetMaxNumberOfIterations, METH_VARARGS,
   "GetMaxNumberOfIterations(self) -> int\nC++: virtual int GetMaxNumberOfIterations()\n\n"},
  {"SetCoolDownRate", PyvtkGraphLayoutFilter_SetCoolDownRate, METH_VARARGS,
   "SetCoolDownRate(self, _arg:float) -> None\nC++: virtual void SetCoolDownRate(double _arg)\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {"GetCoolDownRateMinValue", PyvtkGraphLayoutFilter_GetCoolDownRateMinValue, METH_VARARGS,
   "GetCoolDownRateMinValue(self) -> float\nC++: virtual double GetCoolDownRateMinValue()\n\n"},
  {"GetCoolDownRateMaxValue", PyvtkGraphLayoutFilter_GetCoolDownRateMaxValue, METH_VARARGS,
   "GetCoolDownRateMaxValue(self) -> float\nC++: virtual double GetCoolDownRateMaxValue()\n\n"},
  {"GetCoolDownRate", PyvtkGraphLayoutFilter_GetCoolDownRate, METH_VARARGS,
   "GetCoolDownRate(self) -> float\nC++: virtual double GetCoolDownRate()\n\n"},
  {"SetThreeDimensionalLayout", PyvtkGraphLayoutFilter_SetThreeDimensionalLayout, METH_VARARGS,
   "SetThreeDimensionalLayout(self, _arg:int) -> None\nC++: virtual void SetThreeDimensionalLayout(vtkTypeBool _arg)\n\n"},
  {"GetThreeDimensionalLayout", PyvtkGraphLayoutFilter_GetThreeDimensionalLayout, METH_VARARGS,
   "GetThreeDimensionalLayout(self) -> int\nC++: virtual vtkTypeBool GetThreeDimensionalLayout()\n\n"},
  {"ThreeDimensionalLayoutOn", PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOn, METH_VARARGS,
   "ThreeDimensionalLayoutOn(self) -> None\nC++: virtual void ThreeDimensionalLayoutOn()\n\n"},
  {"ThreeDimensionalLayoutOff", PyvtkGraphLayoutFilter_ThreeDimensionalLayoutOff, METH_VARARGS,
   "ThreeDimensionalLayoutOff(self) -> None\nC++: virtual void ThreeDimensionalLayoutOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGraphLayoutFilter_Doc =
  "vtkGraphLayoutFilter - nice layout of undirected graphs in 3D\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGraphLayoutFilter will reposition a network of nodes, connected by\n"
  "lines or polylines, into a more pleasing arrangement. The class\n"
  "implements a simple force-directed placement algorithm (Fruchterman &\n"
  "Reingold \"Graph Drawing by Force-directed Placement\"\n"
  "Software-Practice and Experience 21(11) 1991).\n\n"
  "The input to the filter is a vtkPolyData representing the undirected\n"
  "graphs. A graph is represented by a set of polylines and/or lines.\n"
  "The output is also a vtkPolyData, where the point positions have been\n"
  "modified. To use the filter, specify whether you wish the layout to\n"
  "occur in 2D or 3D; the bounds in which the graph should lie (note\n"
  "that you can just use automatic bounds computation); and modify the\n"
  "cool down rate (controls the final process of simulated annealing).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphLayoutFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkGraphLayoutFilter", // tp_name
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
  PyvtkGraphLayoutFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphLayoutFilter_StaticNew()
{
  return vtkGraphLayoutFilter::New();
}

PyObject *PyvtkGraphLayoutFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphLayoutFilter_Type, PyvtkGraphLayoutFilter_Methods,
    "vtkGraphLayoutFilter",
 &PyvtkGraphLayoutFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphLayoutFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphLayoutFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphLayoutFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

