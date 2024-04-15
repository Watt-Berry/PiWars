// python wrapper for vtkDisplaySizedImplicitPlaneWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDisplaySizedImplicitPlaneWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDisplaySizedImplicitPlaneWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkDisplaySizedImplicitPlaneWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDisplaySizedImplicitPlaneWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneWidget *op = static_cast<vtkDisplaySizedImplicitPlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDisplaySizedImplicitPlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDisplaySizedImplicitPlaneWidget *tempr = vtkDisplaySizedImplicitPlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneWidget *op = static_cast<vtkDisplaySizedImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDisplaySizedImplicitPlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDisplaySizedImplicitPlaneWidget::NewInstance());

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
PyvtkDisplaySizedImplicitPlaneWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDisplaySizedImplicitPlaneWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneWidget *op = static_cast<vtkDisplaySizedImplicitPlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDisplaySizedImplicitPlaneWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneWidget *op = static_cast<vtkDisplaySizedImplicitPlaneWidget *>(vp);

  vtkDisplaySizedImplicitPlaneRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDisplaySizedImplicitPlaneRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneWidget *op = static_cast<vtkDisplaySizedImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_SetLockNormalToCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockNormalToCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneWidget *op = static_cast<vtkDisplaySizedImplicitPlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockNormalToCamera(temp0);
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneWidget::SetLockNormalToCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_GetDisplaySizedImplicitPlaneRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplaySizedImplicitPlaneRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneWidget *op = static_cast<vtkDisplaySizedImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDisplaySizedImplicitPlaneRepresentation *tempr = (ap.IsBound() ?
      op->GetDisplaySizedImplicitPlaneRepresentation() :
      op->vtkDisplaySizedImplicitPlaneWidget::GetDisplaySizedImplicitPlaneRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDisplaySizedImplicitPlaneWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDisplaySizedImplicitPlaneWidget *op = static_cast<vtkDisplaySizedImplicitPlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkDisplaySizedImplicitPlaneWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDisplaySizedImplicitPlaneWidget_Methods[] = {
  {"IsTypeOf", PyvtkDisplaySizedImplicitPlaneWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDisplaySizedImplicitPlaneWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDisplaySizedImplicitPlaneWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkDisplaySizedImplicitPlaneWidget\nC++: static vtkDisplaySizedImplicitPlaneWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDisplaySizedImplicitPlaneWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDisplaySizedImplicitPlaneWidget\nC++: vtkDisplaySizedImplicitPlaneWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDisplaySizedImplicitPlaneWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDisplaySizedImplicitPlaneWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkDisplaySizedImplicitPlaneWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self,\n    rep:vtkDisplaySizedImplicitPlaneRepresentation) -> None\nC++: void SetRepresentation(\n    vtkDisplaySizedImplicitPlaneRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetEnabled", PyvtkDisplaySizedImplicitPlaneWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nDisable/Enable the widget if needed. Unobserved the camera if the\nwidget is disabled.\n"},
  {"SetLockNormalToCamera", PyvtkDisplaySizedImplicitPlaneWidget_SetLockNormalToCamera, METH_VARARGS,
   "SetLockNormalToCamera(self, lock:int) -> None\nC++: void SetLockNormalToCamera(int lock)\n\nObserve/Unobserve the camera if the widget is locked/unlocked to\nupdate the vtkImplicitePlaneRepresentation's normal.\n"},
  {"GetDisplaySizedImplicitPlaneRepresentation", PyvtkDisplaySizedImplicitPlaneWidget_GetDisplaySizedImplicitPlaneRepresentation, METH_VARARGS,
   "GetDisplaySizedImplicitPlaneRepresentation(self)\n    -> vtkDisplaySizedImplicitPlaneRepresentation\nC++: vtkDisplaySizedImplicitPlaneRepresentation *GetDisplaySizedImplicitPlaneRepresentation(\n    )\n\nReturn the representation as a\nvtkDisplaySizedImplicitPlaneRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkDisplaySizedImplicitPlaneWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDisplaySizedImplicitPlaneWidget_Doc =
  "vtkDisplaySizedImplicitPlaneWidget - 3D widget for manipulating a\ndisplay sized plane\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget defines a display sized plane represented as a disk,\n"
  "that can be interactively placed in a scene. The widget is assumed to\n"
  "consist of three parts: 1) a disk plane with a 2) plane normal, which\n"
  "is rooted at a 3) point on the plane. (The representation paired with\n"
  "this widget determines the actual geometry of the widget.)\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkDisplaySizedImplicitPlaneRepresentation (or a subclass). Various\n"
  "options are available for controlling how the representation appears,\n"
  "and how the widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the mouse is over the plane normal:\n"
  "  LeftButtonPressEvent - select normal\n"
  "  LeftButtonReleaseEvent - release normal\n"
  "  MouseMoveEvent - orient the normal vector If the mouse is over the\n"
  "origin point (handle):\n"
  "  LeftButtonPressEvent - select handle\n"
  "  LeftButtonReleaseEvent - release handle (if selected)\n"
  "  MouseMoveEvent - move the origin point (constrained to the plane)\n"
  "If the mouse is over the plane:\n"
  "  LeftButtonPressEvent - select plane\n"
  "  LeftButtonReleaseEvent - release plane (if selected)\n"
  "  MouseMoveEvent - move the plane If the mouse is over the perimeter\n"
  "of the disk plane:\n"
  "  LeftButtonPressEvent - select perimeter\n"
  "  LeftButtonReleaseEvent - release perimeter (if selected)\n"
  "  MouseMoveEvent - resize the perimeter -> radius of the disk plane\n"
  "If the keypress characters are used\n"
  "  'Down/Left' Move plane down\n"
  "  'Up/Right' Move plane up\n"
  "  'P/p' Pick a new origin from the intersection with a mesh cell\n"
  "rendered by the renderer\n"
  "  'Ctrl' + 'P/p' Snap to a new origin from the closest mesh point\n"
  "rendered by the renderer\n"
  "  'N/n' Pick a new normal from the intersection with a mesh cell\n"
  "rendered by the renderer\n"
  "  'Ctrl' + 'N/n' Snap to a new normal from the closest mesh point\n"
  "rendered by the renderer In all the cases, independent of what is\n"
  "picked, the widget responds to the following VTK events:\n"
  "  MiddleButtonPressEvent - move the plane\n"
  "  MiddleButtonReleaseEvent - release the plane\n"
  "  RightButtonPressEvent - scale the widget's representation\n"
  "  RightButtonReleaseEvent - stop scaling the widget\n"
  "  MouseMoveEvent - scale (if right button) or move (if middle button)\n"
  "the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkDisplaySizedImplicitPlaneWidget's\n"
  "widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for widget motion has been\n"
  "invoked\n"
  "  vtkWidgetEvent::Up and vtkWidgetEvent::Down -- MovePlaneAction\n"
  "  vtkWidgetEvent::PickPoint -- PickOriginAction\n"
  "  vtkWidgetEvent::PickNormal -- PickNormalAction \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkDisplaySizedImplicitPlaneWidget invokes the following VTK\n"
  "events on itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@par Event Bindings: This class, and\n"
  "vtkDisplaySizedImplicitPlaneRepresentation, are next generation VTK\n"
  "widgets.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\n"
  "vtkSphereWidget vtkImagePlaneWidget vtkImplicitCylinderWidget,\n"
  "vtkImplicitPlaneWidget2\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDisplaySizedImplicitPlaneWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkDisplaySizedImplicitPlaneWidget", // tp_name
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
  PyvtkDisplaySizedImplicitPlaneWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDisplaySizedImplicitPlaneWidget_StaticNew()
{
  return vtkDisplaySizedImplicitPlaneWidget::New();
}

PyObject *PyvtkDisplaySizedImplicitPlaneWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDisplaySizedImplicitPlaneWidget_Type, PyvtkDisplaySizedImplicitPlaneWidget_Methods,
    "vtkDisplaySizedImplicitPlaneWidget",
 &PyvtkDisplaySizedImplicitPlaneWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDisplaySizedImplicitPlaneWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDisplaySizedImplicitPlaneWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDisplaySizedImplicitPlaneWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

