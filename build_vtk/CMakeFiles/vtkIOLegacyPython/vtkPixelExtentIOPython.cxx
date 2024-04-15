// python wrapper for vtkPixelExtentIO
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPixelExtentIO.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPixelExtentIO(PyObject *dict); }

static PyObject *
PyvtkPixelExtentIO_Write(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  int temp0;
  const char *temp1 = nullptr;
  vtkPixelExtent *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetFilePath(temp1) &&
      ap.GetSpecialObject(temp2, pobj2, "vtkPixelExtent"))
  {
    vtkPixelExtentIO::Write(temp0, temp1, *temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}

static PyMethodDef PyvtkPixelExtentIO_Methods[] = {
  {"Write", PyvtkPixelExtentIO_Write, METH_VARARGS,
   "Write(commRank:int, fileName:str, ext:vtkPixelExtent) -> None\nC++: static void Write(int commRank, const char *fileName,\n    const vtkPixelExtent &ext)\n\nWrite an extent per MPI rank to disk. All ranks write. It's\nassumed that each rank passes a unique filename.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPixelExtentIO_vtkPixelExtentIO_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPixelExtentIO");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPixelExtentIO *op = new vtkPixelExtentIO();

    result = PyVTKSpecialObject_New("vtkPixelExtentIO", op);
  }

  return result;
}

static PyObject *
PyvtkPixelExtentIO_vtkPixelExtentIO_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPixelExtentIO");

  vtkPixelExtentIO *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPixelExtentIO"))
  {
    vtkPixelExtentIO *op = new vtkPixelExtentIO(*temp0);

    result = PyVTKSpecialObject_New("vtkPixelExtentIO", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPixelExtentIO_vtkPixelExtentIO_Methods[] = {
  {"vtkPixelExtentIO", PyvtkPixelExtentIO_vtkPixelExtentIO_s2, METH_VARARGS,
   "@W vtkPixelExtentIO"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPixelExtentIO_vtkPixelExtentIO(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPixelExtentIO_vtkPixelExtentIO_s1(self, args);
    case 1:
      return PyvtkPixelExtentIO_vtkPixelExtentIO_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPixelExtentIO");
  return nullptr;
}


static const char *PyvtkPixelExtentIO_Doc =

  "vtkPixelExtentIO() -> vtkPixelExtentIO\nC++: vtkPixelExtentIO()\nvtkPixelExtentIO(__a:vtkPixelExtentIO) -> vtkPixelExtentIO\nC++: vtkPixelExtentIO(const &vtkPixelExtentIO)\n""\n"
  "vtkPixelExtentIO - A small collection of I/O routines that can write\nvtkPixelExtent's or collections of them to disk for visualization as\nunstructured grids.\n\n"
;

static PyObject *
PyvtkPixelExtentIO_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPixelExtentIO_vtkPixelExtentIO(nullptr, args);
}

static void PyvtkPixelExtentIO_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPixelExtentIO *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPixelExtentIO_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPixelExtentIO_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLegacy.vtkPixelExtentIO", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPixelExtentIO_Delete, // tp_dealloc
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
  PyvtkPixelExtentIO_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPixelExtentIO_Doc, // tp_doc
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
  PyvtkPixelExtentIO_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPixelExtentIO_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPixelExtentIO(*static_cast<const vtkPixelExtentIO*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkPixelExtentIO_TypeNew
extern "C" { PyObject *PyvtkPixelExtentIO_TypeNew(); }
#define DECLARED_PyvtkPixelExtentIO_TypeNew
#endif

PyObject *PyvtkPixelExtentIO_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkPixelExtentIO_Type,
    PyvtkPixelExtentIO_Methods,
    PyvtkPixelExtentIO_vtkPixelExtentIO_Methods,
    &PyvtkPixelExtentIO_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPixelExtentIO(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPixelExtentIO_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPixelExtentIO", o) != 0)
  {
    Py_DECREF(o);
  }

}

