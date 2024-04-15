// python wrapper for vtkUndirectedGraph
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
#include "vtkUndirectedGraph.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUndirectedGraph(PyObject *dict); }
extern "C" { PyObject *PyvtkUndirectedGraph_ClassNew(); }

#ifndef DECLARED_PyvtkGraph_ClassNew
extern "C" { PyObject *PyvtkGraph_ClassNew(); }
#define DECLARED_PyvtkGraph_ClassNew
#endif

static PyObject *
PyvtkUndirectedGraph_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUndirectedGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUndirectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUndirectedGraph *tempr = vtkUndirectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUndirectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUndirectedGraph::NewInstance());

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
PyvtkUndirectedGraph_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUndirectedGraph::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUndirectedGraph::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUndirectedGraph::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_GetInDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetInDegree(temp0) :
      op->vtkUndirectedGraph::GetInDegree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_GetInEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkInEdgeType tempr = (ap.IsBound() ?
      op->GetInEdge(temp0, temp1) :
      op->vtkUndirectedGraph::GetInEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkInEdgeType");
    }
  }

  return result;
}

static PyObject *
PyvtkUndirectedGraph_GetInEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  long long temp0;
  long long temp1;
  vtkGraphEdge *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGraphEdge"))
  {
    if (ap.IsBound())
    {
      op->GetInEdge(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUndirectedGraph::GetInEdge(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUndirectedGraph_GetInEdge(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUndirectedGraph_GetInEdge_s1(self, args);
    case 3:
      return PyvtkUndirectedGraph_GetInEdge_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInEdge");
  return nullptr;
}


static PyObject *
PyvtkUndirectedGraph_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkUndirectedGraph *tempr = vtkUndirectedGraph::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUndirectedGraph_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUndirectedGraph *tempr = vtkUndirectedGraph::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUndirectedGraph_GetData_Methods[] = {
  {"GetData", PyvtkUndirectedGraph_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkUndirectedGraph_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUndirectedGraph_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUndirectedGraph_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUndirectedGraph_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkUndirectedGraph_GetInEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  long long temp0;
  vtkInEdgeIterator *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInEdgeIterator"))
  {
    if (ap.IsBound())
    {
      op->GetInEdges(temp0, temp1);
    }
    else
    {
      op->vtkUndirectedGraph::GetInEdges(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUndirectedGraph_IsStructureValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStructureValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraph *op = static_cast<vtkUndirectedGraph *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStructureValid(temp0) :
      op->vtkUndirectedGraph::IsStructureValid(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUndirectedGraph_Methods[] = {
  {"IsTypeOf", PyvtkUndirectedGraph_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUndirectedGraph_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUndirectedGraph_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUndirectedGraph\nC++: static vtkUndirectedGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUndirectedGraph_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUndirectedGraph\nC++: vtkUndirectedGraph *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUndirectedGraph_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUndirectedGraph_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkUndirectedGraph_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetInDegree", PyvtkUndirectedGraph_GetInDegree, METH_VARARGS,
   "GetInDegree(self, v:int) -> int\nC++: vtkIdType GetInDegree(vtkIdType v) override;\n\nReturns the full degree of the vertex.\n"},
  {"GetInEdge", PyvtkUndirectedGraph_GetInEdge, METH_VARARGS,
   "GetInEdge(self, v:int, i:int) -> vtkInEdgeType\nC++: vtkInEdgeType GetInEdge(vtkIdType v, vtkIdType i) override;\nGetInEdge(self, v:int, i:int, e:vtkGraphEdge) -> None\nC++: void GetInEdge(vtkIdType v, vtkIdType i, vtkGraphEdge *e)\n    override;\n\nRandom-access method for retrieving the in edges of a vertex. For\nan undirected graph, this is the same as the out edges.\n"},
  {"GetData", PyvtkUndirectedGraph_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkUndirectedGraph\nC++: static vtkUndirectedGraph *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkUndirectedGraph\nC++: static vtkUndirectedGraph *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a graph from an information vector.\n"},
  {"GetInEdges", PyvtkUndirectedGraph_GetInEdges, METH_VARARGS,
   "GetInEdges(self, v:int, it:vtkInEdgeIterator) -> None\nC++: void GetInEdges(vtkIdType v, vtkInEdgeIterator *it) override;\n\nInitialize the iterator to get the incoming edges to a vertex.\nFor an undirected graph, this is all incident edges.\n"},
  {"IsStructureValid", PyvtkUndirectedGraph_IsStructureValid, METH_VARARGS,
   "IsStructureValid(self, g:vtkGraph) -> bool\nC++: bool IsStructureValid(vtkGraph *g) override;\n\nCheck the structure, and accept it if it is a valid undirected\ngraph. This is public to allow the ToDirected/UndirectedGraph to\nwork.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUndirectedGraph_Doc =
  "vtkUndirectedGraph - An undirected graph.\n\n"
  "Superclass: vtkGraph\n\n"
  "vtkUndirectedGraph is a collection of vertices along with a\n"
  "collection of undirected edges (they connect two vertices in no\n"
  "particular order). ShallowCopy(), DeepCopy(), CheckedShallowCopy(),\n"
  "CheckedDeepCopy() accept instances of vtkUndirectedGraph and\n"
  "vtkMutableUndirectedGraph. GetOutEdges(v, it) and GetInEdges(v, it)\n"
  "return the same list of edges, which is the list of all edges which\n"
  "have a v as an endpoint. GetInDegree(v), GetOutDegree(v) and\n"
  "GetDegree(v) all return the full degree of vertex v.\n\n"
  "vtkUndirectedGraph is read-only. To create an undirected graph, use\n"
  "an instance of vtkMutableUndirectedGraph, then you may set the\n"
  "structure to a vtkUndirectedGraph using ShallowCopy().\n\n"
  "@sa\n"
  "vtkGraph vtkMutableUndirectedGraph\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUndirectedGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkUndirectedGraph", // tp_name
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
  PyvtkUndirectedGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUndirectedGraph_StaticNew()
{
  return vtkUndirectedGraph::New();
}

PyObject *PyvtkUndirectedGraph_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUndirectedGraph_Type, PyvtkUndirectedGraph_Methods,
    "vtkUndirectedGraph",
 &PyvtkUndirectedGraph_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraph_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUndirectedGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUndirectedGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUndirectedGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

