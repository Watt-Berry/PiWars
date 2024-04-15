// python wrapper for vtkPartitionedDataSetSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPartitionedDataSetSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPartitionedDataSetSource(PyObject *dict); }
extern "C" { PyObject *PyvtkPartitionedDataSetSource_ClassNew(); }


static PyObject *
PyvtkPartitionedDataSetSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPartitionedDataSetSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPartitionedDataSetSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPartitionedDataSetSource *tempr = vtkPartitionedDataSetSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPartitionedDataSetSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPartitionedDataSetSource::NewInstance());

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
PyvtkPartitionedDataSetSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPartitionedDataSetSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPartitionedDataSetSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_EnableRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableRank(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetSource::EnableRank(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_EnableAllRanks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllRanks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllRanks();
    }
    else
    {
      op->vtkPartitionedDataSetSource::EnableAllRanks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_DisableRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableRank(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetSource::DisableRank(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_DisableAllRanks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllRanks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllRanks();
    }
    else
    {
      op->vtkPartitionedDataSetSource::DisableAllRanks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_IsEnabledRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEnabledRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsEnabledRank(temp0) :
      op->vtkPartitionedDataSetSource::IsEnabledRank(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_SetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

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
      op->vtkPartitionedDataSetSource::SetNumberOfPartitions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_GetNumberOfPartitionsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitionsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitionsMinValue() :
      op->vtkPartitionedDataSetSource::GetNumberOfPartitionsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_GetNumberOfPartitionsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitionsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitionsMaxValue() :
      op->vtkPartitionedDataSetSource::GetNumberOfPartitionsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_GetNumberOfPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPartitions() :
      op->vtkPartitionedDataSetSource::GetNumberOfPartitions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_SetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  vtkParametricFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricFunction"))
  {
    if (ap.IsBound())
    {
      op->SetParametricFunction(temp0);
    }
    else
    {
      op->vtkPartitionedDataSetSource::SetParametricFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionedDataSetSource_GetParametricFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionedDataSetSource *op = static_cast<vtkPartitionedDataSetSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricFunction *tempr = (ap.IsBound() ?
      op->GetParametricFunction() :
      op->vtkPartitionedDataSetSource::GetParametricFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionedDataSetSource_Methods[] = {
  {"IsTypeOf", PyvtkPartitionedDataSetSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPartitionedDataSetSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPartitionedDataSetSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPartitionedDataSetSource\nC++: static vtkPartitionedDataSetSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPartitionedDataSetSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPartitionedDataSetSource\nC++: vtkPartitionedDataSetSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPartitionedDataSetSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPartitionedDataSetSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EnableRank", PyvtkPartitionedDataSetSource_EnableRank, METH_VARARGS,
   "EnableRank(self, rank:int) -> None\nC++: void EnableRank(int rank)\n\nEnable/Disable ranks.\n\nBy default every rank is enabled, this default policy will be\nchanged if DisableAllRanks is used, and again reverted when\nEnableAllRanks is used.\n\nEnableRank/DisableRank are used to specify individual exceptions\nof the default policy.\n"},
  {"EnableAllRanks", PyvtkPartitionedDataSetSource_EnableAllRanks, METH_VARARGS,
   "EnableAllRanks(self) -> None\nC++: void EnableAllRanks()\n\n"},
  {"DisableRank", PyvtkPartitionedDataSetSource_DisableRank, METH_VARARGS,
   "DisableRank(self, rank:int) -> None\nC++: void DisableRank(int rank)\n\n"},
  {"DisableAllRanks", PyvtkPartitionedDataSetSource_DisableAllRanks, METH_VARARGS,
   "DisableAllRanks(self) -> None\nC++: void DisableAllRanks()\n\n"},
  {"IsEnabledRank", PyvtkPartitionedDataSetSource_IsEnabledRank, METH_VARARGS,
   "IsEnabledRank(self, rank:int) -> bool\nC++: bool IsEnabledRank(int rank)\n\n"},
  {"SetNumberOfPartitions", PyvtkPartitionedDataSetSource_SetNumberOfPartitions, METH_VARARGS,
   "SetNumberOfPartitions(self, _arg:int) -> None\nC++: virtual void SetNumberOfPartitions(int _arg)\n\nSet/Get the number of partitions of the resulting\nPartitionedDataSet. If not specified, the number of partitions\nwill be the number of enabled ranks.\n\nSetNumberOfPartitions(0) means auto in this context, the\nimplementation will decided the optimal number of partitions\nwhich by default will be one partition per each rank.\n"},
  {"GetNumberOfPartitionsMinValue", PyvtkPartitionedDataSetSource_GetNumberOfPartitionsMinValue, METH_VARARGS,
   "GetNumberOfPartitionsMinValue(self) -> int\nC++: virtual int GetNumberOfPartitionsMinValue()\n\n"},
  {"GetNumberOfPartitionsMaxValue", PyvtkPartitionedDataSetSource_GetNumberOfPartitionsMaxValue, METH_VARARGS,
   "GetNumberOfPartitionsMaxValue(self) -> int\nC++: virtual int GetNumberOfPartitionsMaxValue()\n\n"},
  {"GetNumberOfPartitions", PyvtkPartitionedDataSetSource_GetNumberOfPartitions, METH_VARARGS,
   "GetNumberOfPartitions(self) -> int\nC++: virtual int GetNumberOfPartitions()\n\n"},
  {"SetParametricFunction", PyvtkPartitionedDataSetSource_SetParametricFunction, METH_VARARGS,
   "SetParametricFunction(self, __a:vtkParametricFunction) -> None\nC++: void SetParametricFunction(vtkParametricFunction *)\n\nSet/Get the parametric function to be used for this source.\n"},
  {"GetParametricFunction", PyvtkPartitionedDataSetSource_GetParametricFunction, METH_VARARGS,
   "GetParametricFunction(self) -> vtkParametricFunction\nC++: virtual vtkParametricFunction *GetParametricFunction()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPartitionedDataSetSource_Doc =
  "vtkPartitionedDataSetSource - a source that produces a\nvtkPartitionedDataSet.\n\n"
  "Superclass: vtkPartitionedDataSetAlgorithm\n\n"
  "vtkPartitionedDataSetSource generates a vtkPartitionedDataSet which\n"
  "is composed of partitions of a given vtkParametricFunction. The\n"
  "resulting partitioned dataset is split among ranks in an even fashion\n"
  "by default.\n\n"
  "The user can pass the parametric function to be used using\n"
  "SetParametricFunction. Otherwise it will default to\n"
  "vtkParametricKlein as its Parametric function.\n\n"
  "The partitioning scheme for the produced vtkPartitionedDataSet can be\n"
  "controlled with the methods: SetNumberOfPartitiones, EnableRank,\n"
  "DisableRank, EnableAllRanks, DisableAllRanks.\n\n"
  "@see vtkParametricFunction@see vtkPartitionedDataSet\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPartitionedDataSetSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkPartitionedDataSetSource", // tp_name
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
  PyvtkPartitionedDataSetSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPartitionedDataSetSource_StaticNew()
{
  return vtkPartitionedDataSetSource::New();
}

PyObject *PyvtkPartitionedDataSetSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPartitionedDataSetSource_Type, PyvtkPartitionedDataSetSource_Methods,
    "vtkPartitionedDataSetSource",
 &PyvtkPartitionedDataSetSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPartitionedDataSetSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPartitionedDataSetSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPartitionedDataSetSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

