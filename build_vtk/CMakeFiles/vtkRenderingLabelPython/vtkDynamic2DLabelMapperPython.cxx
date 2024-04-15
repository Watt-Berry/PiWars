// python wrapper for vtkDynamic2DLabelMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDynamic2DLabelMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDynamic2DLabelMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkDynamic2DLabelMapper_ClassNew(); }

#ifndef DECLARED_PyvtkLabeledDataMapper_ClassNew
extern "C" { PyObject *PyvtkLabeledDataMapper_ClassNew(); }
#define DECLARED_PyvtkLabeledDataMapper_ClassNew
#endif

static PyObject *
PyvtkDynamic2DLabelMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDynamic2DLabelMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDynamic2DLabelMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDynamic2DLabelMapper *tempr = vtkDynamic2DLabelMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDynamic2DLabelMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDynamic2DLabelMapper::NewInstance());

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
PyvtkDynamic2DLabelMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDynamic2DLabelMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDynamic2DLabelMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPriorityArrayName(temp0);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::SetPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetReversePriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReversePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReversePriority(temp0);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::SetReversePriority(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetReversePriority(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReversePriority");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReversePriority() :
      op->vtkDynamic2DLabelMapper::GetReversePriority());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_ReversePriorityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReversePriorityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReversePriorityOn();
    }
    else
    {
      op->vtkDynamic2DLabelMapper::ReversePriorityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_ReversePriorityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReversePriorityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReversePriorityOff();
    }
    else
    {
      op->vtkDynamic2DLabelMapper::ReversePriorityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetLabelHeightPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelHeightPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelHeightPadding(temp0);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::SetLabelHeightPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetLabelHeightPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHeightPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLabelHeightPadding() :
      op->vtkDynamic2DLabelMapper::GetLabelHeightPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_SetLabelWidthPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelWidthPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelWidthPadding(temp0);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::SetLabelWidthPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_GetLabelWidthPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelWidthPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLabelWidthPadding() :
      op->vtkDynamic2DLabelMapper::GetLabelWidthPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOpaqueGeometry(temp0, temp1);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::RenderOpaqueGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDynamic2DLabelMapper_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDynamic2DLabelMapper *op = static_cast<vtkDynamic2DLabelMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderOverlay(temp0, temp1);
    }
    else
    {
      op->vtkDynamic2DLabelMapper::RenderOverlay(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDynamic2DLabelMapper_Methods[] = {
  {"IsTypeOf", PyvtkDynamic2DLabelMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDynamic2DLabelMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDynamic2DLabelMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDynamic2DLabelMapper\nC++: static vtkDynamic2DLabelMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDynamic2DLabelMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDynamic2DLabelMapper\nC++: vtkDynamic2DLabelMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDynamic2DLabelMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDynamic2DLabelMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPriorityArrayName", PyvtkDynamic2DLabelMapper_SetPriorityArrayName, METH_VARARGS,
   "SetPriorityArrayName(self, name:str) -> None\nC++: void SetPriorityArrayName(const char *name)\n\nSet the points array name to use to give priority to labels.\nDefaults to \"priority\".\n"},
  {"SetReversePriority", PyvtkDynamic2DLabelMapper_SetReversePriority, METH_VARARGS,
   "SetReversePriority(self, _arg:bool) -> None\nC++: virtual void SetReversePriority(bool _arg)\n\nWhether to reverse the priority order (i.e. low values have high\npriority). Default is off.\n"},
  {"GetReversePriority", PyvtkDynamic2DLabelMapper_GetReversePriority, METH_VARARGS,
   "GetReversePriority(self) -> bool\nC++: virtual bool GetReversePriority()\n\n"},
  {"ReversePriorityOn", PyvtkDynamic2DLabelMapper_ReversePriorityOn, METH_VARARGS,
   "ReversePriorityOn(self) -> None\nC++: virtual void ReversePriorityOn()\n\n"},
  {"ReversePriorityOff", PyvtkDynamic2DLabelMapper_ReversePriorityOff, METH_VARARGS,
   "ReversePriorityOff(self) -> None\nC++: virtual void ReversePriorityOff()\n\n"},
  {"SetLabelHeightPadding", PyvtkDynamic2DLabelMapper_SetLabelHeightPadding, METH_VARARGS,
   "SetLabelHeightPadding(self, _arg:float) -> None\nC++: virtual void SetLabelHeightPadding(float _arg)\n\nSet the label height padding as a percentage. The percentage is a\npercentage of your label height. Default is 50%.\n"},
  {"GetLabelHeightPadding", PyvtkDynamic2DLabelMapper_GetLabelHeightPadding, METH_VARARGS,
   "GetLabelHeightPadding(self) -> float\nC++: virtual float GetLabelHeightPadding()\n\n"},
  {"SetLabelWidthPadding", PyvtkDynamic2DLabelMapper_SetLabelWidthPadding, METH_VARARGS,
   "SetLabelWidthPadding(self, _arg:float) -> None\nC++: virtual void SetLabelWidthPadding(float _arg)\n\nSet the label width padding as a percentage. The percentage is a\npercentage of your label ^height^ (yes, not a typo). Default is\n50%.\n"},
  {"GetLabelWidthPadding", PyvtkDynamic2DLabelMapper_GetLabelWidthPadding, METH_VARARGS,
   "GetLabelWidthPadding(self) -> float\nC++: virtual float GetLabelWidthPadding()\n\n"},
  {"RenderOpaqueGeometry", PyvtkDynamic2DLabelMapper_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport, actor:vtkActor2D)\n     -> None\nC++: void RenderOpaqueGeometry(vtkViewport *viewport,\n    vtkActor2D *actor) override;\n\nDraw non-overlapping labels to the screen.\n"},
  {"RenderOverlay", PyvtkDynamic2DLabelMapper_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport, actor:vtkActor2D)\n    -> None\nC++: void RenderOverlay(vtkViewport *viewport, vtkActor2D *actor)\n    override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDynamic2DLabelMapper_Doc =
  "vtkDynamic2DLabelMapper - draw text labels at 2D dataset points\n\n"
  "Superclass: vtkLabeledDataMapper\n\n"
  "vtkDynamic2DLabelMapper is a mapper that renders text at dataset\n"
  "points such that the labels do not overlap. Various items can be\n"
  "labeled including point ids, scalars, vectors, normals, texture\n"
  "coordinates, tensors, and field data components. This mapper assumes\n"
  "that the points are located on the x-y plane and that the camera\n"
  "remains perpendicular to that plane with a y-up axis (this can be\n"
  "constrained using vtkImageInteractor). On the first render, the\n"
  "mapper computes the visiblility of all labels at all scales, and\n"
  "queries this information on successive renders. This causes the first\n"
  "render to be much slower. The visibility algorithm is a greedy\n"
  "approach based on the point id, so the label for a point will be\n"
  "drawn unless the label for a point with lower id overlaps it.\n\n"
  "@warning\n"
  "Use this filter in combination with vtkSelectVisiblePoints if you\n"
  "want to label only points that are visible. If you want to label\n"
  "cells rather than points, use the filter vtkCellCenters to generate\n"
  "points at the center of the cells. Also, you can use the class\n"
  "vtkIdFilter to generate ids as scalars or field data, which can then\n"
  "be labeled.\n\n"
  "@sa\n"
  "vtkLabeledDataMapper\n\n"
  "@par Thanks: This algorithm was developed in the paper Ken Been and\n"
  "Chee Yap. Dynamic Map Labeling. IEEE Transactions on Visualization\n"
  "and Computer Graphics, Vol. 12, No. 5, 2006. pp. 773-780.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDynamic2DLabelMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkDynamic2DLabelMapper", // tp_name
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
  PyvtkDynamic2DLabelMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDynamic2DLabelMapper_StaticNew()
{
  return vtkDynamic2DLabelMapper::New();
}

PyObject *PyvtkDynamic2DLabelMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDynamic2DLabelMapper_Type, PyvtkDynamic2DLabelMapper_Methods,
    "vtkDynamic2DLabelMapper",
 &PyvtkDynamic2DLabelMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLabeledDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDynamic2DLabelMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDynamic2DLabelMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDynamic2DLabelMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

