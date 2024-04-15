// python wrapper for vtkFloatingPointExceptions
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkFloatingPointExceptions.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFloatingPointExceptions(PyObject *dict); }

static PyObject *
PyvtkFloatingPointExceptions_Enable(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Enable");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFloatingPointExceptions::Enable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFloatingPointExceptions_Disable(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Disable");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFloatingPointExceptions::Disable();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFloatingPointExceptions_Methods[] = {
  {"Enable", PyvtkFloatingPointExceptions_Enable, METH_VARARGS,
   "Enable() -> None\nC++: static void Enable()\n\nEnable floating point exceptions.\n"},
  {"Disable", PyvtkFloatingPointExceptions_Disable, METH_VARARGS,
   "Disable() -> None\nC++: static void Disable()\n\nDisable floating point exceptions.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkFloatingPointExceptions_Doc =
  "vtkFloatingPointExceptions - Deal with floating-point exceptions\n\n"
  "Right now it is really basic and it only provides a function to\n"
  "enable floating point exceptions on some compilers. Note that Borland\n"
  "C++ has floating-point exceptions by default, not Visual studio nor\n"
  "gcc. It is mainly use to optionally enable floating point exceptions\n"
  "in the C++ tests.\n\n";

static PyObject *
PyvtkFloatingPointExceptions_New(PyTypeObject * /*unused*/, PyObject * /*unused*/, PyObject * /*unused*/)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkFloatingPointExceptions_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFloatingPointExceptions *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFloatingPointExceptions_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFloatingPointExceptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkFloatingPointExceptions", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFloatingPointExceptions_Delete, // tp_dealloc
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
  PyvtkFloatingPointExceptions_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFloatingPointExceptions_Doc, // tp_doc
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
  PyvtkFloatingPointExceptions_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkFloatingPointExceptions_TypeNew
extern "C" { PyObject *PyvtkFloatingPointExceptions_TypeNew(); }
#define DECLARED_PyvtkFloatingPointExceptions_TypeNew
#endif

PyObject *PyvtkFloatingPointExceptions_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkFloatingPointExceptions_Type,
    PyvtkFloatingPointExceptions_Methods,
    nullptr,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFloatingPointExceptions(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFloatingPointExceptions_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFloatingPointExceptions", o) != 0)
  {
    Py_DECREF(o);
  }

}

