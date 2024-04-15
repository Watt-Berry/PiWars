// python wrapper for vtkTreeRingView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeRingView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeRingView(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeRingView_ClassNew(); }

#ifndef DECLARED_PyvtkTreeAreaView_ClassNew
extern "C" { PyObject *PyvtkTreeAreaView_ClassNew(); }
#define DECLARED_PyvtkTreeAreaView_ClassNew
#endif

static PyObject *
PyvtkTreeRingView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeRingView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeRingView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeRingView *tempr = vtkTreeRingView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeRingView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeRingView::NewInstance());

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
PyvtkTreeRingView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeRingView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeRingView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetRootAngles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootAngles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRootAngles(temp0, temp1);
    }
    else
    {
      op->vtkTreeRingView::SetRootAngles(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetRootAtCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootAtCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootAtCenter(temp0);
    }
    else
    {
      op->vtkTreeRingView::SetRootAtCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetRootAtCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootAtCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRootAtCenter() :
      op->vtkTreeRingView::GetRootAtCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_RootAtCenterOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RootAtCenterOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RootAtCenterOn();
    }
    else
    {
      op->vtkTreeRingView::RootAtCenterOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_RootAtCenterOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RootAtCenterOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RootAtCenterOff();
    }
    else
    {
      op->vtkTreeRingView::RootAtCenterOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayerThickness(temp0);
    }
    else
    {
      op->vtkTreeRingView::SetLayerThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLayerThickness() :
      op->vtkTreeRingView::GetLayerThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetInteriorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteriorRadius(temp0);
    }
    else
    {
      op->vtkTreeRingView::SetInteriorRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetInteriorRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteriorRadius() :
      op->vtkTreeRingView::GetInteriorRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_SetInteriorLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteriorLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteriorLogSpacingValue(temp0);
    }
    else
    {
      op->vtkTreeRingView::SetInteriorLogSpacingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeRingView_GetInteriorLogSpacingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteriorLogSpacingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeRingView *op = static_cast<vtkTreeRingView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInteriorLogSpacingValue() :
      op->vtkTreeRingView::GetInteriorLogSpacingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeRingView_Methods[] = {
  {"IsTypeOf", PyvtkTreeRingView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeRingView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeRingView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeRingView\nC++: static vtkTreeRingView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeRingView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeRingView\nC++: vtkTreeRingView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeRingView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeRingView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRootAngles", PyvtkTreeRingView_SetRootAngles, METH_VARARGS,
   "SetRootAngles(self, start:float, end:float) -> None\nC++: void SetRootAngles(double start, double end)\n\nSet the root angles for laying out the hierarchy.\n"},
  {"SetRootAtCenter", PyvtkTreeRingView_SetRootAtCenter, METH_VARARGS,
   "SetRootAtCenter(self, center:bool) -> None\nC++: virtual void SetRootAtCenter(bool center)\n\nSets whether the root is at the center or around the outside.\n"},
  {"GetRootAtCenter", PyvtkTreeRingView_GetRootAtCenter, METH_VARARGS,
   "GetRootAtCenter(self) -> bool\nC++: virtual bool GetRootAtCenter()\n\n"},
  {"RootAtCenterOn", PyvtkTreeRingView_RootAtCenterOn, METH_VARARGS,
   "RootAtCenterOn(self) -> None\nC++: virtual void RootAtCenterOn()\n\n"},
  {"RootAtCenterOff", PyvtkTreeRingView_RootAtCenterOff, METH_VARARGS,
   "RootAtCenterOff(self) -> None\nC++: virtual void RootAtCenterOff()\n\n"},
  {"SetLayerThickness", PyvtkTreeRingView_SetLayerThickness, METH_VARARGS,
   "SetLayerThickness(self, thickness:float) -> None\nC++: virtual void SetLayerThickness(double thickness)\n\nSet the thickness of each layer.\n"},
  {"GetLayerThickness", PyvtkTreeRingView_GetLayerThickness, METH_VARARGS,
   "GetLayerThickness(self) -> float\nC++: virtual double GetLayerThickness()\n\n"},
  {"SetInteriorRadius", PyvtkTreeRingView_SetInteriorRadius, METH_VARARGS,
   "SetInteriorRadius(self, rad:float) -> None\nC++: virtual void SetInteriorRadius(double rad)\n\nSet the interior radius of the tree (i.e. the size of the \"hole\"\nin the center).\n"},
  {"GetInteriorRadius", PyvtkTreeRingView_GetInteriorRadius, METH_VARARGS,
   "GetInteriorRadius(self) -> float\nC++: virtual double GetInteriorRadius()\n\n"},
  {"SetInteriorLogSpacingValue", PyvtkTreeRingView_SetInteriorLogSpacingValue, METH_VARARGS,
   "SetInteriorLogSpacingValue(self, value:float) -> None\nC++: virtual void SetInteriorLogSpacingValue(double value)\n\nSet the log spacing factor for the invisible interior tree used\nfor routing edges of the overlaid graph.\n"},
  {"GetInteriorLogSpacingValue", PyvtkTreeRingView_GetInteriorLogSpacingValue, METH_VARARGS,
   "GetInteriorLogSpacingValue(self) -> float\nC++: virtual double GetInteriorLogSpacingValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeRingView_Doc =
  "vtkTreeRingView - Displays a tree in concentric rings.\n\n"
  "Superclass: vtkTreeAreaView\n\n"
  "Accepts a graph and a hierarchy - currently a tree - and provides a\n"
  "hierarchy-aware display.  Currently, this means displaying the\n"
  "hierarchy using a tree ring layout, then rendering the graph vertices\n"
  "as leaves of the tree with curved graph edges between leaves.\n\n"
  ".SEE ALSO vtkGraphLayoutView\n\n"
  "@par Thanks: Thanks to Jason Shepherd for implementing this class\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeRingView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkTreeRingView", // tp_name
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
  PyvtkTreeRingView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeRingView_StaticNew()
{
  return vtkTreeRingView::New();
}

PyObject *PyvtkTreeRingView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeRingView_Type, PyvtkTreeRingView_Methods,
    "vtkTreeRingView",
 &PyvtkTreeRingView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkTreeAreaView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeRingView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeRingView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeRingView", o) != 0)
  {
    Py_DECREF(o);
  }

}

