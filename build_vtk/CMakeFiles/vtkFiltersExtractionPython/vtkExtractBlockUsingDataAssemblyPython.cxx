// python wrapper for vtkExtractBlockUsingDataAssembly
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractBlockUsingDataAssembly.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractBlockUsingDataAssembly(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractBlockUsingDataAssembly_ClassNew(); }


static PyObject *
PyvtkExtractBlockUsingDataAssembly_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractBlockUsingDataAssembly::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractBlockUsingDataAssembly::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractBlockUsingDataAssembly *tempr = vtkExtractBlockUsingDataAssembly::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractBlockUsingDataAssembly *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractBlockUsingDataAssembly::NewInstance());

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
PyvtkExtractBlockUsingDataAssembly_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractBlockUsingDataAssembly::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractBlockUsingDataAssembly::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_AddSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->AddSelector(temp0) :
      op->vtkExtractBlockUsingDataAssembly::AddSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_ClearSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSelectors();
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::ClearSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_SetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelector(temp0);
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::SetSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_GetNumberOfSelectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSelectors() :
      op->vtkExtractBlockUsingDataAssembly::GetNumberOfSelectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_GetSelector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSelector(temp0) :
      op->vtkExtractBlockUsingDataAssembly::GetSelector(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_SetAssemblyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAssemblyName(temp0);
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::SetAssemblyName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_GetAssemblyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAssemblyName() :
      op->vtkExtractBlockUsingDataAssembly::GetAssemblyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_SetSelectSubtrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectSubtrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectSubtrees(temp0);
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::SetSelectSubtrees(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_GetSelectSubtrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectSubtrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSelectSubtrees() :
      op->vtkExtractBlockUsingDataAssembly::GetSelectSubtrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_SelectSubtreesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSubtreesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectSubtreesOn();
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::SelectSubtreesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_SelectSubtreesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectSubtreesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectSubtreesOff();
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::SelectSubtreesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_SetPruneDataAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPruneDataAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPruneDataAssembly(temp0);
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::SetPruneDataAssembly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_GetPruneDataAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPruneDataAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPruneDataAssembly() :
      op->vtkExtractBlockUsingDataAssembly::GetPruneDataAssembly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_PruneDataAssemblyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneDataAssemblyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PruneDataAssemblyOn();
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::PruneDataAssemblyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractBlockUsingDataAssembly_PruneDataAssemblyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PruneDataAssemblyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractBlockUsingDataAssembly *op = static_cast<vtkExtractBlockUsingDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PruneDataAssemblyOff();
    }
    else
    {
      op->vtkExtractBlockUsingDataAssembly::PruneDataAssemblyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractBlockUsingDataAssembly_Methods[] = {
  {"IsTypeOf", PyvtkExtractBlockUsingDataAssembly_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractBlockUsingDataAssembly_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractBlockUsingDataAssembly_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractBlockUsingDataAssembly\nC++: static vtkExtractBlockUsingDataAssembly *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractBlockUsingDataAssembly_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractBlockUsingDataAssembly\nC++: vtkExtractBlockUsingDataAssembly *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractBlockUsingDataAssembly_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractBlockUsingDataAssembly_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddSelector", PyvtkExtractBlockUsingDataAssembly_AddSelector, METH_VARARGS,
   "AddSelector(self, selector:str) -> bool\nC++: bool AddSelector(const char *selector)\n\nAPI to set selectors. Multiple selectors can be added using\n`AddSelector`. The order in which selectors are specified is not\npreserved and has no impact on the result.\n\n`AddSelector` returns true if the selector was added, false if\nthe selector was already specified and hence not added.\n\n@sa vtkDataAssembly::SelectNodes\n"},
  {"ClearSelectors", PyvtkExtractBlockUsingDataAssembly_ClearSelectors, METH_VARARGS,
   "ClearSelectors(self) -> None\nC++: void ClearSelectors()\n\n"},
  {"SetSelector", PyvtkExtractBlockUsingDataAssembly_SetSelector, METH_VARARGS,
   "SetSelector(self, selector:str) -> None\nC++: void SetSelector(const char *selector)\n\nConvenience method to set a single selector. This clears any\nother existing selectors.\n"},
  {"GetNumberOfSelectors", PyvtkExtractBlockUsingDataAssembly_GetNumberOfSelectors, METH_VARARGS,
   "GetNumberOfSelectors(self) -> int\nC++: int GetNumberOfSelectors()\n\nAPI to access selectors.\n"},
  {"GetSelector", PyvtkExtractBlockUsingDataAssembly_GetSelector, METH_VARARGS,
   "GetSelector(self, index:int) -> str\nC++: const char *GetSelector(int index)\n\n"},
  {"SetAssemblyName", PyvtkExtractBlockUsingDataAssembly_SetAssemblyName, METH_VARARGS,
   "SetAssemblyName(self, _arg:str) -> None\nC++: virtual void SetAssemblyName(const char *_arg)\n\nGet/Set the active assembly to use. The chosen assembly is used\nin combination with the selectors specified to determine which\nblocks are to be extracted.\n\nBy default, this is set to\nvtkDataAssemblyUtilities::HierarchyName().\n"},
  {"GetAssemblyName", PyvtkExtractBlockUsingDataAssembly_GetAssemblyName, METH_VARARGS,
   "GetAssemblyName(self) -> str\nC++: virtual char *GetAssemblyName()\n\n"},
  {"SetSelectSubtrees", PyvtkExtractBlockUsingDataAssembly_SetSelectSubtrees, METH_VARARGS,
   "SetSelectSubtrees(self, _arg:bool) -> None\nC++: virtual void SetSelectSubtrees(bool _arg)\n\nWhen set to true (default) subtrees for chosen paths are treated\nas selected.\n"},
  {"GetSelectSubtrees", PyvtkExtractBlockUsingDataAssembly_GetSelectSubtrees, METH_VARARGS,
   "GetSelectSubtrees(self) -> bool\nC++: virtual bool GetSelectSubtrees()\n\n"},
  {"SelectSubtreesOn", PyvtkExtractBlockUsingDataAssembly_SelectSubtreesOn, METH_VARARGS,
   "SelectSubtreesOn(self) -> None\nC++: virtual void SelectSubtreesOn()\n\n"},
  {"SelectSubtreesOff", PyvtkExtractBlockUsingDataAssembly_SelectSubtreesOff, METH_VARARGS,
   "SelectSubtreesOff(self) -> None\nC++: virtual void SelectSubtreesOff()\n\n"},
  {"SetPruneDataAssembly", PyvtkExtractBlockUsingDataAssembly_SetPruneDataAssembly, METH_VARARGS,
   "SetPruneDataAssembly(self, _arg:bool) -> None\nC++: virtual void SetPruneDataAssembly(bool _arg)\n\nWhen set to true (default), the data assembly is pruned to remove\nbranches that were not selected.\n"},
  {"GetPruneDataAssembly", PyvtkExtractBlockUsingDataAssembly_GetPruneDataAssembly, METH_VARARGS,
   "GetPruneDataAssembly(self) -> bool\nC++: virtual bool GetPruneDataAssembly()\n\n"},
  {"PruneDataAssemblyOn", PyvtkExtractBlockUsingDataAssembly_PruneDataAssemblyOn, METH_VARARGS,
   "PruneDataAssemblyOn(self) -> None\nC++: virtual void PruneDataAssemblyOn()\n\n"},
  {"PruneDataAssemblyOff", PyvtkExtractBlockUsingDataAssembly_PruneDataAssemblyOff, METH_VARARGS,
   "PruneDataAssemblyOff(self) -> None\nC++: virtual void PruneDataAssemblyOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractBlockUsingDataAssembly_Doc =
  "vtkExtractBlockUsingDataAssembly - extract blocks from certain\ncomposite datasets\n\n"
  "Superclass: vtkCompositeDataSetAlgorithm\n\n"
  "vtkExtractBlockUsingDataAssembly is intended to extract selected\n"
  "blocks from certain composite datasets. Blocks to extract are\n"
  "selected using selectors. For supported selectors see\n"
  "`vtkDataAssembly::SelectNodes`.\n\n"
  "The specific data-assembly to use to apply the selectors to determine\n"
  "the blocks to extract is chosen using\n"
  "`vtkExtractBlockUsingDataAssembly::SetAssemblyName`.\n\n"
  "@section vtkExtractBlockUsingDataAssembly-SupportedDataTypes\n"
  "Supported Data Types\n\n"
  "This filter accepts `vtkUniformGridAMR`, `vtkMultiBlockDataSet`, and\n"
  "`vtkPartitionedDataSetCollection` (and subclasses).\n"
  "vtkMultiPieceDataSet and vtkPartitionedDataSet are not accepted as\n"
  "inputs since those composite datasets are not comprised of \"blocks\".\n\n"
  "For vtkOverlappingAMR, since extracting blocks cannot always\n"
  "guarantee a valid overlapping AMR, this filter generates a\n"
  "`vtkPartitionedDataSetCollection` instead. Any blanking information\n"
  "present in the input vtkOverlappingAMR is also discarded for the same\n"
  "reason.\n\n"
  "For all other supported input data types, the type is preserved.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractBlockUsingDataAssembly_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractBlockUsingDataAssembly", // tp_name
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
  PyvtkExtractBlockUsingDataAssembly_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractBlockUsingDataAssembly_StaticNew()
{
  return vtkExtractBlockUsingDataAssembly::New();
}

PyObject *PyvtkExtractBlockUsingDataAssembly_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractBlockUsingDataAssembly_Type, PyvtkExtractBlockUsingDataAssembly_Methods,
    "vtkExtractBlockUsingDataAssembly",
 &PyvtkExtractBlockUsingDataAssembly_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCompositeDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractBlockUsingDataAssembly(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractBlockUsingDataAssembly_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractBlockUsingDataAssembly", o) != 0)
  {
    Py_DECREF(o);
  }

}

