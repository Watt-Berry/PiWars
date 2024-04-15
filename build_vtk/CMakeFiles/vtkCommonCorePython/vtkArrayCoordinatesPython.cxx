// python wrapper for vtkArrayCoordinates
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkArrayCoordinates.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayCoordinates(PyObject *dict); }

static PyObject *
PyvtkArrayCoordinates_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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
PyvtkArrayCoordinates_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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


static PyObject *
PyvtkArrayCoordinates_GetCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetCoordinate(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayCoordinates_SetCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinate");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetCoordinate(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayCoordinates_Methods[] = {
  {"GetDimensions", PyvtkArrayCoordinates_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> int\nC++: DimensionT GetDimensions()\n\nReturn the number of dimensions contained in the coordinates.\n"},
  {"SetDimensions", PyvtkArrayCoordinates_SetDimensions, METH_VARARGS,
   "SetDimensions(self, dimensions:int) -> None\nC++: void SetDimensions(DimensionT dimensions)\n\nSet the number of dimensions.  Note that this method resets the\ncoordinate along each dimension to zero, so you must set every\ncoordinate explicitly using operator[] after calling\nSetDimensions().\n"},
  {"GetCoordinate", PyvtkArrayCoordinates_GetCoordinate, METH_VARARGS,
   "GetCoordinate(self, i:int) -> int\nC++: CoordinateT GetCoordinate(DimensionT i)\n\nReturns the coordinate of the i-th dimension.\n"},
  {"SetCoordinate", PyvtkArrayCoordinates_SetCoordinate, METH_VARARGS,
   "SetCoordinate(self, i:int, __b:int) -> None\nC++: void SetCoordinate(DimensionT i, const CoordinateT &)\n\nSets the coordinate of the i-th dimension.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates();

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0, temp1);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(temp0, temp1, temp2);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  return result;
}

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkArrayCoordinates");

  vtkArrayCoordinates *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkArrayCoordinates"))
  {
    vtkArrayCoordinates *op = new vtkArrayCoordinates(*temp0);

    result = PyVTKSpecialObject_New("vtkArrayCoordinates", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkArrayCoordinates_vtkArrayCoordinates_Methods[] = {
  {"vtkArrayCoordinates", PyvtkArrayCoordinates_vtkArrayCoordinates_s2, METH_VARARGS,
   "-@k"},
  {"vtkArrayCoordinates", PyvtkArrayCoordinates_vtkArrayCoordinates_s5, METH_VARARGS,
   "@W vtkArrayCoordinates"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayCoordinates_vtkArrayCoordinates(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayCoordinates_vtkArrayCoordinates_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s1(self, args);
    case 2:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s3(self, args);
    case 3:
      return PyvtkArrayCoordinates_vtkArrayCoordinates_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkArrayCoordinates");
  return nullptr;
}


static const char *PyvtkArrayCoordinates_Doc =

  "vtkArrayCoordinates() -> vtkArrayCoordinates\nC++: vtkArrayCoordinates()\nvtkArrayCoordinates(i:int) -> vtkArrayCoordinates\nC++: explicit vtkArrayCoordinates(CoordinateT i)\nvtkArrayCoordinates(i:int, j:int) -> vtkArrayCoordinates\nC++: vtkArrayCoordinates(CoordinateT i, CoordinateT j)\nvtkArrayCoordinates(i:int, j:int, k:int) -> vtkArrayCoordinates\nC++: vtkArrayCoordinates(CoordinateT i, CoordinateT j, CoordinateT k)\nvtkArrayCoordinates(__a:vtkArrayCoordinates) -> vtkArrayCoordinates\nC++: vtkArrayCoordinates(const &vtkArrayCoordinates)\n""\n"
  "vtkArrayCoordinates - Stores coordinate into an N-way array.\n\n"
  "vtkArrayCoordinates stores a collection of coordinates that can be\n"
  "used to access values in a vtkArray containing an arbitrary number of\n"
  "dimensions.\n\n"
  "Convenience constructors are provided for working with one, two, and\n"
  "three dimensions.  For higher dimensions, use the default\n"
  "constructor, SetDimensions() and operator[] to assign a coordinate\n"
  "value along each dimension.\n\n"
  "@sa\n"
  "vtkArray, vtkArrayExtents\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";

static PyObject *
PyvtkArrayCoordinates_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkArrayCoordinates_vtkArrayCoordinates(nullptr, args);
}

static void PyvtkArrayCoordinates_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkArrayCoordinates *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static PyObject *PyvtkArrayCoordinates_String(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  std::ostringstream os;
  if (obj->vtk_ptr)
  {
    os << *static_cast<const vtkArrayCoordinates *>(obj->vtk_ptr);
  }
  const std::string &s = os.str();
  return PyUnicode_FromStringAndSize(s.data(), s.size());
}

static int PyvtkArrayCoordinates_CheckExact(PyObject *ob);

static PyObject *PyvtkArrayCoordinates_RichCompare(
  PyObject *o1, PyObject *o2, int opid)
{
  PyObject *n1 = nullptr;
  PyObject *n2 = nullptr;
  const vtkArrayCoordinates *so1 = nullptr;
  const vtkArrayCoordinates *so2 = nullptr;
  int result = -1;

  if (PyvtkArrayCoordinates_CheckExact(o1))
  {
    PyVTKSpecialObject *s1 = (PyVTKSpecialObject *)o1;
    so1 = static_cast<const vtkArrayCoordinates *>(s1->vtk_ptr);
  }
  else
  {
    so1 = static_cast<const vtkArrayCoordinates *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o1, "vtkArrayCoordinates", &n1));
    if (so1 == nullptr)
    {
      PyErr_Clear();
      Py_INCREF(Py_NotImplemented);
      return Py_NotImplemented;
    }
  }

  if (PyvtkArrayCoordinates_CheckExact(o2))
  {
    PyVTKSpecialObject *s2 = (PyVTKSpecialObject *)o2;
    so2 = static_cast<const vtkArrayCoordinates *>(s2->vtk_ptr);
  }
  else
  {
    so2 = static_cast<const vtkArrayCoordinates *>(
      vtkPythonUtil::GetPointerFromSpecialObject(
        o2, "vtkArrayCoordinates", &n2));
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

Py_ssize_t PyvtkArrayCoordinates_SequenceSize(PyObject *self)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

  return static_cast<Py_ssize_t>(op->GetDimensions());
}

PyObject *PyvtkArrayCoordinates_SequenceItem(PyObject *self, Py_ssize_t i)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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

int PyvtkArrayCoordinates_SequenceSetItem(
  PyObject *self, Py_ssize_t i, PyObject *arg1)
{
  void *vp = vtkPythonArgs::GetSelfSpecialPointer(self);
  vtkArrayCoordinates *op = static_cast<vtkArrayCoordinates *>(vp);

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

static PySequenceMethods PyvtkArrayCoordinates_AsSequence = {
  PyvtkArrayCoordinates_SequenceSize, // sq_length
  nullptr, // sq_concat
  nullptr, // sq_repeat
  PyvtkArrayCoordinates_SequenceItem, // sq_item
  nullptr, // sq_slice
  PyvtkArrayCoordinates_SequenceSetItem, // sq_ass_item
  nullptr, // sq_ass_slice
  nullptr, // sq_contains
  nullptr, // sq_inplace_concat
  nullptr, // sq_inplace_repeat
};

static Py_hash_t PyvtkArrayCoordinates_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrayCoordinates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkArrayCoordinates", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkArrayCoordinates_Delete, // tp_dealloc
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
  &PyvtkArrayCoordinates_AsSequence, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkArrayCoordinates_Hash, // tp_hash
  nullptr, // tp_call
  PyvtkArrayCoordinates_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkArrayCoordinates_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  PyvtkArrayCoordinates_RichCompare, // tp_richcompare
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
  PyvtkArrayCoordinates_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static int PyvtkArrayCoordinates_CheckExact(PyObject *ob)
{
  return (Py_TYPE(ob) == &PyvtkArrayCoordinates_Type);
}

static void *PyvtkArrayCoordinates_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkArrayCoordinates(*static_cast<const vtkArrayCoordinates*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkArrayCoordinates_TypeNew
extern "C" { PyObject *PyvtkArrayCoordinates_TypeNew(); }
#define DECLARED_PyvtkArrayCoordinates_TypeNew
#endif

PyObject *PyvtkArrayCoordinates_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkArrayCoordinates_Type,
    PyvtkArrayCoordinates_Methods,
    PyvtkArrayCoordinates_vtkArrayCoordinates_Methods,
    &PyvtkArrayCoordinates_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayCoordinates(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayCoordinates_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayCoordinates", o) != 0)
  {
    Py_DECREF(o);
  }

}

