// python wrapper for vtkScalarBarWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkScalarBarWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarBarWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkScalarBarWidget_ClassNew(); }

#ifndef DECLARED_PyvtkBorderWidget_ClassNew
extern "C" { PyObject *PyvtkBorderWidget_ClassNew(); }
#define DECLARED_PyvtkBorderWidget_ClassNew
#endif

static PyObject *
PyvtkScalarBarWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarBarWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarBarWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarBarWidget *tempr = vtkScalarBarWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarBarWidget::NewInstance());

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
PyvtkScalarBarWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkScalarBarWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkScalarBarWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  vtkScalarBarRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarBarRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkScalarBarWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetScalarBarRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarRepresentation *tempr = (ap.IsBound() ?
      op->GetScalarBarRepresentation() :
      op->vtkScalarBarWidget::GetScalarBarRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SetScalarBarActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarBarActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  vtkScalarBarActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarBarActor"))
  {
    if (ap.IsBound())
    {
      op->SetScalarBarActor(temp0);
    }
    else
    {
      op->vtkScalarBarWidget::SetScalarBarActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetScalarBarActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarActor *tempr = (ap.IsBound() ?
      op->GetScalarBarActor() :
      op->vtkScalarBarWidget::GetScalarBarActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_SetRepositionable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepositionable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepositionable(temp0);
    }
    else
    {
      op->vtkScalarBarWidget::SetRepositionable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetRepositionable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepositionable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepositionable() :
      op->vtkScalarBarWidget::GetRepositionable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_RepositionableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepositionableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepositionableOn();
    }
    else
    {
      op->vtkScalarBarWidget::RepositionableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_RepositionableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RepositionableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RepositionableOff();
    }
    else
    {
      op->vtkScalarBarWidget::RepositionableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkScalarBarWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarWidget_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarWidget *op = static_cast<vtkScalarBarWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEvents() :
      op->vtkScalarBarWidget::GetProcessEvents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarBarWidget_Methods[] = {
  {"IsTypeOf", PyvtkScalarBarWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScalarBarWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScalarBarWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkScalarBarWidget\nC++: static vtkScalarBarWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScalarBarWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkScalarBarWidget\nC++: vtkScalarBarWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkScalarBarWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkScalarBarWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkScalarBarWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, rep:vtkScalarBarRepresentation) -> None\nC++: virtual void SetRepresentation(\n    vtkScalarBarRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetScalarBarRepresentation", PyvtkScalarBarWidget_GetScalarBarRepresentation, METH_VARARGS,
   "GetScalarBarRepresentation(self) -> vtkScalarBarRepresentation\nC++: vtkScalarBarRepresentation *GetScalarBarRepresentation()\n\nReturn the representation as a vtkScalarBarRepresentation.\n"},
  {"SetScalarBarActor", PyvtkScalarBarWidget_SetScalarBarActor, METH_VARARGS,
   "SetScalarBarActor(self, actor:vtkScalarBarActor) -> None\nC++: virtual void SetScalarBarActor(vtkScalarBarActor *actor)\n\nGet the ScalarBar used by this Widget. One is created\nautomatically.\n"},
  {"GetScalarBarActor", PyvtkScalarBarWidget_GetScalarBarActor, METH_VARARGS,
   "GetScalarBarActor(self) -> vtkScalarBarActor\nC++: virtual vtkScalarBarActor *GetScalarBarActor()\n\n"},
  {"SetRepositionable", PyvtkScalarBarWidget_SetRepositionable, METH_VARARGS,
   "SetRepositionable(self, _arg:int) -> None\nC++: virtual void SetRepositionable(vtkTypeBool _arg)\n\nCan the widget be moved. On by default. If off, the widget cannot\nbe moved around.\n\n* TODO: This functionality should probably be moved to the\n  superclass.\n"},
  {"GetRepositionable", PyvtkScalarBarWidget_GetRepositionable, METH_VARARGS,
   "GetRepositionable(self) -> int\nC++: virtual vtkTypeBool GetRepositionable()\n\n"},
  {"RepositionableOn", PyvtkScalarBarWidget_RepositionableOn, METH_VARARGS,
   "RepositionableOn(self) -> None\nC++: virtual void RepositionableOn()\n\n"},
  {"RepositionableOff", PyvtkScalarBarWidget_RepositionableOff, METH_VARARGS,
   "RepositionableOff(self) -> None\nC++: virtual void RepositionableOff()\n\n"},
  {"CreateDefaultRepresentation", PyvtkScalarBarWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"GetProcessEvents", PyvtkScalarBarWidget_GetProcessEvents, METH_VARARGS,
   "GetProcessEvents(self) -> int\nC++: vtkTypeBool GetProcessEvents() override;\n\nReimplement ProcessEvents to use vtkAbstractWidget instead of\nvtkBorderWidget, for interaction with the scalar bar, even when\nthe scalar bar's position is not AnyLocation.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkScalarBarWidget_Doc =
  "vtkScalarBarWidget - 2D widget for manipulating a scalar bar\n\n"
  "Superclass: vtkBorderWidget\n\n"
  "This class provides support for interactively manipulating the\n"
  "position, size, and orientation of a scalar bar. It listens to Left\n"
  "mouse events and mouse movement. It also listens to Right mouse\n"
  "events and notifies any observers of Right mouse events on this\n"
  "object when they occur. It will change the cursor shape based on its\n"
  "location. If the cursor is over an edge of the scalar bar it will\n"
  "change the cursor shape to a resize edge shape. If the position of a\n"
  "scalar bar is moved to be close to the center of one of the four\n"
  "edges of the viewport, then the scalar bar will change its\n"
  "orientation to align with that edge. This orientation is sticky in\n"
  "that it will stay that orientation until the position is moved close\n"
  "to another edge.\n\n"
  "@sa\n"
  "vtkInteractorObserver\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkScalarBarWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkScalarBarWidget", // tp_name
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
  PyvtkScalarBarWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScalarBarWidget_StaticNew()
{
  return vtkScalarBarWidget::New();
}

PyObject *PyvtkScalarBarWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkScalarBarWidget_Type, PyvtkScalarBarWidget_Methods,
    "vtkScalarBarWidget",
 &PyvtkScalarBarWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBorderWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkScalarBarWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarBarWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarBarWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

