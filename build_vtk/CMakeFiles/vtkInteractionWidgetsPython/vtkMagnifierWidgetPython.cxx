// python wrapper for vtkMagnifierWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMagnifierWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMagnifierWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkMagnifierWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkMagnifierWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMagnifierWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMagnifierWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMagnifierWidget *tempr = vtkMagnifierWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMagnifierWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMagnifierWidget::NewInstance());

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
PyvtkMagnifierWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMagnifierWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMagnifierWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  vtkMagnifierRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMagnifierRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkMagnifierWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_GetMagnifierRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnifierRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMagnifierRepresentation *tempr = (ap.IsBound() ?
      op->GetMagnifierRepresentation() :
      op->vtkMagnifierWidget::GetMagnifierRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkMagnifierWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

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
      op->vtkMagnifierWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_SetKeyPressIncreaseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyPressIncreaseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyPressIncreaseValue(temp0);
    }
    else
    {
      op->vtkMagnifierWidget::SetKeyPressIncreaseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_GetKeyPressIncreaseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyPressIncreaseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyPressIncreaseValue() :
      op->vtkMagnifierWidget::GetKeyPressIncreaseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_SetKeyPressDecreaseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyPressDecreaseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyPressDecreaseValue(temp0);
    }
    else
    {
      op->vtkMagnifierWidget::SetKeyPressDecreaseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMagnifierWidget_GetKeyPressDecreaseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyPressDecreaseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMagnifierWidget *op = static_cast<vtkMagnifierWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyPressDecreaseValue() :
      op->vtkMagnifierWidget::GetKeyPressDecreaseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMagnifierWidget_Methods[] = {
  {"IsTypeOf", PyvtkMagnifierWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMagnifierWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMagnifierWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMagnifierWidget\nC++: static vtkMagnifierWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMagnifierWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMagnifierWidget\nC++: vtkMagnifierWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMagnifierWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMagnifierWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkMagnifierWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkMagnifierRepresentation) -> None\nC++: void SetRepresentation(vtkMagnifierRepresentation *r)\n\nSpecify an instance of vtkMagnifierRepresentation used to\nrepresent this widget in the scene. Note that the representation\nis a subclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetMagnifierRepresentation", PyvtkMagnifierWidget_GetMagnifierRepresentation, METH_VARARGS,
   "GetMagnifierRepresentation(self) -> vtkMagnifierRepresentation\nC++: vtkMagnifierRepresentation *GetMagnifierRepresentation()\n\nReturn the representation as a vtkBorderRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkMagnifierWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {"SetEnabled", PyvtkMagnifierWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nOverride superclasses' SetEnabled() method because the this\nwidget must activate the representation.\n"},
  {"SetKeyPressIncreaseValue", PyvtkMagnifierWidget_SetKeyPressIncreaseValue, METH_VARARGS,
   "SetKeyPressIncreaseValue(self, _arg:str) -> None\nC++: virtual void SetKeyPressIncreaseValue(char _arg)\n\nBy default, the keypress \"+\" increases magnification, and the\nkeypress \"-\" decreases magnification. These can be changed to\nother key press values. Note that in either case, these\nkeypresses cause the widget to emit the\n\"vtkCommand::WidgetValueChangedEvent\".\n"},
  {"GetKeyPressIncreaseValue", PyvtkMagnifierWidget_GetKeyPressIncreaseValue, METH_VARARGS,
   "GetKeyPressIncreaseValue(self) -> str\nC++: virtual char GetKeyPressIncreaseValue()\n\n"},
  {"SetKeyPressDecreaseValue", PyvtkMagnifierWidget_SetKeyPressDecreaseValue, METH_VARARGS,
   "SetKeyPressDecreaseValue(self, _arg:str) -> None\nC++: virtual void SetKeyPressDecreaseValue(char _arg)\n\n"},
  {"GetKeyPressDecreaseValue", PyvtkMagnifierWidget_GetKeyPressDecreaseValue, METH_VARARGS,
   "GetKeyPressDecreaseValue(self) -> str\nC++: virtual char GetKeyPressDecreaseValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMagnifierWidget_Doc =
  "vtkMagnifierWidget - create a moving, magnifying renderer that can\ninspect the contents\n         of an encapsulating renderer.\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This class provides a small, interactive, overlayed viewport (i.e.,\n"
  "renderer) that follows the mouse while inside another, larger\n"
  "renderer. Inside this viewport effects like magnification (via zoom\n"
  "or adjustment of the view angle), or other rendering effects are\n"
  "possible.\n\n"
  "To use this widget, pair it with a representation (which provides\n"
  "options like a border and so on). In the representation, indicate\n"
  "what renderer with which the magnifier is associated. Optionally, a\n"
  "list of actors can be provided to the magnifier so that it only\n"
  "renders the actors specified (this is useful for removing objects\n"
  "like widgets from the scene, or creating separate pipelines for\n"
  "creating special effects).\n\n"
  "By default, the magnifier responds to the keypress \"m\" to toggle\n"
  "between showing/hiding the magnifier. Internally, it also follows\n"
  "mouse move events to track the magnifier with the mouse motion.\n"
  "Finally, using the \"-\" or \"+\" keys can be used to decrease/increase\n"
  "the magnification factor by observing the\n"
  "\"vtkCommand::WidgetValueChangedEvent\".\n\n"
  "@sa\n"
  "vtkMagnifierRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMagnifierWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkMagnifierWidget", // tp_name
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
  PyvtkMagnifierWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMagnifierWidget_StaticNew()
{
  return vtkMagnifierWidget::New();
}

PyObject *PyvtkMagnifierWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMagnifierWidget_Type, PyvtkMagnifierWidget_Methods,
    "vtkMagnifierWidget",
 &PyvtkMagnifierWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMagnifierWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMagnifierWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMagnifierWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

