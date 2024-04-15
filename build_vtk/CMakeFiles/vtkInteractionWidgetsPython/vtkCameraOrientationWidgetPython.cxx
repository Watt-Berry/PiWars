// python wrapper for vtkCameraOrientationWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCameraOrientationWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraOrientationWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkCameraOrientationWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkCameraOrientationWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraOrientationWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraOrientationWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraOrientationWidget *tempr = vtkCameraOrientationWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraOrientationWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraOrientationWidget::NewInstance());

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
PyvtkCameraOrientationWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCameraOrientationWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCameraOrientationWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_SetAnimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimate(temp0);
    }
    else
    {
      op->vtkCameraOrientationWidget::SetAnimate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_GetAnimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAnimate() :
      op->vtkCameraOrientationWidget::GetAnimate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_AnimateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnimateOn();
    }
    else
    {
      op->vtkCameraOrientationWidget::AnimateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_AnimateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnimateOff();
    }
    else
    {
      op->vtkCameraOrientationWidget::AnimateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_SetAnimatorTotalFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimatorTotalFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimatorTotalFrames(temp0);
    }
    else
    {
      op->vtkCameraOrientationWidget::SetAnimatorTotalFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_GetAnimatorTotalFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatorTotalFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimatorTotalFramesMinValue() :
      op->vtkCameraOrientationWidget::GetAnimatorTotalFramesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_GetAnimatorTotalFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatorTotalFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimatorTotalFramesMaxValue() :
      op->vtkCameraOrientationWidget::GetAnimatorTotalFramesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_GetAnimatorTotalFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimatorTotalFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnimatorTotalFrames() :
      op->vtkCameraOrientationWidget::GetAnimatorTotalFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkCameraOrientationWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_SquareResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquareResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SquareResize();
    }
    else
    {
      op->vtkCameraOrientationWidget::SquareResize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_SetParentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetParentRenderer(temp0);
    }
    else
    {
      op->vtkCameraOrientationWidget::SetParentRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraOrientationWidget_GetParentRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParentRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraOrientationWidget *op = static_cast<vtkCameraOrientationWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetParentRenderer() :
      op->vtkCameraOrientationWidget::GetParentRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraOrientationWidget_Methods[] = {
  {"IsTypeOf", PyvtkCameraOrientationWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraOrientationWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraOrientationWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCameraOrientationWidget\nC++: static vtkCameraOrientationWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraOrientationWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCameraOrientationWidget\nC++: vtkCameraOrientationWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCameraOrientationWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCameraOrientationWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAnimate", PyvtkCameraOrientationWidget_SetAnimate, METH_VARARGS,
   "SetAnimate(self, _arg:bool) -> None\nC++: virtual void SetAnimate(bool _arg)\n\nEnable jump-to-axis-view animation. See AnimatorTotalFrames.\n"},
  {"GetAnimate", PyvtkCameraOrientationWidget_GetAnimate, METH_VARARGS,
   "GetAnimate(self) -> bool\nC++: virtual bool GetAnimate()\n\n"},
  {"AnimateOn", PyvtkCameraOrientationWidget_AnimateOn, METH_VARARGS,
   "AnimateOn(self) -> None\nC++: virtual void AnimateOn()\n\n"},
  {"AnimateOff", PyvtkCameraOrientationWidget_AnimateOff, METH_VARARGS,
   "AnimateOff(self) -> None\nC++: virtual void AnimateOff()\n\n"},
  {"SetAnimatorTotalFrames", PyvtkCameraOrientationWidget_SetAnimatorTotalFrames, METH_VARARGS,
   "SetAnimatorTotalFrames(self, _arg:int) -> None\nC++: virtual void SetAnimatorTotalFrames(int _arg)\n\nLength of animation. (in frames)\n"},
  {"GetAnimatorTotalFramesMinValue", PyvtkCameraOrientationWidget_GetAnimatorTotalFramesMinValue, METH_VARARGS,
   "GetAnimatorTotalFramesMinValue(self) -> int\nC++: virtual int GetAnimatorTotalFramesMinValue()\n\n"},
  {"GetAnimatorTotalFramesMaxValue", PyvtkCameraOrientationWidget_GetAnimatorTotalFramesMaxValue, METH_VARARGS,
   "GetAnimatorTotalFramesMaxValue(self) -> int\nC++: virtual int GetAnimatorTotalFramesMaxValue()\n\n"},
  {"GetAnimatorTotalFrames", PyvtkCameraOrientationWidget_GetAnimatorTotalFrames, METH_VARARGS,
   "GetAnimatorTotalFrames(self) -> int\nC++: virtual int GetAnimatorTotalFrames()\n\n"},
  {"CreateDefaultRepresentation", PyvtkCameraOrientationWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate a vtkCameraOrientationRepresentation.\n"},
  {"SquareResize", PyvtkCameraOrientationWidget_SquareResize, METH_VARARGS,
   "SquareResize(self) -> None\nC++: void SquareResize()\n\nFits the widget's renderer to a square viewport.\n"},
  {"SetParentRenderer", PyvtkCameraOrientationWidget_SetParentRenderer, METH_VARARGS,
   "SetParentRenderer(self, renderer:vtkRenderer) -> None\nC++: void SetParentRenderer(vtkRenderer *renderer)\n\nThis widget shows and manipulates the orientation of the parent\nrenderer's active camera.\n\nNote: The renderer must be part of a render window for the widget\nto appear.\n"},
  {"GetParentRenderer", PyvtkCameraOrientationWidget_GetParentRenderer, METH_VARARGS,
   "GetParentRenderer(self) -> vtkRenderer\nC++: vtkRenderer *GetParentRenderer()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCameraOrientationWidget_Doc =
  "vtkCameraOrientationWidget - A widget to manipulate\nvtkCameraOrientationWidget.\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget creates and manages its own\n"
  "vtkCameraOrientationRepresentation. To use this widget, make sure you\n"
  "call SetParentRenderer() and enable the widget. The\n"
  "jump-to-axis-viewpoint feature is animated over 20 frames. See\n"
  "SetAnimatorTotalFrames() Turn off animation with AnimateOff()\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "LeftButtonPressEvent - select the appropriate handle\n"
  "LeftButtonReleaseEvent - release the currently selected handle If one\n"
  "of the six handles are selected:\n"
  "  MouseMoveEvent - rotate (if left button) , else set hover\n"
  "representation for nearest handle.  These input events are not\n"
  "forwarded to any other observers. This widget eats up mouse events.\n"
  "(AbortFlagOn).\n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator, which\n"
  "translates VTK events into the vtkCameraOrientationWidget's widget\n"
  "events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for motion has been invoked \n\n"
  "@par Event Bindings: This class, and the affiliated\n"
  "vtkCameraOrientationRepresentation, are second generation VTK\n"
  "widgets.\n\n"
  "@sa\n"
  "vtkCameraOrientationRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCameraOrientationWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCameraOrientationWidget", // tp_name
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
  PyvtkCameraOrientationWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraOrientationWidget_StaticNew()
{
  return vtkCameraOrientationWidget::New();
}

PyObject *PyvtkCameraOrientationWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCameraOrientationWidget_Type, PyvtkCameraOrientationWidget_Methods,
    "vtkCameraOrientationWidget",
 &PyvtkCameraOrientationWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCameraOrientationWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraOrientationWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraOrientationWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

