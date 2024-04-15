// python wrapper for vtkPolygonalSurfaceContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolygonalSurfaceContourLineInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkPolygonalSurfaceContourLineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataContourLineInterpolator_ClassNew
extern "C" { PyObject *PyvtkPolyDataContourLineInterpolator_ClassNew(); }
#define DECLARED_PyvtkPolyDataContourLineInterpolator_ClassNew
#endif

static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolygonalSurfaceContourLineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolygonalSurfaceContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolygonalSurfaceContourLineInterpolator *tempr = vtkPolygonalSurfaceContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolygonalSurfaceContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolygonalSurfaceContourLineInterpolator::NewInstance());

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
PyvtkPolygonalSurfaceContourLineInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolygonalSurfaceContourLineInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolygonalSurfaceContourLineInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->InterpolateLine(temp0, temp1, temp2, temp3) :
      op->vtkPolygonalSurfaceContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_UpdateNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->UpdateNode(temp0, temp1, temp2, temp3) :
      op->vtkPolygonalSurfaceContourLineInterpolator::UpdateNode(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_SetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceOffset(temp0);
    }
    else
    {
      op->vtkPolygonalSurfaceContourLineInterpolator::SetDistanceOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetDistanceOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceOffset() :
      op->vtkPolygonalSurfaceContourLineInterpolator::GetDistanceOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygonalSurfaceContourLineInterpolator_GetContourPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygonalSurfaceContourLineInterpolator *op = static_cast<vtkPolygonalSurfaceContourLineInterpolator *>(vp);

  vtkContourRepresentation *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkContourRepresentation") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetContourPointIds(temp0, temp1);
    }
    else
    {
      op->vtkPolygonalSurfaceContourLineInterpolator::GetContourPointIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygonalSurfaceContourLineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkPolygonalSurfaceContourLineInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolygonalSurfaceContourLineInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolygonalSurfaceContourLineInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkPolygonalSurfaceContourLineInterpolator\nC++: static vtkPolygonalSurfaceContourLineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolygonalSurfaceContourLineInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolygonalSurfaceContourLineInterpolator\nC++: vtkPolygonalSurfaceContourLineInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolygonalSurfaceContourLineInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolygonalSurfaceContourLineInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InterpolateLine", PyvtkPolygonalSurfaceContourLineInterpolator_InterpolateLine, METH_VARARGS,
   "InterpolateLine(self, ren:vtkRenderer,\n    rep:vtkContourRepresentation, idx1:int, idx2:int) -> int\nC++: int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2) override;\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {"UpdateNode", PyvtkPolygonalSurfaceContourLineInterpolator_UpdateNode, METH_VARARGS,
   "UpdateNode(self, __a:vtkRenderer, __b:vtkContourRepresentation,\n    node:[float, ...], idx:int) -> int\nC++: int UpdateNode(vtkRenderer *, vtkContourRepresentation *,\n    double *node, int idx) override;\n\nThe interpolator is given a chance to update the node.\nvtkImageContourLineInterpolator updates the idx'th node in the\ncontour, so it automatically sticks to edges in the vicinity as\nthe user constructs the contour. Returns 0 if the node (world\nposition) is unchanged.\n"},
  {"SetDistanceOffset", PyvtkPolygonalSurfaceContourLineInterpolator_SetDistanceOffset, METH_VARARGS,
   "SetDistanceOffset(self, _arg:float) -> None\nC++: virtual void SetDistanceOffset(double _arg)\n\nHeight offset at which points may be placed on the polygonal\nsurface. If you specify a non-zero value here, be sure to have\ncomputed vertex normals on your input polygonal data. (easily\ndone with vtkPolyDataNormals).\n"},
  {"GetDistanceOffset", PyvtkPolygonalSurfaceContourLineInterpolator_GetDistanceOffset, METH_VARARGS,
   "GetDistanceOffset(self) -> float\nC++: virtual double GetDistanceOffset()\n\n"},
  {"GetContourPointIds", PyvtkPolygonalSurfaceContourLineInterpolator_GetContourPointIds, METH_VARARGS,
   "GetContourPointIds(self, rep:vtkContourRepresentation,\n    ids:vtkIdList) -> None\nC++: void GetContourPointIds(vtkContourRepresentation *rep,\n    vtkIdList *ids)\n\nGet the contour point ids. These point ids correspond to those on\nthe polygonal surface\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolygonalSurfaceContourLineInterpolator_Doc =
  "vtkPolygonalSurfaceContourLineInterpolator - Contour interpolator for\nto place points on polygonal surfaces.\n\n"
  "Superclass: vtkPolyDataContourLineInterpolator\n\n"
  "vtkPolygonalSurfaceContourLineInterpolator interpolates and places\n"
  "contour points on polygonal surfaces. The class interpolates nodes by\n"
  "computing a graph geodesic laying on the polygonal data. By \\em graph\n"
  "Geodesic, we mean that the line interpolating the two end points\n"
  "traverses along on the mesh edges so as to form the shortest path. A\n"
  "Dijkstra algorithm is used to compute the path. See\n"
  "vtkDijkstraGraphGeodesicPath.\n\n"
  "The class is mean to be used in conjunction with\n"
  "vtkPolygonalSurfacePointPlacer. The reason for this weak coupling is\n"
  "a performance issue, both classes need to perform a cell pick, and\n"
  "coupling avoids multiple cell picks (cell picks are slow).\n\n"
  "@warning\n"
  "You should have computed cell normals for the input polydata.\n\n"
  "@sa\n"
  "vtkDijkstraGraphGeodesicPath, vtkPolyDataNormals\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolygonalSurfaceContourLineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkPolygonalSurfaceContourLineInterpolator", // tp_name
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
  PyvtkPolygonalSurfaceContourLineInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolygonalSurfaceContourLineInterpolator_StaticNew()
{
  return vtkPolygonalSurfaceContourLineInterpolator::New();
}

PyObject *PyvtkPolygonalSurfaceContourLineInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolygonalSurfaceContourLineInterpolator_Type, PyvtkPolygonalSurfaceContourLineInterpolator_Methods,
    "vtkPolygonalSurfaceContourLineInterpolator",
 &PyvtkPolygonalSurfaceContourLineInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataContourLineInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolygonalSurfaceContourLineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolygonalSurfaceContourLineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygonalSurfaceContourLineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

