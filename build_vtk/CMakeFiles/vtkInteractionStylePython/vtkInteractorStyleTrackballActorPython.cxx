// python wrapper for vtkInteractorStyleTrackballActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleTrackballActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleTrackballActor(PyObject *dict); }
extern "C" { PyObject *PyvtkInteractorStyleTrackballActor_ClassNew(); }


static PyObject *
PyvtkInteractorStyleTrackballActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleTrackballActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleTrackballActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleTrackballActor *tempr = vtkInteractorStyleTrackballActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleTrackballActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleTrackballActor::NewInstance());

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
PyvtkInteractorStyleTrackballActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorStyleTrackballActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorStyleTrackballActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_Rotate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Rotate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Rotate();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::Rotate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_Spin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Spin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Spin();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::Spin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_Pan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Pan();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::Pan();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_Dolly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Dolly();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::Dolly();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleTrackballActor_UniformScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UniformScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleTrackballActor *op = static_cast<vtkInteractorStyleTrackballActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UniformScale();
    }
    else
    {
      op->vtkInteractorStyleTrackballActor::UniformScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleTrackballActor_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleTrackballActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleTrackballActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleTrackballActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorStyleTrackballActor\nC++: static vtkInteractorStyleTrackballActor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleTrackballActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorStyleTrackballActor\nC++: vtkInteractorStyleTrackballActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorStyleTrackballActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorStyleTrackballActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"OnMouseMove", PyvtkInteractorStyleTrackballActor_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: void OnMouseMove() override;\n\nEvent bindings controlling the effects of pressing mouse buttons\nor moving the mouse.\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleTrackballActor_OnLeftButtonDown, METH_VARARGS,
   "OnLeftButtonDown(self) -> None\nC++: void OnLeftButtonDown() override;\n\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleTrackballActor_OnLeftButtonUp, METH_VARARGS,
   "OnLeftButtonUp(self) -> None\nC++: void OnLeftButtonUp() override;\n\n"},
  {"OnMiddleButtonDown", PyvtkInteractorStyleTrackballActor_OnMiddleButtonDown, METH_VARARGS,
   "OnMiddleButtonDown(self) -> None\nC++: void OnMiddleButtonDown() override;\n\n"},
  {"OnMiddleButtonUp", PyvtkInteractorStyleTrackballActor_OnMiddleButtonUp, METH_VARARGS,
   "OnMiddleButtonUp(self) -> None\nC++: void OnMiddleButtonUp() override;\n\n"},
  {"OnRightButtonDown", PyvtkInteractorStyleTrackballActor_OnRightButtonDown, METH_VARARGS,
   "OnRightButtonDown(self) -> None\nC++: void OnRightButtonDown() override;\n\n"},
  {"OnRightButtonUp", PyvtkInteractorStyleTrackballActor_OnRightButtonUp, METH_VARARGS,
   "OnRightButtonUp(self) -> None\nC++: void OnRightButtonUp() override;\n\n"},
  {"Rotate", PyvtkInteractorStyleTrackballActor_Rotate, METH_VARARGS,
   "Rotate(self) -> None\nC++: void Rotate() override;\n\nThese methods for the different interactions in different modes\nare overridden in subclasses to perform the correct motion. Since\nthey might be called from OnTimer, they do not have mouse coord\nparameters (use interactor's GetEventPosition and\nGetLastEventPosition)\n"},
  {"Spin", PyvtkInteractorStyleTrackballActor_Spin, METH_VARARGS,
   "Spin(self) -> None\nC++: void Spin() override;\n\n"},
  {"Pan", PyvtkInteractorStyleTrackballActor_Pan, METH_VARARGS,
   "Pan(self) -> None\nC++: void Pan() override;\n\n"},
  {"Dolly", PyvtkInteractorStyleTrackballActor_Dolly, METH_VARARGS,
   "Dolly(self) -> None\nC++: void Dolly() override;\n\n"},
  {"UniformScale", PyvtkInteractorStyleTrackballActor_UniformScale, METH_VARARGS,
   "UniformScale(self) -> None\nC++: void UniformScale() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInteractorStyleTrackballActor_Doc =
  "vtkInteractorStyleTrackballActor - manipulate objects in the scene\nindependent of each other\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "vtkInteractorStyleTrackballActor allows the user to interact with\n"
  "(rotate, pan, etc.) objects in the scene independent of each other. \n"
  "In trackball interaction, the magnitude of the mouse motion is\n"
  "proportional to the actor motion associated with a particular mouse\n"
  "binding. For example, small left-button motions cause small changes\n"
  "in the rotation of the actor around its center point.\n\n"
  "The mouse bindings are as follows. For a 3-button mouse, the left\n"
  "button is for rotation, the right button for zooming, the middle\n"
  "button for panning, and ctrl + left button for spinning.  (With fewer\n"
  "mouse buttons, ctrl + shift + left button is for zooming, and shift +\n"
  "left button is for panning.)\n\n"
  "@sa\n"
  "vtkInteractorStyleTrackballCamera vtkInteractorStyleJoystickActor\n"
  "vtkInteractorStyleJoystickCamera\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorStyleTrackballActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionStyle.vtkInteractorStyleTrackballActor", // tp_name
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
  PyvtkInteractorStyleTrackballActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleTrackballActor_StaticNew()
{
  return vtkInteractorStyleTrackballActor::New();
}

PyObject *PyvtkInteractorStyleTrackballActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorStyleTrackballActor_Type, PyvtkInteractorStyleTrackballActor_Methods,
    "vtkInteractorStyleTrackballActor",
 &PyvtkInteractorStyleTrackballActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkInteractorStyle");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleTrackballActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleTrackballActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleTrackballActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

