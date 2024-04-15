// python wrapper for vtkDataAssemblyUtilities
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkDataAssemblyUtilities.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataAssemblyUtilities(PyObject *dict); }
extern "C" { PyObject *PyvtkDataAssemblyUtilities_ClassNew(); }


static PyObject *
PyvtkDataAssemblyUtilities_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataAssemblyUtilities::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssemblyUtilities *op = static_cast<vtkDataAssemblyUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataAssemblyUtilities::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataAssemblyUtilities *tempr = vtkDataAssemblyUtilities::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssemblyUtilities *op = static_cast<vtkDataAssemblyUtilities *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataAssemblyUtilities *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataAssemblyUtilities::NewInstance());

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
PyvtkDataAssemblyUtilities_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataAssemblyUtilities::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssemblyUtilities *op = static_cast<vtkDataAssemblyUtilities *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataAssemblyUtilities::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_HierarchyName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HierarchyName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkDataAssemblyUtilities::HierarchyName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_GetDataAssembly(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataAssembly");

  const char *temp0 = nullptr;
  vtkCompositeDataSet *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCompositeDataSet"))
  {
    vtkSmartPointer<vtkDataAssembly> tempr = vtkDataAssemblyUtilities::GetDataAssembly(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_GenerateHierarchy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateHierarchy");

  vtkCompositeDataSet *temp0 = nullptr;
  vtkDataAssembly *temp1 = nullptr;
  vtkPartitionedDataSetCollection *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet") &&
      ap.GetVTKObject(temp1, "vtkDataAssembly") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkPartitionedDataSetCollection")))
  {
    bool tempr = vtkDataAssemblyUtilities::GenerateHierarchy(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_GenerateCompositeDataSetFromHierarchy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateCompositeDataSetFromHierarchy");

  vtkPartitionedDataSetCollection *temp0 = nullptr;
  vtkDataAssembly *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPartitionedDataSetCollection") &&
      ap.GetVTKObject(temp1, "vtkDataAssembly"))
  {
    vtkSmartPointer<vtkCompositeDataSet> tempr = vtkDataAssemblyUtilities::GenerateCompositeDataSetFromHierarchy(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_GetSelectedCompositeIds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedCompositeIds");

  std::vector<std::string> temp0(ap.GetArgSize(0));
  vtkDataAssembly *temp1 = nullptr;
  vtkPartitionedDataSetCollection *temp2 = nullptr;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkDataAssembly") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkPartitionedDataSetCollection")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    std::vector<unsigned int> tempr = vtkDataAssemblyUtilities::GetSelectedCompositeIds(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_GetSelectorForCompositeId(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectorForCompositeId");

  unsigned int temp0;
  vtkDataAssembly *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataAssembly"))
  {
    std::string tempr = vtkDataAssemblyUtilities::GetSelectorForCompositeId(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssemblyUtilities_GetSelectorsForCompositeIds_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectorsForCompositeIds");

  std::vector<unsigned int> temp0(ap.GetArgSize(0));
  vtkDataAssembly *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkDataAssembly"))
  {
    std::vector<std::string> tempr = vtkDataAssemblyUtilities::GetSelectorsForCompositeIds(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssemblyUtilities_GetSelectorsForCompositeIds_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectorsForCompositeIds");

  std::vector<unsigned int> temp0(ap.GetArgSize(0));
  vtkDataAssembly *temp1 = nullptr;
  vtkDataAssembly *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkDataAssembly") &&
      ap.GetVTKObject(temp2, "vtkDataAssembly"))
  {
    std::vector<std::string> tempr = vtkDataAssemblyUtilities::GetSelectorsForCompositeIds(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssemblyUtilities_GetSelectorsForCompositeIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataAssemblyUtilities_GetSelectorsForCompositeIds_s1(self, args);
    case 3:
      return PyvtkDataAssemblyUtilities_GetSelectorsForCompositeIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSelectorsForCompositeIds");
  return nullptr;
}


static PyObject *
PyvtkDataAssemblyUtilities_GetSelectorsCompositeIdsForCompositeIds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectorsCompositeIdsForCompositeIds");

  std::vector<unsigned int> temp0(ap.GetArgSize(0));
  vtkDataAssembly *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      ap.GetVTKObject(temp1, "vtkDataAssembly"))
  {
    std::vector<unsigned int> tempr = vtkDataAssemblyUtilities::GetSelectorsCompositeIdsForCompositeIds(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyMethodDef PyvtkDataAssemblyUtilities_Methods[] = {
  {"IsTypeOf", PyvtkDataAssemblyUtilities_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataAssemblyUtilities_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataAssemblyUtilities_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataAssemblyUtilities\nC++: static vtkDataAssemblyUtilities *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataAssemblyUtilities_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataAssemblyUtilities\nC++: vtkDataAssemblyUtilities *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataAssemblyUtilities_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataAssemblyUtilities_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"HierarchyName", PyvtkDataAssemblyUtilities_HierarchyName, METH_VARARGS,
   "HierarchyName() -> str\nC++: static const char *HierarchyName()\n\nReturns the named used by VTK to correspond to a vtkDataAssembly\nassociated with the structure of a composite dataset.\n"},
  {"GetDataAssembly", PyvtkDataAssemblyUtilities_GetDataAssembly, METH_VARARGS,
   "GetDataAssembly(name:str, cd:vtkCompositeDataSet)\n    -> vtkDataAssembly\nC++: static vtkSmartPointer<vtkDataAssembly> GetDataAssembly(\n    const char *name, vtkCompositeDataSet *cd)\n\nConvenience method to get a named vtkDataAssembly from a\nvtkCompositeDataSet, if available. May return nullptr if none\nexists or possible.\n"},
  {"GenerateHierarchy", PyvtkDataAssemblyUtilities_GenerateHierarchy, METH_VARARGS,
   "GenerateHierarchy(input:vtkCompositeDataSet,\n    hierarchy:vtkDataAssembly,\n    output:vtkPartitionedDataSetCollection=...) -> bool\nC++: static bool GenerateHierarchy(vtkCompositeDataSet *input,\n    vtkDataAssembly *hierarchy,\n    vtkPartitionedDataSetCollection *output=nullptr)\n\nPopulates `hierarchy` with a representation of the hierarchy for\nthe given composite dataset `input`. A hierarchy represents the\ninput dataset's structure as represented in the dataset itself.\n\nIf `output` is non-null, then the input is also converted to a\n`vtkPartitionedDataSetCollection`. The vtkDataAssembly on the\n`output` is updated to be a copy of the hierarchy with correct\ndataset indices so that relationships in the input blocks are\npreserved.\n\nIf input is not a `vtkMultiBlockDataSet`,\n`vtkPartitionedDataSetCollection`, or `vtkUniformGridAMR`, then\nthere's no hierarchy to represent and hence this function will\nreturn `false`.\n"},
  {"GenerateCompositeDataSetFromHierarchy", PyvtkDataAssemblyUtilities_GenerateCompositeDataSetFromHierarchy, METH_VARARGS,
   "GenerateCompositeDataSetFromHierarchy(\n    input:vtkPartitionedDataSetCollection,\n    hierarchy:vtkDataAssembly) -> vtkCompositeDataSet\nC++: static vtkSmartPointer<vtkCompositeDataSet> GenerateCompositeDataSetFromHierarchy(\n    vtkPartitionedDataSetCollection *input,\n    vtkDataAssembly *hierarchy)\n\nInverse of `GenerateHierarchy`. Given a\nvtkPartitionedDataSetCollection and a vtkDataAssembly\nrepresenting a target hierarchy, create a appropriate\nvtkCompositeDataSet subclass representing that hierarchy.\n\nA note about vtkOverlappingAMR: since all meta-data necessary for\ndefining a valid vtkOverlappingAMR is not encoded in the\nhierarchy, the return vtkOverlappingAMR is not complete (or\nvalid) and is missing key meta-data. Calling code must use other\nmechanisms to make the dataset valid.\n"},
  {"GetSelectedCompositeIds", PyvtkDataAssemblyUtilities_GetSelectedCompositeIds, METH_VARARGS,
   "GetSelectedCompositeIds(selectors:(str, ...),\n    hierarchyOrAssembly:vtkDataAssembly,\n    data:vtkPartitionedDataSetCollection=...,\n    leaf_nodes_only:bool=False) -> (int, ...)\nC++: static std::vector<unsigned int> GetSelectedCompositeIds(\n    const std::vector<std::string> &selectors,\n    vtkDataAssembly *hierarchyOrAssembly,\n    vtkPartitionedDataSetCollection *data=nullptr,\n    bool leaf_nodes_only=false)\n\nGiven a vtkDataAssembly and collection of selectors, returns a\nlist of selected composite indices for the selected nodes. The\nvtkDataAssembly can represent either a hierarchy or simply be an\nassembly. For the later, an associated\n`vtkPartitionedDataSetCollection` must be provided to correctly\ndetermine the composite index for the selected nodes. When an\nhierarchy is used, the hierarchy encodes enough information to\ndetermine composite ids and hence the `data` argument must be\nnullptr.\n\n`leaf_nodes_only` can be used to indicate if the composite ids\nmust only refer to leaf nodes i.e. nodes that cannot have\nadditional child nodes.\n"},
  {"GetSelectorForCompositeId", PyvtkDataAssemblyUtilities_GetSelectorForCompositeId, METH_VARARGS,
   "GetSelectorForCompositeId(id:int, hierarchy:vtkDataAssembly)\n    -> str\nC++: static std::string GetSelectorForCompositeId(unsigned int id,\n     vtkDataAssembly *hierarchy)\n\nFor a vtkDataAssembly representing an hierarchy, returns the\nselector for the given composite id. Note, the selectors maybe\nbest-match. When dealing with vtkPartitionedDataSetCollection,\nfor example, a composite id may point to a particular dataset in\na nested vtkPartitionedDataSet, however, selectors are simply not\nexpressive enough to pick a dataset at that level and hence will\nsimply point to the parent vtkPartitionedDataSet.\n"},
  {"GetSelectorsForCompositeIds", PyvtkDataAssemblyUtilities_GetSelectorsForCompositeIds, METH_VARARGS,
   "GetSelectorsForCompositeIds(ids:(int, ...),\n    hierarchy:vtkDataAssembly) -> (str, ...)\nC++: static std::vector<std::string> GetSelectorsForCompositeIds(\n    const std::vector<unsigned int> &ids,\n    vtkDataAssembly *hierarchy)\nGetSelectorsForCompositeIds(ids:(int, ...),\n    hierarchy:vtkDataAssembly, assembly:vtkDataAssembly) -> (str,\n    ...)\nC++: static std::vector<std::string> GetSelectorsForCompositeIds(\n    const std::vector<unsigned int> &ids,\n    vtkDataAssembly *hierarchy, vtkDataAssembly *assembly)\n\n"},
  {"GetSelectorsCompositeIdsForCompositeIds", PyvtkDataAssemblyUtilities_GetSelectorsCompositeIdsForCompositeIds, METH_VARARGS,
   "GetSelectorsCompositeIdsForCompositeIds(ids:(int, ...),\n    hierarchy:vtkDataAssembly) -> (int, ...)\nC++: static std::vector<unsigned int> GetSelectorsCompositeIdsForCompositeIds(\n    const std::vector<unsigned int> &ids,\n    vtkDataAssembly *hierarchy)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataAssemblyUtilities_Doc =
  "vtkDataAssemblyUtilities - collections of utilities for\nvtkDataAssembly\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataAssemblyUtilities provides useful utilities for working with\n"
  "vtkDataAssembly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataAssemblyUtilities_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataAssemblyUtilities", // tp_name
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
  PyvtkDataAssemblyUtilities_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataAssemblyUtilities_StaticNew()
{
  return vtkDataAssemblyUtilities::New();
}

PyObject *PyvtkDataAssemblyUtilities_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataAssemblyUtilities_Type, PyvtkDataAssemblyUtilities_Methods,
    "vtkDataAssemblyUtilities",
 &PyvtkDataAssemblyUtilities_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataAssemblyUtilities(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataAssemblyUtilities_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataAssemblyUtilities", o) != 0)
  {
    Py_DECREF(o);
  }

}

