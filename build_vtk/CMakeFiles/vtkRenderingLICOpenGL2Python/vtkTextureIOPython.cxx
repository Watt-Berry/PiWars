// python wrapper for vtkTextureIO
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkTextureIO.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureIO(PyObject *dict); }

static PyObject *
PyvtkTextureIO_Write_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  std::string temp0;
  vtkTextureObject *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned int> store2(size2);
  unsigned int *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject") &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkTextureIO::Write(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureIO_Write_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Write");

  std::string temp0;
  vtkTextureObject *temp1 = nullptr;
  vtkPixelExtent *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetFilePath(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextureObject") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkPixelExtent") &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkTextureIO::Write(temp0, temp1, *temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj2);

  return result;
}

static PyMethodDef PyvtkTextureIO_Write_Methods[] = {
  {"Write", PyvtkTextureIO_Write_s1, METH_VARARGS | METH_STATIC,
   "sV|PP *vtkTextureObject *I *d"},
  {"Write", PyvtkTextureIO_Write_s2, METH_VARARGS | METH_STATIC,
   "sVW|P *vtkTextureObject vtkPixelExtent *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextureIO_Write(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTextureIO_Write_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkTextureIO_Write_s1(self, args);
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Write");
  return nullptr;
}

static PyMethodDef PyvtkTextureIO_Methods[] = {
  {"Write", PyvtkTextureIO_Write, METH_VARARGS,
   "Write(filename:str, texture:vtkTextureObject, subset:(int, ...)\n    =..., origin:(float, ...)=...) -> None\nC++: static void Write(std::string filename,\n    vtkTextureObject *texture, const unsigned int *subset=nullptr,\n     const double *origin=nullptr)\nWrite(filename:str, texture:vtkTextureObject,\n    subset:vtkPixelExtent, origin:(float, ...)=...) -> None\nC++: static void Write(std::string filename,\n    vtkTextureObject *texture, const vtkPixelExtent &subset,\n    const double *origin=nullptr)\n\nWrite to disk as image data with subset(optional) at dataset\norigin(optional)\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTextureIO_vtkTextureIO_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTextureIO");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTextureIO *op = new vtkTextureIO();

    result = PyVTKSpecialObject_New("vtkTextureIO", op);
  }

  return result;
}

static PyObject *
PyvtkTextureIO_vtkTextureIO_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTextureIO");

  vtkTextureIO *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkTextureIO"))
  {
    vtkTextureIO *op = new vtkTextureIO(*temp0);

    result = PyVTKSpecialObject_New("vtkTextureIO", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkTextureIO_vtkTextureIO_Methods[] = {
  {"vtkTextureIO", PyvtkTextureIO_vtkTextureIO_s2, METH_VARARGS,
   "@W vtkTextureIO"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTextureIO_vtkTextureIO(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTextureIO_vtkTextureIO_s1(self, args);
    case 1:
      return PyvtkTextureIO_vtkTextureIO_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkTextureIO");
  return nullptr;
}


static const char *PyvtkTextureIO_Doc =

  "vtkTextureIO() -> vtkTextureIO\nC++: vtkTextureIO()\nvtkTextureIO(__a:vtkTextureIO) -> vtkTextureIO\nC++: vtkTextureIO(const &vtkTextureIO)\n""\n"
  "vtkTextureIO - A small collection of I/O routines that write\nvtkTextureObject to disk for debugging.\n\n"
;

static PyObject *
PyvtkTextureIO_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTextureIO_vtkTextureIO(nullptr, args);
}

static void PyvtkTextureIO_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTextureIO *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTextureIO_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextureIO_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLICOpenGL2.vtkTextureIO", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTextureIO_Delete, // tp_dealloc
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
  PyvtkTextureIO_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTextureIO_Doc, // tp_doc
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
  PyvtkTextureIO_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkTextureIO_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkTextureIO(*static_cast<const vtkTextureIO*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkTextureIO_TypeNew
extern "C" { PyObject *PyvtkTextureIO_TypeNew(); }
#define DECLARED_PyvtkTextureIO_TypeNew
#endif

PyObject *PyvtkTextureIO_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkTextureIO_Type,
    PyvtkTextureIO_Methods,
    PyvtkTextureIO_vtkTextureIO_Methods,
    &PyvtkTextureIO_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureIO(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureIO_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureIO", o) != 0)
  {
    Py_DECREF(o);
  }

}

