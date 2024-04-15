// python wrapper for vtkHoverWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHoverWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHoverWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkHoverWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkHoverWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHoverWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHoverWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHoverWidget *tempr = vtkHoverWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHoverWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHoverWidget::NewInstance());

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
PyvtkHoverWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHoverWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHoverWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimerDuration(temp0);
    }
    else
    {
      op->vtkHoverWidget::SetTimerDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDurationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerDurationMinValue() :
      op->vtkHoverWidget::GetTimerDurationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDurationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDurationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerDurationMaxValue() :
      op->vtkHoverWidget::GetTimerDurationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_GetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerDuration() :
      op->vtkHoverWidget::GetTimerDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

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
      op->vtkHoverWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHoverWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHoverWidget *op = static_cast<vtkHoverWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkHoverWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHoverWidget_Methods[] = {
  {"IsTypeOf", PyvtkHoverWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHoverWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHoverWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHoverWidget\nC++: static vtkHoverWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHoverWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHoverWidget\nC++: vtkHoverWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHoverWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHoverWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTimerDuration", PyvtkHoverWidget_SetTimerDuration, METH_VARARGS,
   "SetTimerDuration(self, _arg:int) -> None\nC++: virtual void SetTimerDuration(int _arg)\n\nSpecify the hovering interval (in milliseconds). If after moving\nthe mouse the pointer stays over a vtkProp for this duration,\nthen a vtkTimerEvent::TimerEvent is invoked.\n"},
  {"GetTimerDurationMinValue", PyvtkHoverWidget_GetTimerDurationMinValue, METH_VARARGS,
   "GetTimerDurationMinValue(self) -> int\nC++: virtual int GetTimerDurationMinValue()\n\n"},
  {"GetTimerDurationMaxValue", PyvtkHoverWidget_GetTimerDurationMaxValue, METH_VARARGS,
   "GetTimerDurationMaxValue(self) -> int\nC++: virtual int GetTimerDurationMaxValue()\n\n"},
  {"GetTimerDuration", PyvtkHoverWidget_GetTimerDuration, METH_VARARGS,
   "GetTimerDuration(self) -> int\nC++: virtual int GetTimerDuration()\n\n"},
  {"SetEnabled", PyvtkHoverWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nThe method for activating and deactivating this widget. This\nmethod must be overridden because it performs special\ntimer-related operations.\n"},
  {"CreateDefaultRepresentation", PyvtkHoverWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nA default representation, of which there is none, is created.\nNote that the superclasses vtkAbstractWidget::GetRepresentation()\nmethod returns nullptr.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHoverWidget_Doc =
  "vtkHoverWidget - invoke a vtkTimerEvent when hovering\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkHoverWidget is used to invoke an event when hovering in a\n"
  "render window. Hovering occurs when mouse motion (in the render\n"
  "window) does not occur for a specified amount of time (i.e.,\n"
  "TimerDuration). This class can be used as is (by observing\n"
  "TimerEvents) or for class derivation for those classes wishing to do\n"
  "more with the hover event.\n\n"
  "To use this widget, specify an instance of vtkHoverWidget and specify\n"
  "the time (in milliseconds) defining the hover period. Unlike most\n"
  "widgets, this widget does not require a representation (although\n"
  "subclasses like vtkBalloonWidget do require a representation).\n\n"
  "@par Event Bindings: By default, the widget observes the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n\n"
  "  MouseMoveEvent - manages a timer used to determine whether the\n"
  "mouse\n"
  "                   is hovering.\n"
  "  TimerEvent - when the time between events (e.g., mouse move), then\n"
  "a\n"
  "               timer event is invoked.\n"
  "  KeyPressEvent - when the \"Enter\" key is pressed after the balloon\n"
  "appears,\n"
  "                  a callback is activated (e.g.,\n"
  "WidgetActivateEvent). \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkHoverWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Move -- start (or reset) the timer\n"
  "  vtkWidgetEvent::TimedOut -- when enough time is elapsed between\n"
  "defined\n"
  "                              VTK events the hover event is invoked.\n"
  "  vtkWidgetEvent::SelectAction -- activate any callbacks associated\n"
  "                                  with the balloon. \n\n"
  "@par Event Bindings: This widget invokes the following VTK events on\n"
  "itself when the widget determines that it is hovering. Note that\n"
  "observers of this widget can listen for these events and take\n"
  "appropriate action.\n\n\n"
  "  vtkCommand::TimerEvent (when hovering is determined to occur)\n"
  "  vtkCommand::EndInteractionEvent (after a hover has occurred and the\n"
  "                                   mouse begins moving again).\n"
  "  vtkCommand::WidgetActivateEvent (when the balloon is selected with\n"
  "a\n"
  "                                   keypress). \n\n"
  "@sa\n"
  "vtkAbstractWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHoverWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkHoverWidget", // tp_name
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
  PyvtkHoverWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHoverWidget_StaticNew()
{
  return vtkHoverWidget::New();
}

PyObject *PyvtkHoverWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHoverWidget_Type, PyvtkHoverWidget_Methods,
    "vtkHoverWidget",
 &PyvtkHoverWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHoverWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHoverWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHoverWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

