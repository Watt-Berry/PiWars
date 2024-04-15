// python wrapper for vtkCPExodusIIElementBlock
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCPExodusIIElementBlock.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPExodusIIElementBlock(PyObject *dict); }
extern "C" { PyObject *PyvtkCPExodusIIElementBlockImpl_ClassNew(); }


static PyObject *
PyvtkCPExodusIIElementBlockImpl_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPExodusIIElementBlockImpl::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIElementBlockImpl::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPExodusIIElementBlockImpl *tempr = vtkCPExodusIIElementBlockImpl::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPExodusIIElementBlockImpl *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIElementBlockImpl::NewInstance());

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
PyvtkCPExodusIIElementBlockImpl_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCPExodusIIElementBlockImpl::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCPExodusIIElementBlockImpl::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_SetExodusConnectivityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExodusConnectivityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  std::string temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->SetExodusConnectivityArray(temp0, temp1, temp2, temp3) :
      op->vtkCPExodusIIElementBlockImpl::SetExodusConnectivityArray(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCPExodusIIElementBlockImpl::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkCPExodusIIElementBlockImpl::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetCellPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetFaceStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetFaceStream(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::GetFaceStream(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkCPExodusIIElementBlockImpl::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetIdsOfCellsOfType(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::GetIdsOfCellsOfType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsHomogeneous() :
      op->vtkCPExodusIIElementBlockImpl::IsHomogeneous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  long long temp0;
  int temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  int temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  long long temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(size4);
  long long *temp4 = store4.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.CheckSizeHint(2, size2, temp1) &&
      ap.CheckSizeHint(4, size4, temp3))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCPExodusIIElementBlockImpl::InsertNextCell(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCPExodusIIElementBlockImpl_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s1(self, args);
    case 3:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s2(self, args);
    case 5:
      return PyvtkCPExodusIIElementBlockImpl_InsertNextCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return nullptr;
}


static PyObject *
PyvtkCPExodusIIElementBlockImpl_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlockImpl *op = static_cast<vtkCPExodusIIElementBlockImpl *>(vp);

  long long temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    if (ap.IsBound())
    {
      op->ReplaceCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCPExodusIIElementBlockImpl::ReplaceCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCPExodusIIElementBlockImpl_Methods[] = {
  {"IsTypeOf", PyvtkCPExodusIIElementBlockImpl_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPExodusIIElementBlockImpl_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPExodusIIElementBlockImpl_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCPExodusIIElementBlockImpl\nC++: static vtkCPExodusIIElementBlockImpl *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPExodusIIElementBlockImpl_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCPExodusIIElementBlockImpl\nC++: vtkCPExodusIIElementBlockImpl *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCPExodusIIElementBlockImpl_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCPExodusIIElementBlockImpl_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetExodusConnectivityArray", PyvtkCPExodusIIElementBlockImpl_SetExodusConnectivityArray, METH_VARARGS,
   "SetExodusConnectivityArray(self, elements:[int, ...], type:str,\n    numElements:int, nodesPerElement:int) -> bool\nC++: bool SetExodusConnectivityArray(int *elements,\n    const std::string &type, int numElements, int nodesPerElement)\n\nSet the Exodus element block data. 'elements' is the array\nreturned from ex_get_elem_conn. 'type', 'numElements', and\n'nodesPerElement' are obtained from ex_get_elem_block. Returns\ntrue or false depending on whether or not the element type can be\ntranslated into a VTK cell type. This object takes ownership of\nthe elements array unless this function returns false.\n"},
  {"GetNumberOfCells", PyvtkCPExodusIIElementBlockImpl_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells()\n\n"},
  {"GetCellType", PyvtkCPExodusIIElementBlockImpl_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: int GetCellType(vtkIdType cellId)\n\n"},
  {"GetCellPoints", PyvtkCPExodusIIElementBlockImpl_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n\n"},
  {"GetFaceStream", PyvtkCPExodusIIElementBlockImpl_GetFaceStream, METH_VARARGS,
   "GetFaceStream(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetFaceStream(vtkIdType cellId, vtkIdList *ptIds)\n\n"},
  {"GetPointCells", PyvtkCPExodusIIElementBlockImpl_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n\n"},
  {"GetMaxCellSize", PyvtkCPExodusIIElementBlockImpl_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize()\n\n"},
  {"GetIdsOfCellsOfType", PyvtkCPExodusIIElementBlockImpl_GetIdsOfCellsOfType, METH_VARARGS,
   "GetIdsOfCellsOfType(self, type:int, array:vtkIdTypeArray) -> None\nC++: void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)\n\n"},
  {"IsHomogeneous", PyvtkCPExodusIIElementBlockImpl_IsHomogeneous, METH_VARARGS,
   "IsHomogeneous(self) -> int\nC++: int IsHomogeneous()\n\n"},
  {"Allocate", PyvtkCPExodusIIElementBlockImpl_Allocate, METH_VARARGS,
   "Allocate(self, numCells:int, extSize:int=1000) -> None\nC++: void Allocate(vtkIdType numCells, int extSize=1000)\n\n"},
  {"InsertNextCell", PyvtkCPExodusIIElementBlockImpl_InsertNextCell, METH_VARARGS,
   "InsertNextCell(self, type:int, ptIds:vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *ptIds)\nInsertNextCell(self, type:int, npts:int, ptIds:(int, ...)) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    const vtkIdType ptIds[])\nInsertNextCell(self, type:int, npts:int, ptIds:(int, ...),\n    nfaces:int, faces:(int, ...)) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    const vtkIdType ptIds[], vtkIdType nfaces,\n    const vtkIdType faces[])\n\n"},
  {"ReplaceCell", PyvtkCPExodusIIElementBlockImpl_ReplaceCell, METH_VARARGS,
   "ReplaceCell(self, cellId:int, npts:int, pts:(int, ...)) -> None\nC++: void ReplaceCell(vtkIdType cellId, int npts,\n    const vtkIdType pts[])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCPExodusIIElementBlockImpl_Doc =
  "vtkCPExodusIIElementBlockImpl - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCPExodusIIElementBlockImpl_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExodus.vtkCPExodusIIElementBlockImpl", // tp_name
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
  PyvtkCPExodusIIElementBlockImpl_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPExodusIIElementBlockImpl_StaticNew()
{
  return vtkCPExodusIIElementBlockImpl::New();
}

PyObject *PyvtkCPExodusIIElementBlockImpl_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCPExodusIIElementBlockImpl_Type, PyvtkCPExodusIIElementBlockImpl_Methods,
    "vtkCPExodusIIElementBlockImpl",
 &PyvtkCPExodusIIElementBlockImpl_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkCPExodusIIElementBlock_ClassNew(); }


static PyObject *
PyvtkCPExodusIIElementBlock_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPExodusIIElementBlock::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlock *op = static_cast<vtkCPExodusIIElementBlock *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIElementBlock::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPExodusIIElementBlock *tempr = vtkCPExodusIIElementBlock::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlock *op = static_cast<vtkCPExodusIIElementBlock *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPExodusIIElementBlock *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIElementBlock::NewInstance());

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
PyvtkCPExodusIIElementBlock_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCPExodusIIElementBlock::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIElementBlock_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIElementBlock *op = static_cast<vtkCPExodusIIElementBlock *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCPExodusIIElementBlock::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCPExodusIIElementBlock_Methods[] = {
  {"IsTypeOf", PyvtkCPExodusIIElementBlock_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPExodusIIElementBlock_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPExodusIIElementBlock_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCPExodusIIElementBlock\nC++: static vtkCPExodusIIElementBlock *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPExodusIIElementBlock_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCPExodusIIElementBlock\nC++: vtkCPExodusIIElementBlock *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCPExodusIIElementBlock_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCPExodusIIElementBlock_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCPExodusIIElementBlock_Doc =
  "vtkCPExodusIIElementBlock - Uses an Exodus II element block as a\n vtkMappedUnstructuredGrid's implementation.\n\n"
  "Superclass: vtkUnstructuredGridBase\n\n"
  "This class allows raw data arrays returned by the Exodus II library\n"
  "to be used directly in VTK without repacking the data into the\n"
  "vtkUnstructuredGrid memory layout. Use the vtkCPExodusIIInSituReader\n"
  "to read an Exodus II file's data into this structure.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCPExodusIIElementBlock_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExodus.vtkCPExodusIIElementBlock", // tp_name
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
  PyvtkCPExodusIIElementBlock_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPExodusIIElementBlock_StaticNew()
{
  return vtkCPExodusIIElementBlock::New();
}

PyObject *PyvtkCPExodusIIElementBlock_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCPExodusIIElementBlock_Type, PyvtkCPExodusIIElementBlock_Methods,
    "vtkCPExodusIIElementBlock",
 &PyvtkCPExodusIIElementBlock_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridBase");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCPExodusIIElementBlock(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPExodusIIElementBlockImpl_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPExodusIIElementBlockImpl", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkCPExodusIIElementBlock_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPExodusIIElementBlock", o) != 0)
  {
    Py_DECREF(o);
  }

}

