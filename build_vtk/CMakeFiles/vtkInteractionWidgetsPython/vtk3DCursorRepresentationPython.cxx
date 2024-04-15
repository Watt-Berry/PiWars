// python wrapper for vtk3DCursorRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtk3DCursorRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtk3DCursorRepresentation(PyObject *dict); }
extern "C" { PyObject *Pyvtk3DCursorRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DCursorRepresentation_CursorShape_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtk3DCursorRepresentation.CursorShape", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *Pyvtk3DCursorRepresentation_CursorShape_FromEnum(T val)
{
  return PyVTKEnum_New(&Pyvtk3DCursorRepresentation_CursorShape_Type, static_cast<int>(val));
}


static PyObject *
Pyvtk3DCursorRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtk3DCursorRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtk3DCursorRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtk3DCursorRepresentation *tempr = vtk3DCursorRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtk3DCursorRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtk3DCursorRepresentation::NewInstance());

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
Pyvtk3DCursorRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtk3DCursorRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtk3DCursorRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtk3DCursorRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtk3DCursorRepresentation::WidgetInteraction(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtk3DCursorRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtk3DCursorRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCursorShape(temp0);
    }
    else
    {
      op->vtk3DCursorRepresentation::SetCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShape() :
      op->vtk3DCursorRepresentation::GetShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_SetCustomCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  vtkActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->SetCustomCursor(temp0);
    }
    else
    {
      op->vtk3DCursorRepresentation::SetCustomCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_GetCustomCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetCustomCursor() :
      op->vtk3DCursorRepresentation::GetCustomCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_SetCursor(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetCursor."
    " (" "Please use SetCursorShape and SetCustomCursor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  vtkActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->SetCursor(temp0);
    }
    else
    {
      op->vtk3DCursorRepresentation::SetCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DCursorRepresentation_GetCursor(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetCursor."
    " (" "Please use GetCustomCursor instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DCursorRepresentation *op = static_cast<vtk3DCursorRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetCursor() :
      op->vtk3DCursorRepresentation::GetCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef Pyvtk3DCursorRepresentation_Methods[] = {
  {"IsTypeOf", Pyvtk3DCursorRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", Pyvtk3DCursorRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", Pyvtk3DCursorRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtk3DCursorRepresentation\nC++: static vtk3DCursorRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", Pyvtk3DCursorRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtk3DCursorRepresentation\nC++: vtk3DCursorRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", Pyvtk3DCursorRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", Pyvtk3DCursorRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"BuildRepresentation", Pyvtk3DCursorRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nUpdate the cursor size (in world coordinates) to always keep the\nsame size in display coordinates.\n"},
  {"WidgetInteraction", Pyvtk3DCursorRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, newEventPos:[float, float]) -> None\nC++: void WidgetInteraction(double newEventPos[2]) override;\n\nPosition the cursor in the scene using the vtkHardwarePicker\n"},
  {"ReleaseGraphicsResources", Pyvtk3DCursorRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nThese methods are reimplemented to make this class behave as a\nvtkProp.\n"},
  {"RenderOpaqueGeometry", Pyvtk3DCursorRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"SetCursorShape", Pyvtk3DCursorRepresentation_SetCursorShape, METH_VARARGS,
   "SetCursorShape(self, shape:int) -> None\nC++: void SetCursorShape(int shape)\n\nSet / Get the shape of the cursor. You can choose between CROSS,\nSPHERE and CUSTOM. Choose CUSTOM if you want to use the actor you\npass with SetCustomCursor.\n"},
  {"GetShape", Pyvtk3DCursorRepresentation_GetShape, METH_VARARGS,
   "GetShape(self) -> int\nC++: virtual int GetShape()\n\n"},
  {"SetCustomCursor", Pyvtk3DCursorRepresentation_SetCustomCursor, METH_VARARGS,
   "SetCustomCursor(self, customCursor:vtkActor) -> None\nC++: void SetCustomCursor(vtkActor *customCursor)\n\nSet / Get an actor to use as custom cursor. You must set the\ncursor shape to CUSTOM enable it.\n"},
  {"GetCustomCursor", Pyvtk3DCursorRepresentation_GetCustomCursor, METH_VARARGS,
   "GetCustomCursor(self) -> vtkActor\nC++: virtual vtkActor *GetCustomCursor()\n\n"},
  {"SetCursor", Pyvtk3DCursorRepresentation_SetCursor, METH_VARARGS,
   "SetCursor(self, cursor:vtkActor) -> None\nC++: virtual void SetCursor(vtkActor *cursor)\n\nSet / Get the actor currently used as the 3D cursor. By default,\nthe cursor is a 3D cross (vtkCursor3D).\n"},
  {"GetCursor", Pyvtk3DCursorRepresentation_GetCursor, METH_VARARGS,
   "GetCursor(self) -> vtkActor\nC++: virtual vtkActor *GetCursor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *Pyvtk3DCursorRepresentation_Doc =
  "vtk3DCursorRepresentation - Representation of the vtk3DCursorWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "Internally, the class uses a vtkHardwarePicker to pick the position\n"
  "of the cursor in the scene given a display position (in pixels). If\n"
  "the mouse hovers an actor, the cursor is placed on its surface. If\n"
  "not, it's placed on the focal plane of the camera. Because of the\n"
  "current state of pickers in VTK, this cursor do not support\n"
  "volumetric data.\n\n"
  "The cursor itself can be considered as a self-employed widget handle.\n"
  "For resizing the cursor, use the SetHandleSize method of this widget.\n\n"
  "Current limitations :\n"
  "- Do not work with volumes (for now no pickers handles them properly)\n"
  "- Unsteady placement on other widgets (manipulation and cursor\n"
  "  actualization remain fine)\n"
  "- When zooming the cursor do not follows the mouse until moving it\n"
  "  again\n\n"
  "@sa vtk3DCursorWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DCursorRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtk3DCursorRepresentation", // tp_name
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
  Pyvtk3DCursorRepresentation_Doc, // tp_doc
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

static vtkObjectBase *Pyvtk3DCursorRepresentation_StaticNew()
{
  return vtk3DCursorRepresentation::New();
}

PyObject *Pyvtk3DCursorRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &Pyvtk3DCursorRepresentation_Type, Pyvtk3DCursorRepresentation_Methods,
    "vtk3DCursorRepresentation",
 &Pyvtk3DCursorRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&Pyvtk3DCursorRepresentation_CursorShape_Type);
  PyVTKEnum_Add(&Pyvtk3DCursorRepresentation_CursorShape_Type, "vtk3DCursorRepresentation.CursorShape");

  o = (PyObject *)&Pyvtk3DCursorRepresentation_CursorShape_Type;
  if (PyDict_SetItemString(d, "CursorShape", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtk3DCursorRepresentation::CursorShape cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "CROSS_SHAPE", vtk3DCursorRepresentation::CROSS_SHAPE },
        { "SPHERE_SHAPE", vtk3DCursorRepresentation::SPHERE_SHAPE },
        { "CUSTOM_SHAPE", vtk3DCursorRepresentation::CUSTOM_SHAPE },
      };

    o = Pyvtk3DCursorRepresentation_CursorShape_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtk3DCursorRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = Pyvtk3DCursorRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtk3DCursorRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

