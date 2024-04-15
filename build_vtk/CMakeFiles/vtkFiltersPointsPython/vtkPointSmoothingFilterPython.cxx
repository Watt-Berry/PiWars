// python wrapper for vtkPointSmoothingFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointSmoothingFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointSmoothingFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPointSmoothingFilter_ClassNew(); }


static PyObject *
PyvtkPointSmoothingFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointSmoothingFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSmoothingFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointSmoothingFilter *tempr = vtkPointSmoothingFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSmoothingFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSmoothingFilter::NewInstance());

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
PyvtkPointSmoothingFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointSmoothingFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointSmoothingFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetNeighborhoodSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodSize(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetNeighborhoodSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNeighborhoodSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeighborhoodSizeMinValue() :
      op->vtkPointSmoothingFilter::GetNeighborhoodSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNeighborhoodSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeighborhoodSizeMaxValue() :
      op->vtkPointSmoothingFilter::GetNeighborhoodSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNeighborhoodSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeighborhoodSize() :
      op->vtkPointSmoothingFilter::GetNeighborhoodSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetSmoothingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingMode(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetSmoothingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetSmoothingModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothingModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothingModeMinValue() :
      op->vtkPointSmoothingFilter::GetSmoothingModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetSmoothingModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothingModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothingModeMaxValue() :
      op->vtkPointSmoothingFilter::GetSmoothingModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetSmoothingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothingMode() :
      op->vtkPointSmoothingFilter::GetSmoothingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetSmoothingModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingModeToDefault();
    }
    else
    {
      op->vtkPointSmoothingFilter::SetSmoothingModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetSmoothingModeToGeometric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingModeToGeometric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingModeToGeometric();
    }
    else
    {
      op->vtkPointSmoothingFilter::SetSmoothingModeToGeometric();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetSmoothingModeToUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingModeToUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingModeToUniform();
    }
    else
    {
      op->vtkPointSmoothingFilter::SetSmoothingModeToUniform();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetSmoothingModeToScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingModeToScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingModeToScalars();
    }
    else
    {
      op->vtkPointSmoothingFilter::SetSmoothingModeToScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetSmoothingModeToTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingModeToTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingModeToTensors();
    }
    else
    {
      op->vtkPointSmoothingFilter::SetSmoothingModeToTensors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetSmoothingModeToFrameField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothingModeToFrameField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothingModeToFrameField();
    }
    else
    {
      op->vtkPointSmoothingFilter::SetSmoothingModeToFrameField();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetFrameFieldArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameFieldArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetFrameFieldArray(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetFrameFieldArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetFrameFieldArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameFieldArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetFrameFieldArray() :
      op->vtkPointSmoothingFilter::GetFrameFieldArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

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
      op->vtkPointSmoothingFilter::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMinValue() :
      op->vtkPointSmoothingFilter::GetNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterationsMaxValue() :
      op->vtkPointSmoothingFilter::GetNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkPointSmoothingFilter::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetNumberOfSubIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubIterations(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetNumberOfSubIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNumberOfSubIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubIterationsMinValue() :
      op->vtkPointSmoothingFilter::GetNumberOfSubIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNumberOfSubIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubIterationsMaxValue() :
      op->vtkPointSmoothingFilter::GetNumberOfSubIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetNumberOfSubIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubIterations() :
      op->vtkPointSmoothingFilter::GetNumberOfSubIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetMaximumStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumStepSize(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetMaximumStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetMaximumStepSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumStepSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumStepSizeMinValue() :
      op->vtkPointSmoothingFilter::GetMaximumStepSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetMaximumStepSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumStepSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumStepSizeMaxValue() :
      op->vtkPointSmoothingFilter::GetMaximumStepSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetMaximumStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumStepSize() :
      op->vtkPointSmoothingFilter::GetMaximumStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

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
      op->vtkPointSmoothingFilter::SetConvergence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetConvergenceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergenceMinValue() :
      op->vtkPointSmoothingFilter::GetConvergenceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetConvergenceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergenceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergenceMaxValue() :
      op->vtkPointSmoothingFilter::GetConvergenceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetConvergence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvergence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConvergence() :
      op->vtkPointSmoothingFilter::GetConvergence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetEnableConstraints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableConstraints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableConstraints(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetEnableConstraints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetEnableConstraints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableConstraints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableConstraints() :
      op->vtkPointSmoothingFilter::GetEnableConstraints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_EnableConstraintsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableConstraintsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableConstraintsOn();
    }
    else
    {
      op->vtkPointSmoothingFilter::EnableConstraintsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_EnableConstraintsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableConstraintsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableConstraintsOff();
    }
    else
    {
      op->vtkPointSmoothingFilter::EnableConstraintsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetFixedAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedAngle(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetFixedAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetFixedAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedAngleMinValue() :
      op->vtkPointSmoothingFilter::GetFixedAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetFixedAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedAngleMaxValue() :
      op->vtkPointSmoothingFilter::GetFixedAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetFixedAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFixedAngle() :
      op->vtkPointSmoothingFilter::GetFixedAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetBoundaryAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryAngle(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetBoundaryAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetBoundaryAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBoundaryAngleMinValue() :
      op->vtkPointSmoothingFilter::GetBoundaryAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetBoundaryAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBoundaryAngleMaxValue() :
      op->vtkPointSmoothingFilter::GetBoundaryAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetBoundaryAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBoundaryAngle() :
      op->vtkPointSmoothingFilter::GetBoundaryAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetGenerateConstraintScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateConstraintScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateConstraintScalars(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetGenerateConstraintScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetGenerateConstraintScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateConstraintScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateConstraintScalars() :
      op->vtkPointSmoothingFilter::GetGenerateConstraintScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GenerateConstraintScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateConstraintScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateConstraintScalarsOn();
    }
    else
    {
      op->vtkPointSmoothingFilter::GenerateConstraintScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GenerateConstraintScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateConstraintScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateConstraintScalarsOff();
    }
    else
    {
      op->vtkPointSmoothingFilter::GenerateConstraintScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetGenerateConstraintNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateConstraintNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateConstraintNormals(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetGenerateConstraintNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetGenerateConstraintNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateConstraintNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateConstraintNormals() :
      op->vtkPointSmoothingFilter::GetGenerateConstraintNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GenerateConstraintNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateConstraintNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateConstraintNormalsOn();
    }
    else
    {
      op->vtkPointSmoothingFilter::GenerateConstraintNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GenerateConstraintNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateConstraintNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateConstraintNormalsOff();
    }
    else
    {
      op->vtkPointSmoothingFilter::GenerateConstraintNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetComputePackingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputePackingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputePackingRadius(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetComputePackingRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetComputePackingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputePackingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputePackingRadius() :
      op->vtkPointSmoothingFilter::GetComputePackingRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_ComputePackingRadiusOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePackingRadiusOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputePackingRadiusOn();
    }
    else
    {
      op->vtkPointSmoothingFilter::ComputePackingRadiusOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_ComputePackingRadiusOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePackingRadiusOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputePackingRadiusOff();
    }
    else
    {
      op->vtkPointSmoothingFilter::ComputePackingRadiusOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetPackingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPackingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPackingRadius(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetPackingRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetPackingRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackingRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPackingRadiusMinValue() :
      op->vtkPointSmoothingFilter::GetPackingRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetPackingRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackingRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPackingRadiusMaxValue() :
      op->vtkPointSmoothingFilter::GetPackingRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetPackingRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackingRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPackingRadius() :
      op->vtkPointSmoothingFilter::GetPackingRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetPackingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPackingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPackingFactor(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetPackingFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetPackingFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackingFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPackingFactorMinValue() :
      op->vtkPointSmoothingFilter::GetPackingFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetPackingFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackingFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPackingFactorMaxValue() :
      op->vtkPointSmoothingFilter::GetPackingFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetPackingFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackingFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPackingFactor() :
      op->vtkPointSmoothingFilter::GetPackingFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetAttractionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttractionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttractionFactor(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetAttractionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetAttractionFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttractionFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAttractionFactorMinValue() :
      op->vtkPointSmoothingFilter::GetAttractionFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetAttractionFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttractionFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAttractionFactorMaxValue() :
      op->vtkPointSmoothingFilter::GetAttractionFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetAttractionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttractionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAttractionFactor() :
      op->vtkPointSmoothingFilter::GetAttractionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetMotionConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMotionConstraint(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetMotionConstraint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetMotionConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMotionConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMotionConstraint() :
      op->vtkPointSmoothingFilter::GetMotionConstraint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetMotionConstraintToUnconstrained(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionConstraintToUnconstrained");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMotionConstraintToUnconstrained();
    }
    else
    {
      op->vtkPointSmoothingFilter::SetMotionConstraintToUnconstrained();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetMotionConstraintToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMotionConstraintToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetMotionConstraintToPlane();
    }
    else
    {
      op->vtkPointSmoothingFilter::SetMotionConstraintToPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkPointSmoothingFilter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkPointSmoothingFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSmoothingFilter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSmoothingFilter *op = static_cast<vtkPointSmoothingFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkPointSmoothingFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointSmoothingFilter_Methods[] = {
  {"IsTypeOf", PyvtkPointSmoothingFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointSmoothingFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointSmoothingFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointSmoothingFilter\nC++: static vtkPointSmoothingFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointSmoothingFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointSmoothingFilter\nC++: vtkPointSmoothingFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointSmoothingFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointSmoothingFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNeighborhoodSize", PyvtkPointSmoothingFilter_SetNeighborhoodSize, METH_VARARGS,
   "SetNeighborhoodSize(self, _arg:int) -> None\nC++: virtual void SetNeighborhoodSize(int _arg)\n\nSpecify the neighborhood size. This controls the number of\nsurrounding points that can affect a point to be smoothed.\n"},
  {"GetNeighborhoodSizeMinValue", PyvtkPointSmoothingFilter_GetNeighborhoodSizeMinValue, METH_VARARGS,
   "GetNeighborhoodSizeMinValue(self) -> int\nC++: virtual int GetNeighborhoodSizeMinValue()\n\n"},
  {"GetNeighborhoodSizeMaxValue", PyvtkPointSmoothingFilter_GetNeighborhoodSizeMaxValue, METH_VARARGS,
   "GetNeighborhoodSizeMaxValue(self) -> int\nC++: virtual int GetNeighborhoodSizeMaxValue()\n\n"},
  {"GetNeighborhoodSize", PyvtkPointSmoothingFilter_GetNeighborhoodSize, METH_VARARGS,
   "GetNeighborhoodSize(self) -> int\nC++: virtual int GetNeighborhoodSize()\n\n"},
  {"SetSmoothingMode", PyvtkPointSmoothingFilter_SetSmoothingMode, METH_VARARGS,
   "SetSmoothingMode(self, _arg:int) -> None\nC++: virtual void SetSmoothingMode(int _arg)\n\nControl how smoothing is to be performed. By default, if a point\nframe field is available then frame field smoothing will be\nperformed; then if point tensors are available then anisotropic\ntensor smoothing will be used; the next choice is to use\nisotropic scalar smoothing; and finally if no frame field,\ntensors, or scalars are available, uniform smoothing will be\nused. If both scalars, tensors, and /or a frame field are\npresent, the user can specify which to use; or to use uniform or\ngeometric smoothing.\n"},
  {"GetSmoothingModeMinValue", PyvtkPointSmoothingFilter_GetSmoothingModeMinValue, METH_VARARGS,
   "GetSmoothingModeMinValue(self) -> int\nC++: virtual int GetSmoothingModeMinValue()\n\n"},
  {"GetSmoothingModeMaxValue", PyvtkPointSmoothingFilter_GetSmoothingModeMaxValue, METH_VARARGS,
   "GetSmoothingModeMaxValue(self) -> int\nC++: virtual int GetSmoothingModeMaxValue()\n\n"},
  {"GetSmoothingMode", PyvtkPointSmoothingFilter_GetSmoothingMode, METH_VARARGS,
   "GetSmoothingMode(self) -> int\nC++: virtual int GetSmoothingMode()\n\n"},
  {"SetSmoothingModeToDefault", PyvtkPointSmoothingFilter_SetSmoothingModeToDefault, METH_VARARGS,
   "SetSmoothingModeToDefault(self) -> None\nC++: void SetSmoothingModeToDefault()\n\n"},
  {"SetSmoothingModeToGeometric", PyvtkPointSmoothingFilter_SetSmoothingModeToGeometric, METH_VARARGS,
   "SetSmoothingModeToGeometric(self) -> None\nC++: void SetSmoothingModeToGeometric()\n\n"},
  {"SetSmoothingModeToUniform", PyvtkPointSmoothingFilter_SetSmoothingModeToUniform, METH_VARARGS,
   "SetSmoothingModeToUniform(self) -> None\nC++: void SetSmoothingModeToUniform()\n\n"},
  {"SetSmoothingModeToScalars", PyvtkPointSmoothingFilter_SetSmoothingModeToScalars, METH_VARARGS,
   "SetSmoothingModeToScalars(self) -> None\nC++: void SetSmoothingModeToScalars()\n\n"},
  {"SetSmoothingModeToTensors", PyvtkPointSmoothingFilter_SetSmoothingModeToTensors, METH_VARARGS,
   "SetSmoothingModeToTensors(self) -> None\nC++: void SetSmoothingModeToTensors()\n\n"},
  {"SetSmoothingModeToFrameField", PyvtkPointSmoothingFilter_SetSmoothingModeToFrameField, METH_VARARGS,
   "SetSmoothingModeToFrameField(self) -> None\nC++: void SetSmoothingModeToFrameField()\n\n"},
  {"SetFrameFieldArray", PyvtkPointSmoothingFilter_SetFrameFieldArray, METH_VARARGS,
   "SetFrameFieldArray(self, __a:vtkDataArray) -> None\nC++: virtual void SetFrameFieldArray(vtkDataArray *)\n\nSpecify the name of the frame field to use for smoothing. This\ninformation is only necessary if a frame field smoothing is\nenabled.\n"},
  {"GetFrameFieldArray", PyvtkPointSmoothingFilter_GetFrameFieldArray, METH_VARARGS,
   "GetFrameFieldArray(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetFrameFieldArray()\n\n"},
  {"SetNumberOfIterations", PyvtkPointSmoothingFilter_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetNumberOfIterations(int _arg)\n\nSpecify the number of smoothing iterations.\n"},
  {"GetNumberOfIterationsMinValue", PyvtkPointSmoothingFilter_GetNumberOfIterationsMinValue, METH_VARARGS,
   "GetNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetNumberOfIterationsMinValue()\n\n"},
  {"GetNumberOfIterationsMaxValue", PyvtkPointSmoothingFilter_GetNumberOfIterationsMaxValue, METH_VARARGS,
   "GetNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetNumberOfIterationsMaxValue()\n\n"},
  {"GetNumberOfIterations", PyvtkPointSmoothingFilter_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: virtual int GetNumberOfIterations()\n\n"},
  {"SetNumberOfSubIterations", PyvtkPointSmoothingFilter_SetNumberOfSubIterations, METH_VARARGS,
   "SetNumberOfSubIterations(self, _arg:int) -> None\nC++: virtual void SetNumberOfSubIterations(int _arg)\n\nSpecify the number of smoothing subiterations. This specifies the\nfrequency of connectivity and data attribute updates.\n"},
  {"GetNumberOfSubIterationsMinValue", PyvtkPointSmoothingFilter_GetNumberOfSubIterationsMinValue, METH_VARARGS,
   "GetNumberOfSubIterationsMinValue(self) -> int\nC++: virtual int GetNumberOfSubIterationsMinValue()\n\n"},
  {"GetNumberOfSubIterationsMaxValue", PyvtkPointSmoothingFilter_GetNumberOfSubIterationsMaxValue, METH_VARARGS,
   "GetNumberOfSubIterationsMaxValue(self) -> int\nC++: virtual int GetNumberOfSubIterationsMaxValue()\n\n"},
  {"GetNumberOfSubIterations", PyvtkPointSmoothingFilter_GetNumberOfSubIterations, METH_VARARGS,
   "GetNumberOfSubIterations(self) -> int\nC++: virtual int GetNumberOfSubIterations()\n\n"},
  {"SetMaximumStepSize", PyvtkPointSmoothingFilter_SetMaximumStepSize, METH_VARARGS,
   "SetMaximumStepSize(self, _arg:float) -> None\nC++: virtual void SetMaximumStepSize(double _arg)\n\nSpecify the maximum smoothing step size for each smoothing\niteration. This step size limits the the distance over which a\npoint can move in each iteration.  As in all iterative methods,\nthe stability of the process is sensitive to this parameter. In\ngeneral, small step size and large numbers of iterations are more\nstable than a larger step size and a smaller numbers of\niterations.\n"},
  {"GetMaximumStepSizeMinValue", PyvtkPointSmoothingFilter_GetMaximumStepSizeMinValue, METH_VARARGS,
   "GetMaximumStepSizeMinValue(self) -> float\nC++: virtual double GetMaximumStepSizeMinValue()\n\n"},
  {"GetMaximumStepSizeMaxValue", PyvtkPointSmoothingFilter_GetMaximumStepSizeMaxValue, METH_VARARGS,
   "GetMaximumStepSizeMaxValue(self) -> float\nC++: virtual double GetMaximumStepSizeMaxValue()\n\n"},
  {"GetMaximumStepSize", PyvtkPointSmoothingFilter_GetMaximumStepSize, METH_VARARGS,
   "GetMaximumStepSize(self) -> float\nC++: virtual double GetMaximumStepSize()\n\n"},
  {"SetConvergence", PyvtkPointSmoothingFilter_SetConvergence, METH_VARARGS,
   "SetConvergence(self, _arg:float) -> None\nC++: virtual void SetConvergence(double _arg)\n\nSpecify a convergence criterion for the iteration process.\nSmaller numbers result in more smoothing iterations.\n"},
  {"GetConvergenceMinValue", PyvtkPointSmoothingFilter_GetConvergenceMinValue, METH_VARARGS,
   "GetConvergenceMinValue(self) -> float\nC++: virtual double GetConvergenceMinValue()\n\n"},
  {"GetConvergenceMaxValue", PyvtkPointSmoothingFilter_GetConvergenceMaxValue, METH_VARARGS,
   "GetConvergenceMaxValue(self) -> float\nC++: virtual double GetConvergenceMaxValue()\n\n"},
  {"GetConvergence", PyvtkPointSmoothingFilter_GetConvergence, METH_VARARGS,
   "GetConvergence(self) -> float\nC++: virtual double GetConvergence()\n\n"},
  {"SetEnableConstraints", PyvtkPointSmoothingFilter_SetEnableConstraints, METH_VARARGS,
   "SetEnableConstraints(self, _arg:bool) -> None\nC++: virtual void SetEnableConstraints(bool _arg)\n\nEnable or disable constraints on points. Point constraints are\nused to prevent points from moving, or to move only on a plane.\nThis can prevent shrinking or growing point clouds. If enabled, a\nlocal topological analysis is performed to determine whether a\npoint should be marked \"Fixed\" i.e., never moves; \"Plane\", the\npoint only moves on a plane; or \"Unconstrained\", the point can\nmove freely. If all points in the neighborhood surrounding a\npoint are in the cone defined by FixedAngle, then the point is\nclassified \"Fixed.\" If all points in the neighborhood surrounding\na point are in the cone defined by BoundaryAngle, then the point\nis classified \"Plane.\" (The angles are expressed in degrees.)\n"},
  {"GetEnableConstraints", PyvtkPointSmoothingFilter_GetEnableConstraints, METH_VARARGS,
   "GetEnableConstraints(self) -> bool\nC++: virtual bool GetEnableConstraints()\n\n"},
  {"EnableConstraintsOn", PyvtkPointSmoothingFilter_EnableConstraintsOn, METH_VARARGS,
   "EnableConstraintsOn(self) -> None\nC++: virtual void EnableConstraintsOn()\n\n"},
  {"EnableConstraintsOff", PyvtkPointSmoothingFilter_EnableConstraintsOff, METH_VARARGS,
   "EnableConstraintsOff(self) -> None\nC++: virtual void EnableConstraintsOff()\n\n"},
  {"SetFixedAngle", PyvtkPointSmoothingFilter_SetFixedAngle, METH_VARARGS,
   "SetFixedAngle(self, _arg:float) -> None\nC++: virtual void SetFixedAngle(double _arg)\n\n"},
  {"GetFixedAngleMinValue", PyvtkPointSmoothingFilter_GetFixedAngleMinValue, METH_VARARGS,
   "GetFixedAngleMinValue(self) -> float\nC++: virtual double GetFixedAngleMinValue()\n\n"},
  {"GetFixedAngleMaxValue", PyvtkPointSmoothingFilter_GetFixedAngleMaxValue, METH_VARARGS,
   "GetFixedAngleMaxValue(self) -> float\nC++: virtual double GetFixedAngleMaxValue()\n\n"},
  {"GetFixedAngle", PyvtkPointSmoothingFilter_GetFixedAngle, METH_VARARGS,
   "GetFixedAngle(self) -> float\nC++: virtual double GetFixedAngle()\n\n"},
  {"SetBoundaryAngle", PyvtkPointSmoothingFilter_SetBoundaryAngle, METH_VARARGS,
   "SetBoundaryAngle(self, _arg:float) -> None\nC++: virtual void SetBoundaryAngle(double _arg)\n\n"},
  {"GetBoundaryAngleMinValue", PyvtkPointSmoothingFilter_GetBoundaryAngleMinValue, METH_VARARGS,
   "GetBoundaryAngleMinValue(self) -> float\nC++: virtual double GetBoundaryAngleMinValue()\n\n"},
  {"GetBoundaryAngleMaxValue", PyvtkPointSmoothingFilter_GetBoundaryAngleMaxValue, METH_VARARGS,
   "GetBoundaryAngleMaxValue(self) -> float\nC++: virtual double GetBoundaryAngleMaxValue()\n\n"},
  {"GetBoundaryAngle", PyvtkPointSmoothingFilter_GetBoundaryAngle, METH_VARARGS,
   "GetBoundaryAngle(self) -> float\nC++: virtual double GetBoundaryAngle()\n\n"},
  {"SetGenerateConstraintScalars", PyvtkPointSmoothingFilter_SetGenerateConstraintScalars, METH_VARARGS,
   "SetGenerateConstraintScalars(self, _arg:bool) -> None\nC++: virtual void SetGenerateConstraintScalars(bool _arg)\n\nIf point constraints are enabled, an output scalar indicating the\nclassification of points can be generated.\n"},
  {"GetGenerateConstraintScalars", PyvtkPointSmoothingFilter_GetGenerateConstraintScalars, METH_VARARGS,
   "GetGenerateConstraintScalars(self) -> bool\nC++: virtual bool GetGenerateConstraintScalars()\n\n"},
  {"GenerateConstraintScalarsOn", PyvtkPointSmoothingFilter_GenerateConstraintScalarsOn, METH_VARARGS,
   "GenerateConstraintScalarsOn(self) -> None\nC++: virtual void GenerateConstraintScalarsOn()\n\n"},
  {"GenerateConstraintScalarsOff", PyvtkPointSmoothingFilter_GenerateConstraintScalarsOff, METH_VARARGS,
   "GenerateConstraintScalarsOff(self) -> None\nC++: virtual void GenerateConstraintScalarsOff()\n\n"},
  {"SetGenerateConstraintNormals", PyvtkPointSmoothingFilter_SetGenerateConstraintNormals, METH_VARARGS,
   "SetGenerateConstraintNormals(self, _arg:bool) -> None\nC++: virtual void SetGenerateConstraintNormals(bool _arg)\n\nIf point constraints are enabled, an output vector indicating the\naverage normal at each point can be generated.\n"},
  {"GetGenerateConstraintNormals", PyvtkPointSmoothingFilter_GetGenerateConstraintNormals, METH_VARARGS,
   "GetGenerateConstraintNormals(self) -> bool\nC++: virtual bool GetGenerateConstraintNormals()\n\n"},
  {"GenerateConstraintNormalsOn", PyvtkPointSmoothingFilter_GenerateConstraintNormalsOn, METH_VARARGS,
   "GenerateConstraintNormalsOn(self) -> None\nC++: virtual void GenerateConstraintNormalsOn()\n\n"},
  {"GenerateConstraintNormalsOff", PyvtkPointSmoothingFilter_GenerateConstraintNormalsOff, METH_VARARGS,
   "GenerateConstraintNormalsOff(self) -> None\nC++: virtual void GenerateConstraintNormalsOff()\n\n"},
  {"SetComputePackingRadius", PyvtkPointSmoothingFilter_SetComputePackingRadius, METH_VARARGS,
   "SetComputePackingRadius(self, _arg:bool) -> None\nC++: virtual void SetComputePackingRadius(bool _arg)\n\nEnable / disable the computation of a packing radius. By default,\na packing radius is computed as one half of the average distance\nbetween neighboring points. (Point neighbors are defined by the\nneighborhood size.)\n"},
  {"GetComputePackingRadius", PyvtkPointSmoothingFilter_GetComputePackingRadius, METH_VARARGS,
   "GetComputePackingRadius(self) -> bool\nC++: virtual bool GetComputePackingRadius()\n\n"},
  {"ComputePackingRadiusOn", PyvtkPointSmoothingFilter_ComputePackingRadiusOn, METH_VARARGS,
   "ComputePackingRadiusOn(self) -> None\nC++: virtual void ComputePackingRadiusOn()\n\n"},
  {"ComputePackingRadiusOff", PyvtkPointSmoothingFilter_ComputePackingRadiusOff, METH_VARARGS,
   "ComputePackingRadiusOff(self) -> None\nC++: virtual void ComputePackingRadiusOff()\n\n"},
  {"SetPackingRadius", PyvtkPointSmoothingFilter_SetPackingRadius, METH_VARARGS,
   "SetPackingRadius(self, _arg:float) -> None\nC++: virtual void SetPackingRadius(double _arg)\n\nSpecify the packing radius R. This only takes effect if\nComputePackingRadius is off. Note that the for two points\nseparated by radius r, a repulsive force is generated when\n0<=r<=R, and a repulsive force when R<=r<=(1+AttractionFactor*R).\nBy default, the PackingRadius is automatically computed, but when\nComputePackingRadius is off, then manually setting the\nPackingRadius is allowed. Note that the PackingRadius is updated\nafter the algorithm runs (useful to examine the computed packing\nradius).\n"},
  {"GetPackingRadiusMinValue", PyvtkPointSmoothingFilter_GetPackingRadiusMinValue, METH_VARARGS,
   "GetPackingRadiusMinValue(self) -> float\nC++: virtual double GetPackingRadiusMinValue()\n\n"},
  {"GetPackingRadiusMaxValue", PyvtkPointSmoothingFilter_GetPackingRadiusMaxValue, METH_VARARGS,
   "GetPackingRadiusMaxValue(self) -> float\nC++: virtual double GetPackingRadiusMaxValue()\n\n"},
  {"GetPackingRadius", PyvtkPointSmoothingFilter_GetPackingRadius, METH_VARARGS,
   "GetPackingRadius(self) -> float\nC++: virtual double GetPackingRadius()\n\n"},
  {"SetPackingFactor", PyvtkPointSmoothingFilter_SetPackingFactor, METH_VARARGS,
   "SetPackingFactor(self, _arg:float) -> None\nC++: virtual void SetPackingFactor(double _arg)\n\nSpecify the packing factor. Larger numbers tend to loosen the\noverall packing of points. Note however that if the point density\nin a region is high, then the packing factor may have little\neffect (due to mutual inter-particle constraints). The default\nvalue is 1.0. (Note that a characteristic inter-particle radius R\nis computed at the onset of the algorithm (or can be manually\nspecified). Within 0<=r<=R*PackingFactor a repulsive force is\ngenerated.)\n"},
  {"GetPackingFactorMinValue", PyvtkPointSmoothingFilter_GetPackingFactorMinValue, METH_VARARGS,
   "GetPackingFactorMinValue(self) -> float\nC++: virtual double GetPackingFactorMinValue()\n\n"},
  {"GetPackingFactorMaxValue", PyvtkPointSmoothingFilter_GetPackingFactorMaxValue, METH_VARARGS,
   "GetPackingFactorMaxValue(self) -> float\nC++: virtual double GetPackingFactorMaxValue()\n\n"},
  {"GetPackingFactor", PyvtkPointSmoothingFilter_GetPackingFactor, METH_VARARGS,
   "GetPackingFactor(self) -> float\nC++: virtual double GetPackingFactor()\n\n"},
  {"SetAttractionFactor", PyvtkPointSmoothingFilter_SetAttractionFactor, METH_VARARGS,
   "SetAttractionFactor(self, _arg:float) -> None\nC++: virtual void SetAttractionFactor(double _arg)\n\nControl the relative distance of inter-particle attraction. A\nvalue of 1.0 means that the radius of the attraction region is\nthe same as the radius of repulsion. By default, a value of 0.5\nis used (e.g., in the region 0<=r<=R a repulsive force is\ngenerated, while in R<r<=R*1.5 an attractive force is generated).\n"},
  {"GetAttractionFactorMinValue", PyvtkPointSmoothingFilter_GetAttractionFactorMinValue, METH_VARARGS,
   "GetAttractionFactorMinValue(self) -> float\nC++: virtual double GetAttractionFactorMinValue()\n\n"},
  {"GetAttractionFactorMaxValue", PyvtkPointSmoothingFilter_GetAttractionFactorMaxValue, METH_VARARGS,
   "GetAttractionFactorMaxValue(self) -> float\nC++: virtual double GetAttractionFactorMaxValue()\n\n"},
  {"GetAttractionFactor", PyvtkPointSmoothingFilter_GetAttractionFactor, METH_VARARGS,
   "GetAttractionFactor(self) -> float\nC++: virtual double GetAttractionFactor()\n\n"},
  {"SetMotionConstraint", PyvtkPointSmoothingFilter_SetMotionConstraint, METH_VARARGS,
   "SetMotionConstraint(self, _arg:int) -> None\nC++: virtual void SetMotionConstraint(int _arg)\n\nSpecify how to constrain the motion of points. By default, point\nmotion is unconstrained. Points can also be constrained to a\nplane. If constrained to a plane, then an instance of vtkPlane\nmust be specified.\n"},
  {"GetMotionConstraint", PyvtkPointSmoothingFilter_GetMotionConstraint, METH_VARARGS,
   "GetMotionConstraint(self) -> int\nC++: virtual int GetMotionConstraint()\n\n"},
  {"SetMotionConstraintToUnconstrained", PyvtkPointSmoothingFilter_SetMotionConstraintToUnconstrained, METH_VARARGS,
   "SetMotionConstraintToUnconstrained(self) -> None\nC++: void SetMotionConstraintToUnconstrained()\n\n"},
  {"SetMotionConstraintToPlane", PyvtkPointSmoothingFilter_SetMotionConstraintToPlane, METH_VARARGS,
   "SetMotionConstraintToPlane(self) -> None\nC++: void SetMotionConstraintToPlane()\n\n"},
  {"SetPlane", PyvtkPointSmoothingFilter_SetPlane, METH_VARARGS,
   "SetPlane(self, __a:vtkPlane) -> None\nC++: void SetPlane(vtkPlane *)\n\nSpecify the plane to which point motion is constrained. Only\nrequired if MotionConstraint is set to UNCONSTRAINED_MOTION.\n"},
  {"GetPlane", PyvtkPointSmoothingFilter_GetPlane, METH_VARARGS,
   "GetPlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetPlane()\n\n"},
  {"SetLocator", PyvtkPointSmoothingFilter_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractPointLocator) -> None\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {"GetLocator", PyvtkPointSmoothingFilter_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointSmoothingFilter_Doc =
  "vtkPointSmoothingFilter - adjust point positions to form a pleasing,\npacked arrangement\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkPointSmoothingFilter modifies the coordinates of the input points\n"
  "of a vtkPointSet by adjusting their position to create a smooth\n"
  "distribution (and thereby form a pleasing packing of the points).\n"
  "Smoothing is performed by considering the effects of neighboring\n"
  "points on one another. Smoothing in its simplest form (geometric) is\n"
  "simply a variant of Laplacian smoothing where each point moves\n"
  "towards the average position of its neighboring points. Next, uniform\n"
  "smoothing uses a cubic cutoff function to produce repulsive forces\n"
  "between close points and attractive forces that are a little further\n"
  "away. Smoothing can be further controlled either by a scalar field,\n"
  "by a tensor field, or a frame field (the user can specify the nature\n"
  "of the smoothing operation). If controlled by a scalar field, then\n"
  "each input point is assumed to be surrounded by a isotropic sphere\n"
  "scaled by the scalar field; if controlled by a tensor field, then\n"
  "each input point is assumed to be surrounded by an anisotropic,\n"
  "oriented ellipsoid aligned to the the tensor eigenvectors and scaled\n"
  "by the determinate of the tensor. A frame field also assumes a\n"
  "surrounding, ellipsoidal shape except that the inversion of the\n"
  "ellipsoid tensor is already performed. Typical usage of this filter\n"
  "is to perform a smoothing (also referred to as packing) operation\n"
  "(i.e., first execute this filter) and then combine it with a glyph\n"
  "filter (e.g., vtkTensorGlyph or vtkGlyph3D) to visualize the packed\n"
  "points.\n\n"
  "Smoothing depends on a local neighborhood of nearby points. In\n"
  "general, the larger the neighborhood size, the greater the reduction\n"
  "in high frequency information. (The memory and/or computational\n"
  "requirements of the algorithm may also significantly increase.) The\n"
  "PackingRadius (and PackingFactor) controls what points are considered\n"
  "close. The PackingRadius can be computed automatically, or specified\n"
  "by the user. (The product of PackingRadius*PackingFactor is referred\n"
  "to as the scaling factor alpha in the paper cited below. This\n"
  "provides a convenient way to combine automatic PackingRadius\n"
  "computation based on average between particle neighborhoods, and then\n"
  "adjust it with the PackingFactor.)\n\n"
  "Any vtkPointSet type can be provided as input, and the output will\n"
  "contain the same number of new points each of which is adjusted to a\n"
  "new position.\n\n"
  "Note that the algorithm requires the use of a spatial point locator.\n"
  "The point locator is used to build a local neighborhood of the points\n"
  "surrounding each point. It is also used to perform interpolation as\n"
  "the point positions are adjusted.\n\n"
  "The algorithm incrementally adjusts the point positions through an\n"
  "iterative process. Basically points are moved due to the influence of\n"
  "neighboring points. Iterations continue until the specified number of\n"
  "iterations is reached, or convergence occurs. Convergence occurs when\n"
  "the maximum displacement of any point is less than the convergence\n"
  "value. As points move, both the local connectivity and data\n"
  "attributes associated with each point must be updated. Rather than\n"
  "performing these expensive operations after every iteration, a number\n"
  "of sub-iterations Si can be specified. If Si > 1, then the\n"
  "neighborhood and attribute value updates occur only every Si'th\n"
  "iteration. Using sub-iterations can improve performance\n"
  "significantly.\n\n"
  "@warning\n"
  "Geometric smoothing defines a one-sided attractive force between\n"
  "particles. Thus particles tend to clump together, and the entire set\n"
  "of points (with enough iterations and appropriate PackingRadius) can\n"
  "converge to a single position. This can be mitigated by turning on\n"
  "point constraints, which limit the movement of \"boundary\" points.\n\n"
  "@warning\n"
  "This class has been loosely inspired by the paper by Kindlmann and\n"
  "Westin \"Diffusion Tensor Visualization with Glyph Packing\". However,\n"
  "several computational shortcuts, and generalizations have been used\n"
  "for performance and utility reasons.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkTensorWidget vtkTensorGlyph vtkSmoothPolyDataFilter vtkGlyph3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointSmoothingFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPointSmoothingFilter", // tp_name
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
  PyvtkPointSmoothingFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointSmoothingFilter_StaticNew()
{
  return vtkPointSmoothingFilter::New();
}

PyObject *PyvtkPointSmoothingFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointSmoothingFilter_Type, PyvtkPointSmoothingFilter_Methods,
    "vtkPointSmoothingFilter",
 &PyvtkPointSmoothingFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "DEFAULT_SMOOTHING", vtkPointSmoothingFilter::DEFAULT_SMOOTHING },
        { "GEOMETRIC_SMOOTHING", vtkPointSmoothingFilter::GEOMETRIC_SMOOTHING },
        { "UNIFORM_SMOOTHING", vtkPointSmoothingFilter::UNIFORM_SMOOTHING },
        { "SCALAR_SMOOTHING", vtkPointSmoothingFilter::SCALAR_SMOOTHING },
        { "TENSOR_SMOOTHING", vtkPointSmoothingFilter::TENSOR_SMOOTHING },
        { "FRAME_FIELD_SMOOTHING", vtkPointSmoothingFilter::FRAME_FIELD_SMOOTHING },
        { "UNCONSTRAINED_MOTION", vtkPointSmoothingFilter::UNCONSTRAINED_MOTION },
        { "PLANE_MOTION", vtkPointSmoothingFilter::PLANE_MOTION },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointSmoothingFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointSmoothingFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointSmoothingFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

