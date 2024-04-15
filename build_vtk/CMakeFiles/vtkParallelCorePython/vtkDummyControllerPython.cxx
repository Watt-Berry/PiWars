// python wrapper for vtkDummyController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDummyController.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDummyController(PyObject *dict); }
extern "C" { PyObject *PyvtkDummyController_ClassNew(); }

#ifndef DECLARED_PyvtkMultiProcessController_ClassNew
extern "C" { PyObject *PyvtkMultiProcessController_ClassNew(); }
#define DECLARED_PyvtkMultiProcessController_ClassNew
#endif

static PyObject *
PyvtkDummyController_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDummyController::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDummyController::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDummyController *tempr = vtkDummyController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDummyController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDummyController::NewInstance());

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
PyvtkDummyController_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDummyController::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDummyController::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkDummyController::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDummyController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Finalize(temp0);
    }
    else
    {
      op->vtkDummyController::Finalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDummyController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDummyController_Finalize_s1(self, args);
    case 1:
      return PyvtkDummyController_Finalize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return nullptr;
}


static PyObject *
PyvtkDummyController_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkDummyController::GetLocalProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleMethodExecute();
    }
    else
    {
      op->vtkDummyController::SingleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleMethodExecute();
    }
    else
    {
      op->vtkDummyController::MultipleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateOutputWindow();
    }
    else
    {
      op->vtkDummyController::CreateOutputWindow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_GetRMICommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRMICommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->GetRMICommunicator() :
      op->vtkDummyController::GetRMICommunicator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
  {
    if (ap.IsBound())
    {
      op->SetCommunicator(temp0);
    }
    else
    {
      op->vtkDummyController::SetCommunicator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDummyController_SetRMICommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRMICommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyController *op = static_cast<vtkDummyController *>(vp);

  vtkCommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
  {
    if (ap.IsBound())
    {
      op->SetRMICommunicator(temp0);
    }
    else
    {
      op->vtkDummyController::SetRMICommunicator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDummyController_Methods[] = {
  {"IsTypeOf", PyvtkDummyController_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDummyController_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDummyController_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDummyController\nC++: static vtkDummyController *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDummyController_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDummyController\nC++: vtkDummyController *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDummyController_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDummyController_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Finalize", PyvtkDummyController_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize() override;\nFinalize(self, __a:int) -> None\nC++: void Finalize(int) override;\n\nThis method is for cleaning up. If a subclass needs to clean up\nprocess communication (i.e. MPI) it would over ride this method.\n"},
  {"GetLocalProcessId", PyvtkDummyController_GetLocalProcessId, METH_VARARGS,
   "GetLocalProcessId(self) -> int\nC++: int GetLocalProcessId()\n\nThis method always returns 0.\n"},
  {"SingleMethodExecute", PyvtkDummyController_SingleMethodExecute, METH_VARARGS,
   "SingleMethodExecute(self) -> None\nC++: void SingleMethodExecute() override;\n\nDirectly calls the single method.\n"},
  {"MultipleMethodExecute", PyvtkDummyController_MultipleMethodExecute, METH_VARARGS,
   "MultipleMethodExecute(self) -> None\nC++: void MultipleMethodExecute() override;\n\nDirectly calls multiple method 0.\n"},
  {"CreateOutputWindow", PyvtkDummyController_CreateOutputWindow, METH_VARARGS,
   "CreateOutputWindow(self) -> None\nC++: void CreateOutputWindow() override;\n\nDoes nothing.\n"},
  {"GetRMICommunicator", PyvtkDummyController_GetRMICommunicator, METH_VARARGS,
   "GetRMICommunicator(self) -> vtkCommunicator\nC++: virtual vtkCommunicator *GetRMICommunicator()\n\nIf you don't need any special functionality from the controller,\nyou can swap out the dummy communicator for another one.\n"},
  {"SetCommunicator", PyvtkDummyController_SetCommunicator, METH_VARARGS,
   "SetCommunicator(self, __a:vtkCommunicator) -> None\nC++: virtual void SetCommunicator(vtkCommunicator *)\n\n"},
  {"SetRMICommunicator", PyvtkDummyController_SetRMICommunicator, METH_VARARGS,
   "SetRMICommunicator(self, __a:vtkCommunicator) -> None\nC++: virtual void SetRMICommunicator(vtkCommunicator *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDummyController_Doc =
  "vtkDummyController - Dummy controller for single process applications\n\n"
  "Superclass: vtkMultiProcessController\n\n"
  "This is a dummy controller which can be used by applications which\n"
  "always require a controller but are also compile on systems without\n"
  "threads or mpi.\n"
  "@sa\n"
  "vtkMultiProcessController\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDummyController_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkDummyController", // tp_name
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
  PyvtkDummyController_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDummyController_StaticNew()
{
  return vtkDummyController::New();
}

PyObject *PyvtkDummyController_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDummyController_Type, PyvtkDummyController_Methods,
    "vtkDummyController",
 &PyvtkDummyController_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMultiProcessController_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDummyController(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDummyController_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDummyController", o) != 0)
  {
    Py_DECREF(o);
  }

}

