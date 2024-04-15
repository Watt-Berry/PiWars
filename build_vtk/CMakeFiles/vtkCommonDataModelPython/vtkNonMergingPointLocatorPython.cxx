// python wrapper for vtkNonMergingPointLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkNonMergingPointLocator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNonMergingPointLocator(PyObject *dict); }
extern "C" { PyObject *PyvtkNonMergingPointLocator_ClassNew(); }

#ifndef DECLARED_PyvtkPointLocator_ClassNew
extern "C" { PyObject *PyvtkPointLocator_ClassNew(); }
#define DECLARED_PyvtkPointLocator_ClassNew
#endif

static PyObject *
PyvtkNonMergingPointLocator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNonMergingPointLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNonMergingPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNonMergingPointLocator *tempr = vtkNonMergingPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNonMergingPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNonMergingPointLocator::NewInstance());

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
PyvtkNonMergingPointLocator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkNonMergingPointLocator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkNonMergingPointLocator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    long long tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0) :
      op->vtkNonMergingPointLocator::IsInsertedPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->IsInsertedPoint(temp0, temp1, temp2) :
      op->vtkNonMergingPointLocator::IsInsertedPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkNonMergingPointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkNonMergingPointLocator_IsInsertedPoint_s1(self, args);
    case 3:
      return PyvtkNonMergingPointLocator_IsInsertedPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return nullptr;
}


static PyObject *
PyvtkNonMergingPointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonMergingPointLocator *op = static_cast<vtkNonMergingPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->InsertUniquePoint(temp0, temp1) :
      op->vtkNonMergingPointLocator::InsertUniquePoint(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNonMergingPointLocator_Methods[] = {
  {"IsTypeOf", PyvtkNonMergingPointLocator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNonMergingPointLocator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNonMergingPointLocator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkNonMergingPointLocator\nC++: static vtkNonMergingPointLocator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNonMergingPointLocator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkNonMergingPointLocator\nC++: vtkNonMergingPointLocator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkNonMergingPointLocator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkNonMergingPointLocator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsInsertedPoint", PyvtkNonMergingPointLocator_IsInsertedPoint, METH_VARARGS,
   "IsInsertedPoint(self, __a:(float, float, float)) -> int\nC++: vtkIdType IsInsertedPoint(const double[3]) override;\nIsInsertedPoint(self, __a:float, __b:float, __c:float) -> int\nC++: vtkIdType IsInsertedPoint(double, double, double) override;\n\nDetermine whether a given point x has been inserted into the\npoints list. Return the id of the already inserted point if it is\ntrue, or -1 else. Note this function always returns -1 since any\npoint is always inserted.\n"},
  {"InsertUniquePoint", PyvtkNonMergingPointLocator_InsertUniquePoint, METH_VARARGS,
   "InsertUniquePoint(self, x:(float, float, float), ptId:int) -> int\nC++: int InsertUniquePoint(const double x[3], vtkIdType &ptId)\n    override;\n\nDetermine whether a given point x has been inserted into the\npoints list. Return 0 if a duplicate has been inserted in the\nlist, or 1 else. Note this function always returns 1 since any\npoint is always inserted. The index of the point is returned via\nptId.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkNonMergingPointLocator_Doc =
  "vtkNonMergingPointLocator - direct / check-free point insertion.\n\n"
  "Superclass: vtkPointLocator\n\n"
  "As a special sub-class of vtkPointLocator, vtkNonMergingPointLocator\n"
  "is\n"
  " intended for direct / check-free insertion of points into a\n"
  "vtkPoints\n"
  " object. In other words, any given point is always directly inserted.\n"
  " The name emphasizes the difference between this class and its\n"
  "sibling\n"
  " class vtkMergePoints in that the latter class performs check-based\n"
  "zero\n"
  " tolerance point insertion (or to 'merge' exactly duplicate /\n"
  "coincident\n"
  " points) by exploiting the uniform bin mechanism employed by the\n"
  "parent\n"
  " class vtkPointLocator. vtkPointLocator allows for generic (zero and\n"
  "non-\n"
  " zero) tolerance point insertion as well as point location.\n\n"
  "@sa\n"
  " vtkIncrementalPointLocator vtkPointLocator vtkMergePoints\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNonMergingPointLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkNonMergingPointLocator", // tp_name
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
  PyvtkNonMergingPointLocator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNonMergingPointLocator_StaticNew()
{
  return vtkNonMergingPointLocator::New();
}

PyObject *PyvtkNonMergingPointLocator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkNonMergingPointLocator_Type, PyvtkNonMergingPointLocator_Methods,
    "vtkNonMergingPointLocator",
 &PyvtkNonMergingPointLocator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNonMergingPointLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNonMergingPointLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNonMergingPointLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

