// python wrapper for vtkStreamGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStreamGraph.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamGraph(PyObject *dict); }
extern "C" { PyObject *PyvtkStreamGraph_ClassNew(); }


static PyObject *
PyvtkStreamGraph_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamGraph *tempr = vtkStreamGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamGraph::NewInstance());

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
PyvtkStreamGraph_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStreamGraph::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStreamGraph::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseEdgeWindow(temp0);
    }
    else
    {
      op->vtkStreamGraph::SetUseEdgeWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetUseEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseEdgeWindow() :
      op->vtkStreamGraph::GetUseEdgeWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_UseEdgeWindowOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeWindowOn();
    }
    else
    {
      op->vtkStreamGraph::UseEdgeWindowOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_UseEdgeWindowOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeWindowOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeWindowOff();
    }
    else
    {
      op->vtkStreamGraph::UseEdgeWindowOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeWindowArrayName(temp0);
    }
    else
    {
      op->vtkStreamGraph::SetEdgeWindowArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetEdgeWindowArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeWindowArrayName() :
      op->vtkStreamGraph::GetEdgeWindowArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_SetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeWindow(temp0);
    }
    else
    {
      op->vtkStreamGraph::SetEdgeWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamGraph_GetEdgeWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamGraph *op = static_cast<vtkStreamGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeWindow() :
      op->vtkStreamGraph::GetEdgeWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamGraph_Methods[] = {
  {"IsTypeOf", PyvtkStreamGraph_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamGraph_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamGraph_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStreamGraph\nC++: static vtkStreamGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamGraph_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStreamGraph\nC++: vtkStreamGraph *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStreamGraph_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStreamGraph_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetUseEdgeWindow", PyvtkStreamGraph_SetUseEdgeWindow, METH_VARARGS,
   "SetUseEdgeWindow(self, _arg:bool) -> None\nC++: virtual void SetUseEdgeWindow(bool _arg)\n\nWhether to use an edge window array. The default is to not use a\nwindow array.\n"},
  {"GetUseEdgeWindow", PyvtkStreamGraph_GetUseEdgeWindow, METH_VARARGS,
   "GetUseEdgeWindow(self) -> bool\nC++: virtual bool GetUseEdgeWindow()\n\n"},
  {"UseEdgeWindowOn", PyvtkStreamGraph_UseEdgeWindowOn, METH_VARARGS,
   "UseEdgeWindowOn(self) -> None\nC++: virtual void UseEdgeWindowOn()\n\n"},
  {"UseEdgeWindowOff", PyvtkStreamGraph_UseEdgeWindowOff, METH_VARARGS,
   "UseEdgeWindowOff(self) -> None\nC++: virtual void UseEdgeWindowOff()\n\n"},
  {"SetEdgeWindowArrayName", PyvtkStreamGraph_SetEdgeWindowArrayName, METH_VARARGS,
   "SetEdgeWindowArrayName(self, _arg:str) -> None\nC++: virtual void SetEdgeWindowArrayName(const char *_arg)\n\nThe edge window array. The default array name is \"time\".\n"},
  {"GetEdgeWindowArrayName", PyvtkStreamGraph_GetEdgeWindowArrayName, METH_VARARGS,
   "GetEdgeWindowArrayName(self) -> str\nC++: virtual char *GetEdgeWindowArrayName()\n\n"},
  {"SetEdgeWindow", PyvtkStreamGraph_SetEdgeWindow, METH_VARARGS,
   "SetEdgeWindow(self, _arg:float) -> None\nC++: virtual void SetEdgeWindow(double _arg)\n\nThe time window amount. Edges with values lower than the maximum\nvalue minus this window will be removed from the graph. The\ndefault edge window is 10000.\n"},
  {"GetEdgeWindow", PyvtkStreamGraph_GetEdgeWindow, METH_VARARGS,
   "GetEdgeWindow(self) -> float\nC++: virtual double GetEdgeWindow()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStreamGraph_Doc =
  "vtkStreamGraph - combines two graphs\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkStreamGraph iteratively collects information from the input graph\n"
  "and combines it in the output graph. It internally maintains a graph\n"
  "instance that is incrementally updated every time the filter is\n"
  "called.\n\n"
  "Each update, vtkMergeGraphs is used to combine this filter's input\n"
  "with the internal graph.\n\n"
  "If you can use an edge window array to filter out old edges based on\n"
  "a moving threshold.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkStreamGraph", // tp_name
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
  PyvtkStreamGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamGraph_StaticNew()
{
  return vtkStreamGraph::New();
}

PyObject *PyvtkStreamGraph_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStreamGraph_Type, PyvtkStreamGraph_Methods,
    "vtkStreamGraph",
 &PyvtkStreamGraph_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStreamGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

