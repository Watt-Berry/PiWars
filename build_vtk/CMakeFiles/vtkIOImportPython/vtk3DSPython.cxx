// python wrapper for vtk3DS
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtk3DS.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtk3DS(PyObject *dict); }
static PyMethodDef Pyvtk3DSList_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSList_t_vtk3DSList_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSList_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSList_t *op = new vtk3DSList_t();

    result = PyVTKSpecialObject_New("vtk3DSList_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSList_t_vtk3DSList_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSList_t");

  vtk3DSList_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSList_t"))
  {
    vtk3DSList_t *op = new vtk3DSList_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSList_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSList_t_vtk3DSList_t_Methods[] = {
  {"vtk3DSList_t", Pyvtk3DSList_t_vtk3DSList_t_s2, METH_VARARGS,
   "@W vtk3DSList_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSList_t_vtk3DSList_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSList_t_vtk3DSList_t_s1(self, args);
    case 1:
      return Pyvtk3DSList_t_vtk3DSList_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSList_t");
  return nullptr;
}


static const char *Pyvtk3DSList_t_Doc =

  "vtk3DSList_t() -> vtk3DSList_t\nC++: vtk3DSList_t()\nvtk3DSList_t(__a:vtk3DSList_t) -> vtk3DSList_t\nC++: vtk3DSList_t(const &vtk3DSList_t)\n""\n"
  "vtk3DSList_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSList_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSList_t_vtk3DSList_t(nullptr, args);
}

static void Pyvtk3DSList_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSList_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSList_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSList_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSList_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSList_t_Delete, // tp_dealloc
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
  Pyvtk3DSList_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSList_t_Doc, // tp_doc
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
  Pyvtk3DSList_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSList_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSList_t(*static_cast<const vtk3DSList_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSList_t_TypeNew
extern "C" { PyObject *Pyvtk3DSList_t_TypeNew(); }
#define DECLARED_Pyvtk3DSList_t_TypeNew
#endif

PyObject *Pyvtk3DSList_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSList_t_Type,
    Pyvtk3DSList_t_Methods,
    Pyvtk3DSList_t_vtk3DSList_t_Methods,
    &Pyvtk3DSList_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSFace_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSFace_t_vtk3DSFace_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSFace_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSFace_t *op = new vtk3DSFace_t();

    result = PyVTKSpecialObject_New("vtk3DSFace_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSFace_t_vtk3DSFace_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSFace_t");

  vtk3DSFace_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSFace_t"))
  {
    vtk3DSFace_t *op = new vtk3DSFace_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSFace_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSFace_t_vtk3DSFace_t_Methods[] = {
  {"vtk3DSFace_t", Pyvtk3DSFace_t_vtk3DSFace_t_s2, METH_VARARGS,
   "@W vtk3DSFace_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSFace_t_vtk3DSFace_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSFace_t_vtk3DSFace_t_s1(self, args);
    case 1:
      return Pyvtk3DSFace_t_vtk3DSFace_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSFace_t");
  return nullptr;
}


static const char *Pyvtk3DSFace_t_Doc =

  "vtk3DSFace_t() -> vtk3DSFace_t\nC++: vtk3DSFace_t()\nvtk3DSFace_t(__a:vtk3DSFace_t) -> vtk3DSFace_t\nC++: vtk3DSFace_t(const &vtk3DSFace_t)\n""\n"
  "vtk3DSFace_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSFace_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSFace_t_vtk3DSFace_t(nullptr, args);
}

static void Pyvtk3DSFace_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSFace_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSFace_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSFace_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSFace_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSFace_t_Delete, // tp_dealloc
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
  Pyvtk3DSFace_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSFace_t_Doc, // tp_doc
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
  Pyvtk3DSFace_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSFace_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSFace_t(*static_cast<const vtk3DSFace_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSFace_t_TypeNew
extern "C" { PyObject *Pyvtk3DSFace_t_TypeNew(); }
#define DECLARED_Pyvtk3DSFace_t_TypeNew
#endif

PyObject *Pyvtk3DSFace_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSFace_t_Type,
    Pyvtk3DSFace_t_Methods,
    Pyvtk3DSFace_t_vtk3DSFace_t_Methods,
    &Pyvtk3DSFace_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSColour_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSColour_t_vtk3DSColour_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSColour_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSColour_t *op = new vtk3DSColour_t();

    result = PyVTKSpecialObject_New("vtk3DSColour_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSColour_t_vtk3DSColour_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSColour_t");

  vtk3DSColour_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSColour_t"))
  {
    vtk3DSColour_t *op = new vtk3DSColour_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSColour_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSColour_t_vtk3DSColour_t_Methods[] = {
  {"vtk3DSColour_t", Pyvtk3DSColour_t_vtk3DSColour_t_s2, METH_VARARGS,
   "@W vtk3DSColour_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSColour_t_vtk3DSColour_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSColour_t_vtk3DSColour_t_s1(self, args);
    case 1:
      return Pyvtk3DSColour_t_vtk3DSColour_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSColour_t");
  return nullptr;
}


static const char *Pyvtk3DSColour_t_Doc =

  "vtk3DSColour_t() -> vtk3DSColour_t\nC++: vtk3DSColour_t()\nvtk3DSColour_t(__a:vtk3DSColour_t) -> vtk3DSColour_t\nC++: vtk3DSColour_t(const &vtk3DSColour_t)\n""\n"
  "vtk3DSColour_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSColour_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSColour_t_vtk3DSColour_t(nullptr, args);
}

static void Pyvtk3DSColour_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSColour_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSColour_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSColour_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSColour_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSColour_t_Delete, // tp_dealloc
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
  Pyvtk3DSColour_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSColour_t_Doc, // tp_doc
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
  Pyvtk3DSColour_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSColour_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSColour_t(*static_cast<const vtk3DSColour_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSColour_t_TypeNew
extern "C" { PyObject *Pyvtk3DSColour_t_TypeNew(); }
#define DECLARED_Pyvtk3DSColour_t_TypeNew
#endif

PyObject *Pyvtk3DSColour_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSColour_t_Type,
    Pyvtk3DSColour_t_Methods,
    Pyvtk3DSColour_t_vtk3DSColour_t_Methods,
    &Pyvtk3DSColour_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSOmniLight_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSOmniLight_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSOmniLight_t *op = new vtk3DSOmniLight_t();

    result = PyVTKSpecialObject_New("vtk3DSOmniLight_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSOmniLight_t");

  vtk3DSOmniLight_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSOmniLight_t"))
  {
    vtk3DSOmniLight_t *op = new vtk3DSOmniLight_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSOmniLight_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t_Methods[] = {
  {"vtk3DSOmniLight_t", Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t_s2, METH_VARARGS,
   "@W vtk3DSOmniLight_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t_s1(self, args);
    case 1:
      return Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSOmniLight_t");
  return nullptr;
}


static const char *Pyvtk3DSOmniLight_t_Doc =

  "vtk3DSOmniLight_t() -> vtk3DSOmniLight_t\nC++: vtk3DSOmniLight_t()\nvtk3DSOmniLight_t(__a:vtk3DSOmniLight_t) -> vtk3DSOmniLight_t\nC++: vtk3DSOmniLight_t(const &vtk3DSOmniLight_t)\n""\n"
  "vtk3DSOmniLight_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSOmniLight_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t(nullptr, args);
}

static void Pyvtk3DSOmniLight_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSOmniLight_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSOmniLight_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSOmniLight_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSOmniLight_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSOmniLight_t_Delete, // tp_dealloc
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
  Pyvtk3DSOmniLight_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSOmniLight_t_Doc, // tp_doc
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
  Pyvtk3DSOmniLight_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSOmniLight_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSOmniLight_t(*static_cast<const vtk3DSOmniLight_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSOmniLight_t_TypeNew
extern "C" { PyObject *Pyvtk3DSOmniLight_t_TypeNew(); }
#define DECLARED_Pyvtk3DSOmniLight_t_TypeNew
#endif

PyObject *Pyvtk3DSOmniLight_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSOmniLight_t_Type,
    Pyvtk3DSOmniLight_t_Methods,
    Pyvtk3DSOmniLight_t_vtk3DSOmniLight_t_Methods,
    &Pyvtk3DSOmniLight_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSSpotLight_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSSpotLight_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSSpotLight_t *op = new vtk3DSSpotLight_t();

    result = PyVTKSpecialObject_New("vtk3DSSpotLight_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSSpotLight_t");

  vtk3DSSpotLight_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSSpotLight_t"))
  {
    vtk3DSSpotLight_t *op = new vtk3DSSpotLight_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSSpotLight_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t_Methods[] = {
  {"vtk3DSSpotLight_t", Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t_s2, METH_VARARGS,
   "@W vtk3DSSpotLight_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t_s1(self, args);
    case 1:
      return Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSSpotLight_t");
  return nullptr;
}


static const char *Pyvtk3DSSpotLight_t_Doc =

  "vtk3DSSpotLight_t() -> vtk3DSSpotLight_t\nC++: vtk3DSSpotLight_t()\nvtk3DSSpotLight_t(__a:vtk3DSSpotLight_t) -> vtk3DSSpotLight_t\nC++: vtk3DSSpotLight_t(const &vtk3DSSpotLight_t)\n""\n"
  "vtk3DSSpotLight_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSSpotLight_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t(nullptr, args);
}

static void Pyvtk3DSSpotLight_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSSpotLight_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSSpotLight_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSSpotLight_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSSpotLight_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSSpotLight_t_Delete, // tp_dealloc
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
  Pyvtk3DSSpotLight_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSSpotLight_t_Doc, // tp_doc
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
  Pyvtk3DSSpotLight_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSSpotLight_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSSpotLight_t(*static_cast<const vtk3DSSpotLight_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSSpotLight_t_TypeNew
extern "C" { PyObject *Pyvtk3DSSpotLight_t_TypeNew(); }
#define DECLARED_Pyvtk3DSSpotLight_t_TypeNew
#endif

PyObject *Pyvtk3DSSpotLight_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSSpotLight_t_Type,
    Pyvtk3DSSpotLight_t_Methods,
    Pyvtk3DSSpotLight_t_vtk3DSSpotLight_t_Methods,
    &Pyvtk3DSSpotLight_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSCamera_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSCamera_t_vtk3DSCamera_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSCamera_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSCamera_t *op = new vtk3DSCamera_t();

    result = PyVTKSpecialObject_New("vtk3DSCamera_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSCamera_t_vtk3DSCamera_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSCamera_t");

  vtk3DSCamera_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSCamera_t"))
  {
    vtk3DSCamera_t *op = new vtk3DSCamera_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSCamera_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSCamera_t_vtk3DSCamera_t_Methods[] = {
  {"vtk3DSCamera_t", Pyvtk3DSCamera_t_vtk3DSCamera_t_s2, METH_VARARGS,
   "@W vtk3DSCamera_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSCamera_t_vtk3DSCamera_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSCamera_t_vtk3DSCamera_t_s1(self, args);
    case 1:
      return Pyvtk3DSCamera_t_vtk3DSCamera_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSCamera_t");
  return nullptr;
}


static const char *Pyvtk3DSCamera_t_Doc =

  "vtk3DSCamera_t() -> vtk3DSCamera_t\nC++: vtk3DSCamera_t()\nvtk3DSCamera_t(__a:vtk3DSCamera_t) -> vtk3DSCamera_t\nC++: vtk3DSCamera_t(const &vtk3DSCamera_t)\n""\n"
  "vtk3DSCamera_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSCamera_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSCamera_t_vtk3DSCamera_t(nullptr, args);
}

static void Pyvtk3DSCamera_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSCamera_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSCamera_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSCamera_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSCamera_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSCamera_t_Delete, // tp_dealloc
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
  Pyvtk3DSCamera_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSCamera_t_Doc, // tp_doc
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
  Pyvtk3DSCamera_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSCamera_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSCamera_t(*static_cast<const vtk3DSCamera_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSCamera_t_TypeNew
extern "C" { PyObject *Pyvtk3DSCamera_t_TypeNew(); }
#define DECLARED_Pyvtk3DSCamera_t_TypeNew
#endif

PyObject *Pyvtk3DSCamera_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSCamera_t_Type,
    Pyvtk3DSCamera_t_Methods,
    Pyvtk3DSCamera_t_vtk3DSCamera_t_Methods,
    &Pyvtk3DSCamera_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSMaterial_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSMaterial_t_vtk3DSMaterial_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSMaterial_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSMaterial_t *op = new vtk3DSMaterial_t();

    result = PyVTKSpecialObject_New("vtk3DSMaterial_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSMaterial_t_vtk3DSMaterial_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSMaterial_t");

  vtk3DSMaterial_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSMaterial_t"))
  {
    vtk3DSMaterial_t *op = new vtk3DSMaterial_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSMaterial_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSMaterial_t_vtk3DSMaterial_t_Methods[] = {
  {"vtk3DSMaterial_t", Pyvtk3DSMaterial_t_vtk3DSMaterial_t_s2, METH_VARARGS,
   "@W vtk3DSMaterial_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSMaterial_t_vtk3DSMaterial_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSMaterial_t_vtk3DSMaterial_t_s1(self, args);
    case 1:
      return Pyvtk3DSMaterial_t_vtk3DSMaterial_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSMaterial_t");
  return nullptr;
}


static const char *Pyvtk3DSMaterial_t_Doc =

  "vtk3DSMaterial_t() -> vtk3DSMaterial_t\nC++: vtk3DSMaterial_t()\nvtk3DSMaterial_t(__a:vtk3DSMaterial_t) -> vtk3DSMaterial_t\nC++: vtk3DSMaterial_t(const &vtk3DSMaterial_t)\n""\n"
  "vtk3DSMaterial_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSMaterial_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSMaterial_t_vtk3DSMaterial_t(nullptr, args);
}

static void Pyvtk3DSMaterial_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSMaterial_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSMaterial_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSMaterial_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSMaterial_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSMaterial_t_Delete, // tp_dealloc
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
  Pyvtk3DSMaterial_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSMaterial_t_Doc, // tp_doc
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
  Pyvtk3DSMaterial_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSMaterial_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSMaterial_t(*static_cast<const vtk3DSMaterial_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSMaterial_t_TypeNew
extern "C" { PyObject *Pyvtk3DSMaterial_t_TypeNew(); }
#define DECLARED_Pyvtk3DSMaterial_t_TypeNew
#endif

PyObject *Pyvtk3DSMaterial_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSMaterial_t_Type,
    Pyvtk3DSMaterial_t_Methods,
    Pyvtk3DSMaterial_t_vtk3DSMaterial_t_Methods,
    &Pyvtk3DSMaterial_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSSummary_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSSummary_t_vtk3DSSummary_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSSummary_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSSummary_t *op = new vtk3DSSummary_t();

    result = PyVTKSpecialObject_New("vtk3DSSummary_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSSummary_t_vtk3DSSummary_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSSummary_t");

  vtk3DSSummary_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSSummary_t"))
  {
    vtk3DSSummary_t *op = new vtk3DSSummary_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSSummary_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSSummary_t_vtk3DSSummary_t_Methods[] = {
  {"vtk3DSSummary_t", Pyvtk3DSSummary_t_vtk3DSSummary_t_s2, METH_VARARGS,
   "@W vtk3DSSummary_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSSummary_t_vtk3DSSummary_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSSummary_t_vtk3DSSummary_t_s1(self, args);
    case 1:
      return Pyvtk3DSSummary_t_vtk3DSSummary_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSSummary_t");
  return nullptr;
}


static const char *Pyvtk3DSSummary_t_Doc =

  "vtk3DSSummary_t() -> vtk3DSSummary_t\nC++: vtk3DSSummary_t()\nvtk3DSSummary_t(__a:vtk3DSSummary_t) -> vtk3DSSummary_t\nC++: vtk3DSSummary_t(const &vtk3DSSummary_t)\n""\n"
  "vtk3DSSummary_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSSummary_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSSummary_t_vtk3DSSummary_t(nullptr, args);
}

static void Pyvtk3DSSummary_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSSummary_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSSummary_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSSummary_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSSummary_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSSummary_t_Delete, // tp_dealloc
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
  Pyvtk3DSSummary_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSSummary_t_Doc, // tp_doc
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
  Pyvtk3DSSummary_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSSummary_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSSummary_t(*static_cast<const vtk3DSSummary_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSSummary_t_TypeNew
extern "C" { PyObject *Pyvtk3DSSummary_t_TypeNew(); }
#define DECLARED_Pyvtk3DSSummary_t_TypeNew
#endif

PyObject *Pyvtk3DSSummary_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSSummary_t_Type,
    Pyvtk3DSSummary_t_Methods,
    Pyvtk3DSSummary_t_vtk3DSSummary_t_Methods,
    &Pyvtk3DSSummary_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSMatProp_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSMatProp_t_vtk3DSMatProp_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSMatProp_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSMatProp_t *op = new vtk3DSMatProp_t();

    result = PyVTKSpecialObject_New("vtk3DSMatProp_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSMatProp_t_vtk3DSMatProp_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSMatProp_t");

  vtk3DSMatProp_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSMatProp_t"))
  {
    vtk3DSMatProp_t *op = new vtk3DSMatProp_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSMatProp_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSMatProp_t_vtk3DSMatProp_t_Methods[] = {
  {"vtk3DSMatProp_t", Pyvtk3DSMatProp_t_vtk3DSMatProp_t_s2, METH_VARARGS,
   "@W vtk3DSMatProp_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSMatProp_t_vtk3DSMatProp_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSMatProp_t_vtk3DSMatProp_t_s1(self, args);
    case 1:
      return Pyvtk3DSMatProp_t_vtk3DSMatProp_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSMatProp_t");
  return nullptr;
}


static const char *Pyvtk3DSMatProp_t_Doc =

  "vtk3DSMatProp_t() -> vtk3DSMatProp_t\nC++: vtk3DSMatProp_t()\nvtk3DSMatProp_t(__a:vtk3DSMatProp_t) -> vtk3DSMatProp_t\nC++: vtk3DSMatProp_t(const &vtk3DSMatProp_t)\n""\n"
  "vtk3DSMatProp_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSMatProp_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSMatProp_t_vtk3DSMatProp_t(nullptr, args);
}

static void Pyvtk3DSMatProp_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSMatProp_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSMatProp_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSMatProp_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSMatProp_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSMatProp_t_Delete, // tp_dealloc
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
  Pyvtk3DSMatProp_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSMatProp_t_Doc, // tp_doc
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
  Pyvtk3DSMatProp_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSMatProp_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSMatProp_t(*static_cast<const vtk3DSMatProp_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSMatProp_t_TypeNew
extern "C" { PyObject *Pyvtk3DSMatProp_t_TypeNew(); }
#define DECLARED_Pyvtk3DSMatProp_t_TypeNew
#endif

PyObject *Pyvtk3DSMatProp_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSMatProp_t_Type,
    Pyvtk3DSMatProp_t_Methods,
    Pyvtk3DSMatProp_t_vtk3DSMatProp_t_Methods,
    &Pyvtk3DSMatProp_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSMesh_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSMesh_t_vtk3DSMesh_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSMesh_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSMesh_t *op = new vtk3DSMesh_t();

    result = PyVTKSpecialObject_New("vtk3DSMesh_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSMesh_t_vtk3DSMesh_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSMesh_t");

  vtk3DSMesh_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSMesh_t"))
  {
    vtk3DSMesh_t *op = new vtk3DSMesh_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSMesh_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSMesh_t_vtk3DSMesh_t_Methods[] = {
  {"vtk3DSMesh_t", Pyvtk3DSMesh_t_vtk3DSMesh_t_s2, METH_VARARGS,
   "@W vtk3DSMesh_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSMesh_t_vtk3DSMesh_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSMesh_t_vtk3DSMesh_t_s1(self, args);
    case 1:
      return Pyvtk3DSMesh_t_vtk3DSMesh_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSMesh_t");
  return nullptr;
}


static const char *Pyvtk3DSMesh_t_Doc =

  "vtk3DSMesh_t() -> vtk3DSMesh_t\nC++: vtk3DSMesh_t()\nvtk3DSMesh_t(__a:vtk3DSMesh_t) -> vtk3DSMesh_t\nC++: vtk3DSMesh_t(const &vtk3DSMesh_t)\n""\n"
  "vtk3DSMesh_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSMesh_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSMesh_t_vtk3DSMesh_t(nullptr, args);
}

static void Pyvtk3DSMesh_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSMesh_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSMesh_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSMesh_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSMesh_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSMesh_t_Delete, // tp_dealloc
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
  Pyvtk3DSMesh_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSMesh_t_Doc, // tp_doc
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
  Pyvtk3DSMesh_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSMesh_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSMesh_t(*static_cast<const vtk3DSMesh_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSMesh_t_TypeNew
extern "C" { PyObject *Pyvtk3DSMesh_t_TypeNew(); }
#define DECLARED_Pyvtk3DSMesh_t_TypeNew
#endif

PyObject *Pyvtk3DSMesh_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSMesh_t_Type,
    Pyvtk3DSMesh_t_Methods,
    Pyvtk3DSMesh_t_vtk3DSMesh_t_Methods,
    &Pyvtk3DSMesh_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSChunk_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSChunk_t_vtk3DSChunk_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSChunk_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSChunk_t *op = new vtk3DSChunk_t();

    result = PyVTKSpecialObject_New("vtk3DSChunk_t", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSChunk_t_vtk3DSChunk_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSChunk_t");

  vtk3DSChunk_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSChunk_t"))
  {
    vtk3DSChunk_t *op = new vtk3DSChunk_t(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSChunk_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSChunk_t_vtk3DSChunk_t_Methods[] = {
  {"vtk3DSChunk_t", Pyvtk3DSChunk_t_vtk3DSChunk_t_s2, METH_VARARGS,
   "@W vtk3DSChunk_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSChunk_t_vtk3DSChunk_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSChunk_t_vtk3DSChunk_t_s1(self, args);
    case 1:
      return Pyvtk3DSChunk_t_vtk3DSChunk_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSChunk_t");
  return nullptr;
}


static const char *Pyvtk3DSChunk_t_Doc =

  "vtk3DSChunk_t() -> vtk3DSChunk_t\nC++: vtk3DSChunk_t()\nvtk3DSChunk_t(__a:vtk3DSChunk_t) -> vtk3DSChunk_t\nC++: vtk3DSChunk_t(const &vtk3DSChunk_t)\n""\n"
  "vtk3DSChunk_t - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSChunk_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSChunk_t_vtk3DSChunk_t(nullptr, args);
}

static void Pyvtk3DSChunk_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSChunk_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSChunk_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSChunk_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSChunk_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSChunk_t_Delete, // tp_dealloc
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
  Pyvtk3DSChunk_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSChunk_t_Doc, // tp_doc
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
  Pyvtk3DSChunk_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSChunk_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSChunk_t(*static_cast<const vtk3DSChunk_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSChunk_t_TypeNew
extern "C" { PyObject *Pyvtk3DSChunk_t_TypeNew(); }
#define DECLARED_Pyvtk3DSChunk_t_TypeNew
#endif

PyObject *Pyvtk3DSChunk_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSChunk_t_Type,
    Pyvtk3DSChunk_t_Methods,
    Pyvtk3DSChunk_t_vtk3DSChunk_t_Methods,
    &Pyvtk3DSChunk_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef Pyvtk3DSColour_t_24_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
Pyvtk3DSColour_t_24_vtk3DSColour_t_24_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSColour_t_24");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtk3DSColour_t_24 *op = new vtk3DSColour_t_24();

    result = PyVTKSpecialObject_New("vtk3DSColour_t_24", op);
  }

  return result;
}

static PyObject *
Pyvtk3DSColour_t_24_vtk3DSColour_t_24_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtk3DSColour_t_24");

  vtk3DSColour_t_24 *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtk3DSColour_t_24"))
  {
    vtk3DSColour_t_24 *op = new vtk3DSColour_t_24(*temp0);

    result = PyVTKSpecialObject_New("vtk3DSColour_t_24", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef Pyvtk3DSColour_t_24_vtk3DSColour_t_24_Methods[] = {
  {"vtk3DSColour_t_24", Pyvtk3DSColour_t_24_vtk3DSColour_t_24_s2, METH_VARARGS,
   "@W vtk3DSColour_t_24"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
Pyvtk3DSColour_t_24_vtk3DSColour_t_24(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return Pyvtk3DSColour_t_24_vtk3DSColour_t_24_s1(self, args);
    case 1:
      return Pyvtk3DSColour_t_24_vtk3DSColour_t_24_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtk3DSColour_t_24");
  return nullptr;
}


static const char *Pyvtk3DSColour_t_24_Doc =

  "vtk3DSColour_t_24() -> vtk3DSColour_t_24\nC++: vtk3DSColour_t_24()\nvtk3DSColour_t_24(__a:vtk3DSColour_t_24) -> vtk3DSColour_t_24\nC++: vtk3DSColour_t_24(const &vtk3DSColour_t_24)\n""\n"
  "vtk3DSColour_t_24 - no description provided.\n\n"
;

static PyObject *
Pyvtk3DSColour_t_24_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return Pyvtk3DSColour_t_24_vtk3DSColour_t_24(nullptr, args);
}

static void Pyvtk3DSColour_t_24_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtk3DSColour_t_24 *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t Pyvtk3DSColour_t_24_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DSColour_t_24_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImport.vtk3DSColour_t_24", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  Pyvtk3DSColour_t_24_Delete, // tp_dealloc
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
  Pyvtk3DSColour_t_24_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  Pyvtk3DSColour_t_24_Doc, // tp_doc
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
  Pyvtk3DSColour_t_24_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *Pyvtk3DSColour_t_24_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtk3DSColour_t_24(*static_cast<const vtk3DSColour_t_24*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_Pyvtk3DSColour_t_24_TypeNew
extern "C" { PyObject *Pyvtk3DSColour_t_24_TypeNew(); }
#define DECLARED_Pyvtk3DSColour_t_24_TypeNew
#endif

PyObject *Pyvtk3DSColour_t_24_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &Pyvtk3DSColour_t_24_Type,
    Pyvtk3DSColour_t_24_Methods,
    Pyvtk3DSColour_t_24_vtk3DSColour_t_24_Methods,
    &Pyvtk3DSColour_t_24_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtk3DS(
  PyObject *dict)
{
  PyObject *o;
  o = Pyvtk3DSList_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSList_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSFace_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSFace_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSColour_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSColour_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSOmniLight_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSOmniLight_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSSpotLight_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSSpotLight_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSCamera_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSCamera_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSMaterial_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSMaterial_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSSummary_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSSummary_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSMatProp_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSMatProp_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSMesh_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSMesh_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSChunk_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSChunk_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = Pyvtk3DSColour_t_24_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtk3DSColour_t_24", o) != 0)
  {
    Py_DECREF(o);
  }

}

