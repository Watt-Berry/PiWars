// python wrapper for vtkRayCastStructures
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkRayCastStructures.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRayCastStructures(PyObject *dict); }
static PyMethodDef PyvtkRayCastRayInfo_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRayCastRayInfo_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkRayCastRayInfo_t *op = new vtkRayCastRayInfo_t();

    result = PyVTKSpecialObject_New("vtkRayCastRayInfo_t", op);
  }

  return result;
}

static PyObject *
PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkRayCastRayInfo_t");

  vtkRayCastRayInfo_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRayCastRayInfo_t"))
  {
    vtkRayCastRayInfo_t *op = new vtkRayCastRayInfo_t(*temp0);

    result = PyVTKSpecialObject_New("vtkRayCastRayInfo_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t_Methods[] = {
  {"vtkRayCastRayInfo_t", PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t_s2, METH_VARARGS,
   "@W vtkRayCastRayInfo_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t_s1(self, args);
    case 1:
      return PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkRayCastRayInfo_t");
  return nullptr;
}


static const char *PyvtkRayCastRayInfo_t_Doc =

  "vtkRayCastRayInfo_t() -> vtkRayCastRayInfo_t\nC++: vtkRayCastRayInfo_t()\nvtkRayCastRayInfo_t(__a:vtkRayCastRayInfo_t) -> vtkRayCastRayInfo_t\nC++: vtkRayCastRayInfo_t(const &vtkRayCastRayInfo_t)\n""\n"
  "vtkRayCastRayInfo_t - no description provided.\n\n"
;

static PyObject *
PyvtkRayCastRayInfo_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t(nullptr, args);
}

static void PyvtkRayCastRayInfo_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkRayCastRayInfo_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkRayCastRayInfo_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRayCastRayInfo_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkRayCastRayInfo_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkRayCastRayInfo_t_Delete, // tp_dealloc
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
  PyvtkRayCastRayInfo_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkRayCastRayInfo_t_Doc, // tp_doc
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
  PyvtkRayCastRayInfo_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkRayCastRayInfo_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkRayCastRayInfo_t(*static_cast<const vtkRayCastRayInfo_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkRayCastRayInfo_t_TypeNew
extern "C" { PyObject *PyvtkRayCastRayInfo_t_TypeNew(); }
#define DECLARED_PyvtkRayCastRayInfo_t_TypeNew
#endif

PyObject *PyvtkRayCastRayInfo_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkRayCastRayInfo_t_Type,
    PyvtkRayCastRayInfo_t_Methods,
    PyvtkRayCastRayInfo_t_vtkRayCastRayInfo_t_Methods,
    &PyvtkRayCastRayInfo_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRayCastStructures(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRayCastRayInfo_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkRayCastRayInfo_t", o) != 0)
  {
    Py_DECREF(o);
  }

}

