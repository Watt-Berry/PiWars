// python wrapper for vtkIcicleView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIcicleView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIcicleView(PyObject *dict); }
extern "C" { PyObject *PyvtkIcicleView_ClassNew(); }

#ifndef DECLARED_PyvtkTreeAreaView_ClassNew
extern "C" { PyObject *PyvtkTreeAreaView_ClassNew(); }
#define DECLARED_PyvtkTreeAreaView_ClassNew
#endif

static PyObject *
PyvtkIcicleView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIcicleView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIcicleView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIcicleView *tempr = vtkIcicleView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIcicleView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIcicleView::NewInstance());

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
PyvtkIcicleView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIcicleView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIcicleView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_SetTopToBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopToBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopToBottom(temp0);
    }
    else
    {
      op->vtkIcicleView::SetTopToBottom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_GetTopToBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopToBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTopToBottom() :
      op->vtkIcicleView::GetTopToBottom());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_TopToBottomOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopToBottomOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopToBottomOn();
    }
    else
    {
      op->vtkIcicleView::TopToBottomOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_TopToBottomOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopToBottomOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopToBottomOff();
    }
    else
    {
      op->vtkIcicleView::TopToBottomOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_SetRootWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootWidth(temp0);
    }
    else
    {
      op->vtkIcicleView::SetRootWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_GetRootWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRootWidth() :
      op->vtkIcicleView::GetRootWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_SetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

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
      op->vtkIcicleView::SetLayerThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_GetLayerThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLayerThickness() :
      op->vtkIcicleView::GetLayerThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_SetUseGradientColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGradientColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseGradientColoring(temp0);
    }
    else
    {
      op->vtkIcicleView::SetUseGradientColoring(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_GetUseGradientColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGradientColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseGradientColoring() :
      op->vtkIcicleView::GetUseGradientColoring());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_UseGradientColoringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGradientColoringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGradientColoringOn();
    }
    else
    {
      op->vtkIcicleView::UseGradientColoringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIcicleView_UseGradientColoringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGradientColoringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIcicleView *op = static_cast<vtkIcicleView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGradientColoringOff();
    }
    else
    {
      op->vtkIcicleView::UseGradientColoringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkIcicleView_Methods[] = {
  {"IsTypeOf", PyvtkIcicleView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIcicleView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIcicleView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIcicleView\nC++: static vtkIcicleView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIcicleView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIcicleView\nC++: vtkIcicleView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIcicleView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIcicleView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTopToBottom", PyvtkIcicleView_SetTopToBottom, METH_VARARGS,
   "SetTopToBottom(self, reversed:bool) -> None\nC++: virtual void SetTopToBottom(bool reversed)\n\nSets whether the stacks go from top to bottom or bottom to top.\n"},
  {"GetTopToBottom", PyvtkIcicleView_GetTopToBottom, METH_VARARGS,
   "GetTopToBottom(self) -> bool\nC++: virtual bool GetTopToBottom()\n\n"},
  {"TopToBottomOn", PyvtkIcicleView_TopToBottomOn, METH_VARARGS,
   "TopToBottomOn(self) -> None\nC++: virtual void TopToBottomOn()\n\n"},
  {"TopToBottomOff", PyvtkIcicleView_TopToBottomOff, METH_VARARGS,
   "TopToBottomOff(self) -> None\nC++: virtual void TopToBottomOff()\n\n"},
  {"SetRootWidth", PyvtkIcicleView_SetRootWidth, METH_VARARGS,
   "SetRootWidth(self, width:float) -> None\nC++: virtual void SetRootWidth(double width)\n\nSet the width of the root node\n"},
  {"GetRootWidth", PyvtkIcicleView_GetRootWidth, METH_VARARGS,
   "GetRootWidth(self) -> float\nC++: virtual double GetRootWidth()\n\n"},
  {"SetLayerThickness", PyvtkIcicleView_SetLayerThickness, METH_VARARGS,
   "SetLayerThickness(self, thickness:float) -> None\nC++: virtual void SetLayerThickness(double thickness)\n\nSet the thickness of each layer\n"},
  {"GetLayerThickness", PyvtkIcicleView_GetLayerThickness, METH_VARARGS,
   "GetLayerThickness(self) -> float\nC++: virtual double GetLayerThickness()\n\n"},
  {"SetUseGradientColoring", PyvtkIcicleView_SetUseGradientColoring, METH_VARARGS,
   "SetUseGradientColoring(self, value:bool) -> None\nC++: virtual void SetUseGradientColoring(bool value)\n\nTurn on/off gradient coloring.\n"},
  {"GetUseGradientColoring", PyvtkIcicleView_GetUseGradientColoring, METH_VARARGS,
   "GetUseGradientColoring(self) -> bool\nC++: virtual bool GetUseGradientColoring()\n\n"},
  {"UseGradientColoringOn", PyvtkIcicleView_UseGradientColoringOn, METH_VARARGS,
   "UseGradientColoringOn(self) -> None\nC++: virtual void UseGradientColoringOn()\n\n"},
  {"UseGradientColoringOff", PyvtkIcicleView_UseGradientColoringOff, METH_VARARGS,
   "UseGradientColoringOff(self) -> None\nC++: virtual void UseGradientColoringOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIcicleView_Doc =
  "vtkIcicleView - Displays a tree in a stacked \"icicle\" view\n\n"
  "Superclass: vtkTreeAreaView\n\n"
  "vtkIcicleView shows a vtkTree in horizontal layers where each vertex\n"
  "in the tree is represented by a bar. Child sectors are below (or\n"
  "above) parent sectors, and may be colored and sized by various\n"
  "parameters.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIcicleView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkIcicleView", // tp_name
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
  PyvtkIcicleView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIcicleView_StaticNew()
{
  return vtkIcicleView::New();
}

PyObject *PyvtkIcicleView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIcicleView_Type, PyvtkIcicleView_Methods,
    "vtkIcicleView",
 &PyvtkIcicleView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkTreeAreaView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIcicleView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIcicleView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIcicleView", o) != 0)
  {
    Py_DECREF(o);
  }

}

