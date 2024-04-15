// python wrapper for vtkFileOutputWindow
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFileOutputWindow.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFileOutputWindow(PyObject *dict); }
extern "C" { PyObject *PyvtkFileOutputWindow_ClassNew(); }

#ifndef DECLARED_PyvtkOutputWindow_ClassNew
extern "C" { PyObject *PyvtkOutputWindow_ClassNew(); }
#define DECLARED_PyvtkOutputWindow_ClassNew
#endif

static PyObject *
PyvtkFileOutputWindow_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFileOutputWindow::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFileOutputWindow::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFileOutputWindow *tempr = vtkFileOutputWindow::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFileOutputWindow *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFileOutputWindow::NewInstance());

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
PyvtkFileOutputWindow_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFileOutputWindow::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFileOutputWindow::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_DisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

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
      op->vtkFileOutputWindow::DisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkFileOutputWindow::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkFileOutputWindow::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_SetFlush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlush(temp0);
    }
    else
    {
      op->vtkFileOutputWindow::SetFlush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_GetFlush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlush() :
      op->vtkFileOutputWindow::GetFlush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_FlushOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlushOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlushOn();
    }
    else
    {
      op->vtkFileOutputWindow::FlushOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_FlushOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlushOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlushOff();
    }
    else
    {
      op->vtkFileOutputWindow::FlushOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_SetAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppend(temp0);
    }
    else
    {
      op->vtkFileOutputWindow::SetAppend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_GetAppend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppend() :
      op->vtkFileOutputWindow::GetAppend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_AppendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendOn();
    }
    else
    {
      op->vtkFileOutputWindow::AppendOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFileOutputWindow_AppendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileOutputWindow *op = static_cast<vtkFileOutputWindow *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendOff();
    }
    else
    {
      op->vtkFileOutputWindow::AppendOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFileOutputWindow_Methods[] = {
  {"IsTypeOf", PyvtkFileOutputWindow_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFileOutputWindow_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFileOutputWindow_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFileOutputWindow\nC++: static vtkFileOutputWindow *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFileOutputWindow_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFileOutputWindow\nC++: vtkFileOutputWindow *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFileOutputWindow_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFileOutputWindow_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DisplayText", PyvtkFileOutputWindow_DisplayText, METH_VARARGS,
   "DisplayText(self, __a:str) -> None\nC++: void DisplayText(const char *) override;\n\nPut the text into the log file. New lines are converted to\ncarriage return new lines.\n"},
  {"SetFileName", PyvtkFileOutputWindow_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSets the name for the log file.\n"},
  {"GetFileName", PyvtkFileOutputWindow_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetFlush", PyvtkFileOutputWindow_SetFlush, METH_VARARGS,
   "SetFlush(self, _arg:int) -> None\nC++: virtual void SetFlush(vtkTypeBool _arg)\n\nTurns on buffer flushing for the output to the log file.\n"},
  {"GetFlush", PyvtkFileOutputWindow_GetFlush, METH_VARARGS,
   "GetFlush(self) -> int\nC++: virtual vtkTypeBool GetFlush()\n\n"},
  {"FlushOn", PyvtkFileOutputWindow_FlushOn, METH_VARARGS,
   "FlushOn(self) -> None\nC++: virtual void FlushOn()\n\n"},
  {"FlushOff", PyvtkFileOutputWindow_FlushOff, METH_VARARGS,
   "FlushOff(self) -> None\nC++: virtual void FlushOff()\n\n"},
  {"SetAppend", PyvtkFileOutputWindow_SetAppend, METH_VARARGS,
   "SetAppend(self, _arg:int) -> None\nC++: virtual void SetAppend(vtkTypeBool _arg)\n\nSetting append will cause the log file to be opened in append\nmode.  Otherwise, if the log file exists, it will be overwritten\neach time the vtkFileOutputWindow is created.\n"},
  {"GetAppend", PyvtkFileOutputWindow_GetAppend, METH_VARARGS,
   "GetAppend(self) -> int\nC++: virtual vtkTypeBool GetAppend()\n\n"},
  {"AppendOn", PyvtkFileOutputWindow_AppendOn, METH_VARARGS,
   "AppendOn(self) -> None\nC++: virtual void AppendOn()\n\n"},
  {"AppendOff", PyvtkFileOutputWindow_AppendOff, METH_VARARGS,
   "AppendOff(self) -> None\nC++: virtual void AppendOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFileOutputWindow_Doc =
  "vtkFileOutputWindow - File Specific output window class\n\n"
  "Superclass: vtkOutputWindow\n\n"
  "Writes debug/warning/error output to a log file instead of the\n"
  "console. To use this class, instantiate it and then call\n"
  "SetInstance(this).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFileOutputWindow_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkFileOutputWindow", // tp_name
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
  PyvtkFileOutputWindow_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFileOutputWindow_StaticNew()
{
  return vtkFileOutputWindow::New();
}

PyObject *PyvtkFileOutputWindow_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFileOutputWindow_Type, PyvtkFileOutputWindow_Methods,
    "vtkFileOutputWindow",
 &PyvtkFileOutputWindow_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOutputWindow_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFileOutputWindow(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFileOutputWindow_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFileOutputWindow", o) != 0)
  {
    Py_DECREF(o);
  }

}

