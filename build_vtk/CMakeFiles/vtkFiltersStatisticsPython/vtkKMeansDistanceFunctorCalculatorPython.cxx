// python wrapper for vtkKMeansDistanceFunctorCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkKMeansDistanceFunctorCalculator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKMeansDistanceFunctorCalculator(PyObject *dict); }
extern "C" { PyObject *PyvtkKMeansDistanceFunctorCalculator_ClassNew(); }

#ifndef DECLARED_PyvtkKMeansDistanceFunctor_ClassNew
extern "C" { PyObject *PyvtkKMeansDistanceFunctor_ClassNew(); }
#define DECLARED_PyvtkKMeansDistanceFunctor_ClassNew
#endif

static PyObject *
PyvtkKMeansDistanceFunctorCalculator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKMeansDistanceFunctorCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKMeansDistanceFunctorCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKMeansDistanceFunctorCalculator *tempr = vtkKMeansDistanceFunctorCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKMeansDistanceFunctorCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKMeansDistanceFunctorCalculator::NewInstance());

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
PyvtkKMeansDistanceFunctorCalculator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkKMeansDistanceFunctorCalculator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkKMeansDistanceFunctorCalculator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_SetDistanceExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceExpression(temp0);
    }
    else
    {
      op->vtkKMeansDistanceFunctorCalculator::SetDistanceExpression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_GetDistanceExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDistanceExpression() :
      op->vtkKMeansDistanceFunctorCalculator::GetDistanceExpression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_SetFunctionParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  vtkFunctionParser *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFunctionParser"))
  {
    if (ap.IsBound())
    {
      op->SetFunctionParser(temp0);
    }
    else
    {
      op->vtkKMeansDistanceFunctorCalculator::SetFunctionParser(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_GetFunctionParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFunctionParser *tempr = (ap.IsBound() ?
      op->GetFunctionParser() :
      op->vtkKMeansDistanceFunctorCalculator::GetFunctionParser());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkKMeansDistanceFunctorCalculator_Methods[] = {
  {"IsTypeOf", PyvtkKMeansDistanceFunctorCalculator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKMeansDistanceFunctorCalculator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKMeansDistanceFunctorCalculator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkKMeansDistanceFunctorCalculator\nC++: static vtkKMeansDistanceFunctorCalculator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKMeansDistanceFunctorCalculator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkKMeansDistanceFunctorCalculator\nC++: vtkKMeansDistanceFunctorCalculator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkKMeansDistanceFunctorCalculator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkKMeansDistanceFunctorCalculator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDistanceExpression", PyvtkKMeansDistanceFunctorCalculator_SetDistanceExpression, METH_VARARGS,
   "SetDistanceExpression(self, _arg:str) -> None\nC++: virtual void SetDistanceExpression(const char *_arg)\n\nSet/get the distance function expression.\n"},
  {"GetDistanceExpression", PyvtkKMeansDistanceFunctorCalculator_GetDistanceExpression, METH_VARARGS,
   "GetDistanceExpression(self) -> str\nC++: virtual char *GetDistanceExpression()\n\n"},
  {"SetFunctionParser", PyvtkKMeansDistanceFunctorCalculator_SetFunctionParser, METH_VARARGS,
   "SetFunctionParser(self, __a:vtkFunctionParser) -> None\nC++: virtual void SetFunctionParser(vtkFunctionParser *)\n\nSet/get the string containing an expression which evaluates to\nthe distance metric used for k-means computation. The scalar\nvariables \"x0\", \"x1\", ... \"xn\" and \"y0\", \"y1\", ..., \"yn\" refer to\nthe coordinates involved in the computation.\n"},
  {"GetFunctionParser", PyvtkKMeansDistanceFunctorCalculator_GetFunctionParser, METH_VARARGS,
   "GetFunctionParser(self) -> vtkFunctionParser\nC++: virtual vtkFunctionParser *GetFunctionParser()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkKMeansDistanceFunctorCalculator_Doc =
  "vtkKMeansDistanceFunctorCalculator - measure distance from k-means\ncluster centers using a user-specified expression\n\n"
  "Superclass: vtkKMeansDistanceFunctor\n\n"
  "This is a subclass of the default k-means distance functor that\n"
  "allows the user to specify a distance function as a string. The\n"
  "provided expression is evaluated whenever the parenthesis operator is\n"
  "invoked but this is much slower than the default distance\n"
  "calculation.\n\n"
  "User-specified distance expressions should be written in terms of two\n"
  "vector variables named \"x\" and \"y\". The length of the vectors will be\n"
  "determined by the k-means request and all columns of interest in the\n"
  "request must contain values that may be converted to a floating point\n"
  "representation. (Strings and vtkObject pointers are not allowed.) An\n"
  "example distance expression is \"sqrt( (x0-y0)^2 + (x1-y1)^2 )\" which\n"
  "computes Euclidean distance in a plane defined by the first 2\n"
  "coordinates of the vectors specified.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkKMeansDistanceFunctorCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkKMeansDistanceFunctorCalculator", // tp_name
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
  PyvtkKMeansDistanceFunctorCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKMeansDistanceFunctorCalculator_StaticNew()
{
  return vtkKMeansDistanceFunctorCalculator::New();
}

PyObject *PyvtkKMeansDistanceFunctorCalculator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkKMeansDistanceFunctorCalculator_Type, PyvtkKMeansDistanceFunctorCalculator_Methods,
    "vtkKMeansDistanceFunctorCalculator",
 &PyvtkKMeansDistanceFunctorCalculator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkKMeansDistanceFunctor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkKMeansDistanceFunctorCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKMeansDistanceFunctorCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKMeansDistanceFunctorCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

