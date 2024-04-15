// python wrapper for vtkStructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkStructuredGrid_ClassNew(); }

#ifndef DECLARED_PyvtkPointSet_ClassNew
extern "C" { PyObject *PyvtkPointSet_ClassNew(); }
#define DECLARED_PyvtkPointSet_ClassNew
#endif

static PyObject *
PyvtkStructuredGrid_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = vtkStructuredGrid::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredGrid *tempr = vtkStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredGrid::NewInstance());

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
PyvtkStructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkStructuredGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkStructuredGrid::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkStructuredGrid::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1);
    }
    else
    {
      op->vtkStructuredGrid::GetPoint(temp0, temp1);
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
PyvtkStructuredGrid_GetPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  bool temp4 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkStructuredGrid::GetPoint(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkStructuredGrid_GetPoint_s1(self, args);
    case 2:
      return PyvtkStructuredGrid_GetPoint_s2(self, args);
    case 4:
    case 5:
      return PyvtkStructuredGrid_GetPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}


static PyObject *
PyvtkStructuredGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkStructuredGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkStructuredGrid_GetCell_s1(self, args);
    case 3:
      return PyvtkStructuredGrid_GetCell_s2(self, args);
    case 2:
      return PyvtkStructuredGrid_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkStructuredGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCellBounds(temp0, temp1);
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
PyvtkStructuredGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkStructuredGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkStructuredGrid::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkStructuredGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCellPoints(temp0, temp1, temp2c, temp3);
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
PyvtkStructuredGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkStructuredGrid_GetCellPoints_s1(self, args);
    case 4:
      return PyvtkStructuredGrid_GetCellPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}


static PyObject *
PyvtkStructuredGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkStructuredGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkStructuredGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetCellNeighbors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetCellNeighbors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetCellNeighbors(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkStructuredGrid::GetCellNeighbors(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStructuredGrid_GetCellNeighbors_s1(self, args);
    case 4:
      return PyvtkStructuredGrid_GetCellNeighbors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellNeighbors");
  return nullptr;
}


static PyObject *
PyvtkStructuredGrid_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStructuredGrid::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkStructuredGrid::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStructuredGrid_SetDimensions_s1(self, args);
    case 1:
      return PyvtkStructuredGrid_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkStructuredGrid_GetDimensions_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetDimensions."
    " (" "Please use GetDimensions(int dims[3]) instead." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkStructuredGrid::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDimensions(temp0);
    }
    else
    {
      op->vtkStructuredGrid::GetDimensions(temp0);
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
PyvtkStructuredGrid_GetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkStructuredGrid_GetDimensions_s1(self, args);
    case 1:
      return PyvtkStructuredGrid_GetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDimensions");
  return nullptr;
}


static PyObject *
PyvtkStructuredGrid_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataDimension() :
      op->vtkStructuredGrid::GetDataDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkStructuredGrid::SetExtent(temp0);
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
PyvtkStructuredGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkStructuredGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkStructuredGrid_SetExtent_s1(self, args);
    case 6:
      return PyvtkStructuredGrid_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkStructuredGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkStructuredGrid::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkStructuredGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

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
      op->vtkStructuredGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkStructuredGrid::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_BlankPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->BlankPoint(temp0);
    }
    else
    {
      op->vtkStructuredGrid::BlankPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_UnBlankPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnBlankPoint(temp0);
    }
    else
    {
      op->vtkStructuredGrid::UnBlankPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_BlankCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->BlankCell(temp0);
    }
    else
    {
      op->vtkStructuredGrid::BlankCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_UnBlankCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UnBlankCell(temp0);
    }
    else
    {
      op->vtkStructuredGrid::UnBlankCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsPointVisible(temp0) :
      op->vtkStructuredGrid::IsPointVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_IsCellVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsCellVisible(temp0) :
      op->vtkStructuredGrid::IsCellVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_HasAnyBlankPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankPoints() :
      op->vtkStructuredGrid::HasAnyBlankPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_HasAnyBlankCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankCells() :
      op->vtkStructuredGrid::HasAnyBlankCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetCellDims(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCellDims(temp0);
    }
    else
    {
      op->vtkStructuredGrid::GetCellDims(temp0);
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
PyvtkStructuredGrid_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredGrid *op = static_cast<vtkStructuredGrid *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Crop(temp0);
    }
    else
    {
      op->vtkStructuredGrid::Crop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredGrid_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkStructuredGrid *tempr = vtkStructuredGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredGrid_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkStructuredGrid *tempr = vtkStructuredGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredGrid_GetData_Methods[] = {
  {"GetData", PyvtkStructuredGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkStructuredGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStructuredGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStructuredGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkStructuredGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkStructuredGrid_Methods[] = {
  {"ExtendedNew", PyvtkStructuredGrid_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkStructuredGrid\nC++: static vtkStructuredGrid *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkStructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStructuredGrid\nC++: static vtkStructuredGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStructuredGrid\nC++: vtkStructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkStructuredGrid_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"CopyStructure", PyvtkStructuredGrid_CopyStructure, METH_VARARGS,
   "CopyStructure(self, ds:vtkDataSet) -> None\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric and topological structure of an input poly\ndata object.\n"},
  {"GetNumberOfPoints", PyvtkStructuredGrid_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetPoint", PyvtkStructuredGrid_GetPoint, METH_VARARGS,
   "GetPoint(self, ptId:int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType ptId) override;\nGetPoint(self, ptId:int, p:[float, float, float]) -> None\nC++: void GetPoint(vtkIdType ptId, double p[3]) override;\nGetPoint(self, i:int, j:int, k:int, p:[float, float, float],\n    adjustForExtent:bool=True) -> None\nC++: void GetPoint(int i, int j, int k, double p[3],\n    bool adjustForExtent=true)\n\nSee vtkDataSet for additional information. WARNING: Just don't\nuse this error-prone method, the returned pointer and its values\nare only valid as long as another method invocation is not\nperformed. Prefer GetPoint() with the return value in argument.\n"},
  {"GetCell", PyvtkStructuredGrid_GetCell, METH_VARARGS,
   "GetCell(self, cellId:int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: vtkCell *GetCell(int i, int j, int k) override;\nGetCell(self, cellId:int, cell:vtkGenericCell) -> None\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\n\nThis method always return a `vtkEmptyCell`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellBounds", PyvtkStructuredGrid_GetCellBounds, METH_VARARGS,
   "GetCellBounds(self, cellId:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nGet the bounds of the cell with cellId such that: 0 <= cellId <\nNumberOfCells. A subclass may be able to determine the bounds of\ncell without using an expensive GetCell() method. A default\nimplementation is provided that actually uses a GetCell() call. \nThis is to ensure the method is available to all datasets. \nSubclasses should override this method to provide an efficient\nimplementation. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellType", PyvtkStructuredGrid_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nThis method always returns `VTK_EMPTY_CELL`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellSize", PyvtkStructuredGrid_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: vtkIdType GetCellSize(vtkIdType cellId) override;\n\nThis method always returns 1, as all cells are point in a pure\n`vtkPointSet`.\n"},
  {"GetNumberOfCells", PyvtkStructuredGrid_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nThis method always returns 0, as there are no cells in a\n`vtkPointSet`.\n"},
  {"GetCellPoints", PyvtkStructuredGrid_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...),\n    ptIds:vtkIdList) -> None\nC++: virtual void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n     vtkIdType const *&pts, vtkIdList *ptIds)\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetPointCells", PyvtkStructuredGrid_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"Initialize", PyvtkStructuredGrid_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nReset to an empty state and free any memory.\n"},
  {"GetMaxCellSize", PyvtkStructuredGrid_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nTHIS METHOD IS THREAD SAFE\n"},
  {"GetCellNeighbors", PyvtkStructuredGrid_GetCellNeighbors, METH_VARARGS,
   "GetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds) override;\nGetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList, seedLoc:[int, ...]) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds, int *seedLoc)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). Note that the list\nconsists of only cells that use ALL the points provided. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {"SetDimensions", PyvtkStructuredGrid_SetDimensions, METH_VARARGS,
   "SetDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetDimensions(int i, int j, int k)\nSetDimensions(self, dims:(int, int, int)) -> None\nC++: void SetDimensions(const int dims[3])\n\nSets the extent to be 0 to i-1, 0 to j-1, and 0 to k-1.\n"},
  {"GetDimensions", PyvtkStructuredGrid_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: virtual int *GetDimensions()\nGetDimensions(self, dims:[int, int, int]) -> None\nC++: virtual void GetDimensions(int dims[3])\n\nGet dimensions of this structured grid.\n"},
  {"GetDataDimension", PyvtkStructuredGrid_GetDataDimension, METH_VARARGS,
   "GetDataDimension(self) -> int\nC++: int GetDataDimension()\n\nReturn the dimensionality of the data.\n"},
  {"SetExtent", PyvtkStructuredGrid_SetExtent, METH_VARARGS,
   "SetExtent(self, extent:[int, int, int, int, int, int]) -> None\nC++: void SetExtent(int extent[6])\nSetExtent(self, xMin:int, xMax:int, yMin:int, yMax:int, zMin:int,\n    zMax:int) -> None\nC++: void SetExtent(int xMin, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\n\nDifferent ways to set the extent of the data array.  The extent\nshould be set before the \"Scalars\" are set or allocated. The\nExtent is stored in the order (X, Y, Z).\n"},
  {"GetExtent", PyvtkStructuredGrid_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\n"},
  {"GetActualMemorySize", PyvtkStructuredGrid_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"ShallowCopy", PyvtkStructuredGrid_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkStructuredGrid_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"GetExtentType", PyvtkStructuredGrid_GetExtentType, METH_VARARGS,
   "GetExtentType(self) -> int\nC++: int GetExtentType() override;\n\nThe extent type is a 3D extent\n"},
  {"BlankPoint", PyvtkStructuredGrid_BlankPoint, METH_VARARGS,
   "BlankPoint(self, ptId:int) -> None\nC++: void BlankPoint(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff points in the structured grid, and hence the cells connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {"UnBlankPoint", PyvtkStructuredGrid_UnBlankPoint, METH_VARARGS,
   "UnBlankPoint(self, ptId:int) -> None\nC++: void UnBlankPoint(vtkIdType ptId)\n\n"},
  {"BlankCell", PyvtkStructuredGrid_BlankCell, METH_VARARGS,
   "BlankCell(self, ptId:int) -> None\nC++: void BlankCell(vtkIdType ptId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid, and hence the points connected\nto them. These methods should be called only after the dimensions\nof the grid are set.\n"},
  {"UnBlankCell", PyvtkStructuredGrid_UnBlankCell, METH_VARARGS,
   "UnBlankCell(self, ptId:int) -> None\nC++: void UnBlankCell(vtkIdType ptId)\n\n"},
  {"IsPointVisible", PyvtkStructuredGrid_IsPointVisible, METH_VARARGS,
   "IsPointVisible(self, ptId:int) -> int\nC++: unsigned char IsPointVisible(vtkIdType ptId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {"IsCellVisible", PyvtkStructuredGrid_IsCellVisible, METH_VARARGS,
   "IsCellVisible(self, cellId:int) -> int\nC++: unsigned char IsCellVisible(vtkIdType cellId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {"HasAnyBlankPoints", PyvtkStructuredGrid_HasAnyBlankPoints, METH_VARARGS,
   "HasAnyBlankPoints(self) -> bool\nC++: bool HasAnyBlankPoints() override;\n\nReturns 1 if there is any visibility constraint on the points, 0\notherwise.\n"},
  {"HasAnyBlankCells", PyvtkStructuredGrid_HasAnyBlankCells, METH_VARARGS,
   "HasAnyBlankCells(self) -> bool\nC++: bool HasAnyBlankCells() override;\n\nReturns 1 if there is any visibility constraint on the cells, 0\notherwise.\n"},
  {"GetCellDims", PyvtkStructuredGrid_GetCellDims, METH_VARARGS,
   "GetCellDims(self, cellDims:[int, int, int]) -> None\nC++: void GetCellDims(int cellDims[3])\n\nGiven the node dimensions of this grid instance, this method\ncomputes the node dimensions. The value in each dimension can\nwill have a lowest value of \"1\" such that computing the total\nnumber of cells can be achieved by simply by\ncellDims[0]*cellDims[1]*cellDims[2].\n"},
  {"Crop", PyvtkStructuredGrid_Crop, METH_VARARGS,
   "Crop(self, updateExtent:(int, ...)) -> None\nC++: void Crop(const int *updateExtent) override;\n\nReallocates and copies to set the Extent to the UpdateExtent.\nThis is used internally when the exact extent is requested, and\nthe source generated more than the update extent.\n"},
  {"GetData", PyvtkStructuredGrid_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkStructuredGrid\nC++: static vtkStructuredGrid *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkStructuredGrid\nC++: static vtkStructuredGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStructuredGrid_Doc =
  "vtkStructuredGrid - topologically regular array of data\n\n"
  "Superclass: vtkPointSet\n\n"
  "vtkStructuredGrid is a data object that is a concrete implementation\n"
  "of vtkDataSet. vtkStructuredGrid represents a geometric structure\n"
  "that is a topologically regular array of points. The topology is that\n"
  "of a cube that has been subdivided into a regular array of smaller\n"
  "cubes. Each point/cell can be addressed with i-j-k indices. Examples\n"
  "include finite difference grids.\n\n"
  "The order and number of points must match that specified by the\n"
  "dimensions of the grid. The point order increases in i fastest (from\n"
  "0<=i<dims[0]), then j (0<=j<dims[1]), then k (0<=k<dims[2]) where\n"
  "dims[] are the dimensions of the grid in the i-j-k topological\n"
  "directions. The number of points is dims[0]*dims[1]*dims[2]. The same\n"
  "is true for the cells of the grid. The order and number of cells must\n"
  "match that specified by the dimensions of the grid. The cell order\n"
  "increases in i fastest (from 0<=i<(dims[0]-1)), then j\n"
  "(0<=j<(dims[1]-1)), then k (0<=k<(dims[2]-1)) The number of cells is\n"
  "(dims[0]-1)*(dims[1]-1)*(dims[2]-1).\n\n"
  "vtkStructuredGrid has the ability to blank, or \"turn-off\" points and\n"
  "cells in the dataset. This is done by setting\n"
  "vtkDataSetAttributes::HIDDENPOINT or vtkDataSetAttributes::HIDDENCELL\n"
  "in the ghost array for each point / cell that needs to be blanked.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkStructuredGrid", // tp_name
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
  PyvtkStructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredGrid_StaticNew()
{
  return vtkStructuredGrid::New();
}

PyObject *PyvtkStructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStructuredGrid_Type, PyvtkStructuredGrid_Methods,
    "vtkStructuredGrid",
 &PyvtkStructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

