// python wrapper for vtkLengthDistribution
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLengthDistribution.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLengthDistribution(PyObject *dict); }
extern "C" { PyObject *PyvtkLengthDistribution_ClassNew(); }


static PyObject *
PyvtkLengthDistribution_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLengthDistribution::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLengthDistribution::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLengthDistribution *tempr = vtkLengthDistribution::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLengthDistribution *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLengthDistribution::NewInstance());

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
PyvtkLengthDistribution_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLengthDistribution::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLengthDistribution::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_GetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSampleSize() :
      op->vtkLengthDistribution::GetSampleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_SetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  long long temp0;
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
      op->vtkLengthDistribution::SetSampleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_GetSortSample(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortSample");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSortSample() :
      op->vtkLengthDistribution::GetSortSample());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_SetSortSample(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortSample");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortSample(temp0);
    }
    else
    {
      op->vtkLengthDistribution::SetSortSample(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_SortSampleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortSampleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortSampleOn();
    }
    else
    {
      op->vtkLengthDistribution::SortSampleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_SortSampleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SortSampleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SortSampleOff();
    }
    else
    {
      op->vtkLengthDistribution::SortSampleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLengthDistribution_GetLengthQuantile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthQuantile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLengthDistribution *op = static_cast<vtkLengthDistribution *>(vp);

  double temp0 = 0.5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    double tempr = (ap.IsBound() ?
      op->GetLengthQuantile(temp0) :
      op->vtkLengthDistribution::GetLengthQuantile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLengthDistribution_Methods[] = {
  {"IsTypeOf", PyvtkLengthDistribution_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLengthDistribution_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLengthDistribution_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLengthDistribution\nC++: static vtkLengthDistribution *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLengthDistribution_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLengthDistribution\nC++: vtkLengthDistribution *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLengthDistribution_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLengthDistribution_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetSampleSize", PyvtkLengthDistribution_GetSampleSize, METH_VARARGS,
   "GetSampleSize(self) -> int\nC++: virtual vtkIdType GetSampleSize()\n\nSet/get the size of the distribution. The output table will be no\nlarger than this but may be smaller if the input dataset has\nfewer cells. The default is to generate 100,000 samples.\n"},
  {"SetSampleSize", PyvtkLengthDistribution_SetSampleSize, METH_VARARGS,
   "SetSampleSize(self, _arg:int) -> None\nC++: virtual void SetSampleSize(vtkIdType _arg)\n\n"},
  {"GetSortSample", PyvtkLengthDistribution_GetSortSample, METH_VARARGS,
   "GetSortSample(self) -> bool\nC++: virtual bool GetSortSample()\n\nSet/get whether to sort the table rows or not.\n\nBy default, the cell lengths are sorted so that the table can be\nused as a CDF. If you are working with large samples and do not\nneed the sampled set of lengths sorted, turn this off.\n"},
  {"SetSortSample", PyvtkLengthDistribution_SetSortSample, METH_VARARGS,
   "SetSortSample(self, _arg:bool) -> None\nC++: virtual void SetSortSample(bool _arg)\n\n"},
  {"SortSampleOn", PyvtkLengthDistribution_SortSampleOn, METH_VARARGS,
   "SortSampleOn(self) -> None\nC++: virtual void SortSampleOn()\n\n"},
  {"SortSampleOff", PyvtkLengthDistribution_SortSampleOff, METH_VARARGS,
   "SortSampleOff(self) -> None\nC++: virtual void SortSampleOff()\n\n"},
  {"GetLengthQuantile", PyvtkLengthDistribution_GetLengthQuantile, METH_VARARGS,
   "GetLengthQuantile(self, qq:float=0.5) -> float\nC++: double GetLengthQuantile(double qq=0.5)\n\nReturn the length scale at a particular quantile.\n\nThis method must only be invoked after the filter has been run\n(i.e., the output is up-to-date with the filter inputs and\nparameters). It is a convenience method that fetches the\ncell-length column from the output table and returns the value at\nor immediately below the requested quantile. If the filter is\nconfigured not to sort data, this method will throw an exception\nsince the output table is not a CDF.\n\nBy default, the method returns the median length.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLengthDistribution_Doc =
  "vtkLengthDistribution - Sample the distribution of representative \"cell\nlengths\"\n of a mesh.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkLengthDistribution chooses a subset of N cells and, for each one,\n"
  "chooses two random connectivity entries of the cell. Then it computes\n"
  "the distance between the corresponding points and inserts the\n"
  "distance into an ordered set. The result is a cumulative distribution\n"
  "function (CDF) of lengths which are representative of the length\n"
  "scales present in the dataset. Quantiles (other than the extremal\n"
  "values) of this distribution should be relatively stable estimates of\n"
  "length scales compared to moment-based estimates that may be skewed\n"
  "by outlier elements.\n\n"
  "This filter produces a vtkTable as its result, with N rows containing\n"
  "monotonically increasing length values. Only polydata and\n"
  "unstructured grids are accepted; other dataset types will produce an\n"
  "empty table and a warning.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLengthDistribution_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkLengthDistribution", // tp_name
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
  PyvtkLengthDistribution_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLengthDistribution_StaticNew()
{
  return vtkLengthDistribution::New();
}

PyObject *PyvtkLengthDistribution_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLengthDistribution_Type, PyvtkLengthDistribution_Methods,
    "vtkLengthDistribution",
 &PyvtkLengthDistribution_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLengthDistribution(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLengthDistribution_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLengthDistribution", o) != 0)
  {
    Py_DECREF(o);
  }

}

