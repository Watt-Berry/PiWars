// python wrapper for vtkMultiCorrelativeStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMultiCorrelativeStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiCorrelativeStatistics(PyObject *dict); }
extern "C" { PyObject *PyvtkMultiCorrelativeStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkStatisticsAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStatisticsAlgorithm_ClassNew
#endif

static PyObject *
PyvtkMultiCorrelativeStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiCorrelativeStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiCorrelativeStatistics *tempr = vtkMultiCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiCorrelativeStatistics::NewInstance());

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
PyvtkMultiCorrelativeStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMultiCorrelativeStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMultiCorrelativeStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  vtkDataObjectCollection *temp0 = nullptr;
  vtkMultiBlockDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObjectCollection") &&
      ap.GetVTKObject(temp1, "vtkMultiBlockDataSet"))
  {
    if (ap.IsBound())
    {
      op->Aggregate(temp0, temp1);
    }
    else
    {
      op->vtkMultiCorrelativeStatistics::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_SetMedianAbsoluteDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMedianAbsoluteDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMedianAbsoluteDeviation(temp0);
    }
    else
    {
      op->vtkMultiCorrelativeStatistics::SetMedianAbsoluteDeviation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_GetMedianAbsoluteDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMedianAbsoluteDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMedianAbsoluteDeviation() :
      op->vtkMultiCorrelativeStatistics::GetMedianAbsoluteDeviation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_MedianAbsoluteDeviationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MedianAbsoluteDeviationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MedianAbsoluteDeviationOn();
    }
    else
    {
      op->vtkMultiCorrelativeStatistics::MedianAbsoluteDeviationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_MedianAbsoluteDeviationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MedianAbsoluteDeviationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MedianAbsoluteDeviationOff();
    }
    else
    {
      op->vtkMultiCorrelativeStatistics::MedianAbsoluteDeviationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_SetGhostsToSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostsToSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostsToSkip(temp0);
    }
    else
    {
      op->vtkMultiCorrelativeStatistics::SetGhostsToSkip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiCorrelativeStatistics_GetGhostsToSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostsToSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiCorrelativeStatistics *op = static_cast<vtkMultiCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetGhostsToSkip() :
      op->vtkMultiCorrelativeStatistics::GetGhostsToSkip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiCorrelativeStatistics_Methods[] = {
  {"IsTypeOf", PyvtkMultiCorrelativeStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiCorrelativeStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiCorrelativeStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMultiCorrelativeStatistics\nC++: static vtkMultiCorrelativeStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiCorrelativeStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMultiCorrelativeStatistics\nC++: vtkMultiCorrelativeStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMultiCorrelativeStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMultiCorrelativeStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Aggregate", PyvtkMultiCorrelativeStatistics_Aggregate, METH_VARARGS,
   "Aggregate(self, __a:vtkDataObjectCollection,\n    __b:vtkMultiBlockDataSet) -> None\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model\n"},
  {"SetMedianAbsoluteDeviation", PyvtkMultiCorrelativeStatistics_SetMedianAbsoluteDeviation, METH_VARARGS,
   "SetMedianAbsoluteDeviation(self, _arg:bool) -> None\nC++: virtual void SetMedianAbsoluteDeviation(bool _arg)\n\nIf set to true, the covariance matrix is replaced by the Median\nAbsolute Deviation matrix. Default is false.\n"},
  {"GetMedianAbsoluteDeviation", PyvtkMultiCorrelativeStatistics_GetMedianAbsoluteDeviation, METH_VARARGS,
   "GetMedianAbsoluteDeviation(self) -> bool\nC++: virtual bool GetMedianAbsoluteDeviation()\n\n"},
  {"MedianAbsoluteDeviationOn", PyvtkMultiCorrelativeStatistics_MedianAbsoluteDeviationOn, METH_VARARGS,
   "MedianAbsoluteDeviationOn(self) -> None\nC++: virtual void MedianAbsoluteDeviationOn()\n\n"},
  {"MedianAbsoluteDeviationOff", PyvtkMultiCorrelativeStatistics_MedianAbsoluteDeviationOff, METH_VARARGS,
   "MedianAbsoluteDeviationOff(self) -> None\nC++: virtual void MedianAbsoluteDeviationOff()\n\n"},
  {"SetGhostsToSkip", PyvtkMultiCorrelativeStatistics_SetGhostsToSkip, METH_VARARGS,
   "SetGhostsToSkip(self, _arg:int) -> None\nC++: virtual void SetGhostsToSkip(unsigned char _arg)\n\nIf there is a ghost array in the input, then ghosts matching\n`GhostsToSkip` mask will be skipped. It is set to 0xff by default\n(every ghosts types are skipped).\n\n@sa\nvtkDataSetAttributes vtkFieldData vtkPointData vtkCellData\n"},
  {"GetGhostsToSkip", PyvtkMultiCorrelativeStatistics_GetGhostsToSkip, METH_VARARGS,
   "GetGhostsToSkip(self) -> int\nC++: virtual unsigned char GetGhostsToSkip()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMultiCorrelativeStatistics_Doc =
  "vtkMultiCorrelativeStatistics - A class for multivariate linear\ncorrelation\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "Given a selection of sets of columns of interest, this class provides\n"
  "the following functionalities, depending on the operation in which it\n"
  "is executed:\n"
  "* Learn: calculates means, unbiased variance and covariance\n"
  "  estimators of column pairs coefficient. More precisely, Learn\n"
  "  calculates the averages and centered variance/covariance sums; if\n"
  "  finalize is set to true (default), the final statistics are\n"
  "  calculated. The output metadata on port OUTPUT_MODEL is a\n"
  "  multiblock dataset containing at a minimum one vtkTable holding the\n"
  "raw sums in a sparse matrix style. If finalize is true, then one\n"
  "  additional vtkTable will be present for each requested set of\n"
  "  column correlations. These additional tables contain column\n"
  "  averages, the upper triangular portion of the covariance matrix (in\n"
  "the upper right hand portion of the table) and the Cholesky\n"
  "  decomposition of the covariance matrix (in the lower portion of the\n"
  "table beneath the covariance triangle). The leftmost column will be a\n"
  "vector of column averages. The last entry in the column averages\n"
  "  vector is the number of samples. As an example, consider a request\n"
  "  for a 3-column correlation with columns named ColA, ColB, and ColC.\n"
  "  The resulting table will look like this:\n\n\n"
  "     Column  |Mean     |ColA     |ColB     |ColC\n"
  "--------+---------+---------+---------+--------- ColA    |avg(A)  \n"
  "    |cov(A,A) |cov(A,B) |cov(A,C) ColB    |avg(B)  \n"
  "    |chol(1,1)|cov(B,B) |cov(B,C) ColC    |avg(C)  \n"
  "    |chol(2,1)|chol(2,2)|cov(C,C)\n"
  "    Cholesky|length(A)|chol(3,1)|chol(3,2)|chol(3,3)  The mean point\n"
  "    and the covariance matrix can be replaced by the median point and\n"
  "the MAD matrix (Median Absolute Deviation) thanks to the\n"
  "    MedianAbsoluteDeviation boolean. In this mode, the resulting\n"
  "    table will look like this:\n\n\n"
  "     Column  |Mean     |ColA     |ColB     |ColC\n"
  "--------+---------+---------+---------+--------- ColA    |med(A)  \n"
  "    |MAD(A,A) |MAD(A,B) |MAD(A,C) ColB    |med(B)  \n"
  "    |chol(1,1)|MAD(B,B) |MAD(B,C) ColC    |med(C)  \n"
  "    |chol(2,1)|chol(2,2)|MAD(C,C)\n"
  "    Cholesky|length(A)|chol(3,1)|chol(3,2)|chol(3,3)  The Median\n"
  "    Absolute Deviation is known to be more robust than the\n"
  "    covariance. It is used in the robust PCA computation for\n"
  "    instance.\n"
  "* Assess: given a set of results matrices as specified above in input\n"
  "port INPUT_MODEL and tabular data on input port INPUT_DATA that\n"
  "  contains column names matching those of the tables on input port\n"
  "  INPUT_MODEL, the assess mode computes the relative deviation of\n"
  "  each observation in port INPUT_DATA's table according to the linear\n"
  "  correlations implied by each table in port INPUT_MODEL.\n\n"
  "@par Thanks: Thanks to Philippe Pebay, Jackson Mayo, and David\n"
  "Thompson of Sandia National Laboratories for implementing this class.\n"
  "Updated by Philippe Pebay, Kitware SAS 2012 Updated by Tristan\n"
  "Coulange and Joachim Pouderoux, Kitware SAS 2013\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiCorrelativeStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkMultiCorrelativeStatistics", // tp_name
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
  PyvtkMultiCorrelativeStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiCorrelativeStatistics_StaticNew()
{
  return vtkMultiCorrelativeStatistics::New();
}

PyObject *PyvtkMultiCorrelativeStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMultiCorrelativeStatistics_Type, PyvtkMultiCorrelativeStatistics_Methods,
    "vtkMultiCorrelativeStatistics",
 &PyvtkMultiCorrelativeStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkStatisticsAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiCorrelativeStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiCorrelativeStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiCorrelativeStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

