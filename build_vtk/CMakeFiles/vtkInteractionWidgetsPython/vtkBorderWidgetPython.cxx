// python wrapper for vtkBorderWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBorderWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBorderWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkBorderWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkBorderWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBorderWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBorderWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBorderWidget *tempr = vtkBorderWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBorderWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBorderWidget::NewInstance());

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
PyvtkBorderWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBorderWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBorderWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectable(temp0);
    }
    else
    {
      op->vtkBorderWidget::SetSelectable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetSelectable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectable() :
      op->vtkBorderWidget::GetSelectable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SelectableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOn();
    }
    else
    {
      op->vtkBorderWidget::SelectableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SelectableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectableOff();
    }
    else
    {
      op->vtkBorderWidget::SelectableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SetResizable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResizable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResizable(temp0);
    }
    else
    {
      op->vtkBorderWidget::SetResizable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetResizable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResizable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResizable() :
      op->vtkBorderWidget::GetResizable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_ResizableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResizableOn();
    }
    else
    {
      op->vtkBorderWidget::ResizableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_ResizableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResizableOff();
    }
    else
    {
      op->vtkBorderWidget::ResizableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  vtkBorderRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBorderRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkBorderWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetBorderRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBorderRepresentation *tempr = (ap.IsBound() ?
      op->GetBorderRepresentation() :
      op->vtkBorderWidget::GetBorderRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkBorderWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBorderWidget_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBorderWidget *op = static_cast<vtkBorderWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEvents() :
      op->vtkBorderWidget::GetProcessEvents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBorderWidget_Methods[] = {
  {"IsTypeOf", PyvtkBorderWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBorderWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBorderWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBorderWidget\nC++: static vtkBorderWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBorderWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBorderWidget\nC++: vtkBorderWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBorderWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBorderWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSelectable", PyvtkBorderWidget_SetSelectable, METH_VARARGS,
   "SetSelectable(self, _arg:int) -> None\nC++: virtual void SetSelectable(vtkTypeBool _arg)\n\nIndicate whether the interior region of the widget can be\nselected or not. If not, then events (such as left mouse down)\nallow the user to \"move\" the widget, and no selection is\npossible. Otherwise the SelectRegion() method is invoked.\n"},
  {"GetSelectable", PyvtkBorderWidget_GetSelectable, METH_VARARGS,
   "GetSelectable(self) -> int\nC++: virtual vtkTypeBool GetSelectable()\n\n"},
  {"SelectableOn", PyvtkBorderWidget_SelectableOn, METH_VARARGS,
   "SelectableOn(self) -> None\nC++: virtual void SelectableOn()\n\n"},
  {"SelectableOff", PyvtkBorderWidget_SelectableOff, METH_VARARGS,
   "SelectableOff(self) -> None\nC++: virtual void SelectableOff()\n\n"},
  {"SetResizable", PyvtkBorderWidget_SetResizable, METH_VARARGS,
   "SetResizable(self, _arg:int) -> None\nC++: virtual void SetResizable(vtkTypeBool _arg)\n\nIndicate whether the boundary of the widget can be resized. If\nnot, the cursor will not change to \"resize\" type when mouse over\nthe boundary.\n"},
  {"GetResizable", PyvtkBorderWidget_GetResizable, METH_VARARGS,
   "GetResizable(self) -> int\nC++: virtual vtkTypeBool GetResizable()\n\n"},
  {"ResizableOn", PyvtkBorderWidget_ResizableOn, METH_VARARGS,
   "ResizableOn(self) -> None\nC++: virtual void ResizableOn()\n\n"},
  {"ResizableOff", PyvtkBorderWidget_ResizableOff, METH_VARARGS,
   "ResizableOff(self) -> None\nC++: virtual void ResizableOff()\n\n"},
  {"SetRepresentation", PyvtkBorderWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkBorderRepresentation) -> None\nC++: void SetRepresentation(vtkBorderRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetBorderRepresentation", PyvtkBorderWidget_GetBorderRepresentation, METH_VARARGS,
   "GetBorderRepresentation(self) -> vtkBorderRepresentation\nC++: vtkBorderRepresentation *GetBorderRepresentation()\n\nReturn the representation as a vtkBorderRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkBorderWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"GetProcessEvents", PyvtkBorderWidget_GetProcessEvents, METH_VARARGS,
   "GetProcessEvents(self) -> int\nC++: vtkTypeBool GetProcessEvents() override;\n\nReimplement ProcessEvents to disable it when using relative\nlocation with windowLocation. When using exact location this\noverride has no effect.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBorderWidget_Doc =
  "vtkBorderWidget - place a border around a 2D rectangular region\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This class is a superclass for 2D widgets that may require a\n"
  "rectangular border. Besides drawing a border, the widget provides\n"
  "methods for resizing and moving the rectangular region (and\n"
  "associated border). The widget provides methods and internal data\n"
  "members so that subclasses can take advantage of this widgets\n"
  "capabilities, requiring only that the subclass defines a\n"
  "\"representation\", i.e., some combination of props or actors that can\n"
  "be managed in the 2D rectangular region.\n\n"
  "The class defines basic positioning functionality, including the\n"
  "ability to size the widget with locked x/y proportions. The area\n"
  "within the border may be made \"selectable\" as well, meaning that a\n"
  "selection event interior to the widget invokes a virtual\n"
  "SelectRegion() method, which can be used to pick objects or otherwise\n"
  "manipulate data interior to the widget.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "On the boundary of the widget:\n"
  "  LeftButtonPressEvent - select boundary\n"
  "  LeftButtonReleaseEvent - deselect boundary\n"
  "  MouseMoveEvent - move/resize widget depending on which portion of\n"
  "the\n"
  "                   boundary was selected. On the interior of the\n"
  "widget:\n"
  "  LeftButtonPressEvent - invoke SelectButton() callback (if the ivar\n"
  "                         Selectable is on) Anywhere on the widget:\n"
  "  MiddleButtonPressEvent - move the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkBorderWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Translate -- the widget is to be translated\n"
  "  vtkWidgetEvent::Move -- a request for slider motion has been\n"
  "invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "this widget invokes the following VTK events on itself (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@sa\n"
  "vtkInteractorObserver vtkCameraInterpolator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBorderWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBorderWidget", // tp_name
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
  PyvtkBorderWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBorderWidget_StaticNew()
{
  return vtkBorderWidget::New();
}

PyObject *PyvtkBorderWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBorderWidget_Type, PyvtkBorderWidget_Methods,
    "vtkBorderWidget",
 &PyvtkBorderWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBorderWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBorderWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBorderWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

