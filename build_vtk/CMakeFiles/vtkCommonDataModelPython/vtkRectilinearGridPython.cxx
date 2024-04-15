// python wrapper for vtkRectilinearGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRectilinearGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRectilinearGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkRectilinearGrid_ClassNew(); }

#ifndef DECLARED_PyvtkDataSet_ClassNew
extern "C" { PyObject *PyvtkDataSet_ClassNew(); }
#define DECLARED_PyvtkDataSet_ClassNew
#endif

static PyObject *
PyvtkRectilinearGrid_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = vtkRectilinearGrid::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRectilinearGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRectilinearGrid *tempr = vtkRectilinearGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGrid::NewInstance());

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
PyvtkRectilinearGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRectilinearGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRectilinearGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkRectilinearGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkRectilinearGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkRectilinearGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkRectilinearGrid::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  long long temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkRectilinearGrid::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetPoint(temp0, temp1);
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
PyvtkRectilinearGrid_GetPoint_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRectilinearGrid::GetPoint(temp0, temp1, temp2, temp3);
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
PyvtkRectilinearGrid_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRectilinearGrid_GetPoint_s1(self, args);
    case 2:
      return PyvtkRectilinearGrid_GetPoint_s2(self, args);
    case 4:
      return PyvtkRectilinearGrid_GetPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkRectilinearGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRectilinearGrid_GetCell_s1(self, args);
    case 3:
      return PyvtkRectilinearGrid_GetCell_s2(self, args);
    case 2:
      return PyvtkRectilinearGrid_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetCellBounds(temp0, temp1);
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
PyvtkRectilinearGrid_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->FindPoint(temp0, temp1, temp2) :
      op->vtkRectilinearGrid::FindPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->FindPoint(temp0) :
      op->vtkRectilinearGrid::FindPoint(temp0));

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
PyvtkRectilinearGrid_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRectilinearGrid_FindPoint_s1(self, args);
    case 1:
      return PyvtkRectilinearGrid_FindPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  long long temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkRectilinearGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkGenericCell *temp2 = nullptr;
  long long temp3;
  double temp4;
  int temp5;
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(2*size7);
  double *temp7 = store7.Data();
  double *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp6, save6, size6);
    vtkPythonArgs::Save(temp7, save7, size7);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkRectilinearGrid::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (vtkPythonArgs::HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkRectilinearGrid_FindCell_s1(self, args);
    case 8:
      return PyvtkRectilinearGrid_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_FindAndGetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAndGetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  long long temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    vtkCell *tempr = (ap.IsBound() ?
      op->FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkRectilinearGrid::FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkRectilinearGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkRectilinearGrid::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetCellPoints(temp0, temp1, temp2c, temp3);
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
PyvtkRectilinearGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRectilinearGrid_GetCellPoints_s1(self, args);
    case 4:
      return PyvtkRectilinearGrid_GetCellPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkRectilinearGrid::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkRectilinearGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetCellNeighbors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetCellNeighbors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetCellNeighbors(temp0, temp1, temp2, temp3);
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
PyvtkRectilinearGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRectilinearGrid_GetCellNeighbors_s1(self, args);
    case 4:
      return PyvtkRectilinearGrid_GetCellNeighbors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellNeighbors");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsPointVisible(temp0) :
      op->vtkRectilinearGrid::IsPointVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_IsCellVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsCellVisible(temp0) :
      op->vtkRectilinearGrid::IsCellVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_HasAnyBlankPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankPoints() :
      op->vtkRectilinearGrid::HasAnyBlankPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_HasAnyBlankCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankCells() :
      op->vtkRectilinearGrid::HasAnyBlankCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetCellDims(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::GetCellDims(temp0);
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
PyvtkRectilinearGrid_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->GetPoints(temp0);
    }
    else
    {
      op->vtkRectilinearGrid::GetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRectilinearGrid_SetDimensions_s1(self, args);
    case 1:
      return PyvtkRectilinearGrid_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkRectilinearGrid::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataDimension() :
      op->vtkRectilinearGrid::GetDataDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ComputeStructuredCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStructuredCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeStructuredCoordinates(temp0, temp1, temp2) :
      op->vtkRectilinearGrid::ComputeStructuredCoordinates(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ComputePointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->ComputePointId(temp0) :
      op->vtkRectilinearGrid::ComputePointId(temp0));

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
PyvtkRectilinearGrid_ComputeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->ComputeCellId(temp0) :
      op->vtkRectilinearGrid::ComputeCellId(temp0));

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
PyvtkRectilinearGrid_SetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetXCoordinates(temp0);
    }
    else
    {
      op->vtkRectilinearGrid::SetXCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetXCoordinates() :
      op->vtkRectilinearGrid::GetXCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetYCoordinates(temp0);
    }
    else
    {
      op->vtkRectilinearGrid::SetYCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetYCoordinates() :
      op->vtkRectilinearGrid::GetYCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetZCoordinates(temp0);
    }
    else
    {
      op->vtkRectilinearGrid::SetZCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetZCoordinates() :
      op->vtkRectilinearGrid::GetZCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::SetExtent(temp0);
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
PyvtkRectilinearGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRectilinearGrid_SetExtent_s1(self, args);
    case 6:
      return PyvtkRectilinearGrid_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkRectilinearGrid::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkRectilinearGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkRectilinearGrid::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

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
      op->vtkRectilinearGrid::Crop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkRectilinearGrid *tempr = vtkRectilinearGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkRectilinearGrid *tempr = vtkRectilinearGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRectilinearGrid_GetData_Methods[] = {
  {"GetData", PyvtkRectilinearGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkRectilinearGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRectilinearGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRectilinearGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkRectilinearGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_SetScalarType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarType");

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    vtkRectilinearGrid::SetScalarType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetScalarType_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarType");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkRectilinearGrid::GetScalarType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetScalarType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkRectilinearGrid::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRectilinearGrid_GetScalarType_Methods[] = {
  {"GetScalarType", PyvtkRectilinearGrid_GetScalarType_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRectilinearGrid_GetScalarType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRectilinearGrid_GetScalarType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRectilinearGrid_GetScalarType_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarType");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_HasScalarType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HasScalarType");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = vtkRectilinearGrid::HasScalarType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarTypeAsString() :
      op->vtkRectilinearGrid::GetScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_SetNumberOfScalarComponents(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetNumberOfScalarComponents");

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    vtkRectilinearGrid::SetNumberOfScalarComponents(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGrid_GetNumberOfScalarComponents_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfScalarComponents");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkRectilinearGrid::GetNumberOfScalarComponents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGrid_GetNumberOfScalarComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGrid *op = static_cast<vtkRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkRectilinearGrid::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRectilinearGrid_GetNumberOfScalarComponents_Methods[] = {
  {"GetNumberOfScalarComponents", PyvtkRectilinearGrid_GetNumberOfScalarComponents_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRectilinearGrid_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRectilinearGrid_GetNumberOfScalarComponents_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkRectilinearGrid_GetNumberOfScalarComponents_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfScalarComponents");
  return nullptr;
}


static PyObject *
PyvtkRectilinearGrid_HasNumberOfScalarComponents(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HasNumberOfScalarComponents");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = vtkRectilinearGrid::HasNumberOfScalarComponents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRectilinearGrid_Methods[] = {
  {"ExtendedNew", PyvtkRectilinearGrid_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkRectilinearGrid\nC++: static vtkRectilinearGrid *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkRectilinearGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRectilinearGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRectilinearGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRectilinearGrid\nC++: static vtkRectilinearGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRectilinearGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRectilinearGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRectilinearGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkRectilinearGrid_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"CopyStructure", PyvtkRectilinearGrid_CopyStructure, METH_VARARGS,
   "CopyStructure(self, ds:vtkDataSet) -> None\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric and topological structure of an input\nrectilinear grid object.\n"},
  {"Initialize", PyvtkRectilinearGrid_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore object to initial state. Release memory back to system.\n"},
  {"GetNumberOfCells", PyvtkRectilinearGrid_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetNumberOfPoints", PyvtkRectilinearGrid_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nDetermine the number of points composing the dataset. THIS METHOD\nIS THREAD SAFE\n"},
  {"GetPoint", PyvtkRectilinearGrid_GetPoint, METH_VARARGS,
   "GetPoint(self, ptId:int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType ptId) override;\nGetPoint(self, id:int, x:[float, float, float]) -> None\nC++: void GetPoint(vtkIdType id, double x[3]) override;\nGetPoint(self, i:int, j:int, k:int, p:[float, float, float])\n    -> None\nC++: void GetPoint(int i, int j, int k, double p[3])\n\nGet point coordinates with ptId such that: 0 <= ptId <\nNumberOfPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"GetCell", PyvtkRectilinearGrid_GetCell, METH_VARARGS,
   "GetCell(self, cellId:int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: vtkCell *GetCell(int i, int j, int k) override;\nGetCell(self, cellId:int, cell:vtkGenericCell) -> None\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\n\nGet cell with cellId such that: 0 <= cellId < NumberOfCells. The\nreturned vtkCell is an object owned by this instance, hence the\nreturn value must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE. For a thread-safe\n    version, please use\nvoid GetCell(vtkIdType cellId, vtkGenericCell* cell).\n"},
  {"GetCellBounds", PyvtkRectilinearGrid_GetCellBounds, METH_VARARGS,
   "GetCellBounds(self, cellId:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nGet the bounds of the cell with cellId such that: 0 <= cellId <\nNumberOfCells. A subclass may be able to determine the bounds of\ncell without using an expensive GetCell() method. A default\nimplementation is provided that actually uses a GetCell() call. \nThis is to ensure the method is available to all datasets. \nSubclasses should override this method to provide an efficient\nimplementation. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"FindPoint", PyvtkRectilinearGrid_FindPoint, METH_VARARGS,
   "FindPoint(self, x:float, y:float, z:float) -> int\nC++: vtkIdType FindPoint(double x, double y, double z)\nFindPoint(self, x:[float, float, float]) -> int\nC++: vtkIdType FindPoint(double x[3]) override;\n\nLocate the closest point to the global coordinate x. Return the\npoint id. If point id < 0; then no point found. (This may arise\nwhen point is outside of dataset.) THIS METHOD IS THREAD SAFE IF\nFIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"FindCell", PyvtkRectilinearGrid_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float], cell:vtkCell, cellId:int,\n    tol2:float, subId:int, pcoords:[float, float, float],\n    weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\nFindCell(self, x:[float, float, float], cell:vtkCell,\n    gencell:vtkGenericCell, cellId:int, tol2:float, subId:int,\n    pcoords:[float, float, float], weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights) override;\n\nLocate cell based on global coordinate x and tolerance squared.\nIf cell and cellId is non-nullptr, then search starts from this\ncell and looks at immediate neighbors.  Returns cellId >= 0 if\ninside, < 0 otherwise.  The parametric coordinates are provided\nin pcoords[3]. The interpolation weights are returned in\nweights[]. (The number of weights is equal to the number of\npoints in the found cell). Tolerance is used to control how close\nthe point is to be considered \"in\" the cell. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {"FindAndGetCell", PyvtkRectilinearGrid_FindAndGetCell, METH_VARARGS,
   "FindAndGetCell(self, x:[float, float, float], cell:vtkCell,\n    cellId:int, tol2:float, subId:int, pcoords:[float, float,\n    float], weights:[float, ...]) -> vtkCell\nC++: vtkCell *FindAndGetCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\n\nLocate the cell that contains a point and return the cell. Also\nreturns the subcell id, parametric coordinates and weights for\nsubsequent interpolation. This method combines the derived class\nmethods int FindCell and vtkCell *GetCell. Derived classes may\nprovide a more efficient implementation. See for example\nvtkStructuredPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"GetCellType", PyvtkRectilinearGrid_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nGet type of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellSize", PyvtkRectilinearGrid_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: vtkIdType GetCellSize(vtkIdType cellId) override;\n\nGet the size of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n\n@warning This method MUST be overridden for performance reasons.\nDefault implementation is very unefficient.\n"},
  {"GetCellPoints", PyvtkRectilinearGrid_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...),\n    ptIds:vtkIdList) -> None\nC++: virtual void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n     vtkIdType const *&pts, vtkIdList *ptIds)\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetPointCells", PyvtkRectilinearGrid_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"ComputeBounds", PyvtkRectilinearGrid_ComputeBounds, METH_VARARGS,
   "ComputeBounds(self) -> None\nC++: void ComputeBounds() override;\n\nCompute the data bounding box from data points. THIS METHOD IS\nNOT THREAD SAFE.\n"},
  {"GetMaxCellSize", PyvtkRectilinearGrid_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nTHIS METHOD IS THREAD SAFE\n"},
  {"GetCellNeighbors", PyvtkRectilinearGrid_GetCellNeighbors, METH_VARARGS,
   "GetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds) override;\nGetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList, seedLoc:[int, ...]) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds, int *seedLoc)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). Note that the list\nconsists of only cells that use ALL the points provided. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {"IsPointVisible", PyvtkRectilinearGrid_IsPointVisible, METH_VARARGS,
   "IsPointVisible(self, ptId:int) -> int\nC++: unsigned char IsPointVisible(vtkIdType ptId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {"IsCellVisible", PyvtkRectilinearGrid_IsCellVisible, METH_VARARGS,
   "IsCellVisible(self, cellId:int) -> int\nC++: unsigned char IsCellVisible(vtkIdType cellId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {"HasAnyBlankPoints", PyvtkRectilinearGrid_HasAnyBlankPoints, METH_VARARGS,
   "HasAnyBlankPoints(self) -> bool\nC++: bool HasAnyBlankPoints() override;\n\nReturns 1 if there is any visibility constraint on the points, 0\notherwise.\n"},
  {"HasAnyBlankCells", PyvtkRectilinearGrid_HasAnyBlankCells, METH_VARARGS,
   "HasAnyBlankCells(self) -> bool\nC++: bool HasAnyBlankCells() override;\n\nReturns 1 if there is any visibility constraint on the cells, 0\notherwise.\n"},
  {"GetCellDims", PyvtkRectilinearGrid_GetCellDims, METH_VARARGS,
   "GetCellDims(self, cellDims:[int, int, int]) -> None\nC++: void GetCellDims(int cellDims[3])\n\nGiven the node dimensions of this grid instance, this method\ncomputes the node dimensions. The value in each dimension can\nwill have a lowest value of \"1\" such that computing the total\nnumber of cells can be achieved by simply by\ncellDims[0]*cellDims[1]*cellDims[2].\n"},
  {"GetPoints", PyvtkRectilinearGrid_GetPoints, METH_VARARGS,
   "GetPoints(self, pnts:vtkPoints) -> None\nC++: void GetPoints(vtkPoints *pnts)\n\nGiven a user-supplied vtkPoints container object, this method\nfills in all the points of the RectilinearGrid.\n"},
  {"SetDimensions", PyvtkRectilinearGrid_SetDimensions, METH_VARARGS,
   "SetDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetDimensions(int i, int j, int k)\nSetDimensions(self, dim:(int, int, int)) -> None\nC++: void SetDimensions(const int dim[3])\n\nSet dimensions of rectilinear grid dataset. This also sets the\nextent.\n"},
  {"GetDimensions", PyvtkRectilinearGrid_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: virtual int *GetDimensions()\n\nGet dimensions of this rectilinear grid dataset.\n"},
  {"GetDataDimension", PyvtkRectilinearGrid_GetDataDimension, METH_VARARGS,
   "GetDataDimension(self) -> int\nC++: int GetDataDimension()\n\nReturn the dimensionality of the data.\n"},
  {"ComputeStructuredCoordinates", PyvtkRectilinearGrid_ComputeStructuredCoordinates, METH_VARARGS,
   "ComputeStructuredCoordinates(self, x:[float, float, float],\n    ijk:[int, int, int], pcoords:[float, float, float]) -> int\nC++: int ComputeStructuredCoordinates(double x[3], int ijk[3],\n    double pcoords[3])\n\nConvenience function computes the structured coordinates for a\npoint x[3]. The cell is specified by the array ijk[3], and the\nparametric coordinates in the cell are specified with pcoords[3].\nThe function returns a 0 if the point x is outside of the grid,\nand a 1 if inside the grid.\n"},
  {"ComputePointId", PyvtkRectilinearGrid_ComputePointId, METH_VARARGS,
   "ComputePointId(self, ijk:[int, int, int]) -> int\nC++: vtkIdType ComputePointId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\npoint id.\n"},
  {"ComputeCellId", PyvtkRectilinearGrid_ComputeCellId, METH_VARARGS,
   "ComputeCellId(self, ijk:[int, int, int]) -> int\nC++: vtkIdType ComputeCellId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\ncell id.\n"},
  {"SetXCoordinates", PyvtkRectilinearGrid_SetXCoordinates, METH_VARARGS,
   "SetXCoordinates(self, __a:vtkDataArray) -> None\nC++: virtual void SetXCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the x-direction.\n"},
  {"GetXCoordinates", PyvtkRectilinearGrid_GetXCoordinates, METH_VARARGS,
   "GetXCoordinates(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetXCoordinates()\n\n"},
  {"SetYCoordinates", PyvtkRectilinearGrid_SetYCoordinates, METH_VARARGS,
   "SetYCoordinates(self, __a:vtkDataArray) -> None\nC++: virtual void SetYCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the y-direction.\n"},
  {"GetYCoordinates", PyvtkRectilinearGrid_GetYCoordinates, METH_VARARGS,
   "GetYCoordinates(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetYCoordinates()\n\n"},
  {"SetZCoordinates", PyvtkRectilinearGrid_SetZCoordinates, METH_VARARGS,
   "SetZCoordinates(self, __a:vtkDataArray) -> None\nC++: virtual void SetZCoordinates(vtkDataArray *)\n\nSpecify the grid coordinates in the z-direction.\n"},
  {"GetZCoordinates", PyvtkRectilinearGrid_GetZCoordinates, METH_VARARGS,
   "GetZCoordinates(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetZCoordinates()\n\n"},
  {"SetExtent", PyvtkRectilinearGrid_SetExtent, METH_VARARGS,
   "SetExtent(self, extent:[int, int, int, int, int, int]) -> None\nC++: void SetExtent(int extent[6])\nSetExtent(self, xMin:int, xMax:int, yMin:int, yMax:int, zMin:int,\n    zMax:int) -> None\nC++: void SetExtent(int xMin, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\n\nDifferent ways to set the extent of the data array.  The extent\nshould be set before the \"Scalars\" are set or allocated. The\nExtent is stored in the order (X, Y, Z).\n"},
  {"GetExtent", PyvtkRectilinearGrid_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\n"},
  {"GetActualMemorySize", PyvtkRectilinearGrid_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"ShallowCopy", PyvtkRectilinearGrid_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkRectilinearGrid_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"GetExtentType", PyvtkRectilinearGrid_GetExtentType, METH_VARARGS,
   "GetExtentType(self) -> int\nC++: int GetExtentType() override;\n\nStructured extent. The extent type is a 3D extent\n"},
  {"Crop", PyvtkRectilinearGrid_Crop, METH_VARARGS,
   "Crop(self, updateExtent:(int, ...)) -> None\nC++: void Crop(const int *updateExtent) override;\n\nReallocates and copies to set the Extent to the UpdateExtent.\nThis is used internally when the exact extent is requested, and\nthe source generated more than the update extent.\n"},
  {"GetData", PyvtkRectilinearGrid_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkRectilinearGrid\nC++: static vtkRectilinearGrid *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkRectilinearGrid\nC++: static vtkRectilinearGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"SetScalarType", PyvtkRectilinearGrid_SetScalarType, METH_VARARGS,
   "SetScalarType(__a:int, meta_data:vtkInformation) -> None\nC++: static void SetScalarType(int, vtkInformation *meta_data)\n\nSet/Get the scalar data type for the points. This is setting\npipeline info.\n"},
  {"GetScalarType", PyvtkRectilinearGrid_GetScalarType, METH_VARARGS,
   "GetScalarType(meta_data:vtkInformation) -> int\nC++: static int GetScalarType(vtkInformation *meta_data)\nGetScalarType(self) -> int\nC++: int GetScalarType()\n\n"},
  {"HasScalarType", PyvtkRectilinearGrid_HasScalarType, METH_VARARGS,
   "HasScalarType(meta_data:vtkInformation) -> bool\nC++: static bool HasScalarType(vtkInformation *meta_data)\n\n"},
  {"GetScalarTypeAsString", PyvtkRectilinearGrid_GetScalarTypeAsString, METH_VARARGS,
   "GetScalarTypeAsString(self) -> str\nC++: const char *GetScalarTypeAsString()\n\n"},
  {"SetNumberOfScalarComponents", PyvtkRectilinearGrid_SetNumberOfScalarComponents, METH_VARARGS,
   "SetNumberOfScalarComponents(n:int, meta_data:vtkInformation)\n    -> None\nC++: static void SetNumberOfScalarComponents(int n,\n    vtkInformation *meta_data)\n\nSet/Get the number of scalar components for points. As with the\nSetScalarType method this is setting pipeline info.\n"},
  {"GetNumberOfScalarComponents", PyvtkRectilinearGrid_GetNumberOfScalarComponents, METH_VARARGS,
   "GetNumberOfScalarComponents(meta_data:vtkInformation) -> int\nC++: static int GetNumberOfScalarComponents(\n    vtkInformation *meta_data)\nGetNumberOfScalarComponents(self) -> int\nC++: int GetNumberOfScalarComponents()\n\n"},
  {"HasNumberOfScalarComponents", PyvtkRectilinearGrid_HasNumberOfScalarComponents, METH_VARARGS,
   "HasNumberOfScalarComponents(meta_data:vtkInformation) -> bool\nC++: static bool HasNumberOfScalarComponents(\n    vtkInformation *meta_data)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRectilinearGrid_Doc =
  "vtkRectilinearGrid - a dataset that is topologically regular with\nvariable spacing in the three coordinate directions\n\n"
  "Superclass: vtkDataSet\n\n"
  "vtkRectilinearGrid is a data object that is a concrete implementation\n"
  "of vtkDataSet. vtkRectilinearGrid represents a geometric structure\n"
  "that is topologically regular with variable spacing in the three\n"
  "coordinate directions x-y-z.\n\n"
  "To define a vtkRectilinearGrid, you must specify the dimensions of\n"
  "the data and provide three arrays of values specifying the\n"
  "coordinates along the x-y-z axes. The coordinate arrays are specified\n"
  "using three vtkDataArray objects (one for x, one for y, one for z).\n\n"
  "@warning\n"
  "Make sure that the dimensions of the grid match the number of\n"
  "coordinates in the x-y-z directions. If not, unpredictable results\n"
  "(including program failure) may result. Also, you must supply\n"
  "coordinates in all three directions, even if the dataset topology is\n"
  "2D, 1D, or 0D.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRectilinearGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkRectilinearGrid", // tp_name
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
  PyvtkRectilinearGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRectilinearGrid_StaticNew()
{
  return vtkRectilinearGrid::New();
}

PyObject *PyvtkRectilinearGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRectilinearGrid_Type, PyvtkRectilinearGrid_Methods,
    "vtkRectilinearGrid",
 &PyvtkRectilinearGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRectilinearGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRectilinearGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRectilinearGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

