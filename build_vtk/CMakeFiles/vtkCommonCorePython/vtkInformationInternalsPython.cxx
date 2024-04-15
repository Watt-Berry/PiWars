// python wrapper for vtkInformationInternals
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkInformationInternals.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformationInternals(PyObject *dict); }
static PyMethodDef PyvtkInformationInternals_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkInformationInternals_vtkInformationInternals(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkInformationInternals");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInternals *op = new vtkInformationInternals();

    result = PyVTKSpecialObject_New("vtkInformationInternals", op);
  }

  return result;
}

static PyMethodDef PyvtkInformationInternals_vtkInformationInternals_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkInformationInternals_Doc =

  "vtkInformationInternals() -> vtkInformationInternals\nC++: vtkInformationInternals()\n""\n"
  "vtkInformationInternals - internal structure for vtkInformation\n\n"
  "vtkInformationInternals is used in internal implementation of\n"
  "vtkInformation. This should only be accessed by friends and\n"
  "sub-classes of that class.\n\n";

static PyObject *
PyvtkInformationInternals_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkInformationInternals_vtkInformationInternals(nullptr, args);
}

static void PyvtkInformationInternals_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkInformationInternals *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkInformationInternals_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInformationInternals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkInformationInternals", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkInformationInternals_Delete, // tp_dealloc
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
  PyvtkInformationInternals_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkInformationInternals_Doc, // tp_doc
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
  PyvtkInformationInternals_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkInformationInternals_TypeNew
extern "C" { PyObject *PyvtkInformationInternals_TypeNew(); }
#define DECLARED_PyvtkInformationInternals_TypeNew
#endif

PyObject *PyvtkInformationInternals_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkInformationInternals_Type,
    PyvtkInformationInternals_Methods,
    PyvtkInformationInternals_vtkInformationInternals_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformationInternals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformationInternals_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkInformationInternals", o) != 0)
  {
    Py_DECREF(o);
  }

}

