// python wrapper for vtkExtractCells
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractCells.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractCells(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractCells_ClassNew(); }


static PyObject *
PyvtkExtractCells_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractCells::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractCells::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractCells *tempr = vtkExtractCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractCells::NewInstance());

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
PyvtkExtractCells_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractCells::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractCells::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SetCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->SetCellList(temp0);
    }
    else
    {
      op->vtkExtractCells::SetCellList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->AddCellList(temp0);
    }
    else
    {
      op->vtkExtractCells::AddCellList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddCellRange(temp0, temp1);
    }
    else
    {
      op->vtkExtractCells::AddCellRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellIds(temp0, temp1);
    }
    else
    {
      op->vtkExtractCells::SetCellIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddCellIds(temp0, temp1);
    }
    else
    {
      op->vtkExtractCells::AddCellIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SetExtractAllCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractAllCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractAllCells(temp0);
    }
    else
    {
      op->vtkExtractCells::SetExtractAllCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetExtractAllCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractAllCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExtractAllCells() :
      op->vtkExtractCells::GetExtractAllCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_ExtractAllCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractAllCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractAllCellsOn();
    }
    else
    {
      op->vtkExtractCells::ExtractAllCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_ExtractAllCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractAllCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractAllCellsOff();
    }
    else
    {
      op->vtkExtractCells::ExtractAllCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SetAssumeSortedAndUniqueIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssumeSortedAndUniqueIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAssumeSortedAndUniqueIds(temp0);
    }
    else
    {
      op->vtkExtractCells::SetAssumeSortedAndUniqueIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetAssumeSortedAndUniqueIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssumeSortedAndUniqueIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAssumeSortedAndUniqueIds() :
      op->vtkExtractCells::GetAssumeSortedAndUniqueIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_AssumeSortedAndUniqueIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssumeSortedAndUniqueIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AssumeSortedAndUniqueIdsOn();
    }
    else
    {
      op->vtkExtractCells::AssumeSortedAndUniqueIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_AssumeSortedAndUniqueIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AssumeSortedAndUniqueIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AssumeSortedAndUniqueIdsOff();
    }
    else
    {
      op->vtkExtractCells::AssumeSortedAndUniqueIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughCellIds(temp0);
    }
    else
    {
      op->vtkExtractCells::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkExtractCells::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkExtractCells::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkExtractCells::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkExtractCells::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkExtractCells::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_SetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBatchSize(temp0);
    }
    else
    {
      op->vtkExtractCells::SetBatchSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetBatchSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMinValue() :
      op->vtkExtractCells::GetBatchSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetBatchSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMaxValue() :
      op->vtkExtractCells::GetBatchSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCells_GetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSize() :
      op->vtkExtractCells::GetBatchSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractCells_Methods[] = {
  {"IsTypeOf", PyvtkExtractCells_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractCells_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractCells_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractCells\nC++: static vtkExtractCells *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractCells_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractCells\nC++: vtkExtractCells *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractCells_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractCells_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCellList", PyvtkExtractCells_SetCellList, METH_VARARGS,
   "SetCellList(self, l:vtkIdList) -> None\nC++: void SetCellList(vtkIdList *l)\n\nSet the list of cell IDs that the output vtkUnstructuredGrid will\nbe composed of.  Replaces any other cell ID list supplied so far.\n (Set to nullptr to free memory used by cell list.)  The cell ids\nshould be >=0.\n"},
  {"AddCellList", PyvtkExtractCells_AddCellList, METH_VARARGS,
   "AddCellList(self, l:vtkIdList) -> None\nC++: void AddCellList(vtkIdList *l)\n\nAdd the supplied list of cell IDs to those that will be included\nin the output vtkUnstructuredGrid. The cell ids should be >=0.\n"},
  {"AddCellRange", PyvtkExtractCells_AddCellRange, METH_VARARGS,
   "AddCellRange(self, from_:int, to:int) -> None\nC++: void AddCellRange(vtkIdType from, vtkIdType to)\n\nAdd this range of cell IDs to those that will be included in the\noutput vtkUnstructuredGrid. Note that (from < to), and (from >=\n0).\n"},
  {"SetCellIds", PyvtkExtractCells_SetCellIds, METH_VARARGS,
   "SetCellIds(self, ptr:(int, ...), numValues:int) -> None\nC++: void SetCellIds(const vtkIdType *ptr, vtkIdType numValues)\n\nAnother way to provide ids using a pointer to vtkIdType array.\n"},
  {"AddCellIds", PyvtkExtractCells_AddCellIds, METH_VARARGS,
   "AddCellIds(self, ptr:(int, ...), numValues:int) -> None\nC++: void AddCellIds(const vtkIdType *ptr, vtkIdType numValues)\n\n"},
  {"SetExtractAllCells", PyvtkExtractCells_SetExtractAllCells, METH_VARARGS,
   "SetExtractAllCells(self, _arg:bool) -> None\nC++: virtual void SetExtractAllCells(bool _arg)\n\nIf all cells are being extracted, this filter can use fast path\nto speed up the extraction. In that case, one can set this flag\nto true. When set to true, cell ids added via the various methods\nare simply ignored. Defaults to false.\n"},
  {"GetExtractAllCells", PyvtkExtractCells_GetExtractAllCells, METH_VARARGS,
   "GetExtractAllCells(self) -> bool\nC++: virtual bool GetExtractAllCells()\n\n"},
  {"ExtractAllCellsOn", PyvtkExtractCells_ExtractAllCellsOn, METH_VARARGS,
   "ExtractAllCellsOn(self) -> None\nC++: virtual void ExtractAllCellsOn()\n\n"},
  {"ExtractAllCellsOff", PyvtkExtractCells_ExtractAllCellsOff, METH_VARARGS,
   "ExtractAllCellsOff(self) -> None\nC++: virtual void ExtractAllCellsOff()\n\n"},
  {"SetAssumeSortedAndUniqueIds", PyvtkExtractCells_SetAssumeSortedAndUniqueIds, METH_VARARGS,
   "SetAssumeSortedAndUniqueIds(self, _arg:bool) -> None\nC++: virtual void SetAssumeSortedAndUniqueIds(bool _arg)\n\nIf the cell ids specified are already sorted and unique, then set\nthis to true to avoid the filter from doing time-consuming sorts\nand uniquification operations. Defaults to false.\n"},
  {"GetAssumeSortedAndUniqueIds", PyvtkExtractCells_GetAssumeSortedAndUniqueIds, METH_VARARGS,
   "GetAssumeSortedAndUniqueIds(self) -> bool\nC++: virtual bool GetAssumeSortedAndUniqueIds()\n\n"},
  {"AssumeSortedAndUniqueIdsOn", PyvtkExtractCells_AssumeSortedAndUniqueIdsOn, METH_VARARGS,
   "AssumeSortedAndUniqueIdsOn(self) -> None\nC++: virtual void AssumeSortedAndUniqueIdsOn()\n\n"},
  {"AssumeSortedAndUniqueIdsOff", PyvtkExtractCells_AssumeSortedAndUniqueIdsOff, METH_VARARGS,
   "AssumeSortedAndUniqueIdsOff(self) -> None\nC++: virtual void AssumeSortedAndUniqueIdsOff()\n\n"},
  {"SetPassThroughCellIds", PyvtkExtractCells_SetPassThroughCellIds, METH_VARARGS,
   "SetPassThroughCellIds(self, _arg:bool) -> None\nC++: virtual void SetPassThroughCellIds(bool _arg)\n\nIf on, the output dataset will have a celldata array that holds\nthe cell index of the original 3D cell that produced each output\ncell. The default is on\n"},
  {"GetPassThroughCellIds", PyvtkExtractCells_GetPassThroughCellIds, METH_VARARGS,
   "GetPassThroughCellIds(self) -> bool\nC++: virtual bool GetPassThroughCellIds()\n\n"},
  {"PassThroughCellIdsOn", PyvtkExtractCells_PassThroughCellIdsOn, METH_VARARGS,
   "PassThroughCellIdsOn(self) -> None\nC++: virtual void PassThroughCellIdsOn()\n\n"},
  {"PassThroughCellIdsOff", PyvtkExtractCells_PassThroughCellIdsOff, METH_VARARGS,
   "PassThroughCellIdsOff(self) -> None\nC++: virtual void PassThroughCellIdsOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkExtractCells_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkExtractCells_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetBatchSize", PyvtkExtractCells_SetBatchSize, METH_VARARGS,
   "SetBatchSize(self, _arg:int) -> None\nC++: virtual void SetBatchSize(unsigned int _arg)\n\nSpecify the number of input cells in a batch, where a batch\ndefines a subset of the input cells operated on during threaded\nexecution. Generally this is only used for debugging or\nperformance studies (since batch size affects the thread\nworkload).\n\nDefault is 1000.\n"},
  {"GetBatchSizeMinValue", PyvtkExtractCells_GetBatchSizeMinValue, METH_VARARGS,
   "GetBatchSizeMinValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMinValue()\n\n"},
  {"GetBatchSizeMaxValue", PyvtkExtractCells_GetBatchSizeMaxValue, METH_VARARGS,
   "GetBatchSizeMaxValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMaxValue()\n\n"},
  {"GetBatchSize", PyvtkExtractCells_GetBatchSize, METH_VARARGS,
   "GetBatchSize(self) -> int\nC++: virtual unsigned int GetBatchSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractCells_Doc =
  "vtkExtractCells - subset a vtkDataSet to create a vtkUnstructuredGrid\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "Given a vtkDataSet and a list of cell ids, create a\n"
  "vtkUnstructuredGrid composed of these cells.  If the cell list is\n"
  "empty when vtkExtractCells executes, it will set up the ugrid, point\n"
  "and cell arrays, with no points, cells or data.\n\n"
  "@warning\n"
  "This class is templated. It may run slower than serial execution if\n"
  "the code is not optimized during compilation. Build in Release or\n"
  "ReleaseWithDebugInfo.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractCells_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkExtractCells", // tp_name
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
  PyvtkExtractCells_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractCells_StaticNew()
{
  return vtkExtractCells::New();
}

PyObject *PyvtkExtractCells_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractCells_Type, PyvtkExtractCells_Methods,
    "vtkExtractCells",
 &PyvtkExtractCells_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractCells(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractCells_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractCells", o) != 0)
  {
    Py_DECREF(o);
  }

}

