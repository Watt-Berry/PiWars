// python wrapper for vtkGarbageCollectorManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkGarbageCollectorManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGarbageCollectorManager(PyObject *dict); }
static PyMethodDef PyvtkGarbageCollectorManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkGarbageCollectorManager_vtkGarbageCollectorManager(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkGarbageCollectorManager");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkGarbageCollectorManager *op = new vtkGarbageCollectorManager();

    result = PyVTKSpecialObject_New("vtkGarbageCollectorManager", op);
  }

  return result;
}

static PyMethodDef PyvtkGarbageCollectorManager_vtkGarbageCollectorManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkGarbageCollectorManager_Doc =

  "vtkGarbageCollectorManager() -> vtkGarbageCollectorManager\nC++: vtkGarbageCollectorManager()\n""\n"
  "vtkGarbageCollectorManager - Manages the vtkGarbageCollector\nsingleton.\n\n"
  "vtkGarbageCollectorManager should be included in any translation unit\n"
  "that will use vtkGarbageCollector or that implements the singleton\n"
  "pattern.  It makes sure that the vtkGarbageCollector singleton is\n"
  "created before and destroyed after it is used.\n\n";

static PyObject *
PyvtkGarbageCollectorManager_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkGarbageCollectorManager_vtkGarbageCollectorManager(nullptr, args);
}

static void PyvtkGarbageCollectorManager_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkGarbageCollectorManager *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkGarbageCollectorManager_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGarbageCollectorManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkGarbageCollectorManager", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkGarbageCollectorManager_Delete, // tp_dealloc
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
  PyvtkGarbageCollectorManager_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkGarbageCollectorManager_Doc, // tp_doc
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
  PyvtkGarbageCollectorManager_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkGarbageCollectorManager_TypeNew
extern "C" { PyObject *PyvtkGarbageCollectorManager_TypeNew(); }
#define DECLARED_PyvtkGarbageCollectorManager_TypeNew
#endif

PyObject *PyvtkGarbageCollectorManager_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkGarbageCollectorManager_Type,
    PyvtkGarbageCollectorManager_Methods,
    PyvtkGarbageCollectorManager_vtkGarbageCollectorManager_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGarbageCollectorManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGarbageCollectorManager_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkGarbageCollectorManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

