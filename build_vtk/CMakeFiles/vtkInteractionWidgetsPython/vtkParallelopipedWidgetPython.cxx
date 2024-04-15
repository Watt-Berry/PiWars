// python wrapper for vtkParallelopipedWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParallelopipedWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelopipedWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkParallelopipedWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkParallelopipedWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelopipedWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelopipedWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelopipedWidget *tempr = vtkParallelopipedWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelopipedWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelopipedWidget::NewInstance());

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
PyvtkParallelopipedWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParallelopipedWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParallelopipedWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

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
      op->vtkParallelopipedWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  vtkParallelopipedRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParallelopipedRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkParallelopipedWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_GetParallelopipedRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelopipedRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelopipedRepresentation *tempr = (ap.IsBound() ?
      op->GetParallelopipedRepresentation() :
      op->vtkParallelopipedWidget::GetParallelopipedRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SetEnableChairCreation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableChairCreation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableChairCreation(temp0);
    }
    else
    {
      op->vtkParallelopipedWidget::SetEnableChairCreation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_GetEnableChairCreation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableChairCreation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableChairCreation() :
      op->vtkParallelopipedWidget::GetEnableChairCreation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_EnableChairCreationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableChairCreationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableChairCreationOn();
    }
    else
    {
      op->vtkParallelopipedWidget::EnableChairCreationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_EnableChairCreationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableChairCreationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableChairCreationOff();
    }
    else
    {
      op->vtkParallelopipedWidget::EnableChairCreationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkParallelopipedWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelopipedWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedWidget *op = static_cast<vtkParallelopipedWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessEvents(temp0);
    }
    else
    {
      op->vtkParallelopipedWidget::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelopipedWidget_Methods[] = {
  {"IsTypeOf", PyvtkParallelopipedWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelopipedWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelopipedWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParallelopipedWidget\nC++: static vtkParallelopipedWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelopipedWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParallelopipedWidget\nC++: vtkParallelopipedWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParallelopipedWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParallelopipedWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkParallelopipedWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nOverride the superclass method. This is a composite widget, (it\ninternally consists of handle widgets). We will override the\nsuperclass method, so that we can pass the enabled state to the\ninternal widgets as well.\n"},
  {"SetRepresentation", PyvtkParallelopipedWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkParallelopipedRepresentation) -> None\nC++: void SetRepresentation(vtkParallelopipedRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetParallelopipedRepresentation", PyvtkParallelopipedWidget_GetParallelopipedRepresentation, METH_VARARGS,
   "GetParallelopipedRepresentation(self)\n    -> vtkParallelopipedRepresentation\nC++: vtkParallelopipedRepresentation *GetParallelopipedRepresentation(\n    )\n\nReturn the representation as a vtkParallelopipedRepresentation.\n"},
  {"SetEnableChairCreation", PyvtkParallelopipedWidget_SetEnableChairCreation, METH_VARARGS,
   "SetEnableChairCreation(self, _arg:int) -> None\nC++: virtual void SetEnableChairCreation(vtkTypeBool _arg)\n\nEnable/disable the creation of a chair on this widget. If off,\nchairs cannot be created.\n"},
  {"GetEnableChairCreation", PyvtkParallelopipedWidget_GetEnableChairCreation, METH_VARARGS,
   "GetEnableChairCreation(self) -> int\nC++: virtual vtkTypeBool GetEnableChairCreation()\n\n"},
  {"EnableChairCreationOn", PyvtkParallelopipedWidget_EnableChairCreationOn, METH_VARARGS,
   "EnableChairCreationOn(self) -> None\nC++: virtual void EnableChairCreationOn()\n\n"},
  {"EnableChairCreationOff", PyvtkParallelopipedWidget_EnableChairCreationOff, METH_VARARGS,
   "EnableChairCreationOff(self) -> None\nC++: virtual void EnableChairCreationOff()\n\n"},
  {"CreateDefaultRepresentation", PyvtkParallelopipedWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"SetProcessEvents", PyvtkParallelopipedWidget_SetProcessEvents, METH_VARARGS,
   "SetProcessEvents(self, __a:int) -> None\nC++: void SetProcessEvents(vtkTypeBool) override;\n\nMethods to change the whether the widget responds to interaction.\nOverridden to pass the state to component widgets.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParallelopipedWidget_Doc =
  "vtkParallelopipedWidget - a widget to manipulate 3D parallelopipeds\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This widget was designed with the aim of visualizing / probing cuts\n"
  "on a skewed image data / structured grid.\n\n"
  "@par Interaction: The widget allows you to create a parallelopiped\n"
  "(defined by 8 handles). The widget is initially placed by using the\n"
  "\"PlaceWidget\" method in the representation class. After the widget\n"
  "has been created, the following interactions may be used to\n"
  "manipulate it :\n"
  "1) Click on a handle and drag it around moves the handle in space,\n"
  "   while keeping the same axis alignment of the parallelopiped\n"
  "2) Dragging a handle with the shift button pressed resizes the piped\n"
  "   along an axis.\n"
  "3) Control-click on a handle creates a chair at that position. (A\n"
  "   chair is a depression in the piped that allows you to visualize\n"
  "   cuts in the volume).\n"
  "4) Clicking on a chair and dragging it around moves the chair within\n"
  "   the piped.\n"
  "5) Shift-click on the piped enables you to translate it.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParallelopipedWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkParallelopipedWidget", // tp_name
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
  PyvtkParallelopipedWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelopipedWidget_StaticNew()
{
  return vtkParallelopipedWidget::New();
}

PyObject *PyvtkParallelopipedWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParallelopipedWidget_Type, PyvtkParallelopipedWidget_Methods,
    "vtkParallelopipedWidget",
 &PyvtkParallelopipedWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelopipedWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelopipedWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelopipedWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

