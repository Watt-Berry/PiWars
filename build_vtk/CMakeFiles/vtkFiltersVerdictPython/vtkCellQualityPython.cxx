// python wrapper for vtkCellQuality
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellQuality.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellQuality(PyObject *dict); }
extern "C" { PyObject *PyvtkCellQuality_ClassNew(); }


static PyObject *
PyvtkCellQuality_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellQuality::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellQuality::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellQuality *tempr = vtkCellQuality::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellQuality *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellQuality::NewInstance());

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
PyvtkCellQuality_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellQuality::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellQuality::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasure(temp0);
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToArea();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToAspectFrobenius();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectGamma(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectGamma");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToAspectGamma();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToAspectGamma();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToAspectRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToAspectRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToAspectRatio();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToAspectRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToCollapseRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToCollapseRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToCollapseRatio();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToCollapseRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToCondition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToCondition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToCondition();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToCondition();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToDiagonal();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToDiagonal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToDimension();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToDimension();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToDistortion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToDistortion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToDistortion();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToDistortion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToJacobian();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMaxAngle();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMaxAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMaxAspectFrobenius();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMaxAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMaxEdgeRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMaxEdgeRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMaxEdgeRatio();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMaxEdgeRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMedAspectFrobenius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMedAspectFrobenius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMedAspectFrobenius();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMedAspectFrobenius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToMinAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToMinAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToMinAngle();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToMinAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToOddy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToOddy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToOddy();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToOddy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToRadiusRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToRadiusRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToRadiusRatio();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToRadiusRatio();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToRelativeSizeSquared(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToRelativeSizeSquared");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToRelativeSizeSquared();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToRelativeSizeSquared();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToScaledJacobian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToScaledJacobian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToScaledJacobian();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToScaledJacobian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShapeAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShapeAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToShapeAndSize();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToShapeAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToShape();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToShape();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShearAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShearAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToShearAndSize();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToShearAndSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToShear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToShear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToShear();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToShear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToSkew(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToSkew");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToSkew();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToSkew();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToStretch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToStretch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToStretch();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToStretch();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToTaper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToTaper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToTaper();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToTaper();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToVolume();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToVolume();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetQualityMeasureToWarpage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQualityMeasureToWarpage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetQualityMeasureToWarpage();
    }
    else
    {
      op->vtkCellQuality::SetQualityMeasureToWarpage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetUnsupportedGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnsupportedGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnsupportedGeometry(temp0);
    }
    else
    {
      op->vtkCellQuality::SetUnsupportedGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_GetUnsupportedGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnsupportedGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUnsupportedGeometry() :
      op->vtkCellQuality::GetUnsupportedGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_SetUndefinedQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUndefinedQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUndefinedQuality(temp0);
    }
    else
    {
      op->vtkCellQuality::SetUndefinedQuality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_GetUndefinedQuality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUndefinedQuality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUndefinedQuality() :
      op->vtkCellQuality::GetUndefinedQuality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_TriangleStripArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangleStripArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = (ap.IsBound() ?
      op->TriangleStripArea(temp0) :
      op->vtkCellQuality::TriangleStripArea(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_PixelArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PixelArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = (ap.IsBound() ?
      op->PixelArea(temp0) :
      op->vtkCellQuality::PixelArea(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellQuality_PolygonArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolygonArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellQuality *op = static_cast<vtkCellQuality *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    double tempr = (ap.IsBound() ?
      op->PolygonArea(temp0) :
      op->vtkCellQuality::PolygonArea(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellQuality_Methods[] = {
  {"IsTypeOf", PyvtkCellQuality_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellQuality_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellQuality_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellQuality\nC++: static vtkCellQuality *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellQuality_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellQuality\nC++: vtkCellQuality *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellQuality_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellQuality_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetQualityMeasure", PyvtkCellQuality_SetQualityMeasure, METH_VARARGS,
   "SetQualityMeasure(self, measure:int) -> None\nC++: virtual void SetQualityMeasure(int measure)\n\n"},
  {"SetQualityMeasureToArea", PyvtkCellQuality_SetQualityMeasureToArea, METH_VARARGS,
   "SetQualityMeasureToArea(self) -> None\nC++: void SetQualityMeasureToArea()\n\n"},
  {"SetQualityMeasureToAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToAspectFrobenius, METH_VARARGS,
   "SetQualityMeasureToAspectFrobenius(self) -> None\nC++: void SetQualityMeasureToAspectFrobenius()\n\n"},
  {"SetQualityMeasureToAspectGamma", PyvtkCellQuality_SetQualityMeasureToAspectGamma, METH_VARARGS,
   "SetQualityMeasureToAspectGamma(self) -> None\nC++: void SetQualityMeasureToAspectGamma()\n\n"},
  {"SetQualityMeasureToAspectRatio", PyvtkCellQuality_SetQualityMeasureToAspectRatio, METH_VARARGS,
   "SetQualityMeasureToAspectRatio(self) -> None\nC++: void SetQualityMeasureToAspectRatio()\n\n"},
  {"SetQualityMeasureToCollapseRatio", PyvtkCellQuality_SetQualityMeasureToCollapseRatio, METH_VARARGS,
   "SetQualityMeasureToCollapseRatio(self) -> None\nC++: void SetQualityMeasureToCollapseRatio()\n\n"},
  {"SetQualityMeasureToCondition", PyvtkCellQuality_SetQualityMeasureToCondition, METH_VARARGS,
   "SetQualityMeasureToCondition(self) -> None\nC++: void SetQualityMeasureToCondition()\n\n"},
  {"SetQualityMeasureToDiagonal", PyvtkCellQuality_SetQualityMeasureToDiagonal, METH_VARARGS,
   "SetQualityMeasureToDiagonal(self) -> None\nC++: void SetQualityMeasureToDiagonal()\n\n"},
  {"SetQualityMeasureToDimension", PyvtkCellQuality_SetQualityMeasureToDimension, METH_VARARGS,
   "SetQualityMeasureToDimension(self) -> None\nC++: void SetQualityMeasureToDimension()\n\n"},
  {"SetQualityMeasureToDistortion", PyvtkCellQuality_SetQualityMeasureToDistortion, METH_VARARGS,
   "SetQualityMeasureToDistortion(self) -> None\nC++: void SetQualityMeasureToDistortion()\n\n"},
  {"SetQualityMeasureToJacobian", PyvtkCellQuality_SetQualityMeasureToJacobian, METH_VARARGS,
   "SetQualityMeasureToJacobian(self) -> None\nC++: void SetQualityMeasureToJacobian()\n\n"},
  {"SetQualityMeasureToMaxAngle", PyvtkCellQuality_SetQualityMeasureToMaxAngle, METH_VARARGS,
   "SetQualityMeasureToMaxAngle(self) -> None\nC++: void SetQualityMeasureToMaxAngle()\n\n"},
  {"SetQualityMeasureToMaxAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToMaxAspectFrobenius, METH_VARARGS,
   "SetQualityMeasureToMaxAspectFrobenius(self) -> None\nC++: void SetQualityMeasureToMaxAspectFrobenius()\n\n"},
  {"SetQualityMeasureToMaxEdgeRatio", PyvtkCellQuality_SetQualityMeasureToMaxEdgeRatio, METH_VARARGS,
   "SetQualityMeasureToMaxEdgeRatio(self) -> None\nC++: void SetQualityMeasureToMaxEdgeRatio()\n\n"},
  {"SetQualityMeasureToMedAspectFrobenius", PyvtkCellQuality_SetQualityMeasureToMedAspectFrobenius, METH_VARARGS,
   "SetQualityMeasureToMedAspectFrobenius(self) -> None\nC++: void SetQualityMeasureToMedAspectFrobenius()\n\n"},
  {"SetQualityMeasureToMinAngle", PyvtkCellQuality_SetQualityMeasureToMinAngle, METH_VARARGS,
   "SetQualityMeasureToMinAngle(self) -> None\nC++: void SetQualityMeasureToMinAngle()\n\n"},
  {"SetQualityMeasureToOddy", PyvtkCellQuality_SetQualityMeasureToOddy, METH_VARARGS,
   "SetQualityMeasureToOddy(self) -> None\nC++: void SetQualityMeasureToOddy()\n\n"},
  {"SetQualityMeasureToRadiusRatio", PyvtkCellQuality_SetQualityMeasureToRadiusRatio, METH_VARARGS,
   "SetQualityMeasureToRadiusRatio(self) -> None\nC++: void SetQualityMeasureToRadiusRatio()\n\n"},
  {"SetQualityMeasureToRelativeSizeSquared", PyvtkCellQuality_SetQualityMeasureToRelativeSizeSquared, METH_VARARGS,
   "SetQualityMeasureToRelativeSizeSquared(self) -> None\nC++: void SetQualityMeasureToRelativeSizeSquared()\n\n"},
  {"SetQualityMeasureToScaledJacobian", PyvtkCellQuality_SetQualityMeasureToScaledJacobian, METH_VARARGS,
   "SetQualityMeasureToScaledJacobian(self) -> None\nC++: void SetQualityMeasureToScaledJacobian()\n\n"},
  {"SetQualityMeasureToShapeAndSize", PyvtkCellQuality_SetQualityMeasureToShapeAndSize, METH_VARARGS,
   "SetQualityMeasureToShapeAndSize(self) -> None\nC++: void SetQualityMeasureToShapeAndSize()\n\n"},
  {"SetQualityMeasureToShape", PyvtkCellQuality_SetQualityMeasureToShape, METH_VARARGS,
   "SetQualityMeasureToShape(self) -> None\nC++: void SetQualityMeasureToShape()\n\n"},
  {"SetQualityMeasureToShearAndSize", PyvtkCellQuality_SetQualityMeasureToShearAndSize, METH_VARARGS,
   "SetQualityMeasureToShearAndSize(self) -> None\nC++: void SetQualityMeasureToShearAndSize()\n\n"},
  {"SetQualityMeasureToShear", PyvtkCellQuality_SetQualityMeasureToShear, METH_VARARGS,
   "SetQualityMeasureToShear(self) -> None\nC++: void SetQualityMeasureToShear()\n\n"},
  {"SetQualityMeasureToSkew", PyvtkCellQuality_SetQualityMeasureToSkew, METH_VARARGS,
   "SetQualityMeasureToSkew(self) -> None\nC++: void SetQualityMeasureToSkew()\n\n"},
  {"SetQualityMeasureToStretch", PyvtkCellQuality_SetQualityMeasureToStretch, METH_VARARGS,
   "SetQualityMeasureToStretch(self) -> None\nC++: void SetQualityMeasureToStretch()\n\n"},
  {"SetQualityMeasureToTaper", PyvtkCellQuality_SetQualityMeasureToTaper, METH_VARARGS,
   "SetQualityMeasureToTaper(self) -> None\nC++: void SetQualityMeasureToTaper()\n\n"},
  {"SetQualityMeasureToVolume", PyvtkCellQuality_SetQualityMeasureToVolume, METH_VARARGS,
   "SetQualityMeasureToVolume(self) -> None\nC++: void SetQualityMeasureToVolume()\n\n"},
  {"SetQualityMeasureToWarpage", PyvtkCellQuality_SetQualityMeasureToWarpage, METH_VARARGS,
   "SetQualityMeasureToWarpage(self) -> None\nC++: void SetQualityMeasureToWarpage()\n\n"},
  {"SetUnsupportedGeometry", PyvtkCellQuality_SetUnsupportedGeometry, METH_VARARGS,
   "SetUnsupportedGeometry(self, _arg:float) -> None\nC++: virtual void SetUnsupportedGeometry(double _arg)\n\nSet/Get the return value for unsupported geometry. Unsupported\ngeometry are geometries that are not supported by this filter\ncurrently, future implementation might include support for them.\nThe default value for UnsupportedGeometry is -1.\n"},
  {"GetUnsupportedGeometry", PyvtkCellQuality_GetUnsupportedGeometry, METH_VARARGS,
   "GetUnsupportedGeometry(self) -> float\nC++: virtual double GetUnsupportedGeometry()\n\n"},
  {"SetUndefinedQuality", PyvtkCellQuality_SetUndefinedQuality, METH_VARARGS,
   "SetUndefinedQuality(self, _arg:float) -> None\nC++: virtual void SetUndefinedQuality(double _arg)\n\nSet/Get the return value for undefined quality. Undefined quality\nare qualities that could be addressed by this filter but is not\nwell defined for the particular geometry of cell in question,\ne.g. a volume query for a triangle. Undefined quality will always\nbe undefined. The default value for UndefinedQuality is -1.\n"},
  {"GetUndefinedQuality", PyvtkCellQuality_GetUndefinedQuality, METH_VARARGS,
   "GetUndefinedQuality(self) -> float\nC++: virtual double GetUndefinedQuality()\n\n"},
  {"TriangleStripArea", PyvtkCellQuality_TriangleStripArea, METH_VARARGS,
   "TriangleStripArea(self, __a:vtkCell) -> float\nC++: double TriangleStripArea(vtkCell *)\n\n"},
  {"PixelArea", PyvtkCellQuality_PixelArea, METH_VARARGS,
   "PixelArea(self, __a:vtkCell) -> float\nC++: double PixelArea(vtkCell *)\n\n"},
  {"PolygonArea", PyvtkCellQuality_PolygonArea, METH_VARARGS,
   "PolygonArea(self, __a:vtkCell) -> float\nC++: double PolygonArea(vtkCell *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellQuality_Doc =
  "vtkCellQuality - Calculate functions of quality of the elements of a\nmesh\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkCellQuality computes one or more functions of (geometric) quality\n"
  "for each cell of a mesh.  The per-cell quality is added to the mesh's\n"
  "cell data, in an array named \"CellQuality.\" Cell types not supported\n"
  "by this filter or undefined quality of supported cell types will have\n"
  "an entry of -1.\n\n"
  "@warning\n"
  "Most quadrilateral quality functions are intended for planar\n"
  "quadrilaterals only.  The minimal angle is not, strictly speaking, a\n"
  "quality function, but it is provided because of its usage by many\n"
  "authors.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellQuality_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersVerdict.vtkCellQuality", // tp_name
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
  PyvtkCellQuality_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellQuality_StaticNew()
{
  return vtkCellQuality::New();
}

PyObject *PyvtkCellQuality_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellQuality_Type, PyvtkCellQuality_Methods,
    "vtkCellQuality",
 &PyvtkCellQuality_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellQuality(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellQuality_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellQuality", o) != 0)
  {
    Py_DECREF(o);
  }

}

