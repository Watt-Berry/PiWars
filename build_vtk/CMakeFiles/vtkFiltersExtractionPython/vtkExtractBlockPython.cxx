// python wrapper for vtkExtractBlock
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractBlock.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractBlock(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractBlock_ClassNew(); }


static PyObject *
PyvtkExtractBlock_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractBlock::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractBlock::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractBlock *tempr = vtkExtractBlock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractBlock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractBlock::NewInstance());

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
PyvtkExtractBlock_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractBlock::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractBlock::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_AddIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddIndex(temp0);
    }
    else
    {
      op->vtkExtractBlock::AddIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_RemoveIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveIndex(temp0);
    }
    else
    {
      op->vtkExtractBlock::RemoveIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_RemoveAllIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIndices();
    }
    else
    {
      op->vtkExtractBlock::RemoveAllIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_SetPruneOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPruneOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPruneOutput(temp0);
    }
    else
    {
      op->vtkExtractBlock::SetPruneOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_GetPruneOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPruneOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPruneOutput() :
      op->vtkExtractBlock::GetPruneOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_PruneOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PruneOutputOn();
    }
    else
    {
      op->vtkExtractBlock::PruneOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_PruneOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PruneOutputOff();
    }
    else
    {
      op->vtkExtractBlock::PruneOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_SetMaintainStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaintainStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaintainStructure(temp0);
    }
    else
    {
      op->vtkExtractBlock::SetMaintainStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_GetMaintainStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaintainStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaintainStructure() :
      op->vtkExtractBlock::GetMaintainStructure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_MaintainStructureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainStructureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaintainStructureOn();
    }
    else
    {
      op->vtkExtractBlock::MaintainStructureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlock_MaintainStructureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaintainStructureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlock *op = static_cast<vtkExtractBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaintainStructureOff();
    }
    else
    {
      op->vtkExtractBlock::MaintainStructureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractBlock_Methods[] = {
  {"IsTypeOf", PyvtkExtractBlock_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractBlock_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractBlock_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractBlock\nC++: static vtkExtractBlock *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractBlock_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractBlock\nC++: vtkExtractBlock *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractBlock_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractBlock_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddIndex", PyvtkExtractBlock_AddIndex, METH_VARARGS,
   "AddIndex(self, index:int) -> None\nC++: void AddIndex(unsigned int index)\n\nSelect the block indices to extract.  Each node in the\nmulti-block tree is identified by an index. The index can be\nobtained by performing a preorder traversal of the tree\n(including empty nodes). eg. A(B (D, E), C(F, G)).  Inorder\ntraversal yields: A, B, D, E, C, F, G Index of A is 0, while\nindex of C is 4. (Note: specifying node 0 means the input is\ncopied to the output.)\n"},
  {"RemoveIndex", PyvtkExtractBlock_RemoveIndex, METH_VARARGS,
   "RemoveIndex(self, index:int) -> None\nC++: void RemoveIndex(unsigned int index)\n\n"},
  {"RemoveAllIndices", PyvtkExtractBlock_RemoveAllIndices, METH_VARARGS,
   "RemoveAllIndices(self) -> None\nC++: void RemoveAllIndices()\n\n"},
  {"SetPruneOutput", PyvtkExtractBlock_SetPruneOutput, METH_VARARGS,
   "SetPruneOutput(self, _arg:int) -> None\nC++: virtual void SetPruneOutput(vtkTypeBool _arg)\n\nWhen set, the output multiblock dataset will be pruned to remove\nempty nodes. On by default.\n\nThis has no effect for vtkPartitionedDataSetCollection.\n"},
  {"GetPruneOutput", PyvtkExtractBlock_GetPruneOutput, METH_VARARGS,
   "GetPruneOutput(self) -> int\nC++: virtual vtkTypeBool GetPruneOutput()\n\n"},
  {"PruneOutputOn", PyvtkExtractBlock_PruneOutputOn, METH_VARARGS,
   "PruneOutputOn(self) -> None\nC++: virtual void PruneOutputOn()\n\n"},
  {"PruneOutputOff", PyvtkExtractBlock_PruneOutputOff, METH_VARARGS,
   "PruneOutputOff(self) -> None\nC++: virtual void PruneOutputOff()\n\n"},
  {"SetMaintainStructure", PyvtkExtractBlock_SetMaintainStructure, METH_VARARGS,
   "SetMaintainStructure(self, _arg:int) -> None\nC++: virtual void SetMaintainStructure(vtkTypeBool _arg)\n\nThis is used only when PruneOutput is ON. By default, when\npruning the output i.e. remove empty blocks, if node has only 1\nnon-null child block, then that node is removed. To preserve\nthese parent nodes, set this flag to true. Off by default.\n\nThis has no effect for vtkPartitionedDataSetCollection.\n"},
  {"GetMaintainStructure", PyvtkExtractBlock_GetMaintainStructure, METH_VARARGS,
   "GetMaintainStructure(self) -> int\nC++: virtual vtkTypeBool GetMaintainStructure()\n\n"},
  {"MaintainStructureOn", PyvtkExtractBlock_MaintainStructureOn, METH_VARARGS,
   "MaintainStructureOn(self) -> None\nC++: virtual void MaintainStructureOn()\n\n"},
  {"MaintainStructureOff", PyvtkExtractBlock_MaintainStructureOff, METH_VARARGS,
   "MaintainStructureOff(self) -> None\nC++: virtual void MaintainStructureOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractBlock_Doc =
  "vtkExtractBlock - extracts blocks from a vtkDataObjectTree subclass.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkExtractBlock is a filter that extracts blocks from a\n"
  "vtkDataObjectTree subclass such as vtkPartitionedDataSet,\n"
  "vtkPartitionedDataSetCollection, etc. using their composite-ids (also\n"
  "called flat-index).\n\n"
  "The composite-id can be obtained by performing a pre-order traversal\n"
  "of the tree (including empty nodes). For example, consider a tree\n"
  "with nodes named `A(B (D, E), C(F, G))`.  Pre-order traversal yields:\n"
  "`A, B, D, E, C, F, G`; hence, composite-id of `A` is `0`, while index\n"
  "of `C` is `4`.\n\n"
  "`0` identifies the root-node. Thus, choosing `0` will result in the\n"
  "entire input dataset being passed to the output.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractBlock_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractBlock", // tp_name
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
  PyvtkExtractBlock_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractBlock_StaticNew()
{
  return vtkExtractBlock::New();
}

PyObject *PyvtkExtractBlock_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractBlock_Type, PyvtkExtractBlock_Methods,
    "vtkExtractBlock",
 &PyvtkExtractBlock_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractBlock(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractBlock_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractBlock", o) != 0)
  {
    Py_DECREF(o);
  }

}

