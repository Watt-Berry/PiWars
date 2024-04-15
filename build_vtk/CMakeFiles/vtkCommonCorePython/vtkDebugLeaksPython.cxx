// python wrapper for vtkDebugLeaks
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDebugLeaks.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDebugLeaks(PyObject *dict); }
extern "C" { PyObject *PyvtkDebugLeaks_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkDebugLeaks_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDebugLeaks::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDebugLeaks::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDebugLeaks *tempr = vtkDebugLeaks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDebugLeaks *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDebugLeaks::NewInstance());

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
PyvtkDebugLeaks_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDebugLeaks::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDebugLeaks *op = static_cast<vtkDebugLeaks *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDebugLeaks::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_ConstructClass_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstructClass");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDebugLeaks::ConstructClass(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDebugLeaks_ConstructClass_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConstructClass");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDebugLeaks::ConstructClass(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDebugLeaks_ConstructClass_Methods[] = {
  {"ConstructClass", PyvtkDebugLeaks_ConstructClass_s1, METH_VARARGS | METH_STATIC,
   "V *vtkObjectBase"},
  {"ConstructClass", PyvtkDebugLeaks_ConstructClass_s2, METH_VARARGS | METH_STATIC,
   "z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDebugLeaks_ConstructClass(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDebugLeaks_ConstructClass_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConstructClass");
  return nullptr;
}


static PyObject *
PyvtkDebugLeaks_DestructClass_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DestructClass");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDebugLeaks::DestructClass(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDebugLeaks_DestructClass_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DestructClass");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDebugLeaks::DestructClass(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDebugLeaks_DestructClass_Methods[] = {
  {"DestructClass", PyvtkDebugLeaks_DestructClass_s1, METH_VARARGS | METH_STATIC,
   "V *vtkObjectBase"},
  {"DestructClass", PyvtkDebugLeaks_DestructClass_s2, METH_VARARGS | METH_STATIC,
   "z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDebugLeaks_DestructClass(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDebugLeaks_DestructClass_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DestructClass");
  return nullptr;
}


static PyObject *
PyvtkDebugLeaks_PrintCurrentLeaks(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PrintCurrentLeaks");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkDebugLeaks::PrintCurrentLeaks();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_GetExitError(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetExitError");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkDebugLeaks::GetExitError();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaks_SetExitError(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExitError");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDebugLeaks::SetExitError(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDebugLeaks_Methods[] = {
  {"IsTypeOf", PyvtkDebugLeaks_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDebugLeaks_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDebugLeaks_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDebugLeaks\nC++: static vtkDebugLeaks *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDebugLeaks_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDebugLeaks\nC++: vtkDebugLeaks *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDebugLeaks_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDebugLeaks_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ConstructClass", PyvtkDebugLeaks_ConstructClass, METH_VARARGS,
   "ConstructClass(object:vtkObjectBase) -> None\nC++: static void ConstructClass(vtkObjectBase *object)\nConstructClass(className:str) -> None\nC++: static void ConstructClass(const char *className)\n\nCall this when creating a class.\n"},
  {"DestructClass", PyvtkDebugLeaks_DestructClass, METH_VARARGS,
   "DestructClass(object:vtkObjectBase) -> None\nC++: static void DestructClass(vtkObjectBase *object)\nDestructClass(className:str) -> None\nC++: static void DestructClass(const char *className)\n\nCall this when deleting a class.\n"},
  {"PrintCurrentLeaks", PyvtkDebugLeaks_PrintCurrentLeaks, METH_VARARGS,
   "PrintCurrentLeaks() -> int\nC++: static int PrintCurrentLeaks()\n\nPrint all the values in the table.  Returns non-zero if there\nwere leaks.\n"},
  {"GetExitError", PyvtkDebugLeaks_GetExitError, METH_VARARGS,
   "GetExitError() -> int\nC++: static int GetExitError()\n\nGet/Set flag for exiting with an error when leaks are present.\nDefault is on when VTK_DEBUG_LEAKS is on and off otherwise.\n"},
  {"SetExitError", PyvtkDebugLeaks_SetExitError, METH_VARARGS,
   "SetExitError(__a:int) -> None\nC++: static void SetExitError(int)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDebugLeaks_Doc =
  "vtkDebugLeaks - identify memory leaks at program termination\nvtkDebugLeaks is used to report memory leaks at the exit of the\nprogram.\n\n"
  "Superclass: vtkObject\n\n"
  "It uses vtkObjectBase::InitializeObjectBase() (called via\n"
  "vtkObjectFactory macros) to intercept the construction of all VTK\n"
  "objects. It uses the UnRegisterInternal method of vtkObjectBase to\n"
  "intercept the destruction of all objects.\n\n"
  "If not using the vtkObjectFactory macros to implement New(), be sure\n"
  "to call vtkObjectBase::InitializeObjectBase() explicitly on the\n"
  "constructed instance. The rule of thumb is that wherever \"new [some\n"
  "vtkObjectBase subclass]\" is called,\n"
  "vtkObjectBase::InitializeObjectBase() must be called as well.\n\n"
  "There are exceptions to this:\n\n"
  "- vtkCommand subclasses traditionally do not fully participate in\n"
  "  vtkDebugLeaks registration, likely because they typically do not\n"
  "  use vtkTypeMacro to configure GetClassName. InitializeObjectBase\n"
  "  should not be called on vtkCommand subclasses, and all such classes\n"
  "will be automatically registered with vtkDebugLeaks as \"vtkCommand or\n"
  "  subclass\".\n\n"
  "- vtkInformationKey subclasses are not reference counted. They are\n"
  "  allocated statically and registered automatically with a singleton\n"
  "  \"manager\" instance. The manager ensures that all keys are cleaned\n"
  "  up before exiting, and registration/deregistration with\n"
  "  vtkDebugLeaks is bypassed.\n\n"
  "A table of object name to number of instances is kept. At the exit of\n"
  "the program if there are still VTK objects around it will print them\n"
  "out. To enable this class add the flag -DVTK_DEBUG_LEAKS to the\n"
  "compile line, and rebuild vtkObject and vtkObjectFactory.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDebugLeaks_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkDebugLeaks", // tp_name
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
  PyvtkDebugLeaks_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDebugLeaks_StaticNew()
{
  return vtkDebugLeaks::New();
}

PyObject *PyvtkDebugLeaks_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDebugLeaks_Type, PyvtkDebugLeaks_Methods,
    "vtkDebugLeaks",
 &PyvtkDebugLeaks_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkDebugLeaksObserver_ConstructingObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConstructingObject");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDebugLeaksObserver *op = static_cast<vtkDebugLeaksObserver *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    op->ConstructingObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDebugLeaksObserver_DestructingObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DestructingObject");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkDebugLeaksObserver *op = static_cast<vtkDebugLeaksObserver *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    op->DestructingObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDebugLeaksObserver_Methods[] = {
  {"ConstructingObject", PyvtkDebugLeaksObserver_ConstructingObject, METH_VARARGS,
   "ConstructingObject(self, __a:vtkObjectBase) -> None\nC++: virtual void ConstructingObject(vtkObjectBase *)\n\n"},
  {"DestructingObject", PyvtkDebugLeaksObserver_DestructingObject, METH_VARARGS,
   "DestructingObject(self, __a:vtkObjectBase) -> None\nC++: virtual void DestructingObject(vtkObjectBase *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkDebugLeaksObserver_Doc =
  "vtkDebugLeaksObserver - no description provided.\n\n"
;

static PyObject *
PyvtkDebugLeaksObserver_New(PyTypeObject * /*unused*/, PyObject * /*unused*/, PyObject * /*unused*/)
{
  PyErr_SetString(PyExc_TypeError,
                  "this class cannot be instantiated");

  return nullptr;
}

static void PyvtkDebugLeaksObserver_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkDebugLeaksObserver *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkDebugLeaksObserver_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDebugLeaksObserver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkDebugLeaksObserver", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkDebugLeaksObserver_Delete, // tp_dealloc
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
  PyvtkDebugLeaksObserver_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkDebugLeaksObserver_Doc, // tp_doc
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
  PyvtkDebugLeaksObserver_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkDebugLeaksObserver_TypeNew
extern "C" { PyObject *PyvtkDebugLeaksObserver_TypeNew(); }
#define DECLARED_PyvtkDebugLeaksObserver_TypeNew
#endif

PyObject *PyvtkDebugLeaksObserver_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkDebugLeaksObserver_Type,
    PyvtkDebugLeaksObserver_Methods,
    nullptr,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDebugLeaks(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDebugLeaks_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDebugLeaks", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDebugLeaksObserver_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkDebugLeaksObserver", o) != 0)
  {
    Py_DECREF(o);
  }

}

