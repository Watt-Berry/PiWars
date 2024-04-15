// python wrapper for vtkOutputWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOutputWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOutputWindow(PyObject *dict); }
static PyMethodDef PyvtkOutputWindowCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkOutputWindowCleanup_vtkOutputWindowCleanup(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkOutputWindowCleanup."
    " (" "`vtkOutputWindowCleanup` is no longer necessary" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(args, "vtkOutputWindowCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOutputWindowCleanup *op = new vtkOutputWindowCleanup();

    result = PyVTKSpecialObject_New("vtkOutputWindowCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkOutputWindowCleanup_vtkOutputWindowCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkOutputWindowCleanup_Doc =

  "vtkOutputWindowCleanup() -> vtkOutputWindowCleanup\nC++: vtkOutputWindowCleanup()\n""\n"
  "vtkOutputWindowCleanup - no description provided.\n\n"
;

static PyObject *
PyvtkOutputWindowCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkOutputWindowCleanup_vtkOutputWindowCleanup(nullptr, args);
}

static void PyvtkOutputWindowCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkOutputWindowCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkOutputWindowCleanup_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOutputWindowCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkOutputWindowCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkOutputWindowCleanup_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkOutputWindowCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkOutputWindowCleanup_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkOutputWindowCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkOutputWindowCleanup_TypeNew
extern "C" { PyObject *PyvtkOutputWindowCleanup_TypeNew(); }
#define DECLARED_PyvtkOutputWindowCleanup_TypeNew
#endif

PyObject *PyvtkOutputWindowCleanup_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkOutputWindowCleanup_Type,
    PyvtkOutputWindowCleanup_Methods,
    PyvtkOutputWindowCleanup_vtkOutputWindowCleanup_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkOutputWindow_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOutputWindow_DisplayModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkOutputWindow.DisplayModes", // tp_name
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
PyObject *PyvtkOutputWindow_DisplayModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOutputWindow_DisplayModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOutputWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOutputWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutputWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOutputWindow *tempr = vtkOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutputWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutputWindow::NewInstance());

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
PyvtkOutputWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOutputWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOutputWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOutputWindow *tempr = vtkOutputWindow::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetInstance");

  vtkOutputWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOutputWindow"))
  {
    vtkOutputWindow::SetInstance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayErrorText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayErrorText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayErrorText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayErrorText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayWarningText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayWarningText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayGenericWarningText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayGenericWarningText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayGenericWarningText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayGenericWarningText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_DisplayDebugText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayDebugText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisplayDebugText(temp0);
    }
    else
    {
      op->vtkOutputWindow::DisplayDebugText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_PromptUserOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromptUserOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PromptUserOn();
    }
    else
    {
      op->vtkOutputWindow::PromptUserOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_PromptUserOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PromptUserOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PromptUserOff();
    }
    else
    {
      op->vtkOutputWindow::PromptUserOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetPromptUser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPromptUser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPromptUser(temp0);
    }
    else
    {
      op->vtkOutputWindow::SetPromptUser(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayMode(temp0);
    }
    else
    {
      op->vtkOutputWindow::SetDisplayMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_GetDisplayModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayModeMinValue() :
      op->vtkOutputWindow::GetDisplayModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_GetDisplayModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayModeMaxValue() :
      op->vtkOutputWindow::GetDisplayModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_GetDisplayMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayMode() :
      op->vtkOutputWindow::GetDisplayMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetDisplayModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayModeToDefault();
    }
    else
    {
      op->vtkOutputWindow::SetDisplayModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetDisplayModeToNever(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayModeToNever");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayModeToNever();
    }
    else
    {
      op->vtkOutputWindow::SetDisplayModeToNever();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetDisplayModeToAlways(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayModeToAlways");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayModeToAlways();
    }
    else
    {
      op->vtkOutputWindow::SetDisplayModeToAlways();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutputWindow_SetDisplayModeToAlwaysStdErr(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayModeToAlwaysStdErr");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputWindow *op = static_cast<vtkOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayModeToAlwaysStdErr();
    }
    else
    {
      op->vtkOutputWindow::SetDisplayModeToAlwaysStdErr();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOutputWindow_Methods[] = {
  {"IsTypeOf", PyvtkOutputWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOutputWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOutputWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOutputWindow\nC++: static vtkOutputWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOutputWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOutputWindow\nC++: vtkOutputWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOutputWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOutputWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInstance", PyvtkOutputWindow_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkOutputWindow\nC++: static vtkOutputWindow *GetInstance()\n\nReturn the singleton instance with no reference counting.\n"},
  {"SetInstance", PyvtkOutputWindow_SetInstance, METH_VARARGS,
   "SetInstance(instance:vtkOutputWindow) -> None\nC++: static void SetInstance(vtkOutputWindow *instance)\n\nSupply a user defined output window. Call ->Delete() on the\nsupplied instance after setting it.\n"},
  {"DisplayText", PyvtkOutputWindow_DisplayText, METH_VARARGS,
   "DisplayText(self, __a:str) -> None\nC++: virtual void DisplayText(const char *)\n\nDisplay the text. Four virtual methods exist, depending on the\ntype of message to display. This allows redirection or\nreformatting of the messages. The default implementation uses\nDisplayText for all. Consequently, subclasses can simply override\nDisplayText and use `GetCurrentMessageType` to determine the type\nof message that's being reported.\n"},
  {"DisplayErrorText", PyvtkOutputWindow_DisplayErrorText, METH_VARARGS,
   "DisplayErrorText(self, __a:str) -> None\nC++: virtual void DisplayErrorText(const char *)\n\n"},
  {"DisplayWarningText", PyvtkOutputWindow_DisplayWarningText, METH_VARARGS,
   "DisplayWarningText(self, __a:str) -> None\nC++: virtual void DisplayWarningText(const char *)\n\n"},
  {"DisplayGenericWarningText", PyvtkOutputWindow_DisplayGenericWarningText, METH_VARARGS,
   "DisplayGenericWarningText(self, __a:str) -> None\nC++: virtual void DisplayGenericWarningText(const char *)\n\n"},
  {"DisplayDebugText", PyvtkOutputWindow_DisplayDebugText, METH_VARARGS,
   "DisplayDebugText(self, __a:str) -> None\nC++: virtual void DisplayDebugText(const char *)\n\n"},
  {"PromptUserOn", PyvtkOutputWindow_PromptUserOn, METH_VARARGS,
   "PromptUserOn(self) -> None\nC++: virtual void PromptUserOn()\n\nIf PromptUser is set to true then each time a line of text is\ndisplayed, the user is asked if they want to keep getting\nmessages.\n\nNote that PromptUser has not effect of messages displayed by\ndirectly calling `DisplayText`. The prompt is never shown for\nsuch messages.\n"},
  {"PromptUserOff", PyvtkOutputWindow_PromptUserOff, METH_VARARGS,
   "PromptUserOff(self) -> None\nC++: virtual void PromptUserOff()\n\n"},
  {"SetPromptUser", PyvtkOutputWindow_SetPromptUser, METH_VARARGS,
   "SetPromptUser(self, _arg:bool) -> None\nC++: virtual void SetPromptUser(bool _arg)\n\n"},
  {"SetDisplayMode", PyvtkOutputWindow_SetDisplayMode, METH_VARARGS,
   "SetDisplayMode(self, _arg:int) -> None\nC++: virtual void SetDisplayMode(int _arg)\n\n"},
  {"GetDisplayModeMinValue", PyvtkOutputWindow_GetDisplayModeMinValue, METH_VARARGS,
   "GetDisplayModeMinValue(self) -> int\nC++: virtual int GetDisplayModeMinValue()\n\n"},
  {"GetDisplayModeMaxValue", PyvtkOutputWindow_GetDisplayModeMaxValue, METH_VARARGS,
   "GetDisplayModeMaxValue(self) -> int\nC++: virtual int GetDisplayModeMaxValue()\n\n"},
  {"GetDisplayMode", PyvtkOutputWindow_GetDisplayMode, METH_VARARGS,
   "GetDisplayMode(self) -> int\nC++: virtual int GetDisplayMode()\n\n"},
  {"SetDisplayModeToDefault", PyvtkOutputWindow_SetDisplayModeToDefault, METH_VARARGS,
   "SetDisplayModeToDefault(self) -> None\nC++: void SetDisplayModeToDefault()\n\n"},
  {"SetDisplayModeToNever", PyvtkOutputWindow_SetDisplayModeToNever, METH_VARARGS,
   "SetDisplayModeToNever(self) -> None\nC++: void SetDisplayModeToNever()\n\n"},
  {"SetDisplayModeToAlways", PyvtkOutputWindow_SetDisplayModeToAlways, METH_VARARGS,
   "SetDisplayModeToAlways(self) -> None\nC++: void SetDisplayModeToAlways()\n\n"},
  {"SetDisplayModeToAlwaysStdErr", PyvtkOutputWindow_SetDisplayModeToAlwaysStdErr, METH_VARARGS,
   "SetDisplayModeToAlwaysStdErr(self) -> None\nC++: void SetDisplayModeToAlwaysStdErr()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOutputWindow_Doc =
  "vtkOutputWindow - base class for writing debug output to a console\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to encapsulate all text output, so that it will\n"
  "work with operating systems that have a stdout and stderr, and ones\n"
  "that do not.  (i.e windows does not).  Sub-classes can be provided\n"
  "which can redirect the output to a window.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOutputWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkOutputWindow", // tp_name
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
  PyvtkOutputWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOutputWindow_StaticNew()
{
  return vtkOutputWindow::New();
}

PyObject *PyvtkOutputWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOutputWindow_Type, PyvtkOutputWindow_Methods,
    "vtkOutputWindow",
 &PyvtkOutputWindow_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOutputWindow_DisplayModes_Type);
  PyVTKEnum_Add(&PyvtkOutputWindow_DisplayModes_Type, "vtkOutputWindow.DisplayModes");

  o = (PyObject *)&PyvtkOutputWindow_DisplayModes_Type;
  if (PyDict_SetItemString(d, "DisplayModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkOutputWindow::DisplayModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "DEFAULT", vtkOutputWindow::DEFAULT },
        { "NEVER", vtkOutputWindow::NEVER },
        { "ALWAYS", vtkOutputWindow::ALWAYS },
        { "ALWAYS_STDERR", vtkOutputWindow::ALWAYS_STDERR },
      };

    o = PyvtkOutputWindow_DisplayModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOutputWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOutputWindowCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkOutputWindowCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkOutputWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOutputWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

