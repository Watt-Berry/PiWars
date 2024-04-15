// python wrapper for vtkAutoCorrelativeStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAutoCorrelativeStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAutoCorrelativeStatistics(PyObject *dict); }
extern "C" { PyObject *PyvtkAutoCorrelativeStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkStatisticsAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStatisticsAlgorithm_ClassNew
#endif

static PyObject *
PyvtkAutoCorrelativeStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAutoCorrelativeStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAutoCorrelativeStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAutoCorrelativeStatistics *tempr = vtkAutoCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAutoCorrelativeStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAutoCorrelativeStatistics::NewInstance());

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
PyvtkAutoCorrelativeStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAutoCorrelativeStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAutoCorrelativeStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_SetSliceCardinality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceCardinality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceCardinality(temp0);
    }
    else
    {
      op->vtkAutoCorrelativeStatistics::SetSliceCardinality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_GetSliceCardinalityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCardinalityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSliceCardinalityMinValue() :
      op->vtkAutoCorrelativeStatistics::GetSliceCardinalityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_GetSliceCardinalityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCardinalityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSliceCardinalityMaxValue() :
      op->vtkAutoCorrelativeStatistics::GetSliceCardinalityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_GetSliceCardinality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceCardinality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSliceCardinality() :
      op->vtkAutoCorrelativeStatistics::GetSliceCardinality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAutoCorrelativeStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAutoCorrelativeStatistics *op = static_cast<vtkAutoCorrelativeStatistics *>(vp);

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
      op->vtkAutoCorrelativeStatistics::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAutoCorrelativeStatistics_Methods[] = {
  {"IsTypeOf", PyvtkAutoCorrelativeStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAutoCorrelativeStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAutoCorrelativeStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAutoCorrelativeStatistics\nC++: static vtkAutoCorrelativeStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAutoCorrelativeStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAutoCorrelativeStatistics\nC++: vtkAutoCorrelativeStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAutoCorrelativeStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAutoCorrelativeStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSliceCardinality", PyvtkAutoCorrelativeStatistics_SetSliceCardinality, METH_VARARGS,
   "SetSliceCardinality(self, _arg:int) -> None\nC++: virtual void SetSliceCardinality(vtkIdType _arg)\n\nSet/get the cardinality of the data set at given time, i.e., of\nany given time slice. It cannot be negative. The input data set\nis assumed to have a cardinality which is a multiple of this\nvalue. The default is 0, meaning that the user must specify a\nvalue that is consistent with the input data set.\n"},
  {"GetSliceCardinalityMinValue", PyvtkAutoCorrelativeStatistics_GetSliceCardinalityMinValue, METH_VARARGS,
   "GetSliceCardinalityMinValue(self) -> int\nC++: virtual vtkIdType GetSliceCardinalityMinValue()\n\n"},
  {"GetSliceCardinalityMaxValue", PyvtkAutoCorrelativeStatistics_GetSliceCardinalityMaxValue, METH_VARARGS,
   "GetSliceCardinalityMaxValue(self) -> int\nC++: virtual vtkIdType GetSliceCardinalityMaxValue()\n\n"},
  {"GetSliceCardinality", PyvtkAutoCorrelativeStatistics_GetSliceCardinality, METH_VARARGS,
   "GetSliceCardinality(self) -> int\nC++: virtual vtkIdType GetSliceCardinality()\n\n"},
  {"Aggregate", PyvtkAutoCorrelativeStatistics_Aggregate, METH_VARARGS,
   "Aggregate(self, __a:vtkDataObjectCollection,\n    __b:vtkMultiBlockDataSet) -> None\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAutoCorrelativeStatistics_Doc =
  "vtkAutoCorrelativeStatistics - A class for univariate\nauto-correlative statistics\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "Given a selection of columns of interest in an input data table, this\n"
  "class provides the following functionalities, depending on the chosen\n"
  "execution options:\n"
  "* Learn: calculate sample mean and M2 aggregates for each variable\n"
  "  w.r.t. itself (cf. P. Pebay, Formulas for robust, one-pass parallel\n"
  "computation of covariances and Arbitrary-Order Statistical Moments,\n"
  "  Sandia Report SAND2008-6212, Sep 2008,\n"
  "  http://infoserve.sandia.gov/sand_doc/2008/086212.pdf for details)\n"
  "  for each specified time lag.\n"
  "* Derive: calculate unbiased autocovariance matrix estimators and its\n"
  "determinant, linear regressions, and Pearson correlation coefficient,\n"
  "for each specified time lag.\n"
  "* Assess: given an input data set, two means and a 2x2 covariance\n"
  "  matrix, mark each datum with corresponding relative deviation\n"
  "  (2-dimensional Mahlanobis distance).\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Kitware SAS\n"
  "2012\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAutoCorrelativeStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkAutoCorrelativeStatistics", // tp_name
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
  PyvtkAutoCorrelativeStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAutoCorrelativeStatistics_StaticNew()
{
  return vtkAutoCorrelativeStatistics::New();
}

PyObject *PyvtkAutoCorrelativeStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAutoCorrelativeStatistics_Type, PyvtkAutoCorrelativeStatistics_Methods,
    "vtkAutoCorrelativeStatistics",
 &PyvtkAutoCorrelativeStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkStatisticsAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAutoCorrelativeStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAutoCorrelativeStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAutoCorrelativeStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

