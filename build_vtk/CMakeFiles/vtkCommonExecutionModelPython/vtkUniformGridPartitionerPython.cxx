// python wrapper for vtkUniformGridPartitioner
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUniformGridPartitioner.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUniformGridPartitioner(PyObject *dict); }
extern "C" { PyObject *PyvtkUniformGridPartitioner_ClassNew(); }

#ifndef DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
extern "C" { PyObject *PyvtkMultiBlockDataSetAlgorithm_ClassNew(); }
#define DECLARED_PyvtkMultiBlockDataSetAlgorithm_ClassNew
#endif

static PyObject *
PyvtkUniformGridPartitioner_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUniformGridPartitioner::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformGridPartitioner::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUniformGridPartitioner *tempr = vtkUniformGridPartitioner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniformGridPartitioner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformGridPartitioner::NewInstance());

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
PyvtkUniformGridPartitioner_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUniformGridPartitioner::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUniformGridPartitioner::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkUniformGridPartitioner::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

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
      op->vtkUniformGridPartitioner::SetNumberOfPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_GetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGhostLayers() :
      op->vtkUniformGridPartitioner::GetNumberOfGhostLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_SetNumberOfGhostLayers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfGhostLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

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
      op->vtkUniformGridPartitioner::SetNumberOfGhostLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_GetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDuplicateNodes() :
      op->vtkUniformGridPartitioner::GetDuplicateNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_SetDuplicateNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDuplicateNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

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
      op->vtkUniformGridPartitioner::SetDuplicateNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_DuplicateNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateNodesOn();
    }
    else
    {
      op->vtkUniformGridPartitioner::DuplicateNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformGridPartitioner_DuplicateNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DuplicateNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformGridPartitioner *op = static_cast<vtkUniformGridPartitioner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DuplicateNodesOff();
    }
    else
    {
      op->vtkUniformGridPartitioner::DuplicateNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUniformGridPartitioner_Methods[] = {
  {"IsTypeOf", PyvtkUniformGridPartitioner_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUniformGridPartitioner_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUniformGridPartitioner_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUniformGridPartitioner\nC++: static vtkUniformGridPartitioner *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUniformGridPartitioner_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUniformGridPartitioner\nC++: vtkUniformGridPartitioner *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUniformGridPartitioner_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUniformGridPartitioner_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfPartitions", PyvtkUniformGridPartitioner_GetNumberOfPartitions, METH_VARARGS,
   "GetNumberOfPartitions(self) -> int\nC++: virtual int GetNumberOfPartitions()\n\nSet/Get macro for the number of subdivisions.\n"},
  {"SetNumberOfPartitions", PyvtkUniformGridPartitioner_SetNumberOfPartitions, METH_VARARGS,
   "SetNumberOfPartitions(self, _arg:int) -> None\nC++: virtual void SetNumberOfPartitions(int _arg)\n\n"},
  {"GetNumberOfGhostLayers", PyvtkUniformGridPartitioner_GetNumberOfGhostLayers, METH_VARARGS,
   "GetNumberOfGhostLayers(self) -> int\nC++: virtual int GetNumberOfGhostLayers()\n\nSet/Get macro for the number of ghost layers.\n"},
  {"SetNumberOfGhostLayers", PyvtkUniformGridPartitioner_SetNumberOfGhostLayers, METH_VARARGS,
   "SetNumberOfGhostLayers(self, _arg:int) -> None\nC++: virtual void SetNumberOfGhostLayers(int _arg)\n\n"},
  {"GetDuplicateNodes", PyvtkUniformGridPartitioner_GetDuplicateNodes, METH_VARARGS,
   "GetDuplicateNodes(self) -> int\nC++: virtual vtkTypeBool GetDuplicateNodes()\n\n"},
  {"SetDuplicateNodes", PyvtkUniformGridPartitioner_SetDuplicateNodes, METH_VARARGS,
   "SetDuplicateNodes(self, _arg:int) -> None\nC++: virtual void SetDuplicateNodes(vtkTypeBool _arg)\n\n"},
  {"DuplicateNodesOn", PyvtkUniformGridPartitioner_DuplicateNodesOn, METH_VARARGS,
   "DuplicateNodesOn(self) -> None\nC++: virtual void DuplicateNodesOn()\n\n"},
  {"DuplicateNodesOff", PyvtkUniformGridPartitioner_DuplicateNodesOff, METH_VARARGS,
   "DuplicateNodesOff(self) -> None\nC++: virtual void DuplicateNodesOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUniformGridPartitioner_Doc =
  "vtkUniformGridPartitioner -  A concrete implementation of\nvtkMultiBlockDataSetAlgorithm that provides\n functionality for partitioning a uniform grid.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "The partitioning method\n"
  " that is used is Recursive Coordinate Bisection (RCB) where each time\n"
  " the longest dimension is split.\n\n"
  "@sa\n"
  "vtkStructuredGridPartitioner vtkRectilinearGridPartitioner\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUniformGridPartitioner_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkUniformGridPartitioner", // tp_name
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
  PyvtkUniformGridPartitioner_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUniformGridPartitioner_StaticNew()
{
  return vtkUniformGridPartitioner::New();
}

PyObject *PyvtkUniformGridPartitioner_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUniformGridPartitioner_Type, PyvtkUniformGridPartitioner_Methods,
    "vtkUniformGridPartitioner",
 &PyvtkUniformGridPartitioner_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMultiBlockDataSetAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUniformGridPartitioner(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUniformGridPartitioner_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUniformGridPartitioner", o) != 0)
  {
    Py_DECREF(o);
  }

}

