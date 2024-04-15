// python wrapper for vtkWindowedSincPolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWindowedSincPolyDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWindowedSincPolyDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkWindowedSincPolyDataFilter_ClassNew(); }


static PyObject *
PyvtkWindowedSincPolyDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWindowedSincPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWindowedSincPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWindowedSincPolyDataFilter *tempr = vtkWindowedSincPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindowedSincPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWindowedSincPolyDataFilter::NewInstance());

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
PyvtkWindowedSincPolyDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWindowedSincPolyDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkWindowedSincPolyDataFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetPassBand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassBand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassBand(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetPassBand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBandMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBandMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPassBandMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetPassBandMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBandMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBandMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPassBandMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetPassBandMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetPassBand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassBand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPassBand() :
      op->vtkWindowedSincPolyDataFilter::GetPassBand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetNormalizeCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeCoordinates(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetNormalizeCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNormalizeCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeCoordinates() :
      op->vtkWindowedSincPolyDataFilter::GetNormalizeCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeCoordinatesOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeCoordinatesOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::NormalizeCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureEdgeSmoothing(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetFeatureEdgeSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFeatureEdgeSmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureEdgeSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgeSmoothingOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgeSmoothingOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::FeatureEdgeSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureAngle(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkWindowedSincPolyDataFilter::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeAngle(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetEdgeAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMinValue() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMaxValue() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngle() :
      op->vtkWindowedSincPolyDataFilter::GetEdgeAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundarySmoothing(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetBoundarySmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundarySmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetBoundarySmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundarySmoothingOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::BoundarySmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundarySmoothingOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::BoundarySmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetNonManifoldSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonManifoldSmoothing(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetNonManifoldSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetNonManifoldSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonManifoldSmoothing() :
      op->vtkWindowedSincPolyDataFilter::GetNonManifoldSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldSmoothingOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldSmoothingOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::NonManifoldSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetWeightNonManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeightNonManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWeightNonManifoldEdges(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetWeightNonManifoldEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetWeightNonManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeightNonManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWeightNonManifoldEdges() :
      op->vtkWindowedSincPolyDataFilter::GetWeightNonManifoldEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_WeightNonManifoldEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WeightNonManifoldEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WeightNonManifoldEdgesOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::WeightNonManifoldEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_WeightNonManifoldEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WeightNonManifoldEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WeightNonManifoldEdgesOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::WeightNonManifoldEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateErrorScalars(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetGenerateErrorScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorScalars() :
      op->vtkWindowedSincPolyDataFilter::GetGenerateErrorScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_SetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateErrorVectors(temp0);
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::SetGenerateErrorVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorVectors() :
      op->vtkWindowedSincPolyDataFilter::GetGenerateErrorVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOn();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWindowedSincPolyDataFilter *op = static_cast<vtkWindowedSincPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOff();
    }
    else
    {
      op->vtkWindowedSincPolyDataFilter::GenerateErrorVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWindowedSincPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkWindowedSincPolyDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWindowedSincPolyDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWindowedSincPolyDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWindowedSincPolyDataFilter\nC++: static vtkWindowedSincPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWindowedSincPolyDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWindowedSincPolyDataFilter\nC++: vtkWindowedSincPolyDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWindowedSincPolyDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWindowedSincPolyDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfIterations", PyvtkWindowedSincPolyDataFilter_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetNumberOfIterations(int _arg)\n\nSpecify the number of iterations (i.e., the degree of the\npolynomial approximating the windowed sinc function). Typically\nvalues around 20 are used.\n"},
  {"GetNumberOfIterationsMinValue", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMinValue, METH_VARARGS,
   "GetNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetNumberOfIterationsMinValue()\n\n"},
  {"GetNumberOfIterationsMaxValue", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterationsMaxValue, METH_VARARGS,
   "GetNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetNumberOfIterationsMaxValue()\n\n"},
  {"GetNumberOfIterations", PyvtkWindowedSincPolyDataFilter_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: virtual int GetNumberOfIterations()\n\n"},
  {"SetPassBand", PyvtkWindowedSincPolyDataFilter_SetPassBand, METH_VARARGS,
   "SetPassBand(self, _arg:float) -> None\nC++: virtual void SetPassBand(double _arg)\n\nSet the passband value for the windowed sinc filter.\n"},
  {"GetPassBandMinValue", PyvtkWindowedSincPolyDataFilter_GetPassBandMinValue, METH_VARARGS,
   "GetPassBandMinValue(self) -> float\nC++: virtual double GetPassBandMinValue()\n\n"},
  {"GetPassBandMaxValue", PyvtkWindowedSincPolyDataFilter_GetPassBandMaxValue, METH_VARARGS,
   "GetPassBandMaxValue(self) -> float\nC++: virtual double GetPassBandMaxValue()\n\n"},
  {"GetPassBand", PyvtkWindowedSincPolyDataFilter_GetPassBand, METH_VARARGS,
   "GetPassBand(self) -> float\nC++: virtual double GetPassBand()\n\n"},
  {"SetNormalizeCoordinates", PyvtkWindowedSincPolyDataFilter_SetNormalizeCoordinates, METH_VARARGS,
   "SetNormalizeCoordinates(self, _arg:int) -> None\nC++: virtual void SetNormalizeCoordinates(vtkTypeBool _arg)\n\nTurn on/off coordinate normalization.  The positions can be\ntranslated and scaled such that they fit within a [-1, 1] prior\nto the smoothing computation. The default is off.  The numerical\nstability of the solution can be improved by turning\nnormalization on.  If normalization is on, the coordinates will\nbe rescaled to the original coordinate system after smoothing has\ncompleted.\n"},
  {"GetNormalizeCoordinates", PyvtkWindowedSincPolyDataFilter_GetNormalizeCoordinates, METH_VARARGS,
   "GetNormalizeCoordinates(self) -> int\nC++: virtual vtkTypeBool GetNormalizeCoordinates()\n\n"},
  {"NormalizeCoordinatesOn", PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOn, METH_VARARGS,
   "NormalizeCoordinatesOn(self) -> None\nC++: virtual void NormalizeCoordinatesOn()\n\n"},
  {"NormalizeCoordinatesOff", PyvtkWindowedSincPolyDataFilter_NormalizeCoordinatesOff, METH_VARARGS,
   "NormalizeCoordinatesOff(self) -> None\nC++: virtual void NormalizeCoordinatesOff()\n\n"},
  {"SetFeatureEdgeSmoothing", PyvtkWindowedSincPolyDataFilter_SetFeatureEdgeSmoothing, METH_VARARGS,
   "SetFeatureEdgeSmoothing(self, _arg:int) -> None\nC++: virtual void SetFeatureEdgeSmoothing(vtkTypeBool _arg)\n\nTurn on/off smoothing points along sharp interior edges. Enabling\nthis option has a performance impact on the algorithm since\nneihborhood information (cell links) and polygon normals must be\ncomputed.\n"},
  {"GetFeatureEdgeSmoothing", PyvtkWindowedSincPolyDataFilter_GetFeatureEdgeSmoothing, METH_VARARGS,
   "GetFeatureEdgeSmoothing(self) -> int\nC++: virtual vtkTypeBool GetFeatureEdgeSmoothing()\n\n"},
  {"FeatureEdgeSmoothingOn", PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOn, METH_VARARGS,
   "FeatureEdgeSmoothingOn(self) -> None\nC++: virtual void FeatureEdgeSmoothingOn()\n\n"},
  {"FeatureEdgeSmoothingOff", PyvtkWindowedSincPolyDataFilter_FeatureEdgeSmoothingOff, METH_VARARGS,
   "FeatureEdgeSmoothingOff(self) -> None\nC++: virtual void FeatureEdgeSmoothingOff()\n\n"},
  {"SetFeatureAngle", PyvtkWindowedSincPolyDataFilter_SetFeatureAngle, METH_VARARGS,
   "SetFeatureAngle(self, _arg:float) -> None\nC++: virtual void SetFeatureAngle(double _arg)\n\nSpecify the feature angle for sharp edge identification. It only\naffects the filter when FeatureEdgeSmoothing is enabled.\n"},
  {"GetFeatureAngleMinValue", PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMinValue, METH_VARARGS,
   "GetFeatureAngleMinValue(self) -> float\nC++: virtual double GetFeatureAngleMinValue()\n\n"},
  {"GetFeatureAngleMaxValue", PyvtkWindowedSincPolyDataFilter_GetFeatureAngleMaxValue, METH_VARARGS,
   "GetFeatureAngleMaxValue(self) -> float\nC++: virtual double GetFeatureAngleMaxValue()\n\n"},
  {"GetFeatureAngle", PyvtkWindowedSincPolyDataFilter_GetFeatureAngle, METH_VARARGS,
   "GetFeatureAngle(self) -> float\nC++: virtual double GetFeatureAngle()\n\n"},
  {"SetEdgeAngle", PyvtkWindowedSincPolyDataFilter_SetEdgeAngle, METH_VARARGS,
   "SetEdgeAngle(self, _arg:float) -> None\nC++: virtual void SetEdgeAngle(double _arg)\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"GetEdgeAngleMinValue", PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMinValue, METH_VARARGS,
   "GetEdgeAngleMinValue(self) -> float\nC++: virtual double GetEdgeAngleMinValue()\n\n"},
  {"GetEdgeAngleMaxValue", PyvtkWindowedSincPolyDataFilter_GetEdgeAngleMaxValue, METH_VARARGS,
   "GetEdgeAngleMaxValue(self) -> float\nC++: virtual double GetEdgeAngleMaxValue()\n\n"},
  {"GetEdgeAngle", PyvtkWindowedSincPolyDataFilter_GetEdgeAngle, METH_VARARGS,
   "GetEdgeAngle(self) -> float\nC++: virtual double GetEdgeAngle()\n\n"},
  {"SetBoundarySmoothing", PyvtkWindowedSincPolyDataFilter_SetBoundarySmoothing, METH_VARARGS,
   "SetBoundarySmoothing(self, _arg:int) -> None\nC++: virtual void SetBoundarySmoothing(vtkTypeBool _arg)\n\nTurn on/off the smoothing of points on the boundary of the mesh.\nEnabled this option has a modest impact on performance.\n"},
  {"GetBoundarySmoothing", PyvtkWindowedSincPolyDataFilter_GetBoundarySmoothing, METH_VARARGS,
   "GetBoundarySmoothing(self) -> int\nC++: virtual vtkTypeBool GetBoundarySmoothing()\n\n"},
  {"BoundarySmoothingOn", PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOn, METH_VARARGS,
   "BoundarySmoothingOn(self) -> None\nC++: virtual void BoundarySmoothingOn()\n\n"},
  {"BoundarySmoothingOff", PyvtkWindowedSincPolyDataFilter_BoundarySmoothingOff, METH_VARARGS,
   "BoundarySmoothingOff(self) -> None\nC++: virtual void BoundarySmoothingOff()\n\n"},
  {"SetNonManifoldSmoothing", PyvtkWindowedSincPolyDataFilter_SetNonManifoldSmoothing, METH_VARARGS,
   "SetNonManifoldSmoothing(self, _arg:int) -> None\nC++: virtual void SetNonManifoldSmoothing(vtkTypeBool _arg)\n\nSmooth non-manifold points. Enabling this option has a modest\nimpact on performance.\n"},
  {"GetNonManifoldSmoothing", PyvtkWindowedSincPolyDataFilter_GetNonManifoldSmoothing, METH_VARARGS,
   "GetNonManifoldSmoothing(self) -> int\nC++: virtual vtkTypeBool GetNonManifoldSmoothing()\n\n"},
  {"NonManifoldSmoothingOn", PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOn, METH_VARARGS,
   "NonManifoldSmoothingOn(self) -> None\nC++: virtual void NonManifoldSmoothingOn()\n\n"},
  {"NonManifoldSmoothingOff", PyvtkWindowedSincPolyDataFilter_NonManifoldSmoothingOff, METH_VARARGS,
   "NonManifoldSmoothingOff(self) -> None\nC++: virtual void NonManifoldSmoothingOff()\n\n"},
  {"SetWeightNonManifoldEdges", PyvtkWindowedSincPolyDataFilter_SetWeightNonManifoldEdges, METH_VARARGS,
   "SetWeightNonManifoldEdges(self, _arg:int) -> None\nC++: virtual void SetWeightNonManifoldEdges(vtkTypeBool _arg)\n\nWhen non-manifold smoothing is enabled, better smoothing\nperformance may be possible by providing extra weighting to\nnon-manifold edges. By default, WeightNonManifoldEdges is enabled\n(this is to preserve consistent behavior with previous versions\nof this filter).\n"},
  {"GetWeightNonManifoldEdges", PyvtkWindowedSincPolyDataFilter_GetWeightNonManifoldEdges, METH_VARARGS,
   "GetWeightNonManifoldEdges(self) -> int\nC++: virtual vtkTypeBool GetWeightNonManifoldEdges()\n\n"},
  {"WeightNonManifoldEdgesOn", PyvtkWindowedSincPolyDataFilter_WeightNonManifoldEdgesOn, METH_VARARGS,
   "WeightNonManifoldEdgesOn(self) -> None\nC++: virtual void WeightNonManifoldEdgesOn()\n\n"},
  {"WeightNonManifoldEdgesOff", PyvtkWindowedSincPolyDataFilter_WeightNonManifoldEdgesOff, METH_VARARGS,
   "WeightNonManifoldEdgesOff(self) -> None\nC++: virtual void WeightNonManifoldEdgesOff()\n\n"},
  {"SetGenerateErrorScalars", PyvtkWindowedSincPolyDataFilter_SetGenerateErrorScalars, METH_VARARGS,
   "SetGenerateErrorScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateErrorScalars(vtkTypeBool _arg)\n\nTurn on/off the generation of scalar distance values.\n"},
  {"GetGenerateErrorScalars", PyvtkWindowedSincPolyDataFilter_GetGenerateErrorScalars, METH_VARARGS,
   "GetGenerateErrorScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateErrorScalars()\n\n"},
  {"GenerateErrorScalarsOn", PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOn, METH_VARARGS,
   "GenerateErrorScalarsOn(self) -> None\nC++: virtual void GenerateErrorScalarsOn()\n\n"},
  {"GenerateErrorScalarsOff", PyvtkWindowedSincPolyDataFilter_GenerateErrorScalarsOff, METH_VARARGS,
   "GenerateErrorScalarsOff(self) -> None\nC++: virtual void GenerateErrorScalarsOff()\n\n"},
  {"SetGenerateErrorVectors", PyvtkWindowedSincPolyDataFilter_SetGenerateErrorVectors, METH_VARARGS,
   "SetGenerateErrorVectors(self, _arg:int) -> None\nC++: virtual void SetGenerateErrorVectors(vtkTypeBool _arg)\n\nTurn on/off the generation of error vectors.\n"},
  {"GetGenerateErrorVectors", PyvtkWindowedSincPolyDataFilter_GetGenerateErrorVectors, METH_VARARGS,
   "GetGenerateErrorVectors(self) -> int\nC++: virtual vtkTypeBool GetGenerateErrorVectors()\n\n"},
  {"GenerateErrorVectorsOn", PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOn, METH_VARARGS,
   "GenerateErrorVectorsOn(self) -> None\nC++: virtual void GenerateErrorVectorsOn()\n\n"},
  {"GenerateErrorVectorsOff", PyvtkWindowedSincPolyDataFilter_GenerateErrorVectorsOff, METH_VARARGS,
   "GenerateErrorVectorsOff(self) -> None\nC++: virtual void GenerateErrorVectorsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWindowedSincPolyDataFilter_Doc =
  "vtkWindowedSincPolyDataFilter - adjust point positions using a\nwindowed sinc function interpolation kernel\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkWindowedSincPolyDataFiler adjusts point coordinates using a\n"
  "windowed sinc function interpolation kernel. The effect is to \"relax\"\n"
  "or \"smooth\" the mesh, making the cells better shaped and the vertices\n"
  "more evenly distributed.  Note that this filter operates the lines,\n"
  "polygons, and triangle strips composing an instance of vtkPolyData.\n"
  "Vertex or poly-vertex cells are never modified.\n\n"
  "The algorithm proceeds as follows. For each vertex v, a topological\n"
  "and geometric analysis is performed to determine which vertices are\n"
  "connected to v, and which cells are connected to v. Then, a\n"
  "connectivity array is constructed for each vertex. (The connectivity\n"
  "array is a list of lists of vertices that directly attach to each\n"
  "vertex, the so-called smoothing stencil.) Next, an iteration phase\n"
  "begins over all vertices. For each vertex v, the coordinates of v are\n"
  "modified using a windowed sinc function interpolation kernel.  Taubin\n"
  "describes this methodology is the IBM tech report RC-20404 (#90237,\n"
  "dated 3/12/96) \"Optimal Surface Smoothing as Filter Design\" G.\n"
  "Taubin, T. Zhang and G. Golub. (Zhang and Golub are at Stanford\n"
  "University.)\n\n"
  "This report discusses using standard signal processing low-pass\n"
  "filters (in particular windowed sinc functions) to smooth polyhedra.\n"
  "The transfer functions of the low-pass filters are approximated by\n"
  "Chebyshev polynomials. This facilitates applying the filters in an\n"
  "iterative diffusion process (as opposed to a kernel convolution). \n"
  "The more smoothing iterations applied, the higher the degree of\n"
  "polynomial approximating the low-pass filter transfer function. Each\n"
  "smoothing iteration, therefore, applies the next higher term of the\n"
  "Chebyshev filter approximation to the polyhedron. This decoupling of\n"
  "the filter into an iteratively applied polynomial is possible since\n"
  "the Chebyshev polynomials are orthogonal, i.e. increasing the order\n"
  "of the approximation to the filter transfer function does not alter\n"
  "the previously calculated coefficients for the low order terms.\n\n"
  "Note: Care must be taken to avoid smoothing with too few iterations.\n"
  "A Chebyshev approximation with too few terms is a poor approximation.\n"
  "The first few smoothing iterations represent a severe scaling and\n"
  "translation of the data.  Subsequent iterations cause the smoothed\n"
  "polyhedron to converge to the true location and scale of the object.\n"
  "We have attempted to protect against this by automatically adjusting\n"
  "the filter, effectively widening the pass band. This adjustment is\n"
  "only possible if the number of iterations is greater than 1.  Note\n"
  "that this sacrifices some degree of smoothing for model integrity.\n"
  "For those interested, the filter is adjusted by searching for a value\n"
  "sigma such that the actual pass band is k_pb + sigma and such that\n"
  "the filter transfer function evaluates to unity at k_pb, i.e. f(k_pb)\n"
  "= 1\n\n"
  "To improve the numerical stability of the solution, and minimize the\n"
  "scaling the translation effects, the algorithm can translate and\n"
  "scale the position coordinates to within the unit cube [-1, 1],\n"
  "perform the smoothing, and translate and scale the position\n"
  "coordinates back to the original coordinate frame.  This mode is\n"
  "controlled with the NormalizeCoordinatesOn() /\n"
  "NormalizeCoordinatesOff() methods.  For legacy reasons, the default\n"
  "is NormalizeCoordinatesOff.\n\n"
  "This implementation is currently limited to using an interpolation\n"
  "kernel based on Hamming windows.  Other windows (such as Hann,\n"
  "Blackman, Kaiser, Lanczos, Gaussian, and exponential windows) could\n"
  "be used instead.\n\n"
  "There are some special instance variables used to control the\n"
  "execution of this filter. (These ivars basically control what\n"
  "vertices can be smoothed, and the creation of the connectivity\n"
  "array.) The BoundarySmoothing ivar enables/disables the smoothing\n"
  "operation on vertices that are on the \"boundary\" of the mesh. A\n"
  "boundary vertex is one that is surrounded by a semi-cycle of polygons\n"
  "(or used by a single line).\n\n"
  "Another important ivar is FeatureEdgeSmoothing. If this ivar is\n"
  "enabled, then interior vertices are classified as either \"simple\", \"interior\n"
  "edge\", or \"fixed\", and smoothed differently. (Interior vertices are\n"
  "manifold vertices surrounded by a cycle of polygons; or used by two\n"
  "line cells.) The classification is based on the number of feature\n"
  "edges attached to v. A feature edge occurs when the angle between the\n"
  "two surface normals of a polygon sharing an edge is greater than the\n"
  "FeatureAngle ivar. Then, vertices used by no feature edges are\n"
  "classified \"simple\", vertices used by exactly two feature edges are\n"
  "classified \"interior edge\", and all others are \"fixed\" vertices.\n\n"
  "Once the classification is known, the vertices are smoothed\n"
  "differently. Corner (i.e., fixed) vertices are not smoothed at all.\n"
  "Simple vertices are smoothed as before. Interior edge vertices are\n"
  "smoothed only along their two connected edges, and only if the angle\n"
  "between the edges is less than the EdgeAngle ivar.\n\n"
  "The total smoothing can be controlled by using two ivars. The\n"
  "NumberOfIterations determines the maximum number of smoothing passes.\n"
  "The NumberOfIterations corresponds to the degree of the polynomial\n"
  "that is used to approximate the windowed sinc function. Ten or twenty\n"
  "iterations is all the is usually necessary. Contrast this with\n"
  "vtkSmoothPolyDataFilter which usually requires 100 to 200 smoothing\n"
  "iterations. vtkSmoothPolyDataFilter is also not an approximation to\n"
  "an ideal low-pass filter, which can cause the geometry to shrink as\n"
  "the amount of smoothing increases.\n\n"
  "The second ivar is the specification of the PassBand for the windowed\n"
  "sinc filter.  By design, the PassBand is specified as a doubling\n"
  "point number between 0 and 2.  Lower PassBand values produce more\n"
  "smoothing. A good default value for the PassBand is 0.1 (for those\n"
  "interested, the PassBand (and frequencies) for PolyData are based on\n"
  "the valence of the vertices, this limits all the frequency modes in a\n"
  "polyhedral mesh to between 0 and 2.)\n\n"
  "There are two instance variables that control the generation of error\n"
  "data. If the ivar GenerateErrorScalars is on, then a scalar value\n"
  "indicating the distance of each vertex from its original position is\n"
  "computed. If the ivar GenerateErrorVectors is on, then a vector\n"
  "representing change in position is computed.\n\n"
  "@warning\n"
  "The smoothing operation reduces high frequency information in the\n"
  "geometry of the mesh. With excessive smoothing important details may\n"
  "be lost. Enabling FeatureEdgeSmoothing helps reduce this effect, but\n"
  "cannot entirely eliminate it.\n\n"
  "@warning\n"
  "For maximum performance, do not enable BoundarySmoothing,\n"
  "NonManifoldSmoothing, or FeatureEdgeSmoothing. FeatureEdgeSmoothing\n"
  "is particularly expensive as it requires building topological links\n"
  "and computing local polygon normals which are relatively expensive\n"
  "operations. BoundarySmoothing and NonManifoldSmoothing have a modest\n"
  "impact on performance.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential execution type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "Another useful documentation resource is this SIGGRAPH publication:\n"
  "Gabriel Taubin. \"A Signal Processing Approach To Fair Surface\n"
  "Design\".\n\n"
  "@sa\n"
  "vtkSmoothPolyDataFilter vtkConstrainedSmoothingFilter\n"
  "vtkPointSmoothingFilter vtkAttributeSmoothingFilter vtkDecimate\n"
  "vtkDecimatePro vtkQuadricDecimation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWindowedSincPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkWindowedSincPolyDataFilter", // tp_name
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
  PyvtkWindowedSincPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWindowedSincPolyDataFilter_StaticNew()
{
  return vtkWindowedSincPolyDataFilter::New();
}

PyObject *PyvtkWindowedSincPolyDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWindowedSincPolyDataFilter_Type, PyvtkWindowedSincPolyDataFilter_Methods,
    "vtkWindowedSincPolyDataFilter",
 &PyvtkWindowedSincPolyDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWindowedSincPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWindowedSincPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWindowedSincPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

