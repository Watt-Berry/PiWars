// python wrapper for vtkHyperTreeCursor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeCursor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeCursor(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeCursor_ClassNew(); }


static PyObject *
PyvtkHyperTreeCursor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkHyperTreeCursor."
    " (" "Use other Hyper Tree Grid cursors instead." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeCursor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkHyperTreeCursor."
    " (" "Use other Hyper Tree Grid cursors instead." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeCursor *tempr = vtkHyperTreeCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeCursor::NewInstance());

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
PyvtkHyperTreeCursor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkHyperTreeCursor."
    " (" "Use other Hyper Tree Grid cursors instead." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeCursor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeCursor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  vtkHyperTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTree"))
  {
    op->SetTree(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkHyperTree *tempr = op->GetTree();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetVertexId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetVertexId();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsLeaf();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsRoot();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned int tempr = op->GetLevel();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetChildIndex();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ToRoot();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_ToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ToParent();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->ToChild(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_ToSameVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToSameVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  vtkHyperTreeCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
  {
    op->ToSameVertex(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_IsEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  vtkHyperTreeCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
  {
    bool tempr = op->IsEqual(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkHyperTreeCursor *tempr = op->Clone();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_SameTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SameTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  vtkHyperTreeCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeCursor"))
  {
    int tempr = op->SameTree(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfChildren();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeCursor_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeCursor *op = static_cast<vtkHyperTreeCursor *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetDimension();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeCursor_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeCursor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeCursor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeCursor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeCursor\nC++: static vtkHyperTreeCursor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeCursor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeCursor\nC++: vtkHyperTreeCursor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeCursor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeCursor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTree", PyvtkHyperTreeCursor_SetTree, METH_VARARGS,
   "SetTree(self, __a:vtkHyperTree) -> None\nC++: virtual void SetTree(vtkHyperTree *)\n\nSet the HyperTree to which the cursor is pointing.\n"},
  {"GetTree", PyvtkHyperTreeCursor_GetTree, METH_VARARGS,
   "GetTree(self) -> vtkHyperTree\nC++: virtual vtkHyperTree *GetTree()\n\nReturn the HyperTree to which the cursor is pointing.\n"},
  {"GetVertexId", PyvtkHyperTreeCursor_GetVertexId, METH_VARARGS,
   "GetVertexId(self) -> int\nC++: virtual vtkIdType GetVertexId()\n\nReturn the index of the current vertex in the tree.\n"},
  {"IsLeaf", PyvtkHyperTreeCursor_IsLeaf, METH_VARARGS,
   "IsLeaf(self) -> bool\nC++: virtual bool IsLeaf()\n\nIs the cursor pointing to a leaf?\n"},
  {"IsRoot", PyvtkHyperTreeCursor_IsRoot, METH_VARARGS,
   "IsRoot(self) -> bool\nC++: virtual bool IsRoot()\n\nIs the cursor at tree root?\n"},
  {"GetLevel", PyvtkHyperTreeCursor_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: virtual unsigned int GetLevel()\n\nReturn the level of the vertex pointed by the cursor.\n\\post positive_result: result>=0\n"},
  {"GetChildIndex", PyvtkHyperTreeCursor_GetChildIndex, METH_VARARGS,
   "GetChildIndex(self) -> int\nC++: virtual int GetChildIndex()\n\nReturn the child number of the current vertex relative to its\nparent.\n\\pre not_root: !IsRoot().\n\\post valid_range: result>=0 && result<GetNumberOfChildren()\n"},
  {"ToRoot", PyvtkHyperTreeCursor_ToRoot, METH_VARARGS,
   "ToRoot(self) -> None\nC++: virtual void ToRoot()\n\nMove the cursor to the root vertex.\n\\pre can be root\n\\post is_root: IsRoot()\n"},
  {"ToParent", PyvtkHyperTreeCursor_ToParent, METH_VARARGS,
   "ToParent(self) -> None\nC++: virtual void ToParent()\n\nMove the cursor to the parent of the current vertex.\n\\pre not_root: !IsRoot()\n"},
  {"ToChild", PyvtkHyperTreeCursor_ToChild, METH_VARARGS,
   "ToChild(self, child:int) -> None\nC++: virtual void ToChild(int child)\n\nMove the cursor to child `child' of the current vertex.\n\\pre not_leaf: !IsLeaf()\n\\pre valid_child: child>=0 && child<this->GetNumberOfChildren()\n"},
  {"ToSameVertex", PyvtkHyperTreeCursor_ToSameVertex, METH_VARARGS,
   "ToSameVertex(self, other:vtkHyperTreeCursor) -> None\nC++: virtual void ToSameVertex(vtkHyperTreeCursor *other)\n\nMove the cursor to the same vertex pointed by `other'.\n\\pre other_exists: other!=0\n\\pre same_hypertree: this->SameTree(other);\n\\post equal: this->IsEqual(other)\n"},
  {"IsEqual", PyvtkHyperTreeCursor_IsEqual, METH_VARARGS,
   "IsEqual(self, other:vtkHyperTreeCursor) -> bool\nC++: virtual bool IsEqual(vtkHyperTreeCursor *other)\n\nIs `this' equal to `other'?\n\\pre other_exists: other!=0\n\\pre same_hypertree: this->SameTree(other);\n"},
  {"Clone", PyvtkHyperTreeCursor_Clone, METH_VARARGS,
   "Clone(self) -> vtkHyperTreeCursor\nC++: virtual vtkHyperTreeCursor *Clone()\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n\\post same_tree: result->SameTree(this)\n"},
  {"SameTree", PyvtkHyperTreeCursor_SameTree, METH_VARARGS,
   "SameTree(self, other:vtkHyperTreeCursor) -> int\nC++: virtual int SameTree(vtkHyperTreeCursor *other)\n\nAre `this' and `other' pointing on the same hypertree?\n\\pre other_exists: other!=0\n"},
  {"GetNumberOfChildren", PyvtkHyperTreeCursor_GetNumberOfChildren, METH_VARARGS,
   "GetNumberOfChildren(self) -> int\nC++: virtual int GetNumberOfChildren()\n\nReturn the number of children for each node (non-vertex leaf) of\nthe tree.\n\\post positive_number: result>0\n"},
  {"GetDimension", PyvtkHyperTreeCursor_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: virtual int GetDimension()\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeCursor_Doc =
  "vtkHyperTreeCursor - Objects for depth-first traversal HyperTrees.\n\n"
  "Superclass: vtkObject\n\n"
  "Objects that can perform depth-first traversal of HyperTrees. This is\n"
  "an abstract class. Cursors are created by the HyperTree\n"
  "implementation.\n\n"
  "@sa\n"
  "vtkObject vtkHyperTree vtkHyperTreeGrid\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Joachim\n"
  "Pouderoux, and Charles Law, Kitware 2013 This class was modified by\n"
  "Guenole Harel and Jacques-Bernard Lekien 2014 This class was revised\n"
  "by Philippe Pebay, 2016 This work was supported by Commissariat a\n"
  "l'Energie Atomique (CEA/DIF)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeCursor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeCursor", // tp_name
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
  PyvtkHyperTreeCursor_Doc, // tp_doc
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

PyObject *PyvtkHyperTreeCursor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeCursor_Type, PyvtkHyperTreeCursor_Methods,
    "vtkHyperTreeCursor",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeCursor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeCursor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeCursor", o) != 0)
  {
    Py_DECREF(o);
  }

}

