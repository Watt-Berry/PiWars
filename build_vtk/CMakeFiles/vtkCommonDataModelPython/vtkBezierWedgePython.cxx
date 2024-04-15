// python wrapper for vtkBezierWedge
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBezierWedge.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBezierWedge(PyObject *dict); }
extern "C" { PyObject *PyvtkBezierWedge_ClassNew(); }

#ifndef DECLARED_PyvtkHigherOrderWedge_ClassNew
extern "C" { PyObject *PyvtkHigherOrderWedge_ClassNew(); }
#define DECLARED_PyvtkHigherOrderWedge_ClassNew
#endif

static PyObject *
PyvtkBezierWedge_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBezierWedge::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBezierWedge::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBezierWedge *tempr = vtkBezierWedge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBezierWedge *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBezierWedge::NewInstance());

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
PyvtkBezierWedge_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBezierWedge::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBezierWedge::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkBezierWedge::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkBezierWedge::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkBezierWedge::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateFunctions(temp0, temp1);
    }
    else
    {
      op->vtkBezierWedge::InterpolateFunctions(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateDerivs(temp0, temp1);
    }
    else
    {
      op->vtkBezierWedge::InterpolateDerivs(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_SetRationalWeightsFromPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRationalWeightsFromPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  vtkPointData *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPointData") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRationalWeightsFromPointData(temp0, temp1);
    }
    else
    {
      op->vtkBezierWedge::SetRationalWeightsFromPointData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetBoundaryQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHigherOrderQuadrilateral *tempr = (ap.IsBound() ?
      op->GetBoundaryQuad() :
      op->vtkBezierWedge::GetBoundaryQuad());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetBoundaryTri(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryTri");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHigherOrderTriangle *tempr = (ap.IsBound() ?
      op->GetBoundaryTri() :
      op->vtkBezierWedge::GetBoundaryTri());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetEdgeCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHigherOrderCurve *tempr = (ap.IsBound() ?
      op->GetEdgeCell() :
      op->vtkBezierWedge::GetEdgeCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHigherOrderInterpolation *tempr = (ap.IsBound() ?
      op->GetInterpolation() :
      op->vtkBezierWedge::GetInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBezierWedge_GetRationalWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRationalWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBezierWedge *op = static_cast<vtkBezierWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetRationalWeights() :
      op->vtkBezierWedge::GetRationalWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBezierWedge_Methods[] = {
  {"IsTypeOf", PyvtkBezierWedge_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBezierWedge_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBezierWedge_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBezierWedge\nC++: static vtkBezierWedge *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBezierWedge_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBezierWedge\nC++: vtkBezierWedge *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBezierWedge_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBezierWedge_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCellType", PyvtkBezierWedge_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType() override;\n\nReturn the type of cell.\n"},
  {"GetEdge", PyvtkBezierWedge_GetEdge, METH_VARARGS,
   "GetEdge(self, edgeId:int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetFace", PyvtkBezierWedge_GetFace, METH_VARARGS,
   "GetFace(self, faceId:int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nReturn the face cell from the faceId of the cell. The returned\nvtkCell is an object owned by this instance, hence the return\nvalue must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE.\n"},
  {"InterpolateFunctions", PyvtkBezierWedge_InterpolateFunctions, METH_VARARGS,
   "InterpolateFunctions(self, pcoords:(float, float, float),\n    weights:[float, ...]) -> None\nC++: void InterpolateFunctions(const double pcoords[3],\n    double *weights) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives) No-ops at this level. Typically overridden\nin subclasses.\n"},
  {"InterpolateDerivs", PyvtkBezierWedge_InterpolateDerivs, METH_VARARGS,
   "InterpolateDerivs(self, pcoords:(float, float, float),\n    derivs:[float, ...]) -> None\nC++: void InterpolateDerivs(const double pcoords[3],\n    double *derivs) override;\n\n"},
  {"SetRationalWeightsFromPointData", PyvtkBezierWedge_SetRationalWeightsFromPointData, METH_VARARGS,
   "SetRationalWeightsFromPointData(self, point_data:vtkPointData,\n    numPts:int) -> None\nC++: void SetRationalWeightsFromPointData(\n    vtkPointData *point_data, vtkIdType numPts)\n\n"},
  {"GetBoundaryQuad", PyvtkBezierWedge_GetBoundaryQuad, METH_VARARGS,
   "GetBoundaryQuad(self) -> vtkHigherOrderQuadrilateral\nC++: vtkHigherOrderQuadrilateral *GetBoundaryQuad() override;\n\n"},
  {"GetBoundaryTri", PyvtkBezierWedge_GetBoundaryTri, METH_VARARGS,
   "GetBoundaryTri(self) -> vtkHigherOrderTriangle\nC++: vtkHigherOrderTriangle *GetBoundaryTri() override;\n\n"},
  {"GetEdgeCell", PyvtkBezierWedge_GetEdgeCell, METH_VARARGS,
   "GetEdgeCell(self) -> vtkHigherOrderCurve\nC++: vtkHigherOrderCurve *GetEdgeCell() override;\n\n"},
  {"GetInterpolation", PyvtkBezierWedge_GetInterpolation, METH_VARARGS,
   "GetInterpolation(self) -> vtkHigherOrderInterpolation\nC++: vtkHigherOrderInterpolation *GetInterpolation() override;\n\n"},
  {"GetRationalWeights", PyvtkBezierWedge_GetRationalWeights, METH_VARARGS,
   "GetRationalWeights(self) -> vtkDoubleArray\nC++: vtkDoubleArray *GetRationalWeights()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBezierWedge_Doc =
  "vtkBezierWedge - A 3D cell that represents an arbitrary order Bezier\nwedge\n\n"
  "Superclass: vtkHigherOrderWedge\n\n"
  "vtkBezierWedge is a concrete implementation of vtkCell to represent a\n"
  "3D wedge using Bezier shape functions of user specified order. A\n"
  "wedge consists of two triangular and three quadrilateral faces. The\n"
  "first six points of the wedge (0-5) are the \"corner\" points where the\n"
  "first three points are the base of the wedge. This wedge point\n"
  "ordering is opposite the vtkWedge ordering though in that the base of\n"
  "the wedge defined by the first three points (0,1,2) form a triangle\n"
  "whose normal points inward (toward the triangular face (3,4,5)).\n"
  "While this is opposite the vtkWedge convention it is consistent with\n"
  "every other cell type in VTK. The first 2 parametric coordinates of\n"
  "the Bezier wedge or for the triangular base and vary between 0 and 1.\n"
  "The third parametric coordinate is between the two triangular faces\n"
  "and goes from 0 to 1 as well.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBezierWedge_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkBezierWedge", // tp_name
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
  PyvtkBezierWedge_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBezierWedge_StaticNew()
{
  return vtkBezierWedge::New();
}

PyObject *PyvtkBezierWedge_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBezierWedge_Type, PyvtkBezierWedge_Methods,
    "vtkBezierWedge",
 &PyvtkBezierWedge_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHigherOrderWedge_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBezierWedge(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBezierWedge_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBezierWedge", o) != 0)
  {
    Py_DECREF(o);
  }

}

