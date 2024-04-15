// python wrapper for vtkPointSetToOctreeImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointSetToOctreeImageFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointSetToOctreeImageFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPointSetToOctreeImageFilter_ClassNew(); }


static PyObject *
PyvtkPointSetToOctreeImageFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointSetToOctreeImageFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSetToOctreeImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointSetToOctreeImageFilter *tempr = vtkPointSetToOctreeImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSetToOctreeImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSetToOctreeImageFilter::NewInstance());

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
PyvtkPointSetToOctreeImageFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointSetToOctreeImageFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointSetToOctreeImageFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SetNumberOfPointsPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointsPerCell(temp0);
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::SetNumberOfPointsPerCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetNumberOfPointsPerCellMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerCellMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerCellMinValue() :
      op->vtkPointSetToOctreeImageFilter::GetNumberOfPointsPerCellMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetNumberOfPointsPerCellMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerCellMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerCellMaxValue() :
      op->vtkPointSetToOctreeImageFilter::GetNumberOfPointsPerCellMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetNumberOfPointsPerCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerCell() :
      op->vtkPointSetToOctreeImageFilter::GetNumberOfPointsPerCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SetProcessInputPointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessInputPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessInputPointArray(temp0);
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::SetProcessInputPointArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetProcessInputPointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessInputPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProcessInputPointArray() :
      op->vtkPointSetToOctreeImageFilter::GetProcessInputPointArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ProcessInputPointArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInputPointArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessInputPointArrayOn();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ProcessInputPointArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ProcessInputPointArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessInputPointArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessInputPointArrayOff();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ProcessInputPointArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SetComputeLastValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeLastValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeLastValue(temp0);
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::SetComputeLastValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetComputeLastValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeLastValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeLastValue() :
      op->vtkPointSetToOctreeImageFilter::GetComputeLastValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeLastValueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLastValueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeLastValueOn();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeLastValueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeLastValueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLastValueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeLastValueOff();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeLastValueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SetComputeMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeMin(temp0);
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::SetComputeMin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetComputeMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeMin() :
      op->vtkPointSetToOctreeImageFilter::GetComputeMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeMinOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMinOn();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeMinOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeMinOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMinOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMinOff();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeMinOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SetComputeMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeMax(temp0);
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::SetComputeMax(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetComputeMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeMax() :
      op->vtkPointSetToOctreeImageFilter::GetComputeMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeMaxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMaxOn();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeMaxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeMaxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMaxOff();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeMaxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SetComputeCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeCount(temp0);
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::SetComputeCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetComputeCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeCount() :
      op->vtkPointSetToOctreeImageFilter::GetComputeCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeCountOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCountOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCountOn();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeCountOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeCountOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCountOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCountOff();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeCountOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SetComputeSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeSum(temp0);
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::SetComputeSum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetComputeSum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeSum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeSum() :
      op->vtkPointSetToOctreeImageFilter::GetComputeSum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeSumOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSumOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSumOn();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeSumOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeSumOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSumOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeSumOff();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeSumOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_SetComputeMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeMean(temp0);
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::SetComputeMean(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_GetComputeMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeMean() :
      op->vtkPointSetToOctreeImageFilter::GetComputeMean());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeMeanOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMeanOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMeanOn();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeMeanOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToOctreeImageFilter_ComputeMeanOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMeanOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToOctreeImageFilter *op = static_cast<vtkPointSetToOctreeImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeMeanOff();
    }
    else
    {
      op->vtkPointSetToOctreeImageFilter::ComputeMeanOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointSetToOctreeImageFilter_Methods[] = {
  {"IsTypeOf", PyvtkPointSetToOctreeImageFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointSetToOctreeImageFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointSetToOctreeImageFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointSetToOctreeImageFilter\nC++: static vtkPointSetToOctreeImageFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointSetToOctreeImageFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointSetToOctreeImageFilter\nC++: vtkPointSetToOctreeImageFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointSetToOctreeImageFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointSetToOctreeImageFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfPointsPerCell", PyvtkPointSetToOctreeImageFilter_SetNumberOfPointsPerCell, METH_VARARGS,
   "SetNumberOfPointsPerCell(self, _arg:int) -> None\nC++: virtual void SetNumberOfPointsPerCell(int _arg)\n\nSpecify the average number of points in each cell of the output\nimage. This data member is used to determine the number\ndimensions of the output image.\n\nThe default is 1.\n"},
  {"GetNumberOfPointsPerCellMinValue", PyvtkPointSetToOctreeImageFilter_GetNumberOfPointsPerCellMinValue, METH_VARARGS,
   "GetNumberOfPointsPerCellMinValue(self) -> int\nC++: virtual int GetNumberOfPointsPerCellMinValue()\n\n"},
  {"GetNumberOfPointsPerCellMaxValue", PyvtkPointSetToOctreeImageFilter_GetNumberOfPointsPerCellMaxValue, METH_VARARGS,
   "GetNumberOfPointsPerCellMaxValue(self) -> int\nC++: virtual int GetNumberOfPointsPerCellMaxValue()\n\n"},
  {"GetNumberOfPointsPerCell", PyvtkPointSetToOctreeImageFilter_GetNumberOfPointsPerCell, METH_VARARGS,
   "GetNumberOfPointsPerCell(self) -> int\nC++: virtual int GetNumberOfPointsPerCell()\n\n"},
  {"SetProcessInputPointArray", PyvtkPointSetToOctreeImageFilter_SetProcessInputPointArray, METH_VARARGS,
   "SetProcessInputPointArray(self, _arg:bool) -> None\nC++: virtual void SetProcessInputPointArray(bool _arg)\n\nSet/Get if array defined using SetInputArrayToProcess, which MUST\nbe a point data array, will be processed.\n\nThe default is off.\n"},
  {"GetProcessInputPointArray", PyvtkPointSetToOctreeImageFilter_GetProcessInputPointArray, METH_VARARGS,
   "GetProcessInputPointArray(self) -> bool\nC++: virtual bool GetProcessInputPointArray()\n\n"},
  {"ProcessInputPointArrayOn", PyvtkPointSetToOctreeImageFilter_ProcessInputPointArrayOn, METH_VARARGS,
   "ProcessInputPointArrayOn(self) -> None\nC++: virtual void ProcessInputPointArrayOn()\n\n"},
  {"ProcessInputPointArrayOff", PyvtkPointSetToOctreeImageFilter_ProcessInputPointArrayOff, METH_VARARGS,
   "ProcessInputPointArrayOff(self) -> None\nC++: virtual void ProcessInputPointArrayOff()\n\n"},
  {"SetComputeLastValue", PyvtkPointSetToOctreeImageFilter_SetComputeLastValue, METH_VARARGS,
   "SetComputeLastValue(self, _arg:bool) -> None\nC++: virtual void SetComputeLastValue(bool _arg)\n\nSet/Get if the last value for each cell id of the point data\narray will be computed.\n\nThe default is false.\n\nNote: Because multithreading is employed the last value\ncomputation is not deterministic.\n"},
  {"GetComputeLastValue", PyvtkPointSetToOctreeImageFilter_GetComputeLastValue, METH_VARARGS,
   "GetComputeLastValue(self) -> bool\nC++: virtual bool GetComputeLastValue()\n\n"},
  {"ComputeLastValueOn", PyvtkPointSetToOctreeImageFilter_ComputeLastValueOn, METH_VARARGS,
   "ComputeLastValueOn(self) -> None\nC++: virtual void ComputeLastValueOn()\n\n"},
  {"ComputeLastValueOff", PyvtkPointSetToOctreeImageFilter_ComputeLastValueOff, METH_VARARGS,
   "ComputeLastValueOff(self) -> None\nC++: virtual void ComputeLastValueOff()\n\n"},
  {"SetComputeMin", PyvtkPointSetToOctreeImageFilter_SetComputeMin, METH_VARARGS,
   "SetComputeMin(self, _arg:bool) -> None\nC++: virtual void SetComputeMin(bool _arg)\n\nSet/Get if the min value for each cell id of the point data array\nwill be computed.\n\nThe default is false.\n"},
  {"GetComputeMin", PyvtkPointSetToOctreeImageFilter_GetComputeMin, METH_VARARGS,
   "GetComputeMin(self) -> bool\nC++: virtual bool GetComputeMin()\n\n"},
  {"ComputeMinOn", PyvtkPointSetToOctreeImageFilter_ComputeMinOn, METH_VARARGS,
   "ComputeMinOn(self) -> None\nC++: virtual void ComputeMinOn()\n\n"},
  {"ComputeMinOff", PyvtkPointSetToOctreeImageFilter_ComputeMinOff, METH_VARARGS,
   "ComputeMinOff(self) -> None\nC++: virtual void ComputeMinOff()\n\n"},
  {"SetComputeMax", PyvtkPointSetToOctreeImageFilter_SetComputeMax, METH_VARARGS,
   "SetComputeMax(self, _arg:bool) -> None\nC++: virtual void SetComputeMax(bool _arg)\n\nSet/Get if the max value for each cell id of the point data array\nwill be computed.\n\nThe default is false.\n"},
  {"GetComputeMax", PyvtkPointSetToOctreeImageFilter_GetComputeMax, METH_VARARGS,
   "GetComputeMax(self) -> bool\nC++: virtual bool GetComputeMax()\n\n"},
  {"ComputeMaxOn", PyvtkPointSetToOctreeImageFilter_ComputeMaxOn, METH_VARARGS,
   "ComputeMaxOn(self) -> None\nC++: virtual void ComputeMaxOn()\n\n"},
  {"ComputeMaxOff", PyvtkPointSetToOctreeImageFilter_ComputeMaxOff, METH_VARARGS,
   "ComputeMaxOff(self) -> None\nC++: virtual void ComputeMaxOff()\n\n"},
  {"SetComputeCount", PyvtkPointSetToOctreeImageFilter_SetComputeCount, METH_VARARGS,
   "SetComputeCount(self, _arg:bool) -> None\nC++: virtual void SetComputeCount(bool _arg)\n\nSet/Get if the count of the values for each cell id of the point\ndata array will be computed.\n\nThe default is false.\n"},
  {"GetComputeCount", PyvtkPointSetToOctreeImageFilter_GetComputeCount, METH_VARARGS,
   "GetComputeCount(self) -> bool\nC++: virtual bool GetComputeCount()\n\n"},
  {"ComputeCountOn", PyvtkPointSetToOctreeImageFilter_ComputeCountOn, METH_VARARGS,
   "ComputeCountOn(self) -> None\nC++: virtual void ComputeCountOn()\n\n"},
  {"ComputeCountOff", PyvtkPointSetToOctreeImageFilter_ComputeCountOff, METH_VARARGS,
   "ComputeCountOff(self) -> None\nC++: virtual void ComputeCountOff()\n\n"},
  {"SetComputeSum", PyvtkPointSetToOctreeImageFilter_SetComputeSum, METH_VARARGS,
   "SetComputeSum(self, _arg:bool) -> None\nC++: virtual void SetComputeSum(bool _arg)\n\nSet/Get if the sum of the values for each cell id of the point\ndata array will be computed.\n\nThe default is false.\n"},
  {"GetComputeSum", PyvtkPointSetToOctreeImageFilter_GetComputeSum, METH_VARARGS,
   "GetComputeSum(self) -> bool\nC++: virtual bool GetComputeSum()\n\n"},
  {"ComputeSumOn", PyvtkPointSetToOctreeImageFilter_ComputeSumOn, METH_VARARGS,
   "ComputeSumOn(self) -> None\nC++: virtual void ComputeSumOn()\n\n"},
  {"ComputeSumOff", PyvtkPointSetToOctreeImageFilter_ComputeSumOff, METH_VARARGS,
   "ComputeSumOff(self) -> None\nC++: virtual void ComputeSumOff()\n\n"},
  {"SetComputeMean", PyvtkPointSetToOctreeImageFilter_SetComputeMean, METH_VARARGS,
   "SetComputeMean(self, _arg:bool) -> None\nC++: virtual void SetComputeMean(bool _arg)\n\nSet/Get if the mean value for each cell id of the point data\narray will be computed.\n\nThe default is false.\n\nNote: if ComputeMean is true, the sum and count will be computed\nregardless if they are on or not.\n"},
  {"GetComputeMean", PyvtkPointSetToOctreeImageFilter_GetComputeMean, METH_VARARGS,
   "GetComputeMean(self) -> bool\nC++: virtual bool GetComputeMean()\n\n"},
  {"ComputeMeanOn", PyvtkPointSetToOctreeImageFilter_ComputeMeanOn, METH_VARARGS,
   "ComputeMeanOn(self) -> None\nC++: virtual void ComputeMeanOn()\n\n"},
  {"ComputeMeanOff", PyvtkPointSetToOctreeImageFilter_ComputeMeanOff, METH_VARARGS,
   "ComputeMeanOff(self) -> None\nC++: virtual void ComputeMeanOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointSetToOctreeImageFilter_Doc =
  "vtkPointSetToOctreeImageFilter - convert a point set to an octree\nimage\n\n"
  "Superclass: vtkPartitionedDataSetAlgorithm\n\n"
  "vtkPointSetToOctreeImageFilter is a filter that converts a\n"
  "vtkPointSet to an a vtkPartitionedDataset with one vtkImageData with\n"
  "a number of points per cell target.\n\n"
  "The reason we output a vtkPartitionedDataset is because the\n"
  "WHOLE_EXTENT needs to be dynamic.\n\n"
  "The scalars of the vtkImageData are an octree unsigned char cell data\n"
  "array. Each bit of the unsigned char indicates if the point-set had a\n"
  "point close to one of the 8 corners of the cell.\n\n"
  "It can optionally also output a cell data array based on an input\n"
  "point-data scalar array by setting SetInputArrayToProcess. This array\n"
  "will have 1 or many components that represent different functions\n"
  "i.e. last value, min, max, count, sum, mean.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa vtkOctreeImageToPointSetFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointSetToOctreeImageFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometryPreview.vtkPointSetToOctreeImageFilter", // tp_name
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
  PyvtkPointSetToOctreeImageFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointSetToOctreeImageFilter_StaticNew()
{
  return vtkPointSetToOctreeImageFilter::New();
}

PyObject *PyvtkPointSetToOctreeImageFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointSetToOctreeImageFilter_Type, PyvtkPointSetToOctreeImageFilter_Methods,
    "vtkPointSetToOctreeImageFilter",
 &PyvtkPointSetToOctreeImageFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointSetToOctreeImageFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointSetToOctreeImageFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointSetToOctreeImageFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

