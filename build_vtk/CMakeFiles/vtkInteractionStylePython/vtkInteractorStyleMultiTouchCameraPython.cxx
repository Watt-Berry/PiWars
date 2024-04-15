// python wrapper for vtkInteractorStyleMultiTouchCamera
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleMultiTouchCamera.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(PyObject *dict); }
extern "C" { PyObject *PyvtkInteractorStyleMultiTouchCamera_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
extern "C" { PyObject *PyvtkInteractorStyleTrackballCamera_ClassNew(); }
#define DECLARED_PyvtkInteractorStyleTrackballCamera_ClassNew
#endif

static PyObject *
PyvtkInteractorStyleMultiTouchCamera_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleMultiTouchCamera::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleMultiTouchCamera::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleMultiTouchCamera *tempr = vtkInteractorStyleMultiTouchCamera::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleMultiTouchCamera *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleMultiTouchCamera::NewInstance());

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
PyvtkInteractorStyleMultiTouchCamera_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorStyleMultiTouchCamera::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorStyleMultiTouchCamera::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnStartRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStartRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnStartRotate();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnStartRotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRotate();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnRotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnEndRotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEndRotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEndRotate();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnEndRotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnStartPinch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStartPinch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnStartPinch();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnStartPinch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnPinch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnPinch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnPinch();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnPinch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnEndPinch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEndPinch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEndPinch();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnEndPinch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnStartPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnStartPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnStartPan();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnStartPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnPan();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleMultiTouchCamera_OnEndPan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEndPan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleMultiTouchCamera *op = static_cast<vtkInteractorStyleMultiTouchCamera *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEndPan();
    }
    else
    {
      op->vtkInteractorStyleMultiTouchCamera::OnEndPan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleMultiTouchCamera_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleMultiTouchCamera_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleMultiTouchCamera_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleMultiTouchCamera_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkInteractorStyleMultiTouchCamera\nC++: static vtkInteractorStyleMultiTouchCamera *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleMultiTouchCamera_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorStyleMultiTouchCamera\nC++: vtkInteractorStyleMultiTouchCamera *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorStyleMultiTouchCamera_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorStyleMultiTouchCamera_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"OnStartRotate", PyvtkInteractorStyleMultiTouchCamera_OnStartRotate, METH_VARARGS,
   "OnStartRotate(self) -> None\nC++: void OnStartRotate() override;\n\nEvent bindings for gestures\n"},
  {"OnRotate", PyvtkInteractorStyleMultiTouchCamera_OnRotate, METH_VARARGS,
   "OnRotate(self) -> None\nC++: void OnRotate() override;\n\n"},
  {"OnEndRotate", PyvtkInteractorStyleMultiTouchCamera_OnEndRotate, METH_VARARGS,
   "OnEndRotate(self) -> None\nC++: void OnEndRotate() override;\n\n"},
  {"OnStartPinch", PyvtkInteractorStyleMultiTouchCamera_OnStartPinch, METH_VARARGS,
   "OnStartPinch(self) -> None\nC++: void OnStartPinch() override;\n\n"},
  {"OnPinch", PyvtkInteractorStyleMultiTouchCamera_OnPinch, METH_VARARGS,
   "OnPinch(self) -> None\nC++: void OnPinch() override;\n\n"},
  {"OnEndPinch", PyvtkInteractorStyleMultiTouchCamera_OnEndPinch, METH_VARARGS,
   "OnEndPinch(self) -> None\nC++: void OnEndPinch() override;\n\n"},
  {"OnStartPan", PyvtkInteractorStyleMultiTouchCamera_OnStartPan, METH_VARARGS,
   "OnStartPan(self) -> None\nC++: void OnStartPan() override;\n\n"},
  {"OnPan", PyvtkInteractorStyleMultiTouchCamera_OnPan, METH_VARARGS,
   "OnPan(self) -> None\nC++: void OnPan() override;\n\n"},
  {"OnEndPan", PyvtkInteractorStyleMultiTouchCamera_OnEndPan, METH_VARARGS,
   "OnEndPan(self) -> None\nC++: void OnEndPan() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInteractorStyleMultiTouchCamera_Doc =
  "vtkInteractorStyleMultiTouchCamera - multitouch manipulation of the\ncamera\n\n"
  "Superclass: vtkInteractorStyleTrackballCamera\n\n"
  "vtkInteractorStyleMultiTouchCamera allows the user to interactively\n"
  "manipulate (rotate, pan, etc.) the camera, the viewpoint of the scene\n"
  "using multitouch gestures in addition to regular gestures\n\n"
  "@sa\n"
  "vtkInteractorStyleTrackballActor vtkInteractorStyleJoystickCamera\n"
  "vtkInteractorStyleJoystickActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorStyleMultiTouchCamera_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionStyle.vtkInteractorStyleMultiTouchCamera", // tp_name
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
  PyvtkInteractorStyleMultiTouchCamera_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleMultiTouchCamera_StaticNew()
{
  return vtkInteractorStyleMultiTouchCamera::New();
}

PyObject *PyvtkInteractorStyleMultiTouchCamera_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorStyleMultiTouchCamera_Type, PyvtkInteractorStyleMultiTouchCamera_Methods,
    "vtkInteractorStyleMultiTouchCamera",
 &PyvtkInteractorStyleMultiTouchCamera_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyleTrackballCamera_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleMultiTouchCamera(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleMultiTouchCamera_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleMultiTouchCamera", o) != 0)
  {
    Py_DECREF(o);
  }

}

