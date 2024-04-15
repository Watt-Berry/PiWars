// python wrapper for vtkCoordinateFrameWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCoordinateFrameWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCoordinateFrameWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkCoordinateFrameWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkCoordinateFrameWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCoordinateFrameWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameWidget *op = static_cast<vtkCoordinateFrameWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoordinateFrameWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCoordinateFrameWidget *tempr = vtkCoordinateFrameWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameWidget *op = static_cast<vtkCoordinateFrameWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinateFrameWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoordinateFrameWidget::NewInstance());

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
PyvtkCoordinateFrameWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCoordinateFrameWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameWidget *op = static_cast<vtkCoordinateFrameWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCoordinateFrameWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameWidget *op = static_cast<vtkCoordinateFrameWidget *>(vp);

  vtkCoordinateFrameRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCoordinateFrameRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkCoordinateFrameWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameWidget *op = static_cast<vtkCoordinateFrameWidget *>(vp);

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
      op->vtkCoordinateFrameWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameWidget_GetCoordinateFrameRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateFrameRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameWidget *op = static_cast<vtkCoordinateFrameWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinateFrameRepresentation *tempr = (ap.IsBound() ?
      op->GetCoordinateFrameRepresentation() :
      op->vtkCoordinateFrameWidget::GetCoordinateFrameRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinateFrameWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinateFrameWidget *op = static_cast<vtkCoordinateFrameWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkCoordinateFrameWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCoordinateFrameWidget_Methods[] = {
  {"IsTypeOf", PyvtkCoordinateFrameWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCoordinateFrameWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCoordinateFrameWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCoordinateFrameWidget\nC++: static vtkCoordinateFrameWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCoordinateFrameWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCoordinateFrameWidget\nC++: vtkCoordinateFrameWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCoordinateFrameWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCoordinateFrameWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkCoordinateFrameWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, rep:vtkCoordinateFrameRepresentation)\n    -> None\nC++: void SetRepresentation(vtkCoordinateFrameRepresentation *rep)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetEnabled", PyvtkCoordinateFrameWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nDisable/Enable the widget if needed. Unobserved the camera if the\nwidget is disabled.\n"},
  {"GetCoordinateFrameRepresentation", PyvtkCoordinateFrameWidget_GetCoordinateFrameRepresentation, METH_VARARGS,
   "GetCoordinateFrameRepresentation(self)\n    -> vtkCoordinateFrameRepresentation\nC++: vtkCoordinateFrameRepresentation *GetCoordinateFrameRepresentation(\n    )\n\nReturn the representation as a vtkCoordinateFrameRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkCoordinateFrameWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCoordinateFrameWidget_Doc =
  "vtkCoordinateFrameWidget - 3D widget for manipulating a display sized\ncoordinate frame widget\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget defines a display sized coordinate frame that can be\n"
  "interactively placed in a scene. The widget is assumed to consist of\n"
  "three parts: 1) an origin, 2) 3 axis normals which are rooted at the\n"
  "origin and 3 axis lockers. (The representation paired with this\n"
  "widget determines the actual geometry of the widget.)\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkCoordinateFrameRepresentation (or a subclass). Various options are\n"
  "available for controlling how the representation appears, and how the\n"
  "widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the mouse is over the one of the axis normals:\n"
  "  LeftButtonPressEvent - select normal\n"
  "  LeftButtonReleaseEvent - release normal\n"
  "  MouseMoveEvent - orient the axis normal vectors (possibly\n"
  "constrained to\n"
  "  one of the axis' planes) If the mouse is over the origin point\n"
  "(handle):\n"
  "  LeftButtonPressEvent - select handle\n"
  "  LeftButtonReleaseEvent - release handle (if selected)\n"
  "  MouseMoveEvent - move the origin point (possibly constrained to one\n"
  "of the axis' planes) If the mouse is over one of the axis lockers:\n"
  "  LeftButtonPressEvent - select axis locker\n"
  "  LeftButtonReleaseEvent - unlock/lock and axis locker (and unlock\n"
  "all the other lockers) If the keypress characters are used\n"
  "  'Down/Left' Move plane down\n"
  "  'Up/Right' Move plane up\n"
  "  'P/p' Pick a new origin from the intersection with a mesh cell\n"
  "rendered by the renderer\n"
  "  'Ctrl' + 'P/p' Snap to a new origin from the closest mesh point\n"
  "rendered by the renderer\n"
  "  'N/n' Pick a new normal from the intersection with a mesh cell\n"
  "rendered by the renderer\n"
  "  'Ctrl' + 'N/n' Snap to a new normal from the closest mesh point\n"
  "rendered by the renderer\n"
  "  'D/d' Pick a new point to define the direction normal which will be\n"
  "the new normal\n"
  "  'Ctrl' + 'D/d' Snap to a new point to define the direction normal\n"
  "which will be the new normal \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkCoordinateFrameWidget's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for widget motion has been\n"
  "invoked\n"
  "  vtkWidgetEvent::PickPoint -- PickOriginAction\n"
  "  vtkWidgetEvent::PickNormal -- PickNormalAction\n"
  "  vtkWidgetEvent::PickDirectionPoint -- PickDirectionPointAction \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkCoordinateFrameWidget invokes the following VTK events on\n"
  "itself (which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@par Event Bindings: This class, and\n"
  "vtkCoordinateFrameRepresentation, are next generation VTK widgets.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkPlaneWidget vtkLineWidget vtkPointWidget\n"
  "vtkSphereWidget vtkImagePlaneWidget vtkImplicitCylinderWidget,\n"
  "vtkImplicitPlaneWidget2 vtkDisplaySizedImplicitPlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCoordinateFrameWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCoordinateFrameWidget", // tp_name
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
  PyvtkCoordinateFrameWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCoordinateFrameWidget_StaticNew()
{
  return vtkCoordinateFrameWidget::New();
}

PyObject *PyvtkCoordinateFrameWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCoordinateFrameWidget_Type, PyvtkCoordinateFrameWidget_Methods,
    "vtkCoordinateFrameWidget",
 &PyvtkCoordinateFrameWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCoordinateFrameWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCoordinateFrameWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCoordinateFrameWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

