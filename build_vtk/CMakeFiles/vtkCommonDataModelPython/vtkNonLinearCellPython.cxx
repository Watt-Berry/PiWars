// python wrapper for vtkNonLinearCell
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkNonLinearCell.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNonLinearCell(PyObject *dict); }
extern "C" { PyObject *PyvtkNonLinearCell_ClassNew(); }

#ifndef DECLARED_PyvtkCell_ClassNew
extern "C" { PyObject *PyvtkCell_ClassNew(); }
#define DECLARED_PyvtkCell_ClassNew
#endif

static PyObject *
PyvtkNonLinearCell_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNonLinearCell::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonLinearCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNonLinearCell::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonLinearCell_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNonLinearCell *tempr = vtkNonLinearCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonLinearCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNonLinearCell *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNonLinearCell::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonLinearCell_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkNonLinearCell::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonLinearCell_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkNonLinearCell::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonLinearCell_IsLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLinear() :
      op->vtkNonLinearCell::IsLinear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNonLinearCell_StableClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StableClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNonLinearCell *op = static_cast<vtkNonLinearCell *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9))
  {
    bool tempr = (ap.IsBound() ?
      op->StableClip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9) :
      op->vtkNonLinearCell::StableClip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNonLinearCell_Methods[] = {
  {"IsTypeOf", PyvtkNonLinearCell_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNonLinearCell_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNonLinearCell_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkNonLinearCell\nC++: static vtkNonLinearCell *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNonLinearCell_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkNonLinearCell\nC++: vtkNonLinearCell *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkNonLinearCell_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkNonLinearCell_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsLinear", PyvtkNonLinearCell_IsLinear, METH_VARARGS,
   "IsLinear(self) -> int\nC++: int IsLinear() override;\n\nNon-linear cells require special treatment (tessellation) when\nconverting to graphics primitives (during mapping). The vtkCell\nAPI IsLinear() is modified to indicate this requirement.\n"},
  {"StableClip", PyvtkNonLinearCell_StableClip, METH_VARARGS,
   "StableClip(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, connectivity:vtkCellArray,\n     inPd:vtkPointData, outPd:vtkPointData, inCd:vtkCellData,\n    cellId:int, outCd:vtkCellData, insideOut:int) -> bool\nC++: virtual bool StableClip(double value,\n    vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut)\n\nClip the cell based on the input cellScalars and the specified\nvalue. The output of the clip operation will be one or more cells\nof the same topological dimension as the original cell. For more\ninformations see vtkCell::Clip.\n\nThis method differs from the vtkCell::Clip function in such a way\nthat it tells more information about how the clipped cell was\nhandled. For 2D cells vtkCell::Clip is expected to return either\ntriangles, quads or polygon, and for 3D cells either tetras or\nwedges. However, it is interesting (especially for non linear\ncells) to be able to return the same cell type when the cell is\ntotally inside or outside the clipping function. This Clip\nfunction resolves exactly this issue by returning a bool : if\nStableClip returns true then the newly inserted cell is the same\ntype as the current cell, otherwise it will be one of the\n\"expected\" types as returned by vtkCell::Clip.\n\nNote: This function could also benefit being moved to vtkCell but\nrequires much more work to be supported by all cell types.\n\n@see vtkCell::Clip\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkNonLinearCell_Doc =
  "vtkNonLinearCell - abstract superclass for non-linear cells\n\n"
  "Superclass: vtkCell\n\n"
  "vtkNonLinearCell is an abstract superclass for non-linear cell types.\n"
  "Cells that are a direct subclass of vtkCell or vtkCell3D are linear;\n"
  "cells that are a subclass of vtkNonLinearCell have non-linear\n"
  "interpolation functions. Non-linear cells require special treatment\n"
  "when tessellating or converting to graphics primitives. Note that the\n"
  "linearity of the cell is a function of whether the cell needs\n"
  "tessellation, which does not strictly correlate with interpolation\n"
  "order (e.g., vtkHexahedron has non-linear interpolation functions (a\n"
  "product of three linear functions in r-s-t) even thought\n"
  "vtkHexahedron is considered linear.)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNonLinearCell_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkNonLinearCell", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkNonLinearCell_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

PyObject *PyvtkNonLinearCell_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkNonLinearCell_Type, PyvtkNonLinearCell_Methods,
    "vtkNonLinearCell",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCell_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNonLinearCell(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNonLinearCell_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNonLinearCell", o) != 0)
  {
    Py_DECREF(o);
  }

}

