// python wrapper for vtkRectilinearWipeWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRectilinearWipeWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRectilinearWipeWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkRectilinearWipeWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkRectilinearWipeWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRectilinearWipeWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearWipeWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRectilinearWipeWidget *tempr = vtkRectilinearWipeWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearWipeWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearWipeWidget::NewInstance());

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
PyvtkRectilinearWipeWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRectilinearWipeWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRectilinearWipeWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  vtkRectilinearWipeRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRectilinearWipeRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkRectilinearWipeWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_GetRectilinearWipeRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearWipeRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearWipeRepresentation *tempr = (ap.IsBound() ?
      op->GetRectilinearWipeRepresentation() :
      op->vtkRectilinearWipeWidget::GetRectilinearWipeRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearWipeWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearWipeWidget *op = static_cast<vtkRectilinearWipeWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkRectilinearWipeWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRectilinearWipeWidget_Methods[] = {
  {"IsTypeOf", PyvtkRectilinearWipeWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRectilinearWipeWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRectilinearWipeWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRectilinearWipeWidget\nC++: static vtkRectilinearWipeWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRectilinearWipeWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRectilinearWipeWidget\nC++: vtkRectilinearWipeWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRectilinearWipeWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRectilinearWipeWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkRectilinearWipeWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkRectilinearWipeRepresentation)\n    -> None\nC++: void SetRepresentation(vtkRectilinearWipeRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"GetRectilinearWipeRepresentation", PyvtkRectilinearWipeWidget_GetRectilinearWipeRepresentation, METH_VARARGS,
   "GetRectilinearWipeRepresentation(self)\n    -> vtkRectilinearWipeRepresentation\nC++: vtkRectilinearWipeRepresentation *GetRectilinearWipeRepresentation(\n    )\n\nReturn the representation as a vtkRectilinearWipeRepresentation.\n"},
  {"CreateDefaultRepresentation", PyvtkRectilinearWipeWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRectilinearWipeWidget_Doc =
  "vtkRectilinearWipeWidget - interactively control an instance of\nvtkImageRectilinearWipe filter\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "The vtkRectilinearWipeWidget is used to interactively control an\n"
  "instance of vtkImageRectilinearWipe (and an associated vtkImageActor\n"
  "used to display the rectilinear wipe). A rectilinear wipe is a 2x2\n"
  "checkerboard pattern created by combining two separate images, where\n"
  "various combinations of the checker squares are possible. Using this\n"
  "widget, the user can adjust the layout of the checker pattern, such\n"
  "as moving the center point, moving the horizontal separator, or\n"
  "moving the vertical separator. These capabilities are particularly\n"
  "useful for comparing two images.\n\n"
  "To use this widget, specify its representation (by default the\n"
  "representation is an instance of vtkRectilinearWipeProp). The\n"
  "representation generally requires that you specify an instance of\n"
  "vtkImageRectilinearWipe and an instance of vtkImageActor. Other\n"
  "instance variables may also be required to be set -- see the\n"
  "documentation for vtkRectilinearWipeProp (or appropriate subclass).\n\n"
  "By default, the widget responds to the following events:\n\n"
  "Selecting the center point, horizontal separator, and verticel\n"
  "separator:\n"
  "  LeftButtonPressEvent - move the separators\n"
  "  LeftButtonReleaseEvent - release the separators\n"
  "  MouseMoveEvent - move the separators  Selecting the center point\n"
  "allows you to move the horizontal and vertical separators\n"
  "simultaneously. Otherwise only horizontal or vertical motion is\n"
  "possible/\n\n"
  "Note that the event bindings described above can be changed using\n"
  "this class's vtkWidgetEventTranslator. This class translates VTK\n"
  "events into the vtkRectilinearWipeWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for motion has been invoked \n\n"
  "In turn, when these widget events are processed, the\n"
  "vtkRectilinearWipeWidget invokes the following VTK events (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@warning\n"
  "The appearance of this widget is defined by its representation,\n"
  "including any properties associated with the representation.  The\n"
  "widget representation is a type of vtkProp that defines a particular\n"
  "API that works with this widget. If desired, the vtkProp may be\n"
  "subclassed to create new looks for the widget.\n\n"
  "@sa\n"
  "vtkRectilinearWipeProp vtkImageRectilinearWipe vtkImageActor\n"
  "vtkCheckerboardWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRectilinearWipeWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkRectilinearWipeWidget", // tp_name
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
  PyvtkRectilinearWipeWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRectilinearWipeWidget_StaticNew()
{
  return vtkRectilinearWipeWidget::New();
}

PyObject *PyvtkRectilinearWipeWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRectilinearWipeWidget_Type, PyvtkRectilinearWipeWidget_Methods,
    "vtkRectilinearWipeWidget",
 &PyvtkRectilinearWipeWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRectilinearWipeWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRectilinearWipeWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRectilinearWipeWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

