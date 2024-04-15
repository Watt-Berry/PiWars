// python wrapper for vtkContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContourLineInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourLineInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkContourLineInterpolator_ClassNew(); }


static PyObject *
PyvtkContourLineInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContourLineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContourLineInterpolator *tempr = vtkContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourLineInterpolator::NewInstance());

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
PyvtkContourLineInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContourLineInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContourLineInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkContourRepresentation *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkContourRepresentation") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = op->InterpolateLine(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLineInterpolator_UpdateNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

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
      op->vtkContourLineInterpolator::UpdateNode(temp0, temp1, temp2, temp3));

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
PyvtkContourLineInterpolator_GetSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLineInterpolator *op = static_cast<vtkContourLineInterpolator *>(vp);

  int temp0;
  vtkIntArray *temp1 = nullptr;
  vtkContourRepresentation *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIntArray") &&
      ap.GetVTKObject(temp2, "vtkContourRepresentation"))
  {
    if (ap.IsBound())
    {
      op->GetSpan(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContourLineInterpolator::GetSpan(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContourLineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkContourLineInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContourLineInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContourLineInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContourLineInterpolator\nC++: static vtkContourLineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContourLineInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContourLineInterpolator\nC++: vtkContourLineInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContourLineInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContourLineInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InterpolateLine", PyvtkContourLineInterpolator_InterpolateLine, METH_VARARGS,
   "InterpolateLine(self, ren:vtkRenderer,\n    rep:vtkContourRepresentation, idx1:int, idx2:int) -> int\nC++: virtual int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2)\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {"UpdateNode", PyvtkContourLineInterpolator_UpdateNode, METH_VARARGS,
   "UpdateNode(self, __a:vtkRenderer, __b:vtkContourRepresentation,\n    node:[float, ...], idx:int) -> int\nC++: virtual int UpdateNode(vtkRenderer *,\n    vtkContourRepresentation *, double *node, int idx)\n\nThe interpolator is given a chance to update the node. For\ninstance, the vtkImageContourLineInterpolator updates the idx'th\nnode in the contour, so it automatically sticks to edges in the\nvicinity as the user constructs the contour. Returns 0 if the\nnode (world position) is unchanged.\n"},
  {"GetSpan", PyvtkContourLineInterpolator_GetSpan, METH_VARARGS,
   "GetSpan(self, nodeIndex:int, nodeIndices:vtkIntArray,\n    rep:vtkContourRepresentation) -> None\nC++: virtual void GetSpan(int nodeIndex, vtkIntArray *nodeIndices,\n     vtkContourRepresentation *rep)\n\nSpan of the interpolator. ie. the number of control points its\nsupposed to interpolate given a node.\n\n* The first argument is the current nodeIndex.\n* ie, you'd be trying to interpolate between nodes \"nodeIndex\"\n  and\n* \"nodeIndex-1\", unless you're closing the contour in which case,\n  you're\n* trying to interpolate \"nodeIndex\" and \"Node=0\".\n\n* The node span is returned in a vtkIntArray. The default node\n  span is 1\n* (ie. nodeIndices is a 2 tuple (nodeIndex, nodeIndex-1)).\n  However, it\n* need not always be 1. For instance, cubic spline interpolators,\nwhich\n* have a span of 3 control points, it can be larger. See\n* vtkBezierContourLineInterpolator for instance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContourLineInterpolator_Doc =
  "vtkContourLineInterpolator - Defines API for interpolating/modifying\nnodes from a vtkContourRepresentation\n\n"
  "Superclass: vtkObject\n\n"
  "vtkContourLineInterpolator is an abstract base class for\n"
  "interpolators that are used by the vtkContourRepresentation class to\n"
  "interpolate and/or modify nodes in a contour. Subclasses must\n"
  "override the virtual method InterpolateLine. This is used by the\n"
  "contour representation to give the interpolator a chance to define an\n"
  "interpolation scheme between nodes. See\n"
  "vtkBezierContourLineInterpolator for a concrete implementation.\n"
  "Subclasses may also override UpdateNode. This provides a way for the\n"
  "representation to give the interpolator a chance to modify the nodes,\n"
  "as the user constructs the contours. For instance, a sticky contour\n"
  "widget may be implemented that moves nodes to nearby regions of high\n"
  "gradient, to be used in contour-guided segmentation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourLineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkContourLineInterpolator", // tp_name
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
  PyvtkContourLineInterpolator_Doc, // tp_doc
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

PyObject *PyvtkContourLineInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContourLineInterpolator_Type, PyvtkContourLineInterpolator_Methods,
    "vtkContourLineInterpolator",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContourLineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourLineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContourLineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

