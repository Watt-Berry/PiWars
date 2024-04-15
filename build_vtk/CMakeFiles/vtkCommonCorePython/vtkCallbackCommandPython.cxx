// python wrapper for vtkCallbackCommand
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkCallbackCommand.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCallbackCommand(PyObject *dict); }
extern "C" { PyObject *PyvtkCallbackCommand_ClassNew(); }

#ifndef DECLARED_PyvtkCommand_ClassNew
extern "C" { PyObject *PyvtkCommand_ClassNew(); }
#define DECLARED_PyvtkCommand_ClassNew
#endif

static PyObject *
PyvtkCallbackCommand_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCallbackCommand::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCallbackCommand::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCallbackCommand *tempr = vtkCallbackCommand::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCallbackCommand *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCallbackCommand::NewInstance());

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
PyvtkCallbackCommand_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCallbackCommand::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCallbackCommand::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->Execute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCallbackCommand::Execute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkCallbackCommand_SetClientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetClientData(temp0);
    }
    else
    {
      op->vtkCallbackCommand::SetClientData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkCallbackCommand_GetClientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetClientData() :
      op->vtkCallbackCommand::GetClientData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_SetAbortFlagOnExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbortFlagOnExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbortFlagOnExecute(temp0);
    }
    else
    {
      op->vtkCallbackCommand::SetAbortFlagOnExecute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_GetAbortFlagOnExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbortFlagOnExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAbortFlagOnExecute() :
      op->vtkCallbackCommand::GetAbortFlagOnExecute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_AbortFlagOnExecuteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOnExecuteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortFlagOnExecuteOn();
    }
    else
    {
      op->vtkCallbackCommand::AbortFlagOnExecuteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCallbackCommand_AbortFlagOnExecuteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AbortFlagOnExecuteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCallbackCommand *op = static_cast<vtkCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AbortFlagOnExecuteOff();
    }
    else
    {
      op->vtkCallbackCommand::AbortFlagOnExecuteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCallbackCommand_Methods[] = {
  {"IsTypeOf", PyvtkCallbackCommand_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCallbackCommand_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCallbackCommand_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCallbackCommand\nC++: static vtkCallbackCommand *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCallbackCommand_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCallbackCommand\nC++: vtkCallbackCommand *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCallbackCommand_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCallbackCommand_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Execute", PyvtkCallbackCommand_Execute, METH_VARARGS,
   "Execute(self, caller:vtkObject, eid:int, callData:Pointer) -> None\nC++: void Execute(vtkObject *caller, unsigned long eid,\n    void *callData) override;\n\nSatisfy the superclass API for callbacks. Recall that the caller\nis the instance invoking the event; eid is the event id (see\nvtkCommand.h); and calldata is information sent when the callback\nwas invoked (e.g., progress value in the\nvtkCommand::ProgressEvent).\n"},
  {"SetClientData", PyvtkCallbackCommand_SetClientData, METH_VARARGS,
   "SetClientData(self, cd:Pointer) -> None\nC++: virtual void SetClientData(void *cd)\n\nMethods to set and get client and callback information, and the\ncallback function.\n"},
  {"GetClientData", PyvtkCallbackCommand_GetClientData, METH_VARARGS,
   "GetClientData(self) -> Pointer\nC++: virtual void *GetClientData()\n\n"},
  {"SetAbortFlagOnExecute", PyvtkCallbackCommand_SetAbortFlagOnExecute, METH_VARARGS,
   "SetAbortFlagOnExecute(self, f:int) -> None\nC++: void SetAbortFlagOnExecute(int f)\n\nSet/Get the abort flag on execute. If this is set to true the\nAbortFlag will be set to On automatically when the Execute method\nis triggered *and* a callback is set.\n"},
  {"GetAbortFlagOnExecute", PyvtkCallbackCommand_GetAbortFlagOnExecute, METH_VARARGS,
   "GetAbortFlagOnExecute(self) -> int\nC++: int GetAbortFlagOnExecute()\n\n"},
  {"AbortFlagOnExecuteOn", PyvtkCallbackCommand_AbortFlagOnExecuteOn, METH_VARARGS,
   "AbortFlagOnExecuteOn(self) -> None\nC++: void AbortFlagOnExecuteOn()\n\n"},
  {"AbortFlagOnExecuteOff", PyvtkCallbackCommand_AbortFlagOnExecuteOff, METH_VARARGS,
   "AbortFlagOnExecuteOff(self) -> None\nC++: void AbortFlagOnExecuteOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCallbackCommand_Doc =
  "vtkCallbackCommand - supports function callbacks\n\n"
  "Superclass: vtkCommand\n\n"
  "Use vtkCallbackCommand for generic function callbacks. That is, this\n"
  "class can be used when you wish to execute a function (of the\n"
  "signature described below) using the Command/Observer design pattern\n"
  "in VTK. The callback function should have the form\n\n"
  "void func(vtkObject*, unsigned long eid, void* clientdata, void\n"
  "*calldata)  where the parameter vtkObject* is the object invoking the\n"
  "event; eid is the event id (see vtkCommand.h); clientdata is special\n"
  "data that should is associated with this instance of\n"
  "vtkCallbackCommand; and calldata is data that the\n"
  "vtkObject::InvokeEvent() may send with the callback. For example, the\n"
  "invocation of the ProgressEvent sends along the progress value as\n"
  "calldata.\n\n"
  "@sa\n"
  "vtkCommand vtkOldStyleCallbackCommand\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCallbackCommand_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkCallbackCommand", // tp_name
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
  PyvtkCallbackCommand_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCallbackCommand_StaticNew()
{
  return vtkCallbackCommand::New();
}

PyObject *PyvtkCallbackCommand_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCallbackCommand_Type, PyvtkCallbackCommand_Methods,
    "vtkCallbackCommand",
 &PyvtkCallbackCommand_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCommand_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCallbackCommand(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCallbackCommand_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCallbackCommand", o) != 0)
  {
    Py_DECREF(o);
  }

}

