// python wrapper for vtkStructuredAMRNeighbor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkStructuredAMRNeighbor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredAMRNeighbor(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredAMRNeighbor_NeighborRelationship_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkStructuredAMRNeighbor.NeighborRelationship", // tp_name
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
PyObject *PyvtkStructuredAMRNeighbor_NeighborRelationship_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkStructuredAMRNeighbor_NeighborRelationship_Type, static_cast<int>(val));
}


static PyObject *
PyvtkStructuredAMRNeighbor_GetReceiveExtentOnGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReceiveExtentOnGrid");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStructuredAMRNeighbor *op = static_cast<vtkStructuredAMRNeighbor *>(vp);

  int temp0;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  const size_t size2 = 6;
  int temp2[6];
  int save2[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    op->GetReceiveExtentOnGrid(temp0, temp1, temp2);

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRNeighbor_GetRelationShipString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelationShipString");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStructuredAMRNeighbor *op = static_cast<vtkStructuredAMRNeighbor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = op->GetRelationShipString();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredAMRNeighbor_ComputeSendAndReceiveExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSendAndReceiveExtent");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkStructuredAMRNeighbor *op = static_cast<vtkStructuredAMRNeighbor *>(vp);

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

static PyMethodDef PyvtkStructuredAMRNeighbor_Methods[] = {
  {"GetReceiveExtentOnGrid", PyvtkStructuredAMRNeighbor_GetReceiveExtentOnGrid, METH_VARARGS,
   "GetReceiveExtentOnGrid(self, ng:int, gridExtent:[int, int, int,\n    int, int, int], ext:[int, int, int, int, int, int]) -> None\nC++: void GetReceiveExtentOnGrid(int ng, int gridExtent[6],\n    int ext[6])\n\nReturns the receive extent w.r.t. the grid's level, i.e., not the\nneighbor's level.\n"},
  {"GetRelationShipString", PyvtkStructuredAMRNeighbor_GetRelationShipString, METH_VARARGS,
   "GetRelationShipString(self) -> str\nC++: std::string GetRelationShipString()\n\nReturns the neighbor relationship as a string (useful for\ndebugging).\n"},
  {"ComputeSendAndReceiveExtent", PyvtkStructuredAMRNeighbor_ComputeSendAndReceiveExtent, METH_VARARGS,
   "ComputeSendAndReceiveExtent(self, gridRealExtent:[int, int, int,\n    int, int, int], gridGhostedExtent:[int, int, int, int, int,\n    int], neiRealExtent:[int, int, int, int, int, int],\n    WholeExtent:[int, int, int, int, int, int], N:int) -> None\nC++: void ComputeSendAndReceiveExtent(int gridRealExtent[6],\n    int gridGhostedExtent[6], int neiRealExtent[6],\n    int WholeExtent[6], int N) override;\n\nComputes the SendExtent and RcvExtent for this neighbor. The\nmethod assumes that the overlap extent and orientation are\nalready computed. Using this information, the method grows the\noverlap extent to form the Send and Rcv extents for this neighbor\ninstance.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStructuredAMRNeighbor");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStructuredAMRNeighbor *op = new vtkStructuredAMRNeighbor();

    result = PyVTKSpecialObject_New("vtkStructuredAMRNeighbor", op);
  }

  return result;
}

static PyObject *
PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStructuredAMRNeighbor");

  int temp0;
  int temp1;
  int temp2;
  const size_t size3 = 6;
  int temp3[6];
  int save3[6];
  const size_t size4 = 6;
  int temp4[6];
  int save4[6];
  const size_t size5 = 3;
  int temp5[3];
  int save5[3];
  int temp6;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkStructuredAMRNeighbor *op = new vtkStructuredAMRNeighbor(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    result = PyVTKSpecialObject_New("vtkStructuredAMRNeighbor", op);
  }

  return result;
}

static PyObject *
PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkStructuredAMRNeighbor");

  vtkStructuredAMRNeighbor *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStructuredAMRNeighbor"))
  {
    vtkStructuredAMRNeighbor *op = new vtkStructuredAMRNeighbor(*temp0);

    result = PyVTKSpecialObject_New("vtkStructuredAMRNeighbor", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_Methods[] = {
  {"vtkStructuredAMRNeighbor", PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_s3, METH_VARARGS,
   "@W vtkStructuredAMRNeighbor"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_s1(self, args);
    case 7:
      return PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_s2(self, args);
    case 1:
      return PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkStructuredAMRNeighbor");
  return nullptr;
}


static const char *PyvtkStructuredAMRNeighbor_Doc =

  "vtkStructuredAMRNeighbor() -> vtkStructuredAMRNeighbor\nC++: vtkStructuredAMRNeighbor()\nvtkStructuredAMRNeighbor(gridLevel:int, neiID:int, neighborLevel:int,\n    gridOverlap:[int, int, int, int, int, int], neiOverlap:[int, int,\n    int, int, int, int], orient:[int, int, int], relationShip:int)\n    -> vtkStructuredAMRNeighbor\nC++: vtkStructuredAMRNeighbor(int gridLevel, int neiID,\n    int neighborLevel, int gridOverlap[6], int neiOverlap[6],\n    int orient[3], int relationShip)\nvtkStructuredAMRNeighbor(N:vtkStructuredAMRNeighbor)\n    -> vtkStructuredAMRNeighbor\nC++: vtkStructuredAMRNeighbor(const vtkStructuredAMRNeighbor &N)\n""\n"
  "vtkStructuredAMRNeighbor - An internal, light-weight object used to\nstore neighbor information for\n AMR grids.\n\n"
  "Superclass: vtkStructuredNeighbor\n\n"
  "@sa\n"
  " vtkStructuredNeighbor vtkStructuredAMRGridConnectivity\n\n";

static PyObject *
PyvtkStructuredAMRNeighbor_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor(nullptr, args);
}

static void PyvtkStructuredAMRNeighbor_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkStructuredAMRNeighbor *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkStructuredAMRNeighbor_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredAMRNeighbor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkStructuredAMRNeighbor", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkStructuredAMRNeighbor_Delete, // tp_dealloc
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
  PyvtkStructuredAMRNeighbor_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkStructuredAMRNeighbor_Doc, // tp_doc
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
  PyvtkStructuredAMRNeighbor_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkStructuredAMRNeighbor_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkStructuredAMRNeighbor(*static_cast<const vtkStructuredAMRNeighbor*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkStructuredAMRNeighbor_TypeNew
extern "C" { PyObject *PyvtkStructuredAMRNeighbor_TypeNew(); }
#define DECLARED_PyvtkStructuredAMRNeighbor_TypeNew
#endif

#ifndef DECLARED_PyvtkStructuredNeighbor_TypeNew
extern "C" { PyObject *PyvtkStructuredNeighbor_TypeNew(); }
#define DECLARED_PyvtkStructuredNeighbor_TypeNew
#endif
PyObject *PyvtkStructuredAMRNeighbor_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkStructuredAMRNeighbor_Type,
    PyvtkStructuredAMRNeighbor_Methods,
    PyvtkStructuredAMRNeighbor_vtkStructuredAMRNeighbor_Methods,
    &PyvtkStructuredAMRNeighbor_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkStructuredNeighbor_TypeNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkStructuredAMRNeighbor_NeighborRelationship_Type);
  PyVTKEnum_Add(&PyvtkStructuredAMRNeighbor_NeighborRelationship_Type, "vtkStructuredAMRNeighbor.NeighborRelationship");

  o = (PyObject *)&PyvtkStructuredAMRNeighbor_NeighborRelationship_Type;
  if (PyDict_SetItemString(d, "NeighborRelationship", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkStructuredAMRNeighbor::NeighborRelationship cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "PARENT", vtkStructuredAMRNeighbor::PARENT },
        { "PARTIALLY_OVERLAPPING_PARENT", vtkStructuredAMRNeighbor::PARTIALLY_OVERLAPPING_PARENT },
        { "CHILD", vtkStructuredAMRNeighbor::CHILD },
        { "PARTIALLY_OVERLAPPING_CHILD", vtkStructuredAMRNeighbor::PARTIALLY_OVERLAPPING_CHILD },
        { "SAME_LEVEL_SIBLING", vtkStructuredAMRNeighbor::SAME_LEVEL_SIBLING },
        { "COARSE_TO_FINE_SIBLING", vtkStructuredAMRNeighbor::COARSE_TO_FINE_SIBLING },
        { "FINE_TO_COARSE_SIBLING", vtkStructuredAMRNeighbor::FINE_TO_COARSE_SIBLING },
        { "UNDEFINED", vtkStructuredAMRNeighbor::UNDEFINED },
      };

    o = PyvtkStructuredAMRNeighbor_NeighborRelationship_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredAMRNeighbor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredAMRNeighbor_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredAMRNeighbor", o) != 0)
  {
    Py_DECREF(o);
  }

}

