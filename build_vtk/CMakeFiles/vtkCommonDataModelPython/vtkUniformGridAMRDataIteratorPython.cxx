// python wrapper for vtkUniformGridAMRDataIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUniformGridAMRDataIterator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUniformGridAMRDataIterator(PyObject *dict); }
extern "C" { PyObject *PyvtkUniformGridAMRDataIterator_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataIterator_ClassNew
extern "C" { PyObject *PyvtkCompositeDataIterator_ClassNew(); }
#define DECLARED_PyvtkCompositeDataIterator_ClassNew
#endif

static PyObject *
PyvtkUniformGridAMRDataIterator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUniformGridAMRDataIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGridAMRDataIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUniformGridAMRDataIterator *tempr = vtkUniformGridAMRDataIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniformGridAMRDataIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGridAMRDataIterator::NewInstance());

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
PyvtkUniformGridAMRDataIterator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUniformGridAMRDataIterator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUniformGridAMRDataIterator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetCurrentMetaData() :
      op->vtkUniformGridAMRDataIterator::GetCurrentMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_HasCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasCurrentMetaData() :
      op->vtkUniformGridAMRDataIterator::HasCurrentMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCurrentDataObject() :
      op->vtkUniformGridAMRDataIterator::GetCurrentDataObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentFlatIndex() :
      op->vtkUniformGridAMRDataIterator::GetCurrentFlatIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentLevel() :
      op->vtkUniformGridAMRDataIterator::GetCurrentLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GetCurrentIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentIndex() :
      op->vtkUniformGridAMRDataIterator::GetCurrentIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirstItem();
    }
    else
    {
      op->vtkUniformGridAMRDataIterator::GoToFirstItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextItem();
    }
    else
    {
      op->vtkUniformGridAMRDataIterator::GoToNextItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridAMRDataIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridAMRDataIterator *op = static_cast<vtkUniformGridAMRDataIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkUniformGridAMRDataIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniformGridAMRDataIterator_Methods[] = {
  {"IsTypeOf", PyvtkUniformGridAMRDataIterator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUniformGridAMRDataIterator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUniformGridAMRDataIterator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUniformGridAMRDataIterator\nC++: static vtkUniformGridAMRDataIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUniformGridAMRDataIterator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUniformGridAMRDataIterator\nC++: vtkUniformGridAMRDataIterator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUniformGridAMRDataIterator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUniformGridAMRDataIterator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCurrentMetaData", PyvtkUniformGridAMRDataIterator_GetCurrentMetaData, METH_VARARGS,
   "GetCurrentMetaData(self) -> vtkInformation\nC++: vtkInformation *GetCurrentMetaData() override;\n\nReturns the meta-data associated with the current item. Note that\nthis points to a single instance of vtkInformation object\nallocated by the iterator and will be changed as soon as\nGoToNextItem is called.\n"},
  {"HasCurrentMetaData", PyvtkUniformGridAMRDataIterator_HasCurrentMetaData, METH_VARARGS,
   "HasCurrentMetaData(self) -> int\nC++: vtkTypeBool HasCurrentMetaData() override;\n\nReturns if the a meta-data information object is present for the\ncurrent item. Return 1 on success, 0 otherwise.\n"},
  {"GetCurrentDataObject", PyvtkUniformGridAMRDataIterator_GetCurrentDataObject, METH_VARARGS,
   "GetCurrentDataObject(self) -> vtkDataObject\nC++: vtkDataObject *GetCurrentDataObject() override;\n\nReturns the current item. Valid only when IsDoneWithTraversal()\nreturns 0.\n"},
  {"GetCurrentFlatIndex", PyvtkUniformGridAMRDataIterator_GetCurrentFlatIndex, METH_VARARGS,
   "GetCurrentFlatIndex(self) -> int\nC++: unsigned int GetCurrentFlatIndex() override;\n\nFlat index is an index obtained by traversing the tree in\npreorder. This can be used to uniquely identify nodes in the\ntree. Not valid if IsDoneWithTraversal() returns true.\n"},
  {"GetCurrentLevel", PyvtkUniformGridAMRDataIterator_GetCurrentLevel, METH_VARARGS,
   "GetCurrentLevel(self) -> int\nC++: virtual unsigned int GetCurrentLevel()\n\nReturns the level for the current dataset.\n"},
  {"GetCurrentIndex", PyvtkUniformGridAMRDataIterator_GetCurrentIndex, METH_VARARGS,
   "GetCurrentIndex(self) -> int\nC++: virtual unsigned int GetCurrentIndex()\n\nReturns the dataset index for the current data object. Valid only\nif the current data is a leaf node i.e. no a composite dataset.\n"},
  {"GoToFirstItem", PyvtkUniformGridAMRDataIterator_GoToFirstItem, METH_VARARGS,
   "GoToFirstItem(self) -> None\nC++: void GoToFirstItem() override;\n\nMove the iterator to the beginning of the collection.\n"},
  {"GoToNextItem", PyvtkUniformGridAMRDataIterator_GoToNextItem, METH_VARARGS,
   "GoToNextItem(self) -> None\nC++: void GoToNextItem() override;\n\nMove the iterator to the next item in the collection.\n"},
  {"IsDoneWithTraversal", PyvtkUniformGridAMRDataIterator_IsDoneWithTraversal, METH_VARARGS,
   "IsDoneWithTraversal(self) -> int\nC++: int IsDoneWithTraversal() override;\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUniformGridAMRDataIterator_Doc =
  "vtkUniformGridAMRDataIterator - subclass of vtkCompositeDataIterator\nwith API to get current level and dataset index.\n\n"
  "Superclass: vtkCompositeDataIterator\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUniformGridAMRDataIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkUniformGridAMRDataIterator", // tp_name
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
  PyvtkUniformGridAMRDataIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUniformGridAMRDataIterator_StaticNew()
{
  return vtkUniformGridAMRDataIterator::New();
}

PyObject *PyvtkUniformGridAMRDataIterator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUniformGridAMRDataIterator_Type, PyvtkUniformGridAMRDataIterator_Methods,
    "vtkUniformGridAMRDataIterator",
 &PyvtkUniformGridAMRDataIterator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUniformGridAMRDataIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUniformGridAMRDataIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUniformGridAMRDataIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

