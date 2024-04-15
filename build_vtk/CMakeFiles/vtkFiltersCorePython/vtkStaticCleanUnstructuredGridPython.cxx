// python wrapper for vtkStaticCleanUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStaticCleanUnstructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStaticCleanUnstructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkStaticCleanUnstructuredGrid_ClassNew(); }


static PyObject *
PyvtkStaticCleanUnstructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStaticCleanUnstructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStaticCleanUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStaticCleanUnstructuredGrid *tempr = vtkStaticCleanUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticCleanUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStaticCleanUnstructuredGrid::NewInstance());

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
PyvtkStaticCleanUnstructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStaticCleanUnstructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStaticCleanUnstructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetToleranceIsAbsolute(temp0);
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::SetToleranceIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_ToleranceIsAbsoluteOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOn();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::ToleranceIsAbsoluteOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_ToleranceIsAbsoluteOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToleranceIsAbsoluteOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToleranceIsAbsoluteOff();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::ToleranceIsAbsoluteOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetToleranceIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetToleranceIsAbsolute() :
      op->vtkStaticCleanUnstructuredGrid::GetToleranceIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsoluteTolerance(temp0);
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::SetAbsoluteTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetAbsoluteToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMinValue() :
      op->vtkStaticCleanUnstructuredGrid::GetAbsoluteToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetAbsoluteToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteToleranceMaxValue() :
      op->vtkStaticCleanUnstructuredGrid::GetAbsoluteToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetAbsoluteTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteTolerance() :
      op->vtkStaticCleanUnstructuredGrid::GetAbsoluteTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

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
      op->vtkStaticCleanUnstructuredGrid::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkStaticCleanUnstructuredGrid::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkStaticCleanUnstructuredGrid::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkStaticCleanUnstructuredGrid::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetMergingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergingArray(temp0);
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::SetMergingArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetMergingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMergingArray() :
      op->vtkStaticCleanUnstructuredGrid::GetMergingArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetRemoveUnusedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveUnusedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveUnusedPoints(temp0);
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::SetRemoveUnusedPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_RemoveUnusedPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedPointsOn();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::RemoveUnusedPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_RemoveUnusedPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedPointsOff();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::RemoveUnusedPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetRemoveUnusedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveUnusedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveUnusedPoints() :
      op->vtkStaticCleanUnstructuredGrid::GetRemoveUnusedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetProduceMergeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProduceMergeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProduceMergeMap(temp0);
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::SetProduceMergeMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_ProduceMergeMapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceMergeMapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceMergeMapOn();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::ProduceMergeMapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_ProduceMergeMapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceMergeMapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceMergeMapOff();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::ProduceMergeMapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetProduceMergeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProduceMergeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProduceMergeMap() :
      op->vtkStaticCleanUnstructuredGrid::GetProduceMergeMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetAveragePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAveragePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAveragePointData(temp0);
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::SetAveragePointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_AveragePointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragePointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AveragePointDataOn();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::AveragePointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_AveragePointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragePointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AveragePointDataOff();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::AveragePointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetAveragePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAveragePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAveragePointData() :
      op->vtkStaticCleanUnstructuredGrid::GetAveragePointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

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
      op->vtkStaticCleanUnstructuredGrid::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkStaticCleanUnstructuredGrid::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStaticPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkStaticCleanUnstructuredGrid::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkStaticCleanUnstructuredGrid::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_PieceInvariantOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOn();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::PieceInvariantOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_PieceInvariantOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceInvariantOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PieceInvariantOff();
    }
    else
    {
      op->vtkStaticCleanUnstructuredGrid::PieceInvariantOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStaticCleanUnstructuredGrid_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStaticCleanUnstructuredGrid *op = static_cast<vtkStaticCleanUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkStaticCleanUnstructuredGrid::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStaticCleanUnstructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkStaticCleanUnstructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStaticCleanUnstructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStaticCleanUnstructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStaticCleanUnstructuredGrid\nC++: static vtkStaticCleanUnstructuredGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStaticCleanUnstructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStaticCleanUnstructuredGrid\nC++: vtkStaticCleanUnstructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStaticCleanUnstructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStaticCleanUnstructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetToleranceIsAbsolute", PyvtkStaticCleanUnstructuredGrid_SetToleranceIsAbsolute, METH_VARARGS,
   "SetToleranceIsAbsolute(self, _arg:bool) -> None\nC++: virtual void SetToleranceIsAbsolute(bool _arg)\n\nSpecify how the point merging tolerance is defined. By default\nToleranceIsAbsolute is false and the tolerance is a fraction of\nthe input's bounding box diagonal. If true, AbsoluteTolerance is\nthe tolerance used when performing point merging.\n"},
  {"ToleranceIsAbsoluteOn", PyvtkStaticCleanUnstructuredGrid_ToleranceIsAbsoluteOn, METH_VARARGS,
   "ToleranceIsAbsoluteOn(self) -> None\nC++: virtual void ToleranceIsAbsoluteOn()\n\n"},
  {"ToleranceIsAbsoluteOff", PyvtkStaticCleanUnstructuredGrid_ToleranceIsAbsoluteOff, METH_VARARGS,
   "ToleranceIsAbsoluteOff(self) -> None\nC++: virtual void ToleranceIsAbsoluteOff()\n\n"},
  {"GetToleranceIsAbsolute", PyvtkStaticCleanUnstructuredGrid_GetToleranceIsAbsolute, METH_VARARGS,
   "GetToleranceIsAbsolute(self) -> bool\nC++: virtual bool GetToleranceIsAbsolute()\n\n"},
  {"SetAbsoluteTolerance", PyvtkStaticCleanUnstructuredGrid_SetAbsoluteTolerance, METH_VARARGS,
   "SetAbsoluteTolerance(self, _arg:float) -> None\nC++: virtual void SetAbsoluteTolerance(double _arg)\n\nSpecify the absolute point merging tolerance. The default value\nis\n0. This tolerance is used then ToleranceIsAbsolute is true.\n"},
  {"GetAbsoluteToleranceMinValue", PyvtkStaticCleanUnstructuredGrid_GetAbsoluteToleranceMinValue, METH_VARARGS,
   "GetAbsoluteToleranceMinValue(self) -> float\nC++: virtual double GetAbsoluteToleranceMinValue()\n\n"},
  {"GetAbsoluteToleranceMaxValue", PyvtkStaticCleanUnstructuredGrid_GetAbsoluteToleranceMaxValue, METH_VARARGS,
   "GetAbsoluteToleranceMaxValue(self) -> float\nC++: virtual double GetAbsoluteToleranceMaxValue()\n\n"},
  {"GetAbsoluteTolerance", PyvtkStaticCleanUnstructuredGrid_GetAbsoluteTolerance, METH_VARARGS,
   "GetAbsoluteTolerance(self) -> float\nC++: virtual double GetAbsoluteTolerance()\n\n"},
  {"SetTolerance", PyvtkStaticCleanUnstructuredGrid_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSpecify the point merging tolerance in terms of the fraction of\nthe input dataset's bounding box length.  The default is 0. This\ntolerance is used then ToleranceIsAbsolute is false.\n"},
  {"GetToleranceMinValue", PyvtkStaticCleanUnstructuredGrid_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkStaticCleanUnstructuredGrid_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkStaticCleanUnstructuredGrid_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetMergingArray", PyvtkStaticCleanUnstructuredGrid_SetMergingArray, METH_VARARGS,
   "SetMergingArray(self, _arg:str) -> None\nC++: virtual void SetMergingArray(const char *_arg)\n\nSpecify the name of a point data array associated with the point\nmerging process. If a data array is specified, and exists in the\ninput point data, then point merging will switch into a mode\nwhere merged points must be both geometrically coincident and\nhave matching point data (i.e., an exact match of position and\ndata - tolerances have no effect). Note that the number of tuples\nin the merging data array must be equal to the number of points\nin the input. By default, no data array is associated with the\ninput points (i.e., the name of the data array is empty).\n"},
  {"GetMergingArray", PyvtkStaticCleanUnstructuredGrid_GetMergingArray, METH_VARARGS,
   "GetMergingArray(self) -> str\nC++: virtual char *GetMergingArray()\n\n"},
  {"SetRemoveUnusedPoints", PyvtkStaticCleanUnstructuredGrid_SetRemoveUnusedPoints, METH_VARARGS,
   "SetRemoveUnusedPoints(self, _arg:bool) -> None\nC++: virtual void SetRemoveUnusedPoints(bool _arg)\n\nIndicate whether points unused by any cell are removed from the\noutput. By default this point removal is on. Note that when this\nis off, the filter can successfully process datasets with no\ncells (and just points). If on in this case, and there are no\ncells, than the output will be empty.\n"},
  {"RemoveUnusedPointsOn", PyvtkStaticCleanUnstructuredGrid_RemoveUnusedPointsOn, METH_VARARGS,
   "RemoveUnusedPointsOn(self) -> None\nC++: virtual void RemoveUnusedPointsOn()\n\n"},
  {"RemoveUnusedPointsOff", PyvtkStaticCleanUnstructuredGrid_RemoveUnusedPointsOff, METH_VARARGS,
   "RemoveUnusedPointsOff(self) -> None\nC++: virtual void RemoveUnusedPointsOff()\n\n"},
  {"GetRemoveUnusedPoints", PyvtkStaticCleanUnstructuredGrid_GetRemoveUnusedPoints, METH_VARARGS,
   "GetRemoveUnusedPoints(self) -> bool\nC++: virtual bool GetRemoveUnusedPoints()\n\n"},
  {"SetProduceMergeMap", PyvtkStaticCleanUnstructuredGrid_SetProduceMergeMap, METH_VARARGS,
   "SetProduceMergeMap(self, _arg:bool) -> None\nC++: virtual void SetProduceMergeMap(bool _arg)\n\nIndicate whether a merge map should be produced on output. The\nmerge map, if requested, maps each input point to its output\npoint id, or provides a value of -1 if the input point is not\nused in the output. The merge map is associated with the filter's\noutput field data and is named \"PointMergeMap\". By default,\nProduceMergeMap is disabled.\n"},
  {"ProduceMergeMapOn", PyvtkStaticCleanUnstructuredGrid_ProduceMergeMapOn, METH_VARARGS,
   "ProduceMergeMapOn(self) -> None\nC++: virtual void ProduceMergeMapOn()\n\n"},
  {"ProduceMergeMapOff", PyvtkStaticCleanUnstructuredGrid_ProduceMergeMapOff, METH_VARARGS,
   "ProduceMergeMapOff(self) -> None\nC++: virtual void ProduceMergeMapOff()\n\n"},
  {"GetProduceMergeMap", PyvtkStaticCleanUnstructuredGrid_GetProduceMergeMap, METH_VARARGS,
   "GetProduceMergeMap(self) -> bool\nC++: virtual bool GetProduceMergeMap()\n\n"},
  {"SetAveragePointData", PyvtkStaticCleanUnstructuredGrid_SetAveragePointData, METH_VARARGS,
   "SetAveragePointData(self, _arg:bool) -> None\nC++: virtual void SetAveragePointData(bool _arg)\n\nIndicate whether point coordinates and point data of merged\npoints are averaged. By default, the point coordinates and\nattribute data are not averaged, and the point coordinate and\ndata of the single, remaining merged point is retained.\nOtherwise, the data coordinates and attribute values of all\nmerged points are averaged. By default this feature is disabled.\n"},
  {"AveragePointDataOn", PyvtkStaticCleanUnstructuredGrid_AveragePointDataOn, METH_VARARGS,
   "AveragePointDataOn(self) -> None\nC++: virtual void AveragePointDataOn()\n\n"},
  {"AveragePointDataOff", PyvtkStaticCleanUnstructuredGrid_AveragePointDataOff, METH_VARARGS,
   "AveragePointDataOff(self) -> None\nC++: virtual void AveragePointDataOff()\n\n"},
  {"GetAveragePointData", PyvtkStaticCleanUnstructuredGrid_GetAveragePointData, METH_VARARGS,
   "GetAveragePointData(self) -> bool\nC++: virtual bool GetAveragePointData()\n\n"},
  {"SetOutputPointsPrecision", PyvtkStaticCleanUnstructuredGrid_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output point type. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkStaticCleanUnstructuredGrid_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"GetLocator", PyvtkStaticCleanUnstructuredGrid_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkStaticPointLocator\nC++: virtual vtkStaticPointLocator *GetLocator()\n\nRetrieve the internal locator to manually configure it, for\nexample specifying the number of points per bucket, or\ncontrolling the traversal order. This method is generally used\nfor debugging or testing purposes.\n"},
  {"SetPieceInvariant", PyvtkStaticCleanUnstructuredGrid_SetPieceInvariant, METH_VARARGS,
   "SetPieceInvariant(self, _arg:bool) -> None\nC++: virtual void SetPieceInvariant(bool _arg)\n\n"},
  {"GetPieceInvariant", PyvtkStaticCleanUnstructuredGrid_GetPieceInvariant, METH_VARARGS,
   "GetPieceInvariant(self) -> bool\nC++: virtual bool GetPieceInvariant()\n\n"},
  {"PieceInvariantOn", PyvtkStaticCleanUnstructuredGrid_PieceInvariantOn, METH_VARARGS,
   "PieceInvariantOn(self) -> None\nC++: virtual void PieceInvariantOn()\n\n"},
  {"PieceInvariantOff", PyvtkStaticCleanUnstructuredGrid_PieceInvariantOff, METH_VARARGS,
   "PieceInvariantOff(self) -> None\nC++: virtual void PieceInvariantOff()\n\n"},
  {"GetMTime", PyvtkStaticCleanUnstructuredGrid_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime of this object also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStaticCleanUnstructuredGrid_Doc =
  "vtkStaticCleanUnstructuredGrid - merge duplicate points, removed\nunused points, in an vtkUnstructuredGrid\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkStaticCleanUnstructuredGrid is a filter that takes a\n"
  "vtkUnstructuredGrid as input and produces a vtkUnstructuredGrid on\n"
  "output, merging coincident points (as defined by a merging tolerance)\n"
  "and optionally removing unused points. The filter does not modify the\n"
  "topology of the input dataset, nor change the types of cells. It may\n"
  "however, renumber the cell connectivity ids.\n\n"
  "For better performance, this filter employs threading using\n"
  "vtkStaticPointLocator and its associated threaded methods. When the\n"
  "merging tolerances==0.0, execution speeds are much faster as compared\n"
  "to non-zero tolerances. When the merging tolerance > 0.0, there are\n"
  "issues of processing order which can be controlled through the\n"
  "locator (returned via GetLocator()). This behavior can be controlled\n"
  "by the SetTraversalOrder() method - by default threading occurs via\n"
  "BIN_ORDER (see vtkStaticPointLocator for more information).\n\n"
  "@warning\n"
  "Merging points can alter cell geometry and produce degenerate cells.\n"
  "The tolerance should be chosen carefully to avoid these problems. For\n"
  "example, in an extreme case with a relatively large tolerance, all\n"
  "points of a vtkHexahedron could be merged to a single point, in which\n"
  "case the resulting hexahedron would be defined by eight repeats of\n"
  "the same point.\n\n"
  "@warning\n"
  "If RemoveUnusedPoints is enabled, then any point not used by any of\n"
  "the unstructured grid cells is eliminated (and not passed to the\n"
  "output). Enabling this feature does impact performance.\n\n"
  "@warning\n"
  "If ProduceMergeMap is enabled, then an output data array is produced,\n"
  "associated with the output field data, that maps each input point to\n"
  "an output point (or to -1 if an input point is unused in the output).\n\n"
  "@warning\n"
  "Merging points affects point coordinates and data attributes. By\n"
  "default, if points are merged, the point position and attribute data\n"
  "of only one point (i.e., the point that all other points are merged\n"
  "to) is retained. If AveragePointData is enabled, then the resulting\n"
  "point position and attribute data values are determined by averaging\n"
  "the position and attribute values of all the points that are merged\n"
  "together. This option may have a significant performance impact if\n"
  "enabled.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkCleanPolyData vtkStaticCleanPolyData vtkStaticPointLocator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStaticCleanUnstructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkStaticCleanUnstructuredGrid", // tp_name
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
  PyvtkStaticCleanUnstructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStaticCleanUnstructuredGrid_StaticNew()
{
  return vtkStaticCleanUnstructuredGrid::New();
}

PyObject *PyvtkStaticCleanUnstructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStaticCleanUnstructuredGrid_Type, PyvtkStaticCleanUnstructuredGrid_Methods,
    "vtkStaticCleanUnstructuredGrid",
 &PyvtkStaticCleanUnstructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStaticCleanUnstructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStaticCleanUnstructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStaticCleanUnstructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

