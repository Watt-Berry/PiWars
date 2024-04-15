// python wrapper for vtkObjectBase
//
#define VTK_WRAPPING_CXX
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObjectBase(PyObject *dict); }
extern "C" { PyObject *PyvtkObjectBase_ClassNew(); }

static PyObject *
PyvtkObjectBase_GetAddressAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddressAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  const char *temp0;
  char tempr[256];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    snprintf(tempr, sizeof(tempr), "Addr=%p", static_cast<void*>(op));

    result = ap.BuildValue(tempr);
  }

  return result;
}

static PyObject *
PyvtkObjectBase_Register(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Register");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    if (!PyVTKObject_Check(self) ||
        (PyVTKObject_GetFlags(self) & VTK_PYTHON_IGNORE_UNREGISTER) == 0)
    {
      if (ap.IsBound())
      {
        op->Register(temp0);
      }
      else
      {
        op->vtkObjectBase::Register(temp0);
      }
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkObjectBase_UnRegister(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnRegister");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    if (!PyVTKObject_Check(self) ||
        (PyVTKObject_GetFlags(self) & VTK_PYTHON_IGNORE_UNREGISTER) == 0)
    {
      if (ap.IsBound())
      {
        op->UnRegister(temp0);
      }
      else
      {
        op->vtkObjectBase::UnRegister(temp0);
      }
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetClassName() :
      op->vtkObjectBase::GetClassName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetObjectDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObjectDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetObjectDescription() :
      op->vtkObjectBase::GetObjectDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObjectBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObjectBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkObjectBase::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkObjectBase::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_FastDelete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastDelete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastDelete();
    }
    else
    {
      op->vtkObjectBase::FastDelete();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_InitializeObjectBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeObjectBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeObjectBase();
    }
    else
    {
      op->vtkObjectBase::InitializeObjectBase();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkObjectBase::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReferenceCount() :
      op->vtkObjectBase::GetReferenceCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_SetReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceCount(temp0);
    }
    else
    {
      op->vtkObjectBase::SetReferenceCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_SetMemkindDirectory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMemkindDirectory");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkObjectBase::SetMemkindDirectory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetUsingMemkind(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUsingMemkind");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkObjectBase::GetUsingMemkind();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectBase_GetIsInMemkind(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsInMemkind");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectBase *op = static_cast<vtkObjectBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsInMemkind() :
      op->vtkObjectBase::GetIsInMemkind());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkObjectBase_Methods[] = {
  {"GetClassName", PyvtkObjectBase_GetClassName, METH_VARARGS,
   "GetClassName(self) -> str\nC++: const char *GetClassName()\n\nReturn the class name as a string.\n"},
  {"GetObjectDescription", PyvtkObjectBase_GetObjectDescription, METH_VARARGS,
   "GetObjectDescription(self) -> str\nC++: virtual std::string GetObjectDescription()\n\nThe object description printed in messages and PrintSelf output.\nTo be used only for reporting purposes.\n"},
  {"IsTypeOf", PyvtkObjectBase_IsTypeOf, METH_VARARGS,
   "IsTypeOf(name:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *name)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkObjectBase_IsA, METH_VARARGS,
   "IsA(self, name:str) -> int\nC++: virtual vtkTypeBool IsA(const char *name)\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkObjectBase_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(name:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *name)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkObjectBase_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, name:str) -> int\nC++: virtual vtkIdType GetNumberOfGenerationsFromBase(\n    const char *name)\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FastDelete", PyvtkObjectBase_FastDelete, METH_VARARGS,
   "FastDelete(self) -> None\nC++: virtual void FastDelete()\n\nDelete a reference to this object.  This version will not invoke\ngarbage collection and can potentially leak the object if it is\npart of a reference loop.  Use this method only when it is known\nthat the object has another reference and would not be collected\nif a full garbage collection check were done.\n"},
  {"InitializeObjectBase", PyvtkObjectBase_InitializeObjectBase, METH_VARARGS,
   "InitializeObjectBase(self) -> None\nC++: void InitializeObjectBase()\n\n"},
  {"UsesGarbageCollector", PyvtkObjectBase_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: virtual bool UsesGarbageCollector()\n\nIndicate whether the class uses `vtkGarbageCollector` or not.\n\nMost classes will not need to do this, but if the class\nparticipates in a strongly-connected reference count cycle,\nparticipation can resolve these cycles.\n\nIf overriding this method to return true, the `ReportReferences`\nmethod should be overridden to report references that may be in\ncycles.\n"},
  {"GetReferenceCount", PyvtkObjectBase_GetReferenceCount, METH_VARARGS,
   "GetReferenceCount(self) -> int\nC++: int GetReferenceCount()\n\nReturn the current reference count of this object.\n"},
  {"SetReferenceCount", PyvtkObjectBase_SetReferenceCount, METH_VARARGS,
   "SetReferenceCount(self, __a:int) -> None\nC++: void SetReferenceCount(int)\n\nSets the reference count. (This is very dangerous, use with\ncare.)\n"},
  {"SetMemkindDirectory", PyvtkObjectBase_SetMemkindDirectory, METH_VARARGS,
   "SetMemkindDirectory(directoryname:str) -> None\nC++: static void SetMemkindDirectory(const char *directoryname)\n\nThe name of a directory, ideally mounted -o dax, to memory map an\nextended memory space within. This must be called before any\nobjects are constructed in the extended space. It can not be\nchanged once setup.\n"},
  {"GetUsingMemkind", PyvtkObjectBase_GetUsingMemkind, METH_VARARGS,
   "GetUsingMemkind() -> bool\nC++: static bool GetUsingMemkind()\n\nA global state flag that controls whether vtkObjects are\nconstructed in the usual way (the default) or within the extended\nmemory space.\n"},
  {"GetIsInMemkind", PyvtkObjectBase_GetIsInMemkind, METH_VARARGS,
   "GetIsInMemkind(self) -> bool\nC++: bool GetIsInMemkind()\n\nA local state flag that remembers whether this object lives in\nthe normal or extended memory space.\n"},
  {"GetAddressAsString",  PyvtkObjectBase_GetAddressAsString, 1,
   "GetAddressAsString(self, classname:str) -> str\n\nGet address of C++ object in format 'Addr=%p' after casting to\nthe specified type.  This method is obsolete, you can get the\nsame information from o.__this__."},
  {"Register", PyvtkObjectBase_Register, 1,
   "Register(self, o:vtkObjectBase)\nC++: virtual void Register(vtkObjectBase *o)\n\nIncrease the reference count by 1.\n"},
  {"UnRegister", PyvtkObjectBase_UnRegister, 1,
   "UnRegister(self, o:vtkObjectBase)\nC++: virtual void UnRegister(vtkObjectBase* o)\n\nDecrease the reference count (release by another object). This\nhas the same effect as invoking Delete() (i.e., it reduces the\nreference count by 1).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkObjectBase_Doc =
  "vtkObjectBase - abstract base class for most VTK objects\n\n"
  "vtkObjectBase is the base class for all reference counted classes in\n"
  "the VTK. These classes include vtkCommand classes, vtkInformationKey\n"
  "classes, and vtkObject classes.\n\n"
  "vtkObjectBase performs reference counting: objects that are reference\n"
  "counted exist as long as another object uses them. Once the last\n"
  "reference to a reference counted object is removed, the object will\n"
  "spontaneously destruct.\n\n"
  "Constructor and destructor of the subclasses of vtkObjectBase should\n"
  "be protected, so that only New() and UnRegister() actually call them.\n"
  "Debug leaks can be used to see if there are any objects left with\n"
  "nonzero reference count.\n\n"
  "@warning\n"
  "Note: Objects of subclasses of vtkObjectBase should always be created\n"
  "with the New() method and deleted with the Delete() method. They\n"
  "cannot be allocated off the stack (i.e., automatic objects) because\n"
  "the constructor is a protected method.\n\n"
  "@sa\n"
  "vtkObject vtkCommand vtkInformationKey\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkObjectBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkObjectBase", // tp_name
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
  PyvtkObjectBase_Doc, // tp_doc
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

static vtkObjectBase *PyvtkObjectBase_StaticNew()
{
  return vtkObjectBase::New();
}

PyObject *PyvtkObjectBase_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkObjectBase_Type, PyvtkObjectBase_Methods,
    "vtkObjectBase",
 &PyvtkObjectBase_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkObjectBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObjectBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObjectBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

