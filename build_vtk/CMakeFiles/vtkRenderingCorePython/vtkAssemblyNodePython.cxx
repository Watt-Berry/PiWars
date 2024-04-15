// python wrapper for vtkAssemblyNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAssemblyNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssemblyNode(PyObject *dict); }
extern "C" { PyObject *PyvtkAssemblyNode_ClassNew(); }


static PyObject *
PyvtkAssemblyNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssemblyNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssemblyNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssemblyNode *tempr = vtkAssemblyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssemblyNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssemblyNode::NewInstance());

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
PyvtkAssemblyNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAssemblyNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAssemblyNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->SetViewProp(temp0);
    }
    else
    {
      op->vtkAssemblyNode::SetViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetViewProp() :
      op->vtkAssemblyNode::GetViewProp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkAssemblyNode::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix() :
      op->vtkAssemblyNode::GetMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAssemblyNode::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAssemblyNode_Methods[] = {
  {"IsTypeOf", PyvtkAssemblyNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssemblyNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssemblyNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAssemblyNode\nC++: static vtkAssemblyNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssemblyNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAssemblyNode\nC++: vtkAssemblyNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAssemblyNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAssemblyNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetViewProp", PyvtkAssemblyNode_SetViewProp, METH_VARARGS,
   "SetViewProp(self, prop:vtkProp) -> None\nC++: virtual void SetViewProp(vtkProp *prop)\n\nSet/Get the prop that this assembly node refers to.\n"},
  {"GetViewProp", PyvtkAssemblyNode_GetViewProp, METH_VARARGS,
   "GetViewProp(self) -> vtkProp\nC++: virtual vtkProp *GetViewProp()\n\n"},
  {"SetMatrix", PyvtkAssemblyNode_SetMatrix, METH_VARARGS,
   "SetMatrix(self, matrix:vtkMatrix4x4) -> None\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\n\nSpecify a transformation matrix associated with the prop. Note:\nif the prop is not a type of vtkProp3D, then the transformation\nmatrix is ignored (and expected to be NULL). Also, internal to\nthis object the matrix is copied because the matrix is used for\ncomputation by vtkAssemblyPath.\n"},
  {"GetMatrix", PyvtkAssemblyNode_GetMatrix, METH_VARARGS,
   "GetMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetMatrix()\n\n"},
  {"GetMTime", PyvtkAssemblyNode_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride the standard GetMTime() to check for the modified times\nof the prop and matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAssemblyNode_Doc =
  "vtkAssemblyNode - represent a node in an assembly\n\n"
  "Superclass: vtkObject\n\n"
  "vtkAssemblyNode represents a node in an assembly. It is used by\n"
  "vtkAssemblyPath to create hierarchical assemblies of props. The props\n"
  "can be either 2D or 3D.\n\n"
  "An assembly node refers to a vtkProp, and possibly a vtkMatrix4x4.\n"
  "Nodes are used by vtkAssemblyPath to build fully evaluated path\n"
  "(matrices are concatenated through the path) that is used by picking\n"
  "and other operations involving assemblies.\n\n"
  "@warning\n"
  "The assembly node is guaranteed to contain a reference to an instance\n"
  "of vtkMatrix4x4 if the prop referred to by the node is of type\n"
  "vtkProp3D (or subclass). The matrix is evaluated through the assembly\n"
  "path, so the assembly node's matrix is a function of its location in\n"
  "the vtkAssemblyPath.\n\n"
  "@warning\n"
  "vtkAssemblyNode does not reference count its association with\n"
  "vtkProp. Therefore, do not create an assembly node, associate a prop\n"
  "with it, delete the prop, and then try to dereference the prop. The\n"
  "program will break! (Reason: vtkAssemblyPath (which uses\n"
  "vtkAssemblyNode) create self-referencing loops that destroy reference\n"
  "counting.)\n\n"
  "@sa\n"
  "vtkAssemblyPath vtkProp vtkPicker vtkMatrix4x4\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAssemblyNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkAssemblyNode", // tp_name
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
  PyvtkAssemblyNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssemblyNode_StaticNew()
{
  return vtkAssemblyNode::New();
}

PyObject *PyvtkAssemblyNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAssemblyNode_Type, PyvtkAssemblyNode_Methods,
    "vtkAssemblyNode",
 &PyvtkAssemblyNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAssemblyNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssemblyNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssemblyNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

