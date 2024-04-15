// python wrapper for vtkCriticalSection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCriticalSection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCriticalSection(PyObject *dict); }
extern "C" { PyObject *PyvtkCriticalSection_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkCriticalSection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCriticalSection."
    " (" "Use std::mutex instead" ")"
    " -- Deprecated since version " "9.1.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCriticalSection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCriticalSection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCriticalSection."
    " (" "Use std::mutex instead" ")"
    " -- Deprecated since version " "9.1.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCriticalSection *tempr = vtkCriticalSection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCriticalSection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCriticalSection::NewInstance());

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
PyvtkCriticalSection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCriticalSection."
    " (" "Use std::mutex instead" ")"
    " -- Deprecated since version " "9.1.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCriticalSection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCriticalSection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_Lock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Lock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Lock();
    }
    else
    {
      op->vtkCriticalSection::Lock();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCriticalSection_Unlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCriticalSection *op = static_cast<vtkCriticalSection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Unlock();
    }
    else
    {
      op->vtkCriticalSection::Unlock();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCriticalSection_Methods[] = {
  {"IsTypeOf", PyvtkCriticalSection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCriticalSection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCriticalSection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCriticalSection\nC++: static vtkCriticalSection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCriticalSection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCriticalSection\nC++: vtkCriticalSection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCriticalSection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCriticalSection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Lock", PyvtkCriticalSection_Lock, METH_VARARGS,
   "Lock(self) -> None\nC++: void Lock()\n\nLock the vtkCriticalSection\n"},
  {"Unlock", PyvtkCriticalSection_Unlock, METH_VARARGS,
   "Unlock(self) -> None\nC++: void Unlock()\n\nUnlock the vtkCriticalSection\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCriticalSection_Doc =
  "vtkCriticalSection - Critical section locking class\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCriticalSection allows the locking of variables which are accessed\n"
  "through different threads.  This header file also defines\n"
  "vtkSimpleCriticalSection which is not a subclass of vtkObject. The\n"
  "API is identical to that of vtkMutexLock, and the behavior is\n"
  "identical as well, except on Windows 9x/NT platforms. The only\n"
  "difference on these platforms is that vtkMutexLock is more flexible,\n"
  "in that it works across processes as well as across threads, but also\n"
  "costs more, in that it evokes a 600-cycle x86 ring transition. The\n"
  "vtkCriticalSection provides a higher-performance equivalent (on\n"
  "Windows) but won't work across processes. Since it is unclear how, in\n"
  "vtk, an object at the vtk level can be shared across processes in the\n"
  "first place, one should use vtkCriticalSection unless one has a very\n"
  "good reason to use vtkMutexLock. If higher-performance equivalents\n"
  "for non-Windows platforms (Irix, SunOS, etc) are discovered, they\n"
  "should replace the implementations in this class\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCriticalSection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkCriticalSection", // tp_name
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
  PyvtkCriticalSection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCriticalSection_StaticNew()
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCriticalSection."
    " (" "Use std::mutex instead" ")"
    " -- Deprecated since version " "9.1.0" ".", 1);

  return vtkCriticalSection::New();
}

PyObject *PyvtkCriticalSection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCriticalSection_Type, PyvtkCriticalSection_Methods,
    "vtkCriticalSection",
 &PyvtkCriticalSection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCriticalSection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCriticalSection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCriticalSection", o) != 0)
  {
    Py_DECREF(o);
  }

}

