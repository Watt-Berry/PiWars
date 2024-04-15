// python wrapper for vtkExtractSelectedGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractSelectedGraph.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelectedGraph(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractSelectedGraph_ClassNew(); }


static PyObject *
PyvtkExtractSelectedGraph_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectedGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectedGraph *tempr = vtkExtractSelectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedGraph::NewInstance());

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
PyvtkExtractSelectedGraph_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractSelectedGraph::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractSelectedGraph::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionConnection(temp0);
    }
    else
    {
      op->vtkExtractSelectedGraph::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_SetAnnotationLayersConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLayersConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLayersConnection(temp0);
    }
    else
    {
      op->vtkExtractSelectedGraph::SetAnnotationLayersConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_SetRemoveIsolatedVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveIsolatedVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveIsolatedVertices(temp0);
    }
    else
    {
      op->vtkExtractSelectedGraph::SetRemoveIsolatedVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_GetRemoveIsolatedVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveIsolatedVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveIsolatedVertices() :
      op->vtkExtractSelectedGraph::GetRemoveIsolatedVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_RemoveIsolatedVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIsolatedVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveIsolatedVerticesOn();
    }
    else
    {
      op->vtkExtractSelectedGraph::RemoveIsolatedVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_RemoveIsolatedVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIsolatedVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveIsolatedVerticesOff();
    }
    else
    {
      op->vtkExtractSelectedGraph::RemoveIsolatedVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedGraph_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedGraph *op = static_cast<vtkExtractSelectedGraph *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkExtractSelectedGraph::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSelectedGraph_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectedGraph_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectedGraph_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectedGraph_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractSelectedGraph\nC++: static vtkExtractSelectedGraph *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectedGraph_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractSelectedGraph\nC++: vtkExtractSelectedGraph *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractSelectedGraph_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractSelectedGraph_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSelectionConnection", PyvtkExtractSelectedGraph_SetSelectionConnection, METH_VARARGS,
   "SetSelectionConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void SetSelectionConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the\nselection).\n"},
  {"SetAnnotationLayersConnection", PyvtkExtractSelectedGraph_SetAnnotationLayersConnection, METH_VARARGS,
   "SetAnnotationLayersConnection(self, in_:vtkAlgorithmOutput)\n    -> None\nC++: void SetAnnotationLayersConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the third input (i.e. the\nannotation layers).\n"},
  {"SetRemoveIsolatedVertices", PyvtkExtractSelectedGraph_SetRemoveIsolatedVertices, METH_VARARGS,
   "SetRemoveIsolatedVertices(self, _arg:bool) -> None\nC++: virtual void SetRemoveIsolatedVertices(bool _arg)\n\nIf set, removes vertices with no adjacent edges in an edge\nselection. A vertex selection ignores this flag and always\nreturns the full set of selected vertices.  Default is on.\n"},
  {"GetRemoveIsolatedVertices", PyvtkExtractSelectedGraph_GetRemoveIsolatedVertices, METH_VARARGS,
   "GetRemoveIsolatedVertices(self) -> bool\nC++: virtual bool GetRemoveIsolatedVertices()\n\n"},
  {"RemoveIsolatedVerticesOn", PyvtkExtractSelectedGraph_RemoveIsolatedVerticesOn, METH_VARARGS,
   "RemoveIsolatedVerticesOn(self) -> None\nC++: virtual void RemoveIsolatedVerticesOn()\n\n"},
  {"RemoveIsolatedVerticesOff", PyvtkExtractSelectedGraph_RemoveIsolatedVerticesOff, METH_VARARGS,
   "RemoveIsolatedVerticesOff(self) -> None\nC++: virtual void RemoveIsolatedVerticesOff()\n\n"},
  {"FillInputPortInformation", PyvtkExtractSelectedGraph_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSpecify the first vtkGraph input and the second vtkSelection\ninput.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractSelectedGraph_Doc =
  "vtkExtractSelectedGraph - return a subgraph of a vtkGraph\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "The first input is a vtkGraph to take a subgraph from. The second\n"
  "input (optional) is a vtkSelection containing selected indices. The\n"
  "third input (optional) is a vtkAnnotationsLayers whose annotations\n"
  "contain selected specifying selected indices. The vtkSelection may\n"
  "have FIELD_TYPE set to POINTS (a vertex selection) or CELLS (an edge\n"
  "selection).  A vertex selection preserves all edges that connect\n"
  "selected vertices.  An edge selection preserves all vertices that are\n"
  "adjacent to at least one selected edge.  Alternately, you may\n"
  "indicate that an edge selection should maintain the full set of\n"
  "vertices, by turning RemoveIsolatedVertices off.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractSelectedGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkExtractSelectedGraph", // tp_name
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
  PyvtkExtractSelectedGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelectedGraph_StaticNew()
{
  return vtkExtractSelectedGraph::New();
}

PyObject *PyvtkExtractSelectedGraph_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractSelectedGraph_Type, PyvtkExtractSelectedGraph_Methods,
    "vtkExtractSelectedGraph",
 &PyvtkExtractSelectedGraph_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectedGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectedGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectedGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

