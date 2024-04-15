// python wrapper for vtkContourHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkContourHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourHelper(PyObject *dict); }

static PyObject *
PyvtkContourHelper_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkContourHelper *op = static_cast<vtkContourHelper *>(vp);

  vtkCell *temp0 = nullptr;
  double temp1;
  vtkDataArray *temp2 = nullptr;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetValue(temp3))
  {
    op->Contour(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContourHelper_Methods[] = {
  {"Contour", PyvtkContourHelper_Contour, METH_VARARGS,
   "Contour(self, cell:vtkCell, value:float, cellScalars:vtkDataArray,\n     cellId:int) -> None\nC++: void Contour(vtkCell *cell, double value,\n    vtkDataArray *cellScalars, vtkIdType cellId)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkContourHelper_vtkContourHelper(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkContourHelper");

  vtkIncrementalPointLocator *temp0 = nullptr;
  vtkCellArray *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkCellData *temp5 = nullptr;
  vtkPointData *temp6 = nullptr;
  vtkCellData *temp7 = nullptr;
  int temp8;
  bool temp9 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(10) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkCellData") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkCellData") &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    vtkContourHelper *op = new vtkContourHelper(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);

    result = PyVTKSpecialObject_New("vtkContourHelper", op);
  }

  return result;
}

static PyMethodDef PyvtkContourHelper_vtkContourHelper_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkContourHelper_Doc =

  "vtkContourHelper(locator:vtkIncrementalPointLocator,\n    outVerts:vtkCellArray, outLines:vtkCellArray,\n    outPolys:vtkCellArray, inPd:vtkPointData, inCd:vtkCellData,\n    outPd:vtkPointData, outCd:vtkCellData, trisEstimatedSize:int,\n    outputTriangles:bool) -> vtkContourHelper\nC++: vtkContourHelper(vtkIncrementalPointLocator *locator,\n    vtkCellArray *outVerts, vtkCellArray *outLines,\n    vtkCellArray *outPolys, vtkPointData *inPd, vtkCellData *inCd,\n    vtkPointData *outPd, vtkCellData *outCd, int trisEstimatedSize,\n    bool outputTriangles)\n""\n"
  "vtkContourHelper - A utility class used by various contour filters\n\n"
  "This is a simple utility class that can be used by various contour\n"
  "filters to produce either triangles and/or polygons based on the\n"
  "outputTriangles parameter. If outputTriangles is set to true,\n"
  "trisEstimatedSize is used to allocate memory for temporary triangles\n"
  "created by contouring before merging them. If outputTriangles is set\n"
  "to false, contouring triangles are outputted and trisEstimatedSize is\n"
  "not used.\n\n"
  "When working with multidimensional dataset, it is needed to process\n"
  "cells from low to high dimensions.\n\n"
  "@sa\n"
  "vtkContourGrid vtkCutter vtkContourFilter\n\n";

static PyObject *
PyvtkContourHelper_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkContourHelper_vtkContourHelper(nullptr, args);
}

static void PyvtkContourHelper_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkContourHelper *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkContourHelper_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkContourHelper", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkContourHelper_Delete, // tp_dealloc
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
  PyvtkContourHelper_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkContourHelper_Doc, // tp_doc
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
  PyvtkContourHelper_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkContourHelper_TypeNew
extern "C" { PyObject *PyvtkContourHelper_TypeNew(); }
#define DECLARED_PyvtkContourHelper_TypeNew
#endif

PyObject *PyvtkContourHelper_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkContourHelper_Type,
    PyvtkContourHelper_Methods,
    PyvtkContourHelper_vtkContourHelper_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContourHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourHelper_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkContourHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

