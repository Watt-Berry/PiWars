// python wrapper for vtkCompassWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCompassWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompassWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkCompassWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkCompassWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompassWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompassWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompassWidget *tempr = vtkCompassWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompassWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompassWidget::NewInstance());

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
PyvtkCompassWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompassWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompassWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  vtkCompassRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompassRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkCompassWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkCompassWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeading() :
      op->vtkCompassWidget::GetHeading());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetHeading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeading(temp0);
    }
    else
    {
      op->vtkCompassWidget::SetHeading(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTilt() :
      op->vtkCompassWidget::GetTilt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTilt(temp0);
    }
    else
    {
      op->vtkCompassWidget::SetTilt(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkCompassWidget::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistance(temp0);
    }
    else
    {
      op->vtkCompassWidget::SetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimerDuration() :
      op->vtkCompassWidget::GetTimerDuration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetTimerDuration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimerDuration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

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
      op->vtkCompassWidget::SetTimerDuration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetTiltSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiltSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTiltSpeed() :
      op->vtkCompassWidget::GetTiltSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetTiltSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTiltSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTiltSpeed(temp0);
    }
    else
    {
      op->vtkCompassWidget::SetTiltSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_GetDistanceSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceSpeed() :
      op->vtkCompassWidget::GetDistanceSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompassWidget_SetDistanceSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompassWidget *op = static_cast<vtkCompassWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceSpeed(temp0);
    }
    else
    {
      op->vtkCompassWidget::SetDistanceSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompassWidget_Methods[] = {
  {"IsTypeOf", PyvtkCompassWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompassWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompassWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompassWidget\nC++: static vtkCompassWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompassWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompassWidget\nC++: vtkCompassWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompassWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompassWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkCompassWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkCompassRepresentation) -> None\nC++: void SetRepresentation(vtkCompassRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"CreateDefaultRepresentation", PyvtkCompassWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"GetHeading", PyvtkCompassWidget_GetHeading, METH_VARARGS,
   "GetHeading(self) -> float\nC++: double GetHeading()\n\nGet/set the value for this widget.\n"},
  {"SetHeading", PyvtkCompassWidget_SetHeading, METH_VARARGS,
   "SetHeading(self, v:float) -> None\nC++: void SetHeading(double v)\n\n"},
  {"GetTilt", PyvtkCompassWidget_GetTilt, METH_VARARGS,
   "GetTilt(self) -> float\nC++: double GetTilt()\n\n"},
  {"SetTilt", PyvtkCompassWidget_SetTilt, METH_VARARGS,
   "SetTilt(self, tilt:float) -> None\nC++: void SetTilt(double tilt)\n\n"},
  {"GetDistance", PyvtkCompassWidget_GetDistance, METH_VARARGS,
   "GetDistance(self) -> float\nC++: double GetDistance()\n\n"},
  {"SetDistance", PyvtkCompassWidget_SetDistance, METH_VARARGS,
   "SetDistance(self, distance:float) -> None\nC++: void SetDistance(double distance)\n\n"},
  {"GetTimerDuration", PyvtkCompassWidget_GetTimerDuration, METH_VARARGS,
   "GetTimerDuration(self) -> int\nC++: virtual int GetTimerDuration()\n\nGet/set the timer interval in milliseconds. The timer interval\ndetermines the update frequency for slider mouse interactions.\nDefault is 50 ms.\n"},
  {"SetTimerDuration", PyvtkCompassWidget_SetTimerDuration, METH_VARARGS,
   "SetTimerDuration(self, _arg:int) -> None\nC++: virtual void SetTimerDuration(int _arg)\n\n"},
  {"GetTiltSpeed", PyvtkCompassWidget_GetTiltSpeed, METH_VARARGS,
   "GetTiltSpeed(self) -> float\nC++: virtual double GetTiltSpeed()\n\nGet/set the tilt speed in degrees per second. This is the speed\nwith which the tilt changes when the top/bottom tilt slider\nbutton is clicked. Default is 30.0 degrees/s.\n"},
  {"SetTiltSpeed", PyvtkCompassWidget_SetTiltSpeed, METH_VARARGS,
   "SetTiltSpeed(self, _arg:float) -> None\nC++: virtual void SetTiltSpeed(double _arg)\n\n"},
  {"GetDistanceSpeed", PyvtkCompassWidget_GetDistanceSpeed, METH_VARARGS,
   "GetDistanceSpeed(self) -> float\nC++: virtual double GetDistanceSpeed()\n\nGet/set the distance speed in distance per second. This is the\nspeed with which the distance changes when the top/bottom\ndistance slider button is clicked. Default is 1.0/s.\n"},
  {"SetDistanceSpeed", PyvtkCompassWidget_SetDistanceSpeed, METH_VARARGS,
   "SetDistanceSpeed(self, _arg:float) -> None\nC++: virtual void SetDistanceSpeed(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompassWidget_Doc =
  "vtkCompassWidget - widget to set distance, tilt and heading\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkCompassWidget is used to adjust distance, tilt and heading\n"
  "parameters in an application. It uses vtkCompassRepresentation as its\n"
  "representation.\n\n"
  "To customize the widget override the CreateDefaultRepresentation\n"
  "method and set the representation to your own subclass of\n"
  "vtkCompassRepresentation. Ranges for distance and tilt can be set in\n"
  "vtkCompassRepresentation.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the slider bead is selected:\n"
  "  LeftButtonPressEvent - select slider\n"
  "  LeftButtonReleaseEvent - release slider\n"
  "  MouseMoveEvent - move slider \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkCompassWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for slider motion has been\n"
  "invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkCompassWidget invokes the following VTK events on itself\n"
  "(which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move)\n"
  "  vtkCommand::WidgetValueChangedEvent (when widget values have\n"
  "changed) \n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompassWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCompassWidget", // tp_name
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
  PyvtkCompassWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompassWidget_StaticNew()
{
  return vtkCompassWidget::New();
}

PyObject *PyvtkCompassWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompassWidget_Type, PyvtkCompassWidget_Methods,
    "vtkCompassWidget",
 &PyvtkCompassWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompassWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompassWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompassWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

