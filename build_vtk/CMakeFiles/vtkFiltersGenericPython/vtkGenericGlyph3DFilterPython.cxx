// python wrapper for vtkGenericGlyph3DFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericGlyph3DFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericGlyph3DFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkGenericGlyph3DFilter_ClassNew(); }


static PyObject *
PyvtkGenericGlyph3DFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericGlyph3DFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericGlyph3DFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericGlyph3DFilter *tempr = vtkGenericGlyph3DFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericGlyph3DFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericGlyph3DFilter::NewInstance());

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
PyvtkGenericGlyph3DFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericGlyph3DFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericGlyph3DFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetSourceData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

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
      op->vtkGenericGlyph3DFilter::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericGlyph3DFilter_SetSourceData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0, temp1);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetSourceData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericGlyph3DFilter_SetSourceData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkGenericGlyph3DFilter_SetSourceData_s1(self, args);
    case 2:
      return PyvtkGenericGlyph3DFilter_SetSourceData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceData");
  return nullptr;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource(temp0) :
      op->vtkGenericGlyph3DFilter::GetSource(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOn();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::ScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOff();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::ScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkGenericGlyph3DFilter::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleMode(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetScaleMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetScaleMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScaleMode() :
      op->vtkGenericGlyph3DFilter::GetScaleMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToScaleByScalar();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetScaleModeToScaleByScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToScaleByVector();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetScaleModeToScaleByVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByVectorComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToScaleByVectorComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToScaleByVectorComponents();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetScaleModeToScaleByVectorComponents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleModeToDataScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleModeToDataScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScaleModeToDataScalingOff();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetScaleModeToDataScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetScaleModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScaleModeAsString() :
      op->vtkGenericGlyph3DFilter::GetScaleModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

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
      op->vtkGenericGlyph3DFilter::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkGenericGlyph3DFilter::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetColorModeToColorByScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToColorByScale();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetColorModeToColorByScale();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetColorModeToColorByScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToColorByScalar();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetColorModeToColorByScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetColorModeToColorByVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToColorByVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToColorByVector();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetColorModeToColorByVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkGenericGlyph3DFilter::GetColorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkGenericGlyph3DFilter::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0, temp1);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericGlyph3DFilter_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRange(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGenericGlyph3DFilter_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGenericGlyph3DFilter_SetRange_s1(self, args);
    case 1:
      return PyvtkGenericGlyph3DFilter_SetRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return nullptr;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRange() :
      op->vtkGenericGlyph3DFilter::GetRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrient(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetOrient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_OrientOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrientOn();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::OrientOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_OrientOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OrientOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OrientOff();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::OrientOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetOrient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrient() :
      op->vtkGenericGlyph3DFilter::GetOrient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClamping(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetClamping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_ClampingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOn();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::ClampingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_ClampingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClampingOff();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::ClampingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetClamping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClamping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClamping() :
      op->vtkGenericGlyph3DFilter::GetClamping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorMode(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetVectorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkGenericGlyph3DFilter::GetVectorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetVectorModeToUseVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToUseVector();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetVectorModeToUseVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetVectorModeToUseNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToUseNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToUseNormal();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetVectorModeToUseNormal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetVectorModeToVectorRotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToVectorRotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToVectorRotationOff();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetVectorModeToVectorRotationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetVectorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorModeAsString() :
      op->vtkGenericGlyph3DFilter::GetVectorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIndexMode(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetIndexMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetIndexMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIndexMode() :
      op->vtkGenericGlyph3DFilter::GetIndexMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetIndexModeToScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexModeToScalar();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetIndexModeToScalar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetIndexModeToVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexModeToVector();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetIndexModeToVector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetIndexModeToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexModeToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexModeToOff();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetIndexModeToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetIndexModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIndexModeAsString() :
      op->vtkGenericGlyph3DFilter::GetIndexModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointIds(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetGeneratePointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetGeneratePointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeneratePointIds() :
      op->vtkGenericGlyph3DFilter::GetGeneratePointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GeneratePointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointIdsOn();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::GeneratePointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GeneratePointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointIdsOff();
    }
    else
    {
      op->vtkGenericGlyph3DFilter::GeneratePointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIdsName(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SetPointIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdsName() :
      op->vtkGenericGlyph3DFilter::GetPointIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetInputScalarsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputScalarsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputScalarsSelection() :
      op->vtkGenericGlyph3DFilter::GetInputScalarsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SelectInputScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectInputScalars(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SelectInputScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetInputVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputVectorsSelection() :
      op->vtkGenericGlyph3DFilter::GetInputVectorsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SelectInputVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectInputVectors(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SelectInputVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_GetInputNormalsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputNormalsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputNormalsSelection() :
      op->vtkGenericGlyph3DFilter::GetInputNormalsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericGlyph3DFilter_SelectInputNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectInputNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericGlyph3DFilter *op = static_cast<vtkGenericGlyph3DFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectInputNormals(temp0);
    }
    else
    {
      op->vtkGenericGlyph3DFilter::SelectInputNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericGlyph3DFilter_Methods[] = {
  {"IsTypeOf", PyvtkGenericGlyph3DFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericGlyph3DFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericGlyph3DFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericGlyph3DFilter\nC++: static vtkGenericGlyph3DFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericGlyph3DFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericGlyph3DFilter\nC++: vtkGenericGlyph3DFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericGlyph3DFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericGlyph3DFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceData", PyvtkGenericGlyph3DFilter_SetSourceData, METH_VARARGS,
   "SetSourceData(self, pd:vtkPolyData) -> None\nC++: void SetSourceData(vtkPolyData *pd)\nSetSourceData(self, id:int, pd:vtkPolyData) -> None\nC++: void SetSourceData(int id, vtkPolyData *pd)\n\nSet the source to use for the glyph.\n"},
  {"GetSource", PyvtkGenericGlyph3DFilter_GetSource, METH_VARARGS,
   "GetSource(self, id:int=0) -> vtkPolyData\nC++: vtkPolyData *GetSource(int id=0)\n\nGet a pointer to a source object at a specified table location.\n"},
  {"SetScaling", PyvtkGenericGlyph3DFilter_SetScaling, METH_VARARGS,
   "SetScaling(self, _arg:int) -> None\nC++: virtual void SetScaling(vtkTypeBool _arg)\n\nTurn on/off scaling of source geometry.\n"},
  {"ScalingOn", PyvtkGenericGlyph3DFilter_ScalingOn, METH_VARARGS,
   "ScalingOn(self) -> None\nC++: virtual void ScalingOn()\n\n"},
  {"ScalingOff", PyvtkGenericGlyph3DFilter_ScalingOff, METH_VARARGS,
   "ScalingOff(self) -> None\nC++: virtual void ScalingOff()\n\n"},
  {"GetScaling", PyvtkGenericGlyph3DFilter_GetScaling, METH_VARARGS,
   "GetScaling(self) -> int\nC++: virtual vtkTypeBool GetScaling()\n\n"},
  {"SetScaleMode", PyvtkGenericGlyph3DFilter_SetScaleMode, METH_VARARGS,
   "SetScaleMode(self, _arg:int) -> None\nC++: virtual void SetScaleMode(int _arg)\n\nEither scale by scalar or by vector/normal magnitude.\n"},
  {"GetScaleMode", PyvtkGenericGlyph3DFilter_GetScaleMode, METH_VARARGS,
   "GetScaleMode(self) -> int\nC++: virtual int GetScaleMode()\n\n"},
  {"SetScaleModeToScaleByScalar", PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByScalar, METH_VARARGS,
   "SetScaleModeToScaleByScalar(self) -> None\nC++: void SetScaleModeToScaleByScalar()\n\n"},
  {"SetScaleModeToScaleByVector", PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByVector, METH_VARARGS,
   "SetScaleModeToScaleByVector(self) -> None\nC++: void SetScaleModeToScaleByVector()\n\n"},
  {"SetScaleModeToScaleByVectorComponents", PyvtkGenericGlyph3DFilter_SetScaleModeToScaleByVectorComponents, METH_VARARGS,
   "SetScaleModeToScaleByVectorComponents(self) -> None\nC++: void SetScaleModeToScaleByVectorComponents()\n\n"},
  {"SetScaleModeToDataScalingOff", PyvtkGenericGlyph3DFilter_SetScaleModeToDataScalingOff, METH_VARARGS,
   "SetScaleModeToDataScalingOff(self) -> None\nC++: void SetScaleModeToDataScalingOff()\n\n"},
  {"GetScaleModeAsString", PyvtkGenericGlyph3DFilter_GetScaleModeAsString, METH_VARARGS,
   "GetScaleModeAsString(self) -> str\nC++: const char *GetScaleModeAsString()\n\n"},
  {"SetColorMode", PyvtkGenericGlyph3DFilter_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\nEither color by scale, scalar or by vector/normal magnitude.\n"},
  {"GetColorMode", PyvtkGenericGlyph3DFilter_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetColorModeToColorByScale", PyvtkGenericGlyph3DFilter_SetColorModeToColorByScale, METH_VARARGS,
   "SetColorModeToColorByScale(self) -> None\nC++: void SetColorModeToColorByScale()\n\n"},
  {"SetColorModeToColorByScalar", PyvtkGenericGlyph3DFilter_SetColorModeToColorByScalar, METH_VARARGS,
   "SetColorModeToColorByScalar(self) -> None\nC++: void SetColorModeToColorByScalar()\n\n"},
  {"SetColorModeToColorByVector", PyvtkGenericGlyph3DFilter_SetColorModeToColorByVector, METH_VARARGS,
   "SetColorModeToColorByVector(self) -> None\nC++: void SetColorModeToColorByVector()\n\n"},
  {"GetColorModeAsString", PyvtkGenericGlyph3DFilter_GetColorModeAsString, METH_VARARGS,
   "GetColorModeAsString(self) -> str\nC++: const char *GetColorModeAsString()\n\n"},
  {"SetScaleFactor", PyvtkGenericGlyph3DFilter_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nSpecify scale factor to scale object by.\n"},
  {"GetScaleFactor", PyvtkGenericGlyph3DFilter_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetRange", PyvtkGenericGlyph3DFilter_SetRange, METH_VARARGS,
   "SetRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetRange(double _arg1, double _arg2)\nSetRange(self, _arg:(float, float)) -> None\nC++: void SetRange(const double _arg[2])\n\nSpecify range to map scalar values into.\n"},
  {"GetRange", PyvtkGenericGlyph3DFilter_GetRange, METH_VARARGS,
   "GetRange(self) -> (float, float)\nC++: virtual double *GetRange()\n\n"},
  {"SetOrient", PyvtkGenericGlyph3DFilter_SetOrient, METH_VARARGS,
   "SetOrient(self, _arg:int) -> None\nC++: virtual void SetOrient(vtkTypeBool _arg)\n\nTurn on/off orienting of input geometry along vector/normal.\n"},
  {"OrientOn", PyvtkGenericGlyph3DFilter_OrientOn, METH_VARARGS,
   "OrientOn(self) -> None\nC++: virtual void OrientOn()\n\n"},
  {"OrientOff", PyvtkGenericGlyph3DFilter_OrientOff, METH_VARARGS,
   "OrientOff(self) -> None\nC++: virtual void OrientOff()\n\n"},
  {"GetOrient", PyvtkGenericGlyph3DFilter_GetOrient, METH_VARARGS,
   "GetOrient(self) -> int\nC++: virtual vtkTypeBool GetOrient()\n\n"},
  {"SetClamping", PyvtkGenericGlyph3DFilter_SetClamping, METH_VARARGS,
   "SetClamping(self, _arg:int) -> None\nC++: virtual void SetClamping(vtkTypeBool _arg)\n\nTurn on/off clamping of \"scalar\" values to range. (Scalar value\nmay be vector magnitude if ScaleByVector() is enabled.)\n"},
  {"ClampingOn", PyvtkGenericGlyph3DFilter_ClampingOn, METH_VARARGS,
   "ClampingOn(self) -> None\nC++: virtual void ClampingOn()\n\n"},
  {"ClampingOff", PyvtkGenericGlyph3DFilter_ClampingOff, METH_VARARGS,
   "ClampingOff(self) -> None\nC++: virtual void ClampingOff()\n\n"},
  {"GetClamping", PyvtkGenericGlyph3DFilter_GetClamping, METH_VARARGS,
   "GetClamping(self) -> int\nC++: virtual vtkTypeBool GetClamping()\n\n"},
  {"SetVectorMode", PyvtkGenericGlyph3DFilter_SetVectorMode, METH_VARARGS,
   "SetVectorMode(self, _arg:int) -> None\nC++: virtual void SetVectorMode(int _arg)\n\nSpecify whether to use vector or normal to perform vector\noperations.\n"},
  {"GetVectorMode", PyvtkGenericGlyph3DFilter_GetVectorMode, METH_VARARGS,
   "GetVectorMode(self) -> int\nC++: virtual int GetVectorMode()\n\n"},
  {"SetVectorModeToUseVector", PyvtkGenericGlyph3DFilter_SetVectorModeToUseVector, METH_VARARGS,
   "SetVectorModeToUseVector(self) -> None\nC++: void SetVectorModeToUseVector()\n\n"},
  {"SetVectorModeToUseNormal", PyvtkGenericGlyph3DFilter_SetVectorModeToUseNormal, METH_VARARGS,
   "SetVectorModeToUseNormal(self) -> None\nC++: void SetVectorModeToUseNormal()\n\n"},
  {"SetVectorModeToVectorRotationOff", PyvtkGenericGlyph3DFilter_SetVectorModeToVectorRotationOff, METH_VARARGS,
   "SetVectorModeToVectorRotationOff(self) -> None\nC++: void SetVectorModeToVectorRotationOff()\n\n"},
  {"GetVectorModeAsString", PyvtkGenericGlyph3DFilter_GetVectorModeAsString, METH_VARARGS,
   "GetVectorModeAsString(self) -> str\nC++: const char *GetVectorModeAsString()\n\n"},
  {"SetIndexMode", PyvtkGenericGlyph3DFilter_SetIndexMode, METH_VARARGS,
   "SetIndexMode(self, _arg:int) -> None\nC++: virtual void SetIndexMode(int _arg)\n\nIndex into table of sources by scalar, by vector/normal\nmagnitude, or no indexing. If indexing is turned off, then the\nfirst source glyph in the table of glyphs is used.\n"},
  {"GetIndexMode", PyvtkGenericGlyph3DFilter_GetIndexMode, METH_VARARGS,
   "GetIndexMode(self) -> int\nC++: virtual int GetIndexMode()\n\n"},
  {"SetIndexModeToScalar", PyvtkGenericGlyph3DFilter_SetIndexModeToScalar, METH_VARARGS,
   "SetIndexModeToScalar(self) -> None\nC++: void SetIndexModeToScalar()\n\n"},
  {"SetIndexModeToVector", PyvtkGenericGlyph3DFilter_SetIndexModeToVector, METH_VARARGS,
   "SetIndexModeToVector(self) -> None\nC++: void SetIndexModeToVector()\n\n"},
  {"SetIndexModeToOff", PyvtkGenericGlyph3DFilter_SetIndexModeToOff, METH_VARARGS,
   "SetIndexModeToOff(self) -> None\nC++: void SetIndexModeToOff()\n\n"},
  {"GetIndexModeAsString", PyvtkGenericGlyph3DFilter_GetIndexModeAsString, METH_VARARGS,
   "GetIndexModeAsString(self) -> str\nC++: const char *GetIndexModeAsString()\n\n"},
  {"SetGeneratePointIds", PyvtkGenericGlyph3DFilter_SetGeneratePointIds, METH_VARARGS,
   "SetGeneratePointIds(self, _arg:int) -> None\nC++: virtual void SetGeneratePointIds(vtkTypeBool _arg)\n\nEnable/disable the generation of point ids as part of the output.\nThe point ids are the id of the input generating point. The point\nids are stored in the output point field data and named\n\"InputPointIds\". Point generation is useful for debugging and\npick operations.\n"},
  {"GetGeneratePointIds", PyvtkGenericGlyph3DFilter_GetGeneratePointIds, METH_VARARGS,
   "GetGeneratePointIds(self) -> int\nC++: virtual vtkTypeBool GetGeneratePointIds()\n\n"},
  {"GeneratePointIdsOn", PyvtkGenericGlyph3DFilter_GeneratePointIdsOn, METH_VARARGS,
   "GeneratePointIdsOn(self) -> None\nC++: virtual void GeneratePointIdsOn()\n\n"},
  {"GeneratePointIdsOff", PyvtkGenericGlyph3DFilter_GeneratePointIdsOff, METH_VARARGS,
   "GeneratePointIdsOff(self) -> None\nC++: virtual void GeneratePointIdsOff()\n\n"},
  {"SetPointIdsName", PyvtkGenericGlyph3DFilter_SetPointIdsName, METH_VARARGS,
   "SetPointIdsName(self, _arg:str) -> None\nC++: virtual void SetPointIdsName(const char *_arg)\n\nSet/Get the name of the PointIds array if generated. By default\nthe Ids are named \"InputPointIds\", but this can be changed with\nthis function.\n"},
  {"GetPointIdsName", PyvtkGenericGlyph3DFilter_GetPointIdsName, METH_VARARGS,
   "GetPointIdsName(self) -> str\nC++: virtual char *GetPointIdsName()\n\n"},
  {"GetInputScalarsSelection", PyvtkGenericGlyph3DFilter_GetInputScalarsSelection, METH_VARARGS,
   "GetInputScalarsSelection(self) -> str\nC++: virtual char *GetInputScalarsSelection()\n\nIf you want to use an arbitrary scalars array, then set its name\nhere. By default this in nullptr and the filter will use the\nactive scalar array.\n"},
  {"SelectInputScalars", PyvtkGenericGlyph3DFilter_SelectInputScalars, METH_VARARGS,
   "SelectInputScalars(self, fieldName:str) -> None\nC++: void SelectInputScalars(const char *fieldName)\n\n"},
  {"GetInputVectorsSelection", PyvtkGenericGlyph3DFilter_GetInputVectorsSelection, METH_VARARGS,
   "GetInputVectorsSelection(self) -> str\nC++: virtual char *GetInputVectorsSelection()\n\nIf you want to use an arbitrary vectors array, then set its name\nhere. By default this in nullptr and the filter will use the\nactive vector array.\n"},
  {"SelectInputVectors", PyvtkGenericGlyph3DFilter_SelectInputVectors, METH_VARARGS,
   "SelectInputVectors(self, fieldName:str) -> None\nC++: void SelectInputVectors(const char *fieldName)\n\n"},
  {"GetInputNormalsSelection", PyvtkGenericGlyph3DFilter_GetInputNormalsSelection, METH_VARARGS,
   "GetInputNormalsSelection(self) -> str\nC++: virtual char *GetInputNormalsSelection()\n\nIf you want to use an arbitrary normals array, then set its name\nhere. By default this in nullptr and the filter will use the\nactive normal array.\n"},
  {"SelectInputNormals", PyvtkGenericGlyph3DFilter_SelectInputNormals, METH_VARARGS,
   "SelectInputNormals(self, fieldName:str) -> None\nC++: void SelectInputNormals(const char *fieldName)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenericGlyph3DFilter_Doc =
  "vtkGenericGlyph3DFilter - copy oriented and scaled glyph geometry to\nevery input point\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGenericGlyph3DFilter is a filter that copies a geometric\n"
  "representation (called a glyph) to every point in the input dataset.\n"
  "The glyph is defined with polygonal data from a source filter input.\n"
  "The glyph may be oriented along the input vectors or normals, and it\n"
  "may be scaled according to scalar data or vector magnitude. More than\n"
  "one glyph may be used by creating a table of source objects, each\n"
  "defining a different glyph. If a table of glyphs is defined, then the\n"
  "table can be indexed into by using either scalar value or vector\n"
  "magnitude.\n\n"
  "To use this object you'll have to provide an input dataset and a\n"
  "source to define the glyph. Then decide whether you want to scale the\n"
  "glyph and how to scale the glyph (using scalar value or vector\n"
  "magnitude). Next decide whether you want to orient the glyph, and\n"
  "whether to use the vector data or normal data to orient it. Finally,\n"
  "decide whether to use a table of glyphs, or just a single glyph. If\n"
  "you use a table of glyphs, you'll have to decide whether to index\n"
  "into it with scalar value or with vector magnitude.\n\n"
  "@warning\n"
  "Contrary to vtkGlyph3D, the only way to specify which attributes will\n"
  "be used for scaling, coloring and orienting is through\n"
  "SelectInputScalars(), SelectInputVectors() and SelectInputNormals().\n\n"
  "@warning\n"
  "The scaling of the glyphs is controlled by the ScaleFactor ivar\n"
  "multiplied by the scalar value at each point (if VTK_SCALE_BY_SCALAR\n"
  "is set), or multiplied by the vector magnitude (if\n"
  "VTK_SCALE_BY_VECTOR is set), Alternatively (if\n"
  "VTK_SCALE_BY_VECTORCOMPONENTS is set), the scaling may be specified\n"
  "for x,y,z using the vector components. The scale factor can be\n"
  "further controlled by enabling clamping using the Clamping ivar. If\n"
  "clamping is enabled, the scale is normalized by the Range ivar, and\n"
  "then multiplied by the scale factor. The normalization process\n"
  "includes clamping the scale value between (0,1).\n\n"
  "@warning\n"
  "Typically this object operates on input data with scalar and/or\n"
  "vector data. However, scalar and/or vector aren't necessary, and it\n"
  "can be used to copy data from a single source to each point. In this\n"
  "case the scale factor can be used to uniformly scale the glyphs.\n\n"
  "@warning\n"
  "The object uses \"vector\" data to scale glyphs, orient glyphs, and/or\n"
  "index into a table of glyphs. You can choose to use either the vector\n"
  "or normal data at each input point. Use the method\n"
  "SetVectorModeToUseVector() to use the vector input data, and\n"
  "SetVectorModeToUseNormal() to use the normal input data.\n\n"
  "@warning\n"
  "If you do use a table of glyphs, make sure to set the Range ivar to\n"
  "make sure the index into the glyph table is computed correctly.\n\n"
  "@warning\n"
  "You can turn off scaling of the glyphs completely by using the\n"
  "Scaling ivar. You can also turn off scaling due to data (either\n"
  "vector or scalar) by using the SetScaleModeToDataScalingOff() method.\n\n"
  "@sa\n"
  "vtkTensorGlyph\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericGlyph3DFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneric.vtkGenericGlyph3DFilter", // tp_name
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
  PyvtkGenericGlyph3DFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericGlyph3DFilter_StaticNew()
{
  return vtkGenericGlyph3DFilter::New();
}

PyObject *PyvtkGenericGlyph3DFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericGlyph3DFilter_Type, PyvtkGenericGlyph3DFilter_Methods,
    "vtkGenericGlyph3DFilter",
 &PyvtkGenericGlyph3DFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericGlyph3DFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericGlyph3DFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericGlyph3DFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 13; c++)
  {
    static const struct { const char *name; int value; }
      constants[13] = {
        { "VTK_SCALE_BY_SCALAR", 0 },
        { "VTK_SCALE_BY_VECTOR", 1 },
        { "VTK_SCALE_BY_VECTORCOMPONENTS", 2 },
        { "VTK_DATA_SCALING_OFF", 3 },
        { "VTK_COLOR_BY_SCALE", 0 },
        { "VTK_COLOR_BY_SCALAR", 1 },
        { "VTK_COLOR_BY_VECTOR", 2 },
        { "VTK_USE_VECTOR", 0 },
        { "VTK_USE_NORMAL", 1 },
        { "VTK_VECTOR_ROTATION_OFF", 2 },
        { "VTK_INDEXING_OFF", 0 },
        { "VTK_INDEXING_BY_SCALAR", 1 },
        { "VTK_INDEXING_BY_VECTOR", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

