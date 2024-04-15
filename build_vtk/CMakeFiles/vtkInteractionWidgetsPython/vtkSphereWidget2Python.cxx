// python wrapper for vtkSphereWidget2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSphereWidget2.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphereWidget2(PyObject *dict); }
extern "C" { PyObject *PyvtkSphereWidget2_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkSphereWidget2_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereWidget2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereWidget2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereWidget2 *tempr = vtkSphereWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereWidget2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereWidget2::NewInstance());

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
PyvtkSphereWidget2_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSphereWidget2::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSphereWidget2::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  vtkSphereRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphereRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkSphereWidget2::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationEnabled(temp0);
    }
    else
    {
      op->vtkSphereWidget2::SetTranslationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_GetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationEnabled() :
      op->vtkSphereWidget2::GetTranslationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_TranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOn();
    }
    else
    {
      op->vtkSphereWidget2::TranslationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_TranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOff();
    }
    else
    {
      op->vtkSphereWidget2::TranslationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingEnabled(temp0);
    }
    else
    {
      op->vtkSphereWidget2::SetScalingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_GetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalingEnabled() :
      op->vtkSphereWidget2::GetScalingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_ScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOn();
    }
    else
    {
      op->vtkSphereWidget2::ScalingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_ScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOff();
    }
    else
    {
      op->vtkSphereWidget2::ScalingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkSphereWidget2::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereWidget2_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereWidget2 *op = static_cast<vtkSphereWidget2 *>(vp);

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
      op->vtkSphereWidget2::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereWidget2_Methods[] = {
  {"IsTypeOf", PyvtkSphereWidget2_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSphereWidget2_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSphereWidget2_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSphereWidget2\nC++: static vtkSphereWidget2 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSphereWidget2_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSphereWidget2\nC++: vtkSphereWidget2 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSphereWidget2_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSphereWidget2_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkSphereWidget2_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkSphereRepresentation) -> None\nC++: void SetRepresentation(vtkSphereRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetTranslationEnabled", PyvtkSphereWidget2_SetTranslationEnabled, METH_VARARGS,
   "SetTranslationEnabled(self, _arg:int) -> None\nC++: virtual void SetTranslationEnabled(vtkTypeBool _arg)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, and scaling can all be enabled and\ndisabled.\n"},
  {"GetTranslationEnabled", PyvtkSphereWidget2_GetTranslationEnabled, METH_VARARGS,
   "GetTranslationEnabled(self) -> int\nC++: virtual vtkTypeBool GetTranslationEnabled()\n\n"},
  {"TranslationEnabledOn", PyvtkSphereWidget2_TranslationEnabledOn, METH_VARARGS,
   "TranslationEnabledOn(self) -> None\nC++: virtual void TranslationEnabledOn()\n\n"},
  {"TranslationEnabledOff", PyvtkSphereWidget2_TranslationEnabledOff, METH_VARARGS,
   "TranslationEnabledOff(self) -> None\nC++: virtual void TranslationEnabledOff()\n\n"},
  {"SetScalingEnabled", PyvtkSphereWidget2_SetScalingEnabled, METH_VARARGS,
   "SetScalingEnabled(self, _arg:int) -> None\nC++: virtual void SetScalingEnabled(vtkTypeBool _arg)\n\n"},
  {"GetScalingEnabled", PyvtkSphereWidget2_GetScalingEnabled, METH_VARARGS,
   "GetScalingEnabled(self) -> int\nC++: virtual vtkTypeBool GetScalingEnabled()\n\n"},
  {"ScalingEnabledOn", PyvtkSphereWidget2_ScalingEnabledOn, METH_VARARGS,
   "ScalingEnabledOn(self) -> None\nC++: virtual void ScalingEnabledOn()\n\n"},
  {"ScalingEnabledOff", PyvtkSphereWidget2_ScalingEnabledOff, METH_VARARGS,
   "ScalingEnabledOff(self) -> None\nC++: virtual void ScalingEnabledOff()\n\n"},
  {"CreateDefaultRepresentation", PyvtkSphereWidget2_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set. By\ndefault, this is an instance of the vtkSphereRepresentation\nclass.\n"},
  {"SetEnabled", PyvtkSphereWidget2_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nOverride superclasses' SetEnabled() method because the line\nwidget must enable its internal handle widgets.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSphereWidget2_Doc =
  "vtkSphereWidget2 - 3D widget for manipulating a point on a sphere\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget interacts with a vtkSphereRepresentation class (i.e.,\n"
  "it handles the events that drive its corresponding representation).\n"
  "It can be used to position a point on a sphere (for example, to place\n"
  "a light or camera), or to position a sphere in a scene, including\n"
  "translating and scaling the sphere.\n\n"
  "A nice feature of vtkSphereWidget2, like any 3D widget, is that it\n"
  "will work in combination with the current interactor style (or any\n"
  "other interactor observer). That is, if vtkSphereWidget2 does not\n"
  "handle an event, then all other registered observers (including the\n"
  "interactor style) have an opportunity to process the event.\n"
  "Otherwise, the vtkSphereWidget2 will terminate the processing of the\n"
  "event that it handles.\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkSphereRepresentation (or a subclass). Various options are\n"
  "available in the representation for controlling how the widget\n"
  "appears, and how the widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If the handle or sphere are selected:\n"
  "  LeftButtonPressEvent - select the handle or sphere\n"
  "  LeftButtonReleaseEvent - release the handle to sphere\n"
  "  MouseMoveEvent - move the handle or translate the sphere In all the\n"
  "cases, independent of what is picked, the widget responds to the\n"
  "following VTK events:\n"
  "  MiddleButtonPressEvent - translate the representation\n"
  "  MiddleButtonReleaseEvent - stop translating the representation\n"
  "  RightButtonPressEvent - scale the widget's representation\n"
  "  RightButtonReleaseEvent - stop scaling the representation\n"
  "  MouseMoveEvent - scale (if right button) or move (if middle button)\n"
  "the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkSphereWidget2's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Scale -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndScale -- the selection process has completed\n"
  "  vtkWidgetEvent::Translate -- some part of the widget has been\n"
  "selected\n"
  "  vtkWidgetEvent::EndTranslate -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for motion has been invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkSphereWidget2 invokes the following VTK events on itself\n"
  "(which observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@par Event Bindings: This class, and the affiliated\n"
  "vtkSphereRepresentation, are second generation VTK widgets. An\n"
  "earlier version of this functionality was defined in the class\n"
  "vtkSphereWidget.\n\n"
  "@sa\n"
  "vtkSphereRepresentation vtkSphereWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSphereWidget2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkSphereWidget2", // tp_name
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
  PyvtkSphereWidget2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereWidget2_StaticNew()
{
  return vtkSphereWidget2::New();
}

PyObject *PyvtkSphereWidget2_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSphereWidget2_Type, PyvtkSphereWidget2_Methods,
    "vtkSphereWidget2",
 &PyvtkSphereWidget2_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphereWidget2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereWidget2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereWidget2", o) != 0)
  {
    Py_DECREF(o);
  }

}

