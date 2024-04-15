// python wrapper for vtkStdString
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStdString.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStdString(PyObject *dict); }
static PyMethodDef PyvtkStdString_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkStdString_vtkStdString_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStdString");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStdString *op = new vtkStdString();

    result = PyVTKSpecialObject_New("vtkStdString", op);
  }

  return result;
}

static PyObject *
PyvtkStdString_vtkStdString_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStdString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString *op = new vtkStdString(temp0);

    result = PyVTKSpecialObject_New("vtkStdString", op);
  }

  return result;
}

static PyObject *
PyvtkStdString_vtkStdString_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStdString");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString *op = new vtkStdString(temp0);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    result = PyVTKSpecialObject_New("vtkStdString", op);
  }

  return result;
}

static PyObject *
PyvtkStdString_vtkStdString_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStdString");

  vtkStdString *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStdString"))
  {
    vtkStdString *op = new vtkStdString(*temp0);

    result = PyVTKSpecialObject_New("vtkStdString", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkStdString_vtkStdString_Methods[] = {
  {"vtkStdString", PyvtkStdString_vtkStdString_s2, METH_VARARGS,
   "@s"},
  {"vtkStdString", PyvtkStdString_vtkStdString_s3, METH_VARARGS,
   "@s"},
  {"vtkStdString", PyvtkStdString_vtkStdString_s4, METH_VARARGS,
   "@W vtkStdString"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStdString_vtkStdString(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStdString_vtkStdString_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkStdString_vtkStdString_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkStdString");
  return nullptr;
}


static const char *PyvtkStdString_Doc =

  "vtkStdString() -> vtkStdString\nC++: vtkStdString()\nvtkStdString(s:str) -> vtkStdString\nC++: vtkStdString(const std::string &s)\nvtkStdString(s:str) -> vtkStdString\nC++: vtkStdString(std::string &&s)\nvtkStdString(__a:vtkStdString) -> vtkStdString\nC++: vtkStdString(const &vtkStdString)\n""\n"
  "vtkStdString - Wrapper around std::string to keep symbols short.\n\n"
  "vtkStdString derives from std::string to provide shorter symbol names\n"
  "than basic_string<...> in namespace std given by the standard STL\n"
  "string.\n\n";

static PyObject *
PyvtkStdString_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkStdString_vtkStdString(nullptr, args);
}

static void PyvtkStdString_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkStdString *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkStdString_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStdString_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkStdString", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkStdString_Delete, // tp_dealloc
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
  PyvtkStdString_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkStdString_Doc, // tp_doc
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
  PyvtkStdString_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkStdString_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkStdString(*static_cast<const vtkStdString*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkStdString_TypeNew
extern "C" { PyObject *PyvtkStdString_TypeNew(); }
#define DECLARED_PyvtkStdString_TypeNew
#endif

PyObject *PyvtkStdString_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkStdString_Type,
    PyvtkStdString_Methods,
    PyvtkStdString_vtkStdString_Methods,
    &PyvtkStdString_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStdString(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStdString_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkStdString", o) != 0)
  {
    Py_DECREF(o);
  }

}

