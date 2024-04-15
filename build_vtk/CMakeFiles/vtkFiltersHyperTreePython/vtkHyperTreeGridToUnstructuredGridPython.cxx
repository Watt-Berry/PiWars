// python wrapper for vtkHyperTreeGridToUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridToUnstructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridToUnstructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridToUnstructuredGrid_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridToUnstructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridToUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridToUnstructuredGrid *tempr = vtkHyperTreeGridToUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridToUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridToUnstructuredGrid::NewInstance());

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
PyvtkHyperTreeGridToUnstructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridToUnstructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridToUnstructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_GetAddOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddOriginalIds() :
      op->vtkHyperTreeGridToUnstructuredGrid::GetAddOriginalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_SetAddOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddOriginalIds(temp0);
    }
    else
    {
      op->vtkHyperTreeGridToUnstructuredGrid::SetAddOriginalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_AddOriginalIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOriginalIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddOriginalIdsOn();
    }
    else
    {
      op->vtkHyperTreeGridToUnstructuredGrid::AddOriginalIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridToUnstructuredGrid_AddOriginalIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOriginalIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridToUnstructuredGrid *op = static_cast<vtkHyperTreeGridToUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddOriginalIdsOff();
    }
    else
    {
      op->vtkHyperTreeGridToUnstructuredGrid::AddOriginalIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridToUnstructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridToUnstructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridToUnstructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridToUnstructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHyperTreeGridToUnstructuredGrid\nC++: static vtkHyperTreeGridToUnstructuredGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridToUnstructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridToUnstructuredGrid\nC++: vtkHyperTreeGridToUnstructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridToUnstructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridToUnstructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAddOriginalIds", PyvtkHyperTreeGridToUnstructuredGrid_GetAddOriginalIds, METH_VARARGS,
   "GetAddOriginalIds(self) -> bool\nC++: virtual bool GetAddOriginalIds()\n\nAdd a cell array with original HTG ids\n"},
  {"SetAddOriginalIds", PyvtkHyperTreeGridToUnstructuredGrid_SetAddOriginalIds, METH_VARARGS,
   "SetAddOriginalIds(self, _arg:bool) -> None\nC++: virtual void SetAddOriginalIds(bool _arg)\n\n"},
  {"AddOriginalIdsOn", PyvtkHyperTreeGridToUnstructuredGrid_AddOriginalIdsOn, METH_VARARGS,
   "AddOriginalIdsOn(self) -> None\nC++: virtual void AddOriginalIdsOn()\n\n"},
  {"AddOriginalIdsOff", PyvtkHyperTreeGridToUnstructuredGrid_AddOriginalIdsOff, METH_VARARGS,
   "AddOriginalIdsOff(self) -> None\nC++: virtual void AddOriginalIdsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridToUnstructuredGrid_Doc =
  "vtkHyperTreeGridToUnstructuredGrid - Convert hyper tree grid to\nunstructured grid.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "JB Primal mesh\n"
  "* Make explicit all leaves of a hyper tree grid by converting them to\n"
  "cells\n"
  "* of an unstructured grid.\n"
  "* Produces segments in 1D, rectangles in 2D, right hexahedra in 3D.\n"
  "* NB: The output will contain superimposed inter-element boundaries\n"
  "  and pending\n"
  "* nodes as a result of T-junctions.\n"
  "*\n"
  "* @sa\n"
  "* vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n"
  "*\n"
  "* @par Thanks:\n"
  "* This class was written by Philippe Pebay, Joachim Pouderoux, and\n"
  "  Charles Law, Kitware 2012\n"
  "* This class was modified by Guenole Harel and Jacques-Bernard\n"
  "  Lekien, 2014\n"
  "* This class was rewritten by Philippe Pebay, 2016\n"
  "* This class was modified by Jacques-Bernard Lekien, 2018\n"
  "* This class was corriged (used orientation) by Jacques-Bernard\n"
  "  Lekien, 2018\n"
  "* This work was supported by Commissariat a l'Energie Atomique\n"
  "* CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridToUnstructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridToUnstructuredGrid", // tp_name
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
  PyvtkHyperTreeGridToUnstructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridToUnstructuredGrid_StaticNew()
{
  return vtkHyperTreeGridToUnstructuredGrid::New();
}

PyObject *PyvtkHyperTreeGridToUnstructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridToUnstructuredGrid_Type, PyvtkHyperTreeGridToUnstructuredGrid_Methods,
    "vtkHyperTreeGridToUnstructuredGrid",
 &PyvtkHyperTreeGridToUnstructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridToUnstructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridToUnstructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridToUnstructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

