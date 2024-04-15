// python wrapper for vtkCellLocatorInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellLocatorInterpolatedVelocityField.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(PyObject *dict); }
extern "C" { PyObject *PyvtkCellLocatorInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeInterpolatedVelocityField_ClassNew
extern "C" { PyObject *PyvtkCompositeInterpolatedVelocityField_ClassNew(); }
#define DECLARED_PyvtkCompositeInterpolatedVelocityField_ClassNew
#endif

static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCellLocatorInterpolatedVelocityField."
    " (" "Use vtkCompositeInterpolatedVelocityField instead of vtkCellLocatorInterpolatedVelocityField and set the desired strategy." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellLocatorInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellLocatorInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCellLocatorInterpolatedVelocityField."
    " (" "Use vtkCompositeInterpolatedVelocityField instead of vtkCellLocatorInterpolatedVelocityField and set the desired strategy." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellLocatorInterpolatedVelocityField *tempr = vtkCellLocatorInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellLocatorInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellLocatorInterpolatedVelocityField::NewInstance());

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
PyvtkCellLocatorInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCellLocatorInterpolatedVelocityField."
    " (" "Use vtkCompositeInterpolatedVelocityField instead of vtkCellLocatorInterpolatedVelocityField and set the desired strategy." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellLocatorInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellLocatorInterpolatedVelocityField_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLocatorInterpolatedVelocityField *op = static_cast<vtkCellLocatorInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellLocatorInterpolatedVelocityField::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellLocatorInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkCellLocatorInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellLocatorInterpolatedVelocityField_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellLocatorInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkCellLocatorInterpolatedVelocityField\nC++: static vtkCellLocatorInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellLocatorInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellLocatorInterpolatedVelocityField\nC++: vtkCellLocatorInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellLocatorInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellLocatorInterpolatedVelocityField_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellLocatorInterpolatedVelocityField_Doc =
  "vtkCellLocatorInterpolatedVelocityField - A concrete class for\n obtaining the interpolated velocity values at a point.\n\n"
  "Superclass: vtkCompositeInterpolatedVelocityField\n\n"
  "vtkCellLocatorInterpolatedVelocityField acts as a continuous velocity\n"
  " field via cell interpolation on a vtkDataSet,\n"
  "NumberOfIndependentVariables\n"
  " = 4 (x,y,z,t) and NumberOfFunctions = 3 (u,v,w). As a concrete\n"
  "sub-class\n"
  " of vtkCompositeInterpolatedVelocityField, it adopts\n"
  "vtkAbstractCellLocator's\n"
  " sub-classes, e.g., vtkCellLocator and vtkModifiedBSPTree, without\n"
  "the use\n"
  " of vtkPointLocator ( employed by vtkDataSet::FindCell() and\n"
  " vtkPointSet::FindCell() in vtkInterpolatedVelocityField ).\n"
  " vtkCellLocatorInterpolatedVelocityField adopts one level of cell\n"
  "caching.\n"
  " Specifically, if the next point is still within the previous cell,\n"
  "cell\n"
  " location is then simply skipped and vtkCell:: EvaluatePosition() is\n"
  "called\n"
  " to obtain the new parametric coordinates and weights that are used\n"
  "to\n"
  " interpolate the velocity function values across the vertices of this\n"
  "cell.\n"
  " Otherwise a global cell (the target containing the next point)\n"
  "location is\n"
  " instead directly invoked, without exploiting the clue that\n"
  " vtkInterpolatedVelocityField makes use of from the previous cell (an\n"
  " immediate neighbor). Although ignoring the neighbor cell may incur a\n"
  " relatively high computational cost,\n"
  "vtkCellLocatorInterpolatedVelocityField\n"
  " is more robust in locating the target cell than its sibling class\n"
  " vtkInterpolatedVelocityField.\n\n"
  "@warning\n"
  " vtkCellLocatorInterpolatedVelocityField is not thread safe. A new\n"
  "instance\n"
  " should be created by each thread.\n\n"
  "@sa\n"
  " vtkCompositeInterpolatedVelocityField vtkInterpolatedVelocityField\n"
  " vtkGenericInterpolatedVelocityField\n"
  "vtkCachingInterpolatedVelocityField\n"
  " vtkTemporalInterpolatedVelocityField vtkFunctionSet vtkStreamTracer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellLocatorInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkCellLocatorInterpolatedVelocityField", // tp_name
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
  PyvtkCellLocatorInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellLocatorInterpolatedVelocityField_StaticNew()
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCellLocatorInterpolatedVelocityField."
    " (" "Use vtkCompositeInterpolatedVelocityField instead of vtkCellLocatorInterpolatedVelocityField and set the desired strategy." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  return vtkCellLocatorInterpolatedVelocityField::New();
}

PyObject *PyvtkCellLocatorInterpolatedVelocityField_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellLocatorInterpolatedVelocityField_Type, PyvtkCellLocatorInterpolatedVelocityField_Methods,
    "vtkCellLocatorInterpolatedVelocityField",
 &PyvtkCellLocatorInterpolatedVelocityField_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeInterpolatedVelocityField_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellLocatorInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellLocatorInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellLocatorInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

