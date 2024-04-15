// python wrapper for vtkRuledSurfaceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRuledSurfaceFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRuledSurfaceFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkRuledSurfaceFilter_ClassNew(); }


static PyObject *
PyvtkRuledSurfaceFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRuledSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRuledSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRuledSurfaceFilter *tempr = vtkRuledSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRuledSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRuledSurfaceFilter::NewInstance());

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
PyvtkRuledSurfaceFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRuledSurfaceFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRuledSurfaceFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetDistanceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceFactor(temp0);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetDistanceFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetDistanceFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceFactorMinValue() :
      op->vtkRuledSurfaceFilter::GetDistanceFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetDistanceFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceFactorMaxValue() :
      op->vtkRuledSurfaceFilter::GetDistanceFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetDistanceFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceFactor() :
      op->vtkRuledSurfaceFilter::GetDistanceFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOnRatio(temp0);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetOnRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOnRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMinValue() :
      op->vtkRuledSurfaceFilter::GetOnRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOnRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatioMaxValue() :
      op->vtkRuledSurfaceFilter::GetOnRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOnRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOnRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOnRatio() :
      op->vtkRuledSurfaceFilter::GetOnRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffset(temp0);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOffsetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffsetMinValue() :
      op->vtkRuledSurfaceFilter::GetOffsetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOffsetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffsetMaxValue() :
      op->vtkRuledSurfaceFilter::GetOffsetMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOffset() :
      op->vtkRuledSurfaceFilter::GetOffset());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetCloseSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCloseSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCloseSurface(temp0);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetCloseSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetCloseSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCloseSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCloseSurface() :
      op->vtkRuledSurfaceFilter::GetCloseSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_CloseSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseSurfaceOn();
    }
    else
    {
      op->vtkRuledSurfaceFilter::CloseSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_CloseSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseSurfaceOff();
    }
    else
    {
      op->vtkRuledSurfaceFilter::CloseSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetRuledMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRuledMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRuledMode(temp0);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetRuledMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetRuledModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuledModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRuledModeMinValue() :
      op->vtkRuledSurfaceFilter::GetRuledModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetRuledModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuledModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRuledModeMaxValue() :
      op->vtkRuledSurfaceFilter::GetRuledModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetRuledMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuledMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRuledMode() :
      op->vtkRuledSurfaceFilter::GetRuledMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetRuledModeToResample(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRuledModeToResample");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRuledModeToResample();
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetRuledModeToResample();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetRuledModeToPointWalk(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRuledModeToPointWalk");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRuledModeToPointWalk();
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetRuledModeToPointWalk();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetRuledModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRuledModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRuledModeAsString() :
      op->vtkRuledSurfaceFilter::GetRuledModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetResolution_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0, temp1);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetResolution(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRuledSurfaceFilter_SetResolution_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRuledSurfaceFilter_SetResolution(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkRuledSurfaceFilter_SetResolution_s1(self, args);
    case 1:
      return PyvtkRuledSurfaceFilter_SetResolution_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetResolution");
  return nullptr;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkRuledSurfaceFilter::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassLines(temp0);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetPassLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassLines() :
      op->vtkRuledSurfaceFilter::GetPassLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_PassLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassLinesOn();
    }
    else
    {
      op->vtkRuledSurfaceFilter::PassLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_PassLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassLinesOff();
    }
    else
    {
      op->vtkRuledSurfaceFilter::PassLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_SetOrientLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientLoops(temp0);
    }
    else
    {
      op->vtkRuledSurfaceFilter::SetOrientLoops(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_GetOrientLoops(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientLoops");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientLoops() :
      op->vtkRuledSurfaceFilter::GetOrientLoops());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_OrientLoopsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientLoopsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrientLoopsOn();
    }
    else
    {
      op->vtkRuledSurfaceFilter::OrientLoopsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRuledSurfaceFilter_OrientLoopsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientLoopsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRuledSurfaceFilter *op = static_cast<vtkRuledSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrientLoopsOff();
    }
    else
    {
      op->vtkRuledSurfaceFilter::OrientLoopsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRuledSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkRuledSurfaceFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRuledSurfaceFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRuledSurfaceFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRuledSurfaceFilter\nC++: static vtkRuledSurfaceFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRuledSurfaceFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRuledSurfaceFilter\nC++: vtkRuledSurfaceFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRuledSurfaceFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRuledSurfaceFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDistanceFactor", PyvtkRuledSurfaceFilter_SetDistanceFactor, METH_VARARGS,
   "SetDistanceFactor(self, _arg:float) -> None\nC++: virtual void SetDistanceFactor(double _arg)\n\nSet/Get the factor that controls tearing of the surface.\n"},
  {"GetDistanceFactorMinValue", PyvtkRuledSurfaceFilter_GetDistanceFactorMinValue, METH_VARARGS,
   "GetDistanceFactorMinValue(self) -> float\nC++: virtual double GetDistanceFactorMinValue()\n\n"},
  {"GetDistanceFactorMaxValue", PyvtkRuledSurfaceFilter_GetDistanceFactorMaxValue, METH_VARARGS,
   "GetDistanceFactorMaxValue(self) -> float\nC++: virtual double GetDistanceFactorMaxValue()\n\n"},
  {"GetDistanceFactor", PyvtkRuledSurfaceFilter_GetDistanceFactor, METH_VARARGS,
   "GetDistanceFactor(self) -> float\nC++: virtual double GetDistanceFactor()\n\n"},
  {"SetOnRatio", PyvtkRuledSurfaceFilter_SetOnRatio, METH_VARARGS,
   "SetOnRatio(self, _arg:int) -> None\nC++: virtual void SetOnRatio(int _arg)\n\nControl the striping of the ruled surface. If OnRatio is greater\nthan 1, then every nth strip is turned on, beginning with the\nOffset strip.\n"},
  {"GetOnRatioMinValue", PyvtkRuledSurfaceFilter_GetOnRatioMinValue, METH_VARARGS,
   "GetOnRatioMinValue(self) -> int\nC++: virtual int GetOnRatioMinValue()\n\n"},
  {"GetOnRatioMaxValue", PyvtkRuledSurfaceFilter_GetOnRatioMaxValue, METH_VARARGS,
   "GetOnRatioMaxValue(self) -> int\nC++: virtual int GetOnRatioMaxValue()\n\n"},
  {"GetOnRatio", PyvtkRuledSurfaceFilter_GetOnRatio, METH_VARARGS,
   "GetOnRatio(self) -> int\nC++: virtual int GetOnRatio()\n\n"},
  {"SetOffset", PyvtkRuledSurfaceFilter_SetOffset, METH_VARARGS,
   "SetOffset(self, _arg:int) -> None\nC++: virtual void SetOffset(int _arg)\n\nControl the striping of the ruled surface. The offset sets the\nfirst stripe that is visible. Offset is generally used with\nOnRatio to create nifty striping effects.\n"},
  {"GetOffsetMinValue", PyvtkRuledSurfaceFilter_GetOffsetMinValue, METH_VARARGS,
   "GetOffsetMinValue(self) -> int\nC++: virtual int GetOffsetMinValue()\n\n"},
  {"GetOffsetMaxValue", PyvtkRuledSurfaceFilter_GetOffsetMaxValue, METH_VARARGS,
   "GetOffsetMaxValue(self) -> int\nC++: virtual int GetOffsetMaxValue()\n\n"},
  {"GetOffset", PyvtkRuledSurfaceFilter_GetOffset, METH_VARARGS,
   "GetOffset(self) -> int\nC++: virtual int GetOffset()\n\n"},
  {"SetCloseSurface", PyvtkRuledSurfaceFilter_SetCloseSurface, METH_VARARGS,
   "SetCloseSurface(self, _arg:int) -> None\nC++: virtual void SetCloseSurface(vtkTypeBool _arg)\n\nIndicate whether the surface is to be closed. If this boolean is\non, then the first and last polyline are used to generate a\nstripe that closes the surface. (Note: to close the surface in\nthe other direction, repeat the first point in the polyline as\nthe last point in the polyline.)\n"},
  {"GetCloseSurface", PyvtkRuledSurfaceFilter_GetCloseSurface, METH_VARARGS,
   "GetCloseSurface(self) -> int\nC++: virtual vtkTypeBool GetCloseSurface()\n\n"},
  {"CloseSurfaceOn", PyvtkRuledSurfaceFilter_CloseSurfaceOn, METH_VARARGS,
   "CloseSurfaceOn(self) -> None\nC++: virtual void CloseSurfaceOn()\n\n"},
  {"CloseSurfaceOff", PyvtkRuledSurfaceFilter_CloseSurfaceOff, METH_VARARGS,
   "CloseSurfaceOff(self) -> None\nC++: virtual void CloseSurfaceOff()\n\n"},
  {"SetRuledMode", PyvtkRuledSurfaceFilter_SetRuledMode, METH_VARARGS,
   "SetRuledMode(self, _arg:int) -> None\nC++: virtual void SetRuledMode(int _arg)\n\nSet the mode by which to create the ruled surface. (Dramatically\ndifferent results are possible depending on the chosen mode.) The\nresample mode evenly resamples the polylines (based on length)\nand generates triangle strips. The point walk mode uses the\nexisting points and walks around the polyline using existing\npoints.\n"},
  {"GetRuledModeMinValue", PyvtkRuledSurfaceFilter_GetRuledModeMinValue, METH_VARARGS,
   "GetRuledModeMinValue(self) -> int\nC++: virtual int GetRuledModeMinValue()\n\n"},
  {"GetRuledModeMaxValue", PyvtkRuledSurfaceFilter_GetRuledModeMaxValue, METH_VARARGS,
   "GetRuledModeMaxValue(self) -> int\nC++: virtual int GetRuledModeMaxValue()\n\n"},
  {"GetRuledMode", PyvtkRuledSurfaceFilter_GetRuledMode, METH_VARARGS,
   "GetRuledMode(self) -> int\nC++: virtual int GetRuledMode()\n\n"},
  {"SetRuledModeToResample", PyvtkRuledSurfaceFilter_SetRuledModeToResample, METH_VARARGS,
   "SetRuledModeToResample(self) -> None\nC++: void SetRuledModeToResample()\n\n"},
  {"SetRuledModeToPointWalk", PyvtkRuledSurfaceFilter_SetRuledModeToPointWalk, METH_VARARGS,
   "SetRuledModeToPointWalk(self) -> None\nC++: void SetRuledModeToPointWalk()\n\n"},
  {"GetRuledModeAsString", PyvtkRuledSurfaceFilter_GetRuledModeAsString, METH_VARARGS,
   "GetRuledModeAsString(self) -> str\nC++: const char *GetRuledModeAsString()\n\n"},
  {"SetResolution", PyvtkRuledSurfaceFilter_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetResolution(int _arg1, int _arg2)\nSetResolution(self, _arg:(int, int)) -> None\nC++: void SetResolution(const int _arg[2])\n\nIf the ruled surface generation mode is RESAMPLE, then these\nparameters are used to determine the resample rate. Resolution[0]\ndefines the resolution in the direction of the polylines;\nResolution[1] defines the resolution across the polylines (i.e.,\ndirection orthogonal to Resolution[0]).\n"},
  {"GetResolution", PyvtkRuledSurfaceFilter_GetResolution, METH_VARARGS,
   "GetResolution(self) -> (int, int)\nC++: virtual int *GetResolution()\n\n"},
  {"SetPassLines", PyvtkRuledSurfaceFilter_SetPassLines, METH_VARARGS,
   "SetPassLines(self, _arg:int) -> None\nC++: virtual void SetPassLines(vtkTypeBool _arg)\n\nIndicate whether the generating lines are to be passed to the\noutput. By default lines are not passed to the output.\n"},
  {"GetPassLines", PyvtkRuledSurfaceFilter_GetPassLines, METH_VARARGS,
   "GetPassLines(self) -> int\nC++: virtual vtkTypeBool GetPassLines()\n\n"},
  {"PassLinesOn", PyvtkRuledSurfaceFilter_PassLinesOn, METH_VARARGS,
   "PassLinesOn(self) -> None\nC++: virtual void PassLinesOn()\n\n"},
  {"PassLinesOff", PyvtkRuledSurfaceFilter_PassLinesOff, METH_VARARGS,
   "PassLinesOff(self) -> None\nC++: virtual void PassLinesOff()\n\n"},
  {"SetOrientLoops", PyvtkRuledSurfaceFilter_SetOrientLoops, METH_VARARGS,
   "SetOrientLoops(self, _arg:int) -> None\nC++: virtual void SetOrientLoops(vtkTypeBool _arg)\n\nIndicate whether the starting points of the loops need to be\ndetermined. If set to 0, then its assumes that the 0th point of\neach loop should be always connected By default the loops are not\noriented.\n"},
  {"GetOrientLoops", PyvtkRuledSurfaceFilter_GetOrientLoops, METH_VARARGS,
   "GetOrientLoops(self) -> int\nC++: virtual vtkTypeBool GetOrientLoops()\n\n"},
  {"OrientLoopsOn", PyvtkRuledSurfaceFilter_OrientLoopsOn, METH_VARARGS,
   "OrientLoopsOn(self) -> None\nC++: virtual void OrientLoopsOn()\n\n"},
  {"OrientLoopsOff", PyvtkRuledSurfaceFilter_OrientLoopsOff, METH_VARARGS,
   "OrientLoopsOff(self) -> None\nC++: virtual void OrientLoopsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRuledSurfaceFilter_Doc =
  "vtkRuledSurfaceFilter - generates a surface from a set of lines\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkRuledSurfaceFilter is a filter that generates a surface from a set\n"
  "of lines. The lines are assumed to be \"parallel\" in the sense that\n"
  "they do not intersect and remain somewhat close to one another. A\n"
  "surface is generated by connecting the points defining each pair of\n"
  "lines with straight lines. This creates a strip for each pair of\n"
  "lines (i.e., a triangulation is created from two generating lines).\n"
  "The filter can handle an arbitrary number of lines, with lines i and\n"
  "i+1 assumed connected. Note that there are several different\n"
  "approaches for creating the ruled surface, the method for creating\n"
  "the surface can either use the input points or resample from the\n"
  "polylines (using a user-specified resolution).\n\n"
  "This filter offers some other important features. A DistanceFactor\n"
  "ivar is used to decide when two lines are too far apart to connect.\n"
  "(The factor is a multiple of the distance between the first two\n"
  "points of the two lines defining the strip.) If the distance between\n"
  "the two generating lines becomes too great, then the surface is not\n"
  "generated in that region. (Note: if the lines separate and then\n"
  "merge, then a hole can be generated in the surface.) In addition, the\n"
  "Offset and OnRation ivars can be used to create nifty striped\n"
  "surfaces. Closed surfaces (e.g., tubes) can be created by setting the\n"
  "CloseSurface ivar. (The surface can be closed in the other direction\n"
  "by repeating the first and last point in the polylines defining the\n"
  "surface.)\n\n"
  "An important use of this filter is to combine it with vtkStreamTracer\n"
  "to generate stream surfaces. It can also be used to create surfaces\n"
  "from contours.\n\n"
  "@warning\n"
  "The number of lines must be greater than two if a surface is to be\n"
  "generated.  sides (i.e., a ribbon), use vtkRibbonFilter.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkStreamTracer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRuledSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkRuledSurfaceFilter", // tp_name
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
  PyvtkRuledSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRuledSurfaceFilter_StaticNew()
{
  return vtkRuledSurfaceFilter::New();
}

PyObject *PyvtkRuledSurfaceFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRuledSurfaceFilter_Type, PyvtkRuledSurfaceFilter_Methods,
    "vtkRuledSurfaceFilter",
 &PyvtkRuledSurfaceFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRuledSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRuledSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRuledSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_RULED_MODE_RESAMPLE", 0 },
        { "VTK_RULED_MODE_POINT_WALK", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

