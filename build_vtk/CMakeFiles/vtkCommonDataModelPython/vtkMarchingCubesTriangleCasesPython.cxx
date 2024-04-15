// python wrapper for vtkMarchingCubesTriangleCases
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkMarchingCubesTriangleCases.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMarchingCubesTriangleCases(PyObject *dict); }
static PyMethodDef PyvtkMarchingCubesTriangleCases_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMarchingCubesTriangleCases");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMarchingCubesTriangleCases *op = new vtkMarchingCubesTriangleCases();

    result = PyVTKSpecialObject_New("vtkMarchingCubesTriangleCases", op);
  }

  return result;
}

static PyObject *
PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkMarchingCubesTriangleCases");

  vtkMarchingCubesTriangleCases *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMarchingCubesTriangleCases"))
  {
    vtkMarchingCubesTriangleCases *op = new vtkMarchingCubesTriangleCases(*temp0);

    result = PyVTKSpecialObject_New("vtkMarchingCubesTriangleCases", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_Methods[] = {
  {"vtkMarchingCubesTriangleCases", PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s2, METH_VARARGS,
   "@W vtkMarchingCubesTriangleCases"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s1(self, args);
    case 1:
      return PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkMarchingCubesTriangleCases");
  return nullptr;
}


static const char *PyvtkMarchingCubesTriangleCases_Doc =

  "vtkMarchingCubesTriangleCases() -> vtkMarchingCubesTriangleCases\nC++: vtkMarchingCubesTriangleCases()\nvtkMarchingCubesTriangleCases(__a:vtkMarchingCubesTriangleCases)\n    -> vtkMarchingCubesTriangleCases\nC++: vtkMarchingCubesTriangleCases(\n    const &vtkMarchingCubesTriangleCases)\n""\n"
  "vtkMarchingCubesTriangleCases - no description provided.\n\n"
;

static PyObject *
PyvtkMarchingCubesTriangleCases_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases(nullptr, args);
}

static void PyvtkMarchingCubesTriangleCases_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkMarchingCubesTriangleCases *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkMarchingCubesTriangleCases_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMarchingCubesTriangleCases_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkMarchingCubesTriangleCases", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkMarchingCubesTriangleCases_Delete, // tp_dealloc
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
  PyvtkMarchingCubesTriangleCases_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkMarchingCubesTriangleCases_Doc, // tp_doc
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
  PyvtkMarchingCubesTriangleCases_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkMarchingCubesTriangleCases_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkMarchingCubesTriangleCases(*static_cast<const vtkMarchingCubesTriangleCases*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkMarchingCubesTriangleCases_TypeNew
extern "C" { PyObject *PyvtkMarchingCubesTriangleCases_TypeNew(); }
#define DECLARED_PyvtkMarchingCubesTriangleCases_TypeNew
#endif

PyObject *PyvtkMarchingCubesTriangleCases_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkMarchingCubesTriangleCases_Type,
    PyvtkMarchingCubesTriangleCases_Methods,
    PyvtkMarchingCubesTriangleCases_vtkMarchingCubesTriangleCases_Methods,
    &PyvtkMarchingCubesTriangleCases_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMarchingCubesTriangleCases(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMarchingCubesTriangleCases_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkMarchingCubesTriangleCases", o) != 0)
  {
    Py_DECREF(o);
  }

}

