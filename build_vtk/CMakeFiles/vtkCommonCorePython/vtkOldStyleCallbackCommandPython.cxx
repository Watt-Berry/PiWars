// python wrapper for vtkOldStyleCallbackCommand
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkOldStyleCallbackCommand.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOldStyleCallbackCommand(PyObject *dict); }
extern "C" { PyObject *PyvtkOldStyleCallbackCommand_ClassNew(); }

#ifndef DECLARED_PyvtkCommand_ClassNew
extern "C" { PyObject *PyvtkCommand_ClassNew(); }
#define DECLARED_PyvtkCommand_ClassNew
#endif

static PyObject *
PyvtkOldStyleCallbackCommand_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOldStyleCallbackCommand::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOldStyleCallbackCommand_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOldStyleCallbackCommand::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOldStyleCallbackCommand_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOldStyleCallbackCommand *tempr = vtkOldStyleCallbackCommand::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOldStyleCallbackCommand_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOldStyleCallbackCommand *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOldStyleCallbackCommand::NewInstance());

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
PyvtkOldStyleCallbackCommand_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOldStyleCallbackCommand::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOldStyleCallbackCommand_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOldStyleCallbackCommand::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOldStyleCallbackCommand_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

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
      op->vtkOldStyleCallbackCommand::Execute(temp0, temp1, temp2);
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
PyvtkOldStyleCallbackCommand_SetClientData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOldStyleCallbackCommand *op = static_cast<vtkOldStyleCallbackCommand *>(vp);

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
      op->vtkOldStyleCallbackCommand::SetClientData(temp0);
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

static PyMethodDef PyvtkOldStyleCallbackCommand_Methods[] = {
  {"IsTypeOf", PyvtkOldStyleCallbackCommand_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOldStyleCallbackCommand_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOldStyleCallbackCommand_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOldStyleCallbackCommand\nC++: static vtkOldStyleCallbackCommand *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOldStyleCallbackCommand_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOldStyleCallbackCommand\nC++: vtkOldStyleCallbackCommand *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOldStyleCallbackCommand_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOldStyleCallbackCommand_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Execute", PyvtkOldStyleCallbackCommand_Execute, METH_VARARGS,
   "Execute(self, invoker:vtkObject, eid:int, calldata:Pointer)\n    -> None\nC++: void Execute(vtkObject *invoker, unsigned long eid,\n    void *calldata) override;\n\nSatisfy the superclass API for callbacks.\n"},
  {"SetClientData", PyvtkOldStyleCallbackCommand_SetClientData, METH_VARARGS,
   "SetClientData(self, cd:Pointer) -> None\nC++: void SetClientData(void *cd)\n\nMethods to set and get client and callback information.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOldStyleCallbackCommand_Doc =
  "vtkOldStyleCallbackCommand - supports legacy function callbacks for\nVTK\n\n"
  "Superclass: vtkCommand\n\n"
  "vtkOldStyleCallbackCommand is a callback that supports the legacy\n"
  "callback methods found in VTK. For example, the legacy method\n"
  "vtkProcessObject::SetStartMethod() is actually invoked using the\n"
  "command/observer design pattern of VTK, and the\n"
  "vtkOldStyleCallbackCommand is used to provide the legacy\n"
  "functionality. The callback function should have the form void\n"
  "func(void *clientdata), where clientdata is special data that should\n"
  "is associated with this instance of vtkCallbackCommand.\n\n"
  "@warning\n"
  "This is legacy glue. Please do not use; it will be eventually\n"
  "eliminated.\n\n"
  "@sa\n"
  "vtkCommand vtkCallbackCommand\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOldStyleCallbackCommand_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkOldStyleCallbackCommand", // tp_name
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
  PyvtkOldStyleCallbackCommand_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOldStyleCallbackCommand_StaticNew()
{
  return vtkOldStyleCallbackCommand::New();
}

PyObject *PyvtkOldStyleCallbackCommand_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOldStyleCallbackCommand_Type, PyvtkOldStyleCallbackCommand_Methods,
    "vtkOldStyleCallbackCommand",
 &PyvtkOldStyleCallbackCommand_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCommand_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOldStyleCallbackCommand(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOldStyleCallbackCommand_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOldStyleCallbackCommand", o) != 0)
  {
    Py_DECREF(o);
  }

}

