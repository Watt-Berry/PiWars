// python wrapper for vtkSimpleScalarTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSimpleScalarTree.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSimpleScalarTree(PyObject *dict); }
extern "C" { PyObject *PyvtkSimpleScalarTree_ClassNew(); }

#ifndef DECLARED_PyvtkScalarTree_ClassNew
extern "C" { PyObject *PyvtkScalarTree_ClassNew(); }
#define DECLARED_PyvtkScalarTree_ClassNew
#endif

static PyObject *
PyvtkSimpleScalarTree_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSimpleScalarTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSimpleScalarTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSimpleScalarTree *tempr = vtkSimpleScalarTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSimpleScalarTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSimpleScalarTree::NewInstance());

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
PyvtkSimpleScalarTree_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSimpleScalarTree::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSimpleScalarTree::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  vtkScalarTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarTree"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSimpleScalarTree::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SetBranchingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBranchingFactor(temp0);
    }
    else
    {
      op->vtkSimpleScalarTree::SetBranchingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactorMinValue() :
      op->vtkSimpleScalarTree::GetBranchingFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactorMaxValue() :
      op->vtkSimpleScalarTree::GetBranchingFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetBranchingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBranchingFactor() :
      op->vtkSimpleScalarTree::GetBranchingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkSimpleScalarTree::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_SetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxLevel(temp0);
    }
    else
    {
      op->vtkSimpleScalarTree::SetMaxLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevelMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMinValue() :
      op->vtkSimpleScalarTree::GetMaxLevelMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevelMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevelMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevelMaxValue() :
      op->vtkSimpleScalarTree::GetMaxLevelMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetMaxLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxLevel() :
      op->vtkSimpleScalarTree::GetMaxLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_BuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTree();
    }
    else
    {
      op->vtkSimpleScalarTree::BuildTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSimpleScalarTree::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal(temp0);
    }
    else
    {
      op->vtkSimpleScalarTree::InitTraversal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetNumberOfCellBatches(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellBatches");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCellBatches(temp0) :
      op->vtkSimpleScalarTree::GetNumberOfCellBatches(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSimpleScalarTree_GetCellBatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleScalarTree *op = static_cast<vtkSimpleScalarTree *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const long long *tempr = (ap.IsBound() ?
      op->GetCellBatch(temp0, temp1) :
      op->vtkSimpleScalarTree::GetCellBatch(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSimpleScalarTree_Methods[] = {
  {"IsTypeOf", PyvtkSimpleScalarTree_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSimpleScalarTree_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSimpleScalarTree_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSimpleScalarTree\nC++: static vtkSimpleScalarTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSimpleScalarTree_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSimpleScalarTree\nC++: vtkSimpleScalarTree *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSimpleScalarTree_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSimpleScalarTree_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkSimpleScalarTree_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, stree:vtkScalarTree) -> None\nC++: void ShallowCopy(vtkScalarTree *stree) override;\n\nThis method is used to copy data members when cloning an instance\nof the class. It does not copy heavy data.\n"},
  {"SetBranchingFactor", PyvtkSimpleScalarTree_SetBranchingFactor, METH_VARARGS,
   "SetBranchingFactor(self, _arg:int) -> None\nC++: virtual void SetBranchingFactor(int _arg)\n\nSet the branching factor for the tree. This is the number of\nchildren per tree node. Smaller values (minimum is 2) mean deeper\ntrees and more memory overhead. Larger values mean shallower\ntrees, less memory usage, but worse performance.\n"},
  {"GetBranchingFactorMinValue", PyvtkSimpleScalarTree_GetBranchingFactorMinValue, METH_VARARGS,
   "GetBranchingFactorMinValue(self) -> int\nC++: virtual int GetBranchingFactorMinValue()\n\n"},
  {"GetBranchingFactorMaxValue", PyvtkSimpleScalarTree_GetBranchingFactorMaxValue, METH_VARARGS,
   "GetBranchingFactorMaxValue(self) -> int\nC++: virtual int GetBranchingFactorMaxValue()\n\n"},
  {"GetBranchingFactor", PyvtkSimpleScalarTree_GetBranchingFactor, METH_VARARGS,
   "GetBranchingFactor(self) -> int\nC++: virtual int GetBranchingFactor()\n\n"},
  {"GetLevel", PyvtkSimpleScalarTree_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: virtual int GetLevel()\n\nGet the level of the scalar tree. This value may change each time\nthe scalar tree is built and the branching factor changes.\n"},
  {"SetMaxLevel", PyvtkSimpleScalarTree_SetMaxLevel, METH_VARARGS,
   "SetMaxLevel(self, _arg:int) -> None\nC++: virtual void SetMaxLevel(int _arg)\n\nSet the maximum allowable level for the tree.\n"},
  {"GetMaxLevelMinValue", PyvtkSimpleScalarTree_GetMaxLevelMinValue, METH_VARARGS,
   "GetMaxLevelMinValue(self) -> int\nC++: virtual int GetMaxLevelMinValue()\n\n"},
  {"GetMaxLevelMaxValue", PyvtkSimpleScalarTree_GetMaxLevelMaxValue, METH_VARARGS,
   "GetMaxLevelMaxValue(self) -> int\nC++: virtual int GetMaxLevelMaxValue()\n\n"},
  {"GetMaxLevel", PyvtkSimpleScalarTree_GetMaxLevel, METH_VARARGS,
   "GetMaxLevel(self) -> int\nC++: virtual int GetMaxLevel()\n\n"},
  {"BuildTree", PyvtkSimpleScalarTree_BuildTree, METH_VARARGS,
   "BuildTree(self) -> None\nC++: void BuildTree() override;\n\nConstruct the scalar tree from the dataset provided. Checks build\ntimes and modified time from input and reconstructs the tree if\nnecessary.\n"},
  {"Initialize", PyvtkSimpleScalarTree_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize locator. Frees memory and resets object as\nappropriate.\n"},
  {"InitTraversal", PyvtkSimpleScalarTree_InitTraversal, METH_VARARGS,
   "InitTraversal(self, scalarValue:float) -> None\nC++: void InitTraversal(double scalarValue) override;\n\nBegin to traverse the cells based on a scalar value. Returned\ncells will likely have scalar values that span the scalar value\nspecified.\n"},
  {"GetNumberOfCellBatches", PyvtkSimpleScalarTree_GetNumberOfCellBatches, METH_VARARGS,
   "GetNumberOfCellBatches(self, scalarValue:float) -> int\nC++: vtkIdType GetNumberOfCellBatches(double scalarValue)\n    override;\n\nGet the number of cell batches available for processing as a\nfunction of the specified scalar value. Each batch contains a\nlist of candidate cells that may contain the specified isocontour\nvalue.\n"},
  {"GetCellBatch", PyvtkSimpleScalarTree_GetCellBatch, METH_VARARGS,
   "GetCellBatch(self, batchNum:int, numCells:int) -> Pointer\nC++: const vtkIdType *GetCellBatch(vtkIdType batchNum,\n    vtkIdType &numCells) override;\n\nReturn the array of cell ids in the specified batch. The method\nalso returns the number of cell ids in the array. Make sure to\ncall GetNumberOfCellBatches() beforehand.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSimpleScalarTree_Doc =
  "vtkSimpleScalarTree - organize data according to scalar values (used\nto accelerate contouring operations)\n\n"
  "Superclass: vtkScalarTree\n\n"
  "vtkSimpleScalarTree creates a pointerless binary tree that helps\n"
  "search for cells that lie within a particular scalar range. This\n"
  "object is used to accelerate some contouring (and other scalar-based\n"
  "techniques).\n\n"
  "The tree consists of an array of (min,max) scalar range pairs per\n"
  "node in the tree. The (min,max) range is determined from looking at\n"
  "the range of the children of the tree node. If the node is a leaf,\n"
  "then the range is determined by scanning the range of scalar data in\n"
  "n cells in the dataset. The n cells are determined by arbitrary\n"
  "selecting cell ids from id(i) to id(i+n), and where n is specified\n"
  "using the BranchingFactor ivar. Note that leaf node i=0 contains the\n"
  "scalar range computed from cell ids (0,n-1); leaf node i=1 contains\n"
  "the range from cell ids (n,2n-1); and so on. The implication is that\n"
  "there are no direct lists of cell ids per leaf node, instead the cell\n"
  "ids are implicitly known. Despite the arbitrary grouping of cells, in\n"
  "practice this scalar tree actually performs quite well due to\n"
  "spatial/data coherence.\n\n"
  "This class has an API that supports both serial and parallel\n"
  "operation.  The parallel API enables the using class to grab arrays\n"
  "(or batches) of cells that potentially intersect the isocontour.\n"
  "These batches can then be processed in separate threads.\n\n"
  "@sa\n"
  "vtkScalarTree vtkSpanSpace\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSimpleScalarTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkSimpleScalarTree", // tp_name
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
  PyvtkSimpleScalarTree_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSimpleScalarTree_StaticNew()
{
  return vtkSimpleScalarTree::New();
}

PyObject *PyvtkSimpleScalarTree_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSimpleScalarTree_Type, PyvtkSimpleScalarTree_Methods,
    "vtkSimpleScalarTree",
 &PyvtkSimpleScalarTree_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkScalarTree_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSimpleScalarTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSimpleScalarTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSimpleScalarTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

