// python wrapper for vtkMarchingCubesPolygonCases
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMarchingCubesPolygonCases.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMarchingCubesPolygonCases(PyObject *dict); }
static PyMethodDef PyvtkMarchingCubesPolygonCases_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMarchingCubesPolygonCases");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMarchingCubesPolygonCases *op = new vtkMarchingCubesPolygonCases();

    result = PyVTKSpecialObject_New("vtkMarchingCubesPolygonCases", op);
  }

  return result;
}

static PyObject *
PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMarchingCubesPolygonCases");

  vtkMarchingCubesPolygonCases *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMarchingCubesPolygonCases"))
  {
    vtkMarchingCubesPolygonCases *op = new vtkMarchingCubesPolygonCases(*temp0);

    result = PyVTKSpecialObject_New("vtkMarchingCubesPolygonCases", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases_Methods[] = {
  {"vtkMarchingCubesPolygonCases", PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases_s2, METH_VARARGS,
   "@W vtkMarchingCubesPolygonCases"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases_s1(self, args);
    case 1:
      return PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMarchingCubesPolygonCases");
  return nullptr;
}


static const char *PyvtkMarchingCubesPolygonCases_Doc =

  "vtkMarchingCubesPolygonCases() -> vtkMarchingCubesPolygonCases\nC++: vtkMarchingCubesPolygonCases()\nvtkMarchingCubesPolygonCases(__a:vtkMarchingCubesPolygonCases)\n    -> vtkMarchingCubesPolygonCases\nC++: vtkMarchingCubesPolygonCases(const &vtkMarchingCubesPolygonCases)\n""\n"
  "vtkMarchingCubesPolygonCases - no description provided.\n\n"
;

static PyObject *
PyvtkMarchingCubesPolygonCases_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases(nullptr, args);
}

static void PyvtkMarchingCubesPolygonCases_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMarchingCubesPolygonCases *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMarchingCubesPolygonCases_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMarchingCubesPolygonCases_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkMarchingCubesPolygonCases", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMarchingCubesPolygonCases_Delete, // tp_dealloc
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
  PyvtkMarchingCubesPolygonCases_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMarchingCubesPolygonCases_Doc, // tp_doc
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
  PyvtkMarchingCubesPolygonCases_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMarchingCubesPolygonCases_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMarchingCubesPolygonCases(*static_cast<const vtkMarchingCubesPolygonCases*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkMarchingCubesPolygonCases_TypeNew
extern "C" { PyObject *PyvtkMarchingCubesPolygonCases_TypeNew(); }
#define DECLARED_PyvtkMarchingCubesPolygonCases_TypeNew
#endif

PyObject *PyvtkMarchingCubesPolygonCases_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkMarchingCubesPolygonCases_Type,
    PyvtkMarchingCubesPolygonCases_Methods,
    PyvtkMarchingCubesPolygonCases_vtkMarchingCubesPolygonCases_Methods,
    &PyvtkMarchingCubesPolygonCases_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMarchingCubesPolygonCases(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMarchingCubesPolygonCases_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMarchingCubesPolygonCases", o) != 0)
  {
    Py_DECREF(o);
  }

}

