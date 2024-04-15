// python wrapper for vtkTemporalShiftScale
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTemporalShiftScale.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalShiftScale(PyObject *dict); }
extern "C" { PyObject *PyvtkTemporalShiftScale_ClassNew(); }


static PyObject *
PyvtkTemporalShiftScale_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalShiftScale::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalShiftScale::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalShiftScale *tempr = vtkTemporalShiftScale::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalShiftScale *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalShiftScale::NewInstance());

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
PyvtkTemporalShiftScale_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTemporalShiftScale::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTemporalShiftScale::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetPreShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreShift(temp0);
    }
    else
    {
      op->vtkTemporalShiftScale::SetPreShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetPreShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPreShift() :
      op->vtkTemporalShiftScale::GetPreShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetPostShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPostShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPostShift(temp0);
    }
    else
    {
      op->vtkTemporalShiftScale::SetPostShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetPostShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPostShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPostShift() :
      op->vtkTemporalShiftScale::GetPostShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkTemporalShiftScale::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkTemporalShiftScale::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetPeriodic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPeriodic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPeriodic(temp0);
    }
    else
    {
      op->vtkTemporalShiftScale::SetPeriodic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetPeriodic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriodic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPeriodic() :
      op->vtkTemporalShiftScale::GetPeriodic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_PeriodicOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PeriodicOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PeriodicOn();
    }
    else
    {
      op->vtkTemporalShiftScale::PeriodicOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_PeriodicOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PeriodicOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PeriodicOff();
    }
    else
    {
      op->vtkTemporalShiftScale::PeriodicOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetPeriodicEndCorrection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPeriodicEndCorrection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPeriodicEndCorrection(temp0);
    }
    else
    {
      op->vtkTemporalShiftScale::SetPeriodicEndCorrection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetPeriodicEndCorrection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriodicEndCorrection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPeriodicEndCorrection() :
      op->vtkTemporalShiftScale::GetPeriodicEndCorrection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_PeriodicEndCorrectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PeriodicEndCorrectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PeriodicEndCorrectionOn();
    }
    else
    {
      op->vtkTemporalShiftScale::PeriodicEndCorrectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_PeriodicEndCorrectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PeriodicEndCorrectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PeriodicEndCorrectionOff();
    }
    else
    {
      op->vtkTemporalShiftScale::PeriodicEndCorrectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_SetMaximumNumberOfPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfPeriods(temp0);
    }
    else
    {
      op->vtkTemporalShiftScale::SetMaximumNumberOfPeriods(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalShiftScale_GetMaximumNumberOfPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalShiftScale *op = static_cast<vtkTemporalShiftScale *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfPeriods() :
      op->vtkTemporalShiftScale::GetMaximumNumberOfPeriods());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalShiftScale_Methods[] = {
  {"IsTypeOf", PyvtkTemporalShiftScale_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalShiftScale_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalShiftScale_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTemporalShiftScale\nC++: static vtkTemporalShiftScale *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalShiftScale_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTemporalShiftScale\nC++: vtkTemporalShiftScale *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTemporalShiftScale_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTemporalShiftScale_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPreShift", PyvtkTemporalShiftScale_SetPreShift, METH_VARARGS,
   "SetPreShift(self, _arg:float) -> None\nC++: virtual void SetPreShift(double _arg)\n\nApply a translation to the data before scaling. To convert\nT{5,100} to T{0,1} use Preshift=-5, Scale=1/95, PostShift=0 To\nconvert T{5,105} to T{5,10} use Preshift=-5, Scale=5/100,\nPostShift=5\n"},
  {"GetPreShift", PyvtkTemporalShiftScale_GetPreShift, METH_VARARGS,
   "GetPreShift(self) -> float\nC++: virtual double GetPreShift()\n\n"},
  {"SetPostShift", PyvtkTemporalShiftScale_SetPostShift, METH_VARARGS,
   "SetPostShift(self, _arg:float) -> None\nC++: virtual void SetPostShift(double _arg)\n\nApply a translation to the time\n"},
  {"GetPostShift", PyvtkTemporalShiftScale_GetPostShift, METH_VARARGS,
   "GetPostShift(self) -> float\nC++: virtual double GetPostShift()\n\n"},
  {"SetScale", PyvtkTemporalShiftScale_SetScale, METH_VARARGS,
   "SetScale(self, _arg:float) -> None\nC++: virtual void SetScale(double _arg)\n\nApply a scale to the time.\n"},
  {"GetScale", PyvtkTemporalShiftScale_GetScale, METH_VARARGS,
   "GetScale(self) -> float\nC++: virtual double GetScale()\n\n"},
  {"SetPeriodic", PyvtkTemporalShiftScale_SetPeriodic, METH_VARARGS,
   "SetPeriodic(self, _arg:int) -> None\nC++: virtual void SetPeriodic(vtkTypeBool _arg)\n\nIf Periodic is true, requests for time will be wrapped around so\nthat the source appears to be a periodic time source. If data\nexists for times {0,N-1}, setting periodic to true will cause\ntime 0 to be produced when time N, 2N, 2N etc is requested. This\neffectively gives the source the ability to generate time data\nindefinitely in a loop. When combined with Shift/Scale, the time\nbecomes periodic in the shifted and scaled time frame of\nreference. Note: Since the input time may not start at zero, the\nwrapping of time from the end of one period to the start of the\nnext, will subtract the initial time - a source with T{5..6}\nrepeated periodically will have output time {5..6..7..8} etc.\n"},
  {"GetPeriodic", PyvtkTemporalShiftScale_GetPeriodic, METH_VARARGS,
   "GetPeriodic(self) -> int\nC++: virtual vtkTypeBool GetPeriodic()\n\n"},
  {"PeriodicOn", PyvtkTemporalShiftScale_PeriodicOn, METH_VARARGS,
   "PeriodicOn(self) -> None\nC++: virtual void PeriodicOn()\n\n"},
  {"PeriodicOff", PyvtkTemporalShiftScale_PeriodicOff, METH_VARARGS,
   "PeriodicOff(self) -> None\nC++: virtual void PeriodicOff()\n\n"},
  {"SetPeriodicEndCorrection", PyvtkTemporalShiftScale_SetPeriodicEndCorrection, METH_VARARGS,
   "SetPeriodicEndCorrection(self, _arg:int) -> None\nC++: virtual void SetPeriodicEndCorrection(vtkTypeBool _arg)\n\nif Periodic time is enabled, this flag determines if the last\ntime step is the same as the first. If PeriodicEndCorrection is\ntrue, then it is assumed that the input data goes from 0-1 (or\nwhatever scaled/shifted actual time) and time 1 is the same as\ntime 0 so that steps will be 0,1,2,3...N,1,2,3...N,1,2,3 where\nstep N is the same as 0 and step 0 is not repeated. When this\nflag is false the data is assumed to be literal and output is of\nthe form 0,1,2,3...N,0,1,2,3... By default this flag is ON\n"},
  {"GetPeriodicEndCorrection", PyvtkTemporalShiftScale_GetPeriodicEndCorrection, METH_VARARGS,
   "GetPeriodicEndCorrection(self) -> int\nC++: virtual vtkTypeBool GetPeriodicEndCorrection()\n\n"},
  {"PeriodicEndCorrectionOn", PyvtkTemporalShiftScale_PeriodicEndCorrectionOn, METH_VARARGS,
   "PeriodicEndCorrectionOn(self) -> None\nC++: virtual void PeriodicEndCorrectionOn()\n\n"},
  {"PeriodicEndCorrectionOff", PyvtkTemporalShiftScale_PeriodicEndCorrectionOff, METH_VARARGS,
   "PeriodicEndCorrectionOff(self) -> None\nC++: virtual void PeriodicEndCorrectionOff()\n\n"},
  {"SetMaximumNumberOfPeriods", PyvtkTemporalShiftScale_SetMaximumNumberOfPeriods, METH_VARARGS,
   "SetMaximumNumberOfPeriods(self, _arg:float) -> None\nC++: virtual void SetMaximumNumberOfPeriods(double _arg)\n\nif Periodic time is enabled, this controls how many time periods\ntime is reported for. A filter cannot output an infinite number\nof time steps and therefore a finite number of periods is\ngenerated when reporting time.\n"},
  {"GetMaximumNumberOfPeriods", PyvtkTemporalShiftScale_GetMaximumNumberOfPeriods, METH_VARARGS,
   "GetMaximumNumberOfPeriods(self) -> float\nC++: virtual double GetMaximumNumberOfPeriods()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTemporalShiftScale_Doc =
  "vtkTemporalShiftScale - modify the time range/steps of temporal data\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkTemporalShiftScale  modify the time range or time steps of the\n"
  "data without changing the data itself. The data is not resampled by\n"
  "this filter, only the information accompanying the data is modified.\n\n"
  "@par Thanks: Ken Martin (Kitware) and John Bidiscombe of CSCS - Swiss\n"
  "National Supercomputing Centre for creating and contributing this\n"
  "class. For related material, please refer to : John Biddiscombe, Berk\n"
  "Geveci, Ken Martin, Kenneth Moreland, David Thompson, \"Time Dependent Processing in a Parallel Pipeline\n"
  "Architecture\", IEEE Visualization 2007.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalShiftScale_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkTemporalShiftScale", // tp_name
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
  PyvtkTemporalShiftScale_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalShiftScale_StaticNew()
{
  return vtkTemporalShiftScale::New();
}

PyObject *PyvtkTemporalShiftScale_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTemporalShiftScale_Type, PyvtkTemporalShiftScale_Methods,
    "vtkTemporalShiftScale",
 &PyvtkTemporalShiftScale_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalShiftScale(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalShiftScale_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalShiftScale", o) != 0)
  {
    Py_DECREF(o);
  }

}

