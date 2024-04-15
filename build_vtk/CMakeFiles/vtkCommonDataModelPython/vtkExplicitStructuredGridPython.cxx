// python wrapper for vtkExplicitStructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExplicitStructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExplicitStructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkExplicitStructuredGrid_ClassNew(); }

#ifndef DECLARED_PyvtkPointSet_ClassNew
extern "C" { PyObject *PyvtkPointSet_ClassNew(); }
#define DECLARED_PyvtkPointSet_ClassNew
#endif

static PyObject *
PyvtkExplicitStructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExplicitStructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExplicitStructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExplicitStructuredGrid *tempr = vtkExplicitStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExplicitStructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExplicitStructuredGrid::NewInstance());

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
PyvtkExplicitStructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExplicitStructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExplicitStructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkExplicitStructuredGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkExplicitStructuredGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0) :
      op->vtkExplicitStructuredGrid::GetCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkExplicitStructuredGrid_GetCell_s1(self, args);
    case 2:
      return PyvtkExplicitStructuredGrid_GetCell_s2(self, args);
    case 3:
      return PyvtkExplicitStructuredGrid_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetCellBounds(temp0, temp1);
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
PyvtkExplicitStructuredGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkExplicitStructuredGrid::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkExplicitStructuredGrid::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkExplicitStructuredGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetCellPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetCellPoints(temp0) :
      op->vtkExplicitStructuredGrid::GetCellPoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_GetCellPoints_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->GetCellPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExplicitStructuredGrid::GetCellPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2, size2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_GetCellPoints_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetCellPoints(temp0, temp1, temp2c, temp3);
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
PyvtkExplicitStructuredGrid_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExplicitStructuredGrid_GetCellPoints_s1(self, args);
    case 1:
      return PyvtkExplicitStructuredGrid_GetCellPoints_s2(self, args);
    case 3:
      return PyvtkExplicitStructuredGrid_GetCellPoints_s3(self, args);
    case 4:
      return PyvtkExplicitStructuredGrid_GetCellPoints_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetPointCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkExplicitStructuredGrid::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetCellNeighbors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_GetCellNeighbors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  long long temp0;
  const size_t size1 = 6;
  long long temp1[6];
  long long save1[6];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetCellNeighbors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExplicitStructuredGrid::GetCellNeighbors(temp0, temp1, temp2);
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

static PyMethodDef PyvtkExplicitStructuredGrid_GetCellNeighbors_Methods[] = {
  {"GetCellNeighbors", PyvtkExplicitStructuredGrid_GetCellNeighbors_s1, METH_VARARGS,
   "@kVV *vtkIdList *vtkIdList"},
  {"GetCellNeighbors", PyvtkExplicitStructuredGrid_GetCellNeighbors_s2, METH_VARARGS,
   "@kP|P *k *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExplicitStructuredGrid_GetCellNeighbors(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExplicitStructuredGrid_GetCellNeighbors_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExplicitStructuredGrid_GetCellNeighbors_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellNeighbors");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetDataDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataDimension() :
      op->vtkExplicitStructuredGrid::GetDataDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGrid::SetDimensions(temp0);
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
PyvtkExplicitStructuredGrid_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkExplicitStructuredGrid_SetDimensions_s1(self, args);
    case 1:
      return PyvtkExplicitStructuredGrid_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetDimensions(temp0);
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
PyvtkExplicitStructuredGrid_GetCellDims(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::GetCellDims(temp0);
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
PyvtkExplicitStructuredGrid_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkExplicitStructuredGrid::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::SetExtent(temp0);
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
PyvtkExplicitStructuredGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExplicitStructuredGrid_SetExtent_s1(self, args);
    case 1:
      return PyvtkExplicitStructuredGrid_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkExplicitStructuredGrid::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_SetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGrid::SetCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->GetCells() :
      op->vtkExplicitStructuredGrid::GetCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_BuildLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLinks();
    }
    else
    {
      op->vtkExplicitStructuredGrid::BuildLinks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_SetLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::SetLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLinks *tempr = (ap.IsBound() ?
      op->GetLinks() :
      op->vtkExplicitStructuredGrid::GetLinks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_ComputeCellStructuredCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellStructuredCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  long long temp0;
  int temp1;
  int temp2;
  int temp3;
  bool temp4 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->ComputeCellStructuredCoords(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkExplicitStructuredGrid::ComputeCellStructuredCoords(temp0, temp1, temp2, temp3, temp4);
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
PyvtkExplicitStructuredGrid_ComputeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  bool temp3 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    long long tempr = (ap.IsBound() ?
      op->ComputeCellId(temp0, temp1, temp2, temp3) :
      op->vtkExplicitStructuredGrid::ComputeCellId(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_ComputeFacesConnectivityFlagsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeFacesConnectivityFlagsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeFacesConnectivityFlagsArray();
    }
    else
    {
      op->vtkExplicitStructuredGrid::ComputeFacesConnectivityFlagsArray();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_SetFacesConnectivityFlagsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFacesConnectivityFlagsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFacesConnectivityFlagsArrayName(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGrid::SetFacesConnectivityFlagsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetFacesConnectivityFlagsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFacesConnectivityFlagsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFacesConnectivityFlagsArrayName() :
      op->vtkExplicitStructuredGrid::GetFacesConnectivityFlagsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_BlankCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::BlankCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_UnBlankCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnBlankCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::UnBlankCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_HasAnyBlankCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankCells() :
      op->vtkExplicitStructuredGrid::HasAnyBlankCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_IsCellVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsCellVisible(temp0) :
      op->vtkExplicitStructuredGrid::IsCellVisible(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_IsCellGhost(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsCellGhost");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->IsCellGhost(temp0) :
      op->vtkExplicitStructuredGrid::IsCellGhost(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_HasAnyGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyGhostCells() :
      op->vtkExplicitStructuredGrid::HasAnyGhostCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_Crop_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->vtkExplicitStructuredGrid::Crop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_Crop_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  vtkExplicitStructuredGrid *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkExplicitStructuredGrid") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Crop(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExplicitStructuredGrid::Crop(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_Crop(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkExplicitStructuredGrid_Crop_s1(self, args);
    case 3:
      return PyvtkExplicitStructuredGrid_Crop_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Crop");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkExplicitStructuredGrid *tempr = vtkExplicitStructuredGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGrid_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkExplicitStructuredGrid *tempr = vtkExplicitStructuredGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExplicitStructuredGrid_GetData_Methods[] = {
  {"GetData", PyvtkExplicitStructuredGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkExplicitStructuredGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExplicitStructuredGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExplicitStructuredGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkExplicitStructuredGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkExplicitStructuredGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_CheckAndReorderFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAndReorderFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckAndReorderFaces();
    }
    else
    {
      op->vtkExplicitStructuredGrid::CheckAndReorderFaces();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGrid_GenerateGhostArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GenerateGhostArray(temp0, temp1);
    }
    else
    {
      op->vtkExplicitStructuredGrid::GenerateGhostArray(temp0, temp1);
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
PyvtkExplicitStructuredGrid_GenerateGhostArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGrid *op = static_cast<vtkExplicitStructuredGrid *>(vp);

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
      op->GenerateGhostArray(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGrid::GenerateGhostArray(temp0);
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
PyvtkExplicitStructuredGrid_GenerateGhostArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkExplicitStructuredGrid_GenerateGhostArray_s1(self, args);
    case 1:
      return PyvtkExplicitStructuredGrid_GenerateGhostArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateGhostArray");
  return nullptr;
}

static PyMethodDef PyvtkExplicitStructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkExplicitStructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExplicitStructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExplicitStructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExplicitStructuredGrid\nC++: static vtkExplicitStructuredGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExplicitStructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExplicitStructuredGrid\nC++: vtkExplicitStructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExplicitStructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExplicitStructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkExplicitStructuredGrid_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"Initialize", PyvtkExplicitStructuredGrid_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"GetCell", PyvtkExplicitStructuredGrid_GetCell, METH_VARARGS,
   "GetCell(self, cellId:int) -> vtkCell\nC++: vtkCell *GetCell(vtkIdType cellId) override;\nGetCell(self, cellId:int, cell:vtkGenericCell) -> None\nC++: void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n    override;\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\n\nThis method always return a `vtkEmptyCell`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellBounds", PyvtkExplicitStructuredGrid_GetCellBounds, METH_VARARGS,
   "GetCellBounds(self, cellId:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetCellBounds(vtkIdType cellId, double bounds[6])\n    override;\n\nGet the bounds of the cell with cellId such that: 0 <= cellId <\nNumberOfCells. A subclass may be able to determine the bounds of\ncell without using an expensive GetCell() method. A default\nimplementation is provided that actually uses a GetCell() call. \nThis is to ensure the method is available to all datasets. \nSubclasses should override this method to provide an efficient\nimplementation. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellType", PyvtkExplicitStructuredGrid_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: int GetCellType(vtkIdType cellId) override;\n\nThis method always returns `VTK_EMPTY_CELL`, as there is no cell\nin a `vtkPointSet`.\n"},
  {"GetCellSize", PyvtkExplicitStructuredGrid_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: vtkIdType GetCellSize(vtkIdType cellId) override;\n\nThis method always returns 1, as all cells are point in a pure\n`vtkPointSet`.\n"},
  {"GetNumberOfCells", PyvtkExplicitStructuredGrid_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells() override;\n\nThis method always returns 0, as there are no cells in a\n`vtkPointSet`.\n"},
  {"GetCellPoints", PyvtkExplicitStructuredGrid_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, cellId:int, ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds)\n    override;\nGetCellPoints(self, cellId:int) -> Pointer\nC++: vtkIdType *GetCellPoints(vtkIdType cellId)\nGetCellPoints(self, cellId:int, npts:int, pts:[int, ...]) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n    vtkIdType *&pts)\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...),\n    ptIds:vtkIdList) -> None\nC++: void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n    vtkIdType const *&pts, vtkIdList *ptIds) override;\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetPointCells", PyvtkExplicitStructuredGrid_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: void GetPointCells(vtkIdType ptId, vtkIdList *cellIds)\n    override;\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetMaxCellSize", PyvtkExplicitStructuredGrid_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize() override;\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nTHIS METHOD IS THREAD SAFE\n"},
  {"GetCellNeighbors", PyvtkExplicitStructuredGrid_GetCellNeighbors, METH_VARARGS,
   "GetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList) -> None\nC++: void GetCellNeighbors(vtkIdType cellId, vtkIdList *ptIds,\n    vtkIdList *cellIds) override;\nGetCellNeighbors(self, cellId:int, neighbors:[int, int, int, int,\n    int, int], wholeExtent:[int, ...]=...) -> None\nC++: void GetCellNeighbors(vtkIdType cellId,\n    vtkIdType neighbors[6], int *wholeExtent=nullptr)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). Note that the list\nconsists of only cells that use ALL the points provided. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {"CopyStructure", PyvtkExplicitStructuredGrid_CopyStructure, METH_VARARGS,
   "CopyStructure(self, ds:vtkDataSet) -> None\nC++: void CopyStructure(vtkDataSet *ds) override;\n\nCopy the geometric and topological structure of an input poly\ndata object.\n"},
  {"ShallowCopy", PyvtkExplicitStructuredGrid_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkExplicitStructuredGrid_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"GetDataDimension", PyvtkExplicitStructuredGrid_GetDataDimension, METH_VARARGS,
   "GetDataDimension(self) -> int\nC++: int GetDataDimension()\n\nReturn the dimensionality of the data.\n"},
  {"SetDimensions", PyvtkExplicitStructuredGrid_SetDimensions, METH_VARARGS,
   "SetDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetDimensions(int i, int j, int k)\nSetDimensions(self, dim:[int, int, int]) -> None\nC++: void SetDimensions(int dim[3])\n\nSet/Get the dimensions of this structured dataset in term of\nnumber of points along each direction. This is just a convenience\nmethod which calls Set/GetExtent internally.\n"},
  {"GetDimensions", PyvtkExplicitStructuredGrid_GetDimensions, METH_VARARGS,
   "GetDimensions(self, dim:[int, int, int]) -> None\nC++: void GetDimensions(int dim[3])\n\n"},
  {"GetCellDims", PyvtkExplicitStructuredGrid_GetCellDims, METH_VARARGS,
   "GetCellDims(self, cellDims:[int, int, int]) -> None\nC++: void GetCellDims(int cellDims[3])\n\nComputes the cell dimensions according to internal point\ndimensions. The total number of cells can be achieved simply by\ncellDims[0] * cellDims[1] * cellDims[2].\n"},
  {"GetExtentType", PyvtkExplicitStructuredGrid_GetExtentType, METH_VARARGS,
   "GetExtentType(self) -> int\nC++: int GetExtentType() override;\n\nThe extent type is a 3D extent\n"},
  {"SetExtent", PyvtkExplicitStructuredGrid_SetExtent, METH_VARARGS,
   "SetExtent(self, x0:int, x1:int, y0:int, y1:int, z0:int, z1:int)\n    -> None\nC++: void SetExtent(int x0, int x1, int y0, int y1, int z0,\n    int z1)\nSetExtent(self, extent:[int, int, int, int, int, int]) -> None\nC++: void SetExtent(int extent[6])\n\nSet/Get the extent of this structured dataset in term of number\nof points along each direction. Setting the extent will reset the\ninternal CellArray and Links and a correctly sized cell array\nwill be created. The Extent is stored  in the order (X, Y, Z).\n"},
  {"GetExtent", PyvtkExplicitStructuredGrid_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\n"},
  {"SetCells", PyvtkExplicitStructuredGrid_SetCells, METH_VARARGS,
   "SetCells(self, _arg:vtkCellArray) -> None\nC++: virtual void SetCells(vtkCellArray *_arg)\n\nSet/Get the cell array defining hexahedron.\n"},
  {"GetCells", PyvtkExplicitStructuredGrid_GetCells, METH_VARARGS,
   "GetCells(self) -> vtkCellArray\nC++: virtual vtkCellArray *GetCells()\n\n"},
  {"BuildLinks", PyvtkExplicitStructuredGrid_BuildLinks, METH_VARARGS,
   "BuildLinks(self) -> None\nC++: void BuildLinks()\n\nBuild topological links from points to lists of cells that use\neach point. See vtkAbstractCellLinks for more information.\n"},
  {"SetLinks", PyvtkExplicitStructuredGrid_SetLinks, METH_VARARGS,
   "SetLinks(self, _arg:vtkAbstractCellLinks) -> None\nC++: virtual void SetLinks(vtkAbstractCellLinks *_arg)\n\nSet/Get the links that you created possibly without using\nBuildLinks.\n"},
  {"GetLinks", PyvtkExplicitStructuredGrid_GetLinks, METH_VARARGS,
   "GetLinks(self) -> vtkAbstractCellLinks\nC++: virtual vtkAbstractCellLinks *GetLinks()\n\n"},
  {"ComputeCellStructuredCoords", PyvtkExplicitStructuredGrid_ComputeCellStructuredCoords, METH_VARARGS,
   "ComputeCellStructuredCoords(self, cellId:int, i:int, j:int, k:int,\n     adjustForExtent:bool=True) -> None\nC++: void ComputeCellStructuredCoords(vtkIdType cellId, int &i,\n    int &j, int &k, bool adjustForExtent=true)\n\nGiven a cellId, get the structured coordinates (i-j-k). If\nadjustForExtent is true, (i,j,k) is computed as a position\nrelative to the beginning of the extent. If adjustForExtent is\nfalse, (i,j,k) is computed regardless of the extent beginning.\nThe default adjustForExtent is true.\n"},
  {"ComputeCellId", PyvtkExplicitStructuredGrid_ComputeCellId, METH_VARARGS,
   "ComputeCellId(self, i:int, j:int, k:int,\n    adjustForExtent:bool=True) -> int\nC++: vtkIdType ComputeCellId(int i, int j, int k,\n    bool adjustForExtent=true)\n\nGiven a location in structured coordinates (i-j-k), return the\ncell id. If adjustForExtent is true, (i,j,k) is interpreted as a\nposition relative to the beginning of the extent. If\nadjustForExtent is false, (i,j,k) is interpreted literally and\nthe cell id is returned regardless of the extent beginning. The\ndefault adjustForExtent is true.\n"},
  {"ComputeFacesConnectivityFlagsArray", PyvtkExplicitStructuredGrid_ComputeFacesConnectivityFlagsArray, METH_VARARGS,
   "ComputeFacesConnectivityFlagsArray(self) -> None\nC++: void ComputeFacesConnectivityFlagsArray()\n\nCompute the faces connectivity flags array. This method should be\ncalled after the construction if the ESG is to be used by other\nfilters.\n"},
  {"SetFacesConnectivityFlagsArrayName", PyvtkExplicitStructuredGrid_SetFacesConnectivityFlagsArrayName, METH_VARARGS,
   "SetFacesConnectivityFlagsArrayName(self, _arg:str) -> None\nC++: virtual void SetFacesConnectivityFlagsArrayName(\n    const char *_arg)\n\nSet/Get the name of the faces connectivity flags array.\n"},
  {"GetFacesConnectivityFlagsArrayName", PyvtkExplicitStructuredGrid_GetFacesConnectivityFlagsArrayName, METH_VARARGS,
   "GetFacesConnectivityFlagsArrayName(self) -> str\nC++: virtual char *GetFacesConnectivityFlagsArrayName()\n\n"},
  {"BlankCell", PyvtkExplicitStructuredGrid_BlankCell, METH_VARARGS,
   "BlankCell(self, cellId:int) -> None\nC++: void BlankCell(vtkIdType cellId)\n\nMethods for supporting blanking of cells. Blanking turns on or\noff cells in the structured grid. These methods should be called\nonly after the dimensions of the grid are set.\n"},
  {"UnBlankCell", PyvtkExplicitStructuredGrid_UnBlankCell, METH_VARARGS,
   "UnBlankCell(self, cellId:int) -> None\nC++: void UnBlankCell(vtkIdType cellId)\n\n"},
  {"HasAnyBlankCells", PyvtkExplicitStructuredGrid_HasAnyBlankCells, METH_VARARGS,
   "HasAnyBlankCells(self) -> bool\nC++: bool HasAnyBlankCells() override;\n\nReturns true if one or more cells are blanked, false otherwise.\n"},
  {"IsCellVisible", PyvtkExplicitStructuredGrid_IsCellVisible, METH_VARARGS,
   "IsCellVisible(self, cellId:int) -> int\nC++: unsigned char IsCellVisible(vtkIdType cellId)\n\nReturn non-zero value if specified cell is visible. These methods\nshould be called only after the dimensions of the grid are set.\n"},
  {"IsCellGhost", PyvtkExplicitStructuredGrid_IsCellGhost, METH_VARARGS,
   "IsCellGhost(self, cellId:int) -> int\nC++: unsigned char IsCellGhost(vtkIdType cellId)\n\nReturn non-zero value if specified cell is a ghost cell. These\nmethods should be called only after the dimensions of the grid\nare set.\n"},
  {"HasAnyGhostCells", PyvtkExplicitStructuredGrid_HasAnyGhostCells, METH_VARARGS,
   "HasAnyGhostCells(self) -> bool\nC++: bool HasAnyGhostCells()\n\nReturns true if one or more cells are ghost, false otherwise.\n"},
  {"Crop", PyvtkExplicitStructuredGrid_Crop, METH_VARARGS,
   "Crop(self, updateExtent:(int, ...)) -> None\nC++: void Crop(const int *updateExtent) override;\nCrop(self, input:vtkExplicitStructuredGrid, updateExtent:(int,\n    ...), generateOriginalCellIds:bool) -> None\nC++: virtual void Crop(vtkExplicitStructuredGrid *input,\n    const int *updateExtent, bool generateOriginalCellIds)\n\nReallocates and copies to set the Extent to the UpdateExtent.\nThis is used internally when the exact extent is requested, and\nthe source generated more than the update extent.\n"},
  {"GetData", PyvtkExplicitStructuredGrid_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkExplicitStructuredGrid\nC++: static vtkExplicitStructuredGrid *GetData(\n    vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0)\n    -> vtkExplicitStructuredGrid\nC++: static vtkExplicitStructuredGrid *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"GetActualMemorySize", PyvtkExplicitStructuredGrid_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kilobytes. This number is\nvalid only after the pipeline has updated. The memory size\nreturned is guaranteed to be greater than or equal to the memory\nrequired to represent the data (e.g., extra space in arrays, etc.\nare not included in the return value). THIS METHOD IS THREAD\nSAFE.\n"},
  {"CheckAndReorderFaces", PyvtkExplicitStructuredGrid_CheckAndReorderFaces, METH_VARARGS,
   "CheckAndReorderFaces(self) -> None\nC++: void CheckAndReorderFaces()\n\nCheck faces are numbered correctly regarding ijk numbering If not\nthis will reorganize cell points order so face order is valid.\nThis is made in two pass, first it check that faces are on the\ncorrect axis and corrects it Then it check if faces are mirrored\nand corrects it. Make sure cells and extent have been set before\ncalling this method and recompute face connectivity afterwards.\n"},
  {"GenerateGhostArray", PyvtkExplicitStructuredGrid_GenerateGhostArray, METH_VARARGS,
   "GenerateGhostArray(self, zeroExt:[int, int, int, int, int, int],\n    cellOnly:bool) -> None\nC++: void GenerateGhostArray(int zeroExt[6], bool cellOnly)\n    override;\nGenerateGhostArray(self, zeroExt:[int, int, int, int, int, int])\n    -> None\nC++: virtual void GenerateGhostArray(int zeroExt[6])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExplicitStructuredGrid_Doc =
  "vtkExplicitStructuredGrid - structured grid with explicit topology\nand geometry\n\n"
  "Superclass: vtkPointSet\n\n"
  "vtkExplicitStructuredGrid is a data object that is a concrete\n"
  "implementation of vtkDataSet. vtkExplicitStructuredGrid represents a\n"
  "geometric structure that is a topologically regular array of\n"
  "hexahedron. The topology is that of a cube that has been subdivided\n"
  "into a regular array of smaller cubes. Each cell can be addressed\n"
  "with i-j-k indices, however neighbor hexahedrons does not necessarily\n"
  "share a face and hexahedron can be blanked (turned-off).\n\n"
  "Like unstructured grid, vtkExplicitStructuredGrid has explicit point\n"
  "coordinates and cell to point indexing. Unlike unstructured grid,\n"
  "vtkExplicitStructuredGrid does not keep a cell type list as all\n"
  "visible cells are known to be hexahedra. vtkExplicitStructuredGrid\n"
  "can take advantage of its layout to perform operations based on the\n"
  "i, j, k parameters, similar to structured grid. This makes some\n"
  "operations faster on this class, without losing the flexibility of\n"
  "the cell -> points mapping. The most common use of this class would\n"
  "be in situations where you have all hexahedra but the points used by\n"
  "the cells are not exactly defined by the i, j, k parameters. One\n"
  "example of this is a structured grid with a half voxel shift\n"
  "occurring in the middle of it such as with a geologic fault.\n\n"
  "The order and number of points is arbitrary. The order and number of\n"
  "cells must match that specified by the dimensions of the grid minus\n"
  "1, because in vtk structured datasets the dimensions correspond to\n"
  "the points. The cells order increases in i fastest (from 0 <= i <=\n"
  "dims[0] - 2), then j (0 <= j <= dims[1] - 2), then k ( 0 <= k <=\n"
  "dims[2] - 2) where dims[] are the dimensions of the grid in the i-j-k\n"
  "topological directions. The number of cells is (dims[0] - 1) *\n"
  "(dims[1] - 1) * (dims[2] - 1).\n\n"
  "In order for an ESG to be usable by most other ESG specific filters,\n"
  "it is needed to call the ComputeFacesConnectivityFlagsArray method.\n"
  "It is also recommended to call CheckAndReorderFaces method to fix any\n"
  "faces issues in the dataset.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExplicitStructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkExplicitStructuredGrid", // tp_name
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
  PyvtkExplicitStructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExplicitStructuredGrid_StaticNew()
{
  return vtkExplicitStructuredGrid::New();
}

PyObject *PyvtkExplicitStructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExplicitStructuredGrid_Type, PyvtkExplicitStructuredGrid_Methods,
    "vtkExplicitStructuredGrid",
 &PyvtkExplicitStructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExplicitStructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExplicitStructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExplicitStructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

