// python wrapper for vtkDataObjectTreeInternals
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkDataObjectTreeInternals.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectTreeInternals(PyObject *dict); }
static PyMethodDef PyvtkDataObjectTreeItem_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkDataObjectTreeItem_vtkDataObjectTreeItem_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDataObjectTreeItem");

  vtkDataObject *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp0, "vtkDataObject")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkInformation")))
  {
    vtkDataObjectTreeItem *op = new vtkDataObjectTreeItem(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkDataObjectTreeItem", op);
  }

  return result;
}

static PyObject *
PyvtkDataObjectTreeItem_vtkDataObjectTreeItem_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDataObjectTreeItem");

  vtkDataObjectTreeItem *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkDataObjectTreeItem"))
  {
    vtkDataObjectTreeItem *op = new vtkDataObjectTreeItem(*temp0);

    result = PyVTKSpecialObject_New("vtkDataObjectTreeItem", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDataObjectTreeItem_vtkDataObjectTreeItem_Methods[] = {
  {"vtkDataObjectTreeItem", PyvtkDataObjectTreeItem_vtkDataObjectTreeItem_s1, METH_VARARGS,
   "@|VV *vtkDataObject *vtkInformation"},
  {"vtkDataObjectTreeItem", PyvtkDataObjectTreeItem_vtkDataObjectTreeItem_s2, METH_VARARGS,
   "@W vtkDataObjectTreeItem"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataObjectTreeItem_vtkDataObjectTreeItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObjectTreeItem_vtkDataObjectTreeItem_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
    case 2:
      return PyvtkDataObjectTreeItem_vtkDataObjectTreeItem_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkDataObjectTreeItem");
  return nullptr;
}


static const char *PyvtkDataObjectTreeItem_Doc =

  "vtkDataObjectTreeItem(dobj:vtkDataObject=..., info:vtkInformation=...)\n     -> vtkDataObjectTreeItem\nC++: vtkDataObjectTreeItem(vtkDataObject *dobj=nullptr,\n    vtkInformation *info=nullptr)\nvtkDataObjectTreeItem(__a:vtkDataObjectTreeItem)\n    -> vtkDataObjectTreeItem\nC++: vtkDataObjectTreeItem(const &vtkDataObjectTreeItem)\n""\n"
  "vtkDataObjectTreeItem - no description provided.\n\n"
;

static PyObject *
PyvtkDataObjectTreeItem_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDataObjectTreeItem_vtkDataObjectTreeItem(nullptr, args);
}

static void PyvtkDataObjectTreeItem_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDataObjectTreeItem *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDataObjectTreeItem_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectTreeItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObjectTreeItem", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDataObjectTreeItem_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkDataObjectTreeItem_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDataObjectTreeItem_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkDataObjectTreeItem_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkDataObjectTreeItem_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkDataObjectTreeItem(*static_cast<const vtkDataObjectTreeItem*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkDataObjectTreeItem_TypeNew
extern "C" { PyObject *PyvtkDataObjectTreeItem_TypeNew(); }
#define DECLARED_PyvtkDataObjectTreeItem_TypeNew
#endif

PyObject *PyvtkDataObjectTreeItem_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDataObjectTreeItem_Type,
    PyvtkDataObjectTreeItem_Methods,
    PyvtkDataObjectTreeItem_vtkDataObjectTreeItem_Methods,
    &PyvtkDataObjectTreeItem_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkDataObjectTreeInternals_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDataObjectTreeInternals");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDataObjectTreeInternals *op = new vtkDataObjectTreeInternals();

    result = PyVTKSpecialObject_New("vtkDataObjectTreeInternals", op);
  }

  return result;
}

static PyObject *
PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDataObjectTreeInternals");

  vtkDataObjectTreeInternals *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkDataObjectTreeInternals"))
  {
    vtkDataObjectTreeInternals *op = new vtkDataObjectTreeInternals(*temp0);

    result = PyVTKSpecialObject_New("vtkDataObjectTreeInternals", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals_Methods[] = {
  {"vtkDataObjectTreeInternals", PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals_s2, METH_VARARGS,
   "@W vtkDataObjectTreeInternals"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals_s1(self, args);
    case 1:
      return PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkDataObjectTreeInternals");
  return nullptr;
}


static const char *PyvtkDataObjectTreeInternals_Doc =

  "vtkDataObjectTreeInternals() -> vtkDataObjectTreeInternals\nC++: vtkDataObjectTreeInternals()\nvtkDataObjectTreeInternals(__a:vtkDataObjectTreeInternals)\n    -> vtkDataObjectTreeInternals\nC++: vtkDataObjectTreeInternals(const &vtkDataObjectTreeInternals)\n""\n"
  "vtkDataObjectTreeInternals - \n\n"
;

static PyObject *
PyvtkDataObjectTreeInternals_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals(nullptr, args);
}

static void PyvtkDataObjectTreeInternals_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDataObjectTreeInternals *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDataObjectTreeInternals_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectTreeInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObjectTreeInternals", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDataObjectTreeInternals_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkDataObjectTreeInternals_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDataObjectTreeInternals_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkDataObjectTreeInternals_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkDataObjectTreeInternals_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkDataObjectTreeInternals(*static_cast<const vtkDataObjectTreeInternals*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkDataObjectTreeInternals_TypeNew
extern "C" { PyObject *PyvtkDataObjectTreeInternals_TypeNew(); }
#define DECLARED_PyvtkDataObjectTreeInternals_TypeNew
#endif

PyObject *PyvtkDataObjectTreeInternals_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDataObjectTreeInternals_Type,
    PyvtkDataObjectTreeInternals_Methods,
    PyvtkDataObjectTreeInternals_vtkDataObjectTreeInternals_Methods,
    &PyvtkDataObjectTreeInternals_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkDataObjectTreeIndex_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDataObjectTreeIndex");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDataObjectTreeIndex *op = new vtkDataObjectTreeIndex();

    result = PyVTKSpecialObject_New("vtkDataObjectTreeIndex", op);
  }

  return result;
}

static PyObject *
PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkDataObjectTreeIndex");

  vtkDataObjectTreeIndex *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkDataObjectTreeIndex"))
  {
    vtkDataObjectTreeIndex *op = new vtkDataObjectTreeIndex(*temp0);

    result = PyVTKSpecialObject_New("vtkDataObjectTreeIndex", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex_Methods[] = {
  {"vtkDataObjectTreeIndex", PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex_s2, METH_VARARGS,
   "@W vtkDataObjectTreeIndex"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex_s1(self, args);
    case 1:
      return PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkDataObjectTreeIndex");
  return nullptr;
}


static const char *PyvtkDataObjectTreeIndex_Doc =

  "vtkDataObjectTreeIndex() -> vtkDataObjectTreeIndex\nC++: vtkDataObjectTreeIndex()\nvtkDataObjectTreeIndex(__a:vtkDataObjectTreeIndex)\n    -> vtkDataObjectTreeIndex\nC++: vtkDataObjectTreeIndex(const &vtkDataObjectTreeIndex)\n""\n"
  "vtkDataObjectTreeIndex - no description provided.\n\n"
;

static PyObject *
PyvtkDataObjectTreeIndex_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex(nullptr, args);
}

static void PyvtkDataObjectTreeIndex_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDataObjectTreeIndex *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDataObjectTreeIndex_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectTreeIndex_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObjectTreeIndex", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDataObjectTreeIndex_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkDataObjectTreeIndex_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDataObjectTreeIndex_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkDataObjectTreeIndex_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkDataObjectTreeIndex_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkDataObjectTreeIndex(*static_cast<const vtkDataObjectTreeIndex*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkDataObjectTreeIndex_TypeNew
extern "C" { PyObject *PyvtkDataObjectTreeIndex_TypeNew(); }
#define DECLARED_PyvtkDataObjectTreeIndex_TypeNew
#endif

PyObject *PyvtkDataObjectTreeIndex_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDataObjectTreeIndex_Type,
    PyvtkDataObjectTreeIndex_Methods,
    PyvtkDataObjectTreeIndex_vtkDataObjectTreeIndex_Methods,
    &PyvtkDataObjectTreeIndex_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObjectTreeInternals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectTreeItem_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectTreeItem", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDataObjectTreeInternals_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectTreeInternals", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDataObjectTreeIndex_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectTreeIndex", o) != 0)
  {
    Py_DECREF(o);
  }

}

