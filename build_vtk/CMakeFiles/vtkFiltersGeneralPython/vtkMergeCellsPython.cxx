// python wrapper for vtkMergeCells
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMergeCells.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeCells(PyObject *dict); }
extern "C" { PyObject *PyvtkMergeCells_ClassNew(); }


static PyObject *
PyvtkMergeCells_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeCells::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeCells::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeCells *tempr = vtkMergeCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeCells *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeCells::NewInstance());

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
PyvtkMergeCells_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMergeCells::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMergeCells::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkUnstructuredGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
  {
    if (ap.IsBound())
    {
      op->SetUnstructuredGrid(temp0);
    }
    else
    {
      op->vtkMergeCells::SetUnstructuredGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGrid() :
      op->vtkMergeCells::GetUnstructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalNumberOfCells(temp0);
    }
    else
    {
      op->vtkMergeCells::SetTotalNumberOfCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTotalNumberOfCells() :
      op->vtkMergeCells::GetTotalNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalNumberOfPoints(temp0);
    }
    else
    {
      op->vtkMergeCells::SetTotalNumberOfPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTotalNumberOfPoints() :
      op->vtkMergeCells::GetTotalNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUseGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseGlobalIds(temp0);
    }
    else
    {
      op->vtkMergeCells::SetUseGlobalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUseGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseGlobalIds() :
      op->vtkMergeCells::GetUseGlobalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_UseGlobalIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGlobalIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGlobalIdsOn();
    }
    else
    {
      op->vtkMergeCells::UseGlobalIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_UseGlobalIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGlobalIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGlobalIdsOff();
    }
    else
    {
      op->vtkMergeCells::UseGlobalIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetPointMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMergeTolerance(temp0);
    }
    else
    {
      op->vtkMergeCells::SetPointMergeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPointMergeToleranceMinValue() :
      op->vtkMergeCells::GetPointMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPointMergeToleranceMaxValue() :
      op->vtkMergeCells::GetPointMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetPointMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPointMergeTolerance() :
      op->vtkMergeCells::GetPointMergeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetUseGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseGlobalCellIds(temp0);
    }
    else
    {
      op->vtkMergeCells::SetUseGlobalCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetUseGlobalCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseGlobalCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseGlobalCellIds() :
      op->vtkMergeCells::GetUseGlobalCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_UseGlobalCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGlobalCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGlobalCellIdsOn();
    }
    else
    {
      op->vtkMergeCells::UseGlobalCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_UseGlobalCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseGlobalCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseGlobalCellIdsOff();
    }
    else
    {
      op->vtkMergeCells::UseGlobalCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeDuplicatePoints(temp0);
    }
    else
    {
      op->vtkMergeCells::SetMergeDuplicatePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetMergeDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergeDuplicatePoints() :
      op->vtkMergeCells::GetMergeDuplicatePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDuplicatePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeDuplicatePointsOn();
    }
    else
    {
      op->vtkMergeCells::MergeDuplicatePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDuplicatePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDuplicatePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergeDuplicatePointsOff();
    }
    else
    {
      op->vtkMergeCells::MergeDuplicatePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_InvalidateCachedLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateCachedLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateCachedLocator();
    }
    else
    {
      op->vtkMergeCells::InvalidateCachedLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetTotalNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTotalNumberOfDataSets(temp0);
    }
    else
    {
      op->vtkMergeCells::SetTotalNumberOfDataSets(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetTotalNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTotalNumberOfDataSets() :
      op->vtkMergeCells::GetTotalNumberOfDataSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_MergeDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergeDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    int tempr = (ap.IsBound() ?
      op->MergeDataSet(temp0) :
      op->vtkMergeCells::MergeDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

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
      op->vtkMergeCells::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkMergeCells::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeCells_Finish(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finish");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeCells *op = static_cast<vtkMergeCells *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finish();
    }
    else
    {
      op->vtkMergeCells::Finish();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeCells_Methods[] = {
  {"IsTypeOf", PyvtkMergeCells_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeCells_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeCells_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMergeCells\nC++: static vtkMergeCells *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeCells_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMergeCells\nC++: vtkMergeCells *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMergeCells_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMergeCells_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetUnstructuredGrid", PyvtkMergeCells_SetUnstructuredGrid, METH_VARARGS,
   "SetUnstructuredGrid(self, __a:vtkUnstructuredGrid) -> None\nC++: virtual void SetUnstructuredGrid(vtkUnstructuredGrid *)\n\nSet the vtkUnstructuredGrid object that will become the union of\nthe DataSets specified in MergeDataSet calls. vtkMergeCells\nassumes this grid is empty at first.\n"},
  {"GetUnstructuredGrid", PyvtkMergeCells_GetUnstructuredGrid, METH_VARARGS,
   "GetUnstructuredGrid(self) -> vtkUnstructuredGrid\nC++: virtual vtkUnstructuredGrid *GetUnstructuredGrid()\n\n"},
  {"SetTotalNumberOfCells", PyvtkMergeCells_SetTotalNumberOfCells, METH_VARARGS,
   "SetTotalNumberOfCells(self, _arg:int) -> None\nC++: virtual void SetTotalNumberOfCells(vtkIdType _arg)\n\nSpecify the total number of cells in the final\nvtkUnstructuredGrid. Make this call before any call to\nMergeDataSet().\n"},
  {"GetTotalNumberOfCells", PyvtkMergeCells_GetTotalNumberOfCells, METH_VARARGS,
   "GetTotalNumberOfCells(self) -> int\nC++: virtual vtkIdType GetTotalNumberOfCells()\n\n"},
  {"SetTotalNumberOfPoints", PyvtkMergeCells_SetTotalNumberOfPoints, METH_VARARGS,
   "SetTotalNumberOfPoints(self, _arg:int) -> None\nC++: virtual void SetTotalNumberOfPoints(vtkIdType _arg)\n\nSpecify the total number of points in the final\nvtkUnstructuredGrid Make this call before any call to\nMergeDataSet().  This is an upper bound, since some points may be\nduplicates.\n"},
  {"GetTotalNumberOfPoints", PyvtkMergeCells_GetTotalNumberOfPoints, METH_VARARGS,
   "GetTotalNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetTotalNumberOfPoints()\n\n"},
  {"SetUseGlobalIds", PyvtkMergeCells_SetUseGlobalIds, METH_VARARGS,
   "SetUseGlobalIds(self, _arg:int) -> None\nC++: virtual void SetUseGlobalIds(int _arg)\n\nvtkMergeCells attempts eliminate duplicate points when merging\ndata sets.  This is done most efficiently if a global point ID\nfield array is available.  Set the name of the point array if you\nhave one.\n"},
  {"GetUseGlobalIds", PyvtkMergeCells_GetUseGlobalIds, METH_VARARGS,
   "GetUseGlobalIds(self) -> int\nC++: virtual int GetUseGlobalIds()\n\n"},
  {"UseGlobalIdsOn", PyvtkMergeCells_UseGlobalIdsOn, METH_VARARGS,
   "UseGlobalIdsOn(self) -> None\nC++: virtual void UseGlobalIdsOn()\n\n"},
  {"UseGlobalIdsOff", PyvtkMergeCells_UseGlobalIdsOff, METH_VARARGS,
   "UseGlobalIdsOff(self) -> None\nC++: virtual void UseGlobalIdsOff()\n\n"},
  {"SetPointMergeTolerance", PyvtkMergeCells_SetPointMergeTolerance, METH_VARARGS,
   "SetPointMergeTolerance(self, _arg:float) -> None\nC++: virtual void SetPointMergeTolerance(double _arg)\n\nvtkMergeCells attempts eliminate duplicate points when merging\ndata sets.  If no global point ID field array name is provided,\nit will use a point locator to find duplicate points.  You can\nset a tolerance for that locator here.  The default tolerance is\n10e-4.\n"},
  {"GetPointMergeToleranceMinValue", PyvtkMergeCells_GetPointMergeToleranceMinValue, METH_VARARGS,
   "GetPointMergeToleranceMinValue(self) -> float\nC++: virtual double GetPointMergeToleranceMinValue()\n\n"},
  {"GetPointMergeToleranceMaxValue", PyvtkMergeCells_GetPointMergeToleranceMaxValue, METH_VARARGS,
   "GetPointMergeToleranceMaxValue(self) -> float\nC++: virtual double GetPointMergeToleranceMaxValue()\n\n"},
  {"GetPointMergeTolerance", PyvtkMergeCells_GetPointMergeTolerance, METH_VARARGS,
   "GetPointMergeTolerance(self) -> float\nC++: virtual double GetPointMergeTolerance()\n\n"},
  {"SetUseGlobalCellIds", PyvtkMergeCells_SetUseGlobalCellIds, METH_VARARGS,
   "SetUseGlobalCellIds(self, _arg:int) -> None\nC++: virtual void SetUseGlobalCellIds(int _arg)\n\nvtkMergeCells will detect and filter out duplicate cells if you\nprovide it the name of a global cell ID array.\n"},
  {"GetUseGlobalCellIds", PyvtkMergeCells_GetUseGlobalCellIds, METH_VARARGS,
   "GetUseGlobalCellIds(self) -> int\nC++: virtual int GetUseGlobalCellIds()\n\n"},
  {"UseGlobalCellIdsOn", PyvtkMergeCells_UseGlobalCellIdsOn, METH_VARARGS,
   "UseGlobalCellIdsOn(self) -> None\nC++: virtual void UseGlobalCellIdsOn()\n\n"},
  {"UseGlobalCellIdsOff", PyvtkMergeCells_UseGlobalCellIdsOff, METH_VARARGS,
   "UseGlobalCellIdsOff(self) -> None\nC++: virtual void UseGlobalCellIdsOff()\n\n"},
  {"SetMergeDuplicatePoints", PyvtkMergeCells_SetMergeDuplicatePoints, METH_VARARGS,
   "SetMergeDuplicatePoints(self, _arg:bool) -> None\nC++: virtual void SetMergeDuplicatePoints(bool _arg)\n\nvtkMergeCells attempts eliminate duplicate points when merging\ndata sets.  If for some reason you don't want it to do this, than\nMergeDuplicatePointsOff().\n"},
  {"GetMergeDuplicatePoints", PyvtkMergeCells_GetMergeDuplicatePoints, METH_VARARGS,
   "GetMergeDuplicatePoints(self) -> bool\nC++: virtual bool GetMergeDuplicatePoints()\n\n"},
  {"MergeDuplicatePointsOn", PyvtkMergeCells_MergeDuplicatePointsOn, METH_VARARGS,
   "MergeDuplicatePointsOn(self) -> None\nC++: virtual void MergeDuplicatePointsOn()\n\n"},
  {"MergeDuplicatePointsOff", PyvtkMergeCells_MergeDuplicatePointsOff, METH_VARARGS,
   "MergeDuplicatePointsOff(self) -> None\nC++: virtual void MergeDuplicatePointsOff()\n\n"},
  {"InvalidateCachedLocator", PyvtkMergeCells_InvalidateCachedLocator, METH_VARARGS,
   "InvalidateCachedLocator(self) -> None\nC++: void InvalidateCachedLocator()\n\nClear the Locator and set it to nullptr.\n"},
  {"SetTotalNumberOfDataSets", PyvtkMergeCells_SetTotalNumberOfDataSets, METH_VARARGS,
   "SetTotalNumberOfDataSets(self, _arg:int) -> None\nC++: virtual void SetTotalNumberOfDataSets(int _arg)\n\nWe need to know the number of different data sets that will be\nmerged into one so we can pre-allocate some arrays. This can be\nan upper bound, not necessarily exact.\n"},
  {"GetTotalNumberOfDataSets", PyvtkMergeCells_GetTotalNumberOfDataSets, METH_VARARGS,
   "GetTotalNumberOfDataSets(self) -> int\nC++: virtual int GetTotalNumberOfDataSets()\n\n"},
  {"MergeDataSet", PyvtkMergeCells_MergeDataSet, METH_VARARGS,
   "MergeDataSet(self, set:vtkDataSet) -> int\nC++: int MergeDataSet(vtkDataSet *set)\n\nProvide a DataSet to be merged in to the final UnstructuredGrid.\nThis call returns after the merge has completed.  Be sure to call\nSetTotalNumberOfCells, SetTotalNumberOfPoints, and\nSetTotalNumberOfDataSets before making this call.  Return 0 if\nOK, -1 if error.\n"},
  {"SetOutputPointsPrecision", PyvtkMergeCells_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkMergeCells_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"Finish", PyvtkMergeCells_Finish, METH_VARARGS,
   "Finish(self) -> None\nC++: void Finish()\n\nCall Finish() after merging last DataSet to free unneeded memory\nand to make sure the ugrid's GetNumberOfPoints() reflects the\nactual number of points set, not the number allocated.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMergeCells_Doc =
  "vtkMergeCells - merges any number of vtkDataSets back into a single\n  vtkUnstructuredGrid\n\n"
  "Superclass: vtkObject\n\n"
  "Designed to work with distributed vtkDataSets, this class will take\n"
  "   vtkDataSets and merge them back into a single vtkUnstructuredGrid.\n\n\n"
  "   The vtkPoints object of the unstructured grid will have data type\n"
  "   VTK_FLOAT if input is not of type vtkPointSet, otherwise it will\n"
  "have same\n"
  "   data type than the input point set.\n\n\n"
  "   It is assumed the different DataSets have the same field arrays. \n"
  "If\n"
  "   the name of a global point ID array is provided, this class will\n"
  "   refrain from including duplicate points in the merged Ugrid.  This\n"
  "   class differs from vtkAppendFilter in these ways: (1) it uses less\n"
  "   memory than that class (which uses memory equal to twice the size\n"
  "   of the final Ugrid) but requires that you know the size of the\n"
  "   final Ugrid in advance (2) this class assumes the individual\n"
  "DataSets have\n"
  "   the same field arrays, while vtkAppendFilter intersects the field\n"
  "   arrays (3) this class knows duplicate points may be appearing in\n"
  "   the DataSets and can filter those out, (4) this class is not a\n"
  "filter.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMergeCells_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkMergeCells", // tp_name
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
  PyvtkMergeCells_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeCells_StaticNew()
{
  return vtkMergeCells::New();
}

PyObject *PyvtkMergeCells_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMergeCells_Type, PyvtkMergeCells_Methods,
    "vtkMergeCells",
 &PyvtkMergeCells_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergeCells(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeCells_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeCells", o) != 0)
  {
    Py_DECREF(o);
  }

}

