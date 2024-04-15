// python wrapper for vtkImageData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageData(PyObject *dict); }
extern "C" { PyObject *PyvtkImageData_ClassNew(); }

#ifndef DECLARED_PyvtkDataSet_ClassNew
extern "C" { PyObject *PyvtkDataSet_ClassNew(); }
#define DECLARED_PyvtkDataSet_ClassNew
#endif

static PyObject *
PyvtkImageData_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkImageData *tempr = vtkImageData::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageData *tempr = vtkImageData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageData::NewInstance());

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
PyvtkImageData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkImageData::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkImageData::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkImageData::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  long long temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint(temp0) :
      op->vtkImageData::GetPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetPoint(temp0, temp1);
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
PyvtkImageData_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetPoint_s1(self, args);
    case 2:
      return PyvtkImageData_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkImageData::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetCell_s1(self, args);
    case 3:
      return PyvtkImageData_GetCell_s2(self, args);
    case 2:
      return PyvtkImageData_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellBounds(temp0, temp1);
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
PyvtkImageData_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::FindPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::FindPoint(temp0));

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
PyvtkImageData_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_FindPoint_s1(self, args);
    case 1:
      return PyvtkImageData_FindPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return nullptr;
}


static PyObject *
PyvtkImageData_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkImageData_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkImageData_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkImageData_FindCell_s1(self, args);
    case 8:
      return PyvtkImageData_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}


static PyObject *
PyvtkImageData_FindAndGetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAndGetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkImageData_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkImageData::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkImageData::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellPoints(temp0, temp1, temp2c, temp3);
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
PyvtkImageData_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageData_GetCellPoints_s1(self, args);
    case 4:
      return PyvtkImageData_GetCellPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkImageData::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkImageData::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetCellNeighbors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetCellNeighbors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellNeighbors(temp0, temp1, temp2, temp3);
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
PyvtkImageData_GetCellNeighbors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_GetCellNeighbors_s1(self, args);
    case 4:
      return PyvtkImageData_GetCellNeighbors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellNeighbors");
  return nullptr;
}


static PyObject *
PyvtkImageData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkImageData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_IsPointVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPointVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsPointVisible(temp0) :
      op->vtkImageData::IsPointVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_IsCellVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsCellVisible(temp0) :
      op->vtkImageData::IsCellVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_HasAnyBlankPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankPoints() :
      op->vtkImageData::HasAnyBlankPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_HasAnyBlankCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankCells() :
      op->vtkImageData::HasAnyBlankCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetCellDims(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetCellDims(temp0);
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
PyvtkImageData_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_SetDimensions_s1(self, args);
    case 1:
      return PyvtkImageData_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkImageData::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::GetDimensions(temp0);
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
PyvtkImageData_GetDimensions_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  long long temp0[3];
  long long save0[3];
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
      op->vtkImageData::GetDimensions(temp0);
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

static PyMethodDef PyvtkImageData_GetDimensions_Methods[] = {
  {"GetDimensions", PyvtkImageData_GetDimensions_s2, METH_VARARGS,
   "@P *i"},
  {"GetDimensions", PyvtkImageData_GetDimensions_s3, METH_VARARGS,
   "@P *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetDimensions(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetDimensions_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageData_GetDimensions_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDimensions");
  return nullptr;
}


static PyObject *
PyvtkImageData_ComputeStructuredCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStructuredCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
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
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeStructuredCoordinates(temp0, temp1, temp2) :
      op->vtkImageData::ComputeStructuredCoordinates(temp0, temp1, temp2));

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
PyvtkImageData_GetVoxelGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  vtkDataArray *temp3 = nullptr;
  vtkDataArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetVTKObject(temp4, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->GetVoxelGradient(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::GetVoxelGradient(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetPointGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  vtkDataArray *temp3 = nullptr;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->GetPointGradient(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::GetPointGradient(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataDimension() :
      op->vtkImageData::GetDataDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_ComputePointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::ComputePointId(temp0));

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
PyvtkImageData_ComputeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::ComputeCellId(temp0));

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
PyvtkImageData_SetAxisUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(size3);
  int *temp3 = store3.Data();
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->SetAxisUpdateExtent(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::SetAxisUpdateExtent(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetAxisUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(size3);
  int *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    if (ap.IsBound())
    {
      op->GetAxisUpdateExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::GetAxisUpdateExtent(temp0, temp1, temp2, temp3);
    }

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
PyvtkImageData_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::SetExtent(temp0);
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
PyvtkImageData_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageData_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkImageData::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarTypeMin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarTypeMin(temp0) :
      op->vtkImageData::GetScalarTypeMin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarTypeMin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarTypeMin() :
      op->vtkImageData::GetScalarTypeMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarTypeMin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarTypeMin_s1(self, args);
    case 0:
      return PyvtkImageData_GetScalarTypeMin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarTypeMin");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetScalarTypeMax_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarTypeMax(temp0) :
      op->vtkImageData::GetScalarTypeMax(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarTypeMax_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarTypeMax() :
      op->vtkImageData::GetScalarTypeMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarTypeMax(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarTypeMax_s1(self, args);
    case 0:
      return PyvtkImageData_GetScalarTypeMax_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarTypeMax");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetScalarSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarSize(temp0) :
      op->vtkImageData::GetScalarSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarSize() :
      op->vtkImageData::GetScalarSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarSize_s1(self, args);
    case 0:
      return PyvtkImageData_GetScalarSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarSize");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetIncrements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetIncrements() :
      op->vtkImageData::GetIncrements());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetIncrements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->GetIncrements(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::GetIncrements(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
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
PyvtkImageData_GetIncrements_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  long long temp0[3];
  long long save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetIncrements(temp0);
    }
    else
    {
      op->vtkImageData::GetIncrements(temp0);
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
PyvtkImageData_GetIncrements_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetIncrements(temp0) :
      op->vtkImageData::GetIncrements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetIncrements_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  long long temp1;
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetIncrements(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::GetIncrements(temp0, temp1, temp2, temp3);
    }

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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetIncrements_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 3;
  long long temp1[3];
  long long save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetIncrements(temp0, temp1);
    }
    else
    {
      op->vtkImageData::GetIncrements(temp0, temp1);
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

static PyMethodDef PyvtkImageData_GetIncrements_Methods[] = {
  {"GetIncrements", PyvtkImageData_GetIncrements_s3, METH_VARARGS,
   "@P *k"},
  {"GetIncrements", PyvtkImageData_GetIncrements_s4, METH_VARARGS,
   "@V *vtkDataArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetIncrements(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetIncrements_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageData_GetIncrements_s1(self, args);
    case 3:
      return PyvtkImageData_GetIncrements_s2(self, args);
    case 4:
      return PyvtkImageData_GetIncrements_s5(self, args);
    case 2:
      return PyvtkImageData_GetIncrements_s6(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetIncrements");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetContinuousIncrements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  long long temp1;
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetContinuousIncrements(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::GetContinuousIncrements(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetContinuousIncrements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContinuousIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  long long temp2;
  long long temp3;
  long long temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetContinuousIncrements(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::GetContinuousIncrements(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetContinuousIncrements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageData_GetContinuousIncrements_s1(self, args);
    case 5:
      return PyvtkImageData_GetContinuousIncrements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetContinuousIncrements");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetScalarPointerForExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointerForExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    void  *tempr = (ap.IsBound() ?
      op->GetScalarPointerForExtent(temp0) :
      op->vtkImageData::GetScalarPointerForExtent(temp0));

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
PyvtkImageData_GetScalarPointer_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    void  *tempr = (ap.IsBound() ?
      op->GetScalarPointer(temp0) :
      op->vtkImageData::GetScalarPointer(temp0));

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
PyvtkImageData_GetScalarPointer_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetScalarPointer(temp0, temp1, temp2) :
      op->vtkImageData::GetScalarPointer(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarPointer_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetScalarPointer() :
      op->vtkImageData::GetScalarPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarPointer(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarPointer_s1(self, args);
    case 3:
      return PyvtkImageData_GetScalarPointer_s2(self, args);
    case 0:
      return PyvtkImageData_GetScalarPointer_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarPointer");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetScalarIndexForExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarIndexForExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->GetScalarIndexForExtent(temp0) :
      op->vtkImageData::GetScalarIndexForExtent(temp0));

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
PyvtkImageData_GetScalarIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->GetScalarIndex(temp0) :
      op->vtkImageData::GetScalarIndex(temp0));

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
PyvtkImageData_GetScalarIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->GetScalarIndex(temp0, temp1, temp2) :
      op->vtkImageData::GetScalarIndex(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageData_GetScalarIndex_s1(self, args);
    case 3:
      return PyvtkImageData_GetScalarIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarIndex");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetScalarComponentAsFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentAsFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    float tempr = (ap.IsBound() ?
      op->GetScalarComponentAsFloat(temp0, temp1, temp2, temp3) :
      op->vtkImageData::GetScalarComponentAsFloat(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarComponentFromFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponentFromFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  float temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponentFromFloat(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::SetScalarComponentFromFloat(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarComponentAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarComponentAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarComponentAsDouble(temp0, temp1, temp2, temp3) :
      op->vtkImageData::GetScalarComponentAsDouble(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetScalarComponentFromDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarComponentFromDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetScalarComponentFromDouble(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageData::SetScalarComponentFromDouble(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_AllocateScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AllocateScalars(temp0, temp1);
    }
    else
    {
      op->vtkImageData::AllocateScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_AllocateScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->AllocateScalars(temp0);
    }
    else
    {
      op->vtkImageData::AllocateScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_AllocateScalars(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageData_AllocateScalars_s1(self, args);
    case 1:
      return PyvtkImageData_AllocateScalars_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllocateScalars");
  return nullptr;
}


static PyObject *
PyvtkImageData_CopyAndCastFrom_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAndCastFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkImageData *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->CopyAndCastFrom(temp0, temp1);
    }
    else
    {
      op->vtkImageData::CopyAndCastFrom(temp0, temp1);
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
PyvtkImageData_CopyAndCastFrom_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAndCastFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->CopyAndCastFrom(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkImageData::CopyAndCastFrom(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_CopyAndCastFrom(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageData_CopyAndCastFrom_s1(self, args);
    case 7:
      return PyvtkImageData_CopyAndCastFrom_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyAndCastFrom");
  return nullptr;
}


static PyObject *
PyvtkImageData_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::Crop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkImageData::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkImageData::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::SetSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0);
    }
    else
    {
      op->vtkImageData::SetSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_SetSpacing_s1(self, args);
    case 1:
      return PyvtkImageData_SetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImageData::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkImageData::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageData_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImageData_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetDirectionMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix3x3 *tempr = (ap.IsBound() ?
      op->GetDirectionMatrix() :
      op->vtkImageData::GetDirectionMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetDirectionMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetDirectionMatrix(temp0);
    }
    else
    {
      op->vtkImageData::SetDirectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetDirectionMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 9;
  double temp0[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionMatrix(temp0);
    }
    else
    {
      op->vtkImageData::SetDirectionMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_SetDirectionMatrix_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    if (ap.IsBound())
    {
      op->SetDirectionMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkImageData::SetDirectionMatrix(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageData_SetDirectionMatrix_Methods[] = {
  {"SetDirectionMatrix", PyvtkImageData_SetDirectionMatrix_s1, METH_VARARGS,
   "@V *vtkMatrix3x3"},
  {"SetDirectionMatrix", PyvtkImageData_SetDirectionMatrix_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_SetDirectionMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_SetDirectionMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkImageData_SetDirectionMatrix_s3(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirectionMatrix");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetIndexToPhysicalMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexToPhysicalMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetIndexToPhysicalMatrix() :
      op->vtkImageData::GetIndexToPhysicalMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_TransformContinuousIndexToPhysicalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformContinuousIndexToPhysicalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
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
      op->TransformContinuousIndexToPhysicalPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::TransformContinuousIndexToPhysicalPoint(temp0, temp1, temp2, temp3);
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
PyvtkImageData_TransformContinuousIndexToPhysicalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformContinuousIndexToPhysicalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformContinuousIndexToPhysicalPoint(temp0, temp1);
    }
    else
    {
      op->vtkImageData::TransformContinuousIndexToPhysicalPoint(temp0, temp1);
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
PyvtkImageData_TransformContinuousIndexToPhysicalPoint_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TransformContinuousIndexToPhysicalPoint");

  double temp0;
  double temp1;
  double temp2;
  const size_t size3 = 3;
  double temp3[3];
  const size_t size4 = 3;
  double temp4[3];
  const size_t size5 = 9;
  double temp5[9];
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp6, save6, size6);

    vtkImageData::TransformContinuousIndexToPhysicalPoint(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_TransformContinuousIndexToPhysicalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageData_TransformContinuousIndexToPhysicalPoint_s1(self, args);
    case 2:
      return PyvtkImageData_TransformContinuousIndexToPhysicalPoint_s2(self, args);
    case 7:
      return PyvtkImageData_TransformContinuousIndexToPhysicalPoint_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformContinuousIndexToPhysicalPoint");
  return nullptr;
}


static PyObject *
PyvtkImageData_TransformIndexToPhysicalPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformIndexToPhysicalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->TransformIndexToPhysicalPoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::TransformIndexToPhysicalPoint(temp0, temp1, temp2, temp3);
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
PyvtkImageData_TransformIndexToPhysicalPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformIndexToPhysicalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformIndexToPhysicalPoint(temp0, temp1);
    }
    else
    {
      op->vtkImageData::TransformIndexToPhysicalPoint(temp0, temp1);
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
PyvtkImageData_TransformIndexToPhysicalPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageData_TransformIndexToPhysicalPoint_s1(self, args);
    case 2:
      return PyvtkImageData_TransformIndexToPhysicalPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformIndexToPhysicalPoint");
  return nullptr;
}


static PyObject *
PyvtkImageData_GetPhysicalToIndexMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalToIndexMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetPhysicalToIndexMatrix() :
      op->vtkImageData::GetPhysicalToIndexMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_TransformPhysicalPointToContinuousIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPhysicalPointToContinuousIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  double temp0;
  double temp1;
  double temp2;
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
      op->TransformPhysicalPointToContinuousIndex(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageData::TransformPhysicalPointToContinuousIndex(temp0, temp1, temp2, temp3);
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
PyvtkImageData_TransformPhysicalPointToContinuousIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPhysicalPointToContinuousIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformPhysicalPointToContinuousIndex(temp0, temp1);
    }
    else
    {
      op->vtkImageData::TransformPhysicalPointToContinuousIndex(temp0, temp1);
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
PyvtkImageData_TransformPhysicalPointToContinuousIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageData_TransformPhysicalPointToContinuousIndex_s1(self, args);
    case 2:
      return PyvtkImageData_TransformPhysicalPointToContinuousIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TransformPhysicalPointToContinuousIndex");
  return nullptr;
}


static PyObject *
PyvtkImageData_ComputeIndexToPhysicalMatrix(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeIndexToPhysicalMatrix");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 9;
  double temp2[9];
  const size_t size3 = 16;
  double temp3[16];
  double save3[16];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkImageData::ComputeIndexToPhysicalMatrix(temp0, temp1, temp2, temp3);

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
PyvtkImageData_TransformPhysicalNormalToContinuousIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPhysicalNormalToContinuousIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformPhysicalNormalToContinuousIndex(temp0, temp1);
    }
    else
    {
      op->vtkImageData::TransformPhysicalNormalToContinuousIndex(temp0, temp1);
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
PyvtkImageData_TransformPhysicalPlaneToContinuousIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformPhysicalPlaneToContinuousIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TransformPhysicalPlaneToContinuousIndex(temp0, temp1);
    }
    else
    {
      op->vtkImageData::TransformPhysicalPlaneToContinuousIndex(temp0, temp1);
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
PyvtkImageData_SetScalarType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetScalarType");

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    vtkImageData::SetScalarType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarType_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarType");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkImageData::GetScalarType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetScalarType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkImageData::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageData_GetScalarType_Methods[] = {
  {"GetScalarType", PyvtkImageData_GetScalarType_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetScalarType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetScalarType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageData_GetScalarType_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarType");
  return nullptr;
}


static PyObject *
PyvtkImageData_HasScalarType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HasScalarType");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = vtkImageData::HasScalarType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarTypeAsString() :
      op->vtkImageData::GetScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_SetNumberOfScalarComponents(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetNumberOfScalarComponents");

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    vtkImageData::SetNumberOfScalarComponents(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetNumberOfScalarComponents_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfScalarComponents");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = vtkImageData::GetNumberOfScalarComponents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetNumberOfScalarComponents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkImageData::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageData_GetNumberOfScalarComponents_Methods[] = {
  {"GetNumberOfScalarComponents", PyvtkImageData_GetNumberOfScalarComponents_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetNumberOfScalarComponents_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageData_GetNumberOfScalarComponents_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfScalarComponents");
  return nullptr;
}


static PyObject *
PyvtkImageData_HasNumberOfScalarComponents(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HasNumberOfScalarComponents");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    bool tempr = vtkImageData::HasNumberOfScalarComponents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationFromPipeline(temp0);
    }
    else
    {
      op->vtkImageData::CopyInformationFromPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationToPipeline(temp0);
    }
    else
    {
      op->vtkImageData::CopyInformationToPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareForNewData();
    }
    else
    {
      op->vtkImageData::PrepareForNewData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

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
      op->vtkImageData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetArrayPointerForExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayPointerForExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    void  *tempr = (ap.IsBound() ?
      op->GetArrayPointerForExtent(temp0, temp1) :
      op->vtkImageData::GetArrayPointerForExtent(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetArrayPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    void  *tempr = (ap.IsBound() ?
      op->GetArrayPointer(temp0, temp1) :
      op->vtkImageData::GetArrayPointer(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetTupleIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTupleIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    long long tempr = (ap.IsBound() ?
      op->GetTupleIndex(temp0, temp1) :
      op->vtkImageData::GetTupleIndex(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetArrayIncrements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayIncrements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  vtkDataArray *temp0 = nullptr;
  const size_t size1 = 3;
  long long temp1[3];
  long long save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetArrayIncrements(temp0, temp1);
    }
    else
    {
      op->vtkImageData::GetArrayIncrements(temp0, temp1);
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
PyvtkImageData_ComputeInternalExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInternalExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->ComputeInternalExtent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageData::ComputeInternalExtent(temp0, temp1, temp2);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageData *op = static_cast<vtkImageData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkImageData::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageData_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkImageData *tempr = vtkImageData::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageData_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkImageData *tempr = vtkImageData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageData_GetData_Methods[] = {
  {"GetData", PyvtkImageData_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkImageData_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkImageData_Methods[] = {
  {"ExtendedNew", PyvtkImageData_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkImageData\nC++: static vtkImageData *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkImageData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageData\nC++: static vtkImageData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageData\nC++: vtkImageData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CopyStructure", PyvtkImageData_CopyStructure, METH_VARARGS,
   "CopyStructure(self, ds:vtkDataSet) -> None\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric and topological structure of an input image\ndata object.\n"},
  {"GetDataObjectType", PyvtkImageData_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"GetNumberOfCells", PyvtkImageData_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n\\warning If GetCell(int,int,int) gets overridden in a subclass,\n    it is\nnecessary to override GetCell(vtkIdType) in that class as well\nsince vtkImageData::GetCell(vtkIdType) will always call\nvkImageData::GetCell(int,int,int)\n"},
  {"GetNumberOfPoints", PyvtkImageData_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: vtkIdType GetNumberOfPoints() override;\n\nDetermine the number of points composing the dataset. THIS METHOD\nIS THREAD SAFE\n"},
  {"GetPoint", PyvtkImageData_GetPoint, METH_VARARGS,
   "GetPoint(self, ptId:int) -> (float, float, float)\nC++: double *GetPoint(vtkIdType ptId) override;\nGetPoint(self, id:int, x:[float, float, float]) -> None\nC++: void GetPoint(vtkIdType id, double x[3]) override;\n\nGet point coordinates with ptId such that: 0 <= ptId <\nNumberOfPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"GetCell", PyvtkImageData_GetCell, METH_VARARGS,
   "GetCell(self, cellId:int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: vtkCell *GetCell(int i, int j, int k) override;\nGetCell(self, cellId:int, cell:vtkGenericCell) -> None\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\n\nGet cell with cellId such that: 0 <= cellId < NumberOfCells. The\nreturned vtkCell is an object owned by this instance, hence the\nreturn value must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE. For a thread-safe\n    version, please use\nvoid GetCell(vtkIdType cellId, vtkGenericCell* cell).\n"},
  {"GetCellBounds", PyvtkImageData_GetCellBounds, METH_VARARGS,
   "GetCellBounds(self, cellId:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nGet the bounds of the cell with cellId such that: 0 <= cellId <\nNumberOfCells. A subclass may be able to determine the bounds of\ncell without using an expensive GetCell() method. A default\nimplementation is provided that actually uses a GetCell() call. \nThis is to ensure the method is available to all datasets. \nSubclasses should override this method to provide an efficient\nimplementation. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"FindPoint", PyvtkImageData_FindPoint, METH_VARARGS,
   "FindPoint(self, x:float, y:float, z:float) -> int\nC++: virtual vtkIdType FindPoint(double x, double y, double z)\nFindPoint(self, x:[float, float, float]) -> int\nC++: vtkIdType FindPoint(double x[3]) override;\n\nLocate the closest point to the global coordinate x. Return the\npoint id. If point id < 0; then no point found. (This may arise\nwhen point is outside of dataset.) THIS METHOD IS THREAD SAFE IF\nFIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"FindCell", PyvtkImageData_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float], cell:vtkCell, cellId:int,\n    tol2:float, subId:int, pcoords:[float, float, float],\n    weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\nFindCell(self, x:[float, float, float], cell:vtkCell,\n    gencell:vtkGenericCell, cellId:int, tol2:float, subId:int,\n    pcoords:[float, float, float], weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights) override;\n\nLocate cell based on global coordinate x and tolerance squared.\nIf cell and cellId is non-nullptr, then search starts from this\ncell and looks at immediate neighbors.  Returns cellId >= 0 if\ninside, < 0 otherwise.  The parametric coordinates are provided\nin pcoords[3]. The interpolation weights are returned in\nweights[]. (The number of weights is equal to the number of\npoints in the found cell). Tolerance is used to control how close\nthe point is to be considered \"in\" the cell. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {"FindAndGetCell", PyvtkImageData_FindAndGetCell, METH_VARARGS,
   "FindAndGetCell(self, x:[float, float, float], cell:vtkCell,\n    cellId:int, tol2:float, subId:int, pcoords:[float, float,\n    float], weights:[float, ...]) -> vtkCell\nC++: vtkCell *FindAndGetCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights) override;\n\nLocate the cell that contains a point and return the cell. Also\nreturns the subcell id, parametric coordinates and weights for\nsubsequent interpolation. This method combines the derived class\nmethods int FindCell and vtkCell *GetCell. Derived classes may\nprovide a more efficient implementation. See for example\nvtkStructuredPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"GetCellType", PyvtkImageData_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nGet type of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellSize", PyvtkImageData_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: vtkIdType GetCellSize(vtkIdType cellId) override;\n\nGet the size of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n\n@warning This method MUST be overridden for performance reasons.\nDefault implementation is very unefficient.\n"},
  {"GetCellPoints", PyvtkImageData_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...),\n    ptIds:vtkIdList) -> None\nC++: virtual void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n     vtkIdType const *&pts, vtkIdList *ptIds)\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetPointCells", PyvtkImageData_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"ComputeBounds", PyvtkImageData_ComputeBounds, METH_VARARGS,
   "ComputeBounds(self) -> None\nC++: void ComputeBounds() override;\n\nCompute the data bounding box from data points. THIS METHOD IS\nNOT THREAD SAFE.\n"},
  {"GetMaxCellSize", PyvtkImageData_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nTHIS METHOD IS THREAD SAFE\n"},
  {"GetCellNeighbors", PyvtkImageData_GetCellNeighbors, METH_VARARGS,
   "GetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds) override;\nGetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList, seedLoc:[int, ...]) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds, int *seedLoc)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). Note that the list\nconsists of only cells that use ALL the points provided. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {"Initialize", PyvtkImageData_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state.\n"},
  {"IsPointVisible", PyvtkImageData_IsPointVisible, METH_VARARGS,
   "IsPointVisible(self, ptId:int) -> int\nC++: unsigned char IsPointVisible(vtkIdType ptId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {"IsCellVisible", PyvtkImageData_IsCellVisible, METH_VARARGS,
   "IsCellVisible(self, cellId:int) -> int\nC++: unsigned char IsCellVisible(vtkIdType cellId)\n\nReturn non-zero value if specified point is visible. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {"HasAnyBlankPoints", PyvtkImageData_HasAnyBlankPoints, METH_VARARGS,
   "HasAnyBlankPoints(self) -> bool\nC++: bool HasAnyBlankPoints() override;\n\nReturns 1 if there is any visibility constraint on the points, 0\notherwise.\n"},
  {"HasAnyBlankCells", PyvtkImageData_HasAnyBlankCells, METH_VARARGS,
   "HasAnyBlankCells(self) -> bool\nC++: bool HasAnyBlankCells() override;\n\nReturns 1 if there is any visibility constraint on the cells, 0\notherwise.\n"},
  {"GetCellDims", PyvtkImageData_GetCellDims, METH_VARARGS,
   "GetCellDims(self, cellDims:[int, int, int]) -> None\nC++: void GetCellDims(int cellDims[3])\n\nGiven the node dimensions of this grid instance, this method\ncomputes the node dimensions. The value in each dimension can\nwill have a lowest value of \"1\" such that computing the total\nnumber of cells can be achieved by simply by\ncellDims[0]*cellDims[1]*cellDims[2].\n"},
  {"SetDimensions", PyvtkImageData_SetDimensions, METH_VARARGS,
   "SetDimensions(self, i:int, j:int, k:int) -> None\nC++: virtual void SetDimensions(int i, int j, int k)\nSetDimensions(self, dims:(int, int, int)) -> None\nC++: virtual void SetDimensions(const int dims[3])\n\nSame as SetExtent(0, i-1, 0, j-1, 0, k-1)\n"},
  {"GetDimensions", PyvtkImageData_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: virtual int *GetDimensions()\nGetDimensions(self, dims:[int, int, int]) -> None\nC++: virtual void GetDimensions(int dims[3])\nGetDimensions(self, dims:[int, int, int]) -> None\nC++: virtual void GetDimensions(vtkIdType dims[3])\n\nGet dimensions of this structured points dataset. It is the\nnumber of points on each axis. Dimensions are computed from\nExtents during this call.\n\\warning Non thread-safe, use second signature if you want it to\n    be.\n"},
  {"ComputeStructuredCoordinates", PyvtkImageData_ComputeStructuredCoordinates, METH_VARARGS,
   "ComputeStructuredCoordinates(self, x:(float, float, float),\n    ijk:[int, int, int], pcoords:[float, float, float]) -> int\nC++: virtual int ComputeStructuredCoordinates(const double x[3],\n    int ijk[3], double pcoords[3])\n\nConvenience function computes the structured coordinates for a\npoint x[3]. The voxel is specified by the array ijk[3], and the\nparametric coordinates in the cell are specified with pcoords[3].\nThe function returns a 0 if the point x is outside of the volume,\nand a 1 if inside the volume.\n"},
  {"GetVoxelGradient", PyvtkImageData_GetVoxelGradient, METH_VARARGS,
   "GetVoxelGradient(self, i:int, j:int, k:int, s:vtkDataArray,\n    g:vtkDataArray) -> None\nC++: virtual void GetVoxelGradient(int i, int j, int k,\n    vtkDataArray *s, vtkDataArray *g)\n\nGiven structured coordinates (i,j,k) for a voxel cell, compute\nthe eight gradient values for the voxel corners. The order in\nwhich the gradient vectors are arranged corresponds to the\nordering of the voxel points. Gradient vector is computed by\ncentral differences (except on edges of volume where forward\ndifference is used). The scalars s are the scalars from which the\ngradient is to be computed. This method will treat only 3D\nstructured point datasets (i.e., volumes).\n"},
  {"GetPointGradient", PyvtkImageData_GetPointGradient, METH_VARARGS,
   "GetPointGradient(self, i:int, j:int, k:int, s:vtkDataArray,\n    g:[float, float, float]) -> None\nC++: virtual void GetPointGradient(int i, int j, int k,\n    vtkDataArray *s, double g[3])\n\nGiven structured coordinates (i,j,k) for a point in a structured\npoint dataset, compute the gradient vector from the scalar data\nat that point. The scalars s are the scalars from which the\ngradient is to be computed. This method will treat structured\npoint datasets of any dimension.\n"},
  {"GetDataDimension", PyvtkImageData_GetDataDimension, METH_VARARGS,
   "GetDataDimension(self) -> int\nC++: virtual int GetDataDimension()\n\nReturn the dimensionality of the data.\n"},
  {"ComputePointId", PyvtkImageData_ComputePointId, METH_VARARGS,
   "ComputePointId(self, ijk:[int, int, int]) -> int\nC++: virtual vtkIdType ComputePointId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\npoint id.\n"},
  {"ComputeCellId", PyvtkImageData_ComputeCellId, METH_VARARGS,
   "ComputeCellId(self, ijk:[int, int, int]) -> int\nC++: virtual vtkIdType ComputeCellId(int ijk[3])\n\nGiven a location in structured coordinates (i-j-k), return the\ncell id.\n"},
  {"SetAxisUpdateExtent", PyvtkImageData_SetAxisUpdateExtent, METH_VARARGS,
   "SetAxisUpdateExtent(self, axis:int, min:int, max:int,\n    updateExtent:(int, ...), axisUpdateExtent:[int, ...]) -> None\nC++: virtual void SetAxisUpdateExtent(int axis, int min, int max,\n    const int *updateExtent, int *axisUpdateExtent)\n\nSet / Get the extent on just one axis\n"},
  {"GetAxisUpdateExtent", PyvtkImageData_GetAxisUpdateExtent, METH_VARARGS,
   "GetAxisUpdateExtent(self, axis:int, min:int, max:int,\n    updateExtent:(int, ...)) -> None\nC++: virtual void GetAxisUpdateExtent(int axis, int &min,\n    int &max, const int *updateExtent)\n\n"},
  {"SetExtent", PyvtkImageData_SetExtent, METH_VARARGS,
   "SetExtent(self, extent:[int, int, int, int, int, int]) -> None\nC++: virtual void SetExtent(int extent[6])\nSetExtent(self, x1:int, x2:int, y1:int, y2:int, z1:int, z2:int)\n    -> None\nC++: virtual void SetExtent(int x1, int x2, int y1, int y2,\n    int z1, int z2)\n\nSet/Get the extent. On each axis, the extent is defined by the\nindex of the first point and the index of the last point.  The\nextent should be set before the \"Scalars\" are set or allocated. \nThe Extent is stored in the order (X, Y, Z). The dataset extent\ndoes not have to start at (0,0,0). (0,0,0) is just the extent of\nthe origin. The first point (the one with Id=0) is at extent\n(Extent[0],Extent[2],Extent[4]). As for any dataset, a data array\non point data starts at Id=0.\n"},
  {"GetExtent", PyvtkImageData_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\n"},
  {"GetScalarTypeMin", PyvtkImageData_GetScalarTypeMin, METH_VARARGS,
   "GetScalarTypeMin(self, meta_data:vtkInformation) -> float\nC++: virtual double GetScalarTypeMin(vtkInformation *meta_data)\nGetScalarTypeMin(self) -> float\nC++: virtual double GetScalarTypeMin()\n\nThese returns the minimum and maximum values the ScalarType can\nhold without overflowing.\n"},
  {"GetScalarTypeMax", PyvtkImageData_GetScalarTypeMax, METH_VARARGS,
   "GetScalarTypeMax(self, meta_data:vtkInformation) -> float\nC++: virtual double GetScalarTypeMax(vtkInformation *meta_data)\nGetScalarTypeMax(self) -> float\nC++: virtual double GetScalarTypeMax()\n\n"},
  {"GetScalarSize", PyvtkImageData_GetScalarSize, METH_VARARGS,
   "GetScalarSize(self, meta_data:vtkInformation) -> int\nC++: virtual int GetScalarSize(vtkInformation *meta_data)\nGetScalarSize(self) -> int\nC++: virtual int GetScalarSize()\n\nGet the size of the scalar type in bytes.\n"},
  {"GetIncrements", PyvtkImageData_GetIncrements, METH_VARARGS,
   "GetIncrements(self) -> (int, int, int)\nC++: virtual vtkIdType *GetIncrements()\nGetIncrements(self, incX:int, incY:int, incZ:int) -> None\nC++: virtual void GetIncrements(vtkIdType &incX, vtkIdType &incY,\n    vtkIdType &incZ)\nGetIncrements(self, inc:[int, int, int]) -> None\nC++: virtual void GetIncrements(vtkIdType inc[3])\nGetIncrements(self, scalars:vtkDataArray) -> (int, int, int)\nC++: virtual vtkIdType *GetIncrements(vtkDataArray *scalars)\nGetIncrements(self, scalars:vtkDataArray, incX:int, incY:int,\n    incZ:int) -> None\nC++: virtual void GetIncrements(vtkDataArray *scalars,\n    vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)\nGetIncrements(self, scalars:vtkDataArray, inc:[int, int, int])\n    -> None\nC++: virtual void GetIncrements(vtkDataArray *scalars,\n    vtkIdType inc[3])\n\nDifferent ways to get the increments for moving around the data.\nGetIncrements() calls ComputeIncrements() to ensure the\nincrements are up to date.  The first three methods compute the\nincrements based on the active scalar field while the next three,\nthe scalar field is passed in.\n\nNote that all methods which do not have the increments passed in\nare not thread-safe. When working on a given `vtkImageData`\ninstance on multiple threads, each thread should use the `inc*`\noverloads to compute the increments to avoid racing with other\nthreads.\n"},
  {"GetContinuousIncrements", PyvtkImageData_GetContinuousIncrements, METH_VARARGS,
   "GetContinuousIncrements(self, extent:[int, int, int, int, int,\n    int], incX:int, incY:int, incZ:int) -> None\nC++: virtual void GetContinuousIncrements(int extent[6],\n    vtkIdType &incX, vtkIdType &incY, vtkIdType &incZ)\nGetContinuousIncrements(self, scalars:vtkDataArray, extent:[int,\n    int, int, int, int, int], incX:int, incY:int, incZ:int)\n    -> None\nC++: virtual void GetContinuousIncrements(vtkDataArray *scalars,\n    int extent[6], vtkIdType &incX, vtkIdType &incY,\n    vtkIdType &incZ)\n\nDifferent ways to get the increments for moving around the data.\nincX is always returned with 0.  incY is returned with the\nincrement needed to move from the end of one X scanline of data\nto the start of the next line.  incZ is filled in with the\nincrement needed to move from the end of one image to the start\nof the next.  The proper way to use these values is to for a loop\nover Z, Y, X, C, incrementing the pointer by 1 after each\ncomponent.  When the end of the component is reached, the pointer\nis set to the beginning of the next pixel, thus incX is properly\nset to 0. The first form of GetContinuousIncrements uses the\nactive scalar field while the second form allows the scalar array\nto be passed in.\n"},
  {"GetScalarPointerForExtent", PyvtkImageData_GetScalarPointerForExtent, METH_VARARGS,
   "GetScalarPointerForExtent(self, extent:[int, int, int, int, int,\n    int]) -> Pointer\nC++: virtual void *GetScalarPointerForExtent(int extent[6])\n\nAccess the native pointer for the scalar data\n"},
  {"GetScalarPointer", PyvtkImageData_GetScalarPointer, METH_VARARGS,
   "GetScalarPointer(self, coordinates:[int, int, int]) -> Pointer\nC++: virtual void *GetScalarPointer(int coordinates[3])\nGetScalarPointer(self, x:int, y:int, z:int) -> Pointer\nC++: virtual void *GetScalarPointer(int x, int y, int z)\nGetScalarPointer(self) -> Pointer\nC++: virtual void *GetScalarPointer()\n\n"},
  {"GetScalarIndexForExtent", PyvtkImageData_GetScalarIndexForExtent, METH_VARARGS,
   "GetScalarIndexForExtent(self, extent:[int, int, int, int, int,\n    int]) -> int\nC++: virtual vtkIdType GetScalarIndexForExtent(int extent[6])\n\nAccess the index for the scalar data\n"},
  {"GetScalarIndex", PyvtkImageData_GetScalarIndex, METH_VARARGS,
   "GetScalarIndex(self, coordinates:[int, int, int]) -> int\nC++: virtual vtkIdType GetScalarIndex(int coordinates[3])\nGetScalarIndex(self, x:int, y:int, z:int) -> int\nC++: virtual vtkIdType GetScalarIndex(int x, int y, int z)\n\n"},
  {"GetScalarComponentAsFloat", PyvtkImageData_GetScalarComponentAsFloat, METH_VARARGS,
   "GetScalarComponentAsFloat(self, x:int, y:int, z:int,\n    component:int) -> float\nC++: virtual float GetScalarComponentAsFloat(int x, int y, int z,\n    int component)\n\nFor access to data from wrappers\n"},
  {"SetScalarComponentFromFloat", PyvtkImageData_SetScalarComponentFromFloat, METH_VARARGS,
   "SetScalarComponentFromFloat(self, x:int, y:int, z:int,\n    component:int, v:float) -> None\nC++: virtual void SetScalarComponentFromFloat(int x, int y, int z,\n     int component, float v)\n\n"},
  {"GetScalarComponentAsDouble", PyvtkImageData_GetScalarComponentAsDouble, METH_VARARGS,
   "GetScalarComponentAsDouble(self, x:int, y:int, z:int,\n    component:int) -> float\nC++: virtual double GetScalarComponentAsDouble(int x, int y,\n    int z, int component)\n\n"},
  {"SetScalarComponentFromDouble", PyvtkImageData_SetScalarComponentFromDouble, METH_VARARGS,
   "SetScalarComponentFromDouble(self, x:int, y:int, z:int,\n    component:int, v:float) -> None\nC++: virtual void SetScalarComponentFromDouble(int x, int y,\n    int z, int component, double v)\n\n"},
  {"AllocateScalars", PyvtkImageData_AllocateScalars, METH_VARARGS,
   "AllocateScalars(self, dataType:int, numComponents:int) -> None\nC++: virtual void AllocateScalars(int dataType, int numComponents)\nAllocateScalars(self, pipeline_info:vtkInformation) -> None\nC++: virtual void AllocateScalars(vtkInformation *pipeline_info)\n\nAllocate the point scalars for this dataset. The data type\ndetermines the type of the array (VTK_FLOAT, VTK_INT etc.) where\nas numComponents determines its number of components.\n"},
  {"CopyAndCastFrom", PyvtkImageData_CopyAndCastFrom, METH_VARARGS,
   "CopyAndCastFrom(self, inData:vtkImageData, extent:[int, int, int,\n    int, int, int]) -> None\nC++: virtual void CopyAndCastFrom(vtkImageData *inData,\n    int extent[6])\nCopyAndCastFrom(self, inData:vtkImageData, x0:int, x1:int, y0:int,\n     y1:int, z0:int, z1:int) -> None\nC++: virtual void CopyAndCastFrom(vtkImageData *inData, int x0,\n    int x1, int y0, int y1, int z0, int z1)\n\nThis method is passed a input and output region, and executes the\nfilter algorithm to fill the output from the input. It just\nexecutes a switch statement to call the correct function for the\nregions data types.\n"},
  {"Crop", PyvtkImageData_Crop, METH_VARARGS,
   "Crop(self, updateExtent:(int, ...)) -> None\nC++: void Crop(const int *updateExtent) override;\n\nReallocates and copies to set the Extent to updateExtent. This is\nused internally when the exact extent is requested, and the\nsource generated more than the update extent.\n"},
  {"GetActualMemorySize", PyvtkImageData_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"GetSpacing", PyvtkImageData_GetSpacing, METH_VARARGS,
   "GetSpacing(self) -> (float, float, float)\nC++: virtual double *GetSpacing()\n\nSet the spacing (width,height,length) of the cubical cells that\ncompose the data set.\n"},
  {"SetSpacing", PyvtkImageData_SetSpacing, METH_VARARGS,
   "SetSpacing(self, i:float, j:float, k:float) -> None\nC++: virtual void SetSpacing(double i, double j, double k)\nSetSpacing(self, ijk:(float, float, float)) -> None\nC++: virtual void SetSpacing(const double ijk[3])\n\n"},
  {"GetOrigin", PyvtkImageData_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\nSet/Get the origin of the dataset. The origin is the position in\nworld coordinates of the point of extent (0,0,0). This point does\nnot have to be part of the dataset, in other words, the dataset\nextent does not have to start at (0,0,0) and the origin can be\noutside of the dataset bounding box. The origin plus spacing\ndetermine the position in space of the points.\n"},
  {"SetOrigin", PyvtkImageData_SetOrigin, METH_VARARGS,
   "SetOrigin(self, i:float, j:float, k:float) -> None\nC++: virtual void SetOrigin(double i, double j, double k)\nSetOrigin(self, ijk:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double ijk[3])\n\n"},
  {"GetDirectionMatrix", PyvtkImageData_GetDirectionMatrix, METH_VARARGS,
   "GetDirectionMatrix(self) -> vtkMatrix3x3\nC++: virtual vtkMatrix3x3 *GetDirectionMatrix()\n\nSet/Get the direction transform of the dataset. The direction\nmatrix is a 3x3 transformation matrix supporting scaling and\nrotation.\n"},
  {"SetDirectionMatrix", PyvtkImageData_SetDirectionMatrix, METH_VARARGS,
   "SetDirectionMatrix(self, m:vtkMatrix3x3) -> None\nC++: virtual void SetDirectionMatrix(vtkMatrix3x3 *m)\nSetDirectionMatrix(self, elements:(float, float, float, float,\n    float, float, float, float, float)) -> None\nC++: virtual void SetDirectionMatrix(const double elements[9])\nSetDirectionMatrix(self, e00:float, e01:float, e02:float,\n    e10:float, e11:float, e12:float, e20:float, e21:float,\n    e22:float) -> None\nC++: virtual void SetDirectionMatrix(double e00, double e01,\n    double e02, double e10, double e11, double e12, double e20,\n    double e21, double e22)\n\n"},
  {"GetIndexToPhysicalMatrix", PyvtkImageData_GetIndexToPhysicalMatrix, METH_VARARGS,
   "GetIndexToPhysicalMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetIndexToPhysicalMatrix()\n\nGet the transformation matrix from the index space to the\nphysical space coordinate system of the dataset. The transform is\na 4 by 4 matrix.\n"},
  {"TransformContinuousIndexToPhysicalPoint", PyvtkImageData_TransformContinuousIndexToPhysicalPoint, METH_VARARGS,
   "TransformContinuousIndexToPhysicalPoint(self, i:float, j:float,\n    k:float, xyz:[float, float, float]) -> None\nC++: virtual void TransformContinuousIndexToPhysicalPoint(\n    double i, double j, double k, double xyz[3])\nTransformContinuousIndexToPhysicalPoint(self, ijk:(float, float,\n    float), xyz:[float, float, float]) -> None\nC++: virtual void TransformContinuousIndexToPhysicalPoint(\n    const double ijk[3], double xyz[3])\nTransformContinuousIndexToPhysicalPoint(i:float, j:float, k:float,\n     origin:(float, float, float), spacing:(float, float, float),\n    direction:(float, float, float, float, float, float, float,\n    float, float), xyz:[float, float, float]) -> None\nC++: static void TransformContinuousIndexToPhysicalPoint(double i,\n     double j, double k, double const origin[3],\n    double const spacing[3], double const direction[9],\n    double xyz[3])\n\nConvert coordinates from index space (ijk) to physical space\n(xyz).\n"},
  {"TransformIndexToPhysicalPoint", PyvtkImageData_TransformIndexToPhysicalPoint, METH_VARARGS,
   "TransformIndexToPhysicalPoint(self, i:int, j:int, k:int,\n    xyz:[float, float, float]) -> None\nC++: virtual void TransformIndexToPhysicalPoint(int i, int j,\n    int k, double xyz[3])\nTransformIndexToPhysicalPoint(self, ijk:(int, int, int),\n    xyz:[float, float, float]) -> None\nC++: virtual void TransformIndexToPhysicalPoint(const int ijk[3],\n    double xyz[3])\n\n"},
  {"GetPhysicalToIndexMatrix", PyvtkImageData_GetPhysicalToIndexMatrix, METH_VARARGS,
   "GetPhysicalToIndexMatrix(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetPhysicalToIndexMatrix()\n\nGet the transformation matrix from the physical space to the\nindex space coordinate system of the dataset. The transform is a\n4 by 4 matrix.\n"},
  {"TransformPhysicalPointToContinuousIndex", PyvtkImageData_TransformPhysicalPointToContinuousIndex, METH_VARARGS,
   "TransformPhysicalPointToContinuousIndex(self, x:float, y:float,\n    z:float, ijk:[float, float, float]) -> None\nC++: virtual void TransformPhysicalPointToContinuousIndex(\n    double x, double y, double z, double ijk[3])\nTransformPhysicalPointToContinuousIndex(self, xyz:(float, float,\n    float), ijk:[float, float, float]) -> None\nC++: virtual void TransformPhysicalPointToContinuousIndex(\n    const double xyz[3], double ijk[3])\n\nConvert coordinates from physical space (xyz) to index space\n(ijk).\n"},
  {"ComputeIndexToPhysicalMatrix", PyvtkImageData_ComputeIndexToPhysicalMatrix, METH_VARARGS,
   "ComputeIndexToPhysicalMatrix(origin:(float, float, float),\n    spacing:(float, float, float), direction:(float, float, float,\n     float, float, float, float, float, float), result:[float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float]) -> None\nC++: static void ComputeIndexToPhysicalMatrix(\n    double const origin[3], double const spacing[3],\n    double const direction[9], double result[16])\n\n"},
  {"TransformPhysicalNormalToContinuousIndex", PyvtkImageData_TransformPhysicalNormalToContinuousIndex, METH_VARARGS,
   "TransformPhysicalNormalToContinuousIndex(self, xyz:(float, float,\n    float), ijk:[float, float, float]) -> None\nC++: virtual void TransformPhysicalNormalToContinuousIndex(\n    const double xyz[3], double ijk[3])\n\nConvert normal from physical space (xyz) to index space (ijk).\n"},
  {"TransformPhysicalPlaneToContinuousIndex", PyvtkImageData_TransformPhysicalPlaneToContinuousIndex, METH_VARARGS,
   "TransformPhysicalPlaneToContinuousIndex(self, pplane:(float,\n    float, float, float), iplane:[float, float, float, float])\n    -> None\nC++: virtual void TransformPhysicalPlaneToContinuousIndex(\n    double const pplane[4], double iplane[4])\n\nConvert a plane from physical to a continuous index. The plane is\nrepresented as n(x-xo)=0; or using a four component normal:\npplane=( nx,ny,nz,-(n(x0)) ).\n"},
  {"SetScalarType", PyvtkImageData_SetScalarType, METH_VARARGS,
   "SetScalarType(__a:int, meta_data:vtkInformation) -> None\nC++: static void SetScalarType(int, vtkInformation *meta_data)\n\n"},
  {"GetScalarType", PyvtkImageData_GetScalarType, METH_VARARGS,
   "GetScalarType(meta_data:vtkInformation) -> int\nC++: static int GetScalarType(vtkInformation *meta_data)\nGetScalarType(self) -> int\nC++: int GetScalarType()\n\n"},
  {"HasScalarType", PyvtkImageData_HasScalarType, METH_VARARGS,
   "HasScalarType(meta_data:vtkInformation) -> bool\nC++: static bool HasScalarType(vtkInformation *meta_data)\n\n"},
  {"GetScalarTypeAsString", PyvtkImageData_GetScalarTypeAsString, METH_VARARGS,
   "GetScalarTypeAsString(self) -> str\nC++: const char *GetScalarTypeAsString()\n\n"},
  {"SetNumberOfScalarComponents", PyvtkImageData_SetNumberOfScalarComponents, METH_VARARGS,
   "SetNumberOfScalarComponents(n:int, meta_data:vtkInformation)\n    -> None\nC++: static void SetNumberOfScalarComponents(int n,\n    vtkInformation *meta_data)\n\nSet/Get the number of scalar components for points. As with the\nSetScalarType method this is setting pipeline info.\n"},
  {"GetNumberOfScalarComponents", PyvtkImageData_GetNumberOfScalarComponents, METH_VARARGS,
   "GetNumberOfScalarComponents(meta_data:vtkInformation) -> int\nC++: static int GetNumberOfScalarComponents(\n    vtkInformation *meta_data)\nGetNumberOfScalarComponents(self) -> int\nC++: int GetNumberOfScalarComponents()\n\n"},
  {"HasNumberOfScalarComponents", PyvtkImageData_HasNumberOfScalarComponents, METH_VARARGS,
   "HasNumberOfScalarComponents(meta_data:vtkInformation) -> bool\nC++: static bool HasNumberOfScalarComponents(\n    vtkInformation *meta_data)\n\n"},
  {"CopyInformationFromPipeline", PyvtkImageData_CopyInformationFromPipeline, METH_VARARGS,
   "CopyInformationFromPipeline(self, information:vtkInformation)\n    -> None\nC++: void CopyInformationFromPipeline(vtkInformation *information)\n     override;\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {"CopyInformationToPipeline", PyvtkImageData_CopyInformationToPipeline, METH_VARARGS,
   "CopyInformationToPipeline(self, information:vtkInformation)\n    -> None\nC++: void CopyInformationToPipeline(vtkInformation *information)\n    override;\n\nCopy information from this data object to the pipeline\ninformation. This is used by the vtkTrivialProducer that is\ncreated when someone calls SetInputData() to connect the image to\na pipeline.\n"},
  {"PrepareForNewData", PyvtkImageData_PrepareForNewData, METH_VARARGS,
   "PrepareForNewData(self) -> None\nC++: void PrepareForNewData() override;\n\nmake the output data ready for new data to be inserted. For most\nobjects we just call Initialize. But for image data we leave the\nold data in case the memory can be reused.\n"},
  {"ShallowCopy", PyvtkImageData_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkImageData_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"GetArrayPointerForExtent", PyvtkImageData_GetArrayPointerForExtent, METH_VARARGS,
   "GetArrayPointerForExtent(self, array:vtkDataArray, extent:[int,\n    int, int, int, int, int]) -> Pointer\nC++: void *GetArrayPointerForExtent(vtkDataArray *array,\n    int extent[6])\n\nThese are convenience methods for getting a pointer from any\nfiled array.  It is a start at expanding image filters to process\nany array (not just scalars).\n"},
  {"GetArrayPointer", PyvtkImageData_GetArrayPointer, METH_VARARGS,
   "GetArrayPointer(self, array:vtkDataArray, coordinates:[int, int,\n    int]) -> Pointer\nC++: void *GetArrayPointer(vtkDataArray *array,\n    int coordinates[3])\n\n"},
  {"GetTupleIndex", PyvtkImageData_GetTupleIndex, METH_VARARGS,
   "GetTupleIndex(self, array:vtkDataArray, coordinates:[int, int,\n    int]) -> int\nC++: vtkIdType GetTupleIndex(vtkDataArray *array,\n    int coordinates[3])\n\nGiven a data array and a coordinate, return the index of the\ntuple in the array corresponding to that coordinate.\n\nThis method is analogous to GetArrayPointer(), but it conforms to\nthe API of vtkGenericDataArray.\n"},
  {"GetArrayIncrements", PyvtkImageData_GetArrayIncrements, METH_VARARGS,
   "GetArrayIncrements(self, array:vtkDataArray, increments:[int, int,\n     int]) -> None\nC++: void GetArrayIncrements(vtkDataArray *array,\n    vtkIdType increments[3])\n\nSince various arrays have different number of components, the\nwill have different increments.\n"},
  {"ComputeInternalExtent", PyvtkImageData_ComputeInternalExtent, METH_VARARGS,
   "ComputeInternalExtent(self, intExt:[int, ...], tgtExt:[int, ...],\n    bnds:[int, ...]) -> None\nC++: void ComputeInternalExtent(int *intExt, int *tgtExt,\n    int *bnds)\n\nGiven how many pixel are required on a side for boundary\nconditions (in bnds), the target extent to traverse, compute the\ninternal extent (the extent for this ImageData that does not\nsuffer from any boundary conditions) and place it in intExt\n"},
  {"GetExtentType", PyvtkImageData_GetExtentType, METH_VARARGS,
   "GetExtentType(self) -> int\nC++: int GetExtentType() override;\n\nThe extent type is a 3D extent\n"},
  {"GetData", PyvtkImageData_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkImageData\nC++: static vtkImageData *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkImageData\nC++: static vtkImageData *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageData_Doc =
  "vtkImageData - topologically and geometrically regular array of data\n\n"
  "Superclass: vtkDataSet\n\n"
  "vtkImageData is a data object that is a concrete implementation of\n"
  "vtkDataSet. vtkImageData represents a geometric structure that is a\n"
  "topological and geometrical regular array of points. Examples include\n"
  "volumes (voxel data) and pixmaps. This representation supports images\n"
  "up to three dimensions. The image may also be oriented (see the\n"
  "DirectionMatrices and related transformation methods). Note however,\n"
  "that not all filters support oriented images.\n\n"
  "@sa\n"
  "vtkImageTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkImageData", // tp_name
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
  PyvtkImageData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageData_StaticNew()
{
  return vtkImageData::New();
}

PyObject *PyvtkImageData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageData_Type, PyvtkImageData_Methods,
    "vtkImageData",
 &PyvtkImageData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageData", o) != 0)
  {
    Py_DECREF(o);
  }

}

