// python wrapper for vtkUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkUnstructuredGrid_ClassNew(); }

#ifndef DECLARED_PyvtkUnstructuredGridBase_ClassNew
extern "C" { PyObject *PyvtkUnstructuredGridBase_ClassNew(); }
#define DECLARED_PyvtkUnstructuredGridBase_ClassNew
#endif

static PyObject *
PyvtkUnstructuredGrid_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGrid::NewInstance());

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
PyvtkUnstructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUnstructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUnstructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUnstructuredGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_AllocateEstimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateEstimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateEstimate(temp0, temp1) :
      op->vtkUnstructuredGrid::AllocateEstimate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_AllocateExact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateExact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateExact(temp0, temp1) :
      op->vtkUnstructuredGrid::AllocateExact(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0 = 1000;
  int temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkUnstructuredGrid::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkUnstructuredGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkUnstructuredGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkUnstructuredGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  vtkGenericCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1, temp2) :
      op->vtkUnstructuredGrid::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUnstructuredGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkUnstructuredGrid_GetCell_s2(self, args);
    case 3:
      return PyvtkUnstructuredGrid_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetCellBounds(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::GetCellBounds(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->GetCellPoints(temp0, temp1, temp2c);
    }
    else
    {
      op->vtkUnstructuredGrid::GetCellPoints(temp0, temp1, temp2c);
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
PyvtkUnstructuredGrid_GetCellPoints_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1, temp2c, temp3);
    }
    else
    {
      op->vtkUnstructuredGrid::GetCellPoints(temp0, temp1, temp2c, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_GetCellPoints_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_GetCellPoints_s2(self, args);
    case 4:
      return PyvtkUnstructuredGrid_GetCellPoints_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_GetPointCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetPointCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->GetPointCells(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGrid::GetPointCells(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetPointCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_GetPointCells_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_GetPointCells_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointCells");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_NewCellIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCellIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellIterator *tempr = (ap.IsBound() ?
      op->NewCellIterator() :
      op->vtkUnstructuredGrid::NewCellIterator());

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
PyvtkUnstructuredGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkUnstructuredGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkUnstructuredGrid::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkCellTypes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellTypes"))
  {
    if (ap.IsBound())
    {
      op->GetCellTypes(temp0);
    }
    else
    {
      op->vtkUnstructuredGrid::GetCellTypes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetDistinctCellTypesArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistinctCellTypesArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetDistinctCellTypesArray() :
      op->vtkUnstructuredGrid::GetDistinctCellTypesArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellTypesArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypesArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetCellTypesArray() :
      op->vtkUnstructuredGrid::GetCellTypesArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkUnstructuredGrid::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkUnstructuredGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkUnstructuredGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLinks();
    }
    else
    {
      op->vtkUnstructuredGrid::BuildLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_SetLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkAbstractCellLinks *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLinks"))
  {
    if (ap.IsBound())
    {
      op->SetLinks(temp0);
    }
    else
    {
      op->vtkUnstructuredGrid::SetLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLinks *tempr = (ap.IsBound() ?
      op->GetLinks() :
      op->vtkUnstructuredGrid::GetLinks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellLinks(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetCellLinks."
    " (" "Use GetLinks() instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetCellLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLinks *tempr = (ap.IsBound() ?
      op->GetCellLinks() :
      op->vtkUnstructuredGrid::GetCellLinks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetFaceStream_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetFaceStream(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaceStream_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->GetFaceStream(temp0, temp1, temp2c);
    }
    else
    {
      op->vtkUnstructuredGrid::GetFaceStream(temp0, temp1, temp2c);
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
PyvtkUnstructuredGrid_GetFaceStream(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_GetFaceStream_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_GetFaceStream_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFaceStream");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_SetCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
  vtkCellArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkCellArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkCellArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkCellArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  vtkIdTypeArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkCellArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_SetCells_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkUnsignedCharArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  vtkCellArray *temp2 = nullptr;
  vtkIdTypeArray *temp3 = nullptr;
  vtkIdTypeArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkCellArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkUnstructuredGrid::SetCells(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_SetCells_Methods[] = {
  {"SetCells", PyvtkUnstructuredGrid_SetCells_s1, METH_VARARGS,
   "@iV *vtkCellArray"},
  {"SetCells", PyvtkUnstructuredGrid_SetCells_s2, METH_VARARGS,
   "@PV *i *vtkCellArray"},
  {"SetCells", PyvtkUnstructuredGrid_SetCells_s3, METH_VARARGS,
   "@VV *vtkUnsignedCharArray *vtkCellArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGrid_SetCells(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_SetCells_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkUnstructuredGrid_SetCells_s4(self, args);
    case 3:
      return PyvtkUnstructuredGrid_SetCells_s5(self, args);
    case 5:
      return PyvtkUnstructuredGrid_SetCells_s6(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCells");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetCells() :
      op->vtkUnstructuredGrid::GetCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellNeighbors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellNeighbors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGrid::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCellNeighbors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellNeighbors(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkUnstructuredGrid::GetCellNeighbors(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnstructuredGrid_GetCellNeighbors_s1(self, args);
    case 4:
      return PyvtkUnstructuredGrid_GetCellNeighbors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellNeighbors");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_IsCellBoundary_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCellBoundary(temp0, temp1, temp2, temp3) :
      op->vtkUnstructuredGrid::IsCellBoundary(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_IsCellBoundary_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCellBoundary(temp0, temp1, temp2) :
      op->vtkUnstructuredGrid::IsCellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_IsCellBoundary_s3(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method IsCellBoundary."
    " (" "Use the overload that doesn't take a vtkIdList instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "IsCellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsCellBoundary(temp0, temp1, temp2, temp3) :
      op->vtkUnstructuredGrid::IsCellBoundary(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_IsCellBoundary_Methods[] = {
  {"IsCellBoundary", PyvtkUnstructuredGrid_IsCellBoundary_s1, METH_VARARGS,
   "@kkPk *k"},
  {"IsCellBoundary", PyvtkUnstructuredGrid_IsCellBoundary_s3, METH_VARARGS,
   "@kkPV *k *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGrid_IsCellBoundary(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_IsCellBoundary_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnstructuredGrid_IsCellBoundary_s2(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsCellBoundary");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_InsertNextLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  int temp0;
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
    long long tempr = (ap.IsBound() ?
      op->InsertNextLinkedCell(temp0, temp1, temp2) :
      op->vtkUnstructuredGrid::InsertNextLinkedCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_RemoveReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveReferenceToCell(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::RemoveReferenceToCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_AddReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddReferenceToCell(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::AddReferenceToCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ResizeCellList(temp0, temp1);
    }
    else
    {
      op->vtkUnstructuredGrid::ResizeCellList(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkUnstructuredGrid::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkUnstructuredGrid::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkUnstructuredGrid::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkUnstructuredGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkUnstructuredGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkUnstructuredGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

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
      op->vtkUnstructuredGrid::GetIdsOfCellsOfType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsHomogeneous() :
      op->vtkUnstructuredGrid::IsHomogeneous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_RemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostCells();
    }
    else
    {
      op->vtkUnstructuredGrid::RemoveGhostCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUnstructuredGrid *tempr = vtkUnstructuredGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_GetData_Methods[] = {
  {"GetData", PyvtkUnstructuredGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkUnstructuredGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_GetFaces_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetFaces(temp0) :
      op->vtkUnstructuredGrid::GetFaces(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaces_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkUnstructuredGrid::GetFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_GetFaces(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkUnstructuredGrid_GetFaces_s1(self, args);
    case 0:
      return PyvtkUnstructuredGrid_GetFaces_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFaces");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_GetFaceLocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetFaceLocations() :
      op->vtkUnstructuredGrid::GetFaceLocations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_InitializeFacesRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFacesRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->InitializeFacesRepresentation(temp0) :
      op->vtkUnstructuredGrid::InitializeFacesRepresentation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_GetMeshMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMeshMTime() :
      op->vtkUnstructuredGrid::GetMeshMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  vtkCellArray *temp0 = nullptr;
  long long temp1;
  long long temp2;
  vtkCellArray *temp3 = nullptr;
  vtkIdTypeArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
  {
    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  long long temp1;
  long long temp2;
  vtkCellArray *temp3 = nullptr;
  vtkIdTypeArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
  {
    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DecomposeAPolyhedronCell");

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  long long temp2;
  vtkCellArray *temp3 = nullptr;
  vtkIdTypeArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkIdTypeArray"))
  {
    vtkUnstructuredGrid::DecomposeAPolyhedronCell(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_Methods[] = {
  {"DecomposeAPolyhedronCell", PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s1, METH_VARARGS | METH_STATIC,
   "VkkVV *vtkCellArray *vtkCellArray *vtkIdTypeArray"},
  {"DecomposeAPolyhedronCell", PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s2, METH_VARARGS | METH_STATIC,
   "PkkVV *k *vtkCellArray *vtkIdTypeArray"},
  {"DecomposeAPolyhedronCell", PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_s3, METH_VARARGS | METH_STATIC,
   "kPkVV *k *vtkCellArray *vtkIdTypeArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGrid_DecomposeAPolyhedronCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGrid_DecomposeAPolyhedronCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DecomposeAPolyhedronCell");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertFaceStreamPointIds");

  vtkIdList *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkUnstructuredGrid::ConvertFaceStreamPointIds(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertFaceStreamPointIds");

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkUnstructuredGrid::ConvertFaceStreamPointIds(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGrid_ConvertFaceStreamPointIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s1(self, args);
    case 3:
      return PyvtkUnstructuredGrid_ConvertFaceStreamPointIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConvertFaceStreamPointIds");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGrid_GetCellLocationsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocationsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGrid *op = static_cast<vtkUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetCellLocationsArray() :
      op->vtkUnstructuredGrid::GetCellLocationsArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGrid_Methods[] = {
  {"ExtendedNew", PyvtkUnstructuredGrid_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkUnstructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUnstructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUnstructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkUnstructuredGrid_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"AllocateEstimate", PyvtkUnstructuredGrid_AllocateEstimate, METH_VARARGS,
   "AllocateEstimate(self, numCells:int, maxCellSize:int) -> bool\nC++: bool AllocateEstimate(vtkIdType numCells,\n    vtkIdType maxCellSize)\n\nPre-allocate memory in internal data structures. Does not change\nthe number of cells, only the array capacities. Existing data is\nNOT preserved.\n@param numCells The number of expected cells in the dataset.\n@param maxCellSize The number of points per cell to allocate\n    memory for.\n@return True if allocation succeeds.\n@sa Squeeze();\n"},
  {"AllocateExact", PyvtkUnstructuredGrid_AllocateExact, METH_VARARGS,
   "AllocateExact(self, numCells:int, connectivitySize:int) -> bool\nC++: bool AllocateExact(vtkIdType numCells,\n    vtkIdType connectivitySize)\n\nPre-allocate memory in internal data structures. Does not change\nthe number of cells, only the array capacities. Existing data is\nNOT preserved.\n@param numCells The number of expected cells in the dataset.\n@param connectivitySize The total number of pointIds stored for\n    all cells.\n@return True if allocation succeeds.\n@sa Squeeze();\n"},
  {"Allocate", PyvtkUnstructuredGrid_Allocate, METH_VARARGS,
   "Allocate(self, numCells:int=1000, extSize:int=1000) -> None\nC++: void Allocate(vtkIdType numCells=1000, int extSize=1000)\n    override;\n\nMethod allocates initial storage for the cell connectivity. Use\nthis method before the method InsertNextCell(). The array\ncapacity is doubled when the inserting a cell exceeds the current\ncapacity. extSize is no longer used.\n\note Prefer AllocateExact or AllocateEstimate, which give more\ncontrol over how allocations are distributed.\n"},
  {"Reset", PyvtkUnstructuredGrid_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nStandard vtkDataSet methods; see vtkDataSet.h for documentation.\n"},
  {"CopyStructure", PyvtkUnstructuredGrid_CopyStructure, METH_VARARGS,
   "CopyStructure(self, ds:vtkDataSet) -> None\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric structure of an input point set object.\n"},
  {"GetNumberOfCells", PyvtkUnstructuredGrid_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nThis method always returns 0, as there are no cells in a\n`vtkPointSet`.\n"},
  {"GetCell", PyvtkUnstructuredGrid_GetCell, METH_VARARGS,
   "GetCell(self, cellId:int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nGetCell(self, cellId:int, cell:vtkGenericCell) -> None\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\n\nThis method always return a `vtkEmptyCell`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellBounds", PyvtkUnstructuredGrid_GetCellBounds, METH_VARARGS,
   "GetCellBounds(self, cellId:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nGet the bounds of the cell with cellId such that: 0 <= cellId <\nNumberOfCells. A subclass may be able to determine the bounds of\ncell without using an expensive GetCell() method. A default\nimplementation is provided that actually uses a GetCell() call. \nThis is to ensure the method is available to all datasets. \nSubclasses should override this method to provide an efficient\nimplementation. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellPoints", PyvtkUnstructuredGrid_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...)) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n    vtkIdType const *&pts)\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...),\n    ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n    vtkIdType const *&pts, vtkIdList *ptIds) override;\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetPointCells", PyvtkUnstructuredGrid_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\nGetPointCells(self, ptId:int, ncells:int, cells:[int, ...])\n    -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdType &ncells,\n    vtkIdType *&cells)\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"NewCellIterator", PyvtkUnstructuredGrid_NewCellIterator, METH_VARARGS,
   "NewCellIterator(self) -> vtkCellIterator\nC++: vtkCellIterator *NewCellIterator() override;\n\nReturn an iterator that traverses the cells in this data set.\n"},
  {"GetCellType", PyvtkUnstructuredGrid_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nGet the type of the cell with the given cellId.\n"},
  {"GetCellSize", PyvtkUnstructuredGrid_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: vtkIdType GetCellSize(vtkIdType cellId) override;\n\nGet the size of the cell with given cellId.\n"},
  {"GetCellTypes", PyvtkUnstructuredGrid_GetCellTypes, METH_VARARGS,
   "GetCellTypes(self, types:vtkCellTypes) -> None\nC++: void GetCellTypes(vtkCellTypes *types) override;\n\nGet a list of types of cells in a dataset. The list consists of\nan array of types (not necessarily in any order), with a single\nentry per type. For example a dataset with 5 triangles, 3 lines,\nand 100 hexahedra would result in a list of three entries,\ncorresponding to the types VTK_TRIANGLE, VTK_LINE, and\nVTK_HEXAHEDRON. This override implements an optimization that\nrecomputes cell types only when the types of cells may have\nchanged.\n\nTHIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD\nAND THE DATASET IS NOT MODIFIED\n"},
  {"GetDistinctCellTypesArray", PyvtkUnstructuredGrid_GetDistinctCellTypesArray, METH_VARARGS,
   "GetDistinctCellTypesArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetDistinctCellTypesArray()\n\nGet a list of types of cells in a dataset. The list consists of\nan array of types (not necessarily in any order), with a single\nentry per type. For example a dataset with 5 triangles, 3 lines,\nand 100 hexahedra would result in a list of three entries,\ncorresponding to the types VTK_TRIANGLE, VTK_LINE, and\nVTK_HEXAHEDRON. This override implements an optimization that\nrecomputes cell types only when the types of cells may have\nchanged. This method never returns `nullptr`.\n\nTHIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD\nAND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellTypesArray", PyvtkUnstructuredGrid_GetCellTypesArray, METH_VARARGS,
   "GetCellTypesArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetCellTypesArray()\n\nGet the array of all cell types in the grid. Each\nsingle-component tuple in the array at an index that corresponds\nto the type of the cell with the same index. To get an array of\nonly the distinct cell types in the dataset, use GetCellTypes().\n"},
  {"Squeeze", PyvtkUnstructuredGrid_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze() override;\n\nSqueeze all arrays in the grid to conserve memory.\n"},
  {"Initialize", PyvtkUnstructuredGrid_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nReset the grid to an empty state and free any memory.\n"},
  {"GetMaxCellSize", PyvtkUnstructuredGrid_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nGet the size, in number of points, of the largest cell.\n"},
  {"BuildLinks", PyvtkUnstructuredGrid_BuildLinks, METH_VARARGS,
   "BuildLinks(self) -> None\nC++: void BuildLinks()\n\nBuild topological links from points to lists of cells that use\neach point. See vtkAbstractCellLinks for more information.\n"},
  {"SetLinks", PyvtkUnstructuredGrid_SetLinks, METH_VARARGS,
   "SetLinks(self, _arg:vtkAbstractCellLinks) -> None\nC++: virtual void SetLinks(vtkAbstractCellLinks *_arg)\n\nSet/Get the links that you created possibly without using\nBuildLinks.\n"},
  {"GetLinks", PyvtkUnstructuredGrid_GetLinks, METH_VARARGS,
   "GetLinks(self) -> vtkAbstractCellLinks\nC++: virtual vtkAbstractCellLinks *GetLinks()\n\n"},
  {"GetCellLinks", PyvtkUnstructuredGrid_GetCellLinks, METH_VARARGS,
   "GetCellLinks(self) -> vtkAbstractCellLinks\nC++: vtkAbstractCellLinks *GetCellLinks()\n\nGet the cell links. The cell links will be one of nullptr=0;\nvtkCellLinks=1; vtkStaticCellLinksTemplate<VTK_UNSIGNED_SHORT>=2;\nvtkStaticCellLinksTemplate<VTK_UNSIGNED_INT>=3;\nvtkStaticCellLinksTemplate<VTK_ID_TYPE>=4.  (See enum types\ndefined in vtkAbstractCellLinks.)\n"},
  {"GetFaceStream", PyvtkUnstructuredGrid_GetFaceStream, METH_VARARGS,
   "GetFaceStream(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetFaceStream(vtkIdType cellId, vtkIdList *ptIds)\nGetFaceStream(self, cellId:int, nfaces:int, ptIds:(int, ...))\n    -> None\nC++: void GetFaceStream(vtkIdType cellId, vtkIdType &nfaces,\n    vtkIdType const *&ptIds)\n\nGet the face stream of a polyhedron cell in the following format:\n(numCellFaces, numFace0Pts, id1, id2, id3, numFace1Pts,id1, id2,\nid3, ...). If the requested cell is not a polyhedron, then the\nstandard GetCellPoints is called to return a list of unique point\nids (id1, id2, id3, ...).\n"},
  {"SetCells", PyvtkUnstructuredGrid_SetCells, METH_VARARGS,
   "SetCells(self, type:int, cells:vtkCellArray) -> None\nC++: void SetCells(int type, vtkCellArray *cells)\nSetCells(self, types:[int, ...], cells:vtkCellArray) -> None\nC++: void SetCells(int *types, vtkCellArray *cells)\nSetCells(self, cellTypes:vtkUnsignedCharArray, cells:vtkCellArray)\n     -> None\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkCellArray *cells)\nSetCells(self, cellTypes:vtkUnsignedCharArray, cells:vtkCellArray,\n     faceLocations:vtkIdTypeArray, faces:vtkIdTypeArray) -> None\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkCellArray *cells, vtkIdTypeArray *faceLocations,\n    vtkIdTypeArray *faces)\nSetCells(self, cellTypes:vtkUnsignedCharArray,\n    cellLocations:vtkIdTypeArray, cells:vtkCellArray) -> None\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations, vtkCellArray *cells)\nSetCells(self, cellTypes:vtkUnsignedCharArray,\n    cellLocations:vtkIdTypeArray, cells:vtkCellArray,\n    faceLocations:vtkIdTypeArray, faces:vtkIdTypeArray) -> None\nC++: void SetCells(vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations, vtkCellArray *cells,\n    vtkIdTypeArray *faceLocations, vtkIdTypeArray *faces)\n\nProvide cell information to define the dataset.\n\nCells like vtkPolyhedron require points plus a list of faces. To\nhandle vtkPolyhedron, SetCells() support a special input\ncellConnectivities format (numCellFaces, numFace0Pts, id1, id2,\nid3, numFace1Pts,id1, id2, id3, ...) The functions use\nvtkPolyhedron::DecomposeAPolyhedronCell() to convert polyhedron\ncells into standard format.\n"},
  {"GetCells", PyvtkUnstructuredGrid_GetCells, METH_VARARGS,
   "GetCells(self) -> vtkCellArray\nC++: vtkCellArray *GetCells()\n\nReturn the unstructured grid connectivity array.\n"},
  {"GetCellNeighbors", PyvtkUnstructuredGrid_GetCellNeighbors, METH_VARARGS,
   "GetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds) override;\nGetCellNeighbors(self, cellId:int, npts:int, ptIds:(int, ...),\n    cellIds:vtkIdList) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdType npts,\n    const vtkIdType *ptIds, vtkIdList *cellIds)\n\nA topological inquiry to retrieve all of the cells using list of\npoints exclusive of the current cell specified (e.g., cellId). \nTHIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD\nAND THE DATASET IS NOT MODIFIED.\n"},
  {"IsCellBoundary", PyvtkUnstructuredGrid_IsCellBoundary, METH_VARARGS,
   "IsCellBoundary(self, cellId:int, npts:int, ptIds:(int, ...),\n    neighborCellId:int) -> bool\nC++: bool IsCellBoundary(vtkIdType cellId, vtkIdType npts,\n    const vtkIdType *ptIds, vtkIdType &neighborCellId)\nIsCellBoundary(self, cellId:int, npts:int, ptIds:(int, ...))\n    -> bool\nC++: bool IsCellBoundary(vtkIdType cellId, vtkIdType npts,\n    const vtkIdType *ptIds)\nIsCellBoundary(self, cellId:int, npts:int, ptIds:(int, ...),\n    cellIds:vtkIdList) -> bool\nC++: bool IsCellBoundary(vtkIdType cellId, vtkIdType npts,\n    const vtkIdType *ptIds, vtkIdList *cellIds)\n\nA topological inquiry to determine whether a topological entity\n(e.g., point, edge, or face) defined by the point ids (ptIds of\nlength npts) is a boundary entity of a specified cell (indicated\nby cellId). A boundary entity is a topological feature used by\nexactly one cell. This method is related to GetCellNeighbors()\nexcept that it simply indicates whether a topological feature is\nboundary - hence the method is faster. THIS METHOD IS THREAD SAFE\nIF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT\nMODIFIED.\n"},
  {"InsertNextLinkedCell", PyvtkUnstructuredGrid_InsertNextLinkedCell, METH_VARARGS,
   "InsertNextLinkedCell(self, type:int, npts:int, pts:(int, ...))\n    -> int\nC++: vtkIdType InsertNextLinkedCell(int type, int npts,\n    const vtkIdType pts[])\n\nUse these methods only if the dataset has been specified as\nEditable. See vtkPointSet for more information.\n"},
  {"RemoveReferenceToCell", PyvtkUnstructuredGrid_RemoveReferenceToCell, METH_VARARGS,
   "RemoveReferenceToCell(self, ptId:int, cellId:int) -> None\nC++: void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\n"},
  {"AddReferenceToCell", PyvtkUnstructuredGrid_AddReferenceToCell, METH_VARARGS,
   "AddReferenceToCell(self, ptId:int, cellId:int) -> None\nC++: void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\n"},
  {"ResizeCellList", PyvtkUnstructuredGrid_ResizeCellList, METH_VARARGS,
   "ResizeCellList(self, ptId:int, size:int) -> None\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\n"},
  {"GetPiece", PyvtkUnstructuredGrid_GetPiece, METH_VARARGS,
   "GetPiece(self) -> int\nC++: virtual int GetPiece()\n\nSet / Get the piece and the number of pieces. Similar to extent\nin 3D.\n"},
  {"GetNumberOfPieces", PyvtkUnstructuredGrid_GetNumberOfPieces, METH_VARARGS,
   "GetNumberOfPieces(self) -> int\nC++: virtual int GetNumberOfPieces()\n\n"},
  {"GetGhostLevel", PyvtkUnstructuredGrid_GetGhostLevel, METH_VARARGS,
   "GetGhostLevel(self) -> int\nC++: virtual int GetGhostLevel()\n\nGet the ghost level.\n"},
  {"GetActualMemorySize", PyvtkUnstructuredGrid_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"ShallowCopy", PyvtkUnstructuredGrid_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkUnstructuredGrid_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"GetIdsOfCellsOfType", PyvtkUnstructuredGrid_GetIdsOfCellsOfType, METH_VARARGS,
   "GetIdsOfCellsOfType(self, type:int, array:vtkIdTypeArray) -> None\nC++: void GetIdsOfCellsOfType(int type, vtkIdTypeArray *array)\n    override;\n\nFill vtkIdTypeArray container with list of cell Ids.  This method\ntraverses all cells and, for a particular cell type, inserts the\ncell Id into the container.\n"},
  {"IsHomogeneous", PyvtkUnstructuredGrid_IsHomogeneous, METH_VARARGS,
   "IsHomogeneous(self) -> int\nC++: int IsHomogeneous() override;\n\nReturns whether cells are all of the same type.\n"},
  {"RemoveGhostCells", PyvtkUnstructuredGrid_RemoveGhostCells, METH_VARARGS,
   "RemoveGhostCells(self) -> None\nC++: void RemoveGhostCells()\n\nThis method will remove any cell that is marked as ghost (has the\nvtkDataSetAttributes::DUPLICATECELL or the\nvtkDataSetAttributes::HIDDENCELL bit set).\n"},
  {"GetData", PyvtkUnstructuredGrid_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkUnstructuredGrid\nC++: static vtkUnstructuredGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"GetFaces", PyvtkUnstructuredGrid_GetFaces, METH_VARARGS,
   "GetFaces(self, cellId:int) -> Pointer\nC++: vtkIdType *GetFaces(vtkIdType cellId)\nGetFaces(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetFaces()\n\nSpecial support for polyhedron. Return nullptr for all other cell\ntypes.\n"},
  {"GetFaceLocations", PyvtkUnstructuredGrid_GetFaceLocations, METH_VARARGS,
   "GetFaceLocations(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetFaceLocations()\n\n"},
  {"InitializeFacesRepresentation", PyvtkUnstructuredGrid_InitializeFacesRepresentation, METH_VARARGS,
   "InitializeFacesRepresentation(self, numPrevCells:int) -> int\nC++: int InitializeFacesRepresentation(vtkIdType numPrevCells)\n\nSpecial function used by vtkUnstructuredGridReader. By default\nvtkUnstructuredGrid does not contain face information, which is\nonly used by polyhedron cells. If so far no polyhedron cells have\nbeen added, Faces and FaceLocations pointers will be nullptr. In\nthis case, need to initialize the arrays and assign values to the\nprevious non-polyhedron cells.\n"},
  {"GetMeshMTime", PyvtkUnstructuredGrid_GetMeshMTime, METH_VARARGS,
   "GetMeshMTime(self) -> int\nC++: virtual vtkMTimeType GetMeshMTime()\n\nReturn the mesh (geometry/topology) modification time. This time\nis different from the usual MTime which also takes into account\nthe modification of data arrays. This function can be used to\ntrack the changes on the mesh separately from the data arrays\n(eg. static mesh over time with transient data).\n"},
  {"DecomposeAPolyhedronCell", PyvtkUnstructuredGrid_DecomposeAPolyhedronCell, METH_VARARGS,
   "DecomposeAPolyhedronCell(polyhedronCellArray:vtkCellArray,\n    nCellpts:int, nCellfaces:int, cellArray:vtkCellArray,\n    faces:vtkIdTypeArray) -> None\nC++: static void DecomposeAPolyhedronCell(\n    vtkCellArray *polyhedronCellArray, vtkIdType &nCellpts,\n    vtkIdType &nCellfaces, vtkCellArray *cellArray,\n    vtkIdTypeArray *faces)\nDecomposeAPolyhedronCell(polyhedronCellStream:(int, ...),\n    nCellpts:int, nCellfaces:int, cellArray:vtkCellArray,\n    faces:vtkIdTypeArray) -> None\nC++: static void DecomposeAPolyhedronCell(\n    const vtkIdType *polyhedronCellStream, vtkIdType &nCellpts,\n    vtkIdType &nCellfaces, vtkCellArray *cellArray,\n    vtkIdTypeArray *faces)\nDecomposeAPolyhedronCell(nCellFaces:int, inFaceStream:(int, ...),\n    nCellpts:int, cellArray:vtkCellArray, faces:vtkIdTypeArray)\n    -> None\nC++: static void DecomposeAPolyhedronCell(vtkIdType nCellFaces,\n    const vtkIdType *inFaceStream, vtkIdType &nCellpts,\n    vtkCellArray *cellArray, vtkIdTypeArray *faces)\n\nA static method for converting a polyhedron vtkCellArray of\nformat [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i, j, k, ...]\ninto three components: (1) an integer indicating the number of\nfaces (2) a standard vtkCellArray storing point ids [nCell0Pts,\ni, j, k] and (3) an vtkIdTypeArray storing face connectivity in\nformat [nFace0Pts, i, j, k, nFace1Pts, i, j, k, ...] Note: input\nis assumed to contain only one polyhedron cell. Outputs (2) and\n(3) will be stacked at the end of the input cellArray and faces.\nThe original data in the input will not be touched.\n"},
  {"ConvertFaceStreamPointIds", PyvtkUnstructuredGrid_ConvertFaceStreamPointIds, METH_VARARGS,
   "ConvertFaceStreamPointIds(faceStream:vtkIdList, idMap:[int, ...])\n    -> None\nC++: static void ConvertFaceStreamPointIds(vtkIdList *faceStream,\n    vtkIdType *idMap)\nConvertFaceStreamPointIds(nfaces:int, faceStream:[int, ...],\n    idMap:[int, ...]) -> None\nC++: static void ConvertFaceStreamPointIds(vtkIdType nfaces,\n    vtkIdType *faceStream, vtkIdType *idMap)\n\nConvert pid in a face stream into idMap[pid]. The face stream is\nof format [nCellFaces, nFace0Pts, i, j, k, nFace1Pts, i, j, k,\n...]. The user is responsible to make sure all the Ids in\nfaceStream do not exceed the range of idMap.\n"},
  {"GetCellLocationsArray", PyvtkUnstructuredGrid_GetCellLocationsArray, METH_VARARGS,
   "GetCellLocationsArray(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetCellLocationsArray()\n\nGet the array of all the starting indices of cell definitions in\nthe cell array.\n\n@warning vtkCellArray supports random access now. This array is\n    no\nlonger used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUnstructuredGrid_Doc =
  "vtkUnstructuredGrid - dataset represents arbitrary combinations of\nall possible cell types\n\n"
  "Superclass: vtkUnstructuredGridBase\n\n"
  "vtkUnstructuredGrid is a data object that is a concrete\n"
  "implementation of vtkDataSet. vtkUnstructuredGrid represents any\n"
  "combinations of any cell types. This includes 0D (e.g., points), 1D\n"
  "(e.g., lines, polylines), 2D (e.g., triangles, polygons), and 3D\n"
  "(e.g., hexahedron, tetrahedron, polyhedron, etc.).\n"
  "vtkUnstructuredGrid provides random access to cells, as well as\n"
  "topological information (such as lists of cells using each point).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUnstructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkUnstructuredGrid", // tp_name
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
  PyvtkUnstructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUnstructuredGrid_StaticNew()
{
  return vtkUnstructuredGrid::New();
}

PyObject *PyvtkUnstructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUnstructuredGrid_Type, PyvtkUnstructuredGrid_Methods,
    "vtkUnstructuredGrid",
 &PyvtkUnstructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkUnstructuredGridBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

