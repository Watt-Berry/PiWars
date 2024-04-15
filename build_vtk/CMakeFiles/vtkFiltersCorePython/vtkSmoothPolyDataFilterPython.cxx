// python wrapper for vtkSmoothPolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmoothPolyDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSmoothPolyDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkSmoothPolyDataFilter_ClassNew(); }


static PyObject *
PyvtkSmoothPolyDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSmoothPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSmoothPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSmoothPolyDataFilter *tempr = vtkSmoothPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSmoothPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSmoothPolyDataFilter::NewInstance());

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
PyvtkSmoothPolyDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSmoothPolyDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSmoothPolyDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvergence(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetConvergence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergenceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergenceMinValue() :
      op->vtkSmoothPolyDataFilter::GetConvergenceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergenceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergenceMaxValue() :
      op->vtkSmoothPolyDataFilter::GetConvergenceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergence() :
      op->vtkSmoothPolyDataFilter::GetConvergence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMinValue() :
      op->vtkSmoothPolyDataFilter::GetNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMaxValue() :
      op->vtkSmoothPolyDataFilter::GetNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkSmoothPolyDataFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelaxationFactor(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetRelaxationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelaxationFactor() :
      op->vtkSmoothPolyDataFilter::GetRelaxationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetFeatureEdgeSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureEdgeSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdgeSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFeatureEdgeSmoothing() :
      op->vtkSmoothPolyDataFilter::GetFeatureEdgeSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgeSmoothingOn();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgeSmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgeSmoothingOff();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::FeatureEdgeSmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkSmoothPolyDataFilter::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkSmoothPolyDataFilter::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkSmoothPolyDataFilter::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetEdgeAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMinValue() :
      op->vtkSmoothPolyDataFilter::GetEdgeAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngleMaxValue() :
      op->vtkSmoothPolyDataFilter::GetEdgeAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetEdgeAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeAngle() :
      op->vtkSmoothPolyDataFilter::GetEdgeAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetBoundarySmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetBoundarySmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundarySmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundarySmoothing() :
      op->vtkSmoothPolyDataFilter::GetBoundarySmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_BoundarySmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundarySmoothingOn();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::BoundarySmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_BoundarySmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundarySmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundarySmoothingOff();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::BoundarySmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetGenerateErrorScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetGenerateErrorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorScalars() :
      op->vtkSmoothPolyDataFilter::GetGenerateErrorScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOn();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::GenerateErrorScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorScalarsOff();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::GenerateErrorScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetGenerateErrorVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetGenerateErrorVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateErrorVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateErrorVectors() :
      op->vtkSmoothPolyDataFilter::GetGenerateErrorVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOn();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::GenerateErrorVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateErrorVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateErrorVectorsOff();
    }
    else
    {
      op->vtkSmoothPolyDataFilter::GenerateErrorVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkSmoothPolyDataFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkSmoothPolyDataFilter::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

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
      op->vtkSmoothPolyDataFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSmoothPolyDataFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSmoothPolyDataFilter *op = static_cast<vtkSmoothPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkSmoothPolyDataFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSmoothPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkSmoothPolyDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSmoothPolyDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSmoothPolyDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSmoothPolyDataFilter\nC++: static vtkSmoothPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSmoothPolyDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSmoothPolyDataFilter\nC++: vtkSmoothPolyDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSmoothPolyDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSmoothPolyDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetConvergence", PyvtkSmoothPolyDataFilter_SetConvergence, METH_VARARGS,
   "SetConvergence(self, _arg:float) -> None\nC++: virtual void SetConvergence(double _arg)\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {"GetConvergenceMinValue", PyvtkSmoothPolyDataFilter_GetConvergenceMinValue, METH_VARARGS,
   "GetConvergenceMinValue(self) -> float\nC++: virtual double GetConvergenceMinValue()\n\n"},
  {"GetConvergenceMaxValue", PyvtkSmoothPolyDataFilter_GetConvergenceMaxValue, METH_VARARGS,
   "GetConvergenceMaxValue(self) -> float\nC++: virtual double GetConvergenceMaxValue()\n\n"},
  {"GetConvergence", PyvtkSmoothPolyDataFilter_GetConvergence, METH_VARARGS,
   "GetConvergence(self) -> float\nC++: virtual double GetConvergence()\n\n"},
  {"SetNumberOfIterations", PyvtkSmoothPolyDataFilter_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetNumberOfIterations(int _arg)\n\nSpecify the number of iterations for Laplacian smoothing,\n"},
  {"GetNumberOfIterationsMinValue", PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMinValue, METH_VARARGS,
   "GetNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetNumberOfIterationsMinValue()\n\n"},
  {"GetNumberOfIterationsMaxValue", PyvtkSmoothPolyDataFilter_GetNumberOfIterationsMaxValue, METH_VARARGS,
   "GetNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetNumberOfIterationsMaxValue()\n\n"},
  {"GetNumberOfIterations", PyvtkSmoothPolyDataFilter_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: virtual int GetNumberOfIterations()\n\n"},
  {"SetRelaxationFactor", PyvtkSmoothPolyDataFilter_SetRelaxationFactor, METH_VARARGS,
   "SetRelaxationFactor(self, _arg:float) -> None\nC++: virtual void SetRelaxationFactor(double _arg)\n\nSpecify the relaxation factor for Laplacian smoothing. As in all\niterative methods, the stability of the process is sensitive to\nthis parameter. In general, small relaxation factors and large\nnumbers of iterations are more stable than larger relaxation\nfactors and smaller numbers of iterations.\n"},
  {"GetRelaxationFactor", PyvtkSmoothPolyDataFilter_GetRelaxationFactor, METH_VARARGS,
   "GetRelaxationFactor(self) -> float\nC++: virtual double GetRelaxationFactor()\n\n"},
  {"SetFeatureEdgeSmoothing", PyvtkSmoothPolyDataFilter_SetFeatureEdgeSmoothing, METH_VARARGS,
   "SetFeatureEdgeSmoothing(self, _arg:int) -> None\nC++: virtual void SetFeatureEdgeSmoothing(vtkTypeBool _arg)\n\nTurn on/off smoothing along sharp interior edges.\n"},
  {"GetFeatureEdgeSmoothing", PyvtkSmoothPolyDataFilter_GetFeatureEdgeSmoothing, METH_VARARGS,
   "GetFeatureEdgeSmoothing(self) -> int\nC++: virtual vtkTypeBool GetFeatureEdgeSmoothing()\n\n"},
  {"FeatureEdgeSmoothingOn", PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOn, METH_VARARGS,
   "FeatureEdgeSmoothingOn(self) -> None\nC++: virtual void FeatureEdgeSmoothingOn()\n\n"},
  {"FeatureEdgeSmoothingOff", PyvtkSmoothPolyDataFilter_FeatureEdgeSmoothingOff, METH_VARARGS,
   "FeatureEdgeSmoothingOff(self) -> None\nC++: virtual void FeatureEdgeSmoothingOff()\n\n"},
  {"SetFeatureAngle", PyvtkSmoothPolyDataFilter_SetFeatureAngle, METH_VARARGS,
   "SetFeatureAngle(self, _arg:float) -> None\nC++: virtual void SetFeatureAngle(double _arg)\n\nSpecify the feature angle for sharp edge identification.\n"},
  {"GetFeatureAngleMinValue", PyvtkSmoothPolyDataFilter_GetFeatureAngleMinValue, METH_VARARGS,
   "GetFeatureAngleMinValue(self) -> float\nC++: virtual double GetFeatureAngleMinValue()\n\n"},
  {"GetFeatureAngleMaxValue", PyvtkSmoothPolyDataFilter_GetFeatureAngleMaxValue, METH_VARARGS,
   "GetFeatureAngleMaxValue(self) -> float\nC++: virtual double GetFeatureAngleMaxValue()\n\n"},
  {"GetFeatureAngle", PyvtkSmoothPolyDataFilter_GetFeatureAngle, METH_VARARGS,
   "GetFeatureAngle(self) -> float\nC++: virtual double GetFeatureAngle()\n\n"},
  {"SetEdgeAngle", PyvtkSmoothPolyDataFilter_SetEdgeAngle, METH_VARARGS,
   "SetEdgeAngle(self, _arg:float) -> None\nC++: virtual void SetEdgeAngle(double _arg)\n\nSpecify the edge angle to control smoothing along edges (either\ninterior or boundary).\n"},
  {"GetEdgeAngleMinValue", PyvtkSmoothPolyDataFilter_GetEdgeAngleMinValue, METH_VARARGS,
   "GetEdgeAngleMinValue(self) -> float\nC++: virtual double GetEdgeAngleMinValue()\n\n"},
  {"GetEdgeAngleMaxValue", PyvtkSmoothPolyDataFilter_GetEdgeAngleMaxValue, METH_VARARGS,
   "GetEdgeAngleMaxValue(self) -> float\nC++: virtual double GetEdgeAngleMaxValue()\n\n"},
  {"GetEdgeAngle", PyvtkSmoothPolyDataFilter_GetEdgeAngle, METH_VARARGS,
   "GetEdgeAngle(self) -> float\nC++: virtual double GetEdgeAngle()\n\n"},
  {"SetBoundarySmoothing", PyvtkSmoothPolyDataFilter_SetBoundarySmoothing, METH_VARARGS,
   "SetBoundarySmoothing(self, _arg:int) -> None\nC++: virtual void SetBoundarySmoothing(vtkTypeBool _arg)\n\nTurn on/off the smoothing of vertices on the boundary of the\nmesh.\n"},
  {"GetBoundarySmoothing", PyvtkSmoothPolyDataFilter_GetBoundarySmoothing, METH_VARARGS,
   "GetBoundarySmoothing(self) -> int\nC++: virtual vtkTypeBool GetBoundarySmoothing()\n\n"},
  {"BoundarySmoothingOn", PyvtkSmoothPolyDataFilter_BoundarySmoothingOn, METH_VARARGS,
   "BoundarySmoothingOn(self) -> None\nC++: virtual void BoundarySmoothingOn()\n\n"},
  {"BoundarySmoothingOff", PyvtkSmoothPolyDataFilter_BoundarySmoothingOff, METH_VARARGS,
   "BoundarySmoothingOff(self) -> None\nC++: virtual void BoundarySmoothingOff()\n\n"},
  {"SetGenerateErrorScalars", PyvtkSmoothPolyDataFilter_SetGenerateErrorScalars, METH_VARARGS,
   "SetGenerateErrorScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateErrorScalars(vtkTypeBool _arg)\n\nTurn on/off the generation of scalar distance values.\n"},
  {"GetGenerateErrorScalars", PyvtkSmoothPolyDataFilter_GetGenerateErrorScalars, METH_VARARGS,
   "GetGenerateErrorScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateErrorScalars()\n\n"},
  {"GenerateErrorScalarsOn", PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOn, METH_VARARGS,
   "GenerateErrorScalarsOn(self) -> None\nC++: virtual void GenerateErrorScalarsOn()\n\n"},
  {"GenerateErrorScalarsOff", PyvtkSmoothPolyDataFilter_GenerateErrorScalarsOff, METH_VARARGS,
   "GenerateErrorScalarsOff(self) -> None\nC++: virtual void GenerateErrorScalarsOff()\n\n"},
  {"SetGenerateErrorVectors", PyvtkSmoothPolyDataFilter_SetGenerateErrorVectors, METH_VARARGS,
   "SetGenerateErrorVectors(self, _arg:int) -> None\nC++: virtual void SetGenerateErrorVectors(vtkTypeBool _arg)\n\nTurn on/off the generation of error vectors.\n"},
  {"GetGenerateErrorVectors", PyvtkSmoothPolyDataFilter_GetGenerateErrorVectors, METH_VARARGS,
   "GetGenerateErrorVectors(self) -> int\nC++: virtual vtkTypeBool GetGenerateErrorVectors()\n\n"},
  {"GenerateErrorVectorsOn", PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOn, METH_VARARGS,
   "GenerateErrorVectorsOn(self) -> None\nC++: virtual void GenerateErrorVectorsOn()\n\n"},
  {"GenerateErrorVectorsOff", PyvtkSmoothPolyDataFilter_GenerateErrorVectorsOff, METH_VARARGS,
   "GenerateErrorVectorsOff(self) -> None\nC++: virtual void GenerateErrorVectorsOff()\n\n"},
  {"SetSourceData", PyvtkSmoothPolyDataFilter_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkPolyData) -> None\nC++: void SetSourceData(vtkPolyData *source)\n\nSpecify the source object which is used to constrain smoothing.\nThe source defines a surface that the input (as it is smoothed)\nis constrained to lie upon.\n"},
  {"GetSource", PyvtkSmoothPolyDataFilter_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\n"},
  {"SetOutputPointsPrecision", PyvtkSmoothPolyDataFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkSmoothPolyDataFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSmoothPolyDataFilter_Doc =
  "vtkSmoothPolyDataFilter - adjust point positions using Laplacian\nsmoothing\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSmoothPolyDataFilter is a filter that adjusts point coordinates\n"
  "using Laplacian smoothing. The effect is to \"relax\" the mesh, making\n"
  "the cells better shaped and the vertices more evenly distributed.\n"
  "Note that this filter operates on the lines, polygons, and triangle\n"
  "strips composing an instance of vtkPolyData. Vertex or poly-vertex\n"
  "cells are never modified.\n\n"
  "The algorithm proceeds as follows. For each vertex v, a topological\n"
  "and geometric analysis is performed to determine which vertices are\n"
  "connected to v, and which cells are connected to v. Then, a\n"
  "connectivity array is constructed for each vertex. (The connectivity\n"
  "array is a list of lists of vertices that directly attach to each\n"
  "vertex.) Next, an iteration phase begins over all vertices. For each\n"
  "vertex v, the coordinates of v are modified according to an average\n"
  "of the connected vertices.  (A relaxation factor is available to\n"
  "control the amount of displacement of v).  The process repeats for\n"
  "each vertex. This pass over the list of vertices is a single\n"
  "iteration. Many iterations (generally around 20 or so) are repeated\n"
  "until the desired result is obtained.\n\n"
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
  "Simple vertices are smoothed as before (i.e., average of connected\n"
  "vertex coordinates). Interior edge vertices are smoothed only along\n"
  "their two connected edges, and only if the angle between the edges is\n"
  "less than the EdgeAngle ivar.\n\n"
  "The total smoothing can be controlled by using two ivars. The\n"
  "NumberOfIterations is a cap on the maximum number of smoothing\n"
  "passes. The Convergence ivar is a limit on the maximum point motion.\n"
  "If the maximum motion during an iteration is less than Convergence,\n"
  "then the smoothing process terminates. (Convergence is expressed as a\n"
  "fraction of the diagonal of the bounding box.)\n\n"
  "There are two instance variables that control the generation of error\n"
  "data. If the ivar GenerateErrorScalars is on, then a scalar value\n"
  "indicating the distance of each vertex from its original position is\n"
  "computed. If the ivar GenerateErrorVectors is on, then a vector\n"
  "representing change in position is computed.\n\n"
  "Optionally you can further control the smoothing process by defining\n"
  "a second input: the Source. If defined, the input mesh is constrained\n"
  "to lie on the surface defined by the Source ivar.\n\n"
  "@warning\n"
  "The Laplacian operation reduces high frequency information in the\n"
  "geometry of the mesh. With excessive smoothing important details may\n"
  "be lost, and the surface may shrink towards the centroid. Enabling\n"
  "FeatureEdgeSmoothing helps reduce this effect, but cannot entirely\n"
  "eliminate it. You may also wish to try vtkWindowedSincPolyDataFilter.\n"
  "It does a better job of minimizing shrinkage. Another option is\n"
  "vtkConstrainedSmoothingFilter which limits the distance that points\n"
  "can move.\n\n"
  "@sa\n"
  "vtkWindowedSincPolyDataFilter vtkConstrainedSmoothingFilter\n"
  "vtkDecimate vtkDecimatePro\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSmoothPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkSmoothPolyDataFilter", // tp_name
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
  PyvtkSmoothPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSmoothPolyDataFilter_StaticNew()
{
  return vtkSmoothPolyDataFilter::New();
}

PyObject *PyvtkSmoothPolyDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSmoothPolyDataFilter_Type, PyvtkSmoothPolyDataFilter_Methods,
    "vtkSmoothPolyDataFilter",
 &PyvtkSmoothPolyDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSmoothPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSmoothPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSmoothPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

