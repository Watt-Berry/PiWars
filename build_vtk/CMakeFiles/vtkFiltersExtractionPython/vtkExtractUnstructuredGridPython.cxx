// python wrapper for vtkExtractUnstructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractUnstructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractUnstructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractUnstructuredGrid_ClassNew(); }


static PyObject *
PyvtkExtractUnstructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractUnstructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractUnstructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractUnstructuredGrid *tempr = vtkExtractUnstructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractUnstructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractUnstructuredGrid::NewInstance());

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
PyvtkExtractUnstructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractUnstructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractUnstructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointClipping(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetPointClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointClipping() :
      op->vtkExtractUnstructuredGrid::GetPointClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOn();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::PointClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOff();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::PointClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellClipping(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetCellClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellClipping() :
      op->vtkExtractUnstructuredGrid::GetCellClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOn();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::CellClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOff();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::CellClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtentClipping(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetExtentClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentClipping() :
      op->vtkExtractUnstructuredGrid::GetExtentClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOn();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::ExtentClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOff();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::ExtentClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMinimum(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetPointMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMinimumMinValue() :
      op->vtkExtractUnstructuredGrid::GetPointMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMinimumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetPointMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMinimum() :
      op->vtkExtractUnstructuredGrid::GetPointMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMaximum(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetPointMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMaximumMinValue() :
      op->vtkExtractUnstructuredGrid::GetPointMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMaximumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetPointMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMaximum() :
      op->vtkExtractUnstructuredGrid::GetPointMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellMinimum(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetCellMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMinimumMinValue() :
      op->vtkExtractUnstructuredGrid::GetCellMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMinimumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetCellMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMinimum() :
      op->vtkExtractUnstructuredGrid::GetCellMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellMaximum(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetCellMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMaximumMinValue() :
      op->vtkExtractUnstructuredGrid::GetCellMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMaximumMaxValue() :
      op->vtkExtractUnstructuredGrid::GetCellMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMaximum() :
      op->vtkExtractUnstructuredGrid::GetCellMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->vtkExtractUnstructuredGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractUnstructuredGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

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
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetExtent(temp0);
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
PyvtkExtractUnstructuredGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtractUnstructuredGrid_SetExtent_s1(self, args);
    case 1:
      return PyvtkExtractUnstructuredGrid_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkExtractUnstructuredGrid::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMerging(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkExtractUnstructuredGrid::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOn();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::MergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOff();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::MergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkExtractUnstructuredGrid::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkExtractUnstructuredGrid::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkExtractUnstructuredGrid::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGrid_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGrid *op = static_cast<vtkExtractUnstructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractUnstructuredGrid::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractUnstructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkExtractUnstructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractUnstructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractUnstructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractUnstructuredGrid\nC++: static vtkExtractUnstructuredGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractUnstructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractUnstructuredGrid\nC++: vtkExtractUnstructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractUnstructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractUnstructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPointClipping", PyvtkExtractUnstructuredGrid_SetPointClipping, METH_VARARGS,
   "SetPointClipping(self, _arg:int) -> None\nC++: virtual void SetPointClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry by point id.\n"},
  {"GetPointClipping", PyvtkExtractUnstructuredGrid_GetPointClipping, METH_VARARGS,
   "GetPointClipping(self) -> int\nC++: virtual vtkTypeBool GetPointClipping()\n\n"},
  {"PointClippingOn", PyvtkExtractUnstructuredGrid_PointClippingOn, METH_VARARGS,
   "PointClippingOn(self) -> None\nC++: virtual void PointClippingOn()\n\n"},
  {"PointClippingOff", PyvtkExtractUnstructuredGrid_PointClippingOff, METH_VARARGS,
   "PointClippingOff(self) -> None\nC++: virtual void PointClippingOff()\n\n"},
  {"SetCellClipping", PyvtkExtractUnstructuredGrid_SetCellClipping, METH_VARARGS,
   "SetCellClipping(self, _arg:int) -> None\nC++: virtual void SetCellClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry by cell id.\n"},
  {"GetCellClipping", PyvtkExtractUnstructuredGrid_GetCellClipping, METH_VARARGS,
   "GetCellClipping(self) -> int\nC++: virtual vtkTypeBool GetCellClipping()\n\n"},
  {"CellClippingOn", PyvtkExtractUnstructuredGrid_CellClippingOn, METH_VARARGS,
   "CellClippingOn(self) -> None\nC++: virtual void CellClippingOn()\n\n"},
  {"CellClippingOff", PyvtkExtractUnstructuredGrid_CellClippingOff, METH_VARARGS,
   "CellClippingOff(self) -> None\nC++: virtual void CellClippingOff()\n\n"},
  {"SetExtentClipping", PyvtkExtractUnstructuredGrid_SetExtentClipping, METH_VARARGS,
   "SetExtentClipping(self, _arg:int) -> None\nC++: virtual void SetExtentClipping(vtkTypeBool _arg)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"GetExtentClipping", PyvtkExtractUnstructuredGrid_GetExtentClipping, METH_VARARGS,
   "GetExtentClipping(self) -> int\nC++: virtual vtkTypeBool GetExtentClipping()\n\n"},
  {"ExtentClippingOn", PyvtkExtractUnstructuredGrid_ExtentClippingOn, METH_VARARGS,
   "ExtentClippingOn(self) -> None\nC++: virtual void ExtentClippingOn()\n\n"},
  {"ExtentClippingOff", PyvtkExtractUnstructuredGrid_ExtentClippingOff, METH_VARARGS,
   "ExtentClippingOff(self) -> None\nC++: virtual void ExtentClippingOff()\n\n"},
  {"SetPointMinimum", PyvtkExtractUnstructuredGrid_SetPointMinimum, METH_VARARGS,
   "SetPointMinimum(self, _arg:int) -> None\nC++: virtual void SetPointMinimum(vtkIdType _arg)\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimumMinValue", PyvtkExtractUnstructuredGrid_GetPointMinimumMinValue, METH_VARARGS,
   "GetPointMinimumMinValue(self) -> int\nC++: virtual vtkIdType GetPointMinimumMinValue()\n\n"},
  {"GetPointMinimumMaxValue", PyvtkExtractUnstructuredGrid_GetPointMinimumMaxValue, METH_VARARGS,
   "GetPointMinimumMaxValue(self) -> int\nC++: virtual vtkIdType GetPointMinimumMaxValue()\n\n"},
  {"GetPointMinimum", PyvtkExtractUnstructuredGrid_GetPointMinimum, METH_VARARGS,
   "GetPointMinimum(self) -> int\nC++: virtual vtkIdType GetPointMinimum()\n\n"},
  {"SetPointMaximum", PyvtkExtractUnstructuredGrid_SetPointMaximum, METH_VARARGS,
   "SetPointMaximum(self, _arg:int) -> None\nC++: virtual void SetPointMaximum(vtkIdType _arg)\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximumMinValue", PyvtkExtractUnstructuredGrid_GetPointMaximumMinValue, METH_VARARGS,
   "GetPointMaximumMinValue(self) -> int\nC++: virtual vtkIdType GetPointMaximumMinValue()\n\n"},
  {"GetPointMaximumMaxValue", PyvtkExtractUnstructuredGrid_GetPointMaximumMaxValue, METH_VARARGS,
   "GetPointMaximumMaxValue(self) -> int\nC++: virtual vtkIdType GetPointMaximumMaxValue()\n\n"},
  {"GetPointMaximum", PyvtkExtractUnstructuredGrid_GetPointMaximum, METH_VARARGS,
   "GetPointMaximum(self) -> int\nC++: virtual vtkIdType GetPointMaximum()\n\n"},
  {"SetCellMinimum", PyvtkExtractUnstructuredGrid_SetCellMinimum, METH_VARARGS,
   "SetCellMinimum(self, _arg:int) -> None\nC++: virtual void SetCellMinimum(vtkIdType _arg)\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimumMinValue", PyvtkExtractUnstructuredGrid_GetCellMinimumMinValue, METH_VARARGS,
   "GetCellMinimumMinValue(self) -> int\nC++: virtual vtkIdType GetCellMinimumMinValue()\n\n"},
  {"GetCellMinimumMaxValue", PyvtkExtractUnstructuredGrid_GetCellMinimumMaxValue, METH_VARARGS,
   "GetCellMinimumMaxValue(self) -> int\nC++: virtual vtkIdType GetCellMinimumMaxValue()\n\n"},
  {"GetCellMinimum", PyvtkExtractUnstructuredGrid_GetCellMinimum, METH_VARARGS,
   "GetCellMinimum(self) -> int\nC++: virtual vtkIdType GetCellMinimum()\n\n"},
  {"SetCellMaximum", PyvtkExtractUnstructuredGrid_SetCellMaximum, METH_VARARGS,
   "SetCellMaximum(self, _arg:int) -> None\nC++: virtual void SetCellMaximum(vtkIdType _arg)\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximumMinValue", PyvtkExtractUnstructuredGrid_GetCellMaximumMinValue, METH_VARARGS,
   "GetCellMaximumMinValue(self) -> int\nC++: virtual vtkIdType GetCellMaximumMinValue()\n\n"},
  {"GetCellMaximumMaxValue", PyvtkExtractUnstructuredGrid_GetCellMaximumMaxValue, METH_VARARGS,
   "GetCellMaximumMaxValue(self) -> int\nC++: virtual vtkIdType GetCellMaximumMaxValue()\n\n"},
  {"GetCellMaximum", PyvtkExtractUnstructuredGrid_GetCellMaximum, METH_VARARGS,
   "GetCellMaximum(self) -> int\nC++: virtual vtkIdType GetCellMaximum()\n\n"},
  {"SetExtent", PyvtkExtractUnstructuredGrid_SetExtent, METH_VARARGS,
   "SetExtent(self, xMin:float, xMax:float, yMin:float, yMax:float,\n    zMin:float, zMax:float) -> None\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nSetExtent(self, extent:[float, float, float, float, float, float])\n     -> None\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {"GetExtent", PyvtkExtractUnstructuredGrid_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (float, float, float, float, float, float)\nC++: double *GetExtent()\n\n"},
  {"SetMerging", PyvtkExtractUnstructuredGrid_SetMerging, METH_VARARGS,
   "SetMerging(self, _arg:int) -> None\nC++: virtual void SetMerging(vtkTypeBool _arg)\n\nTurn on/off merging of coincident points. Note that is merging is\non, points with different point attributes (e.g., normals) are\nmerged, which may cause rendering artifacts.\n"},
  {"GetMerging", PyvtkExtractUnstructuredGrid_GetMerging, METH_VARARGS,
   "GetMerging(self) -> int\nC++: virtual vtkTypeBool GetMerging()\n\n"},
  {"MergingOn", PyvtkExtractUnstructuredGrid_MergingOn, METH_VARARGS,
   "MergingOn(self) -> None\nC++: virtual void MergingOn()\n\n"},
  {"MergingOff", PyvtkExtractUnstructuredGrid_MergingOff, METH_VARARGS,
   "MergingOff(self) -> None\nC++: virtual void MergingOff()\n\n"},
  {"SetLocator", PyvtkExtractUnstructuredGrid_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkExtractUnstructuredGrid_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkExtractUnstructuredGrid_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkExtractUnstructuredGrid_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractUnstructuredGrid_Doc =
  "vtkExtractUnstructuredGrid - extract subset of unstructured grid\ngeometry\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkExtractUnstructuredGrid is a general-purpose filter to extract\n"
  "geometry (and associated data) from an unstructured grid dataset. The\n"
  "extraction process is controlled by specifying a range of point ids,\n"
  "cell ids, or a bounding box (referred to as \"Extent\"). Those cells\n"
  "laying within these regions are sent to the output. The user has the\n"
  "choice of merging coincident points (Merging is on) or using the\n"
  "original point set (Merging is off).\n\n"
  "@warning\n"
  "If merging is off, the input points are copied through to the output.\n"
  "This means unused points may be present in the output data. If\n"
  "merging is on, then coincident points with different point attribute\n"
  "values are merged.\n\n"
  "@sa\n"
  "vtkImageDataGeometryFilter vtkStructuredGridGeometryFilter\n"
  "vtkRectilinearGridGeometryFilter vtkExtractGeometry vtkExtractVOI\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractUnstructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractUnstructuredGrid", // tp_name
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
  PyvtkExtractUnstructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractUnstructuredGrid_StaticNew()
{
  return vtkExtractUnstructuredGrid::New();
}

PyObject *PyvtkExtractUnstructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractUnstructuredGrid_Type, PyvtkExtractUnstructuredGrid_Methods,
    "vtkExtractUnstructuredGrid",
 &PyvtkExtractUnstructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractUnstructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractUnstructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractUnstructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

