// python wrapper for vtkTerrainContourLineInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTerrainContourLineInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTerrainContourLineInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkTerrainContourLineInterpolator_ClassNew(); }

#ifndef DECLARED_PyvtkContourLineInterpolator_ClassNew
extern "C" { PyObject *PyvtkContourLineInterpolator_ClassNew(); }
#define DECLARED_PyvtkContourLineInterpolator_ClassNew
#endif

static PyObject *
PyvtkTerrainContourLineInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTerrainContourLineInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTerrainContourLineInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTerrainContourLineInterpolator *tempr = vtkTerrainContourLineInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTerrainContourLineInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTerrainContourLineInterpolator::NewInstance());

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
PyvtkTerrainContourLineInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTerrainContourLineInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTerrainContourLineInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_InterpolateLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

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
      op->vtkTerrainContourLineInterpolator::InterpolateLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_UpdateNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

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
      op->vtkTerrainContourLineInterpolator::UpdateNode(temp0, temp1, temp2, temp3));

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
PyvtkTerrainContourLineInterpolator_SetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetImageData(temp0);
    }
    else
    {
      op->vtkTerrainContourLineInterpolator::SetImageData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_GetImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetImageData() :
      op->vtkTerrainContourLineInterpolator::GetImageData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTerrainContourLineInterpolator_GetProjector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTerrainContourLineInterpolator *op = static_cast<vtkTerrainContourLineInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectedTerrainPath *tempr = (ap.IsBound() ?
      op->GetProjector() :
      op->vtkTerrainContourLineInterpolator::GetProjector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTerrainContourLineInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkTerrainContourLineInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTerrainContourLineInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTerrainContourLineInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTerrainContourLineInterpolator\nC++: static vtkTerrainContourLineInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTerrainContourLineInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTerrainContourLineInterpolator\nC++: vtkTerrainContourLineInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTerrainContourLineInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTerrainContourLineInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InterpolateLine", PyvtkTerrainContourLineInterpolator_InterpolateLine, METH_VARARGS,
   "InterpolateLine(self, ren:vtkRenderer,\n    rep:vtkContourRepresentation, idx1:int, idx2:int) -> int\nC++: int InterpolateLine(vtkRenderer *ren,\n    vtkContourRepresentation *rep, int idx1, int idx2) override;\n\nInterpolate to create lines between contour nodes idx1 and idx2.\nDepending on the projection mode, the interpolated line may\neither hug the terrain, just connect the two points with a\nstraight line or a non-occluded interpolation. Used internally by\nvtkContourRepresentation.\n"},
  {"UpdateNode", PyvtkTerrainContourLineInterpolator_UpdateNode, METH_VARARGS,
   "UpdateNode(self, __a:vtkRenderer, __b:vtkContourRepresentation,\n    node:[float, ...], idx:int) -> int\nC++: int UpdateNode(vtkRenderer *, vtkContourRepresentation *,\n    double *node, int idx) override;\n\nThe interpolator is given a chance to update the node. Used\ninternally by vtkContourRepresentation Returns 0 if the node\n(world position) is unchanged.\n"},
  {"SetImageData", PyvtkTerrainContourLineInterpolator_SetImageData, METH_VARARGS,
   "SetImageData(self, __a:vtkImageData) -> None\nC++: virtual void SetImageData(vtkImageData *)\n\nSet the height field data. The height field data is a 2D image.\nThe scalars in the image represent the height field. This must be\nset.\n"},
  {"GetImageData", PyvtkTerrainContourLineInterpolator_GetImageData, METH_VARARGS,
   "GetImageData(self) -> vtkImageData\nC++: virtual vtkImageData *GetImageData()\n\n"},
  {"GetProjector", PyvtkTerrainContourLineInterpolator_GetProjector, METH_VARARGS,
   "GetProjector(self) -> vtkProjectedTerrainPath\nC++: virtual vtkProjectedTerrainPath *GetProjector()\n\nGet the vtkProjectedTerrainPath operator used to project the\nterrain onto the data. This operator has several modes, See the\ndocumentation of vtkProjectedTerrainPath. The default mode is to\nhug the terrain data at 0 height offset.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTerrainContourLineInterpolator_Doc =
  "vtkTerrainContourLineInterpolator - Contour interpolator for DEM data.\n\n"
  "Superclass: vtkContourLineInterpolator\n\n"
  "vtkTerrainContourLineInterpolator interpolates nodes on height field\n"
  "data. The class is meant to be used in conjunciton with a\n"
  "vtkContourWidget, enabling you to draw paths on terrain data. The\n"
  "class internally uses a vtkProjectedTerrainPath. Users can set kind\n"
  "of interpolation desired between two node points by setting the modes\n"
  "of the this filter. For instance:\n\n"
  "contourRepresentation->SetLineInterpolator(interpolator);\n"
  "interpolator->SetImageData( demDataFile );\n"
  "interpolator->GetProjector()->SetProjectionModeToHug();\n"
  "interpolator->SetHeightOffset(25.0);\n\n"
  "You are required to set the ImageData to this class as the\n"
  "height-field image.\n\n"
  "@sa\n"
  "vtkTerrainDataPointPlacer vtkProjectedTerrainPath\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTerrainContourLineInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkTerrainContourLineInterpolator", // tp_name
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
  PyvtkTerrainContourLineInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTerrainContourLineInterpolator_StaticNew()
{
  return vtkTerrainContourLineInterpolator::New();
}

PyObject *PyvtkTerrainContourLineInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTerrainContourLineInterpolator_Type, PyvtkTerrainContourLineInterpolator_Methods,
    "vtkTerrainContourLineInterpolator",
 &PyvtkTerrainContourLineInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkContourLineInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTerrainContourLineInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTerrainContourLineInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTerrainContourLineInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

