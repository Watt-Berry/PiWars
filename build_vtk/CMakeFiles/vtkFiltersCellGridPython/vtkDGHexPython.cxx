// python wrapper for vtkDGHex
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDGHex.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDGHex(PyObject *dict); }
extern "C" { PyObject *PyvtkDGHex_ClassNew(); }

#ifndef DECLARED_PyvtkDGCell_ClassNew
extern "C" { PyObject *PyvtkDGCell_ClassNew(); }
#define DECLARED_PyvtkDGCell_ClassNew
#endif

static PyObject *
PyvtkDGHex_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGHex::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGHex::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGHex *tempr = vtkDGHex::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGHex *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGHex::NewInstance());

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
PyvtkDGHex_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGHex::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGHex::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkDGHex::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkDGHex::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_GetNumberOfSideTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSideTypes() :
      op->vtkDGHex::GetNumberOfSideTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_GetNumberOfSidesOfDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesOfDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSidesOfDimension(temp0) :
      op->vtkDGHex::GetNumberOfSidesOfDimension(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_GetSideConnectivity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const std::vector<long long> *tempr = (ap.IsBound() ?
      &op->GetSideConnectivity(temp0) :
      &op->vtkDGHex::GetSideConnectivity(temp0));

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}

static PyObject *
PyvtkDGHex_GetSideConnectivity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = (ap.IsBound() ?
      op->GetSideConnectivity() :
      op->vtkDGHex::GetSideConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDGHex_GetSideConnectivity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDGHex_GetSideConnectivity_s1(self, args);
    case 0:
      return PyvtkDGHex_GetSideConnectivity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSideConnectivity");
  return nullptr;
}


static PyObject *
PyvtkDGHex_GetReferencePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferencePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeFloat32Array *tempr = (ap.IsBound() ?
      op->GetReferencePoints() :
      op->vtkDGHex::GetReferencePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGHex_GetSideOffsetsAndShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideOffsetsAndShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGHex *op = static_cast<vtkDGHex *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = (ap.IsBound() ?
      op->GetSideOffsetsAndShapes() :
      op->vtkDGHex::GetSideOffsetsAndShapes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDGHex_Methods[] = {
  {"IsTypeOf", PyvtkDGHex_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGHex_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGHex_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGHex\nC++: static vtkDGHex *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGHex_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGHex\nC++: vtkDGHex *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGHex_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGHex_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfCells", PyvtkDGHex_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nReturn the number of cells of this type in the parent cell-grid\nobject. Subclasses must override this method.\n"},
  {"GetDimension", PyvtkDGHex_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of this cell type (0, 1, 2, or\n3).\n"},
  {"GetNumberOfSideTypes", PyvtkDGHex_GetNumberOfSideTypes, METH_VARARGS,
   "GetNumberOfSideTypes(self) -> int\nC++: int GetNumberOfSideTypes() override;\n\nReturn the number of different side shapes of this cell type.\n\nExample: a wedge has 4 side shapes: Quadrilateral, Triangle,\nEdge, and Vertex.\n"},
  {"GetNumberOfSidesOfDimension", PyvtkDGHex_GetNumberOfSidesOfDimension, METH_VARARGS,
   "GetNumberOfSidesOfDimension(self, dimension:int) -> int\nC++: int GetNumberOfSidesOfDimension(int dimension) override;\n\nReturn the number of boundaries this type of cell has of a given\ndimension.\n\nDG cells can be thought of as CW-complex cells; they are tuples\nof corner points which represent an open point set plus its\nclosure decomposed into a union of open sets of lower dimension.\nFor example, a hexahedron is an 8-tuple of corner points\nrepresenting an underlying space shaped as an open, rectangular\nprism plus six 4-tuples representing its quadrilateral faces,\nplus twelve 2-tuples representing its edges, plus 8 1-tuples\nrepresenting its corners. Thus, a hexahedron has 6 + 12 + 8 = 26\nsides (plus its interior).\n"},
  {"GetSideConnectivity", PyvtkDGHex_GetSideConnectivity, METH_VARARGS,
   "GetSideConnectivity(self, side:int) -> (int, ...)\nC++: const std::vector<vtkIdType> &GetSideConnectivity(int side)\n    override;\nGetSideConnectivity(self) -> vtkTypeInt32Array\nC++: vtkTypeInt32Array *GetSideConnectivity() override;\n\nReturn the connectivity of the given side.\n\nThe side connectivity is a vector holding the indexes of\ncorner-points of the side into the connectivity vector of this\ncell.\n\nPassing a side of -1 should return the connectivity of the cell's\ninterior (a vector of the counting numbers from 0 to\nthis->GetNumberOfCorners()). This feature is used when rendering\ncells of dimension 2 or lower.\n"},
  {"GetReferencePoints", PyvtkDGHex_GetReferencePoints, METH_VARARGS,
   "GetReferencePoints(self) -> vtkTypeFloat32Array\nC++: vtkTypeFloat32Array *GetReferencePoints() override;\n\nReturn a singleton array initialized with the reference-cell's\ncorner point coordinates.\n\nWhen implementing a subclass, call FillReferencePoints() in your\noverride. This should always return the same vtkTypeFloat32Array\neach time so that the array is only uploaded to the GPU once.\n"},
  {"GetSideOffsetsAndShapes", PyvtkDGHex_GetSideOffsetsAndShapes, METH_VARARGS,
   "GetSideOffsetsAndShapes(self) -> vtkTypeInt32Array\nC++: vtkTypeInt32Array *GetSideOffsetsAndShapes() override;\n\nReturn a singleton array initialized with 2-tuples of (offset,\nshape) values.\n\nWhen implementing a subclass, call FillSideOffsetsAndShapes() in\nyour override. This should always return the same\nvtkTypeInt32Array each time so that the array is only uploaded to\nthe GPU once.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDGHex_Doc =
  "vtkDGHex - Metadata for a discontinuous Galerkin hexahedron.\n\n"
  "Superclass: vtkDGCell\n\n"
  "Currently, only a linear shape is supported but this may change to\n"
  "arbitrary order.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGHex_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGHex", // tp_name
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
  PyvtkDGHex_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDGHex_StaticNew()
{
  return vtkDGHex::New();
}

PyObject *PyvtkDGHex_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGHex_Type, PyvtkDGHex_Methods,
    "vtkDGHex",
 &PyvtkDGHex_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDGCell_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGHex(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGHex_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGHex", o) != 0)
  {
    Py_DECREF(o);
  }

}

