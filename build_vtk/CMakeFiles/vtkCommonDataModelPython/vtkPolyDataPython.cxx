// python wrapper for vtkPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkPointSet_ClassNew
extern "C" { PyObject *PyvtkPointSet_ClassNew(); }
#define DECLARED_PyvtkPointSet_ClassNew
#endif

static PyObject *
PyvtkPolyData_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = vtkPolyData::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyData *tempr = vtkPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyData::NewInstance());

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
PyvtkPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkPolyData::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkPolyData::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkPolyData::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
    unsigned char tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1c) :
      op->vtkPolyData::GetCell(temp0, temp1c));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, size1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCell_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_GetCell_Methods[] = {
  {"GetCell", PyvtkPolyData_GetCell_s2, METH_VARARGS,
   "@kV *vtkGenericCell"},
  {"GetCell", PyvtkPolyData_GetCell_s3, METH_VARARGS,
   "@kP *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyData_GetCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_GetCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolyData_GetCell_s1(self, args);
    case 3:
      return PyvtkPolyData_GetCell_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkPolyData_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkPolyData::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkPolyData::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCellBounds(temp0, temp1);
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
PyvtkPolyData_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_CopyCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp2, "vtkIncrementalPointLocator")))
  {
    if (ap.IsBound())
    {
      op->CopyCells(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::CopyCells(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
    unsigned char tempr = (ap.IsBound() ?
      op->GetCellPoints(temp0, temp1, temp2c) :
      op->vtkPolyData::GetCellPoints(temp0, temp1, temp2c));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetCellPoints_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetCellPoints(temp0, temp1, temp2c, temp3);
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
PyvtkPolyData_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_GetCellPoints_s1(self, args);
    case 3:
      return PyvtkPolyData_GetCellPoints_s2(self, args);
    case 4:
      return PyvtkPolyData_GetCellPoints_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}


static PyObject *
PyvtkPolyData_GetPointCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetPointCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::GetPointCells(temp0, temp1, temp2);
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
PyvtkPolyData_GetPointCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_GetPointCells_s1(self, args);
    case 3:
      return PyvtkPolyData_GetPointCells_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPointCells");
  return nullptr;
}


static PyObject *
PyvtkPolyData_ComputeCellsBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellsBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellsBounds();
    }
    else
    {
      op->vtkPolyData::ComputeCellsBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellsBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellsBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCellsBounds(temp0);
    }
    else
    {
      op->vtkPolyData::GetCellsBounds(temp0);
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
PyvtkPolyData_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkPolyData::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkPolyData::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellIdRelativeToCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdRelativeToCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellIdRelativeToCellArray(temp0) :
      op->vtkPolyData::GetCellIdRelativeToCellArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetVerts(temp0);
    }
    else
    {
      op->vtkPolyData::SetVerts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetVerts() :
      op->vtkPolyData::GetVerts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetLines(temp0);
    }
    else
    {
      op->vtkPolyData::SetLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetLines() :
      op->vtkPolyData::GetLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetPolys(temp0);
    }
    else
    {
      op->vtkPolyData::SetPolys(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetPolys() :
      op->vtkPolyData::GetPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetStrips(temp0);
    }
    else
    {
      op->vtkPolyData::SetStrips(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetStrips() :
      op->vtkPolyData::GetStrips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfVerts() :
      op->vtkPolyData::GetNumberOfVerts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfLines() :
      op->vtkPolyData::GetNumberOfLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPolys() :
      op->vtkPolyData::GetNumberOfPolys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfStrips() :
      op->vtkPolyData::GetNumberOfStrips());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_AllocateEstimate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateEstimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateEstimate(temp0, temp1) :
      op->vtkPolyData::AllocateEstimate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_AllocateEstimate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateEstimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  long long temp3;
  long long temp4;
  long long temp5;
  long long temp6;
  long long temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateEstimate(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkPolyData::AllocateEstimate(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_AllocateEstimate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_AllocateEstimate_s1(self, args);
    case 8:
      return PyvtkPolyData_AllocateEstimate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllocateEstimate");
  return nullptr;
}


static PyObject *
PyvtkPolyData_AllocateExact_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateExact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateExact(temp0, temp1) :
      op->vtkPolyData::AllocateExact(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_AllocateExact_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateExact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  long long temp3;
  long long temp4;
  long long temp5;
  long long temp6;
  long long temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateExact(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkPolyData::AllocateExact(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_AllocateExact(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_AllocateExact_s1(self, args);
    case 8:
      return PyvtkPolyData_AllocateExact_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllocateExact");
  return nullptr;
}


static PyObject *
PyvtkPolyData_AllocateCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateCopy(temp0) :
      op->vtkPolyData::AllocateCopy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_AllocateProportional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateProportional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateProportional(temp0, temp1) :
      op->vtkPolyData::AllocateProportional(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_Allocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::Allocate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_Allocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  vtkPolyData *temp0 = nullptr;
  long long temp1 = 1000;
  int temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::Allocate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_Allocate_Methods[] = {
  {"Allocate", PyvtkPolyData_Allocate_s1, METH_VARARGS,
   "@|ki"},
  {"Allocate", PyvtkPolyData_Allocate_s2, METH_VARARGS,
   "@V|ki *vtkPolyData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyData_Allocate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_Allocate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolyData_Allocate_s1(self, args);
    case 3:
      return PyvtkPolyData_Allocate_s2(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Allocate");
  return nullptr;
}


static PyObject *
PyvtkPolyData_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->InsertNextCell(temp0, temp1, temp2) :
      op->vtkPolyData::InsertNextCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkPolyData::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyData_InsertNextCell_s1(self, args);
    case 2:
      return PyvtkPolyData_InsertNextCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return nullptr;
}


static PyObject *
PyvtkPolyData_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPolyData::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_BuildCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildCells();
    }
    else
    {
      op->vtkPolyData::BuildCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_NeedToBuildCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NeedToBuildCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->NeedToBuildCells() :
      op->vtkPolyData::NeedToBuildCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->BuildLinks(temp0);
    }
    else
    {
      op->vtkPolyData::BuildLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_SetLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::SetLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLinks *tempr = (ap.IsBound() ?
      op->GetLinks() :
      op->vtkPolyData::GetLinks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteCells();
    }
    else
    {
      op->vtkPolyData::DeleteCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteLinks();
    }
    else
    {
      op->vtkPolyData::DeleteLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetCellEdgeNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellEdgeNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellEdgeNeighbors(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolyData::GetCellEdgeNeighbors(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->IsTriangle(temp0, temp1, temp2) :
      op->vtkPolyData::IsTriangle(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsEdge(temp0, temp1) :
      op->vtkPolyData::IsEdge(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_IsPointUsedByCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointUsedByCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->IsPointUsedByCell(temp0, temp1) :
      op->vtkPolyData::IsPointUsedByCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ReplaceCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->ReplaceCell(temp0, temp1);
    }
    else
    {
      op->vtkPolyData::ReplaceCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_ReplaceCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::ReplaceCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_ReplaceCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_ReplaceCell_s1(self, args);
    case 3:
      return PyvtkPolyData_ReplaceCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReplaceCell");
  return nullptr;
}


static PyObject *
PyvtkPolyData_ReplaceCellPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCellPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ReplaceCellPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::ReplaceCellPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_ReplaceCellPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCellPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->ReplaceCellPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolyData::ReplaceCellPoint(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_ReplaceCellPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolyData_ReplaceCellPoint_s1(self, args);
    case 4:
      return PyvtkPolyData_ReplaceCellPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReplaceCellPoint");
  return nullptr;
}


static PyObject *
PyvtkPolyData_ReverseCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ReverseCell(temp0);
    }
    else
    {
      op->vtkPolyData::ReverseCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeletePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeletePoint(temp0);
    }
    else
    {
      op->vtkPolyData::DeletePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeleteCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteCell(temp0);
    }
    else
    {
      op->vtkPolyData::DeleteCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveDeletedCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDeletedCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveDeletedCells();
    }
    else
    {
      op->vtkPolyData::RemoveDeletedCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_InsertNextLinkedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextLinkedPoint(temp0) :
      op->vtkPolyData::InsertNextLinkedPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_InsertNextLinkedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->InsertNextLinkedPoint(temp0, temp1) :
      op->vtkPolyData::InsertNextLinkedPoint(temp0, temp1));

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
PyvtkPolyData_InsertNextLinkedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolyData_InsertNextLinkedPoint_s1(self, args);
    case 2:
      return PyvtkPolyData_InsertNextLinkedPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextLinkedPoint");
  return nullptr;
}


static PyObject *
PyvtkPolyData_InsertNextLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::InsertNextLinkedCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ReplaceLinkedCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceLinkedCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->ReplaceLinkedCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPolyData::ReplaceLinkedCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveCellReference(temp0);
    }
    else
    {
      op->vtkPolyData::RemoveCellReference(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_AddCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCellReference(temp0);
    }
    else
    {
      op->vtkPolyData::AddCellReference(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::RemoveReferenceToCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_AddReferenceToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddReferenceToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::AddReferenceToCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::ResizeCellList(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPolyData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPiece() :
      op->vtkPolyData::GetPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPieces() :
      op->vtkPolyData::GetNumberOfPieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevel() :
      op->vtkPolyData::GetGhostLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkPolyData::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

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
      op->vtkPolyData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_RemoveGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostCells();
    }
    else
    {
      op->vtkPolyData::RemoveGhostCells();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkPolyData *tempr = vtkPolyData::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkPolyData *tempr = vtkPolyData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_GetData_Methods[] = {
  {"GetData", PyvtkPolyData_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkPolyData_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarFieldCriticalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  long long temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarFieldCriticalIndex(temp0, temp1) :
      op->vtkPolyData::GetScalarFieldCriticalIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_GetScalarFieldCriticalIndex_Methods[] = {
  {"GetScalarFieldCriticalIndex", PyvtkPolyData_GetScalarFieldCriticalIndex_s1, METH_VARARGS,
   "@kV *vtkDataArray"},
  {"GetScalarFieldCriticalIndex", PyvtkPolyData_GetScalarFieldCriticalIndex_s2, METH_VARARGS,
   "@ki"},
  {"GetScalarFieldCriticalIndex", PyvtkPolyData_GetScalarFieldCriticalIndex_s3, METH_VARARGS,
   "@kz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyData_GetScalarFieldCriticalIndex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyData_GetScalarFieldCriticalIndex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarFieldCriticalIndex");
  return nullptr;
}


static PyObject *
PyvtkPolyData_GetMeshMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeshMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMeshMTime() :
      op->vtkPolyData::GetMeshMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyData *op = static_cast<vtkPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPolyData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyData_Methods[] = {
  {"ExtendedNew", PyvtkPolyData_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkPolyData\nC++: static vtkPolyData *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyData\nC++: static vtkPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyData\nC++: vtkPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkPolyData_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"CopyStructure", PyvtkPolyData_CopyStructure, METH_VARARGS,
   "CopyStructure(self, ds:vtkDataSet) -> None\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric and topological structure of an input poly\ndata object.\n"},
  {"GetNumberOfCells", PyvtkPolyData_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nStandard vtkDataSet interface.\n"},
  {"GetCell", PyvtkPolyData_GetCell, METH_VARARGS,
   "GetCell(self, cellId:int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nGetCell(self, cellId:int, cell:vtkGenericCell) -> None\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\nGetCell(self, cellId:int, pts:(int, ...)) -> int\nC++: unsigned char GetCell(vtkIdType cellId,\n    const vtkIdType *&pts)\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\n\nThis method always return a `vtkEmptyCell`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellType", PyvtkPolyData_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nThis method always returns `VTK_EMPTY_CELL`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellSize", PyvtkPolyData_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: vtkIdType GetCellSize(vtkIdType cellId) override;\n\nThis method always returns 1, as all cells are point in a pure\n`vtkPointSet`.\n"},
  {"GetCellBounds", PyvtkPolyData_GetCellBounds, METH_VARARGS,
   "GetCellBounds(self, cellId:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nGet the bounds of the cell with cellId such that: 0 <= cellId <\nNumberOfCells. A subclass may be able to determine the bounds of\ncell without using an expensive GetCell() method. A default\nimplementation is provided that actually uses a GetCell() call. \nThis is to ensure the method is available to all datasets. \nSubclasses should override this method to provide an efficient\nimplementation. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellNeighbors", PyvtkPolyData_GetCellNeighbors, METH_VARARGS,
   "GetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds) override;\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). Note that the list\nconsists of only cells that use ALL the points provided. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {"CopyCells", PyvtkPolyData_CopyCells, METH_VARARGS,
   "CopyCells(self, pd:vtkPolyData, idList:vtkIdList,\n    locator:vtkIncrementalPointLocator=...) -> None\nC++: void CopyCells(vtkPolyData *pd, vtkIdList *idList,\n    vtkIncrementalPointLocator *locator=nullptr)\n\nCopy cells listed in idList from pd, including points, point\ndata, and cell data.  This method assumes that point and cell\ndata have been allocated.  If you pass in a point locator, then\nthe points won't be duplicated in the output. This requires the\nuse of an incremental point locator.\n"},
  {"GetCellPoints", PyvtkPolyData_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...)) -> int\nC++: unsigned char GetCellPoints(vtkIdType cellId,\n    vtkIdType &npts, vtkIdType const *&pts)\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...),\n    ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n    vtkIdType const *&pts, vtkIdList *ptIds) override;\n\nCopy a cells point ids into list provided. (Less efficient.)\n"},
  {"GetPointCells", PyvtkPolyData_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\nGetPointCells(self, ptId:int, ncells:int, cells:[int, ...])\n    -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdType &ncells,\n    vtkIdType *&cells)\n\nEfficient method to obtain cells using a particular point. Make\nsure that routine BuildLinks() has been called.\n"},
  {"ComputeCellsBounds", PyvtkPolyData_ComputeCellsBounds, METH_VARARGS,
   "ComputeCellsBounds(self) -> None\nC++: void ComputeCellsBounds()\n\nCompute the (X, Y, Z)  bounds of the data. Note that the method\nonly considers points that are used by cells. This is done for\nusability and historical reasons.\n\nIMPORTANT\n\nUntil vtk 9.0.1, vtkPolyData::ComputeBounds() used to ignore\npoints that do not belong to any cell. That was not consistent\nwith other vtkPointSet subclasses and thus was error prone. See\nthis ParaView issue\nhttps://gitlab.kitware.com/paraview/paraview/-/issues/20354 Now\nit defers to vtkPointSet::ComputeBounds() so\nvtkPolyData::GetBounds() may not return the same bounds as\nbefore. This behavior is probably the one you want when using\nbounds.\n\nThe previous behavior is still available through\nvtkPolyData::ComputeCellsBounds() and\nvtkPolyData::GetCellsBounds(). This is mainly used for rendering\npurpose.\n"},
  {"GetCellsBounds", PyvtkPolyData_GetCellsBounds, METH_VARARGS,
   "GetCellsBounds(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void GetCellsBounds(double bounds[6])\n\nGet the cells bounds. Internally calls ComputeCellsBounds().\n@sa ComputeCellsBounds()\n"},
  {"Squeeze", PyvtkPolyData_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze() override;\n\nRecover extra allocated memory when creating data whose initial\nsize is unknown. Examples include using the InsertNextCell()\nmethod, or when using the CellArray::EstimateSize() method to\ncreate vertices, lines, polygons, or triangle strips.\n"},
  {"GetMaxCellSize", PyvtkPolyData_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nReturn the maximum cell size in this poly data.\n"},
  {"GetCellIdRelativeToCellArray", PyvtkPolyData_GetCellIdRelativeToCellArray, METH_VARARGS,
   "GetCellIdRelativeToCellArray(self, cellId:int) -> int\nC++: vtkIdType GetCellIdRelativeToCellArray(vtkIdType cellId)\n\nMaps the cell at position `cellId` inside the `vtkPolyData` to\nits location in the corresponding cell array. For instance, if\ncell `cellId` is a line, then this method returns the position of\nthis cell in the `Lines` cell array.\n"},
  {"SetVerts", PyvtkPolyData_SetVerts, METH_VARARGS,
   "SetVerts(self, v:vtkCellArray) -> None\nC++: void SetVerts(vtkCellArray *v)\n\nSet the cell array defining vertices.\n"},
  {"GetVerts", PyvtkPolyData_GetVerts, METH_VARARGS,
   "GetVerts(self) -> vtkCellArray\nC++: vtkCellArray *GetVerts()\n\nGet the cell array defining vertices. If there are no vertices,\nan empty array will be returned (convenience to simplify\ntraversal).\n"},
  {"SetLines", PyvtkPolyData_SetLines, METH_VARARGS,
   "SetLines(self, l:vtkCellArray) -> None\nC++: void SetLines(vtkCellArray *l)\n\nSet the cell array defining lines.\n"},
  {"GetLines", PyvtkPolyData_GetLines, METH_VARARGS,
   "GetLines(self) -> vtkCellArray\nC++: vtkCellArray *GetLines()\n\nGet the cell array defining lines. If there are no lines, an\nempty array will be returned (convenience to simplify traversal).\n"},
  {"SetPolys", PyvtkPolyData_SetPolys, METH_VARARGS,
   "SetPolys(self, p:vtkCellArray) -> None\nC++: void SetPolys(vtkCellArray *p)\n\nSet the cell array defining polygons.\n"},
  {"GetPolys", PyvtkPolyData_GetPolys, METH_VARARGS,
   "GetPolys(self) -> vtkCellArray\nC++: vtkCellArray *GetPolys()\n\nGet the cell array defining polygons. If there are no polygons,\nan empty array will be returned (convenience to simplify\ntraversal).\n"},
  {"SetStrips", PyvtkPolyData_SetStrips, METH_VARARGS,
   "SetStrips(self, s:vtkCellArray) -> None\nC++: void SetStrips(vtkCellArray *s)\n\nSet the cell array defining triangle strips.\n"},
  {"GetStrips", PyvtkPolyData_GetStrips, METH_VARARGS,
   "GetStrips(self) -> vtkCellArray\nC++: vtkCellArray *GetStrips()\n\nGet the cell array defining triangle strips. If there are no\ntriangle strips, an empty array will be returned (convenience to\nsimplify traversal).\n"},
  {"GetNumberOfVerts", PyvtkPolyData_GetNumberOfVerts, METH_VARARGS,
   "GetNumberOfVerts(self) -> int\nC++: vtkIdType GetNumberOfVerts()\n\nReturn the number of primitives of a particular type held.\n"},
  {"GetNumberOfLines", PyvtkPolyData_GetNumberOfLines, METH_VARARGS,
   "GetNumberOfLines(self) -> int\nC++: vtkIdType GetNumberOfLines()\n\n"},
  {"GetNumberOfPolys", PyvtkPolyData_GetNumberOfPolys, METH_VARARGS,
   "GetNumberOfPolys(self) -> int\nC++: vtkIdType GetNumberOfPolys()\n\n"},
  {"GetNumberOfStrips", PyvtkPolyData_GetNumberOfStrips, METH_VARARGS,
   "GetNumberOfStrips(self) -> int\nC++: vtkIdType GetNumberOfStrips()\n\n"},
  {"AllocateEstimate", PyvtkPolyData_AllocateEstimate, METH_VARARGS,
   "AllocateEstimate(self, numCells:int, maxCellSize:int) -> bool\nC++: bool AllocateEstimate(vtkIdType numCells,\n    vtkIdType maxCellSize)\nAllocateEstimate(self, numVerts:int, maxVertSize:int,\n    numLines:int, maxLineSize:int, numPolys:int, maxPolySize:int,\n    numStrips:int, maxStripSize:int) -> bool\nC++: bool AllocateEstimate(vtkIdType numVerts,\n    vtkIdType maxVertSize, vtkIdType numLines,\n    vtkIdType maxLineSize, vtkIdType numPolys,\n    vtkIdType maxPolySize, vtkIdType numStrips,\n    vtkIdType maxStripSize)\n\nPreallocate memory for the internal cell arrays. Each of the\ninternal cell arrays (verts, lines, polys, and strips) will be\nresized to holdnumCells cells of size maxCellSize.\n\nExisting data is not preserved and the number of cells is set to\nzero.\n\n@return True if allocation succeeds.\n"},
  {"AllocateExact", PyvtkPolyData_AllocateExact, METH_VARARGS,
   "AllocateExact(self, numCells:int, connectivitySize:int) -> bool\nC++: bool AllocateExact(vtkIdType numCells,\n    vtkIdType connectivitySize)\nAllocateExact(self, numVerts:int, vertConnSize:int, numLines:int,\n    lineConnSize:int, numPolys:int, polyConnSize:int,\n    numStrips:int, stripConnSize:int) -> bool\nC++: bool AllocateExact(vtkIdType numVerts,\n    vtkIdType vertConnSize, vtkIdType numLines,\n    vtkIdType lineConnSize, vtkIdType numPolys,\n    vtkIdType polyConnSize, vtkIdType numStrips,\n    vtkIdType stripConnSize)\n\nPreallocate memory for the internal cell arrays. Each of the\ninternal cell arrays (verts, lines, polys, and strips) will be\nresized to holdnumCells cells and connectivitySize pointIds.\n\nExisting data is not preserved and the number of cells is set to\nzero.\n\n@return True if allocation succeeds.\n"},
  {"AllocateCopy", PyvtkPolyData_AllocateCopy, METH_VARARGS,
   "AllocateCopy(self, pd:vtkPolyData) -> bool\nC++: bool AllocateCopy(vtkPolyData *pd)\n\nPreallocate memory for the internal cell arrays such that they\nare the same size as those in pd.\n\nExisting data is not preserved and the number of cells is set to\nzero.\n\n@return True if allocation succeeds.\n"},
  {"AllocateProportional", PyvtkPolyData_AllocateProportional, METH_VARARGS,
   "AllocateProportional(self, pd:vtkPolyData, ratio:float) -> bool\nC++: bool AllocateProportional(vtkPolyData *pd, double ratio)\n\nPreallocate memory for the internal cell arrays such that they\nare proportional to those in pd by a factor of ratio (for\ninstance,ratio = 2 allocates twice as many cells).\n\nExisting data is not preserved and the number of cells is set to\nzero.\n\n@return True if allocation succeeds.\n"},
  {"Allocate", PyvtkPolyData_Allocate, METH_VARARGS,
   "Allocate(self, numCells:int=1000, extSize:int=1000) -> None\nC++: void Allocate(vtkIdType numCells=1000, int extSize=1000)\nAllocate(self, inPolyData:vtkPolyData, numCells:int=1000,\n    extSize:int=1000) -> None\nC++: void Allocate(vtkPolyData *inPolyData,\n    vtkIdType numCells=1000, int extSize=1000)\n\nMethod allocates initial storage for vertex, line, polygon, and\ntriangle strip arrays. Use this method before the method\nPolyData::InsertNextCell(). (Or, provide vertex, line, polygon,\nand triangle strip cell arrays). extSize is no longer used.\n"},
  {"InsertNextCell", PyvtkPolyData_InsertNextCell, METH_VARARGS,
   "InsertNextCell(self, type:int, npts:int, pts:(int, ...)) -> int\nC++: vtkIdType InsertNextCell(int type, int npts,\n    const vtkIdType pts[])\nInsertNextCell(self, type:int, pts:vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *pts)\n\nInsert a cell of type VTK_VERTEX, VTK_POLY_VERTEX, VTK_LINE,\nVTK_POLY_LINE, VTK_TRIANGLE, VTK_QUAD, VTK_POLYGON, or\nVTK_TRIANGLE_STRIP.  Make sure that the PolyData::Allocate()\nfunction has been called first or that vertex, line, polygon, and\ntriangle strip arrays have been supplied. Note: will also insert\nVTK_PIXEL, but converts it to VTK_QUAD.\n"},
  {"Reset", PyvtkPolyData_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nBegin inserting data all over again. Memory is not freed but\notherwise objects are returned to their initial state.\n"},
  {"BuildCells", PyvtkPolyData_BuildCells, METH_VARARGS,
   "BuildCells(self) -> None\nC++: void BuildCells()\n\nCreate data structure that allows random access of cells.\nBuildCells is expensive but necessary to make use of the faster\nnon-virtual implementations of GetCell/GetCellPoints. One may\ncheck if cells need to be built via NeedToBuilds before invoking.\nCells always need to be built/re-built after low level direct\nmodifications to verts, lines, polys or strips cell arrays.\n"},
  {"NeedToBuildCells", PyvtkPolyData_NeedToBuildCells, METH_VARARGS,
   "NeedToBuildCells(self) -> bool\nC++: bool NeedToBuildCells()\n\nCheck if BuildCells is needed.\n"},
  {"BuildLinks", PyvtkPolyData_BuildLinks, METH_VARARGS,
   "BuildLinks(self, initialSize:int=0) -> None\nC++: void BuildLinks(int initialSize=0)\n\nCreate upward links from points to cells that use each point.\nEnables topologically complex queries. Normally the links array\nis allocated based on the number of points in the vtkPolyData.\nThe optional initialSize parameter can be used to allocate a\nlarger size initially.\n"},
  {"SetLinks", PyvtkPolyData_SetLinks, METH_VARARGS,
   "SetLinks(self, links:vtkAbstractCellLinks) -> None\nC++: virtual void SetLinks(vtkAbstractCellLinks *links)\n\nSet/Get the links that you created possibly without using\nBuildLinks.\n\nNote: Only vtkCellLinks are currently supported.\n"},
  {"GetLinks", PyvtkPolyData_GetLinks, METH_VARARGS,
   "GetLinks(self) -> vtkAbstractCellLinks\nC++: virtual vtkAbstractCellLinks *GetLinks()\n\n"},
  {"DeleteCells", PyvtkPolyData_DeleteCells, METH_VARARGS,
   "DeleteCells(self) -> None\nC++: void DeleteCells()\n\nRelease data structure that allows random access of the cells.\nThis must be done before a 2nd call to BuildLinks(). DeleteCells\nimplicitly deletes the links as well since they are no longer\nvalid.\n"},
  {"DeleteLinks", PyvtkPolyData_DeleteLinks, METH_VARARGS,
   "DeleteLinks(self) -> None\nC++: void DeleteLinks()\n\nRelease the upward links from point to cells that use each point.\n"},
  {"GetCellEdgeNeighbors", PyvtkPolyData_GetCellEdgeNeighbors, METH_VARARGS,
   "GetCellEdgeNeighbors(self, cellId:int, p1:int, p2:int,\n    cellIds:vtkIdList) -> None\nC++: void GetCellEdgeNeighbors(vtkIdType cellId, vtkIdType p1,\n    vtkIdType p2, vtkIdList *cellIds)\n\nGet the neighbors at an edge. More efficient than the general\nGetCellNeighbors(). Assumes links have been built (with\nBuildLinks()), and looks specifically for edge neighbors.\n"},
  {"IsTriangle", PyvtkPolyData_IsTriangle, METH_VARARGS,
   "IsTriangle(self, v1:int, v2:int, v3:int) -> int\nC++: int IsTriangle(int v1, int v2, int v3)\n\nGiven three vertices, determine whether it's a triangle. Make\nsure BuildLinks() has been called first.\n"},
  {"IsEdge", PyvtkPolyData_IsEdge, METH_VARARGS,
   "IsEdge(self, p1:int, p2:int) -> int\nC++: int IsEdge(vtkIdType p1, vtkIdType p2)\n\nDetermine whether two points form an edge. If they do, return\nnon-zero. By definition PolyVertex and PolyLine have no edges\nsince 1-dimensional edges are only found on cells 2D and higher.\nEdges are defined as 1-D boundary entities to cells. Make sure\nBuildLinks() has been called first.\n"},
  {"IsPointUsedByCell", PyvtkPolyData_IsPointUsedByCell, METH_VARARGS,
   "IsPointUsedByCell(self, ptId:int, cellId:int) -> int\nC++: int IsPointUsedByCell(vtkIdType ptId, vtkIdType cellId)\n\nDetermine whether a point is used by a particular cell. If it is,\nreturn non-zero. Make sure BuildCells() has been called first.\n"},
  {"ReplaceCell", PyvtkPolyData_ReplaceCell, METH_VARARGS,
   "ReplaceCell(self, cellId:int, ids:vtkIdList) -> None\nC++: void ReplaceCell(vtkIdType cellId, vtkIdList *ids)\nReplaceCell(self, cellId:int, npts:int, pts:(int, ...)) -> None\nC++: void ReplaceCell(vtkIdType cellId, int npts,\n    const vtkIdType pts[])\n\n"},
  {"ReplaceCellPoint", PyvtkPolyData_ReplaceCellPoint, METH_VARARGS,
   "ReplaceCellPoint(self, cellId:int, oldPtId:int, newPtId:int)\n    -> None\nC++: void ReplaceCellPoint(vtkIdType cellId, vtkIdType oldPtId,\n    vtkIdType newPtId)\nReplaceCellPoint(self, cellId:int, oldPtId:int, newPtId:int,\n    cellPointIds:vtkIdList) -> None\nC++: void ReplaceCellPoint(vtkIdType cellId, vtkIdType oldPtId,\n    vtkIdType newPtId, vtkIdList *cellPointIds)\n\nReplace a point in the cell connectivity list with a different\npoint. Use this method only when the dataset is set as Editable.\n\nThe version with cellPointIds avoids allocating/deallocating a\nvtkIdList at each call internally.\n\nTHIS METHOD IS THREAD SAFE IF BuildCells() IS FIRST CALLED FROM A\nSINGLE THREAD.\n"},
  {"ReverseCell", PyvtkPolyData_ReverseCell, METH_VARARGS,
   "ReverseCell(self, cellId:int) -> None\nC++: void ReverseCell(vtkIdType cellId)\n\nReverse the order of point ids defining the cell. Use this method\nonly when the dataset is set as Editable.\n"},
  {"DeletePoint", PyvtkPolyData_DeletePoint, METH_VARARGS,
   "DeletePoint(self, ptId:int) -> None\nC++: void DeletePoint(vtkIdType ptId)\n\nMark a point/cell as deleted from this vtkPolyData. Use this\nmethod only when the dataset is set as Editable.\n"},
  {"DeleteCell", PyvtkPolyData_DeleteCell, METH_VARARGS,
   "DeleteCell(self, cellId:int) -> None\nC++: void DeleteCell(vtkIdType cellId)\n\n"},
  {"RemoveDeletedCells", PyvtkPolyData_RemoveDeletedCells, METH_VARARGS,
   "RemoveDeletedCells(self) -> None\nC++: void RemoveDeletedCells()\n\nThe cells marked by calls to DeleteCell are stored in the Cell\nArray VTK_EMPTY_CELL, but they still exist in the cell arrays. \nCalling RemoveDeletedCells will traverse the cell arrays and\nremove/compact the cell arrays as well as any cell data thus\ntruly removing the cells from the polydata object. Use this\nmethod only when the dataset is set as Editable.\n"},
  {"InsertNextLinkedPoint", PyvtkPolyData_InsertNextLinkedPoint, METH_VARARGS,
   "InsertNextLinkedPoint(self, numLinks:int) -> int\nC++: vtkIdType InsertNextLinkedPoint(int numLinks)\nInsertNextLinkedPoint(self, x:[float, float, float], numLinks:int)\n     -> int\nC++: vtkIdType InsertNextLinkedPoint(double x[3], int numLinks)\n\nAdd a point to the cell data structure (after cell pointers have\nbeen built). This method adds the point and then allocates memory\nfor the links to the cells.  (To use this method, make sure\npoints are available and BuildLinks() has been invoked.) Of the\ntwo methods below, one inserts a point coordinate and the other\njust makes room for cell links. Use this method only when the\ndataset is set as Editable.\n"},
  {"InsertNextLinkedCell", PyvtkPolyData_InsertNextLinkedCell, METH_VARARGS,
   "InsertNextLinkedCell(self, type:int, npts:int, pts:(int, ...))\n    -> int\nC++: vtkIdType InsertNextLinkedCell(int type, int npts,\n    const vtkIdType pts[])\n\nAdd a new cell to the cell data structure (after cell pointers\nhave been built). This method adds the cell and then updates the\nlinks from the points to the cells. (Memory is allocated as\nnecessary.) Use this method only when the dataset is set as\nEditable.\n"},
  {"ReplaceLinkedCell", PyvtkPolyData_ReplaceLinkedCell, METH_VARARGS,
   "ReplaceLinkedCell(self, cellId:int, npts:int, pts:(int, ...))\n    -> None\nC++: void ReplaceLinkedCell(vtkIdType cellId, int npts,\n    const vtkIdType pts[])\n\nReplace one cell with another in cell structure. This operator\nupdates the connectivity list and the point's link list. It does\nnot delete references to the old cell in the point's link list.\nUse the operator RemoveCellReference() to delete all references\nfrom points to (old) cell.  You may also want to consider using\nthe operator ResizeCellList() if the link list is changing size.\nUse this method only when the dataset is set as Editable.\n"},
  {"RemoveCellReference", PyvtkPolyData_RemoveCellReference, METH_VARARGS,
   "RemoveCellReference(self, cellId:int) -> None\nC++: void RemoveCellReference(vtkIdType cellId)\n\nRemove all references to cell in cell structure. This means the\nlinks from the cell's points to the cell are deleted. Memory is\nnot reclaimed. Use the method ResizeCellList() to resize the link\nlist from a point to its using cells. (This operator assumes\nBuildLinks() has been called.) Use this method only when the\ndataset is set as Editable.\n"},
  {"AddCellReference", PyvtkPolyData_AddCellReference, METH_VARARGS,
   "AddCellReference(self, cellId:int) -> None\nC++: void AddCellReference(vtkIdType cellId)\n\nAdd references to cell in cell structure. This means the links\nfrom the cell's points to the cell are modified. Memory is not\nextended. Use the method ResizeCellList() to resize the link list\nfrom a point to its using cells. (This operator assumes\nBuildLinks() has been called.) Use this method only when the\ndataset is set as Editable.\n"},
  {"RemoveReferenceToCell", PyvtkPolyData_RemoveReferenceToCell, METH_VARARGS,
   "RemoveReferenceToCell(self, ptId:int, cellId:int) -> None\nC++: void RemoveReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\nRemove a reference to a cell in a particular point's link list.\nYou may also consider using RemoveCellReference() to remove the\nreferences from all the cell's points to the cell. This operator\ndoes not reallocate memory; use the operator ResizeCellList() to\ndo this if necessary. Use this method only when the dataset is\nset as Editable.\n"},
  {"AddReferenceToCell", PyvtkPolyData_AddReferenceToCell, METH_VARARGS,
   "AddReferenceToCell(self, ptId:int, cellId:int) -> None\nC++: void AddReferenceToCell(vtkIdType ptId, vtkIdType cellId)\n\nAdd a reference to a cell in a particular point's link list. (You\nmay also consider using AddCellReference() to add the references\nfrom all the cell's points to the cell.) This operator does not\nrealloc memory; use the operator ResizeCellList() to do this if\nnecessary. Use this method only when the dataset is set as\nEditable.\n"},
  {"ResizeCellList", PyvtkPolyData_ResizeCellList, METH_VARARGS,
   "ResizeCellList(self, ptId:int, size:int) -> None\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\nResize the list of cells using a particular point. (This operator\nassumes that BuildLinks() has been called.) Use this method only\nwhen the dataset is set as Editable.\n"},
  {"Initialize", PyvtkPolyData_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore object to initial state. Release memory back to system.\n"},
  {"GetPiece", PyvtkPolyData_GetPiece, METH_VARARGS,
   "GetPiece(self) -> int\nC++: virtual int GetPiece()\n\nGet the piece and the number of pieces. Similar to extent in 3D.\n"},
  {"GetNumberOfPieces", PyvtkPolyData_GetNumberOfPieces, METH_VARARGS,
   "GetNumberOfPieces(self) -> int\nC++: virtual int GetNumberOfPieces()\n\n"},
  {"GetGhostLevel", PyvtkPolyData_GetGhostLevel, METH_VARARGS,
   "GetGhostLevel(self) -> int\nC++: virtual int GetGhostLevel()\n\nGet the ghost level.\n"},
  {"GetActualMemorySize", PyvtkPolyData_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"ShallowCopy", PyvtkPolyData_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkPolyData_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"RemoveGhostCells", PyvtkPolyData_RemoveGhostCells, METH_VARARGS,
   "RemoveGhostCells(self) -> None\nC++: void RemoveGhostCells()\n\nThis method will remove any cell that is marked as ghost (has the\nvtkDataSetAttributes::DUPLICATECELL or the\nvtkDataSetAttributes::HIDDENCELL bit set). It does not remove\nunused points.\n"},
  {"GetData", PyvtkPolyData_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkPolyData\nC++: static vtkPolyData *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkPolyData\nC++: static vtkPolyData *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"GetScalarFieldCriticalIndex", PyvtkPolyData_GetScalarFieldCriticalIndex, METH_VARARGS,
   "GetScalarFieldCriticalIndex(self, pointId:int,\n    scalarField:vtkDataArray) -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    vtkDataArray *scalarField)\nGetScalarFieldCriticalIndex(self, pointId:int, fieldId:int) -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    int fieldId)\nGetScalarFieldCriticalIndex(self, pointId:int, fieldName:str)\n    -> int\nC++: int GetScalarFieldCriticalIndex(vtkIdType pointId,\n    const char *fieldName)\n\n"},
  {"GetMeshMTime", PyvtkPolyData_GetMeshMTime, METH_VARARGS,
   "GetMeshMTime(self) -> int\nC++: virtual vtkMTimeType GetMeshMTime()\n\nReturn the mesh (geometry/topology) modification time. This time\nis different from the usual MTime which also takes into account\nthe modification of data arrays. This function can be used to\ntrack the changes on the mesh separately from the data arrays\n(eg. static mesh over time with transient data).\n"},
  {"GetMTime", PyvtkPolyData_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet MTime which also considers its cell array MTime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyData_Doc =
  "vtkPolyData - concrete dataset represents vertices, lines, polygons,\nand triangle strips\n\n"
  "Superclass: vtkPointSet\n\n"
  "vtkPolyData is a data object that is a concrete implementation of\n"
  "vtkDataSet. vtkPolyData represents a geometric structure consisting\n"
  "of vertices, lines, polygons, and/or triangle strips. Point and cell\n"
  "attribute values (e.g., scalars, vectors, etc.) also are represented.\n\n"
  "The actual cell types (vtkCellType.h) supported by vtkPolyData are:\n"
  "vtkVertex, vtkPolyVertex, vtkLine, vtkPolyLine, vtkTriangle, vtkQuad,\n"
  "vtkPolygon, and vtkTriangleStrip.\n\n"
  "One important feature of vtkPolyData objects is that special\n"
  "traversal and data manipulation methods are available to process\n"
  "data. These methods are generally more efficient than vtkDataSet\n"
  "methods and should be used whenever possible. For example, traversing\n"
  "the cells in a dataset we would use GetCell(). To traverse cells with\n"
  "vtkPolyData we would retrieve the cell array object representing\n"
  "polygons (for example using GetPolys()) and then use vtkCellArray's\n"
  "InitTraversal() and GetNextCell() methods.\n\n"
  "@warning\n"
  "Because vtkPolyData is implemented with four separate instances of\n"
  "vtkCellArray to represent 0D vertices, 1D lines, 2D polygons, and 2D\n"
  "triangle strips, it is possible to create vtkPolyData instances that\n"
  "consist of a mixture of cell types. Because of the design of the\n"
  "class, there are certain limitations on how mixed cell types are\n"
  "inserted into the vtkPolyData, and in turn the order in which they\n"
  "are processed and rendered. To preserve the consistency of cell ids,\n"
  "and to ensure that cells with cell data are rendered properly, users\n"
  "must insert mixed cells in the order of vertices (vtkVertex and\n"
  "vtkPolyVertex), lines (vtkLine and vtkPolyLine), polygons\n"
  "(vtkTriangle, vtkQuad, vtkPolygon), and triangle strips\n"
  "(vtkTriangleStrip).\n\n"
  "@warning\n"
  "Some filters when processing vtkPolyData with mixed cell types may\n"
  "process the cells in differing ways. Some will convert one type into\n"
  "another (e.g., vtkTriangleStrip into vtkTriangles) or expect a\n"
  "certain type (vtkDecimatePro expects triangles or triangle strips;\n"
  "vtkTubeFilter expects lines). Read the documentation for each filter\n"
  "carefully to understand how each part of vtkPolyData is processed.\n\n"
  "@warning\n"
  "Some of the methods specified here function properly only when the\n"
  "dataset has been specified as \"Editable\". They are documented as\n"
  "such.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPolyData", // tp_name
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
  PyvtkPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyData_StaticNew()
{
  return vtkPolyData::New();
}

PyObject *PyvtkPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyData_Type, PyvtkPolyData_Methods,
    "vtkPolyData",
 &PyvtkPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointSet_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "ERR_NO_SUCH_FIELD", vtkPolyData::ERR_NO_SUCH_FIELD },
        { "ERR_INCORRECT_FIELD", vtkPolyData::ERR_INCORRECT_FIELD },
        { "ERR_NON_MANIFOLD_STAR", vtkPolyData::ERR_NON_MANIFOLD_STAR },
        { "REGULAR_POINT", vtkPolyData::REGULAR_POINT },
        { "MINIMUM", vtkPolyData::MINIMUM },
        { "SADDLE", vtkPolyData::SADDLE },
        { "MAXIMUM", vtkPolyData::MAXIMUM },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

