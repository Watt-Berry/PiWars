// python wrapper for vtkWidgetSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWidgetSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetSet(PyObject *dict); }
extern "C" { PyObject *PyvtkWidgetSet_ClassNew(); }


static PyObject *
PyvtkWidgetSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetSet *tempr = vtkWidgetSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetSet::NewInstance());

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
PyvtkWidgetSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWidgetSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWidgetSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

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
      op->vtkWidgetSet::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_EnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOn();
    }
    else
    {
      op->vtkWidgetSet::EnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_EnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnabledOff();
    }
    else
    {
      op->vtkWidgetSet::EnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_AddWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
  {
    if (ap.IsBound())
    {
      op->AddWidget(temp0);
    }
    else
    {
      op->vtkWidgetSet::AddWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_RemoveWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget"))
  {
    if (ap.IsBound())
    {
      op->RemoveWidget(temp0);
    }
    else
    {
      op->vtkWidgetSet::RemoveWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_GetNumberOfWidgets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfWidgets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfWidgets() :
      op->vtkWidgetSet::GetNumberOfWidgets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetSet_GetNthWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetSet *op = static_cast<vtkWidgetSet *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractWidget *tempr = (ap.IsBound() ?
      op->GetNthWidget(temp0) :
      op->vtkWidgetSet::GetNthWidget(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetSet_Methods[] = {
  {"IsTypeOf", PyvtkWidgetSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWidgetSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWidgetSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWidgetSet\nC++: static vtkWidgetSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWidgetSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWidgetSet\nC++: vtkWidgetSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWidgetSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWidgetSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkWidgetSet_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: virtual void SetEnabled(vtkTypeBool)\n\nMethod for activating and deactivating all widgets in the group.\n"},
  {"EnabledOn", PyvtkWidgetSet_EnabledOn, METH_VARARGS,
   "EnabledOn(self) -> None\nC++: virtual void EnabledOn()\n\n"},
  {"EnabledOff", PyvtkWidgetSet_EnabledOff, METH_VARARGS,
   "EnabledOff(self) -> None\nC++: virtual void EnabledOff()\n\n"},
  {"AddWidget", PyvtkWidgetSet_AddWidget, METH_VARARGS,
   "AddWidget(self, __a:vtkAbstractWidget) -> None\nC++: void AddWidget(vtkAbstractWidget *)\n\nAdd a widget to the set.\n"},
  {"RemoveWidget", PyvtkWidgetSet_RemoveWidget, METH_VARARGS,
   "RemoveWidget(self, __a:vtkAbstractWidget) -> None\nC++: void RemoveWidget(vtkAbstractWidget *)\n\nRemove a widget from the set\n"},
  {"GetNumberOfWidgets", PyvtkWidgetSet_GetNumberOfWidgets, METH_VARARGS,
   "GetNumberOfWidgets(self) -> int\nC++: unsigned int GetNumberOfWidgets()\n\nGet number of widgets in the set.\n"},
  {"GetNthWidget", PyvtkWidgetSet_GetNthWidget, METH_VARARGS,
   "GetNthWidget(self, __a:int) -> vtkAbstractWidget\nC++: vtkAbstractWidget *GetNthWidget(unsigned int)\n\nGet the Nth widget in the set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWidgetSet_Doc =
  "vtkWidgetSet - Synchronize a collection on vtkWidgets drawn on\ndifferent renderwindows using the\n\n"
  "Superclass: vtkObject\n\n"
  "Callback - Dispatch Action mechanism.\n\n"
  "The class synchronizes a set of vtkAbstractWidget(s). Widgets\n"
  "typically invoke \"Actions\" that drive the geometry/behaviour of their\n"
  "representations in response to interactor events. Interactor\n"
  "interactions on a render window are mapped into \"Callbacks\" by the\n"
  "widget, from which \"Actions\" are dispatched to the entire set. This\n"
  "architecture allows us to tie widgets existing in different render\n"
  "windows together. For instance a HandleWidget might exist on the\n"
  "sagittal view. Moving it around should update the representations of\n"
  "the corresponding handle widget that lies on the axial and coronal\n"
  "and volume views as well.\n\n"
  "@par User API: A user would use this class as follows.vtkWidgetSet\n"
  "*set = vtkWidgetSet::New();\n"
  "vtkParallelopipedWidget *w1 = vtkParallelopipedWidget::New();\n"
  "set->AddWidget(w1);\n"
  "w1->SetInteractor(axialRenderWindow->GetInteractor());\n"
  "vtkParallelopipedWidget *w2 = vtkParallelopipedWidget::New();\n"
  "set->AddWidget(w2);\n"
  "w2->SetInteractor(coronalRenderWindow->GetInteractor());\n"
  "vtkParallelopipedWidget *w3 = vtkParallelopipedWidget::New();\n"
  "set->AddWidget(w3);\n"
  "w3->SetInteractor(sagittalRenderWindow->GetInteractor());\n"
  "set->SetEnabled(1);\n\n"
  "@par Motivation: The motivation for this class is really to provide a\n"
  "usable API to tie together multiple widgets of the same kind. To\n"
  "enable this, subclasses of vtkAbstractWidget, must be written as\n"
  "follows:\n"
  "  They will generally have callback methods mapped to some user\n"
  "interaction such\n"
  "as:this->CallbackMapper->SetCallbackMethod(vtkCommand::LeftButtonPress\n"
  "Event,\n"
  "                        vtkEvent::NoModifier, 0, 0, nullptr,\n"
  "                        vtkPaintbrushWidget::BeginDrawStrokeEvent,\n"
  "                        this,\n"
  "vtkPaintbrushWidget::BeginDrawCallback);\n\n"
  "  The callback invoked when the left button is pressed looks\n"
  "like:void vtkPaintbrushWidget::BeginDrawCallback(vtkAbstractWidget\n"
  "*w)\n"
  "{\n"
  "  vtkPaintbrushWidget *self = vtkPaintbrushWidget::SafeDownCast(w);\n"
  "  self->WidgetSet->DispatchAction(self,\n"
  "&vtkPaintbrushWidget::BeginDrawAction);\n"
  "}\n\n"
  "  The actual code for handling the drawing is written in the\n"
  "BeginDrawAction method.void vtkPaintbrushWidget::BeginDrawAction(\n"
  "vtkPaintbrushWidget *dispatcher)\n"
  "{\n"
  "// Do stuff to draw...\n"
  "// Here dispatcher is the widget that was interacted with, the one\n"
  "that\n"
  "// dispatched an action to all the other widgets in its group. You\n"
  "may, if\n"
  "// necessary find it helpful to get parameters from it.\n"
  "//   For instance for a ResizeAction:\n"
  "//     if (this != dispatcher)\n"
  "//       {\n"
  "//       double *newsize =\n"
  "dispatcher->GetRepresentation()->GetSize();\n"
  "//       this->WidgetRep->SetSize(newsize);\n"
  "//       }\n"
  "//     else\n"
  "//       {\n"
  "//       this->WidgetRep->IncrementSizeByDelta();\n"
  "//       }\n"
  "}\n\n"
  "@warning\n"
  "Actions are always dispatched first to the activeWidget, the one\n"
  "calling the set, and then to the other widgets in the set.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWidgetSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkWidgetSet", // tp_name
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
  PyvtkWidgetSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWidgetSet_StaticNew()
{
  return vtkWidgetSet::New();
}

PyObject *PyvtkWidgetSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWidgetSet_Type, PyvtkWidgetSet_Methods,
    "vtkWidgetSet",
 &PyvtkWidgetSet_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWidgetSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

