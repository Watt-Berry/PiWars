// python wrapper for vtkResampleWithDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResampleWithDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResampleWithDataSet(PyObject *dict); }
extern "C" { PyObject *PyvtkResampleWithDataSet_ClassNew(); }


static PyObject *
PyvtkResampleWithDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResampleWithDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResampleWithDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResampleWithDataSet *tempr = vtkResampleWithDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResampleWithDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResampleWithDataSet::NewInstance());

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
PyvtkResampleWithDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResampleWithDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResampleWithDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCategoricalData(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetCategoricalData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCategoricalData() :
      op->vtkResampleWithDataSet::GetCategoricalData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassCellArrays(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetPassCellArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetPassCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassCellArrays() :
      op->vtkResampleWithDataSet::GetPassCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassCellArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOn();
    }
    else
    {
      op->vtkResampleWithDataSet::PassCellArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassCellArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassCellArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassCellArraysOff();
    }
    else
    {
      op->vtkResampleWithDataSet::PassCellArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointArrays(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetPassPointArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetPassPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPointArrays() :
      op->vtkResampleWithDataSet::GetPassPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassPointArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOn();
    }
    else
    {
      op->vtkResampleWithDataSet::PassPointArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassPointArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointArraysOff();
    }
    else
    {
      op->vtkResampleWithDataSet::PassPointArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassFieldArrays(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetPassFieldArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetPassFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassFieldArrays() :
      op->vtkResampleWithDataSet::GetPassFieldArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassFieldArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOn();
    }
    else
    {
      op->vtkResampleWithDataSet::PassFieldArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassFieldArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassFieldArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassFieldArraysOff();
    }
    else
    {
      op->vtkResampleWithDataSet::PassFieldArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetPassPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPartialArrays(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetPassPartialArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetPassPartialArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPartialArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPartialArrays() :
      op->vtkResampleWithDataSet::GetPassPartialArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassPartialArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPartialArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPartialArraysOn();
    }
    else
    {
      op->vtkResampleWithDataSet::PassPartialArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_PassPartialArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPartialArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPartialArraysOff();
    }
    else
    {
      op->vtkResampleWithDataSet::PassPartialArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkResampleWithDataSet::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeTolerance(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetComputeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetComputeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeTolerance() :
      op->vtkResampleWithDataSet::GetComputeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_ComputeToleranceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeToleranceOn();
    }
    else
    {
      op->vtkResampleWithDataSet::ComputeToleranceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_ComputeToleranceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeToleranceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeToleranceOff();
    }
    else
    {
      op->vtkResampleWithDataSet::ComputeToleranceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetMarkBlankPointsAndCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkBlankPointsAndCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkBlankPointsAndCells(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetMarkBlankPointsAndCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetMarkBlankPointsAndCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkBlankPointsAndCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMarkBlankPointsAndCells() :
      op->vtkResampleWithDataSet::GetMarkBlankPointsAndCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_MarkBlankPointsAndCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkBlankPointsAndCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkBlankPointsAndCellsOn();
    }
    else
    {
      op->vtkResampleWithDataSet::MarkBlankPointsAndCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_MarkBlankPointsAndCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MarkBlankPointsAndCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MarkBlankPointsAndCellsOff();
    }
    else
    {
      op->vtkResampleWithDataSet::MarkBlankPointsAndCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetSnapToCellWithClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToCellWithClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToCellWithClosestPoint(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetSnapToCellWithClosestPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetSnapToCellWithClosestPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToCellWithClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSnapToCellWithClosestPoint() :
      op->vtkResampleWithDataSet::GetSnapToCellWithClosestPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SnapToCellWithClosestPointOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToCellWithClosestPointOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToCellWithClosestPointOn();
    }
    else
    {
      op->vtkResampleWithDataSet::SnapToCellWithClosestPointOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SnapToCellWithClosestPointOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToCellWithClosestPointOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToCellWithClosestPointOff();
    }
    else
    {
      op->vtkResampleWithDataSet::SnapToCellWithClosestPointOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_SetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetCellLocatorPrototype(temp0);
    }
    else
    {
      op->vtkResampleWithDataSet::SetCellLocatorPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetCellLocatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetCellLocatorPrototype() :
      op->vtkResampleWithDataSet::GetCellLocatorPrototype());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleWithDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleWithDataSet *op = static_cast<vtkResampleWithDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResampleWithDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResampleWithDataSet_Methods[] = {
  {"IsTypeOf", PyvtkResampleWithDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResampleWithDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResampleWithDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResampleWithDataSet\nC++: static vtkResampleWithDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResampleWithDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResampleWithDataSet\nC++: vtkResampleWithDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResampleWithDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResampleWithDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceData", PyvtkResampleWithDataSet_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkDataObject) -> None\nC++: void SetSourceData(vtkDataObject *source)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"SetSourceConnection", PyvtkResampleWithDataSet_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the data set that will be probed at the input points. The\nInput gives the geometry (the points and cells) for the output,\nwhile the Source is probed (interpolated) to generate the\nscalars, vectors, etc. for the output points based on the point\nlocations.\n"},
  {"SetCategoricalData", PyvtkResampleWithDataSet_SetCategoricalData, METH_VARARGS,
   "SetCategoricalData(self, arg:bool) -> None\nC++: void SetCategoricalData(bool arg)\n\nControl whether the source point data is to be treated as\ncategorical. If the data is categorical, then the resultant data\nwill be determined by a nearest neighbor interpolation scheme.\n"},
  {"GetCategoricalData", PyvtkResampleWithDataSet_GetCategoricalData, METH_VARARGS,
   "GetCategoricalData(self) -> bool\nC++: bool GetCategoricalData()\n\n"},
  {"SetPassCellArrays", PyvtkResampleWithDataSet_SetPassCellArrays, METH_VARARGS,
   "SetPassCellArrays(self, arg:bool) -> None\nC++: void SetPassCellArrays(bool arg)\n\nShallow copy the input cell data arrays to the output. Off by\ndefault.\n"},
  {"GetPassCellArrays", PyvtkResampleWithDataSet_GetPassCellArrays, METH_VARARGS,
   "GetPassCellArrays(self) -> bool\nC++: bool GetPassCellArrays()\n\n"},
  {"PassCellArraysOn", PyvtkResampleWithDataSet_PassCellArraysOn, METH_VARARGS,
   "PassCellArraysOn(self) -> None\nC++: virtual void PassCellArraysOn()\n\n"},
  {"PassCellArraysOff", PyvtkResampleWithDataSet_PassCellArraysOff, METH_VARARGS,
   "PassCellArraysOff(self) -> None\nC++: virtual void PassCellArraysOff()\n\n"},
  {"SetPassPointArrays", PyvtkResampleWithDataSet_SetPassPointArrays, METH_VARARGS,
   "SetPassPointArrays(self, arg:bool) -> None\nC++: void SetPassPointArrays(bool arg)\n\nShallow copy the input point data arrays to the output Off by\ndefault.\n"},
  {"GetPassPointArrays", PyvtkResampleWithDataSet_GetPassPointArrays, METH_VARARGS,
   "GetPassPointArrays(self) -> bool\nC++: bool GetPassPointArrays()\n\n"},
  {"PassPointArraysOn", PyvtkResampleWithDataSet_PassPointArraysOn, METH_VARARGS,
   "PassPointArraysOn(self) -> None\nC++: virtual void PassPointArraysOn()\n\n"},
  {"PassPointArraysOff", PyvtkResampleWithDataSet_PassPointArraysOff, METH_VARARGS,
   "PassPointArraysOff(self) -> None\nC++: virtual void PassPointArraysOff()\n\n"},
  {"SetPassFieldArrays", PyvtkResampleWithDataSet_SetPassFieldArrays, METH_VARARGS,
   "SetPassFieldArrays(self, arg:bool) -> None\nC++: void SetPassFieldArrays(bool arg)\n\nSet whether to pass the field-data arrays from the Input i.e. the\ninput providing the geometry to the output. On by default.\n"},
  {"GetPassFieldArrays", PyvtkResampleWithDataSet_GetPassFieldArrays, METH_VARARGS,
   "GetPassFieldArrays(self) -> bool\nC++: bool GetPassFieldArrays()\n\n"},
  {"PassFieldArraysOn", PyvtkResampleWithDataSet_PassFieldArraysOn, METH_VARARGS,
   "PassFieldArraysOn(self) -> None\nC++: virtual void PassFieldArraysOn()\n\n"},
  {"PassFieldArraysOff", PyvtkResampleWithDataSet_PassFieldArraysOff, METH_VARARGS,
   "PassFieldArraysOff(self) -> None\nC++: virtual void PassFieldArraysOff()\n\n"},
  {"SetPassPartialArrays", PyvtkResampleWithDataSet_SetPassPartialArrays, METH_VARARGS,
   "SetPassPartialArrays(self, arg:bool) -> None\nC++: void SetPassPartialArrays(bool arg)\n\nWhen sampling from composite datasets, partial arrays are common\ni.e. data-arrays that are not available in all of the blocks. By\ndefault, this filter only passes those point and cell data-arrays\nthat are available in all the blocks i.e. partial arrays are\nremoved.  When PassPartialArrays is turned on, this behavior is\nchanged to take a union of all arrays present thus partial arrays\nare passed as well. However, for composite dataset input, this\nfilter still produces a non-composite output. For all those\nlocations in a block of where a particular data array is missing,\nthis filter uses vtkMath::Nan() for double and float arrays, and\n0 for all other types of arrays e.g. int, char, etc. Off by\ndefault.\n"},
  {"GetPassPartialArrays", PyvtkResampleWithDataSet_GetPassPartialArrays, METH_VARARGS,
   "GetPassPartialArrays(self) -> bool\nC++: bool GetPassPartialArrays()\n\n"},
  {"PassPartialArraysOn", PyvtkResampleWithDataSet_PassPartialArraysOn, METH_VARARGS,
   "PassPartialArraysOn(self) -> None\nC++: virtual void PassPartialArraysOn()\n\n"},
  {"PassPartialArraysOff", PyvtkResampleWithDataSet_PassPartialArraysOff, METH_VARARGS,
   "PassPartialArraysOff(self) -> None\nC++: virtual void PassPartialArraysOff()\n\n"},
  {"SetTolerance", PyvtkResampleWithDataSet_SetTolerance, METH_VARARGS,
   "SetTolerance(self, arg:float) -> None\nC++: void SetTolerance(double arg)\n\nSet the tolerance used to compute whether a point in the source\nis in a cell of the input.  This value is only used if\nComputeTolerance is off.\n"},
  {"GetTolerance", PyvtkResampleWithDataSet_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: double GetTolerance()\n\n"},
  {"SetComputeTolerance", PyvtkResampleWithDataSet_SetComputeTolerance, METH_VARARGS,
   "SetComputeTolerance(self, arg:bool) -> None\nC++: void SetComputeTolerance(bool arg)\n\nSet whether to use the Tolerance field or precompute the\ntolerance. When on, the tolerance will be computed and the field\nvalue is ignored. On by default.\n"},
  {"GetComputeTolerance", PyvtkResampleWithDataSet_GetComputeTolerance, METH_VARARGS,
   "GetComputeTolerance(self) -> bool\nC++: bool GetComputeTolerance()\n\n"},
  {"ComputeToleranceOn", PyvtkResampleWithDataSet_ComputeToleranceOn, METH_VARARGS,
   "ComputeToleranceOn(self) -> None\nC++: virtual void ComputeToleranceOn()\n\n"},
  {"ComputeToleranceOff", PyvtkResampleWithDataSet_ComputeToleranceOff, METH_VARARGS,
   "ComputeToleranceOff(self) -> None\nC++: virtual void ComputeToleranceOff()\n\n"},
  {"SetMarkBlankPointsAndCells", PyvtkResampleWithDataSet_SetMarkBlankPointsAndCells, METH_VARARGS,
   "SetMarkBlankPointsAndCells(self, _arg:bool) -> None\nC++: virtual void SetMarkBlankPointsAndCells(bool _arg)\n\nSet whether points without resampled values, and their\ncorresponding cells, should be marked as Blank. Default is On.\n"},
  {"GetMarkBlankPointsAndCells", PyvtkResampleWithDataSet_GetMarkBlankPointsAndCells, METH_VARARGS,
   "GetMarkBlankPointsAndCells(self) -> bool\nC++: virtual bool GetMarkBlankPointsAndCells()\n\n"},
  {"MarkBlankPointsAndCellsOn", PyvtkResampleWithDataSet_MarkBlankPointsAndCellsOn, METH_VARARGS,
   "MarkBlankPointsAndCellsOn(self) -> None\nC++: virtual void MarkBlankPointsAndCellsOn()\n\n"},
  {"MarkBlankPointsAndCellsOff", PyvtkResampleWithDataSet_MarkBlankPointsAndCellsOff, METH_VARARGS,
   "MarkBlankPointsAndCellsOff(self) -> None\nC++: virtual void MarkBlankPointsAndCellsOff()\n\n"},
  {"SetSnapToCellWithClosestPoint", PyvtkResampleWithDataSet_SetSnapToCellWithClosestPoint, METH_VARARGS,
   "SetSnapToCellWithClosestPoint(self, arg:bool) -> None\nC++: void SetSnapToCellWithClosestPoint(bool arg)\n\nSet/Get whether to snap to the cell with the closest point, if no\ncell has been found while FindCell is executed.\n\nDefault is off.\n\nNote: This is useful only when the source is a vtkPointSet.\n"},
  {"GetSnapToCellWithClosestPoint", PyvtkResampleWithDataSet_GetSnapToCellWithClosestPoint, METH_VARARGS,
   "GetSnapToCellWithClosestPoint(self) -> bool\nC++: bool GetSnapToCellWithClosestPoint()\n\n"},
  {"SnapToCellWithClosestPointOn", PyvtkResampleWithDataSet_SnapToCellWithClosestPointOn, METH_VARARGS,
   "SnapToCellWithClosestPointOn(self) -> None\nC++: virtual void SnapToCellWithClosestPointOn()\n\n"},
  {"SnapToCellWithClosestPointOff", PyvtkResampleWithDataSet_SnapToCellWithClosestPointOff, METH_VARARGS,
   "SnapToCellWithClosestPointOff(self) -> None\nC++: virtual void SnapToCellWithClosestPointOff()\n\n"},
  {"SetCellLocatorPrototype", PyvtkResampleWithDataSet_SetCellLocatorPrototype, METH_VARARGS,
   "SetCellLocatorPrototype(self, __a:vtkAbstractCellLocator) -> None\nC++: virtual void SetCellLocatorPrototype(\n    vtkAbstractCellLocator *)\n\n"},
  {"GetCellLocatorPrototype", PyvtkResampleWithDataSet_GetCellLocatorPrototype, METH_VARARGS,
   "GetCellLocatorPrototype(self) -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetCellLocatorPrototype()\n\n"},
  {"GetMTime", PyvtkResampleWithDataSet_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkResampleWithDataSet_Doc =
  "vtkResampleWithDataSet - sample point and cell data of a dataset on\npoints from another dataset.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Similar to vtkCompositeDataProbeFilter, vtkResampleWithDataSet takes\n"
  "two inputs - Input and Source, and samples the point and cell values\n"
  "of Source on to the point locations of Input. The output has the same\n"
  "structure as Input but its point data have the resampled values from\n"
  "Source. Unlike vtkCompositeDataProbeFilter, this filter support\n"
  "composite datasets for both Input and Source.\n"
  "@sa\n"
  "vtkCompositeDataProbeFilter vtkResampleToImage\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResampleWithDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkResampleWithDataSet", // tp_name
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
  PyvtkResampleWithDataSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResampleWithDataSet_StaticNew()
{
  return vtkResampleWithDataSet::New();
}

PyObject *PyvtkResampleWithDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResampleWithDataSet_Type, PyvtkResampleWithDataSet_Methods,
    "vtkResampleWithDataSet",
 &PyvtkResampleWithDataSet_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResampleWithDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResampleWithDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResampleWithDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

