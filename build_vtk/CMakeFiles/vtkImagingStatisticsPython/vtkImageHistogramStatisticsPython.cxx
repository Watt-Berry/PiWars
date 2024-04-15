// python wrapper for vtkImageHistogramStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageHistogramStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageHistogramStatistics(PyObject *dict); }
extern "C" { PyObject *PyvtkImageHistogramStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkImageHistogram_ClassNew
extern "C" { PyObject *PyvtkImageHistogram_ClassNew(); }
#define DECLARED_PyvtkImageHistogram_ClassNew
#endif

static PyObject *
PyvtkImageHistogramStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageHistogramStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageHistogramStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageHistogramStatistics *tempr = vtkImageHistogramStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageHistogramStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageHistogramStatistics::NewInstance());

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
PyvtkImageHistogramStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageHistogramStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageHistogramStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_GetMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimum() :
      op->vtkImageHistogramStatistics::GetMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximum() :
      op->vtkImageHistogramStatistics::GetMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_GetMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMean() :
      op->vtkImageHistogramStatistics::GetMean());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_GetMedian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMedian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMedian() :
      op->vtkImageHistogramStatistics::GetMedian());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_GetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStandardDeviation() :
      op->vtkImageHistogramStatistics::GetStandardDeviation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_SetAutoRangePercentiles_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRangePercentiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAutoRangePercentiles(temp0, temp1);
    }
    else
    {
      op->vtkImageHistogramStatistics::SetAutoRangePercentiles(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageHistogramStatistics_SetAutoRangePercentiles_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRangePercentiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAutoRangePercentiles(temp0);
    }
    else
    {
      op->vtkImageHistogramStatistics::SetAutoRangePercentiles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageHistogramStatistics_SetAutoRangePercentiles(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageHistogramStatistics_SetAutoRangePercentiles_s1(self, args);
    case 1:
      return PyvtkImageHistogramStatistics_SetAutoRangePercentiles_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAutoRangePercentiles");
  return nullptr;
}


static PyObject *
PyvtkImageHistogramStatistics_GetAutoRangePercentiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoRangePercentiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAutoRangePercentiles() :
      op->vtkImageHistogramStatistics::GetAutoRangePercentiles());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_SetAutoRangeExpansionFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRangeExpansionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAutoRangeExpansionFactors(temp0, temp1);
    }
    else
    {
      op->vtkImageHistogramStatistics::SetAutoRangeExpansionFactors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageHistogramStatistics_SetAutoRangeExpansionFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoRangeExpansionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAutoRangeExpansionFactors(temp0);
    }
    else
    {
      op->vtkImageHistogramStatistics::SetAutoRangeExpansionFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageHistogramStatistics_SetAutoRangeExpansionFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageHistogramStatistics_SetAutoRangeExpansionFactors_s1(self, args);
    case 1:
      return PyvtkImageHistogramStatistics_SetAutoRangeExpansionFactors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAutoRangeExpansionFactors");
  return nullptr;
}


static PyObject *
PyvtkImageHistogramStatistics_GetAutoRangeExpansionFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoRangeExpansionFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAutoRangeExpansionFactors() :
      op->vtkImageHistogramStatistics::GetAutoRangeExpansionFactors());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageHistogramStatistics_GetAutoRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHistogramStatistics *op = static_cast<vtkImageHistogramStatistics *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAutoRange() :
      op->vtkImageHistogramStatistics::GetAutoRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageHistogramStatistics_Methods[] = {
  {"IsTypeOf", PyvtkImageHistogramStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageHistogramStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageHistogramStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageHistogramStatistics\nC++: static vtkImageHistogramStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageHistogramStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageHistogramStatistics\nC++: vtkImageHistogramStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageHistogramStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageHistogramStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMinimum", PyvtkImageHistogramStatistics_GetMinimum, METH_VARARGS,
   "GetMinimum(self) -> float\nC++: double GetMinimum()\n\nGet the minimum value present in the image.  This value is\ncomputed when Update() is called.\n"},
  {"GetMaximum", PyvtkImageHistogramStatistics_GetMaximum, METH_VARARGS,
   "GetMaximum(self) -> float\nC++: double GetMaximum()\n\nGet the maximum value present in the image.  This value is\ncomputed when Update() is called.\n"},
  {"GetMean", PyvtkImageHistogramStatistics_GetMean, METH_VARARGS,
   "GetMean(self) -> float\nC++: double GetMean()\n\nGet the mean value of the image.  This value is computed when\nUpdate() is called.\n"},
  {"GetMedian", PyvtkImageHistogramStatistics_GetMedian, METH_VARARGS,
   "GetMedian(self) -> float\nC++: double GetMedian()\n\nGet the median value.  This is computed when Update() is called.\n"},
  {"GetStandardDeviation", PyvtkImageHistogramStatistics_GetStandardDeviation, METH_VARARGS,
   "GetStandardDeviation(self) -> float\nC++: double GetStandardDeviation()\n\nGet the standard deviation of the values in the image.  This is\ncomputed when Update() is called.\n"},
  {"SetAutoRangePercentiles", PyvtkImageHistogramStatistics_SetAutoRangePercentiles, METH_VARARGS,
   "SetAutoRangePercentiles(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetAutoRangePercentiles(double _arg1,\n    double _arg2)\nSetAutoRangePercentiles(self, _arg:(float, float)) -> None\nC++: void SetAutoRangePercentiles(const double _arg[2])\n\nSet the percentiles to use for automatic view range computation.\nThis allows one to compute a range that does not include outliers\nthat are significantly darker or significantly brighter than the\nrest of the pixels in the image.  The default is to use the first\npercentile and the 99th percentile.\n"},
  {"GetAutoRangePercentiles", PyvtkImageHistogramStatistics_GetAutoRangePercentiles, METH_VARARGS,
   "GetAutoRangePercentiles(self) -> (float, float)\nC++: virtual double *GetAutoRangePercentiles()\n\n"},
  {"SetAutoRangeExpansionFactors", PyvtkImageHistogramStatistics_SetAutoRangeExpansionFactors, METH_VARARGS,
   "SetAutoRangeExpansionFactors(self, _arg1:float, _arg2:float)\n    -> None\nC++: virtual void SetAutoRangeExpansionFactors(double _arg1,\n    double _arg2)\nSetAutoRangeExpansionFactors(self, _arg:(float, float)) -> None\nC++: void SetAutoRangeExpansionFactors(const double _arg[2])\n\nSet lower and upper expansion factors to apply to the auto range\nthat was computed from the AutoRangePercentiles.  Any outliers\nthat are within this expanded range will be included, even if\nthey are beyond the percentile.  This allows inclusion of values\nthat are just slightly outside of the percentile, while rejecting\nvalues that are far beyond the percentile.  The default is to\nexpand the range by a factor of 0.1 at each end.  The range will\nnever be expanded beyond the Minimum or Maximum pixel values.\n"},
  {"GetAutoRangeExpansionFactors", PyvtkImageHistogramStatistics_GetAutoRangeExpansionFactors, METH_VARARGS,
   "GetAutoRangeExpansionFactors(self) -> (float, float)\nC++: virtual double *GetAutoRangeExpansionFactors()\n\n"},
  {"GetAutoRange", PyvtkImageHistogramStatistics_GetAutoRange, METH_VARARGS,
   "GetAutoRange(self) -> (float, float)\nC++: virtual double *GetAutoRange()\n\nGet an automatically computed view range for the image, for use\nwith the lookup table or image property that is used when viewing\nthe image.  The use of this range will avoid situations where an\nimage looks too dark because a few pixels happen to be much\nbrighter than the rest.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageHistogramStatistics_Doc =
  "vtkImageHistogramStatistics - Compute statistics for an image\n\n"
  "Superclass: vtkImageHistogram\n\n"
  "vtkImageHistogramStatistics computes statistics such as mean, median,\n"
  "and standard deviation.  These statistics are computed from the\n"
  "histogram of the image, rather than from the image itself, because\n"
  "this is more efficient than computing the statistics while traversing\n"
  "the pixels. If the input image is of type float or double, then the\n"
  "precision of the Mean, Median, and StandardDeviation will depend on\n"
  "the number of histogram bins.  By default, 65536 bins are used for\n"
  "float data, giving at least 16 bits of precision.@par Thanks: Thanks\n"
  "to David Gobbi at the Seaman Family MR Centre and Dept. of Clinical\n"
  "Neurosciences, Foothills Medical Centre, Calgary, for providing this\n"
  "class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageHistogramStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingStatistics.vtkImageHistogramStatistics", // tp_name
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
  PyvtkImageHistogramStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageHistogramStatistics_StaticNew()
{
  return vtkImageHistogramStatistics::New();
}

PyObject *PyvtkImageHistogramStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageHistogramStatistics_Type, PyvtkImageHistogramStatistics_Methods,
    "vtkImageHistogramStatistics",
 &PyvtkImageHistogramStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageHistogram_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageHistogramStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageHistogramStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageHistogramStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

