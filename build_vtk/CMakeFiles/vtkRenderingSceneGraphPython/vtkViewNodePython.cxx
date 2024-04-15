// python wrapper for vtkViewNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkViewNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkViewNode(PyObject *dict); }
extern "C" { PyObject *PyvtkViewNode_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkViewNode_operation_type_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingSceneGraph.vtkViewNode.operation_type", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkViewNode_operation_type_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkViewNode_operation_type_Type, static_cast<int>(val));
}


static PyObject *
PyvtkViewNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkViewNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkViewNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkViewNode *tempr = vtkViewNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkViewNode::NewInstance());

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
PyvtkViewNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkViewNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkViewNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_GetRenderable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObject *tempr = (ap.IsBound() ?
      op->GetRenderable() :
      op->vtkViewNode::GetRenderable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Build(temp0);
    }
    else
    {
      op->vtkViewNode::Build(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_Synchronize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Synchronize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Synchronize(temp0);
    }
    else
    {
      op->vtkViewNode::Synchronize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkViewNode::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_Invalidate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Invalidate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Invalidate(temp0);
    }
    else
    {
      op->vtkViewNode::Invalidate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_SetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  vtkViewNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewNode"))
  {
    if (ap.IsBound())
    {
      op->SetParent(temp0);
    }
    else
    {
      op->vtkViewNode::SetParent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewNode *tempr = (ap.IsBound() ?
      op->GetParent() :
      op->vtkViewNode::GetParent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_SetMyFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMyFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  vtkViewNodeFactory *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewNodeFactory"))
  {
    if (ap.IsBound())
    {
      op->SetMyFactory(temp0);
    }
    else
    {
      op->vtkViewNode::SetMyFactory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_GetMyFactory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMyFactory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewNodeFactory *tempr = (ap.IsBound() ?
      op->GetMyFactory() :
      op->vtkViewNode::GetMyFactory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_GetViewNodeFor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewNodeFor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    vtkViewNode *tempr = (ap.IsBound() ?
      op->GetViewNodeFor(temp0) :
      op->vtkViewNode::GetViewNodeFor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_GetFirstAncestorOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstAncestorOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkViewNode *tempr = (ap.IsBound() ?
      op->GetFirstAncestorOfType(temp0) :
      op->vtkViewNode::GetFirstAncestorOfType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_GetFirstChildOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstChildOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkViewNode *tempr = (ap.IsBound() ?
      op->GetFirstChildOfType(temp0) :
      op->vtkViewNode::GetFirstChildOfType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_SetRenderable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  vtkObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
  {
    if (ap.IsBound())
    {
      op->SetRenderable(temp0);
    }
    else
    {
      op->vtkViewNode::SetRenderable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_Traverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Traverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Traverse(temp0);
    }
    else
    {
      op->vtkViewNode::Traverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkViewNode_TraverseAllPasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TraverseAllPasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewNode *op = static_cast<vtkViewNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TraverseAllPasses();
    }
    else
    {
      op->vtkViewNode::TraverseAllPasses();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkViewNode_Methods[] = {
  {"IsTypeOf", PyvtkViewNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkViewNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkViewNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkViewNode\nC++: static vtkViewNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkViewNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkViewNode\nC++: vtkViewNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkViewNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkViewNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetRenderable", PyvtkViewNode_GetRenderable, METH_VARARGS,
   "GetRenderable(self) -> vtkObject\nC++: virtual vtkObject *GetRenderable()\n\nThis is the VTK class that this node stands in for.\n"},
  {"Build", PyvtkViewNode_Build, METH_VARARGS,
   "Build(self, __a:bool) -> None\nC++: virtual void Build(bool)\n\nBuilds myself.\n"},
  {"Synchronize", PyvtkViewNode_Synchronize, METH_VARARGS,
   "Synchronize(self, __a:bool) -> None\nC++: virtual void Synchronize(bool)\n\nEnsures that my state agrees with my Renderable's.\n"},
  {"Render", PyvtkViewNode_Render, METH_VARARGS,
   "Render(self, __a:bool) -> None\nC++: virtual void Render(bool)\n\nMakes calls to make self visible.\n"},
  {"Invalidate", PyvtkViewNode_Invalidate, METH_VARARGS,
   "Invalidate(self, __a:bool) -> None\nC++: virtual void Invalidate(bool)\n\nClear any cached data.\n"},
  {"SetParent", PyvtkViewNode_SetParent, METH_VARARGS,
   "SetParent(self, __a:vtkViewNode) -> None\nC++: virtual void SetParent(vtkViewNode *)\n\nAccess the node that owns this one.\n"},
  {"GetParent", PyvtkViewNode_GetParent, METH_VARARGS,
   "GetParent(self) -> vtkViewNode\nC++: virtual vtkViewNode *GetParent()\n\n"},
  {"SetMyFactory", PyvtkViewNode_SetMyFactory, METH_VARARGS,
   "SetMyFactory(self, __a:vtkViewNodeFactory) -> None\nC++: virtual void SetMyFactory(vtkViewNodeFactory *)\n\nA factory that creates particular subclasses for different\nrendering back ends.\n"},
  {"GetMyFactory", PyvtkViewNode_GetMyFactory, METH_VARARGS,
   "GetMyFactory(self) -> vtkViewNodeFactory\nC++: virtual vtkViewNodeFactory *GetMyFactory()\n\n"},
  {"GetViewNodeFor", PyvtkViewNode_GetViewNodeFor, METH_VARARGS,
   "GetViewNodeFor(self, __a:vtkObject) -> vtkViewNode\nC++: vtkViewNode *GetViewNodeFor(vtkObject *)\n\nReturns the view node that corresponding to the provided object\nWill return NULL if a match is not found in self or descendents\n"},
  {"GetFirstAncestorOfType", PyvtkViewNode_GetFirstAncestorOfType, METH_VARARGS,
   "GetFirstAncestorOfType(self, type:str) -> vtkViewNode\nC++: vtkViewNode *GetFirstAncestorOfType(const char *type)\n\nFind the first parent/grandparent of the desired type\n"},
  {"GetFirstChildOfType", PyvtkViewNode_GetFirstChildOfType, METH_VARARGS,
   "GetFirstChildOfType(self, type:str) -> vtkViewNode\nC++: vtkViewNode *GetFirstChildOfType(const char *type)\n\nFind the first child of the desired type\n"},
  {"SetRenderable", PyvtkViewNode_SetRenderable, METH_VARARGS,
   "SetRenderable(self, __a:vtkObject) -> None\nC++: virtual void SetRenderable(vtkObject *)\n\nAllow explicit setting of the renderable for a view node.\n"},
  {"Traverse", PyvtkViewNode_Traverse, METH_VARARGS,
   "Traverse(self, operation:int) -> None\nC++: virtual void Traverse(int operation)\n\n"},
  {"TraverseAllPasses", PyvtkViewNode_TraverseAllPasses, METH_VARARGS,
   "TraverseAllPasses(self) -> None\nC++: virtual void TraverseAllPasses()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkViewNode_Doc =
  "vtkViewNode - a node within a VTK scene graph\n\n"
  "Superclass: vtkObject\n\n"
  "This is the superclass for all nodes within a VTK scene graph. It\n"
  "contains the API for a node. It supports the essential operations\n"
  "such as graph creation, state storage and traversal. Child classes\n"
  "adapt this to VTK's major rendering classes. Grandchild classes adapt\n"
  "those to for APIs of different rendering libraries.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkViewNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingSceneGraph.vtkViewNode", // tp_name
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
  PyvtkViewNode_Doc, // tp_doc
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

PyObject *PyvtkViewNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkViewNode_Type, PyvtkViewNode_Methods,
    "vtkViewNode",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkViewNode_operation_type_Type);
  PyVTKEnum_Add(&PyvtkViewNode_operation_type_Type, "vtkViewNode.operation_type");

  o = (PyObject *)&PyvtkViewNode_operation_type_Type;
  if (PyDict_SetItemString(d, "operation_type", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkViewNode::operation_type cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "noop", vtkViewNode::noop },
        { "build", vtkViewNode::build },
        { "synchronize", vtkViewNode::synchronize },
        { "render", vtkViewNode::render },
        { "invalidate", vtkViewNode::invalidate },
      };

    o = PyvtkViewNode_operation_type_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkViewNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkViewNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkViewNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

