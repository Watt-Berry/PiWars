// python wrapper for vtkExtractSelectedArraysOverTime
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractSelectedArraysOverTime.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelectedArraysOverTime(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractSelectedArraysOverTime_ClassNew(); }


static PyObject *
PyvtkExtractSelectedArraysOverTime_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectedArraysOverTime::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedArraysOverTime::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectedArraysOverTime *tempr = vtkExtractSelectedArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectedArraysOverTime *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedArraysOverTime::NewInstance());

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
PyvtkExtractSelectedArraysOverTime_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractSelectedArraysOverTime::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractSelectedArraysOverTime::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTimeSteps() :
      op->vtkExtractSelectedArraysOverTime::GetNumberOfTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

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
      op->vtkExtractSelectedArraysOverTime::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_SetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  vtkExtractSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtractSelection"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionExtractor(temp0);
    }
    else
    {
      op->vtkExtractSelectedArraysOverTime::SetSelectionExtractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_GetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelection *tempr = (ap.IsBound() ?
      op->GetSelectionExtractor() :
      op->vtkExtractSelectedArraysOverTime::GetSelectionExtractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_SetReportStatisticsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportStatisticsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReportStatisticsOnly(temp0);
    }
    else
    {
      op->vtkExtractSelectedArraysOverTime::SetReportStatisticsOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_GetReportStatisticsOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportStatisticsOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReportStatisticsOnly() :
      op->vtkExtractSelectedArraysOverTime::GetReportStatisticsOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_ReportStatisticsOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportStatisticsOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReportStatisticsOnlyOn();
    }
    else
    {
      op->vtkExtractSelectedArraysOverTime::ReportStatisticsOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedArraysOverTime_ReportStatisticsOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportStatisticsOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedArraysOverTime *op = static_cast<vtkExtractSelectedArraysOverTime *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReportStatisticsOnlyOff();
    }
    else
    {
      op->vtkExtractSelectedArraysOverTime::ReportStatisticsOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSelectedArraysOverTime_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectedArraysOverTime_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectedArraysOverTime_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectedArraysOverTime_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractSelectedArraysOverTime\nC++: static vtkExtractSelectedArraysOverTime *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectedArraysOverTime_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractSelectedArraysOverTime\nC++: vtkExtractSelectedArraysOverTime *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractSelectedArraysOverTime_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractSelectedArraysOverTime_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfTimeSteps", PyvtkExtractSelectedArraysOverTime_GetNumberOfTimeSteps, METH_VARARGS,
   "GetNumberOfTimeSteps(self) -> int\nC++: virtual int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {"SetSelectionConnection", PyvtkExtractSelectedArraysOverTime_SetSelectionConnection, METH_VARARGS,
   "SetSelectionConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nConvenience method to specify the selection connection (2nd input\nport)\n"},
  {"SetSelectionExtractor", PyvtkExtractSelectedArraysOverTime_SetSelectionExtractor, METH_VARARGS,
   "SetSelectionExtractor(self, __a:vtkExtractSelection) -> None\nC++: virtual void SetSelectionExtractor(vtkExtractSelection *)\n\nSet/get the vtkExtractSelection instance used to obtain array\nvalues at each time step. By default, vtkExtractSelection is\nused.\n"},
  {"GetSelectionExtractor", PyvtkExtractSelectedArraysOverTime_GetSelectionExtractor, METH_VARARGS,
   "GetSelectionExtractor(self) -> vtkExtractSelection\nC++: vtkExtractSelection *GetSelectionExtractor()\n\n"},
  {"SetReportStatisticsOnly", PyvtkExtractSelectedArraysOverTime_SetReportStatisticsOnly, METH_VARARGS,
   "SetReportStatisticsOnly(self, _arg:bool) -> None\nC++: virtual void SetReportStatisticsOnly(bool _arg)\n\nInstead of breaking a selection into a separate time-history\ntable for each (block,ID)-tuple, you may call\nReportStatisticsOnlyOn(). Then a single table per block of the\ninput dataset will report the minimum, maximum, quartiles, and\n(for numerical arrays) the average and standard deviation of the\nselection over time.\n\n* The default is off to preserve backwards-compatibility.\n"},
  {"GetReportStatisticsOnly", PyvtkExtractSelectedArraysOverTime_GetReportStatisticsOnly, METH_VARARGS,
   "GetReportStatisticsOnly(self) -> bool\nC++: virtual bool GetReportStatisticsOnly()\n\n"},
  {"ReportStatisticsOnlyOn", PyvtkExtractSelectedArraysOverTime_ReportStatisticsOnlyOn, METH_VARARGS,
   "ReportStatisticsOnlyOn(self) -> None\nC++: virtual void ReportStatisticsOnlyOn()\n\n"},
  {"ReportStatisticsOnlyOff", PyvtkExtractSelectedArraysOverTime_ReportStatisticsOnlyOff, METH_VARARGS,
   "ReportStatisticsOnlyOff(self) -> None\nC++: virtual void ReportStatisticsOnlyOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractSelectedArraysOverTime_Doc =
  "vtkExtractSelectedArraysOverTime - extracts a selection over time.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkExtractSelectedArraysOverTime extracts a selection over time. This\n"
  "is combination of two filters, an vtkExtractSelection filter followed\n"
  "by vtkExtractDataArraysOverTime, to do its work.\n\n"
  "The filter has two inputs - 0th input is the temporal data to\n"
  "extracted, while the second input is the selection (vtkSelection) to\n"
  "extract. Based on the type of the selection, this filter setups up\n"
  "properties on the internal vtkExtractDataArraysOverTime instance to\n"
  "produce a reasonable extract.\n\n"
  "The output is a vtkMultiBlockDataSet. See\n"
  "vtkExtractDataArraysOverTime for details on how the output is\n"
  "structured.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractSelectedArraysOverTime_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractSelectedArraysOverTime", // tp_name
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
  PyvtkExtractSelectedArraysOverTime_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelectedArraysOverTime_StaticNew()
{
  return vtkExtractSelectedArraysOverTime::New();
}

PyObject *PyvtkExtractSelectedArraysOverTime_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractSelectedArraysOverTime_Type, PyvtkExtractSelectedArraysOverTime_Methods,
    "vtkExtractSelectedArraysOverTime",
 &PyvtkExtractSelectedArraysOverTime_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectedArraysOverTime(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectedArraysOverTime_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectedArraysOverTime", o) != 0)
  {
    Py_DECREF(o);
  }

}

