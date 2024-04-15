// python wrapper for vtkImageToPolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageToPolyDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageToPolyDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkImageToPolyDataFilter_ClassNew(); }


static PyObject *
PyvtkImageToPolyDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageToPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageToPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageToPolyDataFilter *tempr = vtkImageToPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageToPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageToPolyDataFilter::NewInstance());

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
PyvtkImageToPolyDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageToPolyDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageToPolyDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetOutputStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputStyle(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetOutputStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetOutputStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputStyleMinValue() :
      op->vtkImageToPolyDataFilter::GetOutputStyleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetOutputStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputStyleMaxValue() :
      op->vtkImageToPolyDataFilter::GetOutputStyleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetOutputStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputStyle() :
      op->vtkImageToPolyDataFilter::GetOutputStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetOutputStyleToPixelize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToPixelize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputStyleToPixelize();
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetOutputStyleToPixelize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetOutputStyleToPolygonalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToPolygonalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputStyleToPolygonalize();
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetOutputStyleToPolygonalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetOutputStyleToRunLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToRunLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputStyleToRunLength();
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetOutputStyleToRunLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetColorModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorModeMinValue() :
      op->vtkImageToPolyDataFilter::GetColorModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetColorModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorModeMaxValue() :
      op->vtkImageToPolyDataFilter::GetColorModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkImageToPolyDataFilter::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetColorModeToLUT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToLUT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToLUT();
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetColorModeToLUT();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetColorModeToLinear256(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToLinear256");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToLinear256();
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetColorModeToLinear256();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageToPolyDataFilter::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothing(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothing() :
      op->vtkImageToPolyDataFilter::GetSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothingOn();
    }
    else
    {
      op->vtkImageToPolyDataFilter::SmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothingOff();
    }
    else
    {
      op->vtkImageToPolyDataFilter::SmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetNumberOfSmoothingIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSmoothingIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSmoothingIterations(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetNumberOfSmoothingIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSmoothingIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSmoothingIterationsMinValue() :
      op->vtkImageToPolyDataFilter::GetNumberOfSmoothingIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSmoothingIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSmoothingIterationsMaxValue() :
      op->vtkImageToPolyDataFilter::GetNumberOfSmoothingIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSmoothingIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSmoothingIterations() :
      op->vtkImageToPolyDataFilter::GetNumberOfSmoothingIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDecimation(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetDecimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetDecimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDecimation() :
      op->vtkImageToPolyDataFilter::GetDecimation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_DecimationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecimationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DecimationOn();
    }
    else
    {
      op->vtkImageToPolyDataFilter::DecimationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_DecimationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DecimationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DecimationOff();
    }
    else
    {
      op->vtkImageToPolyDataFilter::DecimationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetDecimationError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDecimationError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDecimationError(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetDecimationError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetDecimationErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimationErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDecimationErrorMinValue() :
      op->vtkImageToPolyDataFilter::GetDecimationErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetDecimationErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimationErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDecimationErrorMaxValue() :
      op->vtkImageToPolyDataFilter::GetDecimationErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetDecimationError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDecimationError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDecimationError() :
      op->vtkImageToPolyDataFilter::GetDecimationError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetError(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErrorMinValue() :
      op->vtkImageToPolyDataFilter::GetErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErrorMaxValue() :
      op->vtkImageToPolyDataFilter::GetErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetError() :
      op->vtkImageToPolyDataFilter::GetError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_SetSubImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubImageSize(temp0);
    }
    else
    {
      op->vtkImageToPolyDataFilter::SetSubImageSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetSubImageSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubImageSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubImageSizeMinValue() :
      op->vtkImageToPolyDataFilter::GetSubImageSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetSubImageSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubImageSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubImageSizeMaxValue() :
      op->vtkImageToPolyDataFilter::GetSubImageSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageToPolyDataFilter_GetSubImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToPolyDataFilter *op = static_cast<vtkImageToPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubImageSize() :
      op->vtkImageToPolyDataFilter::GetSubImageSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageToPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkImageToPolyDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageToPolyDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageToPolyDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageToPolyDataFilter\nC++: static vtkImageToPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageToPolyDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageToPolyDataFilter\nC++: vtkImageToPolyDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageToPolyDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageToPolyDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOutputStyle", PyvtkImageToPolyDataFilter_SetOutputStyle, METH_VARARGS,
   "SetOutputStyle(self, _arg:int) -> None\nC++: virtual void SetOutputStyle(int _arg)\n\nSpecify how to create the output. Pixelize means converting the\nimage to quad polygons with a constant color per quad.\nPolygonalize means merging colors together into polygonal\nregions, and then smoothing the regions (if smoothing is turned\non). RunLength means creating quad polygons that may encompass\nseveral pixels on a scan line. The default behavior is\nPolygonalize.\n"},
  {"GetOutputStyleMinValue", PyvtkImageToPolyDataFilter_GetOutputStyleMinValue, METH_VARARGS,
   "GetOutputStyleMinValue(self) -> int\nC++: virtual int GetOutputStyleMinValue()\n\n"},
  {"GetOutputStyleMaxValue", PyvtkImageToPolyDataFilter_GetOutputStyleMaxValue, METH_VARARGS,
   "GetOutputStyleMaxValue(self) -> int\nC++: virtual int GetOutputStyleMaxValue()\n\n"},
  {"GetOutputStyle", PyvtkImageToPolyDataFilter_GetOutputStyle, METH_VARARGS,
   "GetOutputStyle(self) -> int\nC++: virtual int GetOutputStyle()\n\n"},
  {"SetOutputStyleToPixelize", PyvtkImageToPolyDataFilter_SetOutputStyleToPixelize, METH_VARARGS,
   "SetOutputStyleToPixelize(self) -> None\nC++: void SetOutputStyleToPixelize()\n\n"},
  {"SetOutputStyleToPolygonalize", PyvtkImageToPolyDataFilter_SetOutputStyleToPolygonalize, METH_VARARGS,
   "SetOutputStyleToPolygonalize(self) -> None\nC++: void SetOutputStyleToPolygonalize()\n\n"},
  {"SetOutputStyleToRunLength", PyvtkImageToPolyDataFilter_SetOutputStyleToRunLength, METH_VARARGS,
   "SetOutputStyleToRunLength(self) -> None\nC++: void SetOutputStyleToRunLength()\n\n"},
  {"SetColorMode", PyvtkImageToPolyDataFilter_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\nSpecify how to quantize color.\n"},
  {"GetColorModeMinValue", PyvtkImageToPolyDataFilter_GetColorModeMinValue, METH_VARARGS,
   "GetColorModeMinValue(self) -> int\nC++: virtual int GetColorModeMinValue()\n\n"},
  {"GetColorModeMaxValue", PyvtkImageToPolyDataFilter_GetColorModeMaxValue, METH_VARARGS,
   "GetColorModeMaxValue(self) -> int\nC++: virtual int GetColorModeMaxValue()\n\n"},
  {"GetColorMode", PyvtkImageToPolyDataFilter_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetColorModeToLUT", PyvtkImageToPolyDataFilter_SetColorModeToLUT, METH_VARARGS,
   "SetColorModeToLUT(self) -> None\nC++: void SetColorModeToLUT()\n\n"},
  {"SetColorModeToLinear256", PyvtkImageToPolyDataFilter_SetColorModeToLinear256, METH_VARARGS,
   "SetColorModeToLinear256(self) -> None\nC++: void SetColorModeToLinear256()\n\n"},
  {"SetLookupTable", PyvtkImageToPolyDataFilter_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, __a:vtkScalarsToColors) -> None\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet/Get the vtkLookupTable to use. The lookup table is used when\nthe color mode is set to LUT and a single component scalar is\ninput.\n"},
  {"GetLookupTable", PyvtkImageToPolyDataFilter_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\n"},
  {"SetSmoothing", PyvtkImageToPolyDataFilter_SetSmoothing, METH_VARARGS,
   "SetSmoothing(self, _arg:int) -> None\nC++: virtual void SetSmoothing(vtkTypeBool _arg)\n\nIf the output style is set to polygonalize, then you can control\nwhether to smooth boundaries.\n"},
  {"GetSmoothing", PyvtkImageToPolyDataFilter_GetSmoothing, METH_VARARGS,
   "GetSmoothing(self) -> int\nC++: virtual vtkTypeBool GetSmoothing()\n\n"},
  {"SmoothingOn", PyvtkImageToPolyDataFilter_SmoothingOn, METH_VARARGS,
   "SmoothingOn(self) -> None\nC++: virtual void SmoothingOn()\n\n"},
  {"SmoothingOff", PyvtkImageToPolyDataFilter_SmoothingOff, METH_VARARGS,
   "SmoothingOff(self) -> None\nC++: virtual void SmoothingOff()\n\n"},
  {"SetNumberOfSmoothingIterations", PyvtkImageToPolyDataFilter_SetNumberOfSmoothingIterations, METH_VARARGS,
   "SetNumberOfSmoothingIterations(self, _arg:int) -> None\nC++: virtual void SetNumberOfSmoothingIterations(int _arg)\n\nSpecify the number of smoothing iterations to smooth polygons.\n(Only in effect if output style is Polygonalize and smoothing is\non.)\n"},
  {"GetNumberOfSmoothingIterationsMinValue", PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterationsMinValue, METH_VARARGS,
   "GetNumberOfSmoothingIterationsMinValue(self) -> int\nC++: virtual int GetNumberOfSmoothingIterationsMinValue()\n\n"},
  {"GetNumberOfSmoothingIterationsMaxValue", PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterationsMaxValue, METH_VARARGS,
   "GetNumberOfSmoothingIterationsMaxValue(self) -> int\nC++: virtual int GetNumberOfSmoothingIterationsMaxValue()\n\n"},
  {"GetNumberOfSmoothingIterations", PyvtkImageToPolyDataFilter_GetNumberOfSmoothingIterations, METH_VARARGS,
   "GetNumberOfSmoothingIterations(self) -> int\nC++: virtual int GetNumberOfSmoothingIterations()\n\n"},
  {"SetDecimation", PyvtkImageToPolyDataFilter_SetDecimation, METH_VARARGS,
   "SetDecimation(self, _arg:int) -> None\nC++: virtual void SetDecimation(vtkTypeBool _arg)\n\nTurn on/off whether the final polygons should be decimated.\nwhether to smooth boundaries.\n"},
  {"GetDecimation", PyvtkImageToPolyDataFilter_GetDecimation, METH_VARARGS,
   "GetDecimation(self) -> int\nC++: virtual vtkTypeBool GetDecimation()\n\n"},
  {"DecimationOn", PyvtkImageToPolyDataFilter_DecimationOn, METH_VARARGS,
   "DecimationOn(self) -> None\nC++: virtual void DecimationOn()\n\n"},
  {"DecimationOff", PyvtkImageToPolyDataFilter_DecimationOff, METH_VARARGS,
   "DecimationOff(self) -> None\nC++: virtual void DecimationOff()\n\n"},
  {"SetDecimationError", PyvtkImageToPolyDataFilter_SetDecimationError, METH_VARARGS,
   "SetDecimationError(self, _arg:float) -> None\nC++: virtual void SetDecimationError(double _arg)\n\nSpecify the error to use for decimation (if decimation is on).\nThe error is an absolute number--the image spacing and dimensions\nare used to create points so the error should be consistent with\nthe image size.\n"},
  {"GetDecimationErrorMinValue", PyvtkImageToPolyDataFilter_GetDecimationErrorMinValue, METH_VARARGS,
   "GetDecimationErrorMinValue(self) -> float\nC++: virtual double GetDecimationErrorMinValue()\n\n"},
  {"GetDecimationErrorMaxValue", PyvtkImageToPolyDataFilter_GetDecimationErrorMaxValue, METH_VARARGS,
   "GetDecimationErrorMaxValue(self) -> float\nC++: virtual double GetDecimationErrorMaxValue()\n\n"},
  {"GetDecimationError", PyvtkImageToPolyDataFilter_GetDecimationError, METH_VARARGS,
   "GetDecimationError(self) -> float\nC++: virtual double GetDecimationError()\n\n"},
  {"SetError", PyvtkImageToPolyDataFilter_SetError, METH_VARARGS,
   "SetError(self, _arg:int) -> None\nC++: virtual void SetError(int _arg)\n\nSpecify the error value between two colors where the colors are\nconsidered the same. Only use this if the color mode uses the\ndefault 256 table.\n"},
  {"GetErrorMinValue", PyvtkImageToPolyDataFilter_GetErrorMinValue, METH_VARARGS,
   "GetErrorMinValue(self) -> int\nC++: virtual int GetErrorMinValue()\n\n"},
  {"GetErrorMaxValue", PyvtkImageToPolyDataFilter_GetErrorMaxValue, METH_VARARGS,
   "GetErrorMaxValue(self) -> int\nC++: virtual int GetErrorMaxValue()\n\n"},
  {"GetError", PyvtkImageToPolyDataFilter_GetError, METH_VARARGS,
   "GetError(self) -> int\nC++: virtual int GetError()\n\n"},
  {"SetSubImageSize", PyvtkImageToPolyDataFilter_SetSubImageSize, METH_VARARGS,
   "SetSubImageSize(self, _arg:int) -> None\nC++: virtual void SetSubImageSize(int _arg)\n\nSpecify the size (n by n pixels) of the largest region to\npolygonalize. When the OutputStyle is set to\nVTK_STYLE_POLYGONALIZE, large amounts of memory are used. In\norder to process large images, the image is broken into pieces\nthat are at most Size pixels in width and height.\n"},
  {"GetSubImageSizeMinValue", PyvtkImageToPolyDataFilter_GetSubImageSizeMinValue, METH_VARARGS,
   "GetSubImageSizeMinValue(self) -> int\nC++: virtual int GetSubImageSizeMinValue()\n\n"},
  {"GetSubImageSizeMaxValue", PyvtkImageToPolyDataFilter_GetSubImageSizeMaxValue, METH_VARARGS,
   "GetSubImageSizeMaxValue(self) -> int\nC++: virtual int GetSubImageSizeMaxValue()\n\n"},
  {"GetSubImageSize", PyvtkImageToPolyDataFilter_GetSubImageSize, METH_VARARGS,
   "GetSubImageSize(self) -> int\nC++: virtual int GetSubImageSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageToPolyDataFilter_Doc =
  "vtkImageToPolyDataFilter - generate linear primitives (vtkPolyData)\nfrom an image\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkImageToPolyDataFilter converts raster data (i.e., an image) into\n"
  "polygonal data (i.e., quads or n-sided polygons), with each polygon\n"
  "assigned a constant color. This is useful for writers that generate\n"
  "vector formats (i.e., CGM or PostScript). To use this filter, you\n"
  "specify how to quantize the color (or whether to use an image with a\n"
  "lookup table), and what style the output should be. The output is\n"
  "always polygons, but the choice is n x m quads (where n and m define\n"
  "the input image dimensions) \"Pixelize\" option; arbitrary polygons\n"
  "\"Polygonalize\" option; or variable number of quads of constant color\n"
  "generated along scan lines \"RunLength\" option.\n\n"
  "The algorithm quantizes color in order to create coherent regions\n"
  "that the polygons can represent with good compression. By default,\n"
  "the input image is quantized to 256 colors using a 3-3-2 bits for\n"
  "red-green-blue. However, you can also supply a single component image\n"
  "and a lookup table, with the single component assumed to be an index\n"
  "into the table.  (Note: a quantized image can be generated with the\n"
  "filter vtkImageQuantizeRGBToIndex.) The number of colors on output is\n"
  "equal to the number of colors in the input lookup table (or 256 if\n"
  "the built in linear ramp is used).\n\n"
  "The output of the filter is polygons with a single color per polygon\n"
  "cell. If the output style is set to \"Polygonalize\", the polygons may\n"
  "have an large number of points (bounded by something like 2*(n+m));\n"
  "and the polygon may not be convex which may cause rendering problems\n"
  "on some systems (use vtkTriangleFilter). Otherwise, each polygon will\n"
  "have four vertices. The output also contains scalar data defining RGB\n"
  "color in unsigned char form.\n\n"
  "@warning\n"
  "The input linear lookup table must be of the form of 3-component\n"
  "unsigned char.\n\n"
  "@warning\n"
  "This filter defines constant cell colors. If you have a plotting\n"
  "device that supports Gouraud shading (linear interpolation of color),\n"
  "then superior algorithms are available for generating polygons from\n"
  "images.\n\n"
  "@warning\n"
  "Note that many plotting devices/formats support only a limited number\n"
  "of colors.\n\n"
  "@sa\n"
  "vtkCGMWriter vtkImageQuantizeRGBToIndex vtkTriangleFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageToPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkImageToPolyDataFilter", // tp_name
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
  PyvtkImageToPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageToPolyDataFilter_StaticNew()
{
  return vtkImageToPolyDataFilter::New();
}

PyObject *PyvtkImageToPolyDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageToPolyDataFilter_Type, PyvtkImageToPolyDataFilter_Methods,
    "vtkImageToPolyDataFilter",
 &PyvtkImageToPolyDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageToPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageToPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageToPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_STYLE_PIXELIZE", 0 },
        { "VTK_STYLE_POLYGONALIZE", 1 },
        { "VTK_STYLE_RUN_LENGTH", 2 },
        { "VTK_COLOR_MODE_LUT", 0 },
        { "VTK_COLOR_MODE_LINEAR_256", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

