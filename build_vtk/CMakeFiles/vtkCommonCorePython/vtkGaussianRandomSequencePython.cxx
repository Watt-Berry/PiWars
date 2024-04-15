// python wrapper for vtkGaussianRandomSequence
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGaussianRandomSequence.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGaussianRandomSequence(PyObject *dict); }
extern "C" { PyObject *PyvtkGaussianRandomSequence_ClassNew(); }

#ifndef DECLARED_PyvtkRandomSequence_ClassNew
extern "C" { PyObject *PyvtkRandomSequence_ClassNew(); }
#define DECLARED_PyvtkRandomSequence_ClassNew
#endif

static PyObject *
PyvtkGaussianRandomSequence_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGaussianRandomSequence::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGaussianRandomSequence::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGaussianRandomSequence *tempr = vtkGaussianRandomSequence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGaussianRandomSequence *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGaussianRandomSequence::NewInstance());

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
PyvtkGaussianRandomSequence_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGaussianRandomSequence::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGaussianRandomSequence::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_GetScaledValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaledValue(temp0, temp1) :
      op->vtkGaussianRandomSequence::GetScaledValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianRandomSequence_GetNextScaledValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextScaledValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianRandomSequence *op = static_cast<vtkGaussianRandomSequence *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetNextScaledValue(temp0, temp1) :
      op->vtkGaussianRandomSequence::GetNextScaledValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGaussianRandomSequence_Methods[] = {
  {"IsTypeOf", PyvtkGaussianRandomSequence_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGaussianRandomSequence_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGaussianRandomSequence_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGaussianRandomSequence\nC++: static vtkGaussianRandomSequence *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGaussianRandomSequence_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGaussianRandomSequence\nC++: vtkGaussianRandomSequence *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGaussianRandomSequence_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGaussianRandomSequence_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetScaledValue", PyvtkGaussianRandomSequence_GetScaledValue, METH_VARARGS,
   "GetScaledValue(self, mean:float, standardDeviation:float) -> float\nC++: virtual double GetScaledValue(double mean,\n    double standardDeviation)\n\nConvenient method to return a value given the mean and standard\ndeviation of the Gaussian distribution from the Gaussian\ndistribution of mean=0 and standard deviation=1.0. There is an\ninitial implementation that can be overridden by a subclass.\n"},
  {"GetNextScaledValue", PyvtkGaussianRandomSequence_GetNextScaledValue, METH_VARARGS,
   "GetNextScaledValue(self, mean:float, standardDeviation:float)\n    -> float\nC++: double GetNextScaledValue(double mean,\n    double standardDeviation)\n\nReturn the next value in the sequence given the mean and standard\ndeviation of the Gaussian.\n\n\\see vtkGaussianRandomSequence::GetScaledValue\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGaussianRandomSequence_Doc =
  "vtkGaussianRandomSequence - Gaussian sequence of pseudo random numbers\n\n"
  "Superclass: vtkRandomSequence\n\n"
  "vtkGaussianRandomSequence is a sequence of pseudo random numbers\n"
  "distributed according to the Gaussian/normal distribution (mean=0 and\n"
  "standard deviation=1)\n\n"
  "This is just an interface.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGaussianRandomSequence_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkGaussianRandomSequence", // tp_name
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
  PyvtkGaussianRandomSequence_Doc, // tp_doc
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

PyObject *PyvtkGaussianRandomSequence_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGaussianRandomSequence_Type, PyvtkGaussianRandomSequence_Methods,
    "vtkGaussianRandomSequence",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRandomSequence_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGaussianRandomSequence(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGaussianRandomSequence_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGaussianRandomSequence", o) != 0)
  {
    Py_DECREF(o);
  }

}

