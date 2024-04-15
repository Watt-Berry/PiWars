// python wrapper for vtkHighestDensityRegionsStatistics
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHighestDensityRegionsStatistics.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHighestDensityRegionsStatistics(PyObject *dict); }
extern "C" { PyObject *PyvtkHighestDensityRegionsStatistics_ClassNew(); }

#ifndef DECLARED_PyvtkStatisticsAlgorithm_ClassNew
extern "C" { PyObject *PyvtkStatisticsAlgorithm_ClassNew(); }
#define DECLARED_PyvtkStatisticsAlgorithm_ClassNew
#endif

static PyObject *
PyvtkHighestDensityRegionsStatistics_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHighestDensityRegionsStatistics::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHighestDensityRegionsStatistics::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHighestDensityRegionsStatistics *tempr = vtkHighestDensityRegionsStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHighestDensityRegionsStatistics *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHighestDensityRegionsStatistics::NewInstance());

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
PyvtkHighestDensityRegionsStatistics_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHighestDensityRegionsStatistics::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHighestDensityRegionsStatistics::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_Aggregate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Aggregate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

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
      op->vtkHighestDensityRegionsStatistics::Aggregate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_SetSigma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSigma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSigma(temp0);
    }
    else
    {
      op->vtkHighestDensityRegionsStatistics::SetSigma(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_SetSigmaMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSigmaMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetSigmaMatrix(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHighestDensityRegionsStatistics::SetSigmaMatrix(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHighestDensityRegionsStatistics_ComputeHDR_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeHDR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeHDR(temp0, temp1) :
      op->vtkHighestDensityRegionsStatistics::ComputeHDR(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHighestDensityRegionsStatistics_ComputeHDR_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeHDR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHighestDensityRegionsStatistics *op = static_cast<vtkHighestDensityRegionsStatistics *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeHDR(temp0, temp1, temp2) :
      op->vtkHighestDensityRegionsStatistics::ComputeHDR(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHighestDensityRegionsStatistics_ComputeHDR(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkHighestDensityRegionsStatistics_ComputeHDR_s1(self, args);
    case 3:
      return PyvtkHighestDensityRegionsStatistics_ComputeHDR_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeHDR");
  return nullptr;
}

static PyMethodDef PyvtkHighestDensityRegionsStatistics_Methods[] = {
  {"IsTypeOf", PyvtkHighestDensityRegionsStatistics_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHighestDensityRegionsStatistics_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHighestDensityRegionsStatistics_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHighestDensityRegionsStatistics\nC++: static vtkHighestDensityRegionsStatistics *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHighestDensityRegionsStatistics_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHighestDensityRegionsStatistics\nC++: vtkHighestDensityRegionsStatistics *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHighestDensityRegionsStatistics_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHighestDensityRegionsStatistics_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Aggregate", PyvtkHighestDensityRegionsStatistics_Aggregate, METH_VARARGS,
   "Aggregate(self, __a:vtkDataObjectCollection,\n    __b:vtkMultiBlockDataSet) -> None\nC++: void Aggregate(vtkDataObjectCollection *,\n    vtkMultiBlockDataSet *) override;\n\nGiven a collection of models, calculate aggregate model\n"},
  {"SetSigma", PyvtkHighestDensityRegionsStatistics_SetSigma, METH_VARARGS,
   "SetSigma(self, sigma:float) -> None\nC++: void SetSigma(double sigma)\n\nSet the width of the gaussian kernel.\n"},
  {"SetSigmaMatrix", PyvtkHighestDensityRegionsStatistics_SetSigmaMatrix, METH_VARARGS,
   "SetSigmaMatrix(self, s11:float, s12:float, s21:float, s22:float)\n    -> None\nC++: void SetSigmaMatrix(double s11, double s12, double s21,\n    double s22)\n\nSet the gaussian kernel matrix.\n"},
  {"ComputeHDR", PyvtkHighestDensityRegionsStatistics_ComputeHDR, METH_VARARGS,
   "ComputeHDR(self, inObservations:vtkDataArray,\n    outDensity:vtkDataArray) -> float\nC++: double ComputeHDR(vtkDataArray *inObservations,\n    vtkDataArray *outDensity)\nComputeHDR(self, inObs:vtkDataArray, inPOI:vtkDataArray,\n    outDensity:vtkDataArray) -> float\nC++: double ComputeHDR(vtkDataArray *inObs, vtkDataArray *inPOI,\n    vtkDataArray *outDensity)\n\nFill outDensity with density vector that is computed from\ninObservations values. This method uses a Gaussian kernel. For n\nobservations and with X an observation point: f(X) = (1 / n) *\nSum(KH(X -Xi)) for (i = 1 to n). Look ComputeSmoothGaussianKernel\nfor KH kernel definition.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHighestDensityRegionsStatistics_Doc =
  "vtkHighestDensityRegionsStatistics - Compute a random vector of\ndensity f from input observations points.\n\n"
  "Superclass: vtkStatisticsAlgorithm\n\n"
  "f is computed using a smooth kernel method.\n\n"
  "Given a selection of pairs of columns of interest, this class\n"
  "provides the following functionalities, depending on the chosen\n"
  "execution options:\n"
  "* Learn: calculates density estimator f of a random vector using a\n"
  "  smooth gaussian kernel. The output metadata on port OUTPUT_MODEL is\n"
  "a multiblock dataset containing at one vtkTable holding three columns\n"
  "which are for the first columns the input columns of interest and for\n"
  "the last columns the density estimators of each input pair of columns\n"
  "of interest.\n"
  "* Derive: calculate normalized (as a percentage) quantiles coming\n"
  "  from Learn output. The second block of the multibloc dataset\n"
  "  contains a vtkTable holding some pairs of columns which are for the\n"
  "second one the quantiles ordered from the stronger to the lower and\n"
  "  for the first one the correspondand quantile index.\n"
  "* Assess: not implemented.\n"
  "* Test: not implemented.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHighestDensityRegionsStatistics_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkHighestDensityRegionsStatistics", // tp_name
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
  PyvtkHighestDensityRegionsStatistics_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHighestDensityRegionsStatistics_StaticNew()
{
  return vtkHighestDensityRegionsStatistics::New();
}

PyObject *PyvtkHighestDensityRegionsStatistics_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHighestDensityRegionsStatistics_Type, PyvtkHighestDensityRegionsStatistics_Methods,
    "vtkHighestDensityRegionsStatistics",
 &PyvtkHighestDensityRegionsStatistics_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkStatisticsAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHighestDensityRegionsStatistics(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHighestDensityRegionsStatistics_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHighestDensityRegionsStatistics", o) != 0)
  {
    Py_DECREF(o);
  }

}

