// python wrapper for vtkTemporalPathLineFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTemporalPathLineFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalPathLineFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkTemporalPathLineFilter_ClassNew(); }


static PyObject *
PyvtkTemporalPathLineFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalPathLineFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalPathLineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalPathLineFilter *tempr = vtkTemporalPathLineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalPathLineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalPathLineFilter::NewInstance());

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
PyvtkTemporalPathLineFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTemporalPathLineFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTemporalPathLineFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskPoints(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetMaskPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetMaskPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskPoints() :
      op->vtkTemporalPathLineFilter::GetMaskPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetMaxTrackLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxTrackLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxTrackLength(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetMaxTrackLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetMaxTrackLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxTrackLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxTrackLength() :
      op->vtkTemporalPathLineFilter::GetMaxTrackLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetIdChannelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdChannelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdChannelArray(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetIdChannelArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetIdChannelArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdChannelArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetIdChannelArray() :
      op->vtkTemporalPathLineFilter::GetIdChannelArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetMaxStepDistance(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetMaxStepDistance(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMaxStepDistance(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetMaxStepDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTemporalPathLineFilter_SetMaxStepDistance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTemporalPathLineFilter_SetMaxStepDistance_s1(self, args);
    case 1:
      return PyvtkTemporalPathLineFilter_SetMaxStepDistance_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxStepDistance");
  return nullptr;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetMaxStepDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxStepDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxStepDistance() :
      op->vtkTemporalPathLineFilter::GetMaxStepDistance());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetKeepDeadTrails(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepDeadTrails");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeepDeadTrails(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetKeepDeadTrails(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetKeepDeadTrails(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepDeadTrails");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetKeepDeadTrails() :
      op->vtkTemporalPathLineFilter::GetKeepDeadTrails());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetBackwardTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackwardTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackwardTime(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetBackwardTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_GetBackwardTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackwardTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBackwardTime() :
      op->vtkTemporalPathLineFilter::GetBackwardTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_Flush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Flush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Flush();
    }
    else
    {
      op->vtkTemporalPathLineFilter::Flush();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionConnection(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalPathLineFilter_SetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalPathLineFilter *op = static_cast<vtkTemporalPathLineFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionData(temp0);
    }
    else
    {
      op->vtkTemporalPathLineFilter::SetSelectionData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalPathLineFilter_Methods[] = {
  {"IsTypeOf", PyvtkTemporalPathLineFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalPathLineFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalPathLineFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTemporalPathLineFilter\nC++: static vtkTemporalPathLineFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalPathLineFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTemporalPathLineFilter\nC++: vtkTemporalPathLineFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTemporalPathLineFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTemporalPathLineFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMaskPoints", PyvtkTemporalPathLineFilter_SetMaskPoints, METH_VARARGS,
   "SetMaskPoints(self, _arg:int) -> None\nC++: virtual void SetMaskPoints(int _arg)\n\nSet the number of particles to track as a ratio of the input\nexample: setting MaskPoints to 10 will track every 10th point\n"},
  {"GetMaskPoints", PyvtkTemporalPathLineFilter_GetMaskPoints, METH_VARARGS,
   "GetMaskPoints(self) -> int\nC++: virtual int GetMaskPoints()\n\n"},
  {"SetMaxTrackLength", PyvtkTemporalPathLineFilter_SetMaxTrackLength, METH_VARARGS,
   "SetMaxTrackLength(self, _arg:int) -> None\nC++: virtual void SetMaxTrackLength(unsigned int _arg)\n\nIf the Particles being traced animate for a long time, the trails\nor traces will become long and stringy. Setting the\nMaxTraceTimeLength will limit how much of the trace is displayed.\nTracks longer then the Max will disappear and the trace will\nappear like a snake of fixed length which progresses as the\nparticle moves\n"},
  {"GetMaxTrackLength", PyvtkTemporalPathLineFilter_GetMaxTrackLength, METH_VARARGS,
   "GetMaxTrackLength(self) -> int\nC++: virtual unsigned int GetMaxTrackLength()\n\n"},
  {"SetIdChannelArray", PyvtkTemporalPathLineFilter_SetIdChannelArray, METH_VARARGS,
   "SetIdChannelArray(self, _arg:str) -> None\nC++: virtual void SetIdChannelArray(const char *_arg)\n\nSpecify the name of a scalar array which will be used to fetch\nthe index of each point. This is necessary only if the particles\nchange position (Id order) on each time step. The Id can be used\nto identify particles at each step and hence track them properly.\nIf this array is nullptr, the global point ids are used.  If an\nId array cannot otherwise be found, the point index is used as\nthe ID.\n"},
  {"GetIdChannelArray", PyvtkTemporalPathLineFilter_GetIdChannelArray, METH_VARARGS,
   "GetIdChannelArray(self) -> str\nC++: virtual char *GetIdChannelArray()\n\n"},
  {"SetMaxStepDistance", PyvtkTemporalPathLineFilter_SetMaxStepDistance, METH_VARARGS,
   "SetMaxStepDistance(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetMaxStepDistance(double _arg1, double _arg2,\n    double _arg3)\nSetMaxStepDistance(self, _arg:(float, float, float)) -> None\nC++: virtual void SetMaxStepDistance(const double _arg[3])\n\nIf a particle disappears from one end of a simulation and\nreappears on the other side, the track left will be\nunrepresentative. Set a MaxStepDistance{x,y,z} which acts as a\nthreshold above which if a step occurs larger than the value (for\nthe dimension), the track will be dropped and restarted after the\nstep. (ie the part before the wrap around will be dropped and the\nnewer part kept).\n"},
  {"GetMaxStepDistance", PyvtkTemporalPathLineFilter_GetMaxStepDistance, METH_VARARGS,
   "GetMaxStepDistance(self) -> (float, float, float)\nC++: virtual double *GetMaxStepDistance()\n\n"},
  {"SetKeepDeadTrails", PyvtkTemporalPathLineFilter_SetKeepDeadTrails, METH_VARARGS,
   "SetKeepDeadTrails(self, _arg:bool) -> None\nC++: virtual void SetKeepDeadTrails(bool _arg)\n\nWhen a particle 'disappears', the trail belonging to it is\nremoved from the list. When this flag is enabled, dead trails\nwill persist until the next time the list is cleared. Use\ncarefully as it may cause excessive memory consumption if left on\nby mistake.\n"},
  {"GetKeepDeadTrails", PyvtkTemporalPathLineFilter_GetKeepDeadTrails, METH_VARARGS,
   "GetKeepDeadTrails(self) -> bool\nC++: virtual bool GetKeepDeadTrails()\n\n"},
  {"SetBackwardTime", PyvtkTemporalPathLineFilter_SetBackwardTime, METH_VARARGS,
   "SetBackwardTime(self, backward:bool) -> None\nC++: virtual void SetBackwardTime(bool backward)\n\nSet / Get if the filter is configured to work in backward time\ngoing mode. Default is false (time should go forward).\n\nTime going forward means that for each call to RequestData, then\nthe time step from vtkDataObject::DATA_TIME_STEP() is greater\nthan the time step from the previous call. Time going backward\nmeans that the current time step is smaller than the previous\none.\n"},
  {"GetBackwardTime", PyvtkTemporalPathLineFilter_GetBackwardTime, METH_VARARGS,
   "GetBackwardTime(self) -> bool\nC++: virtual bool GetBackwardTime()\n\n"},
  {"Flush", PyvtkTemporalPathLineFilter_Flush, METH_VARARGS,
   "Flush(self) -> None\nC++: void Flush()\n\nFlush will wipe any existing data so that traces can be restarted\nfrom whatever time step is next supplied.\n"},
  {"SetSelectionConnection", PyvtkTemporalPathLineFilter_SetSelectionConnection, METH_VARARGS,
   "SetSelectionConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nSet a second input which is a selection. Particles with the same\nId in the selection as the primary input will be chosen for\npathlines Note that you must have the same IdChannelArray in the\nselection as the input\n"},
  {"SetSelectionData", PyvtkTemporalPathLineFilter_SetSelectionData, METH_VARARGS,
   "SetSelectionData(self, input:vtkDataSet) -> None\nC++: void SetSelectionData(vtkDataSet *input)\n\nSet a second input which is a selection. Particles with the same\nId in the selection as the primary input will be chosen for\npathlines Note that you must have the same IdChannelArray in the\nselection as the input\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTemporalPathLineFilter_Doc =
  "vtkTemporalPathLineFilter - Generate a Polydata Pointset from any\nDataset.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkTemporalPathLineFilter takes any dataset as input, it extracts the\n"
  "point locations of all cells over time to build up a polyline trail.\n"
  "The point number (index) is used as the 'key' if the points are\n"
  "randomly changing their respective order in the points list, then you\n"
  "should specify a scalar that represents the unique ID. This is\n"
  "intended to handle the output of a filter such as the\n"
  "vtkParticleTracer.\n\n"
  "@sa\n"
  "vtkParticleTracer\n\n"
  "@par Thanks: John Bidiscombe of CSCS - Swiss National Supercomputing\n"
  "Centre for creating and contributing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalPathLineFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkTemporalPathLineFilter", // tp_name
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
  PyvtkTemporalPathLineFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalPathLineFilter_StaticNew()
{
  return vtkTemporalPathLineFilter::New();
}

PyObject *PyvtkTemporalPathLineFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTemporalPathLineFilter_Type, PyvtkTemporalPathLineFilter_Methods,
    "vtkTemporalPathLineFilter",
 &PyvtkTemporalPathLineFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalPathLineFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalPathLineFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalPathLineFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

