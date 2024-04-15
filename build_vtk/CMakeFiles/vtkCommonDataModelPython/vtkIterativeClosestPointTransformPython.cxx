// python wrapper for vtkIterativeClosestPointTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIterativeClosestPointTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIterativeClosestPointTransform(PyObject *dict); }
extern "C" { PyObject *PyvtkIterativeClosestPointTransform_ClassNew(); }


static PyObject *
PyvtkIterativeClosestPointTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIterativeClosestPointTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIterativeClosestPointTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIterativeClosestPointTransform *tempr = vtkIterativeClosestPointTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIterativeClosestPointTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIterativeClosestPointTransform::NewInstance());

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
PyvtkIterativeClosestPointTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIterativeClosestPointTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIterativeClosestPointTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetSource(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetTarget(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetTarget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkIterativeClosestPointTransform::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetTarget() :
      op->vtkIterativeClosestPointTransform::GetTarget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  vtkCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkIterativeClosestPointTransform::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfIterations(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetMaximumNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMaximumNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfIterations() :
      op->vtkIterativeClosestPointTransform::GetMaximumNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkIterativeClosestPointTransform::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetCheckMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckMeanDistance(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetCheckMeanDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetCheckMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckMeanDistance() :
      op->vtkIterativeClosestPointTransform::GetCheckMeanDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_CheckMeanDistanceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMeanDistanceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckMeanDistanceOn();
    }
    else
    {
      op->vtkIterativeClosestPointTransform::CheckMeanDistanceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_CheckMeanDistanceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckMeanDistanceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckMeanDistanceOff();
    }
    else
    {
      op->vtkIterativeClosestPointTransform::CheckMeanDistanceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMeanDistanceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeanDistanceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMeanDistanceMode(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetMeanDistanceMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistanceModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistanceModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeanDistanceModeMinValue() :
      op->vtkIterativeClosestPointTransform::GetMeanDistanceModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistanceModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistanceModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeanDistanceModeMaxValue() :
      op->vtkIterativeClosestPointTransform::GetMeanDistanceModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistanceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistanceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMeanDistanceMode() :
      op->vtkIterativeClosestPointTransform::GetMeanDistanceMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMeanDistanceModeToRMS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeanDistanceModeToRMS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeanDistanceModeToRMS();
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetMeanDistanceModeToRMS();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMeanDistanceModeToAbsoluteValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMeanDistanceModeToAbsoluteValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMeanDistanceModeToAbsoluteValue();
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetMeanDistanceModeToAbsoluteValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistanceModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistanceModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMeanDistanceModeAsString() :
      op->vtkIterativeClosestPointTransform::GetMeanDistanceModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMaximumMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumMeanDistance(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetMaximumMeanDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMaximumMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumMeanDistance() :
      op->vtkIterativeClosestPointTransform::GetMaximumMeanDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMeanDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMeanDistance() :
      op->vtkIterativeClosestPointTransform::GetMeanDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetMaximumNumberOfLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfLandmarks(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetMaximumNumberOfLandmarks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetMaximumNumberOfLandmarks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfLandmarks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfLandmarks() :
      op->vtkIterativeClosestPointTransform::GetMaximumNumberOfLandmarks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_SetStartByMatchingCentroids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartByMatchingCentroids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartByMatchingCentroids(temp0);
    }
    else
    {
      op->vtkIterativeClosestPointTransform::SetStartByMatchingCentroids(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetStartByMatchingCentroids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartByMatchingCentroids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStartByMatchingCentroids() :
      op->vtkIterativeClosestPointTransform::GetStartByMatchingCentroids());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_StartByMatchingCentroidsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartByMatchingCentroidsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartByMatchingCentroidsOn();
    }
    else
    {
      op->vtkIterativeClosestPointTransform::StartByMatchingCentroidsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_StartByMatchingCentroidsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartByMatchingCentroidsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartByMatchingCentroidsOff();
    }
    else
    {
      op->vtkIterativeClosestPointTransform::StartByMatchingCentroidsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_GetLandmarkTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLandmarkTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLandmarkTransform *tempr = (ap.IsBound() ?
      op->GetLandmarkTransform() :
      op->vtkIterativeClosestPointTransform::GetLandmarkTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkIterativeClosestPointTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIterativeClosestPointTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIterativeClosestPointTransform *op = static_cast<vtkIterativeClosestPointTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->MakeTransform() :
      op->vtkIterativeClosestPointTransform::MakeTransform());

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

static PyMethodDef PyvtkIterativeClosestPointTransform_Methods[] = {
  {"IsTypeOf", PyvtkIterativeClosestPointTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIterativeClosestPointTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIterativeClosestPointTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIterativeClosestPointTransform\nC++: static vtkIterativeClosestPointTransform *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIterativeClosestPointTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIterativeClosestPointTransform\nC++: vtkIterativeClosestPointTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIterativeClosestPointTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIterativeClosestPointTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSource", PyvtkIterativeClosestPointTransform_SetSource, METH_VARARGS,
   "SetSource(self, source:vtkDataSet) -> None\nC++: void SetSource(vtkDataSet *source)\n\nSpecify the source and target data sets.\n"},
  {"SetTarget", PyvtkIterativeClosestPointTransform_SetTarget, METH_VARARGS,
   "SetTarget(self, target:vtkDataSet) -> None\nC++: void SetTarget(vtkDataSet *target)\n\n"},
  {"GetSource", PyvtkIterativeClosestPointTransform_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetSource()\n\n"},
  {"GetTarget", PyvtkIterativeClosestPointTransform_GetTarget, METH_VARARGS,
   "GetTarget(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetTarget()\n\n"},
  {"SetLocator", PyvtkIterativeClosestPointTransform_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkCellLocator) -> None\nC++: void SetLocator(vtkCellLocator *locator)\n\nSet/Get a spatial locator for speeding up the search process. An\ninstance of vtkCellLocator is used by default.\n"},
  {"GetLocator", PyvtkIterativeClosestPointTransform_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkCellLocator\nC++: virtual vtkCellLocator *GetLocator()\n\n"},
  {"SetMaximumNumberOfIterations", PyvtkIterativeClosestPointTransform_SetMaximumNumberOfIterations, METH_VARARGS,
   "SetMaximumNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfIterations(int _arg)\n\nSet/Get the maximum number of iterations. Default is 50.\n"},
  {"GetMaximumNumberOfIterations", PyvtkIterativeClosestPointTransform_GetMaximumNumberOfIterations, METH_VARARGS,
   "GetMaximumNumberOfIterations(self) -> int\nC++: virtual int GetMaximumNumberOfIterations()\n\n"},
  {"GetNumberOfIterations", PyvtkIterativeClosestPointTransform_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: virtual int GetNumberOfIterations()\n\nGet the number of iterations since the last update\n"},
  {"SetCheckMeanDistance", PyvtkIterativeClosestPointTransform_SetCheckMeanDistance, METH_VARARGS,
   "SetCheckMeanDistance(self, _arg:int) -> None\nC++: virtual void SetCheckMeanDistance(vtkTypeBool _arg)\n\nForce the algorithm to check the mean distance between two\niterations. Default is Off.\n"},
  {"GetCheckMeanDistance", PyvtkIterativeClosestPointTransform_GetCheckMeanDistance, METH_VARARGS,
   "GetCheckMeanDistance(self) -> int\nC++: virtual vtkTypeBool GetCheckMeanDistance()\n\n"},
  {"CheckMeanDistanceOn", PyvtkIterativeClosestPointTransform_CheckMeanDistanceOn, METH_VARARGS,
   "CheckMeanDistanceOn(self) -> None\nC++: virtual void CheckMeanDistanceOn()\n\n"},
  {"CheckMeanDistanceOff", PyvtkIterativeClosestPointTransform_CheckMeanDistanceOff, METH_VARARGS,
   "CheckMeanDistanceOff(self) -> None\nC++: virtual void CheckMeanDistanceOff()\n\n"},
  {"SetMeanDistanceMode", PyvtkIterativeClosestPointTransform_SetMeanDistanceMode, METH_VARARGS,
   "SetMeanDistanceMode(self, _arg:int) -> None\nC++: virtual void SetMeanDistanceMode(int _arg)\n\nSpecify the mean distance mode. This mode expresses how the mean\ndistance is computed. The RMS mode is the square root of the\naverage of the sum of squares of the closest point distances. The\nAbsolute Value mode is the mean of the sum of absolute values of\nthe closest point distances. The default is VTK_ICP_MODE_RMS\n"},
  {"GetMeanDistanceModeMinValue", PyvtkIterativeClosestPointTransform_GetMeanDistanceModeMinValue, METH_VARARGS,
   "GetMeanDistanceModeMinValue(self) -> int\nC++: virtual int GetMeanDistanceModeMinValue()\n\n"},
  {"GetMeanDistanceModeMaxValue", PyvtkIterativeClosestPointTransform_GetMeanDistanceModeMaxValue, METH_VARARGS,
   "GetMeanDistanceModeMaxValue(self) -> int\nC++: virtual int GetMeanDistanceModeMaxValue()\n\n"},
  {"GetMeanDistanceMode", PyvtkIterativeClosestPointTransform_GetMeanDistanceMode, METH_VARARGS,
   "GetMeanDistanceMode(self) -> int\nC++: virtual int GetMeanDistanceMode()\n\n"},
  {"SetMeanDistanceModeToRMS", PyvtkIterativeClosestPointTransform_SetMeanDistanceModeToRMS, METH_VARARGS,
   "SetMeanDistanceModeToRMS(self) -> None\nC++: void SetMeanDistanceModeToRMS()\n\n"},
  {"SetMeanDistanceModeToAbsoluteValue", PyvtkIterativeClosestPointTransform_SetMeanDistanceModeToAbsoluteValue, METH_VARARGS,
   "SetMeanDistanceModeToAbsoluteValue(self) -> None\nC++: void SetMeanDistanceModeToAbsoluteValue()\n\n"},
  {"GetMeanDistanceModeAsString", PyvtkIterativeClosestPointTransform_GetMeanDistanceModeAsString, METH_VARARGS,
   "GetMeanDistanceModeAsString(self) -> str\nC++: const char *GetMeanDistanceModeAsString()\n\n"},
  {"SetMaximumMeanDistance", PyvtkIterativeClosestPointTransform_SetMaximumMeanDistance, METH_VARARGS,
   "SetMaximumMeanDistance(self, _arg:float) -> None\nC++: virtual void SetMaximumMeanDistance(double _arg)\n\nSet/Get the maximum mean distance between two iteration. If the\nmean distance is lower than this, the convergence stops. The\ndefault is 0.01.\n"},
  {"GetMaximumMeanDistance", PyvtkIterativeClosestPointTransform_GetMaximumMeanDistance, METH_VARARGS,
   "GetMaximumMeanDistance(self) -> float\nC++: virtual double GetMaximumMeanDistance()\n\n"},
  {"GetMeanDistance", PyvtkIterativeClosestPointTransform_GetMeanDistance, METH_VARARGS,
   "GetMeanDistance(self) -> float\nC++: virtual double GetMeanDistance()\n\nGet the mean distance between the last two iterations.\n"},
  {"SetMaximumNumberOfLandmarks", PyvtkIterativeClosestPointTransform_SetMaximumNumberOfLandmarks, METH_VARARGS,
   "SetMaximumNumberOfLandmarks(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfLandmarks(int _arg)\n\nSet/Get the maximum number of landmarks sampled in your dataset.\nIf your dataset is dense, then you will typically not need all\nthe points to compute the ICP transform. The default is 200.\n"},
  {"GetMaximumNumberOfLandmarks", PyvtkIterativeClosestPointTransform_GetMaximumNumberOfLandmarks, METH_VARARGS,
   "GetMaximumNumberOfLandmarks(self) -> int\nC++: virtual int GetMaximumNumberOfLandmarks()\n\n"},
  {"SetStartByMatchingCentroids", PyvtkIterativeClosestPointTransform_SetStartByMatchingCentroids, METH_VARARGS,
   "SetStartByMatchingCentroids(self, _arg:int) -> None\nC++: virtual void SetStartByMatchingCentroids(vtkTypeBool _arg)\n\nStarts the process by translating source centroid to target\ncentroid. The default is Off.\n"},
  {"GetStartByMatchingCentroids", PyvtkIterativeClosestPointTransform_GetStartByMatchingCentroids, METH_VARARGS,
   "GetStartByMatchingCentroids(self) -> int\nC++: virtual vtkTypeBool GetStartByMatchingCentroids()\n\n"},
  {"StartByMatchingCentroidsOn", PyvtkIterativeClosestPointTransform_StartByMatchingCentroidsOn, METH_VARARGS,
   "StartByMatchingCentroidsOn(self) -> None\nC++: virtual void StartByMatchingCentroidsOn()\n\n"},
  {"StartByMatchingCentroidsOff", PyvtkIterativeClosestPointTransform_StartByMatchingCentroidsOff, METH_VARARGS,
   "StartByMatchingCentroidsOff(self) -> None\nC++: virtual void StartByMatchingCentroidsOff()\n\n"},
  {"GetLandmarkTransform", PyvtkIterativeClosestPointTransform_GetLandmarkTransform, METH_VARARGS,
   "GetLandmarkTransform(self) -> vtkLandmarkTransform\nC++: virtual vtkLandmarkTransform *GetLandmarkTransform()\n\nGet the internal landmark transform. Use it to constrain the\nnumber of degrees of freedom of the solution (i.e. rigid body,\nsimilarity, etc.).\n"},
  {"Inverse", PyvtkIterativeClosestPointTransform_Inverse, METH_VARARGS,
   "Inverse(self) -> None\nC++: void Inverse() override;\n\nInvert the transformation.  This is done by switching the source\nand target.\n"},
  {"MakeTransform", PyvtkIterativeClosestPointTransform_MakeTransform, METH_VARARGS,
   "MakeTransform(self) -> vtkAbstractTransform\nC++: vtkAbstractTransform *MakeTransform() override;\n\nMake another transform of the same type.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIterativeClosestPointTransform_Doc =
  "vtkIterativeClosestPointTransform - Implementation of the ICP\nalgorithm.\n\n"
  "Superclass: vtkLinearTransform\n\n"
  "Match two surfaces using the iterative closest point (ICP) algorithm.\n"
  "The core of the algorithm is to match each vertex in one surface with\n"
  "the closest surface point on the other, then apply the transformation\n"
  "that modify one surface to best match the other (in a least square\n"
  "sense). This has to be iterated to get proper convergence of the\n"
  "surfaces.@attention Use vtkTransformPolyDataFilter to apply the\n"
  "resulting ICP transform to your data. You might also set it to your\n"
  "actor's user transform.@attention This class makes use of\n"
  "vtkLandmarkTransform internally to compute the best fit. Use the\n"
  "GetLandmarkTransform member to get a pointer to that transform and\n"
  "set its parameters. You might, for example, constrain the number of\n"
  "degrees of freedom of the solution (i.e. rigid body, similarity,\n"
  "etc.) by checking the vtkLandmarkTransform documentation for its\n"
  "SetMode member.\n"
  "@sa\n"
  "vtkLandmarkTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIterativeClosestPointTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkIterativeClosestPointTransform", // tp_name
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
  PyvtkIterativeClosestPointTransform_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIterativeClosestPointTransform_StaticNew()
{
  return vtkIterativeClosestPointTransform::New();
}

PyObject *PyvtkIterativeClosestPointTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIterativeClosestPointTransform_Type, PyvtkIterativeClosestPointTransform_Methods,
    "vtkIterativeClosestPointTransform",
 &PyvtkIterativeClosestPointTransform_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkLinearTransform");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIterativeClosestPointTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIterativeClosestPointTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIterativeClosestPointTransform", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ICP_MODE_RMS", 0 },
        { "VTK_ICP_MODE_AV", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

