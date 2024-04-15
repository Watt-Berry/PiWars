// python wrapper for vtkPolygonBuilder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkPolygonBuilder.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolygonBuilder(PyObject *dict); }

static PyObject *
PyvtkPolygonBuilder_InsertTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTriangle");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    op->InsertTriangle(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonBuilder_GetPolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygons");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

  vtkIdListCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdListCollection"))
  {
    op->GetPolygons(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonBuilder_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkPolygonBuilder *op = static_cast<vtkPolygonBuilder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    op->Reset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygonBuilder_Methods[] = {
  {"InsertTriangle", PyvtkPolygonBuilder_InsertTriangle, METH_VARARGS,
   "InsertTriangle(self, abc:(int, ...)) -> None\nC++: void InsertTriangle(const vtkIdType *abc)\n\nInsert a triangle as a triplet of point IDs.\n"},
  {"GetPolygons", PyvtkPolygonBuilder_GetPolygons, METH_VARARGS,
   "GetPolygons(self, polys:vtkIdListCollection) -> None\nC++: void GetPolygons(vtkIdListCollection *polys)\n\nPopulate polys with lists of polygons, defined as sequential\nexternal vertices. It is the responsibility of the user to delete\nthese generated lists in order to avoid memory leaks.\n"},
  {"Reset", PyvtkPolygonBuilder_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nPrepare the builder for a new set of inputs.\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonBuilder");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPolygonBuilder *op = new vtkPolygonBuilder();

    result = PyVTKSpecialObject_New("vtkPolygonBuilder", op);
  }

  return result;
}

static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkPolygonBuilder");

  vtkPolygonBuilder *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkPolygonBuilder"))
  {
    vtkPolygonBuilder *op = new vtkPolygonBuilder(*temp0);

    result = PyVTKSpecialObject_New("vtkPolygonBuilder", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkPolygonBuilder_vtkPolygonBuilder_Methods[] = {
  {"vtkPolygonBuilder", PyvtkPolygonBuilder_vtkPolygonBuilder_s2, METH_VARARGS,
   "@W vtkPolygonBuilder"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolygonBuilder_vtkPolygonBuilder(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolygonBuilder_vtkPolygonBuilder_s1(self, args);
    case 1:
      return PyvtkPolygonBuilder_vtkPolygonBuilder_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkPolygonBuilder");
  return nullptr;
}


static const char *PyvtkPolygonBuilder_Doc =

  "vtkPolygonBuilder() -> vtkPolygonBuilder\nC++: vtkPolygonBuilder()\nvtkPolygonBuilder(__a:vtkPolygonBuilder) -> vtkPolygonBuilder\nC++: vtkPolygonBuilder(const &vtkPolygonBuilder)\n""\n"
  "vtkPolygonBuilder -  The polygon output is the boundary of the union\nof the triangles.\n\n"
  "It is assumed that the input triangles form a simple polygon. It is\n"
  " currently used to compute polygons for slicing.\n\n";

static PyObject *
PyvtkPolygonBuilder_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkPolygonBuilder_vtkPolygonBuilder(nullptr, args);
}

static void PyvtkPolygonBuilder_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkPolygonBuilder *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkPolygonBuilder_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolygonBuilder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMisc.vtkPolygonBuilder", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkPolygonBuilder_Delete, // tp_dealloc
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
  PyvtkPolygonBuilder_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkPolygonBuilder_Doc, // tp_doc
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
  PyvtkPolygonBuilder_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkPolygonBuilder_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkPolygonBuilder(*static_cast<const vtkPolygonBuilder*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkPolygonBuilder_TypeNew
extern "C" { PyObject *PyvtkPolygonBuilder_TypeNew(); }
#define DECLARED_PyvtkPolygonBuilder_TypeNew
#endif

PyObject *PyvtkPolygonBuilder_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkPolygonBuilder_Type,
    PyvtkPolygonBuilder_Methods,
    PyvtkPolygonBuilder_vtkPolygonBuilder_Methods,
    &PyvtkPolygonBuilder_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolygonBuilder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolygonBuilder_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygonBuilder", o) != 0)
  {
    Py_DECREF(o);
  }

}

