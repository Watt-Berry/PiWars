// python wrapper for vtkAtomicMutex
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkAtomicMutex.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAtomicMutex(PyObject *dict); }

static PyObject *
PyvtkAtomicMutex_lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "lock");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtomicMutex *op = static_cast<vtkAtomicMutex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->lock();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAtomicMutex_unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "unlock");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkAtomicMutex *op = static_cast<vtkAtomicMutex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->unlock();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAtomicMutex_Methods[] = {
  {"lock", PyvtkAtomicMutex_lock, METH_VARARGS,
   "lock(self) -> None\nC++: void lock()\n\nLock/Unlock atomic operation.\n\nNote: lock/unlock is lowercase, to conform to the mutex wrapper\nstd::lock_guard which provides a convenient RAII-style mechanism \nfor owning a mutex for the duration of a scoped block.\n"},
  {"unlock", PyvtkAtomicMutex_unlock, METH_VARARGS,
   "unlock(self) -> None\nC++: void unlock()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkAtomicMutex_vtkAtomicMutex_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAtomicMutex");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkAtomicMutex *op = new vtkAtomicMutex();

    result = PyVTKSpecialObject_New("vtkAtomicMutex", op);
  }

  return result;
}

static PyObject *
PyvtkAtomicMutex_vtkAtomicMutex_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkAtomicMutex");

  vtkAtomicMutex *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkAtomicMutex"))
  {
    vtkAtomicMutex *op = new vtkAtomicMutex(*temp0);

    result = PyVTKSpecialObject_New("vtkAtomicMutex", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkAtomicMutex_vtkAtomicMutex_Methods[] = {
  {"vtkAtomicMutex", PyvtkAtomicMutex_vtkAtomicMutex_s2, METH_VARARGS,
   "@W vtkAtomicMutex"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAtomicMutex_vtkAtomicMutex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkAtomicMutex_vtkAtomicMutex_s1(self, args);
    case 1:
      return PyvtkAtomicMutex_vtkAtomicMutex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkAtomicMutex");
  return nullptr;
}


static const char *PyvtkAtomicMutex_Doc =

  "vtkAtomicMutex() -> vtkAtomicMutex\nC++: vtkAtomicMutex()\nvtkAtomicMutex(other:vtkAtomicMutex) -> vtkAtomicMutex\nC++: vtkAtomicMutex(const vtkAtomicMutex &other)\n""\n"
  "vtkAtomicMutex - mutual exclusion locking class using atomic\noperations\n\n"
  "vtkAtomicMutex allows the locking of variables which are accessed\n"
  "through different threads using atomic operations. An atomic mutex\n"
  "might be preferable over std::mutex, because it is faster when you\n"
  "want to spin lock and the probability of acquiring the lock is high.\n"
  "The benefit of vtkAtomicMutex over std::atomicis that it is copy\n"
  "constructible, and that is has predefined optimized lock/unlock\n"
  "functions that can be used as a drop in replacement instead of\n"
  "std::mutex.\n\n";

static PyObject *
PyvtkAtomicMutex_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkAtomicMutex_vtkAtomicMutex(nullptr, args);
}

static void PyvtkAtomicMutex_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkAtomicMutex *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkAtomicMutex_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAtomicMutex_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkAtomicMutex", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkAtomicMutex_Delete, // tp_dealloc
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
  PyvtkAtomicMutex_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkAtomicMutex_Doc, // tp_doc
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
  PyvtkAtomicMutex_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkAtomicMutex_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkAtomicMutex(*static_cast<const vtkAtomicMutex*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkAtomicMutex_TypeNew
extern "C" { PyObject *PyvtkAtomicMutex_TypeNew(); }
#define DECLARED_PyvtkAtomicMutex_TypeNew
#endif

PyObject *PyvtkAtomicMutex_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkAtomicMutex_Type,
    PyvtkAtomicMutex_Methods,
    PyvtkAtomicMutex_vtkAtomicMutex_Methods,
    &PyvtkAtomicMutex_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAtomicMutex(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAtomicMutex_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkAtomicMutex", o) != 0)
  {
    Py_DECREF(o);
  }

}

