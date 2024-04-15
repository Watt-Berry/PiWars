// python wrapper for vtkMutableGraphHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkMutableGraphHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMutableGraphHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkMutableGraphHelper_ClassNew(); }


static PyObject *
PyvtkMutableGraphHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMutableGraphHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMutableGraphHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMutableGraphHelper *tempr = vtkMutableGraphHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMutableGraphHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMutableGraphHelper::NewInstance());

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
PyvtkMutableGraphHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMutableGraphHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMutableGraphHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->SetGraph(temp0);
    }
    else
    {
      op->vtkMutableGraphHelper::SetGraph(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraph() :
      op->vtkMutableGraphHelper::GetGraph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_AddEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkEdgeType tempr = (ap.IsBound() ?
      op->AddEdge(temp0, temp1) :
      op->vtkMutableGraphHelper::AddEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkEdgeType");
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_AddGraphEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGraphEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkGraphEdge *tempr = (ap.IsBound() ?
      op->AddGraphEdge(temp0, temp1) :
      op->vtkMutableGraphHelper::AddGraphEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_AddVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->AddVertex() :
      op->vtkMutableGraphHelper::AddVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveVertex(temp0);
    }
    else
    {
      op->vtkMutableGraphHelper::RemoveVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->RemoveVertices(temp0);
    }
    else
    {
      op->vtkMutableGraphHelper::RemoveVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveEdge(temp0);
    }
    else
    {
      op->vtkMutableGraphHelper::RemoveEdge(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMutableGraphHelper_RemoveEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMutableGraphHelper *op = static_cast<vtkMutableGraphHelper *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->RemoveEdges(temp0);
    }
    else
    {
      op->vtkMutableGraphHelper::RemoveEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMutableGraphHelper_Methods[] = {
  {"IsTypeOf", PyvtkMutableGraphHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMutableGraphHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMutableGraphHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMutableGraphHelper\nC++: static vtkMutableGraphHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMutableGraphHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMutableGraphHelper\nC++: vtkMutableGraphHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMutableGraphHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMutableGraphHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGraph", PyvtkMutableGraphHelper_SetGraph, METH_VARARGS,
   "SetGraph(self, g:vtkGraph) -> None\nC++: void SetGraph(vtkGraph *g)\n\nSet the underlying graph that you want to modify with this\nhelper. The graph must be an instance of vtkMutableDirectedGraph\nor vtkMutableUndirectedGraph.\n"},
  {"GetGraph", PyvtkMutableGraphHelper_GetGraph, METH_VARARGS,
   "GetGraph(self) -> vtkGraph\nC++: vtkGraph *GetGraph()\n\n"},
  {"AddEdge", PyvtkMutableGraphHelper_AddEdge, METH_VARARGS,
   "AddEdge(self, u:int, v:int) -> vtkEdgeType\nC++: vtkEdgeType AddEdge(vtkIdType u, vtkIdType v)\n\nAdd an edge to the underlying mutable graph.\n"},
  {"AddGraphEdge", PyvtkMutableGraphHelper_AddGraphEdge, METH_VARARGS,
   "AddGraphEdge(self, u:int, v:int) -> vtkGraphEdge\nC++: vtkGraphEdge *AddGraphEdge(vtkIdType u, vtkIdType v)\n\n"},
  {"AddVertex", PyvtkMutableGraphHelper_AddVertex, METH_VARARGS,
   "AddVertex(self) -> int\nC++: vtkIdType AddVertex()\n\nAdd a vertex to the underlying mutable graph.\n"},
  {"RemoveVertex", PyvtkMutableGraphHelper_RemoveVertex, METH_VARARGS,
   "RemoveVertex(self, v:int) -> None\nC++: void RemoveVertex(vtkIdType v)\n\nRemove a vertex from the underlying mutable graph.\n"},
  {"RemoveVertices", PyvtkMutableGraphHelper_RemoveVertices, METH_VARARGS,
   "RemoveVertices(self, verts:vtkIdTypeArray) -> None\nC++: void RemoveVertices(vtkIdTypeArray *verts)\n\nRemove a collection of vertices from the underlying mutable\ngraph.\n"},
  {"RemoveEdge", PyvtkMutableGraphHelper_RemoveEdge, METH_VARARGS,
   "RemoveEdge(self, e:int) -> None\nC++: void RemoveEdge(vtkIdType e)\n\nRemove an edge from the underlying mutable graph.\n"},
  {"RemoveEdges", PyvtkMutableGraphHelper_RemoveEdges, METH_VARARGS,
   "RemoveEdges(self, edges:vtkIdTypeArray) -> None\nC++: void RemoveEdges(vtkIdTypeArray *edges)\n\nRemove a collection of edges from the underlying mutable graph.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMutableGraphHelper_Doc =
  "vtkMutableGraphHelper - Helper class for building a directed or\n  directed graph\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMutableGraphHelper has helper methods AddVertex and AddEdge which\n"
  "add vertices/edges to the underlying mutable graph. This is helpful\n"
  "in filters which need to (re)construct graphs which may be either\n"
  "directed or undirected.\n\n"
  "@sa\n"
  "vtkGraph vtkMutableDirectedGraph vtkMutableUndirectedGraph\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMutableGraphHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkMutableGraphHelper", // tp_name
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
  PyvtkMutableGraphHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMutableGraphHelper_StaticNew()
{
  return vtkMutableGraphHelper::New();
}

PyObject *PyvtkMutableGraphHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMutableGraphHelper_Type, PyvtkMutableGraphHelper_Methods,
    "vtkMutableGraphHelper",
 &PyvtkMutableGraphHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMutableGraphHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMutableGraphHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMutableGraphHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

