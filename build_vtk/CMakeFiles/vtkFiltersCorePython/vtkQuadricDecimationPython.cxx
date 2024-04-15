// python wrapper for vtkQuadricDecimation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkQuadricDecimation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuadricDecimation(PyObject *dict); }
extern "C" { PyObject *PyvtkQuadricDecimation_ClassNew(); }


static PyObject *
PyvtkQuadricDecimation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuadricDecimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuadricDecimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuadricDecimation *tempr = vtkQuadricDecimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadricDecimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuadricDecimation::NewInstance());

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
PyvtkQuadricDecimation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkQuadricDecimation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkQuadricDecimation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetReduction(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTargetReduction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMinValue() :
      op->vtkQuadricDecimation::GetTargetReductionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMaxValue() :
      op->vtkQuadricDecimation::GetTargetReductionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkQuadricDecimation::GetTargetReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetAttributeErrorMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeErrorMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeErrorMetric(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetAttributeErrorMetric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetAttributeErrorMetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeErrorMetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeErrorMetric() :
      op->vtkQuadricDecimation::GetAttributeErrorMetric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_AttributeErrorMetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributeErrorMetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttributeErrorMetricOn();
    }
    else
    {
      op->vtkQuadricDecimation::AttributeErrorMetricOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_AttributeErrorMetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AttributeErrorMetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AttributeErrorMetricOff();
    }
    else
    {
      op->vtkQuadricDecimation::AttributeErrorMetricOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetVolumePreservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumePreservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumePreservation(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetVolumePreservation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetVolumePreservation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumePreservation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVolumePreservation() :
      op->vtkQuadricDecimation::GetVolumePreservation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VolumePreservationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VolumePreservationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VolumePreservationOn();
    }
    else
    {
      op->vtkQuadricDecimation::VolumePreservationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VolumePreservationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VolumePreservationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VolumePreservationOff();
    }
    else
    {
      op->vtkQuadricDecimation::VolumePreservationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetRegularize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegularize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRegularize(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetRegularize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetRegularize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegularize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegularize() :
      op->vtkQuadricDecimation::GetRegularize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_RegularizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegularizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegularizeOn();
    }
    else
    {
      op->vtkQuadricDecimation::RegularizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_RegularizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegularizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegularizeOff();
    }
    else
    {
      op->vtkQuadricDecimation::RegularizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetRegularization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegularization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRegularization(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetRegularization(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetRegularization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegularization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRegularization() :
      op->vtkQuadricDecimation::GetRegularization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetWeighBoundaryConstraintsByLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeighBoundaryConstraintsByLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWeighBoundaryConstraintsByLength(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetWeighBoundaryConstraintsByLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetWeighBoundaryConstraintsByLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeighBoundaryConstraintsByLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWeighBoundaryConstraintsByLength() :
      op->vtkQuadricDecimation::GetWeighBoundaryConstraintsByLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_WeighBoundaryConstraintsByLengthOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WeighBoundaryConstraintsByLengthOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WeighBoundaryConstraintsByLengthOn();
    }
    else
    {
      op->vtkQuadricDecimation::WeighBoundaryConstraintsByLengthOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_WeighBoundaryConstraintsByLengthOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WeighBoundaryConstraintsByLengthOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WeighBoundaryConstraintsByLengthOff();
    }
    else
    {
      op->vtkQuadricDecimation::WeighBoundaryConstraintsByLengthOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetBoundaryWeightFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryWeightFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryWeightFactor(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetBoundaryWeightFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetBoundaryWeightFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryWeightFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBoundaryWeightFactor() :
      op->vtkQuadricDecimation::GetBoundaryWeightFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetMapPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMapPointData() :
      op->vtkQuadricDecimation::GetMapPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetMapPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapPointData(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetMapPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_MapPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MapPointDataOn();
    }
    else
    {
      op->vtkQuadricDecimation::MapPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_MapPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MapPointDataOff();
    }
    else
    {
      op->vtkQuadricDecimation::MapPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetScalarsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetScalarsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetScalarsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarsAttribute() :
      op->vtkQuadricDecimation::GetScalarsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_ScalarsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::ScalarsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_ScalarsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::ScalarsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetVectorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetVectorsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetVectorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorsAttribute() :
      op->vtkQuadricDecimation::GetVectorsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VectorsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VectorsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VectorsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::VectorsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_VectorsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VectorsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VectorsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::VectorsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetNormalsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetNormalsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetNormalsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalsAttribute() :
      op->vtkQuadricDecimation::GetNormalsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NormalsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::NormalsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_NormalsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::NormalsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTCoordsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTCoordsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTCoordsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTCoordsAttribute() :
      op->vtkQuadricDecimation::GetTCoordsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TCoordsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TCoordsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TCoordsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::TCoordsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TCoordsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TCoordsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TCoordsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::TCoordsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTensorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorsAttribute(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTensorsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTensorsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorsAttribute() :
      op->vtkQuadricDecimation::GetTensorsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TensorsAttributeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorsAttributeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TensorsAttributeOn();
    }
    else
    {
      op->vtkQuadricDecimation::TensorsAttributeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_TensorsAttributeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TensorsAttributeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TensorsAttributeOff();
    }
    else
    {
      op->vtkQuadricDecimation::TensorsAttributeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetScalarsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetScalarsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetVectorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetVectorsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetNormalsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetNormalsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTCoordsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoordsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTCoordsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTCoordsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_SetTensorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorsWeight(temp0);
    }
    else
    {
      op->vtkQuadricDecimation::SetTensorsWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetScalarsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarsWeight() :
      op->vtkQuadricDecimation::GetScalarsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetVectorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVectorsWeight() :
      op->vtkQuadricDecimation::GetVectorsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetNormalsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalsWeight() :
      op->vtkQuadricDecimation::GetNormalsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTCoordsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoordsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTCoordsWeight() :
      op->vtkQuadricDecimation::GetTCoordsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetTensorsWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorsWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTensorsWeight() :
      op->vtkQuadricDecimation::GetTensorsWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuadricDecimation_GetActualReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuadricDecimation *op = static_cast<vtkQuadricDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetActualReduction() :
      op->vtkQuadricDecimation::GetActualReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkQuadricDecimation_Methods[] = {
  {"IsTypeOf", PyvtkQuadricDecimation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuadricDecimation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuadricDecimation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkQuadricDecimation\nC++: static vtkQuadricDecimation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuadricDecimation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkQuadricDecimation\nC++: vtkQuadricDecimation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkQuadricDecimation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkQuadricDecimation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTargetReduction", PyvtkQuadricDecimation_SetTargetReduction, METH_VARARGS,
   "SetTargetReduction(self, _arg:float) -> None\nC++: virtual void SetTargetReduction(double _arg)\n\nSet/Get the desired reduction (expressed as a fraction of the\noriginal number of triangles). The actual reduction may be less\ndepending on triangulation and topological constraints.\n"},
  {"GetTargetReductionMinValue", PyvtkQuadricDecimation_GetTargetReductionMinValue, METH_VARARGS,
   "GetTargetReductionMinValue(self) -> float\nC++: virtual double GetTargetReductionMinValue()\n\n"},
  {"GetTargetReductionMaxValue", PyvtkQuadricDecimation_GetTargetReductionMaxValue, METH_VARARGS,
   "GetTargetReductionMaxValue(self) -> float\nC++: virtual double GetTargetReductionMaxValue()\n\n"},
  {"GetTargetReduction", PyvtkQuadricDecimation_GetTargetReduction, METH_VARARGS,
   "GetTargetReduction(self) -> float\nC++: virtual double GetTargetReduction()\n\n"},
  {"SetAttributeErrorMetric", PyvtkQuadricDecimation_SetAttributeErrorMetric, METH_VARARGS,
   "SetAttributeErrorMetric(self, _arg:int) -> None\nC++: virtual void SetAttributeErrorMetric(vtkTypeBool _arg)\n\nDecide whether to include data attributes in the error metric. If\noff, then only geometric error is used to control the decimation.\nBy default the attribute errors are off.\n"},
  {"GetAttributeErrorMetric", PyvtkQuadricDecimation_GetAttributeErrorMetric, METH_VARARGS,
   "GetAttributeErrorMetric(self) -> int\nC++: virtual vtkTypeBool GetAttributeErrorMetric()\n\n"},
  {"AttributeErrorMetricOn", PyvtkQuadricDecimation_AttributeErrorMetricOn, METH_VARARGS,
   "AttributeErrorMetricOn(self) -> None\nC++: virtual void AttributeErrorMetricOn()\n\n"},
  {"AttributeErrorMetricOff", PyvtkQuadricDecimation_AttributeErrorMetricOff, METH_VARARGS,
   "AttributeErrorMetricOff(self) -> None\nC++: virtual void AttributeErrorMetricOff()\n\n"},
  {"SetVolumePreservation", PyvtkQuadricDecimation_SetVolumePreservation, METH_VARARGS,
   "SetVolumePreservation(self, _arg:int) -> None\nC++: virtual void SetVolumePreservation(vtkTypeBool _arg)\n\nDecide whether to activate volume preservation which greatly\nreduces errors in triangle normal direction. If off, volume\npreservation is disabled and if AttributeErrorMetric is active,\nthese errors can be large. By default VolumePreservation is off\nthe attribute errors are off.\n"},
  {"GetVolumePreservation", PyvtkQuadricDecimation_GetVolumePreservation, METH_VARARGS,
   "GetVolumePreservation(self) -> int\nC++: virtual vtkTypeBool GetVolumePreservation()\n\n"},
  {"VolumePreservationOn", PyvtkQuadricDecimation_VolumePreservationOn, METH_VARARGS,
   "VolumePreservationOn(self) -> None\nC++: virtual void VolumePreservationOn()\n\n"},
  {"VolumePreservationOff", PyvtkQuadricDecimation_VolumePreservationOff, METH_VARARGS,
   "VolumePreservationOff(self) -> None\nC++: virtual void VolumePreservationOff()\n\n"},
  {"SetRegularize", PyvtkQuadricDecimation_SetRegularize, METH_VARARGS,
   "SetRegularize(self, _arg:int) -> None\nC++: virtual void SetRegularize(vtkTypeBool _arg)\n\nParameters related to adding a probabilistic uncertainty to the\nposition and normals of the quadrics following [1]. The goal\nusing these parameters is to regularize the point finding\nalgorithm so as to have better quality mesh elements at the cost\nof a slightly lower precision on the geometry potentially (mostly\nat sharp edges). Can also be useful for decimating meshes that\nhave been triangulated on noisy data.\n\nRegularize: boolean property determining whether or not to use\nthe regularization method Regularization: user defined variable\nthat can be used to adjust the level of regularization. One can\nthink of it as the standard deviation of the probability\ndistribution of normals in the context of noisy data.\n\n[1] P. Trettner and L. Kobbelt, Fast and Robust QEF Minimization\nusing Probabilistic Quadrics, EUROGRAPHICS, Volume 39, Number 2\n(2020)\n"},
  {"GetRegularize", PyvtkQuadricDecimation_GetRegularize, METH_VARARGS,
   "GetRegularize(self) -> int\nC++: virtual vtkTypeBool GetRegularize()\n\n"},
  {"RegularizeOn", PyvtkQuadricDecimation_RegularizeOn, METH_VARARGS,
   "RegularizeOn(self) -> None\nC++: virtual void RegularizeOn()\n\n"},
  {"RegularizeOff", PyvtkQuadricDecimation_RegularizeOff, METH_VARARGS,
   "RegularizeOff(self) -> None\nC++: virtual void RegularizeOff()\n\n"},
  {"SetRegularization", PyvtkQuadricDecimation_SetRegularization, METH_VARARGS,
   "SetRegularization(self, _arg:float) -> None\nC++: virtual void SetRegularization(double _arg)\n\n"},
  {"GetRegularization", PyvtkQuadricDecimation_GetRegularization, METH_VARARGS,
   "GetRegularization(self) -> float\nC++: virtual double GetRegularization()\n\n"},
  {"SetWeighBoundaryConstraintsByLength", PyvtkQuadricDecimation_SetWeighBoundaryConstraintsByLength, METH_VARARGS,
   "SetWeighBoundaryConstraintsByLength(self, _arg:int) -> None\nC++: virtual void SetWeighBoundaryConstraintsByLength(\n    vtkTypeBool _arg)\n\nParameters related to the treatment of the boundary of the mesh\nduring decimation.\n\nWeighBoundaryConstraintsByLength: When this boolean is set to\ntrue, use the legacy weighting by boundary_edge_length instead of\nby boundary_edge_length^2 for backwards compatibility (default to\nfalse) BoundaryWeightFactor: A floating point factor to weigh the\nboundary quadric constraints by: higher factors further constrain\nthe boundary.\n"},
  {"GetWeighBoundaryConstraintsByLength", PyvtkQuadricDecimation_GetWeighBoundaryConstraintsByLength, METH_VARARGS,
   "GetWeighBoundaryConstraintsByLength(self) -> int\nC++: virtual vtkTypeBool GetWeighBoundaryConstraintsByLength()\n\n"},
  {"WeighBoundaryConstraintsByLengthOn", PyvtkQuadricDecimation_WeighBoundaryConstraintsByLengthOn, METH_VARARGS,
   "WeighBoundaryConstraintsByLengthOn(self) -> None\nC++: virtual void WeighBoundaryConstraintsByLengthOn()\n\n"},
  {"WeighBoundaryConstraintsByLengthOff", PyvtkQuadricDecimation_WeighBoundaryConstraintsByLengthOff, METH_VARARGS,
   "WeighBoundaryConstraintsByLengthOff(self) -> None\nC++: virtual void WeighBoundaryConstraintsByLengthOff()\n\n"},
  {"SetBoundaryWeightFactor", PyvtkQuadricDecimation_SetBoundaryWeightFactor, METH_VARARGS,
   "SetBoundaryWeightFactor(self, _arg:float) -> None\nC++: virtual void SetBoundaryWeightFactor(double _arg)\n\n"},
  {"GetBoundaryWeightFactor", PyvtkQuadricDecimation_GetBoundaryWeightFactor, METH_VARARGS,
   "GetBoundaryWeightFactor(self) -> float\nC++: virtual double GetBoundaryWeightFactor()\n\n"},
  {"GetMapPointData", PyvtkQuadricDecimation_GetMapPointData, METH_VARARGS,
   "GetMapPointData(self) -> bool\nC++: virtual bool GetMapPointData()\n\nGetter/Setter for mapping point data to the output during\ndecimation.\n"},
  {"SetMapPointData", PyvtkQuadricDecimation_SetMapPointData, METH_VARARGS,
   "SetMapPointData(self, _arg:bool) -> None\nC++: virtual void SetMapPointData(bool _arg)\n\n"},
  {"MapPointDataOn", PyvtkQuadricDecimation_MapPointDataOn, METH_VARARGS,
   "MapPointDataOn(self) -> None\nC++: virtual void MapPointDataOn()\n\n"},
  {"MapPointDataOff", PyvtkQuadricDecimation_MapPointDataOff, METH_VARARGS,
   "MapPointDataOff(self) -> None\nC++: virtual void MapPointDataOff()\n\n"},
  {"SetScalarsAttribute", PyvtkQuadricDecimation_SetScalarsAttribute, METH_VARARGS,
   "SetScalarsAttribute(self, _arg:int) -> None\nC++: virtual void SetScalarsAttribute(vtkTypeBool _arg)\n\nIf attribute errors are to be included in the metric (i.e.,\nAttributeErrorMetric is on), then the following flags control\nwhich attributes are to be included in the error calculation. By\ndefault all of these are on.\n"},
  {"GetScalarsAttribute", PyvtkQuadricDecimation_GetScalarsAttribute, METH_VARARGS,
   "GetScalarsAttribute(self) -> int\nC++: virtual vtkTypeBool GetScalarsAttribute()\n\n"},
  {"ScalarsAttributeOn", PyvtkQuadricDecimation_ScalarsAttributeOn, METH_VARARGS,
   "ScalarsAttributeOn(self) -> None\nC++: virtual void ScalarsAttributeOn()\n\n"},
  {"ScalarsAttributeOff", PyvtkQuadricDecimation_ScalarsAttributeOff, METH_VARARGS,
   "ScalarsAttributeOff(self) -> None\nC++: virtual void ScalarsAttributeOff()\n\n"},
  {"SetVectorsAttribute", PyvtkQuadricDecimation_SetVectorsAttribute, METH_VARARGS,
   "SetVectorsAttribute(self, _arg:int) -> None\nC++: virtual void SetVectorsAttribute(vtkTypeBool _arg)\n\n"},
  {"GetVectorsAttribute", PyvtkQuadricDecimation_GetVectorsAttribute, METH_VARARGS,
   "GetVectorsAttribute(self) -> int\nC++: virtual vtkTypeBool GetVectorsAttribute()\n\n"},
  {"VectorsAttributeOn", PyvtkQuadricDecimation_VectorsAttributeOn, METH_VARARGS,
   "VectorsAttributeOn(self) -> None\nC++: virtual void VectorsAttributeOn()\n\n"},
  {"VectorsAttributeOff", PyvtkQuadricDecimation_VectorsAttributeOff, METH_VARARGS,
   "VectorsAttributeOff(self) -> None\nC++: virtual void VectorsAttributeOff()\n\n"},
  {"SetNormalsAttribute", PyvtkQuadricDecimation_SetNormalsAttribute, METH_VARARGS,
   "SetNormalsAttribute(self, _arg:int) -> None\nC++: virtual void SetNormalsAttribute(vtkTypeBool _arg)\n\n"},
  {"GetNormalsAttribute", PyvtkQuadricDecimation_GetNormalsAttribute, METH_VARARGS,
   "GetNormalsAttribute(self) -> int\nC++: virtual vtkTypeBool GetNormalsAttribute()\n\n"},
  {"NormalsAttributeOn", PyvtkQuadricDecimation_NormalsAttributeOn, METH_VARARGS,
   "NormalsAttributeOn(self) -> None\nC++: virtual void NormalsAttributeOn()\n\n"},
  {"NormalsAttributeOff", PyvtkQuadricDecimation_NormalsAttributeOff, METH_VARARGS,
   "NormalsAttributeOff(self) -> None\nC++: virtual void NormalsAttributeOff()\n\n"},
  {"SetTCoordsAttribute", PyvtkQuadricDecimation_SetTCoordsAttribute, METH_VARARGS,
   "SetTCoordsAttribute(self, _arg:int) -> None\nC++: virtual void SetTCoordsAttribute(vtkTypeBool _arg)\n\n"},
  {"GetTCoordsAttribute", PyvtkQuadricDecimation_GetTCoordsAttribute, METH_VARARGS,
   "GetTCoordsAttribute(self) -> int\nC++: virtual vtkTypeBool GetTCoordsAttribute()\n\n"},
  {"TCoordsAttributeOn", PyvtkQuadricDecimation_TCoordsAttributeOn, METH_VARARGS,
   "TCoordsAttributeOn(self) -> None\nC++: virtual void TCoordsAttributeOn()\n\n"},
  {"TCoordsAttributeOff", PyvtkQuadricDecimation_TCoordsAttributeOff, METH_VARARGS,
   "TCoordsAttributeOff(self) -> None\nC++: virtual void TCoordsAttributeOff()\n\n"},
  {"SetTensorsAttribute", PyvtkQuadricDecimation_SetTensorsAttribute, METH_VARARGS,
   "SetTensorsAttribute(self, _arg:int) -> None\nC++: virtual void SetTensorsAttribute(vtkTypeBool _arg)\n\n"},
  {"GetTensorsAttribute", PyvtkQuadricDecimation_GetTensorsAttribute, METH_VARARGS,
   "GetTensorsAttribute(self) -> int\nC++: virtual vtkTypeBool GetTensorsAttribute()\n\n"},
  {"TensorsAttributeOn", PyvtkQuadricDecimation_TensorsAttributeOn, METH_VARARGS,
   "TensorsAttributeOn(self) -> None\nC++: virtual void TensorsAttributeOn()\n\n"},
  {"TensorsAttributeOff", PyvtkQuadricDecimation_TensorsAttributeOff, METH_VARARGS,
   "TensorsAttributeOff(self) -> None\nC++: virtual void TensorsAttributeOff()\n\n"},
  {"SetScalarsWeight", PyvtkQuadricDecimation_SetScalarsWeight, METH_VARARGS,
   "SetScalarsWeight(self, _arg:float) -> None\nC++: virtual void SetScalarsWeight(double _arg)\n\nSet/Get the scaling weight contribution of the attribute. These\nvalues are used to weight the contribution of the attributes\ntowards the error metric.\n"},
  {"SetVectorsWeight", PyvtkQuadricDecimation_SetVectorsWeight, METH_VARARGS,
   "SetVectorsWeight(self, _arg:float) -> None\nC++: virtual void SetVectorsWeight(double _arg)\n\n"},
  {"SetNormalsWeight", PyvtkQuadricDecimation_SetNormalsWeight, METH_VARARGS,
   "SetNormalsWeight(self, _arg:float) -> None\nC++: virtual void SetNormalsWeight(double _arg)\n\n"},
  {"SetTCoordsWeight", PyvtkQuadricDecimation_SetTCoordsWeight, METH_VARARGS,
   "SetTCoordsWeight(self, _arg:float) -> None\nC++: virtual void SetTCoordsWeight(double _arg)\n\n"},
  {"SetTensorsWeight", PyvtkQuadricDecimation_SetTensorsWeight, METH_VARARGS,
   "SetTensorsWeight(self, _arg:float) -> None\nC++: virtual void SetTensorsWeight(double _arg)\n\n"},
  {"GetScalarsWeight", PyvtkQuadricDecimation_GetScalarsWeight, METH_VARARGS,
   "GetScalarsWeight(self) -> float\nC++: virtual double GetScalarsWeight()\n\n"},
  {"GetVectorsWeight", PyvtkQuadricDecimation_GetVectorsWeight, METH_VARARGS,
   "GetVectorsWeight(self) -> float\nC++: virtual double GetVectorsWeight()\n\n"},
  {"GetNormalsWeight", PyvtkQuadricDecimation_GetNormalsWeight, METH_VARARGS,
   "GetNormalsWeight(self) -> float\nC++: virtual double GetNormalsWeight()\n\n"},
  {"GetTCoordsWeight", PyvtkQuadricDecimation_GetTCoordsWeight, METH_VARARGS,
   "GetTCoordsWeight(self) -> float\nC++: virtual double GetTCoordsWeight()\n\n"},
  {"GetTensorsWeight", PyvtkQuadricDecimation_GetTensorsWeight, METH_VARARGS,
   "GetTensorsWeight(self) -> float\nC++: virtual double GetTensorsWeight()\n\n"},
  {"GetActualReduction", PyvtkQuadricDecimation_GetActualReduction, METH_VARARGS,
   "GetActualReduction(self) -> float\nC++: virtual double GetActualReduction()\n\nGet the actual reduction. This value is only valid after the\nfilter has executed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkQuadricDecimation_Doc =
  "vtkQuadricDecimation - reduce the number of triangles in a mesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkQuadricDecimation is a filter to reduce the number of triangles in\n"
  "a triangle mesh, forming a good approximation to the original\n"
  "geometry. The input to vtkQuadricDecimation is a vtkPolyData object,\n"
  "and only triangles are treated. If you desire to decimate polygonal\n"
  "meshes, first triangulate the polygons with vtkTriangleFilter.\n\n"
  "The algorithm is based on repeated edge collapses until the requested\n"
  "mesh reduction is achieved. Edges are placed in a priority queue\n"
  "based on the \"cost\" to delete the edge. The cost is an approximate\n"
  "measure of error (distance to the original surface)--described by the\n"
  "so-called quadric error measure. The quadric error measure is\n"
  "associated with each vertex of the mesh and represents a matrix of\n"
  "planes incident on that vertex. The distance of the planes to the\n"
  "vertex is the error in the position of the vertex (originally the\n"
  "vertex error iz zero). As edges are deleted, the quadric error\n"
  "measure associated with the two end points of the edge are summed\n"
  "(this combines the plane equations) and an optimal collapse point can\n"
  "be computed. Edges connected to the collapse point are then\n"
  "reinserted into the queue after computing the new cost to delete\n"
  "them. The process continues until the desired reduction level is\n"
  "reached or topological constraints prevent further reduction. Note\n"
  "that this basic algorithm can be extended to higher dimensions by\n"
  "taking into account variation in attributes (i.e., scalars, vectors,\n"
  "and so on).\n\n"
  "This paper is based on the work of Garland and Heckbert who first\n"
  "presented the quadric error measure at Siggraph '97 \"Surface\n"
  "Simplification Using Quadric Error Metrics\". For details of the\n"
  "algorithm Michael Garland's Ph.D. thesis is also recommended. Hughues\n"
  "Hoppe's Vis '99 paper, \"New Quadric Metric for Simplifying Meshes\n"
  "with Appearance Attributes\" is also a good take on the subject\n"
  "especially as it pertains to the error metric applied to attributes.\n\n"
  "@par Thanks: Thanks to Bradley Lowekamp of the National Library of\n"
  "Medicine/NIH for contributing this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkQuadricDecimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkQuadricDecimation", // tp_name
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
  PyvtkQuadricDecimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuadricDecimation_StaticNew()
{
  return vtkQuadricDecimation::New();
}

PyObject *PyvtkQuadricDecimation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkQuadricDecimation_Type, PyvtkQuadricDecimation_Methods,
    "vtkQuadricDecimation",
 &PyvtkQuadricDecimation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuadricDecimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuadricDecimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuadricDecimation", o) != 0)
  {
    Py_DECREF(o);
  }

}

