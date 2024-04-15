// python wrapper for vtkXRenderWindowInteractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXRenderWindowInteractor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXRenderWindowInteractor(PyObject *dict); }
extern "C" { PyObject *PyvtkXRenderWindowInteractor_ClassNew(); }


static PyObject *
PyvtkXRenderWindowInteractor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXRenderWindowInteractor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXRenderWindowInteractor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXRenderWindowInteractor *tempr = vtkXRenderWindowInteractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXRenderWindowInteractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXRenderWindowInteractor::NewInstance());

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
PyvtkXRenderWindowInteractor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXRenderWindowInteractor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXRenderWindowInteractor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkXRenderWindowInteractor::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_TerminateApp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateApp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TerminateApp();
    }
    else
    {
      op->vtkXRenderWindowInteractor::TerminateApp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEvents();
    }
    else
    {
      op->vtkXRenderWindowInteractor::ProcessEvents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Enable();
    }
    else
    {
      op->vtkXRenderWindowInteractor::Enable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Disable();
    }
    else
    {
      op->vtkXRenderWindowInteractor::Disable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_UpdateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->UpdateSize(temp0, temp1);
    }
    else
    {
      op->vtkXRenderWindowInteractor::UpdateSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXRenderWindowInteractor_GetMousePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMousePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXRenderWindowInteractor *op = static_cast<vtkXRenderWindowInteractor *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetMousePosition(temp0, temp1);
    }
    else
    {
      op->vtkXRenderWindowInteractor::GetMousePosition(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXRenderWindowInteractor_Methods[] = {
  {"IsTypeOf", PyvtkXRenderWindowInteractor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXRenderWindowInteractor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXRenderWindowInteractor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXRenderWindowInteractor\nC++: static vtkXRenderWindowInteractor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXRenderWindowInteractor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXRenderWindowInteractor\nC++: vtkXRenderWindowInteractor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXRenderWindowInteractor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXRenderWindowInteractor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkXRenderWindowInteractor_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitializes the event handlers without an XtAppContext.  This is\ngood for when you don't have a user interface, but you still want\nto have mouse interaction.\n"},
  {"TerminateApp", PyvtkXRenderWindowInteractor_TerminateApp, METH_VARARGS,
   "TerminateApp(self) -> None\nC++: void TerminateApp() override;\n\nBreak the event loop on 'q','e' keypress. Want more ???\n"},
  {"ProcessEvents", PyvtkXRenderWindowInteractor_ProcessEvents, METH_VARARGS,
   "ProcessEvents(self) -> None\nC++: void ProcessEvents() override;\n\nProcess all user-interaction, timer events and return. If there\nare no events, this method returns immediately.\n"},
  {"Enable", PyvtkXRenderWindowInteractor_Enable, METH_VARARGS,
   "Enable(self) -> None\nC++: void Enable() override;\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {"Disable", PyvtkXRenderWindowInteractor_Disable, METH_VARARGS,
   "Disable(self) -> None\nC++: void Disable() override;\n\n"},
  {"UpdateSize", PyvtkXRenderWindowInteractor_UpdateSize, METH_VARARGS,
   "UpdateSize(self, __a:int, __b:int) -> None\nC++: void UpdateSize(int, int) override;\n\nUpdate the Size data member and set the associated RenderWindow's\nsize.\n"},
  {"GetMousePosition", PyvtkXRenderWindowInteractor_GetMousePosition, METH_VARARGS,
   "GetMousePosition(self, x:[int, ...], y:[int, ...]) -> None\nC++: void GetMousePosition(int *x, int *y) override;\n\nRe-defines virtual function to get mouse position by querying\nX-server.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXRenderWindowInteractor_Doc =
  "vtkXRenderWindowInteractor - an X event driven interface for a\nRenderWindow\n\n"
  "Superclass: vtkRenderWindowInteractor\n\n"
  "vtkXRenderWindowInteractor is a convenience object that provides\n"
  "event bindings to common graphics functions. For example, camera and\n"
  "actor functions such as zoom-in/zoom-out, azimuth, roll, and pan. IT\n"
  "is one of the window system specific subclasses of\n"
  "vtkRenderWindowInteractor. Please see vtkRenderWindowInteractor\n"
  "documentation for event bindings.\n\n"
  "@sa\n"
  "vtkRenderWindowInteractor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXRenderWindowInteractor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingUI.vtkXRenderWindowInteractor", // tp_name
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
  PyvtkXRenderWindowInteractor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXRenderWindowInteractor_StaticNew()
{
  return vtkXRenderWindowInteractor::New();
}

PyObject *PyvtkXRenderWindowInteractor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXRenderWindowInteractor_Type, PyvtkXRenderWindowInteractor_Methods,
    "vtkXRenderWindowInteractor",
 &PyvtkXRenderWindowInteractor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRenderWindowInteractor");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXRenderWindowInteractor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXRenderWindowInteractor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXRenderWindowInteractor", o) != 0)
  {
    Py_DECREF(o);
  }

}

