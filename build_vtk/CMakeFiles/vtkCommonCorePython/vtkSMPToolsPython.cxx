// python wrapper for vtkSMPTools
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkSMPTools.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPTools(PyObject *dict); }

static PyObject *
PyvtkSMPTools_GetBackend(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBackend");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkSMPTools::GetBackend();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPTools_SetBackend(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetBackend");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkSMPTools::SetBackend(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPTools_Initialize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Initialize");

  int temp0 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkSMPTools::Initialize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPTools_GetEstimatedNumberOfThreads(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEstimatedNumberOfThreads");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkSMPTools::GetEstimatedNumberOfThreads();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPTools_SetNestedParallelism(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetNestedParallelism");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSMPTools::SetNestedParallelism(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPTools_GetNestedParallelism(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNestedParallelism");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMPTools::GetNestedParallelism();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPTools_IsParallelScope(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsParallelScope");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMPTools::IsParallelScope();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPTools_GetSingleThread(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSingleThread");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkSMPTools::GetSingleThread();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPTools_Methods[] = {
  {"GetBackend", PyvtkSMPTools_GetBackend, METH_VARARGS,
   "GetBackend() -> str\nC++: static const char *GetBackend()\n\nGet the backend in use.\n"},
  {"SetBackend", PyvtkSMPTools_SetBackend, METH_VARARGS,
   "SetBackend(backend:str) -> bool\nC++: static bool SetBackend(const char *backend)\n\n/!\\ This method is not thread safe. Change the backend in use.\nThe options can be: \"Sequential\", \"STDThread\", \"TBB\" or \"OpenMP\"\n\nVTK_SMP_BACKEND_IN_USE env variable can also be used to set the\ndefault SMPTools backend, in that case SetBackend() doesn't need\nto be called. The backend selected with SetBackend() have the\npriority over VTK_SMP_BACKEND_IN_USE.\n\nSetBackend() will return true if the backend was found and\navailable.\n"},
  {"Initialize", PyvtkSMPTools_Initialize, METH_VARARGS,
   "Initialize(numThreads:int=0) -> None\nC++: static void Initialize(int numThreads=0)\n\n/!\\ This method is not thread safe. Initialize the underlying\nlibraries for execution. This is not required as it is\nautomatically defined by the libraries. However, it can be used\nto control the maximum number of thread used. Make sure to call\nit before the parallel operation.\n\nIf Initialize is called without argument it will reset to the\nmaximum number of threads or use the VTK_SMP_MAX_THREADS env\nvariable if it is defined.\n\nNote: If VTK_SMP_MAX_THREADS env variable is defined the SMPTools\nwill try to use it to set the maximum number of threads.\nInitialize() doesn't need to be called.\n"},
  {"GetEstimatedNumberOfThreads", PyvtkSMPTools_GetEstimatedNumberOfThreads, METH_VARARGS,
   "GetEstimatedNumberOfThreads() -> int\nC++: static int GetEstimatedNumberOfThreads()\n\nGet the estimated number of threads being used by the backend.\nThis should be used as just an estimate since the number of\nthreads may vary dynamically and a particular task may not be\nexecuted on all the available threads.\n"},
  {"SetNestedParallelism", PyvtkSMPTools_SetNestedParallelism, METH_VARARGS,
   "SetNestedParallelism(isNested:bool) -> None\nC++: static void SetNestedParallelism(bool isNested)\n\n/!\\ This method is not thread safe. If true enable nested\nparallelism for underlying backends. When enabled the\ncomportement is different for each backend:\n- TBB support nested parallelism using a single thread pool\n- For OpenMP, set `omp_set_nested` to the value of `isNested`.\n- For STDThread nested parallelism implies creating new threads\n  pools.\n- For Sequential nothing changes.\n\nDefault to false except for TBB.\n"},
  {"GetNestedParallelism", PyvtkSMPTools_GetNestedParallelism, METH_VARARGS,
   "GetNestedParallelism() -> bool\nC++: static bool GetNestedParallelism()\n\nGet true if the nested parallelism is enabled. By default, nested\nparallelism is enabled only for TBB.\n"},
  {"IsParallelScope", PyvtkSMPTools_IsParallelScope, METH_VARARGS,
   "IsParallelScope() -> bool\nC++: static bool IsParallelScope()\n\nReturn true if it is called from a parallel scope.\n"},
  {"GetSingleThread", PyvtkSMPTools_GetSingleThread, METH_VARARGS,
   "GetSingleThread() -> bool\nC++: static bool GetSingleThread()\n\nReturns true if the given thread is specified thread for single\nscope. Returns false otherwise.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkSMPTools_vtkSMPTools_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSMPTools");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkSMPTools *op = new vtkSMPTools();

    result = PyVTKSpecialObject_New("vtkSMPTools", op);
  }

  return result;
}

static PyObject *
PyvtkSMPTools_vtkSMPTools_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkSMPTools");

  vtkSMPTools *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkSMPTools"))
  {
    vtkSMPTools *op = new vtkSMPTools(*temp0);

    result = PyVTKSpecialObject_New("vtkSMPTools", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkSMPTools_vtkSMPTools_Methods[] = {
  {"vtkSMPTools", PyvtkSMPTools_vtkSMPTools_s2, METH_VARARGS,
   "@W vtkSMPTools"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSMPTools_vtkSMPTools(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkSMPTools_vtkSMPTools_s1(self, args);
    case 1:
      return PyvtkSMPTools_vtkSMPTools_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkSMPTools");
  return nullptr;
}


static const char *PyvtkSMPTools_Doc =

  "vtkSMPTools() -> vtkSMPTools\nC++: vtkSMPTools()\nvtkSMPTools(__a:vtkSMPTools) -> vtkSMPTools\nC++: vtkSMPTools(const &vtkSMPTools)\n""\n"
  "vtkSMPTools - A set of parallel (multi-threaded) utility functions.\n\n"
  "vtkSMPTools provides a set of utility functions that can be used to\n"
  "parallelize parts of VTK code using multiple threads. There are\n"
  "several back-end implementations of parallel functionality (currently\n"
  "Sequential, TBB, OpenMP and STDThread) that actual execution is\n"
  "delegated to.\n\n"
  "@sa\n"
  "vtkSMPThreadLocal vtkSMPThreadLocalObject\n\n";

static PyObject *
PyvtkSMPTools_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkSMPTools_vtkSMPTools(nullptr, args);
}

static void PyvtkSMPTools_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkSMPTools *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkSMPTools_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSMPTools_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkSMPTools", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkSMPTools_Delete, // tp_dealloc
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
  PyvtkSMPTools_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkSMPTools_Doc, // tp_doc
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
  PyvtkSMPTools_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkSMPTools_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkSMPTools(*static_cast<const vtkSMPTools*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkSMPTools_TypeNew
extern "C" { PyObject *PyvtkSMPTools_TypeNew(); }
#define DECLARED_PyvtkSMPTools_TypeNew
#endif

PyObject *PyvtkSMPTools_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkSMPTools_Type,
    PyvtkSMPTools_Methods,
    PyvtkSMPTools_vtkSMPTools_Methods,
    &PyvtkSMPTools_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPTools(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPTools_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPTools", o) != 0)
  {
    Py_DECREF(o);
  }

}

