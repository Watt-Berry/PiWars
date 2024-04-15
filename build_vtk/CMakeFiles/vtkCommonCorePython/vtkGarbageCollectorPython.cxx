// python wrapper for vtkGarbageCollector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGarbageCollector.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGarbageCollector(PyObject *dict); }
extern "C" { PyObject *PyvtkGarbageCollector_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkGarbageCollector_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGarbageCollector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGarbageCollector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGarbageCollector *op = static_cast<vtkGarbageCollector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGarbageCollector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGarbageCollector_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGarbageCollector *tempr = vtkGarbageCollector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGarbageCollector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGarbageCollector *op = static_cast<vtkGarbageCollector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGarbageCollector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGarbageCollector::NewInstance());

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
PyvtkGarbageCollector_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGarbageCollector::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGarbageCollector_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGarbageCollector *op = static_cast<vtkGarbageCollector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGarbageCollector::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGarbageCollector_Collect_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Collect");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkGarbageCollector::Collect();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGarbageCollector_Collect_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Collect");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGarbageCollector::Collect(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGarbageCollector_Collect(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkGarbageCollector_Collect_s1(self, args);
    case 1:
      return PyvtkGarbageCollector_Collect_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Collect");
  return nullptr;
}


static PyObject *
PyvtkGarbageCollector_DeferredCollectionPush(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeferredCollectionPush");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkGarbageCollector::DeferredCollectionPush();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGarbageCollector_DeferredCollectionPop(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DeferredCollectionPop");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkGarbageCollector::DeferredCollectionPop();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGarbageCollector_SetGlobalDebugFlag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalDebugFlag");

  bool temp0 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkGarbageCollector::SetGlobalDebugFlag(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGarbageCollector_GetGlobalDebugFlag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalDebugFlag");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    bool tempr = vtkGarbageCollector::GetGlobalDebugFlag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGarbageCollector_Methods[] = {
  {"IsTypeOf", PyvtkGarbageCollector_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGarbageCollector_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGarbageCollector_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGarbageCollector\nC++: static vtkGarbageCollector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGarbageCollector_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGarbageCollector\nC++: vtkGarbageCollector *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGarbageCollector_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGarbageCollector_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Collect", PyvtkGarbageCollector_Collect, METH_VARARGS,
   "Collect() -> None\nC++: static void Collect()\nCollect(root:vtkObjectBase) -> None\nC++: static void Collect(vtkObjectBase *root)\n\nCollect immediately using any objects whose collection was\npreviously deferred as a root for the reference graph walk.\nStrongly connected components in the reference graph are\nidentified.  Those with a net reference count of zero are\ndeleted.  When a component is deleted it may remove references to\nother components that are not part of the same reference loop but\nare held by objects in the original component.  These removed\nreferences are handled as any other and their corresponding\nchecks may be deferred.  This method keeps collecting until no\ndeferred collection checks remain.\n"},
  {"DeferredCollectionPush", PyvtkGarbageCollector_DeferredCollectionPush, METH_VARARGS,
   "DeferredCollectionPush() -> None\nC++: static void DeferredCollectionPush()\n\nPush/Pop whether to do deferred collection.  Whenever the total\nnumber of pushes exceeds the total number of pops collection will\nbe deferred.  Code can call the Collect method directly to force\ncollection.\n"},
  {"DeferredCollectionPop", PyvtkGarbageCollector_DeferredCollectionPop, METH_VARARGS,
   "DeferredCollectionPop() -> None\nC++: static void DeferredCollectionPop()\n\n"},
  {"SetGlobalDebugFlag", PyvtkGarbageCollector_SetGlobalDebugFlag, METH_VARARGS,
   "SetGlobalDebugFlag(flag:bool) -> None\nC++: static void SetGlobalDebugFlag(bool flag)\n\nSet/Get global garbage collection debugging flag.  When set to\ntrue, all garbage collection checks will produce debugging\ninformation.\n"},
  {"GetGlobalDebugFlag", PyvtkGarbageCollector_GetGlobalDebugFlag, METH_VARARGS,
   "GetGlobalDebugFlag() -> bool\nC++: static bool GetGlobalDebugFlag()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGarbageCollector_Doc =
  "vtkGarbageCollector - Detect and break reference loops\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGarbageCollector is used by VTK classes that may be involved in\n"
  "reference counting loops (such as Algorithm <-> Executive).  It\n"
  "detects strongly connected components of the reference graph that\n"
  "have been leaked deletes them.  The garbage collector uses the\n"
  "ReportReferences method to search the reference graph and construct a\n"
  "net reference count for each connected component.  If the net\n"
  "reference count is zero the entire set of objects is deleted.\n"
  "Deleting each component may leak other components, which are then\n"
  "collected recursively.\n\n"
  "To enable garbage collection for a class, add these members:\n\n"
  "public:\n"
  "  bool UsesGarbageCollector() const override { return true; }\n\n\n"
  " protected:\n\n\n"
  "  void ReportReferences(vtkGarbageCollector* collector) override\n"
  "  {\n"
  "    // Report references held by this object that may be in a loop.\n"
  "    this->Superclass::ReportReferences(collector);\n"
  "    vtkGarbageCollectorReport(collector, this->OtherObject, \"Other\n"
  "Object\");\n"
  "  }\n\n"
  "The implementations should be in the .cxx file in practice. It is\n"
  "important that the reference be reported using the real pointer or\n"
  "smart pointer instance that holds the reference.  When collecting the\n"
  "garbage collector will actually set this pointer to nullptr.  The\n"
  "destructor of the class should be written to deal with this.  It is\n"
  "also expected that an invariant is maintained for any reference that\n"
  "is reported.  The variable holding the reference must always either\n"
  "be nullptr or refer to a fully constructed valid object.  Therefore\n"
  "code like \"this->Object->UnRegister(this)\" must be avoided if\n"
  "\"this->Object\" is a reported reference because it is possible that\n"
  "the object is deleted before UnRegister returns but then\n"
  "\"this->Object\" will be left as a dangling pointer.  Instead use code\n"
  "like\n\n"
  "vtkObjectBase* obj = this->Object;\n"
  "  this->Object = 0;\n"
  "  obj->UnRegister(this);\n\n"
  "so that the reported reference maintains the invariant.\n\n"
  "If subclassing from a class that already supports garbage collection,\n"
  "one need only provide the ReportReferences method.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGarbageCollector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkGarbageCollector", // tp_name
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
  PyvtkGarbageCollector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGarbageCollector_StaticNew()
{
  return vtkGarbageCollector::New();
}

PyObject *PyvtkGarbageCollector_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGarbageCollector_Type, PyvtkGarbageCollector_Methods,
    "vtkGarbageCollector",
 &PyvtkGarbageCollector_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGarbageCollector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGarbageCollector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGarbageCollector", o) != 0)
  {
    Py_DECREF(o);
  }

}

