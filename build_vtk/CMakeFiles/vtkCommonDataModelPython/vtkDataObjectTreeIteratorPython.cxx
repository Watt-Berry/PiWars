// python wrapper for vtkDataObjectTreeIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataObjectTreeIterator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectTreeIterator(PyObject *dict); }
extern "C" { PyObject *PyvtkDataObjectTreeIterator_ClassNew(); }

#ifndef DECLARED_PyvtkCompositeDataIterator_ClassNew
extern "C" { PyObject *PyvtkCompositeDataIterator_ClassNew(); }
#define DECLARED_PyvtkCompositeDataIterator_ClassNew
#endif

static PyObject *
PyvtkDataObjectTreeIterator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectTreeIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectTreeIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectTreeIterator *tempr = vtkDataObjectTreeIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectTreeIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectTreeIterator::NewInstance());

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
PyvtkDataObjectTreeIterator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataObjectTreeIterator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataObjectTreeIterator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GoToFirstItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirstItem();
    }
    else
    {
      op->vtkDataObjectTreeIterator::GoToFirstItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GoToNextItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextItem();
    }
    else
    {
      op->vtkDataObjectTreeIterator::GoToNextItem();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkDataObjectTreeIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetCurrentDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetCurrentDataObject() :
      op->vtkDataObjectTreeIterator::GetCurrentDataObject());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetCurrentMetaData() :
      op->vtkDataObjectTreeIterator::GetCurrentMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_HasCurrentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasCurrentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasCurrentMetaData() :
      op->vtkDataObjectTreeIterator::HasCurrentMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetCurrentFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentFlatIndex() :
      op->vtkDataObjectTreeIterator::GetCurrentFlatIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_SetVisitOnlyLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisitOnlyLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisitOnlyLeaves(temp0);
    }
    else
    {
      op->vtkDataObjectTreeIterator::SetVisitOnlyLeaves(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetVisitOnlyLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisitOnlyLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVisitOnlyLeaves() :
      op->vtkDataObjectTreeIterator::GetVisitOnlyLeaves());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_VisitOnlyLeavesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisitOnlyLeavesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisitOnlyLeavesOn();
    }
    else
    {
      op->vtkDataObjectTreeIterator::VisitOnlyLeavesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_VisitOnlyLeavesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VisitOnlyLeavesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VisitOnlyLeavesOff();
    }
    else
    {
      op->vtkDataObjectTreeIterator::VisitOnlyLeavesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_SetTraverseSubTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraverseSubTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTraverseSubTree(temp0);
    }
    else
    {
      op->vtkDataObjectTreeIterator::SetTraverseSubTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_GetTraverseSubTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraverseSubTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTraverseSubTree() :
      op->vtkDataObjectTreeIterator::GetTraverseSubTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_TraverseSubTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TraverseSubTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TraverseSubTreeOn();
    }
    else
    {
      op->vtkDataObjectTreeIterator::TraverseSubTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectTreeIterator_TraverseSubTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TraverseSubTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectTreeIterator *op = static_cast<vtkDataObjectTreeIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TraverseSubTreeOff();
    }
    else
    {
      op->vtkDataObjectTreeIterator::TraverseSubTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectTreeIterator_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectTreeIterator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectTreeIterator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectTreeIterator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataObjectTreeIterator\nC++: static vtkDataObjectTreeIterator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectTreeIterator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataObjectTreeIterator\nC++: vtkDataObjectTreeIterator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataObjectTreeIterator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataObjectTreeIterator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GoToFirstItem", PyvtkDataObjectTreeIterator_GoToFirstItem, METH_VARARGS,
   "GoToFirstItem(self) -> None\nC++: void GoToFirstItem() override;\n\nMove the iterator to the beginning of the collection.\n"},
  {"GoToNextItem", PyvtkDataObjectTreeIterator_GoToNextItem, METH_VARARGS,
   "GoToNextItem(self) -> None\nC++: void GoToNextItem() override;\n\nMove the iterator to the next item in the collection.\n"},
  {"IsDoneWithTraversal", PyvtkDataObjectTreeIterator_IsDoneWithTraversal, METH_VARARGS,
   "IsDoneWithTraversal(self) -> int\nC++: int IsDoneWithTraversal() override;\n\nTest whether the iterator is finished with the traversal. Returns\n1 for yes, and 0 for no. It is safe to call any of the\nGetCurrent...() methods only when IsDoneWithTraversal() returns\n0.\n"},
  {"GetCurrentDataObject", PyvtkDataObjectTreeIterator_GetCurrentDataObject, METH_VARARGS,
   "GetCurrentDataObject(self) -> vtkDataObject\nC++: vtkDataObject *GetCurrentDataObject() override;\n\nReturns the current item. Valid only when IsDoneWithTraversal()\nreturns 0.\n"},
  {"GetCurrentMetaData", PyvtkDataObjectTreeIterator_GetCurrentMetaData, METH_VARARGS,
   "GetCurrentMetaData(self) -> vtkInformation\nC++: vtkInformation *GetCurrentMetaData() override;\n\nReturns the meta-data associated with the current item. Note\nthat, depending on iterator implementation, the returned\ninformation is not necessarily stored on the current object. So\nmodifying the information is forbidden.\n"},
  {"HasCurrentMetaData", PyvtkDataObjectTreeIterator_HasCurrentMetaData, METH_VARARGS,
   "HasCurrentMetaData(self) -> int\nC++: vtkTypeBool HasCurrentMetaData() override;\n\nReturns if the a meta-data information object is present for the\ncurrent item. Return 1 on success, 0 otherwise.\n"},
  {"GetCurrentFlatIndex", PyvtkDataObjectTreeIterator_GetCurrentFlatIndex, METH_VARARGS,
   "GetCurrentFlatIndex(self) -> int\nC++: unsigned int GetCurrentFlatIndex() override;\n\nFlat index is an index obtained by traversing the tree in\npreorder. This can be used to uniquely identify nodes in the\ntree. Not valid if IsDoneWithTraversal() returns true.\n"},
  {"SetVisitOnlyLeaves", PyvtkDataObjectTreeIterator_SetVisitOnlyLeaves, METH_VARARGS,
   "SetVisitOnlyLeaves(self, _arg:int) -> None\nC++: virtual void SetVisitOnlyLeaves(vtkTypeBool _arg)\n\nIf VisitOnlyLeaves is true, the iterator will only visit nodes\n(sub-datasets) that are not composite. If it encounters a\ncomposite data set, it will automatically traverse that composite\ndataset until it finds non-composite datasets. With this options,\nit is possible to visit all non-composite datasets in tree of\ncomposite datasets (composite of composite of composite for\nexample :-) ) If VisitOnlyLeaves is false, GetCurrentDataObject()\nmay return vtkCompositeDataSet. By default, VisitOnlyLeaves is 1.\n"},
  {"GetVisitOnlyLeaves", PyvtkDataObjectTreeIterator_GetVisitOnlyLeaves, METH_VARARGS,
   "GetVisitOnlyLeaves(self) -> int\nC++: virtual vtkTypeBool GetVisitOnlyLeaves()\n\n"},
  {"VisitOnlyLeavesOn", PyvtkDataObjectTreeIterator_VisitOnlyLeavesOn, METH_VARARGS,
   "VisitOnlyLeavesOn(self) -> None\nC++: virtual void VisitOnlyLeavesOn()\n\n"},
  {"VisitOnlyLeavesOff", PyvtkDataObjectTreeIterator_VisitOnlyLeavesOff, METH_VARARGS,
   "VisitOnlyLeavesOff(self) -> None\nC++: virtual void VisitOnlyLeavesOff()\n\n"},
  {"SetTraverseSubTree", PyvtkDataObjectTreeIterator_SetTraverseSubTree, METH_VARARGS,
   "SetTraverseSubTree(self, _arg:int) -> None\nC++: virtual void SetTraverseSubTree(vtkTypeBool _arg)\n\nIf TraverseSubTree is set to true, the iterator will visit the\nentire tree structure, otherwise it only visits the first level\nchildren. Set to 1 by default.\n"},
  {"GetTraverseSubTree", PyvtkDataObjectTreeIterator_GetTraverseSubTree, METH_VARARGS,
   "GetTraverseSubTree(self) -> int\nC++: virtual vtkTypeBool GetTraverseSubTree()\n\n"},
  {"TraverseSubTreeOn", PyvtkDataObjectTreeIterator_TraverseSubTreeOn, METH_VARARGS,
   "TraverseSubTreeOn(self) -> None\nC++: virtual void TraverseSubTreeOn()\n\n"},
  {"TraverseSubTreeOff", PyvtkDataObjectTreeIterator_TraverseSubTreeOff, METH_VARARGS,
   "TraverseSubTreeOff(self) -> None\nC++: virtual void TraverseSubTreeOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataObjectTreeIterator_Doc =
  "vtkDataObjectTreeIterator - superclass for composite data iterators\n\n"
  "Superclass: vtkCompositeDataIterator\n\n"
  "vtkDataObjectTreeIterator provides an interface for accessing\n"
  "datasets in a collection (vtkDataObjectTreeIterator).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectTreeIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObjectTreeIterator", // tp_name
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
  PyvtkDataObjectTreeIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObjectTreeIterator_StaticNew()
{
  return vtkDataObjectTreeIterator::New();
}

PyObject *PyvtkDataObjectTreeIterator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataObjectTreeIterator_Type, PyvtkDataObjectTreeIterator_Methods,
    "vtkDataObjectTreeIterator",
 &PyvtkDataObjectTreeIterator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCompositeDataIterator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObjectTreeIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectTreeIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectTreeIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

