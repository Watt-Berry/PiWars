// python wrapper for vtkGroupDataSetsFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGroupDataSetsFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGroupDataSetsFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkGroupDataSetsFilter_ClassNew(); }


static PyObject *
PyvtkGroupDataSetsFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGroupDataSetsFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGroupDataSetsFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGroupDataSetsFilter *tempr = vtkGroupDataSetsFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGroupDataSetsFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGroupDataSetsFilter::NewInstance());

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
PyvtkGroupDataSetsFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGroupDataSetsFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGroupDataSetsFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputType(temp0);
    }
    else
    {
      op->vtkGroupDataSetsFilter::SetOutputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkGroupDataSetsFilter::GetOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_SetOutputTypeToPartitionedDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToPartitionedDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToPartitionedDataSet();
    }
    else
    {
      op->vtkGroupDataSetsFilter::SetOutputTypeToPartitionedDataSet();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_SetOutputTypeToPartitionedDataSetCollection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToPartitionedDataSetCollection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToPartitionedDataSetCollection();
    }
    else
    {
      op->vtkGroupDataSetsFilter::SetOutputTypeToPartitionedDataSetCollection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_SetOutputTypeToMultiBlockDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTypeToMultiBlockDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTypeToMultiBlockDataSet();
    }
    else
    {
      op->vtkGroupDataSetsFilter::SetOutputTypeToMultiBlockDataSet();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_SetInputName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputName(temp0, temp1);
    }
    else
    {
      op->vtkGroupDataSetsFilter::SetInputName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_GetInputName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInputName(temp0) :
      op->vtkGroupDataSetsFilter::GetInputName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGroupDataSetsFilter_ClearInputNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearInputNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGroupDataSetsFilter *op = static_cast<vtkGroupDataSetsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearInputNames();
    }
    else
    {
      op->vtkGroupDataSetsFilter::ClearInputNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGroupDataSetsFilter_Methods[] = {
  {"IsTypeOf", PyvtkGroupDataSetsFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGroupDataSetsFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGroupDataSetsFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGroupDataSetsFilter\nC++: static vtkGroupDataSetsFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGroupDataSetsFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGroupDataSetsFilter\nC++: vtkGroupDataSetsFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGroupDataSetsFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGroupDataSetsFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOutputType", PyvtkGroupDataSetsFilter_SetOutputType, METH_VARARGS,
   "SetOutputType(self, _arg:int) -> None\nC++: virtual void SetOutputType(int _arg)\n\nGet/Set the output type. Supported values are\n`VTK_PARTITIONED_DATA_SET_COLLECTION`,\n`VTK_PARTITIONED_DATA_SET`, and `VTK_MULTIBLOCK_DATA_SET`.\n\nDefault it VTK_PARTITIONED_DATA_SET_COLLECTION.\n"},
  {"GetOutputType", PyvtkGroupDataSetsFilter_GetOutputType, METH_VARARGS,
   "GetOutputType(self) -> int\nC++: virtual int GetOutputType()\n\n"},
  {"SetOutputTypeToPartitionedDataSet", PyvtkGroupDataSetsFilter_SetOutputTypeToPartitionedDataSet, METH_VARARGS,
   "SetOutputTypeToPartitionedDataSet(self) -> None\nC++: void SetOutputTypeToPartitionedDataSet()\n\n"},
  {"SetOutputTypeToPartitionedDataSetCollection", PyvtkGroupDataSetsFilter_SetOutputTypeToPartitionedDataSetCollection, METH_VARARGS,
   "SetOutputTypeToPartitionedDataSetCollection(self) -> None\nC++: void SetOutputTypeToPartitionedDataSetCollection()\n\n"},
  {"SetOutputTypeToMultiBlockDataSet", PyvtkGroupDataSetsFilter_SetOutputTypeToMultiBlockDataSet, METH_VARARGS,
   "SetOutputTypeToMultiBlockDataSet(self) -> None\nC++: void SetOutputTypeToMultiBlockDataSet()\n\n"},
  {"SetInputName", PyvtkGroupDataSetsFilter_SetInputName, METH_VARARGS,
   "SetInputName(self, index:int, name:str) -> None\nC++: void SetInputName(int index, const char *name)\n\nAPI to assign names for inputs. If not specified, the filter\nautomatically creates sensible names based on the chosen output\ntype.\n\nNames are not useful or relevant if output type is\n`VTK_PARTITIONED_DATA_SET` and hence are ignored for that type.\n"},
  {"GetInputName", PyvtkGroupDataSetsFilter_GetInputName, METH_VARARGS,
   "GetInputName(self, index:int) -> str\nC++: const char *GetInputName(int index)\n\n"},
  {"ClearInputNames", PyvtkGroupDataSetsFilter_ClearInputNames, METH_VARARGS,
   "ClearInputNames(self) -> None\nC++: void ClearInputNames()\n\nClears all assigned input names.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGroupDataSetsFilter_Doc =
  "vtkGroupDataSetsFilter - groups inputs into a chosen composite\ndataset.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkGroupDataSetsFilter is a filter that can combine multiple input\n"
  "datasets into a vtkMultBlockDataSet, vtkPartitionedDataSet, or a\n"
  "vtkPartitionedDataSetCollection.\n\n"
  "The inputs are added a individual blocks in the output and can be\n"
  "named assigned block-names using `SetInputName`.\n\n"
  "This is a more generic version of `vtkMultiBlockDataGroupFilter` and\n"
  "should be preferred.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGroupDataSetsFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkGroupDataSetsFilter", // tp_name
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
  PyvtkGroupDataSetsFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGroupDataSetsFilter_StaticNew()
{
  return vtkGroupDataSetsFilter::New();
}

PyObject *PyvtkGroupDataSetsFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGroupDataSetsFilter_Type, PyvtkGroupDataSetsFilter_Methods,
    "vtkGroupDataSetsFilter",
 &PyvtkGroupDataSetsFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGroupDataSetsFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGroupDataSetsFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGroupDataSetsFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

