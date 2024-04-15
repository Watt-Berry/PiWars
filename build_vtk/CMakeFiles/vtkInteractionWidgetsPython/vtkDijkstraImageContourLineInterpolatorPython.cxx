// python wrapper for vtkDijkstraImageContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDijkstraImageContourLineInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDijkstraImageContourLineInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkDijkstraImageContourLineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkContourLineInterpolator_ClassNew
extern "C" { PyObject *PyvtkContourLineInterpolator_ClassNew(); }
#define DECLARED_PyvtkContourLineInterpolator_ClassNew
#endif

static PyObject *
PyvtkDijkstraImageContourLineInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDijkstraImageContourLineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDijkstraImageContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDijkstraImageContourLineInterpolator *tempr = vtkDijkstraImageContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDijkstraImageContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDijkstraImageContourLineInterpolator::NewInstance());

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
PyvtkDijkstraImageContourLineInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDijkstraImageContourLineInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDijkstraImageContourLineInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

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
      op->vtkDijkstraImageContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_SetCostImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCostImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetCostImage(temp0);
    }
    else
    {
      op->vtkDijkstraImageContourLineInterpolator::SetCostImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_GetCostImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCostImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetCostImage() :
      op->vtkDijkstraImageContourLineInterpolator::GetCostImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDijkstraImageContourLineInterpolator_GetDijkstraImageGeodesicPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDijkstraImageGeodesicPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDijkstraImageContourLineInterpolator *op = static_cast<vtkDijkstraImageContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDijkstraImageGeodesicPath *tempr = (ap.IsBound() ?
      op->GetDijkstraImageGeodesicPath() :
      op->vtkDijkstraImageContourLineInterpolator::GetDijkstraImageGeodesicPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDijkstraImageContourLineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkDijkstraImageContourLineInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDijkstraImageContourLineInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDijkstraImageContourLineInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkDijkstraImageContourLineInterpolator\nC++: static vtkDijkstraImageContourLineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDijkstraImageContourLineInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDijkstraImageContourLineInterpolator\nC++: vtkDijkstraImageContourLineInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDijkstraImageContourLineInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDijkstraImageContourLineInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InterpolateLine", PyvtkDijkstraImageContourLineInterpolator_InterpolateLine, METH_VARARGS,
   "InterpolateLine(self, ren:vtkRenderer,\n    rep:vtkContourRepresentation, idx1:int, idx2:int) -> int\nC++: int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2) override;\n\nSubclasses that wish to interpolate a line segment must implement\nthis. For instance vtkBezierContourLineInterpolator adds nodes\nbetween idx1 and idx2, that allow the contour to adhere to a\nbezier curve.\n"},
  {"SetCostImage", PyvtkDijkstraImageContourLineInterpolator_SetCostImage, METH_VARARGS,
   "SetCostImage(self, __a:vtkImageData) -> None\nC++: virtual void SetCostImage(vtkImageData *)\n\nSet the image data for the vtkDijkstraImageGeodesicPath. If not\nset, the interpolator uses the image data input to the image\nactor. The image actor is obtained from the expected\nvtkImageActorPointPlacer.\n"},
  {"GetCostImage", PyvtkDijkstraImageContourLineInterpolator_GetCostImage, METH_VARARGS,
   "GetCostImage(self) -> vtkImageData\nC++: virtual vtkImageData *GetCostImage()\n\n"},
  {"GetDijkstraImageGeodesicPath", PyvtkDijkstraImageContourLineInterpolator_GetDijkstraImageGeodesicPath, METH_VARARGS,
   "GetDijkstraImageGeodesicPath(self) -> vtkDijkstraImageGeodesicPath\nC++: virtual vtkDijkstraImageGeodesicPath *GetDijkstraImageGeodesicPath(\n    )\n\naccess to the internal dijkstra path\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDijkstraImageContourLineInterpolator_Doc =
  "vtkDijkstraImageContourLineInterpolator - Contour interpolator for\nplacing points on an image.\n\n"
  "Superclass: vtkContourLineInterpolator\n\n"
  "vtkDijkstraImageContourLineInterpolator interpolates and places\n"
  "contour points on images. The class interpolates nodes by computing a\n"
  "graph laying on the image data. By graph, we mean that the line\n"
  "interpolating the two end points traverses along pixels so as to form\n"
  "a shortest path. A Dijkstra algorithm is used to compute the path.\n\n"
  "The class is meant to be used in conjunction with\n"
  "vtkImageActorPointPlacer. One reason for this coupling is a\n"
  "performance issue: both classes need to perform a cell pick, and\n"
  "coupling avoids multiple cell picks (cell picks are slow).  Another\n"
  "issue is that the interpolator may need to set the image input to its\n"
  "vtkDijkstraImageGeodesicPath ivar.\n\n"
  "@sa\n"
  "vtkContourWidget vtkContourLineInterpolator\n"
  "vtkDijkstraImageGeodesicPath\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDijkstraImageContourLineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkDijkstraImageContourLineInterpolator", // tp_name
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
  PyvtkDijkstraImageContourLineInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDijkstraImageContourLineInterpolator_StaticNew()
{
  return vtkDijkstraImageContourLineInterpolator::New();
}

PyObject *PyvtkDijkstraImageContourLineInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDijkstraImageContourLineInterpolator_Type, PyvtkDijkstraImageContourLineInterpolator_Methods,
    "vtkDijkstraImageContourLineInterpolator",
 &PyvtkDijkstraImageContourLineInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkContourLineInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDijkstraImageContourLineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDijkstraImageContourLineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDijkstraImageContourLineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

