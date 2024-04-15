// python wrapper for vtkBlockDistribution
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkBlockDistribution.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlockDistribution(PyObject *dict); }

static PyObject *
PyvtkBlockDistribution_GetNumElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumElements");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBlockDistribution *op = static_cast<vtkBlockDistribution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumElements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDistribution_GetNumProcessors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumProcessors");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBlockDistribution *op = static_cast<vtkBlockDistribution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumProcessors();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDistribution_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBlockDistribution *op = static_cast<vtkBlockDistribution *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetBlockSize(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDistribution_GetProcessorOfElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessorOfElement");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBlockDistribution *op = static_cast<vtkBlockDistribution *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetProcessorOfElement(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDistribution_GetLocalIndexOfElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalIndexOfElement");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBlockDistribution *op = static_cast<vtkBlockDistribution *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetLocalIndexOfElement(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDistribution_GetFirstGlobalIndexOnProcessor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstGlobalIndexOnProcessor");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBlockDistribution *op = static_cast<vtkBlockDistribution *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetFirstGlobalIndexOnProcessor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockDistribution_GetGlobalIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIndex");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkBlockDistribution *op = static_cast<vtkBlockDistribution *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = op->GetGlobalIndex(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBlockDistribution_Methods[] = {
  {"GetNumElements", PyvtkBlockDistribution_GetNumElements, METH_VARARGS,
   "GetNumElements(self) -> int\nC++: vtkIdType GetNumElements()\n\nRetrieves the number of elements for which this block\ndistribution was built.\n"},
  {"GetNumProcessors", PyvtkBlockDistribution_GetNumProcessors, METH_VARARGS,
   "GetNumProcessors(self) -> int\nC++: vtkIdType GetNumProcessors()\n\nRetrieves the number of processors for which this block\ndistribution was built.\n"},
  {"GetBlockSize", PyvtkBlockDistribution_GetBlockSize, METH_VARARGS,
   "GetBlockSize(self, rank:int) -> int\nC++: vtkIdType GetBlockSize(vtkIdType rank)\n\nGet the block size for the processor with the given rank. This is\nthe number of elements that the processor will store.\n"},
  {"GetProcessorOfElement", PyvtkBlockDistribution_GetProcessorOfElement, METH_VARARGS,
   "GetProcessorOfElement(self, globalIndex:int) -> int\nC++: vtkIdType GetProcessorOfElement(vtkIdType globalIndex)\n\nRetrieve the process number in [0, GetNumProcessors()) where the\nelement with the given global index will be located.\n"},
  {"GetLocalIndexOfElement", PyvtkBlockDistribution_GetLocalIndexOfElement, METH_VARARGS,
   "GetLocalIndexOfElement(self, globalIndex:int) -> int\nC++: vtkIdType GetLocalIndexOfElement(vtkIdType globalIndex)\n\nRetrieve the local index (offset) on the processor determined by\nGetProcessorOfElement that refers to the given global index.\n"},
  {"GetFirstGlobalIndexOnProcessor", PyvtkBlockDistribution_GetFirstGlobalIndexOnProcessor, METH_VARARGS,
   "GetFirstGlobalIndexOnProcessor(self, rank:int) -> int\nC++: vtkIdType GetFirstGlobalIndexOnProcessor(vtkIdType rank)\n\nRetrieve the first global index stored on the processor with the\ngiven rank.\n"},
  {"GetGlobalIndex", PyvtkBlockDistribution_GetGlobalIndex, METH_VARARGS,
   "GetGlobalIndex(self, localIndex:int, rank:int) -> int\nC++: vtkIdType GetGlobalIndex(vtkIdType localIndex,\n    vtkIdType rank)\n\nRetrieve the global index associated with the given local index\non the processor with the given rank.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkBlockDistribution_vtkBlockDistribution_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBlockDistribution");

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkBlockDistribution *op = new vtkBlockDistribution(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkBlockDistribution", op);
  }

  return result;
}

static PyObject *
PyvtkBlockDistribution_vtkBlockDistribution_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkBlockDistribution");

  vtkBlockDistribution *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkBlockDistribution"))
  {
    vtkBlockDistribution *op = new vtkBlockDistribution(*temp0);

    result = PyVTKSpecialObject_New("vtkBlockDistribution", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkBlockDistribution_vtkBlockDistribution_Methods[] = {
  {"vtkBlockDistribution", PyvtkBlockDistribution_vtkBlockDistribution_s2, METH_VARARGS,
   "@W vtkBlockDistribution"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkBlockDistribution_vtkBlockDistribution(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkBlockDistribution_vtkBlockDistribution_s1(self, args);
    case 1:
      return PyvtkBlockDistribution_vtkBlockDistribution_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkBlockDistribution");
  return nullptr;
}


static const char *PyvtkBlockDistribution_Doc =

  "vtkBlockDistribution(N:int, P:int) -> vtkBlockDistribution\nC++: vtkBlockDistribution(vtkIdType N, vtkIdType P)\nvtkBlockDistribution(__a:vtkBlockDistribution) -> vtkBlockDistribution\nC++: vtkBlockDistribution(const &vtkBlockDistribution)\n""\n"
  "vtkBlockDistribution - A helper class that manages a block\ndistribution of N elements of data.\n\n"
;

static PyObject *
PyvtkBlockDistribution_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkBlockDistribution_vtkBlockDistribution(nullptr, args);
}

static void PyvtkBlockDistribution_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkBlockDistribution *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkBlockDistribution_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBlockDistribution_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkBlockDistribution", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkBlockDistribution_Delete, // tp_dealloc
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
  PyvtkBlockDistribution_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkBlockDistribution_Doc, // tp_doc
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
  PyvtkBlockDistribution_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkBlockDistribution_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkBlockDistribution(*static_cast<const vtkBlockDistribution*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkBlockDistribution_TypeNew
extern "C" { PyObject *PyvtkBlockDistribution_TypeNew(); }
#define DECLARED_PyvtkBlockDistribution_TypeNew
#endif

PyObject *PyvtkBlockDistribution_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkBlockDistribution_Type,
    PyvtkBlockDistribution_Methods,
    PyvtkBlockDistribution_vtkBlockDistribution_Methods,
    &PyvtkBlockDistribution_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBlockDistribution(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlockDistribution_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkBlockDistribution", o) != 0)
  {
    Py_DECREF(o);
  }

}

