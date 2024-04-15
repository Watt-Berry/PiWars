// python wrapper for vtkSpanTreeLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSpanTreeLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpanTreeLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkSpanTreeLayoutStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkSpanTreeLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpanTreeLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpanTreeLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpanTreeLayoutStrategy *tempr = vtkSpanTreeLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpanTreeLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpanTreeLayoutStrategy::NewInstance());

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
PyvtkSpanTreeLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSpanTreeLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSpanTreeLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_SetDepthFirstSpanningTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthFirstSpanningTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthFirstSpanningTree(temp0);
    }
    else
    {
      op->vtkSpanTreeLayoutStrategy::SetDepthFirstSpanningTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_GetDepthFirstSpanningTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthFirstSpanningTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDepthFirstSpanningTree() :
      op->vtkSpanTreeLayoutStrategy::GetDepthFirstSpanningTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_DepthFirstSpanningTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthFirstSpanningTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DepthFirstSpanningTreeOn();
    }
    else
    {
      op->vtkSpanTreeLayoutStrategy::DepthFirstSpanningTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_DepthFirstSpanningTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DepthFirstSpanningTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DepthFirstSpanningTreeOff();
    }
    else
    {
      op->vtkSpanTreeLayoutStrategy::DepthFirstSpanningTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpanTreeLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpanTreeLayoutStrategy *op = static_cast<vtkSpanTreeLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkSpanTreeLayoutStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSpanTreeLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkSpanTreeLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpanTreeLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpanTreeLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSpanTreeLayoutStrategy\nC++: static vtkSpanTreeLayoutStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpanTreeLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSpanTreeLayoutStrategy\nC++: vtkSpanTreeLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSpanTreeLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSpanTreeLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDepthFirstSpanningTree", PyvtkSpanTreeLayoutStrategy_SetDepthFirstSpanningTree, METH_VARARGS,
   "SetDepthFirstSpanningTree(self, _arg:bool) -> None\nC++: virtual void SetDepthFirstSpanningTree(bool _arg)\n\nIf set, base the layout on a depth-first spanning tree, rather\nthan the default breadth-first spanning tree. Switching between\nDFT and BFT may significantly change the layout, and choice must\nbe made on a per-graph basis. Default value is off.\n"},
  {"GetDepthFirstSpanningTree", PyvtkSpanTreeLayoutStrategy_GetDepthFirstSpanningTree, METH_VARARGS,
   "GetDepthFirstSpanningTree(self) -> bool\nC++: virtual bool GetDepthFirstSpanningTree()\n\n"},
  {"DepthFirstSpanningTreeOn", PyvtkSpanTreeLayoutStrategy_DepthFirstSpanningTreeOn, METH_VARARGS,
   "DepthFirstSpanningTreeOn(self) -> None\nC++: virtual void DepthFirstSpanningTreeOn()\n\n"},
  {"DepthFirstSpanningTreeOff", PyvtkSpanTreeLayoutStrategy_DepthFirstSpanningTreeOff, METH_VARARGS,
   "DepthFirstSpanningTreeOff(self) -> None\nC++: virtual void DepthFirstSpanningTreeOff()\n\n"},
  {"Layout", PyvtkSpanTreeLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nPerform the layout.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSpanTreeLayoutStrategy_Doc =
  "vtkSpanTreeLayoutStrategy - vtkSpanTreeLayout is a strategy for\ndrawing directed graphs that works by first extracting a spanning\ntree (more accurately, a spanning forest), and using this both to\nposition graph vertices and to plan the placement of non\n\n"
  "Superclass: vtkGraphLayoutStrategy\n\n"
  "-tree edges.  The latter are drawn with the aid of edge points to\n"
  "    produce a tidy drawing.\n\n"
  "The approach is best suited to \"quasi-trees\", graphs where the number\n"
  "of edges is of the same order as the number of nodes; it is less well\n"
  "suited to denser graphs.  The boolean flag DepthFirstSpanningTree\n"
  "determines whether a depth-first or breadth-first strategy is used to\n"
  "construct the underlying forest, and the choice of strategy affects\n"
  "the output layout significantly.  Informal experiments suggest that\n"
  "the breadth-first strategy is better for denser graphs.\n\n"
  "Different layouts could also be produced by plugging in alternative\n"
  "tree layout strategies.  To work with the method of routing non-tree\n"
  "edges, any strategy should draw a tree so that levels are equally\n"
  "spaced along the z-axis, precluding for example the use of a radial\n"
  "or balloon layout.\n\n"
  "vtkSpanTreeLayout is based on an approach to 3D graph layout first\n"
  "developed as part of the \"tulip\" tool by Dr. David Auber at LaBRI,\n"
  "U.Bordeaux: see www.tulip-software.org\n\n"
  "This implementation departs from the original version in that: (a) it\n"
  "is reconstructed to use Titan/VTK data structures; (b) it uses a\n"
  "faster method for dealing with non-tree edges,\n"
  "    requiring at most two edge points per edge (c) allows for\n"
  "plugging in different tree layout methods (d) allows selection of two\n"
  "different strategies for building\n"
  "    the underlying layout tree, which can yield significantly\n"
  "    different results depending on the data.\n\n"
  "@par Thanks: Thanks to David Duke from the University of Leeds for\n"
  "providing this implementation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSpanTreeLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkSpanTreeLayoutStrategy", // tp_name
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
  PyvtkSpanTreeLayoutStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpanTreeLayoutStrategy_StaticNew()
{
  return vtkSpanTreeLayoutStrategy::New();
}

PyObject *PyvtkSpanTreeLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSpanTreeLayoutStrategy_Type, PyvtkSpanTreeLayoutStrategy_Methods,
    "vtkSpanTreeLayoutStrategy",
 &PyvtkSpanTreeLayoutStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpanTreeLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpanTreeLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpanTreeLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

