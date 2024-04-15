// python wrapper for vtkRectilinearGridPartitioner
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRectilinearGridPartitioner.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRectilinearGridPartitioner(PyObject *dict); }
extern "C" { PyObject *PyvtkRectilinearGridPartitioner_ClassNew(); }


static PyObject *
PyvtkRectilinearGridPartitioner_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRectilinearGridPartitioner::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGridPartitioner::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRectilinearGridPartitioner *tempr = vtkRectilinearGridPartitioner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGridPartitioner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGridPartitioner::NewInstance());

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
PyvtkRectilinearGridPartitioner_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRectilinearGridPartitioner::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRectilinearGridPartitioner::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkRectilinearGridPartitioner::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPartitions(temp0);
    }
    else
    {
      op->vtkRectilinearGridPartitioner::SetNumberOfPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkRectilinearGridPartitioner::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfGhostLayers(temp0);
    }
    else
    {
      op->vtkRectilinearGridPartitioner::SetNumberOfGhostLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_GetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateNodes() :
      op->vtkRectilinearGridPartitioner::GetDuplicateNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_SetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDuplicateNodes(temp0);
    }
    else
    {
      op->vtkRectilinearGridPartitioner::SetDuplicateNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_DuplicateNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateNodesOn();
    }
    else
    {
      op->vtkRectilinearGridPartitioner::DuplicateNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridPartitioner_DuplicateNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridPartitioner *op = static_cast<vtkRectilinearGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateNodesOff();
    }
    else
    {
      op->vtkRectilinearGridPartitioner::DuplicateNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRectilinearGridPartitioner_Methods[] = {
  {"IsTypeOf", PyvtkRectilinearGridPartitioner_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRectilinearGridPartitioner_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRectilinearGridPartitioner_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRectilinearGridPartitioner\nC++: static vtkRectilinearGridPartitioner *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRectilinearGridPartitioner_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRectilinearGridPartitioner\nC++: vtkRectilinearGridPartitioner *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRectilinearGridPartitioner_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRectilinearGridPartitioner_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfPartitions", PyvtkRectilinearGridPartitioner_GetNumberOfPartitions, METH_VARARGS,
   "GetNumberOfPartitions(self) -> int\nC++: virtual int GetNumberOfPartitions()\n\nSet/Get macro for the number of subdivisions.\n"},
  {"SetNumberOfPartitions", PyvtkRectilinearGridPartitioner_SetNumberOfPartitions, METH_VARARGS,
   "SetNumberOfPartitions(self, _arg:int) -> None\nC++: virtual void SetNumberOfPartitions(int _arg)\n\n"},
  {"GetNumberOfGhostLayers", PyvtkRectilinearGridPartitioner_GetNumberOfGhostLayers, METH_VARARGS,
   "GetNumberOfGhostLayers(self) -> int\nC++: virtual int GetNumberOfGhostLayers()\n\nSet/Get macro for the number of ghost layers.\n"},
  {"SetNumberOfGhostLayers", PyvtkRectilinearGridPartitioner_SetNumberOfGhostLayers, METH_VARARGS,
   "SetNumberOfGhostLayers(self, _arg:int) -> None\nC++: virtual void SetNumberOfGhostLayers(int _arg)\n\n"},
  {"GetDuplicateNodes", PyvtkRectilinearGridPartitioner_GetDuplicateNodes, METH_VARARGS,
   "GetDuplicateNodes(self) -> int\nC++: virtual vtkTypeBool GetDuplicateNodes()\n\n"},
  {"SetDuplicateNodes", PyvtkRectilinearGridPartitioner_SetDuplicateNodes, METH_VARARGS,
   "SetDuplicateNodes(self, _arg:int) -> None\nC++: virtual void SetDuplicateNodes(vtkTypeBool _arg)\n\n"},
  {"DuplicateNodesOn", PyvtkRectilinearGridPartitioner_DuplicateNodesOn, METH_VARARGS,
   "DuplicateNodesOn(self) -> None\nC++: virtual void DuplicateNodesOn()\n\n"},
  {"DuplicateNodesOff", PyvtkRectilinearGridPartitioner_DuplicateNodesOff, METH_VARARGS,
   "DuplicateNodesOff(self) -> None\nC++: virtual void DuplicateNodesOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRectilinearGridPartitioner_Doc =
  "vtkRectilinearGridPartitioner -  A concrete implementation of\nvtkMultiBlockDataSetAlgorithm that provides\n functionality for partitioning a VTK rectilinear dataset.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "The partitioning\n"
  " method used is Recursive Coordinate Bisection (RCB) where each time\n"
  "the\n"
  " longest dimension is split.\n\n"
  "@sa\n"
  " vtkUniformGridPartitioner vtkStructuredGridPartitioner\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRectilinearGridPartitioner_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkRectilinearGridPartitioner", // tp_name
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
  PyvtkRectilinearGridPartitioner_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRectilinearGridPartitioner_StaticNew()
{
  return vtkRectilinearGridPartitioner::New();
}

PyObject *PyvtkRectilinearGridPartitioner_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRectilinearGridPartitioner_Type, PyvtkRectilinearGridPartitioner_Methods,
    "vtkRectilinearGridPartitioner",
 &PyvtkRectilinearGridPartitioner_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRectilinearGridPartitioner(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRectilinearGridPartitioner_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRectilinearGridPartitioner", o) != 0)
  {
    Py_DECREF(o);
  }

}

