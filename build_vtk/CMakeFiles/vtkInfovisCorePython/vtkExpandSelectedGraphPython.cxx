// python wrapper for vtkExpandSelectedGraph
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExpandSelectedGraph.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExpandSelectedGraph(PyObject *dict); }
extern "C" { PyObject *PyvtkExpandSelectedGraph_ClassNew(); }


static PyObject *
PyvtkExpandSelectedGraph_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExpandSelectedGraph::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExpandSelectedGraph::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExpandSelectedGraph *tempr = vtkExpandSelectedGraph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExpandSelectedGraph *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExpandSelectedGraph::NewInstance());

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
PyvtkExpandSelectedGraph_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExpandSelectedGraph::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExpandSelectedGraph::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetGraphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetGraphConnection(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetGraphConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkExpandSelectedGraph::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetBFSDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBFSDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBFSDistance(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetBFSDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetBFSDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBFSDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBFSDistance() :
      op->vtkExpandSelectedGraph::GetBFSDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetIncludeShortestPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeShortestPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeShortestPaths(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetIncludeShortestPaths(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetIncludeShortestPaths(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeShortestPaths");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeShortestPaths() :
      op->vtkExpandSelectedGraph::GetIncludeShortestPaths());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IncludeShortestPathsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeShortestPathsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeShortestPathsOn();
    }
    else
    {
      op->vtkExpandSelectedGraph::IncludeShortestPathsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_IncludeShortestPathsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeShortestPathsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeShortestPathsOff();
    }
    else
    {
      op->vtkExpandSelectedGraph::IncludeShortestPathsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDomain(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetDomain(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDomain() :
      op->vtkExpandSelectedGraph::GetDomain());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_SetUseDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDomain(temp0);
    }
    else
    {
      op->vtkExpandSelectedGraph::SetUseDomain(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_GetUseDomain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDomain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDomain() :
      op->vtkExpandSelectedGraph::GetUseDomain());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_UseDomainOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDomainOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDomainOn();
    }
    else
    {
      op->vtkExpandSelectedGraph::UseDomainOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExpandSelectedGraph_UseDomainOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDomainOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExpandSelectedGraph *op = static_cast<vtkExpandSelectedGraph *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDomainOff();
    }
    else
    {
      op->vtkExpandSelectedGraph::UseDomainOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExpandSelectedGraph_Methods[] = {
  {"IsTypeOf", PyvtkExpandSelectedGraph_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExpandSelectedGraph_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExpandSelectedGraph_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExpandSelectedGraph\nC++: static vtkExpandSelectedGraph *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExpandSelectedGraph_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExpandSelectedGraph\nC++: vtkExpandSelectedGraph *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExpandSelectedGraph_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExpandSelectedGraph_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGraphConnection", PyvtkExpandSelectedGraph_SetGraphConnection, METH_VARARGS,
   "SetGraphConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void SetGraphConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the\ngraph).\n"},
  {"FillInputPortInformation", PyvtkExpandSelectedGraph_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSpecify the first vtkSelection input and the second vtkGraph\ninput.\n"},
  {"SetBFSDistance", PyvtkExpandSelectedGraph_SetBFSDistance, METH_VARARGS,
   "SetBFSDistance(self, _arg:int) -> None\nC++: virtual void SetBFSDistance(int _arg)\n\nSet/Get BFSDistance which controls how many 'hops' the selection\nis grown from each seed point in the selection set (defaults to\n1)\n"},
  {"GetBFSDistance", PyvtkExpandSelectedGraph_GetBFSDistance, METH_VARARGS,
   "GetBFSDistance(self) -> int\nC++: virtual int GetBFSDistance()\n\n"},
  {"SetIncludeShortestPaths", PyvtkExpandSelectedGraph_SetIncludeShortestPaths, METH_VARARGS,
   "SetIncludeShortestPaths(self, _arg:bool) -> None\nC++: virtual void SetIncludeShortestPaths(bool _arg)\n\nSet/Get IncludeShortestPaths controls whether this filter tries\nto 'connect' the vertices in the selection set by computing the\nshortest path between the vertices (if such a path exists) Note:\nIncludeShortestPaths is currently non-functional\n"},
  {"GetIncludeShortestPaths", PyvtkExpandSelectedGraph_GetIncludeShortestPaths, METH_VARARGS,
   "GetIncludeShortestPaths(self) -> bool\nC++: virtual bool GetIncludeShortestPaths()\n\n"},
  {"IncludeShortestPathsOn", PyvtkExpandSelectedGraph_IncludeShortestPathsOn, METH_VARARGS,
   "IncludeShortestPathsOn(self) -> None\nC++: virtual void IncludeShortestPathsOn()\n\n"},
  {"IncludeShortestPathsOff", PyvtkExpandSelectedGraph_IncludeShortestPathsOff, METH_VARARGS,
   "IncludeShortestPathsOff(self) -> None\nC++: virtual void IncludeShortestPathsOff()\n\n"},
  {"SetDomain", PyvtkExpandSelectedGraph_SetDomain, METH_VARARGS,
   "SetDomain(self, _arg:str) -> None\nC++: virtual void SetDomain(const char *_arg)\n\nSet/Get the vertex domain to use in the expansion.\n"},
  {"GetDomain", PyvtkExpandSelectedGraph_GetDomain, METH_VARARGS,
   "GetDomain(self) -> str\nC++: virtual char *GetDomain()\n\n"},
  {"SetUseDomain", PyvtkExpandSelectedGraph_SetUseDomain, METH_VARARGS,
   "SetUseDomain(self, _arg:bool) -> None\nC++: virtual void SetUseDomain(bool _arg)\n\nWhether or not to use the domain when deciding to add a vertex to\nthe expansion. Defaults to false.\n"},
  {"GetUseDomain", PyvtkExpandSelectedGraph_GetUseDomain, METH_VARARGS,
   "GetUseDomain(self) -> bool\nC++: virtual bool GetUseDomain()\n\n"},
  {"UseDomainOn", PyvtkExpandSelectedGraph_UseDomainOn, METH_VARARGS,
   "UseDomainOn(self) -> None\nC++: virtual void UseDomainOn()\n\n"},
  {"UseDomainOff", PyvtkExpandSelectedGraph_UseDomainOff, METH_VARARGS,
   "UseDomainOff(self) -> None\nC++: virtual void UseDomainOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExpandSelectedGraph_Doc =
  "vtkExpandSelectedGraph - expands a selection set of a vtkGraph\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "The first input is a vtkSelection containing the selected vertices.\n"
  "The second input is a vtkGraph. This filter 'grows' the selection set\n"
  "in one of the following ways\n"
  "1) SetBFSDistance controls how many 'hops' the selection is grown\n"
  "   from each seed point in the selection set (defaults to 1)\n"
  "2) IncludeShortestPaths controls whether this filter tries to\n"
  "   'connect' the vertices in the selection set by computing the\n"
  "   shortest path between the vertices (if such a path exists) Note:\n"
  "   IncludeShortestPaths is currently non-functional\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExpandSelectedGraph_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkExpandSelectedGraph", // tp_name
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
  PyvtkExpandSelectedGraph_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExpandSelectedGraph_StaticNew()
{
  return vtkExpandSelectedGraph::New();
}

PyObject *PyvtkExpandSelectedGraph_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExpandSelectedGraph_Type, PyvtkExpandSelectedGraph_Methods,
    "vtkExpandSelectedGraph",
 &PyvtkExpandSelectedGraph_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectionAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExpandSelectedGraph(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExpandSelectedGraph_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExpandSelectedGraph", o) != 0)
  {
    Py_DECREF(o);
  }

}

