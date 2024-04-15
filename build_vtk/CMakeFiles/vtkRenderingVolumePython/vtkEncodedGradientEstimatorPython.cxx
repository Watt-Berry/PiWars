// python wrapper for vtkEncodedGradientEstimator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEncodedGradientEstimator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEncodedGradientEstimator(PyObject *dict); }
extern "C" { PyObject *PyvtkEncodedGradientEstimator_ClassNew(); }


static PyObject *
PyvtkEncodedGradientEstimator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEncodedGradientEstimator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEncodedGradientEstimator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEncodedGradientEstimator *tempr = vtkEncodedGradientEstimator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEncodedGradientEstimator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEncodedGradientEstimator::NewInstance());

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
PyvtkEncodedGradientEstimator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEncodedGradientEstimator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEncodedGradientEstimator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInputData() :
      op->vtkEncodedGradientEstimator::GetInputData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientMagnitudeScale(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetGradientMagnitudeScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudeScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientMagnitudeBias(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetGradientMagnitudeBias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudeBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetBoundsClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundsClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundsClip(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetBoundsClip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClipMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClipMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClipMinValue() :
      op->vtkEncodedGradientEstimator::GetBoundsClipMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClipMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClipMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClipMaxValue() :
      op->vtkEncodedGradientEstimator::GetBoundsClipMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBoundsClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundsClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundsClip() :
      op->vtkEncodedGradientEstimator::GetBoundsClip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_BoundsClipOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundsClipOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundsClipOn();
    }
    else
    {
      op->vtkEncodedGradientEstimator::BoundsClipOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_BoundsClipOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundsClipOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundsClipOff();
    }
    else
    {
      op->vtkEncodedGradientEstimator::BoundsClipOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkEncodedGradientEstimator_SetBounds_s1(self, args);
    case 1:
      return PyvtkEncodedGradientEstimator_SetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return nullptr;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkEncodedGradientEstimator::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkEncodedGradientEstimator::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short *tempr = (ap.IsBound() ?
      op->GetEncodedNormals() :
      op->vtkEncodedGradientEstimator::GetEncodedNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEncodedNormalIndex(temp0) :
      op->vtkEncodedGradientEstimator::GetEncodedNormalIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEncodedNormalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetEncodedNormalIndex(temp0, temp1, temp2) :
      op->vtkEncodedGradientEstimator::GetEncodedNormalIndex(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEncodedGradientEstimator_GetEncodedNormalIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s1(self, args);
    case 3:
      return PyvtkEncodedGradientEstimator_GetEncodedNormalIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEncodedNormalIndex");
  return nullptr;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetGradientMagnitudes() :
      op->vtkEncodedGradientEstimator::GetGradientMagnitudes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfThreads(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetNumberOfThreads(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMinValue() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreadsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsMaxValue() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreadsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreads() :
      op->vtkEncodedGradientEstimator::GetNumberOfThreads());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetDirectionEncoder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionEncoder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  vtkDirectionEncoder *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDirectionEncoder"))
  {
    if (ap.IsBound())
    {
      op->SetDirectionEncoder(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetDirectionEncoder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetDirectionEncoder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionEncoder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDirectionEncoder *tempr = (ap.IsBound() ?
      op->GetDirectionEncoder() :
      op->vtkEncodedGradientEstimator::GetDirectionEncoder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetComputeGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradientMagnitudes(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetComputeGradientMagnitudes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetComputeGradientMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradientMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradientMagnitudes() :
      op->vtkEncodedGradientEstimator::GetComputeGradientMagnitudes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientMagnitudesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientMagnitudesOn();
    }
    else
    {
      op->vtkEncodedGradientEstimator::ComputeGradientMagnitudesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientMagnitudesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientMagnitudesOff();
    }
    else
    {
      op->vtkEncodedGradientEstimator::ComputeGradientMagnitudesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCylinderClip(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetCylinderClip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCylinderClip() :
      op->vtkEncodedGradientEstimator::GetCylinderClip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_CylinderClipOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CylinderClipOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CylinderClipOn();
    }
    else
    {
      op->vtkEncodedGradientEstimator::CylinderClipOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_CylinderClipOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CylinderClipOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CylinderClipOff();
    }
    else
    {
      op->vtkEncodedGradientEstimator::CylinderClipOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetLastUpdateTimeInSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUpdateTimeInSeconds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLastUpdateTimeInSeconds() :
      op->vtkEncodedGradientEstimator::GetLastUpdateTimeInSeconds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetLastUpdateTimeInCPUSeconds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastUpdateTimeInCPUSeconds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLastUpdateTimeInCPUSeconds() :
      op->vtkEncodedGradientEstimator::GetLastUpdateTimeInCPUSeconds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetUseCylinderClip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCylinderClip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCylinderClip() :
      op->vtkEncodedGradientEstimator::GetUseCylinderClip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetCircleLimits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleLimits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCircleLimits() :
      op->vtkEncodedGradientEstimator::GetCircleLimits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetZeroNormalThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZeroNormalThreshold(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetZeroNormalThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroNormalThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalThreshold() :
      op->vtkEncodedGradientEstimator::GetZeroNormalThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_SetZeroPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZeroPad(temp0);
    }
    else
    {
      op->vtkEncodedGradientEstimator::SetZeroPad(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPadMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPadMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZeroPadMinValue() :
      op->vtkEncodedGradientEstimator::GetZeroPadMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPadMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPadMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZeroPadMaxValue() :
      op->vtkEncodedGradientEstimator::GetZeroPadMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetZeroPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZeroPad() :
      op->vtkEncodedGradientEstimator::GetZeroPad());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ZeroPadOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZeroPadOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZeroPadOn();
    }
    else
    {
      op->vtkEncodedGradientEstimator::ZeroPadOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_ZeroPadOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZeroPadOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZeroPadOff();
    }
    else
    {
      op->vtkEncodedGradientEstimator::ZeroPadOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetInputSize() :
      op->vtkEncodedGradientEstimator::GetInputSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientEstimator_GetInputAspect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAspect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientEstimator *op = static_cast<vtkEncodedGradientEstimator *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetInputAspect() :
      op->vtkEncodedGradientEstimator::GetInputAspect());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkEncodedGradientEstimator_Methods[] = {
  {"IsTypeOf", PyvtkEncodedGradientEstimator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEncodedGradientEstimator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEncodedGradientEstimator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEncodedGradientEstimator\nC++: static vtkEncodedGradientEstimator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEncodedGradientEstimator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEncodedGradientEstimator\nC++: vtkEncodedGradientEstimator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEncodedGradientEstimator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEncodedGradientEstimator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputData", PyvtkEncodedGradientEstimator_SetInputData, METH_VARARGS,
   "SetInputData(self, __a:vtkImageData) -> None\nC++: virtual void SetInputData(vtkImageData *)\n\nSet/Get the scalar input for which the normals will be\ncalculated. Note that this call does not setup a pipeline\nconnection. vtkEncodedGradientEstimator is not an algorithm and\ndoes not update its input. If you are directly using this class,\nyou may need to manually update the algorithm that produces this\ndata object.\n"},
  {"GetInputData", PyvtkEncodedGradientEstimator_GetInputData, METH_VARARGS,
   "GetInputData(self) -> vtkImageData\nC++: virtual vtkImageData *GetInputData()\n\n"},
  {"SetGradientMagnitudeScale", PyvtkEncodedGradientEstimator_SetGradientMagnitudeScale, METH_VARARGS,
   "SetGradientMagnitudeScale(self, _arg:float) -> None\nC++: virtual void SetGradientMagnitudeScale(float _arg)\n\nSet/Get the scale and bias for the gradient magnitude\n"},
  {"GetGradientMagnitudeScale", PyvtkEncodedGradientEstimator_GetGradientMagnitudeScale, METH_VARARGS,
   "GetGradientMagnitudeScale(self) -> float\nC++: virtual float GetGradientMagnitudeScale()\n\n"},
  {"SetGradientMagnitudeBias", PyvtkEncodedGradientEstimator_SetGradientMagnitudeBias, METH_VARARGS,
   "SetGradientMagnitudeBias(self, _arg:float) -> None\nC++: virtual void SetGradientMagnitudeBias(float _arg)\n\n"},
  {"GetGradientMagnitudeBias", PyvtkEncodedGradientEstimator_GetGradientMagnitudeBias, METH_VARARGS,
   "GetGradientMagnitudeBias(self) -> float\nC++: virtual float GetGradientMagnitudeBias()\n\n"},
  {"SetBoundsClip", PyvtkEncodedGradientEstimator_SetBoundsClip, METH_VARARGS,
   "SetBoundsClip(self, _arg:int) -> None\nC++: virtual void SetBoundsClip(vtkTypeBool _arg)\n\nTurn on / off the bounding of the normal computation by the\nthis->Bounds bounding box\n"},
  {"GetBoundsClipMinValue", PyvtkEncodedGradientEstimator_GetBoundsClipMinValue, METH_VARARGS,
   "GetBoundsClipMinValue(self) -> int\nC++: virtual vtkTypeBool GetBoundsClipMinValue()\n\n"},
  {"GetBoundsClipMaxValue", PyvtkEncodedGradientEstimator_GetBoundsClipMaxValue, METH_VARARGS,
   "GetBoundsClipMaxValue(self) -> int\nC++: virtual vtkTypeBool GetBoundsClipMaxValue()\n\n"},
  {"GetBoundsClip", PyvtkEncodedGradientEstimator_GetBoundsClip, METH_VARARGS,
   "GetBoundsClip(self) -> int\nC++: virtual vtkTypeBool GetBoundsClip()\n\n"},
  {"BoundsClipOn", PyvtkEncodedGradientEstimator_BoundsClipOn, METH_VARARGS,
   "BoundsClipOn(self) -> None\nC++: virtual void BoundsClipOn()\n\n"},
  {"BoundsClipOff", PyvtkEncodedGradientEstimator_BoundsClipOff, METH_VARARGS,
   "BoundsClipOff(self) -> None\nC++: virtual void BoundsClipOff()\n\n"},
  {"SetBounds", PyvtkEncodedGradientEstimator_SetBounds, METH_VARARGS,
   "SetBounds(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetBounds(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetBounds(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetBounds(const int _arg[6])\n\nSet / Get the bounds of the computation (used if\nthis->ComputationBounds is 1.) The bounds are specified xmin,\nxmax, ymin, ymax, zmin, zmax.\n"},
  {"GetBounds", PyvtkEncodedGradientEstimator_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetBounds()\n\n"},
  {"Update", PyvtkEncodedGradientEstimator_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update()\n\nRecompute the encoded normals and gradient magnitudes.\n"},
  {"GetEncodedNormals", PyvtkEncodedGradientEstimator_GetEncodedNormals, METH_VARARGS,
   "GetEncodedNormals(self) -> Pointer\nC++: unsigned short *GetEncodedNormals()\n\nGet the encoded normals.\n"},
  {"GetEncodedNormalIndex", PyvtkEncodedGradientEstimator_GetEncodedNormalIndex, METH_VARARGS,
   "GetEncodedNormalIndex(self, xyzIndex:int) -> int\nC++: int GetEncodedNormalIndex(vtkIdType xyzIndex)\nGetEncodedNormalIndex(self, xIndex:int, yIndex:int, zIndex:int)\n    -> int\nC++: int GetEncodedNormalIndex(int xIndex, int yIndex, int zIndex)\n\nGet the encoded normal at an x,y,z location in the volume\n"},
  {"GetGradientMagnitudes", PyvtkEncodedGradientEstimator_GetGradientMagnitudes, METH_VARARGS,
   "GetGradientMagnitudes(self) -> Pointer\nC++: unsigned char *GetGradientMagnitudes()\n\nGet the gradient magnitudes\n"},
  {"SetNumberOfThreads", PyvtkEncodedGradientEstimator_SetNumberOfThreads, METH_VARARGS,
   "SetNumberOfThreads(self, _arg:int) -> None\nC++: virtual void SetNumberOfThreads(int _arg)\n\nGet/Set the number of threads to create when encoding normals\nThis defaults to the number of available processors on the\nmachine\n"},
  {"GetNumberOfThreadsMinValue", PyvtkEncodedGradientEstimator_GetNumberOfThreadsMinValue, METH_VARARGS,
   "GetNumberOfThreadsMinValue(self) -> int\nC++: virtual int GetNumberOfThreadsMinValue()\n\n"},
  {"GetNumberOfThreadsMaxValue", PyvtkEncodedGradientEstimator_GetNumberOfThreadsMaxValue, METH_VARARGS,
   "GetNumberOfThreadsMaxValue(self) -> int\nC++: virtual int GetNumberOfThreadsMaxValue()\n\n"},
  {"GetNumberOfThreads", PyvtkEncodedGradientEstimator_GetNumberOfThreads, METH_VARARGS,
   "GetNumberOfThreads(self) -> int\nC++: virtual int GetNumberOfThreads()\n\n"},
  {"SetDirectionEncoder", PyvtkEncodedGradientEstimator_SetDirectionEncoder, METH_VARARGS,
   "SetDirectionEncoder(self, direnc:vtkDirectionEncoder) -> None\nC++: void SetDirectionEncoder(vtkDirectionEncoder *direnc)\n\nSet / Get the direction encoder used to encode normal directions\nto fit within two bytes\n"},
  {"GetDirectionEncoder", PyvtkEncodedGradientEstimator_GetDirectionEncoder, METH_VARARGS,
   "GetDirectionEncoder(self) -> vtkDirectionEncoder\nC++: virtual vtkDirectionEncoder *GetDirectionEncoder()\n\n"},
  {"SetComputeGradientMagnitudes", PyvtkEncodedGradientEstimator_SetComputeGradientMagnitudes, METH_VARARGS,
   "SetComputeGradientMagnitudes(self, _arg:int) -> None\nC++: virtual void SetComputeGradientMagnitudes(vtkTypeBool _arg)\n\nIf you don't want to compute gradient magnitudes (but you do want\nnormals for shading) this can be used. Be careful - if if you a\nnon-constant gradient magnitude transfer function and you turn\nthis on, it may crash\n"},
  {"GetComputeGradientMagnitudes", PyvtkEncodedGradientEstimator_GetComputeGradientMagnitudes, METH_VARARGS,
   "GetComputeGradientMagnitudes(self) -> int\nC++: virtual vtkTypeBool GetComputeGradientMagnitudes()\n\n"},
  {"ComputeGradientMagnitudesOn", PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOn, METH_VARARGS,
   "ComputeGradientMagnitudesOn(self) -> None\nC++: virtual void ComputeGradientMagnitudesOn()\n\n"},
  {"ComputeGradientMagnitudesOff", PyvtkEncodedGradientEstimator_ComputeGradientMagnitudesOff, METH_VARARGS,
   "ComputeGradientMagnitudesOff(self) -> None\nC++: virtual void ComputeGradientMagnitudesOff()\n\n"},
  {"SetCylinderClip", PyvtkEncodedGradientEstimator_SetCylinderClip, METH_VARARGS,
   "SetCylinderClip(self, _arg:int) -> None\nC++: virtual void SetCylinderClip(vtkTypeBool _arg)\n\nIf the data in each slice is only contained within a circle\ncircumscribed within the slice, and the slice is square, then\ndon't compute anything outside the circle. This circle through\nthe slices forms a cylinder.\n"},
  {"GetCylinderClip", PyvtkEncodedGradientEstimator_GetCylinderClip, METH_VARARGS,
   "GetCylinderClip(self) -> int\nC++: virtual vtkTypeBool GetCylinderClip()\n\n"},
  {"CylinderClipOn", PyvtkEncodedGradientEstimator_CylinderClipOn, METH_VARARGS,
   "CylinderClipOn(self) -> None\nC++: virtual void CylinderClipOn()\n\n"},
  {"CylinderClipOff", PyvtkEncodedGradientEstimator_CylinderClipOff, METH_VARARGS,
   "CylinderClipOff(self) -> None\nC++: virtual void CylinderClipOff()\n\n"},
  {"GetLastUpdateTimeInSeconds", PyvtkEncodedGradientEstimator_GetLastUpdateTimeInSeconds, METH_VARARGS,
   "GetLastUpdateTimeInSeconds(self) -> float\nC++: virtual float GetLastUpdateTimeInSeconds()\n\nGet the time required for the last update in seconds or cpu\nseconds\n"},
  {"GetLastUpdateTimeInCPUSeconds", PyvtkEncodedGradientEstimator_GetLastUpdateTimeInCPUSeconds, METH_VARARGS,
   "GetLastUpdateTimeInCPUSeconds(self) -> float\nC++: virtual float GetLastUpdateTimeInCPUSeconds()\n\n"},
  {"GetUseCylinderClip", PyvtkEncodedGradientEstimator_GetUseCylinderClip, METH_VARARGS,
   "GetUseCylinderClip(self) -> int\nC++: virtual int GetUseCylinderClip()\n\n"},
  {"GetCircleLimits", PyvtkEncodedGradientEstimator_GetCircleLimits, METH_VARARGS,
   "GetCircleLimits(self) -> Pointer\nC++: int *GetCircleLimits()\n\n"},
  {"SetZeroNormalThreshold", PyvtkEncodedGradientEstimator_SetZeroNormalThreshold, METH_VARARGS,
   "SetZeroNormalThreshold(self, v:float) -> None\nC++: void SetZeroNormalThreshold(float v)\n\nSet / Get the ZeroNormalThreshold - this defines the minimum\nmagnitude of a gradient that is considered sufficient to define a\ndirection. Gradients with magnitudes at or less than this value\nare given a \"zero normal\" index. These are handled specially in\nthe shader, and you can set the intensity of light for these zero\nnormals in the gradient shader.\n"},
  {"GetZeroNormalThreshold", PyvtkEncodedGradientEstimator_GetZeroNormalThreshold, METH_VARARGS,
   "GetZeroNormalThreshold(self) -> float\nC++: virtual float GetZeroNormalThreshold()\n\n"},
  {"SetZeroPad", PyvtkEncodedGradientEstimator_SetZeroPad, METH_VARARGS,
   "SetZeroPad(self, _arg:int) -> None\nC++: virtual void SetZeroPad(vtkTypeBool _arg)\n\nAssume that the data value outside the volume is zero when\ncomputing normals.\n"},
  {"GetZeroPadMinValue", PyvtkEncodedGradientEstimator_GetZeroPadMinValue, METH_VARARGS,
   "GetZeroPadMinValue(self) -> int\nC++: virtual vtkTypeBool GetZeroPadMinValue()\n\n"},
  {"GetZeroPadMaxValue", PyvtkEncodedGradientEstimator_GetZeroPadMaxValue, METH_VARARGS,
   "GetZeroPadMaxValue(self) -> int\nC++: virtual vtkTypeBool GetZeroPadMaxValue()\n\n"},
  {"GetZeroPad", PyvtkEncodedGradientEstimator_GetZeroPad, METH_VARARGS,
   "GetZeroPad(self) -> int\nC++: virtual vtkTypeBool GetZeroPad()\n\n"},
  {"ZeroPadOn", PyvtkEncodedGradientEstimator_ZeroPadOn, METH_VARARGS,
   "ZeroPadOn(self) -> None\nC++: virtual void ZeroPadOn()\n\n"},
  {"ZeroPadOff", PyvtkEncodedGradientEstimator_ZeroPadOff, METH_VARARGS,
   "ZeroPadOff(self) -> None\nC++: virtual void ZeroPadOff()\n\n"},
  {"GetInputSize", PyvtkEncodedGradientEstimator_GetInputSize, METH_VARARGS,
   "GetInputSize(self) -> (int, int, int)\nC++: virtual int *GetInputSize()\n\n"},
  {"GetInputAspect", PyvtkEncodedGradientEstimator_GetInputAspect, METH_VARARGS,
   "GetInputAspect(self) -> (float, float, float)\nC++: virtual float *GetInputAspect()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEncodedGradientEstimator_Doc =
  "vtkEncodedGradientEstimator - Superclass for gradient estimation\n\n"
  "Superclass: vtkObject\n\n"
  "vtkEncodedGradientEstimator is an abstract superclass for gradient\n"
  "estimation. It takes a scalar input of vtkImageData, computes a\n"
  "gradient value for every point, and encodes this value into a three\n"
  "byte value (2 for direction, 1 for magnitude) using the\n"
  "vtkDirectionEncoder. The direction encoder is defaulted to a\n"
  "vtkRecursiveSphereDirectionEncoder, but can be overridden with the\n"
  "SetDirectionEncoder method. The scale and the bias values for the\n"
  "gradient magnitude are used to convert it into a one byte value\n"
  "according to v = m*scale + bias where m is the magnitude and v is the\n"
  "resulting one byte value.\n"
  "@sa\n"
  "vtkFiniteDifferenceGradientEstimator vtkDirectionEncoder\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEncodedGradientEstimator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkEncodedGradientEstimator", // tp_name
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
  PyvtkEncodedGradientEstimator_Doc, // tp_doc
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

PyObject *PyvtkEncodedGradientEstimator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEncodedGradientEstimator_Type, PyvtkEncodedGradientEstimator_Methods,
    "vtkEncodedGradientEstimator",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEncodedGradientEstimator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEncodedGradientEstimator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEncodedGradientEstimator", o) != 0)
  {
    Py_DECREF(o);
  }

}

