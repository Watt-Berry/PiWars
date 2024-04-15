// python wrapper for vtkCosmicTreeLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCosmicTreeLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCosmicTreeLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkCosmicTreeLayoutStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkCosmicTreeLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCosmicTreeLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCosmicTreeLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCosmicTreeLayoutStrategy *tempr = vtkCosmicTreeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCosmicTreeLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCosmicTreeLayoutStrategy::NewInstance());

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
PyvtkCosmicTreeLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCosmicTreeLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCosmicTreeLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkCosmicTreeLayoutStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SetSizeLeafNodesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeLeafNodesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSizeLeafNodesOnly(temp0);
    }
    else
    {
      op->vtkCosmicTreeLayoutStrategy::SetSizeLeafNodesOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetSizeLeafNodesOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeLeafNodesOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeLeafNodesOnly() :
      op->vtkCosmicTreeLayoutStrategy::GetSizeLeafNodesOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SizeLeafNodesOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeLeafNodesOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SizeLeafNodesOnlyOn();
    }
    else
    {
      op->vtkCosmicTreeLayoutStrategy::SizeLeafNodesOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SizeLeafNodesOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SizeLeafNodesOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SizeLeafNodesOnlyOff();
    }
    else
    {
      op->vtkCosmicTreeLayoutStrategy::SizeLeafNodesOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SetLayoutDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutDepth(temp0);
    }
    else
    {
      op->vtkCosmicTreeLayoutStrategy::SetLayoutDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetLayoutDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayoutDepth() :
      op->vtkCosmicTreeLayoutStrategy::GetLayoutDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SetLayoutRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutRoot(temp0);
    }
    else
    {
      op->vtkCosmicTreeLayoutStrategy::SetLayoutRoot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetLayoutRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetLayoutRoot() :
      op->vtkCosmicTreeLayoutStrategy::GetLayoutRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_SetNodeSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNodeSizeArrayName(temp0);
    }
    else
    {
      op->vtkCosmicTreeLayoutStrategy::SetNodeSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCosmicTreeLayoutStrategy_GetNodeSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCosmicTreeLayoutStrategy *op = static_cast<vtkCosmicTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNodeSizeArrayName() :
      op->vtkCosmicTreeLayoutStrategy::GetNodeSizeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCosmicTreeLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkCosmicTreeLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCosmicTreeLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCosmicTreeLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCosmicTreeLayoutStrategy\nC++: static vtkCosmicTreeLayoutStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCosmicTreeLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCosmicTreeLayoutStrategy\nC++: vtkCosmicTreeLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCosmicTreeLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCosmicTreeLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Layout", PyvtkCosmicTreeLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nPerform the layout.\n"},
  {"SetSizeLeafNodesOnly", PyvtkCosmicTreeLayoutStrategy_SetSizeLeafNodesOnly, METH_VARARGS,
   "SetSizeLeafNodesOnly(self, _arg:int) -> None\nC++: virtual void SetSizeLeafNodesOnly(vtkTypeBool _arg)\n\nShould node size specifications be obeyed at leaf nodes only or\n(with scaling as required to meet constraints) at every node in\nthe tree? This defaults to true, so that leaf nodes are scaled\naccording to the size specification provided, and the parent node\nsizes are calculated by the algorithm.\n"},
  {"GetSizeLeafNodesOnly", PyvtkCosmicTreeLayoutStrategy_GetSizeLeafNodesOnly, METH_VARARGS,
   "GetSizeLeafNodesOnly(self) -> int\nC++: virtual vtkTypeBool GetSizeLeafNodesOnly()\n\n"},
  {"SizeLeafNodesOnlyOn", PyvtkCosmicTreeLayoutStrategy_SizeLeafNodesOnlyOn, METH_VARARGS,
   "SizeLeafNodesOnlyOn(self) -> None\nC++: virtual void SizeLeafNodesOnlyOn()\n\n"},
  {"SizeLeafNodesOnlyOff", PyvtkCosmicTreeLayoutStrategy_SizeLeafNodesOnlyOff, METH_VARARGS,
   "SizeLeafNodesOnlyOff(self) -> None\nC++: virtual void SizeLeafNodesOnlyOff()\n\n"},
  {"SetLayoutDepth", PyvtkCosmicTreeLayoutStrategy_SetLayoutDepth, METH_VARARGS,
   "SetLayoutDepth(self, _arg:int) -> None\nC++: virtual void SetLayoutDepth(int _arg)\n\nHow many levels of the tree should be laid out? For large trees,\nyou may wish to set the root and maximum depth in order to\nretrieve the layout for the visible portion of the tree. When\nthis value is zero or negative, all nodes below and including the\nLayoutRoot will be presented. This defaults to 0.\n"},
  {"GetLayoutDepth", PyvtkCosmicTreeLayoutStrategy_GetLayoutDepth, METH_VARARGS,
   "GetLayoutDepth(self) -> int\nC++: virtual int GetLayoutDepth()\n\n"},
  {"SetLayoutRoot", PyvtkCosmicTreeLayoutStrategy_SetLayoutRoot, METH_VARARGS,
   "SetLayoutRoot(self, _arg:int) -> None\nC++: virtual void SetLayoutRoot(vtkIdType _arg)\n\nWhat is the top-most tree node to lay out? This node will become\nthe largest containing circle in the layout. Use this in\ncombination with SetLayoutDepth to retrieve the layout of a\nsubtree of interest for rendering. Setting LayoutRoot to a\nnegative number signals that the root node of the tree should be\nused as the root node of the layout. This defaults to -1.\n"},
  {"GetLayoutRoot", PyvtkCosmicTreeLayoutStrategy_GetLayoutRoot, METH_VARARGS,
   "GetLayoutRoot(self) -> int\nC++: virtual vtkIdType GetLayoutRoot()\n\n"},
  {"SetNodeSizeArrayName", PyvtkCosmicTreeLayoutStrategy_SetNodeSizeArrayName, METH_VARARGS,
   "SetNodeSizeArrayName(self, _arg:str) -> None\nC++: virtual void SetNodeSizeArrayName(const char *_arg)\n\nSet the array to be used for sizing nodes. If this is set to an\nempty string or nullptr (the default), then all leaf nodes (or\nall nodes, when SizeLeafNodesOnly is false) will be assigned a\nunit size.\n"},
  {"GetNodeSizeArrayName", PyvtkCosmicTreeLayoutStrategy_GetNodeSizeArrayName, METH_VARARGS,
   "GetNodeSizeArrayName(self) -> str\nC++: virtual char *GetNodeSizeArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCosmicTreeLayoutStrategy_Doc =
  "vtkCosmicTreeLayoutStrategy - tree layout strategy reminiscent of\nastronomical systems\n\n"
  "Superclass: vtkGraphLayoutStrategy\n\n"
  "This layout strategy takes an input tree and places all the children\n"
  "of a node into a containing circle. The placement is such that each\n"
  "child placed can be represented with a circle tangent to the\n"
  "containing circle and (usually) 2 other children. The interior of the\n"
  "circle is left empty so that graph edges drawn on top of the tree\n"
  "will not obfuscate the tree. However, when one child is much larger\n"
  "than all the others, it may encroach on the center of the containing\n"
  "circle; that's OK, because it's large enough not to be obscured by\n"
  "edges drawn atop it.\n\n"
  "@par Thanks: Thanks to the galaxy and David Thompson hierarchically\n"
  "nested inside it for inspiring this layout strategy.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCosmicTreeLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkCosmicTreeLayoutStrategy", // tp_name
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
  PyvtkCosmicTreeLayoutStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCosmicTreeLayoutStrategy_StaticNew()
{
  return vtkCosmicTreeLayoutStrategy::New();
}

PyObject *PyvtkCosmicTreeLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCosmicTreeLayoutStrategy_Type, PyvtkCosmicTreeLayoutStrategy_Methods,
    "vtkCosmicTreeLayoutStrategy",
 &PyvtkCosmicTreeLayoutStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCosmicTreeLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCosmicTreeLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCosmicTreeLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

