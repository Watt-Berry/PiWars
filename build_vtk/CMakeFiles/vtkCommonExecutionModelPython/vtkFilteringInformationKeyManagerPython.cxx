// python wrapper for vtkFilteringInformationKeyManager
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkFilteringInformationKeyManager.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFilteringInformationKeyManager(PyObject *dict); }
static PyMethodDef PyvtkFilteringInformationKeyManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkFilteringInformationKeyManager_vtkFilteringInformationKeyManager(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFilteringInformationKeyManager");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFilteringInformationKeyManager *op = new vtkFilteringInformationKeyManager();

    result = PyVTKSpecialObject_New("vtkFilteringInformationKeyManager", op);
  }

  return result;
}

static PyMethodDef PyvtkFilteringInformationKeyManager_vtkFilteringInformationKeyManager_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkFilteringInformationKeyManager_Doc =

  "vtkFilteringInformationKeyManager()\n    -> vtkFilteringInformationKeyManager\nC++: vtkFilteringInformationKeyManager()\n""\n"
  "vtkFilteringInformationKeyManager - Manages key types in vtkFiltering.\n\n"
  "vtkFilteringInformationKeyManager is included in the header of any\n"
  "subclass of vtkInformationKey defined in the vtkFiltering library. It\n"
  "makes sure that the table of keys is created before and destroyed\n"
  "after it is used.\n\n";

static PyObject *
PyvtkFilteringInformationKeyManager_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkFilteringInformationKeyManager_vtkFilteringInformationKeyManager(nullptr, args);
}

static void PyvtkFilteringInformationKeyManager_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFilteringInformationKeyManager *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFilteringInformationKeyManager_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFilteringInformationKeyManager_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkFilteringInformationKeyManager", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFilteringInformationKeyManager_Delete, // tp_dealloc
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
  PyvtkFilteringInformationKeyManager_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFilteringInformationKeyManager_Doc, // tp_doc
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
  PyvtkFilteringInformationKeyManager_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkFilteringInformationKeyManager_TypeNew
extern "C" { PyObject *PyvtkFilteringInformationKeyManager_TypeNew(); }
#define DECLARED_PyvtkFilteringInformationKeyManager_TypeNew
#endif

PyObject *PyvtkFilteringInformationKeyManager_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkFilteringInformationKeyManager_Type,
    PyvtkFilteringInformationKeyManager_Methods,
    PyvtkFilteringInformationKeyManager_vtkFilteringInformationKeyManager_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFilteringInformationKeyManager(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFilteringInformationKeyManager_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFilteringInformationKeyManager", o) != 0)
  {
    Py_DECREF(o);
  }

}

