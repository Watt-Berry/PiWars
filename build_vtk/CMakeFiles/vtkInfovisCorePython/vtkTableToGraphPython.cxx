// python wrapper for vtkTableToGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTableToGraph.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableToGraph(PyObject *dict); }
extern "C" { PyObject *PyvtkTableToGraph_ClassNew(); }


static PyObject *
PyvtkTableToGraph_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableToGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableToGraph *tempr = vtkTableToGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableToGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToGraph::NewInstance());

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
PyvtkTableToGraph_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTableToGraph::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTableToGraph::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_AddLinkVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->AddLinkVertex(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTableToGraph::AddLinkVertex(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_ClearLinkVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLinkVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLinkVertices();
    }
    else
    {
      op->vtkTableToGraph::ClearLinkVertices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_AddLinkEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLinkEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddLinkEdge(temp0, temp1);
    }
    else
    {
      op->vtkTableToGraph::AddLinkEdge(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_ClearLinkEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLinkEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLinkEdges();
    }
    else
    {
      op->vtkTableToGraph::ClearLinkEdges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetLinkGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinkGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMutableDirectedGraph *tempr = (ap.IsBound() ?
      op->GetLinkGraph() :
      op->vtkTableToGraph::GetLinkGraph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetLinkGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinkGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkMutableDirectedGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMutableDirectedGraph"))
  {
    if (ap.IsBound())
    {
      op->SetLinkGraph(temp0);
    }
    else
    {
      op->vtkTableToGraph::SetLinkGraph(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_LinkColumnPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkColumnPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkStringArray *temp0 = nullptr;
  vtkStringArray *temp1 = nullptr;
  vtkBitArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkStringArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkBitArray")))
  {
    if (ap.IsBound())
    {
      op->LinkColumnPath(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTableToGraph::LinkColumnPath(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirected(temp0);
    }
    else
    {
      op->vtkTableToGraph::SetDirected(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirected() :
      op->vtkTableToGraph::GetDirected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_DirectedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectedOn();
    }
    else
    {
      op->vtkTableToGraph::DirectedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_DirectedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectedOff();
    }
    else
    {
      op->vtkTableToGraph::DirectedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTableToGraph::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToGraph_SetVertexTableConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexTableConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToGraph *op = static_cast<vtkTableToGraph *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetVertexTableConnection(temp0);
    }
    else
    {
      op->vtkTableToGraph::SetVertexTableConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTableToGraph_Methods[] = {
  {"IsTypeOf", PyvtkTableToGraph_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableToGraph_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableToGraph_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTableToGraph\nC++: static vtkTableToGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableToGraph_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTableToGraph\nC++: vtkTableToGraph *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTableToGraph_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTableToGraph_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddLinkVertex", PyvtkTableToGraph_AddLinkVertex, METH_VARARGS,
   "AddLinkVertex(self, column:str, domain:str=..., hidden:int=0)\n    -> None\nC++: void AddLinkVertex(const char *column,\n    const char *domain=nullptr, int hidden=0)\n\nAdd a vertex to the link graph.  Specify the column name, the\ndomain name for the column, and whether the column is hidden.\n"},
  {"ClearLinkVertices", PyvtkTableToGraph_ClearLinkVertices, METH_VARARGS,
   "ClearLinkVertices(self) -> None\nC++: void ClearLinkVertices()\n\nClear the link graph vertices.  This also clears all edges.\n"},
  {"AddLinkEdge", PyvtkTableToGraph_AddLinkEdge, METH_VARARGS,
   "AddLinkEdge(self, column1:str, column2:str) -> None\nC++: void AddLinkEdge(const char *column1, const char *column2)\n\nAdd an edge to the link graph.  Specify the names of the columns\nto link.\n"},
  {"ClearLinkEdges", PyvtkTableToGraph_ClearLinkEdges, METH_VARARGS,
   "ClearLinkEdges(self) -> None\nC++: void ClearLinkEdges()\n\nClear the link graph edges.  The graph vertices will remain.\n"},
  {"GetLinkGraph", PyvtkTableToGraph_GetLinkGraph, METH_VARARGS,
   "GetLinkGraph(self) -> vtkMutableDirectedGraph\nC++: virtual vtkMutableDirectedGraph *GetLinkGraph()\n\nThe graph describing how to link the columns in the table.\n"},
  {"SetLinkGraph", PyvtkTableToGraph_SetLinkGraph, METH_VARARGS,
   "SetLinkGraph(self, g:vtkMutableDirectedGraph) -> None\nC++: void SetLinkGraph(vtkMutableDirectedGraph *g)\n\n"},
  {"LinkColumnPath", PyvtkTableToGraph_LinkColumnPath, METH_VARARGS,
   "LinkColumnPath(self, column:vtkStringArray,\n    domain:vtkStringArray=..., hidden:vtkBitArray=...) -> None\nC++: void LinkColumnPath(vtkStringArray *column,\n    vtkStringArray *domain=nullptr, vtkBitArray *hidden=nullptr)\n\nLinks the columns in a specific order. This creates a simple path\nas the link graph.\n"},
  {"SetDirected", PyvtkTableToGraph_SetDirected, METH_VARARGS,
   "SetDirected(self, _arg:bool) -> None\nC++: virtual void SetDirected(bool _arg)\n\nSpecify the directedness of the output graph.\n"},
  {"GetDirected", PyvtkTableToGraph_GetDirected, METH_VARARGS,
   "GetDirected(self) -> bool\nC++: virtual bool GetDirected()\n\n"},
  {"DirectedOn", PyvtkTableToGraph_DirectedOn, METH_VARARGS,
   "DirectedOn(self) -> None\nC++: virtual void DirectedOn()\n\n"},
  {"DirectedOff", PyvtkTableToGraph_DirectedOff, METH_VARARGS,
   "DirectedOff(self) -> None\nC++: virtual void DirectedOff()\n\n"},
  {"GetMTime", PyvtkTableToGraph_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the current modified time.\n"},
  {"SetVertexTableConnection", PyvtkTableToGraph_SetVertexTableConnection, METH_VARARGS,
   "SetVertexTableConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void SetVertexTableConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the vertex table input.  This is\nmainly for the benefit of the VTK client/server layer, vanilla\nVTK code should use e.g:\n\n* table_to_graph->SetInputConnection(1, vertex_table->output());\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTableToGraph_Doc =
  "vtkTableToGraph - convert a vtkTable into a vtkGraph\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkTableToGraph converts a table to a graph using an auxiliary link\n"
  "graph.  The link graph specifies how each row in the table should be\n"
  "converted to an edge, or a collection of edges.  It also specifies\n"
  "which columns of the table should be considered part of the same\n"
  "domain, and which columns should be hidden.\n\n"
  "A second, optional, table may be provided as the vertex table. This\n"
  "vertex table must have one or more domain columns whose values match\n"
  "values in the edge table.  The linked column name is specified in the\n"
  "domain array in the link graph.  The output graph will only contain\n"
  "vertices corresponding to a row in the vertex table.  For\n"
  "heterogeneous graphs, you may want to use vtkMergeTables to create a\n"
  "single vertex table.\n\n"
  "The link graph contains the following arrays:\n\n"
  "(1) The \"column\" array has the names of the columns to connect in\n"
  "each table row. This array is required.\n\n"
  "(2) The optional \"domain\" array provides user-defined domain names\n"
  "for each column. Matching domains in multiple columns will merge\n"
  "vertices with the same value from those columns.  By default, all\n"
  "columns are in the same domain. If a vertex table is supplied, the\n"
  "domain indicates the column in the vertex table that the edge table\n"
  "column associates with.  If the user provides a vertex table but no\n"
  "domain names, the output will be an empty graph. Hidden columns do\n"
  "not need valid domain names.\n\n"
  "(3) The optional \"hidden\" array is a bit array specifying whether the\n"
  "column should be hidden.  The resulting graph will contain edges\n"
  "representing connections \"through\" the hidden column, but the\n"
  "vertices for that column will not be present.  By default, no columns\n"
  "are hidden.  Hiding a column in a particular domain hides all columns\n"
  "in that domain.\n\n"
  "The output graph will contain three additional arrays in the vertex\n"
  "data. The \"domain\" column is a string array containing the domain of\n"
  "each vertex. The \"label\" column is a string version of the distinct\n"
  "value that, along with the domain, defines that vertex. The \"ids\"\n"
  "column also contains the distinguishing value, but as a vtkVariant\n"
  "holding the raw value instead of being converted to a string. The\n"
  "\"ids\" column is set as the vertex pedigree ID attribute.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTableToGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkTableToGraph", // tp_name
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
  PyvtkTableToGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableToGraph_StaticNew()
{
  return vtkTableToGraph::New();
}

PyObject *PyvtkTableToGraph_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTableToGraph_Type, PyvtkTableToGraph_Methods,
    "vtkTableToGraph",
 &PyvtkTableToGraph_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableToGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableToGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableToGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

