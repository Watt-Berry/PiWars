// python wrapper for vtkTemporalStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTemporalStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalStatistics(PyObject *dict); }
extern "C" { PyObject *PyvtkTemporalStatistics_ClassNew(); }


static PyObject *
PyvtkTemporalStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalStatistics *tempr = vtkTemporalStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalStatistics::NewInstance());

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
PyvtkTemporalStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTemporalStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTemporalStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeAverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeAverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeAverage() :
      op->vtkTemporalStatistics::GetComputeAverage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeAverage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeAverage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeAverage(temp0);
    }
    else
    {
      op->vtkTemporalStatistics::SetComputeAverage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeAverageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAverageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAverageOn();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeAverageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeAverageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAverageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAverageOff();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeAverageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeMinimum() :
      op->vtkTemporalStatistics::GetComputeMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeMinimum(temp0);
    }
    else
    {
      op->vtkTemporalStatistics::SetComputeMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMinimumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinimumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMinimumOn();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeMinimumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMinimumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinimumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMinimumOff();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeMinimumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeMaximum() :
      op->vtkTemporalStatistics::GetComputeMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeMaximum(temp0);
    }
    else
    {
      op->vtkTemporalStatistics::SetComputeMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMaximumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaximumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMaximumOn();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeMaximumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeMaximumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaximumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMaximumOff();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeMaximumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_GetComputeStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeStandardDeviation() :
      op->vtkTemporalStatistics::GetComputeStandardDeviation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_SetComputeStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeStandardDeviation(temp0);
    }
    else
    {
      op->vtkTemporalStatistics::SetComputeStandardDeviation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeStandardDeviationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStandardDeviationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeStandardDeviationOn();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeStandardDeviationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalStatistics_ComputeStandardDeviationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStandardDeviationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalStatistics *op = static_cast<vtkTemporalStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeStandardDeviationOff();
    }
    else
    {
      op->vtkTemporalStatistics::ComputeStandardDeviationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalStatistics_Methods[] = {
  {"IsTypeOf", PyvtkTemporalStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTemporalStatistics\nC++: static vtkTemporalStatistics *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTemporalStatistics\nC++: vtkTemporalStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTemporalStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTemporalStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetComputeAverage", PyvtkTemporalStatistics_GetComputeAverage, METH_VARARGS,
   "GetComputeAverage(self) -> int\nC++: virtual vtkTypeBool GetComputeAverage()\n\nTurn on/off the computation of the average values over time.  On\nby default.  The resulting array names have \"_average\" appended\nto them.\n"},
  {"SetComputeAverage", PyvtkTemporalStatistics_SetComputeAverage, METH_VARARGS,
   "SetComputeAverage(self, _arg:int) -> None\nC++: virtual void SetComputeAverage(vtkTypeBool _arg)\n\n"},
  {"ComputeAverageOn", PyvtkTemporalStatistics_ComputeAverageOn, METH_VARARGS,
   "ComputeAverageOn(self) -> None\nC++: virtual void ComputeAverageOn()\n\n"},
  {"ComputeAverageOff", PyvtkTemporalStatistics_ComputeAverageOff, METH_VARARGS,
   "ComputeAverageOff(self) -> None\nC++: virtual void ComputeAverageOff()\n\n"},
  {"GetComputeMinimum", PyvtkTemporalStatistics_GetComputeMinimum, METH_VARARGS,
   "GetComputeMinimum(self) -> int\nC++: virtual vtkTypeBool GetComputeMinimum()\n\nTurn on/off the computation of the minimum values over time.  On\nby default.  The resulting array names have \"_minimum\" appended\nto them.\n"},
  {"SetComputeMinimum", PyvtkTemporalStatistics_SetComputeMinimum, METH_VARARGS,
   "SetComputeMinimum(self, _arg:int) -> None\nC++: virtual void SetComputeMinimum(vtkTypeBool _arg)\n\n"},
  {"ComputeMinimumOn", PyvtkTemporalStatistics_ComputeMinimumOn, METH_VARARGS,
   "ComputeMinimumOn(self) -> None\nC++: virtual void ComputeMinimumOn()\n\n"},
  {"ComputeMinimumOff", PyvtkTemporalStatistics_ComputeMinimumOff, METH_VARARGS,
   "ComputeMinimumOff(self) -> None\nC++: virtual void ComputeMinimumOff()\n\n"},
  {"GetComputeMaximum", PyvtkTemporalStatistics_GetComputeMaximum, METH_VARARGS,
   "GetComputeMaximum(self) -> int\nC++: virtual vtkTypeBool GetComputeMaximum()\n\nTurn on/off the computation of the maximum values over time.  On\nby default.  The resulting array names have \"_maximum\" appended\nto them.\n"},
  {"SetComputeMaximum", PyvtkTemporalStatistics_SetComputeMaximum, METH_VARARGS,
   "SetComputeMaximum(self, _arg:int) -> None\nC++: virtual void SetComputeMaximum(vtkTypeBool _arg)\n\n"},
  {"ComputeMaximumOn", PyvtkTemporalStatistics_ComputeMaximumOn, METH_VARARGS,
   "ComputeMaximumOn(self) -> None\nC++: virtual void ComputeMaximumOn()\n\n"},
  {"ComputeMaximumOff", PyvtkTemporalStatistics_ComputeMaximumOff, METH_VARARGS,
   "ComputeMaximumOff(self) -> None\nC++: virtual void ComputeMaximumOff()\n\n"},
  {"GetComputeStandardDeviation", PyvtkTemporalStatistics_GetComputeStandardDeviation, METH_VARARGS,
   "GetComputeStandardDeviation(self) -> int\nC++: virtual vtkTypeBool GetComputeStandardDeviation()\n\n"},
  {"SetComputeStandardDeviation", PyvtkTemporalStatistics_SetComputeStandardDeviation, METH_VARARGS,
   "SetComputeStandardDeviation(self, _arg:int) -> None\nC++: virtual void SetComputeStandardDeviation(vtkTypeBool _arg)\n\n"},
  {"ComputeStandardDeviationOn", PyvtkTemporalStatistics_ComputeStandardDeviationOn, METH_VARARGS,
   "ComputeStandardDeviationOn(self) -> None\nC++: virtual void ComputeStandardDeviationOn()\n\n"},
  {"ComputeStandardDeviationOff", PyvtkTemporalStatistics_ComputeStandardDeviationOff, METH_VARARGS,
   "ComputeStandardDeviationOff(self) -> None\nC++: virtual void ComputeStandardDeviationOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTemporalStatistics_Doc =
  "vtkTemporalStatistics - Compute statistics of point or cell data as\nit changes over time\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Given an input that changes over time, vtkTemporalStatistics looks at\n"
  "the data for each time step and computes some statistical information\n"
  "of how a point or cell variable changes over time.  For example,\n"
  "vtkTemporalStatistics can compute the average value of \"pressure\"\n"
  "over time of each point.\n\n"
  "Note that this filter will require the upstream filter to be run on\n"
  "every time step that it reports that it can compute.  This may be a\n"
  "time consuming operation.\n\n"
  "vtkTemporalStatistics ignores the temporal spacing.  Each timestep\n"
  "will be weighted the same regardless of how long of an interval it is\n"
  "to the next timestep.  Thus, the average statistic may be quite\n"
  "different from an integration of the variable if the time spacing\n"
  "varies.\n\n"
  "@par Thanks: This class was originally written by Kenneth Moreland\n"
  "(kmorel@sandia.gov) from Sandia National Laboratories.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkTemporalStatistics", // tp_name
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
  PyvtkTemporalStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalStatistics_StaticNew()
{
  return vtkTemporalStatistics::New();
}

PyObject *PyvtkTemporalStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTemporalStatistics_Type, PyvtkTemporalStatistics_Methods,
    "vtkTemporalStatistics",
 &PyvtkTemporalStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

