// python wrapper for vtkGPUInfoListArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkGPUInfoListArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGPUInfoListArray(PyObject *dict); }
static PyMethodDef PyvtkGPUInfoListArray_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkGPUInfoListArray_vtkGPUInfoListArray_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkGPUInfoListArray");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkGPUInfoListArray *op = new vtkGPUInfoListArray();

    result = PyVTKSpecialObject_New("vtkGPUInfoListArray", op);
  }

  return result;
}

static PyObject *
PyvtkGPUInfoListArray_vtkGPUInfoListArray_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkGPUInfoListArray");

  vtkGPUInfoListArray *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkGPUInfoListArray"))
  {
    vtkGPUInfoListArray *op = new vtkGPUInfoListArray(*temp0);

    result = PyVTKSpecialObject_New("vtkGPUInfoListArray", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkGPUInfoListArray_vtkGPUInfoListArray_Methods[] = {
  {"vtkGPUInfoListArray", PyvtkGPUInfoListArray_vtkGPUInfoListArray_s2, METH_VARARGS,
   "@W vtkGPUInfoListArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGPUInfoListArray_vtkGPUInfoListArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkGPUInfoListArray_vtkGPUInfoListArray_s1(self, args);
    case 1:
      return PyvtkGPUInfoListArray_vtkGPUInfoListArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkGPUInfoListArray");
  return nullptr;
}


static const char *PyvtkGPUInfoListArray_Doc =

  "vtkGPUInfoListArray() -> vtkGPUInfoListArray\nC++: vtkGPUInfoListArray()\nvtkGPUInfoListArray(__a:vtkGPUInfoListArray) -> vtkGPUInfoListArray\nC++: vtkGPUInfoListArray(const &vtkGPUInfoListArray)\n""\n"
  "vtkGPUInfoListArray - Internal class vtkGPUInfoList.\n\n"
  "vtkGPUInfoListArray is just a PIMPL mechanism for vtkGPUInfoList.\n\n";

static PyObject *
PyvtkGPUInfoListArray_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkGPUInfoListArray_vtkGPUInfoListArray(nullptr, args);
}

static void PyvtkGPUInfoListArray_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkGPUInfoListArray *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkGPUInfoListArray_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGPUInfoListArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkGPUInfoListArray", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkGPUInfoListArray_Delete, // tp_dealloc
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
  PyvtkGPUInfoListArray_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkGPUInfoListArray_Doc, // tp_doc
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
  PyvtkGPUInfoListArray_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkGPUInfoListArray_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkGPUInfoListArray(*static_cast<const vtkGPUInfoListArray*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkGPUInfoListArray_TypeNew
extern "C" { PyObject *PyvtkGPUInfoListArray_TypeNew(); }
#define DECLARED_PyvtkGPUInfoListArray_TypeNew
#endif

PyObject *PyvtkGPUInfoListArray_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkGPUInfoListArray_Type,
    PyvtkGPUInfoListArray_Methods,
    PyvtkGPUInfoListArray_vtkGPUInfoListArray_Methods,
    &PyvtkGPUInfoListArray_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGPUInfoListArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGPUInfoListArray_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkGPUInfoListArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

