// python wrapper for vtkStructuredNeighbor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStructuredNeighbor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredNeighbor(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredNeighbor_NeighborOrientation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkStructuredNeighbor.NeighborOrientation", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkStructuredNeighbor_NeighborOrientation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkStructuredNeighbor_NeighborOrientation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkStructuredNeighbor_ComputeSendAndReceiveExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSendAndReceiveExtent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStructuredNeighbor *op = static_cast<vtkStructuredNeighbor *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  const size_t size3 = 6;
  int temp3[6];
  int save3[6];
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    op->ComputeSendAndReceiveExtent(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredNeighbor_Methods[] = {
  {"ComputeSendAndReceiveExtent", PyvtkStructuredNeighbor_ComputeSendAndReceiveExtent, METH_VARARGS,
   "ComputeSendAndReceiveExtent(self, gridRealExtent:[int, int, int,\n    int, int, int], gridGhostedExtent:[int, int, int, int, int,\n    int], neiRealExtent:[int, int, int, int, int, int],\n    WholeExtent:[int, int, int, int, int, int], N:int) -> None\nC++: virtual void ComputeSendAndReceiveExtent(\n    int gridRealExtent[6], int gridGhostedExtent[6],\n    int neiRealExtent[6], int WholeExtent[6], int N)\n\nComputes the SendExtent and the RcvExtent for this neighbor. The\nmethod assumes that the overlap extent and orientation are\nalready computed. Using this information, the method grows the\noverlap extent to form the Send and Rcv Extents for this neighbor\ninstance.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkStructuredNeighbor_vtkStructuredNeighbor_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStructuredNeighbor");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStructuredNeighbor *op = new vtkStructuredNeighbor();

    result = PyVTKSpecialObject_New("vtkStructuredNeighbor", op);
  }

  return result;
}

static PyObject *
PyvtkStructuredNeighbor_vtkStructuredNeighbor_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStructuredNeighbor");

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStructuredNeighbor *op = new vtkStructuredNeighbor(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    result = PyVTKSpecialObject_New("vtkStructuredNeighbor", op);
  }

  return result;
}

static PyObject *
PyvtkStructuredNeighbor_vtkStructuredNeighbor_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStructuredNeighbor");

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredNeighbor *op = new vtkStructuredNeighbor(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    result = PyVTKSpecialObject_New("vtkStructuredNeighbor", op);
  }

  return result;
}

static PyObject *
PyvtkStructuredNeighbor_vtkStructuredNeighbor_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStructuredNeighbor");

  vtkStructuredNeighbor *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStructuredNeighbor"))
  {
    vtkStructuredNeighbor *op = new vtkStructuredNeighbor(*temp0);

    result = PyVTKSpecialObject_New("vtkStructuredNeighbor", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkStructuredNeighbor_vtkStructuredNeighbor_Methods[] = {
  {"vtkStructuredNeighbor", PyvtkStructuredNeighbor_vtkStructuredNeighbor_s4, METH_VARARGS,
   "@W vtkStructuredNeighbor"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStructuredNeighbor_vtkStructuredNeighbor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkStructuredNeighbor_vtkStructuredNeighbor_s1(self, args);
    case 2:
      return PyvtkStructuredNeighbor_vtkStructuredNeighbor_s2(self, args);
    case 3:
      return PyvtkStructuredNeighbor_vtkStructuredNeighbor_s3(self, args);
    case 1:
      return PyvtkStructuredNeighbor_vtkStructuredNeighbor_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkStructuredNeighbor");
  return nullptr;
}


static const char *PyvtkStructuredNeighbor_Doc =

  "vtkStructuredNeighbor() -> vtkStructuredNeighbor\nC++: vtkStructuredNeighbor()\nvtkStructuredNeighbor(NeiID:int, overlap:[int, int, int, int, int,\n    int]) -> vtkStructuredNeighbor\nC++: vtkStructuredNeighbor(int NeiID, int overlap[6])\nvtkStructuredNeighbor(NeiID:int, overlap:[int, int, int, int, int,\n    int], orient:[int, int, int]) -> vtkStructuredNeighbor\nC++: vtkStructuredNeighbor(int NeiID, int overlap[6], int orient[3])\nvtkStructuredNeighbor(N:vtkStructuredNeighbor)\n    -> vtkStructuredNeighbor\nC++: vtkStructuredNeighbor(const vtkStructuredNeighbor &N)\n""\n"
  "vtkStructuredNeighbor - An internal, light-weight class used to store\nneighbor information.\n\n"
;

static PyObject *
PyvtkStructuredNeighbor_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkStructuredNeighbor_vtkStructuredNeighbor(nullptr, args);
}

static void PyvtkStructuredNeighbor_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkStructuredNeighbor *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkStructuredNeighbor_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredNeighbor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkStructuredNeighbor", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkStructuredNeighbor_Delete, // tp_dealloc
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
  PyvtkStructuredNeighbor_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkStructuredNeighbor_Doc, // tp_doc
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
  PyvtkStructuredNeighbor_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkStructuredNeighbor_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkStructuredNeighbor(*static_cast<const vtkStructuredNeighbor*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkStructuredNeighbor_TypeNew
extern "C" { PyObject *PyvtkStructuredNeighbor_TypeNew(); }
#define DECLARED_PyvtkStructuredNeighbor_TypeNew
#endif

PyObject *PyvtkStructuredNeighbor_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkStructuredNeighbor_Type,
    PyvtkStructuredNeighbor_Methods,
    PyvtkStructuredNeighbor_vtkStructuredNeighbor_Methods,
    &PyvtkStructuredNeighbor_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkStructuredNeighbor_NeighborOrientation_Type);
  PyVTKEnum_Add(&PyvtkStructuredNeighbor_NeighborOrientation_Type, "vtkStructuredNeighbor.NeighborOrientation");

  o = (PyObject *)&PyvtkStructuredNeighbor_NeighborOrientation_Type;
  if (PyDict_SetItemString(d, "NeighborOrientation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkStructuredNeighbor::NeighborOrientation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "SUBSET_LO", vtkStructuredNeighbor::SUBSET_LO },
        { "LO", vtkStructuredNeighbor::LO },
        { "ONE_TO_ONE", vtkStructuredNeighbor::ONE_TO_ONE },
        { "HI", vtkStructuredNeighbor::HI },
        { "SUBSET_HI", vtkStructuredNeighbor::SUBSET_HI },
        { "SUBSET_BOTH", vtkStructuredNeighbor::SUBSET_BOTH },
        { "SUPERSET", vtkStructuredNeighbor::SUPERSET },
        { "UNDEFINED", vtkStructuredNeighbor::UNDEFINED },
      };

    o = PyvtkStructuredNeighbor_NeighborOrientation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredNeighbor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredNeighbor_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredNeighbor", o) != 0)
  {
    Py_DECREF(o);
  }

}

