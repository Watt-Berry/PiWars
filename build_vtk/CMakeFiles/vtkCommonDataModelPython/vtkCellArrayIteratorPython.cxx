// python wrapper for vtkCellArrayIterator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellArrayIterator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellArrayIterator(PyObject *dict); }
extern "C" { PyObject *PyvtkCellArrayIterator_ClassNew(); }


static PyObject *
PyvtkCellArrayIterator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellArrayIterator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellArrayIterator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellArrayIterator *tempr = vtkCellArrayIterator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArrayIterator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellArrayIterator::NewInstance());

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
PyvtkCellArrayIterator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellArrayIterator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellArrayIterator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_GetCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetCellArray() :
      op->vtkCellArrayIterator::GetCellArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_GoToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->GoToCell(temp0);
    }
    else
    {
      op->vtkCellArrayIterator::GoToCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_GetCellAtId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1, temp2c);
    }
    else
    {
      op->vtkCellArrayIterator::GetCellAtId(temp0, temp1, temp2c);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, size2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArrayIterator_GetCellAtId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1);
    }
    else
    {
      op->vtkCellArrayIterator::GetCellAtId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArrayIterator_GetCellAtId_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetCellAtId(temp0) :
      op->vtkCellArrayIterator::GetCellAtId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArrayIterator_GetCellAtId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCellArrayIterator_GetCellAtId_s1(self, args);
    case 2:
      return PyvtkCellArrayIterator_GetCellAtId_s2(self, args);
    case 1:
      return PyvtkCellArrayIterator_GetCellAtId_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellAtId");
  return nullptr;
}


static PyObject *
PyvtkCellArrayIterator_GoToFirstCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToFirstCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToFirstCell();
    }
    else
    {
      op->vtkCellArrayIterator::GoToFirstCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_GoToNextCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GoToNextCell();
    }
    else
    {
      op->vtkCellArrayIterator::GoToNextCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkCellArrayIterator::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_GetCurrentCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCurrentCellId() :
      op->vtkCellArrayIterator::GetCurrentCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArrayIterator_GetCurrentCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->GetCurrentCell(temp0, temp1c);
    }
    else
    {
      op->vtkCellArrayIterator::GetCurrentCell(temp0, temp1c);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, size1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArrayIterator_GetCurrentCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCurrentCell(temp0);
    }
    else
    {
      op->vtkCellArrayIterator::GetCurrentCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArrayIterator_GetCurrentCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetCurrentCell() :
      op->vtkCellArrayIterator::GetCurrentCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArrayIterator_GetCurrentCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellArrayIterator_GetCurrentCell_s1(self, args);
    case 1:
      return PyvtkCellArrayIterator_GetCurrentCell_s2(self, args);
    case 0:
      return PyvtkCellArrayIterator_GetCurrentCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCurrentCell");
  return nullptr;
}


static PyObject *
PyvtkCellArrayIterator_ReplaceCurrentCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCurrentCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->ReplaceCurrentCell(temp0);
    }
    else
    {
      op->vtkCellArrayIterator::ReplaceCurrentCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArrayIterator_ReplaceCurrentCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCurrentCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->ReplaceCurrentCell(temp0, temp1);
    }
    else
    {
      op->vtkCellArrayIterator::ReplaceCurrentCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArrayIterator_ReplaceCurrentCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCellArrayIterator_ReplaceCurrentCell_s1(self, args);
    case 2:
      return PyvtkCellArrayIterator_ReplaceCurrentCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReplaceCurrentCell");
  return nullptr;
}


static PyObject *
PyvtkCellArrayIterator_ReverseCurrentCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCurrentCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArrayIterator *op = static_cast<vtkCellArrayIterator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseCurrentCell();
    }
    else
    {
      op->vtkCellArrayIterator::ReverseCurrentCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellArrayIterator_Methods[] = {
  {"IsTypeOf", PyvtkCellArrayIterator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellArrayIterator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellArrayIterator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellArrayIterator\nC++: static vtkCellArrayIterator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellArrayIterator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellArrayIterator\nC++: vtkCellArrayIterator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellArrayIterator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellArrayIterator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCellArray", PyvtkCellArrayIterator_GetCellArray, METH_VARARGS,
   "GetCellArray(self) -> vtkCellArray\nC++: vtkCellArray *GetCellArray()\n\nReturn the vtkCellArray object over which iteration is occurring.\n"},
  {"GoToCell", PyvtkCellArrayIterator_GoToCell, METH_VARARGS,
   "GoToCell(self, cellId:int) -> None\nC++: void GoToCell(vtkIdType cellId)\n\nInitialize the iterator to a specific cell. This will revalidate\nthe iterator if the underlying vtkCellArray has been modified.\nThis method can always be used to set the starting location for\nforward iteration, and it is also used to support random access.\n"},
  {"GetCellAtId", PyvtkCellArrayIterator_GetCellAtId, METH_VARARGS,
   "GetCellAtId(self, cellId:int, numCellPts:int, cellPts:(int, ...))\n    -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdType &numCellPts,\n    vtkIdType const *&cellPts)\nGetCellAtId(self, cellId:int, cellIds:vtkIdList) -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdList *cellIds)\nGetCellAtId(self, cellId:int) -> vtkIdList\nC++: vtkIdList *GetCellAtId(vtkIdType cellId)\n\nInitialize the iterator to a specific cell and return the cell.\nNote that methods passing vtkIdLists always copy data from the\nvtkCellArray storage buffer into the vtkIdList. Otherwise, a\nfastpath returning (numCellPts,cellPts) which may return a\npointer to internal vtkCellArray storage is possible, if\nvtkIdType is the same as the vtkCellArray buffer (which is\ntypical).\n"},
  {"GoToFirstCell", PyvtkCellArrayIterator_GoToFirstCell, METH_VARARGS,
   "GoToFirstCell(self) -> None\nC++: void GoToFirstCell()\n\nThe following are methods supporting forward iteration.\n\nInitialize the iterator for forward iteration. This will\nrevalidate the iterator if the underlying vtkCellArray has been\nmodified.\n"},
  {"GoToNextCell", PyvtkCellArrayIterator_GoToNextCell, METH_VARARGS,
   "GoToNextCell(self) -> None\nC++: void GoToNextCell()\n\nAdvance the forward iterator to the next cell.\n"},
  {"IsDoneWithTraversal", PyvtkCellArrayIterator_IsDoneWithTraversal, METH_VARARGS,
   "IsDoneWithTraversal(self) -> bool\nC++: bool IsDoneWithTraversal()\n\nReturns true if the iterator has completed the traversal.\n"},
  {"GetCurrentCellId", PyvtkCellArrayIterator_GetCurrentCellId, METH_VARARGS,
   "GetCurrentCellId(self) -> int\nC++: vtkIdType GetCurrentCellId()\n\nReturns the id of the current cell during forward iteration.\n"},
  {"GetCurrentCell", PyvtkCellArrayIterator_GetCurrentCell, METH_VARARGS,
   "GetCurrentCell(self, cellSize:int, cellPoints:(int, ...)) -> None\nC++: void GetCurrentCell(vtkIdType &cellSize,\n    vtkIdType const *&cellPoints)\nGetCurrentCell(self, ids:vtkIdList) -> None\nC++: void GetCurrentCell(vtkIdList *ids)\nGetCurrentCell(self) -> vtkIdList\nC++: vtkIdList *GetCurrentCell()\n\nReturns the definition of the current cell during forward\ntraversal. Note that methods passing vtkIdLists always copy data\nfrom the vtkCellArray storage buffer into the vtkIdList.\nOtherwise, a fastpath returning (numCellPts,cellPts) - which may\nreturn a pointer to internal vtkCellArray storage - is possible,\nif vtkIdType is the same as the vtkCellArray storage (which is\ntypical).\n"},
  {"ReplaceCurrentCell", PyvtkCellArrayIterator_ReplaceCurrentCell, METH_VARARGS,
   "ReplaceCurrentCell(self, list:vtkIdList) -> None\nC++: void ReplaceCurrentCell(vtkIdList *list)\nReplaceCurrentCell(self, npts:int, pts:(int, ...)) -> None\nC++: void ReplaceCurrentCell(vtkIdType npts, const vtkIdType *pts)\n\nSpecialized methods for performing operations on the\nvtkCellArray.\n\nReplace the current cell with the ids in `list`. Note that this\nmethod CANNOT change the number of points in the cell, it can\nonly redefine the ids (e.g. `list` must contain the same number\nof entries as the current cell's points).\n"},
  {"ReverseCurrentCell", PyvtkCellArrayIterator_ReverseCurrentCell, METH_VARARGS,
   "ReverseCurrentCell(self) -> None\nC++: void ReverseCurrentCell()\n\nReverses the order of the point ids in the current cell.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellArrayIterator_Doc =
  "vtkCellArrayIterator - Encapsulate traversal logic for vtkCellArray.\n\n"
  "Superclass: vtkObject\n\n"
  "This is iterator for thread-safe traversal of a vtkCellArray. It\n"
  "provides random access and forward iteration. Typical usage for\n"
  "forward iteration looks like:\n\n"
  "``` auto iter = vtk::TakeSmartPointer(cellArray->NewIterator()); for\n"
  "(iter->GoToFirstCell(); !iter->IsDoneWithTraversal();\n"
  "iter->GoToNextCell()) {\n"
  "  // do work with iter\n"
  "  iter->GetCurrentCell(numCellPts, cellPts); } ```\n\n"
  "Typical usage for random access looks like:\n\n"
  "``` auto iter = vtk::TakeSmartPointer(cellArray->NewIterator());\n"
  "iter->GetCellAtId(cellId, numCellPts, cellPts); ```\n\n"
  "Here cellId is the id of the ith cell in the vtkCellArray;numCellPts\n"
  "is the number of points defining the cell represented as vtkIdType;\n"
  "and cellPts is a pointer to the point ids defined as vtkIdType\n"
  "const*&.\n\n"
  "Internally the iterator may copy data from the vtkCellArray, or\n"
  "reference the internal vtkCellArray storage. This depends on the\n"
  "relationship of vtkIdType to the type and structure of internal\n"
  "storage. If the type of storage is the same as vtkIdType, and the\n"
  "storage is a single-component AOS array (i.e., a 1D array), then\n"
  "shared access to the vtkCellArray storage is provided. Otherwise, the\n"
  "data from storage is copied into an internal iterator buffer. (Of\n"
  "course copying is slower and can result in 3-4x reduction in\n"
  "traversal performance. On the other hand, the vtkCellArray can use\n"
  "the appropriate storage to save memory, perform zero-copy, and/or\n"
  "efficiently represent the cell connectivity information.) Note that\n"
  "referencing internal vtkCellArray storage has implications on the\n"
  "validity of the iterator. If the underlying vtkCellArray storage\n"
  "changes while iterating, and the iterator is referencing this\n"
  "storage, unpredictable and catastrophic results are likely - hence do\n"
  "not modify the vtkCellArray while iterating.\n\n"
  "@sa\n"
  "vtkCellArray\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellArrayIterator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellArrayIterator", // tp_name
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
  PyvtkCellArrayIterator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellArrayIterator_StaticNew()
{
  return vtkCellArrayIterator::New();
}

PyObject *PyvtkCellArrayIterator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellArrayIterator_Type, PyvtkCellArrayIterator_Methods,
    "vtkCellArrayIterator",
 &PyvtkCellArrayIterator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellArrayIterator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellArrayIterator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellArrayIterator", o) != 0)
  {
    Py_DECREF(o);
  }

}

