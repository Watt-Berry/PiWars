// python wrapper for vtkCollectionIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCollectionIterator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCollectionIterator(PyObject *dict); }
extern "C" { PyObject *PyvtkCollectionIterator_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif
static PyObject *
PyvtkCollectionIterator_Next(PyObject *self)
{
  PyVTKObject *vp = (PyVTKObject *)self;
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator*>(vp->vtk_ptr);

  PyObject *result = nullptr;

  if (op)
  {
    vtkObject *tempr = op->GetCurrentObject();
    op->GoToNextItem();
    if (tempr != nullptr)
    {
      result = vtkPythonArgs::BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCollectionIterator_Iter(PyObject *self)
{
  Py_INCREF(self);
  return self;
}

static PyObject *
PyvtkCollectionIterator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCollectionIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollectionIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCollectionIterator *tempr = vtkCollectionIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollectionIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollectionIterator::NewInstance());

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
PyvtkCollectionIterator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCollectionIterator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCollectionIterator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_SetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  vtkCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCollection"))
  {
    if (ap.IsBound())
    {
      op->SetCollection(temp0);
    }
    else
    {
      op->vtkCollectionIterator::SetCollection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollection *tempr = (ap.IsBound() ?
      op->GetCollection() :
      op->vtkCollectionIterator::GetCollection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCollectionIterator::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirstItem();
    }
    else
    {
      op->vtkCollectionIterator::GoToFirstItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextItem();
    }
    else
    {
      op->vtkCollectionIterator::GoToNextItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkCollectionIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollectionIterator_GetCurrentObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectionIterator *op = static_cast<vtkCollectionIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetCurrentObject() :
      op->vtkCollectionIterator::GetCurrentObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCollectionIterator_Methods[] = {
  {"IsTypeOf", PyvtkCollectionIterator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCollectionIterator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCollectionIterator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCollectionIterator\nC++: static vtkCollectionIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCollectionIterator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCollectionIterator\nC++: vtkCollectionIterator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCollectionIterator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCollectionIterator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCollection", PyvtkCollectionIterator_SetCollection, METH_VARARGS,
   "SetCollection(self, __a:vtkCollection) -> None\nC++: virtual void SetCollection(vtkCollection *)\n\nSet/Get the collection over which to iterate.\n"},
  {"GetCollection", PyvtkCollectionIterator_GetCollection, METH_VARARGS,
   "GetCollection(self) -> vtkCollection\nC++: virtual vtkCollection *GetCollection()\n\n"},
  {"InitTraversal", PyvtkCollectionIterator_InitTraversal, METH_VARARGS,
   "InitTraversal(self) -> None\nC++: void InitTraversal()\n\nPosition the iterator at the first item in the collection.\n"},
  {"GoToFirstItem", PyvtkCollectionIterator_GoToFirstItem, METH_VARARGS,
   "GoToFirstItem(self) -> None\nC++: void GoToFirstItem()\n\nPosition the iterator at the first item in the collection.\n"},
  {"GoToNextItem", PyvtkCollectionIterator_GoToNextItem, METH_VARARGS,
   "GoToNextItem(self) -> None\nC++: void GoToNextItem()\n\nMove the iterator to the next item in the collection.\n"},
  {"IsDoneWithTraversal", PyvtkCollectionIterator_IsDoneWithTraversal, METH_VARARGS,
   "IsDoneWithTraversal(self) -> int\nC++: int IsDoneWithTraversal()\n\nTest whether the iterator is currently positioned at a valid\nitem. Returns 1 for yes, 0 for no.\n"},
  {"GetCurrentObject", PyvtkCollectionIterator_GetCurrentObject, METH_VARARGS,
   "GetCurrentObject(self) -> vtkObject\nC++: vtkObject *GetCurrentObject()\n\nGet the item at the current iterator position.  Valid only when\nIsDoneWithTraversal() returns 1.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCollectionIterator_Doc =
  "vtkCollectionIterator - iterator through a vtkCollection.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCollectionIterator provides an alternative way to traverse through\n"
  "the objects in a vtkCollection.  Unlike the collection's built in\n"
  "interface, this allows multiple iterators to simultaneously traverse\n"
  "the collection.  If items are removed from the collection, only the\n"
  "iterators currently pointing to those items are invalidated.  Other\n"
  "iterators will still continue to function normally.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCollectionIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkCollectionIterator", // tp_name
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
  PyvtkCollectionIterator_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  PyvtkCollectionIterator_Iter, // tp_iter
  PyvtkCollectionIterator_Next, // tp_iternext
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

static vtkObjectBase *PyvtkCollectionIterator_StaticNew()
{
  return vtkCollectionIterator::New();
}

PyObject *PyvtkCollectionIterator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCollectionIterator_Type, PyvtkCollectionIterator_Methods,
    "vtkCollectionIterator",
 &PyvtkCollectionIterator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCollectionIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCollectionIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCollectionIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

