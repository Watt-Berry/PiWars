// python wrapper for vtkArraySort
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkArraySort.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArraySort(PyObject *dict); }

static PyObject *
PyvtkArraySort_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = op->GetDimensions();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArraySort_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetDimensions(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArraySort_Methods[] = {
  {"GetDimensions", PyvtkArraySort_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> int\nC++: DimensionT GetDimensions()\n\nReturn the number of dimensions for sorting.\n"},
  {"SetDimensions", PyvtkArraySort_SetDimensions, METH_VARARGS,
   "SetDimensions(self, dimensions:int) -> None\nC++: void SetDimensions(DimensionT dimensions)\n\nSet the number of dimensions to be sorted.  Note that this method\nresets every dimension to zero, so you must set every dimension\nexplicitly using operator[] after calling SetDimensions().\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkArraySort_vtkArraySort_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkArraySort *op = new vtkArraySort();

    result = PyVTKSpecialObject_New("vtkArraySort", op);
  }

  return result;
}

static PyObject *
PyvtkArraySort_vtkArraySort_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkArraySort *op = new vtkArraySort(temp0);

    result = PyVTKSpecialObject_New("vtkArraySort", op);
  }

  return result;
}

static PyObject *
PyvtkArraySort_vtkArraySort_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkArraySort *op = new vtkArraySort(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArraySort", op);
  }

  return result;
}

static PyObject *
PyvtkArraySort_vtkArraySort_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkArraySort *op = new vtkArraySort(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArraySort", op);
  }

  return result;
}

static PyObject *
PyvtkArraySort_vtkArraySort_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArraySort");

  vtkArraySort *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArraySort"))
  {
    vtkArraySort *op = new vtkArraySort(*temp0);

    result = PyVTKSpecialObject_New("vtkArraySort", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArraySort_vtkArraySort_Methods[] = {
  {"vtkArraySort", PyvtkArraySort_vtkArraySort_s2, METH_VARARGS,
   "-@k"},
  {"vtkArraySort", PyvtkArraySort_vtkArraySort_s5, METH_VARARGS,
   "@W vtkArraySort"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArraySort_vtkArraySort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArraySort_vtkArraySort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArraySort_vtkArraySort_s1(self, args);
    case 2:
      return PyvtkArraySort_vtkArraySort_s3(self, args);
    case 3:
      return PyvtkArraySort_vtkArraySort_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkArraySort");
  return nullptr;
}


static const char *PyvtkArraySort_Doc =

  "vtkArraySort() -> vtkArraySort\nC++: vtkArraySort()\nvtkArraySort(i:int) -> vtkArraySort\nC++: explicit vtkArraySort(DimensionT i)\nvtkArraySort(i:int, j:int) -> vtkArraySort\nC++: vtkArraySort(DimensionT i, DimensionT j)\nvtkArraySort(i:int, j:int, k:int) -> vtkArraySort\nC++: vtkArraySort(DimensionT i, DimensionT j, DimensionT k)\nvtkArraySort(__a:vtkArraySort) -> vtkArraySort\nC++: vtkArraySort(const &vtkArraySort)\n""\n"
  "vtkArraySort - Controls sorting of sparse array coordinates.\n\n"
  "vtkArraySort stores an ordered set of dimensions along which the\n"
  "values stored in a sparse array should be sorted.\n\n"
  "Convenience constructors are provided for specifying one, two, and\n"
  "three dimensions.  To sort along more than three dimensions, use the\n"
  "default constructor, SetDimensions(), and operator[] to assign each\n"
  "dimension to be sorted.\n\n"
  "@sa\n"
  "vtkSparseArray\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";

static PyObject *
PyvtkArraySort_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkArraySort_vtkArraySort(nullptr, args);
}

static void PyvtkArraySort_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkArraySort *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkArraySort_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkArraySort *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyUnicode_FromStringAndSize(s.data(), s.size());
}

static int PyvtkArraySort_CheckExact(PyObject *ob);

static PyObject *PyvtkArraySort_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkArraySort *so1 = nullptr;
  const vtkArraySort *so2 = nullptr;
  int result = -1;

  if (PyvtkArraySort_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArraySort *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkArraySort *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArraySort", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkArraySort_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArraySort *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkArraySort *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArraySort", &n2));
    if (so2 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  switch (opid)
  {
    case Py_LT:
      break;
    case Py_LE:
      break;
    case Py_EQ:
      result = ((*so1) == (*so2));
      break;
    case Py_NE:
      result = ((*so1) != (*so2));
      break;
    case Py_GT:
      break;
    case Py_GE:
      break;
  }

  if (n1)
  {
    Py_DECREF(n1);
  }
  else if (n2)
  {
    Py_DECREF(n2);
  }

  if (result == -1)
  {
    PyErr_SetString(PyExc_TypeError, "operation not available");
    return nullptr;
  }

  // avoids aliasing issues with Py_INCREF(Py_False)
  return PyBool_FromLong((long)result);
}

Py_ssize_t PyvtkArraySort_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  return static_cast<Py_ssize_t>(op->GetDimensions());
}

PyObject *PyvtkArraySort_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  temp0 = static_cast<long long>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else
  {
    const long long *tempr = &(*op)[temp0];

    if (PyErr_Occurred() == nullptr)
    {
      result = vtkPythonArgs::BuildValue(*tempr);
    }
  }

  return result;
}

int PyvtkArraySort_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArraySort *op = static_cast<vtkArraySort *>(vp);

  long long temp0;
  long long temp1;
  int result = -1;

  temp0 = static_cast<long long>(i);

  if (temp0 < 0 || temp0 >= op->GetDimensions())
  {
    PyErr_SetString(PyExc_IndexError, "index out of range");
  }
  else if (vtkPythonArgs::GetValue(arg1, temp1))
  {
    (*op)[temp0] = temp1;

    if (PyErr_Occurred() == nullptr)
    {
      result = 0;
    }
  }

  return result;
}

static PySequenceMethods PyvtkArraySort_AsSequence = {
  PyvtkArraySort_SequenceSize, // sq_length
  nullptr, // sq_concat
  nullptr, // sq_repeat
  PyvtkArraySort_SequenceItem, // sq_item
  nullptr, // sq_slice
  PyvtkArraySort_SequenceSetItem, // sq_ass_item
  nullptr, // sq_ass_slice
  nullptr, // sq_contains
  nullptr, // sq_inplace_concat
  nullptr, // sq_inplace_repeat
};

static Py_hash_t PyvtkArraySort_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArraySort_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkArraySort", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArraySort_Delete, // tp_dealloc
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
  &PyvtkArraySort_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkArraySort_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkArraySort_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkArraySort_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkArraySort_RichCompare, // tp_richcompare
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
  PyvtkArraySort_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkArraySort_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkArraySort_Type);
}

static void *PyvtkArraySort_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkArraySort(*static_cast<const vtkArraySort*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkArraySort_TypeNew
extern "C" { PyObject *PyvtkArraySort_TypeNew(); }
#define DECLARED_PyvtkArraySort_TypeNew
#endif

PyObject *PyvtkArraySort_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkArraySort_Type,
    PyvtkArraySort_Methods,
    PyvtkArraySort_vtkArraySort_Methods,
    &PyvtkArraySort_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArraySort(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArraySort_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkArraySort", o) != 0)
  {
    Py_DECREF(o);
  }

}

