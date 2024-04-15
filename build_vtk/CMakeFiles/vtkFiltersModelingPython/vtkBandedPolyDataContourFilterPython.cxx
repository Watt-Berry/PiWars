// python wrapper for vtkBandedPolyDataContourFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBandedPolyDataContourFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBandedPolyDataContourFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkBandedPolyDataContourFilter_ClassNew(); }


static PyObject *
PyvtkBandedPolyDataContourFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBandedPolyDataContourFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBandedPolyDataContourFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBandedPolyDataContourFilter *tempr = vtkBandedPolyDataContourFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBandedPolyDataContourFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBandedPolyDataContourFilter::NewInstance());

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
PyvtkBandedPolyDataContourFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBandedPolyDataContourFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBandedPolyDataContourFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkBandedPolyDataContourFilter::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkBandedPolyDataContourFilter::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBandedPolyDataContourFilter_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::GetValues(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBandedPolyDataContourFilter_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBandedPolyDataContourFilter_GetValues_s1(self, args);
    case 1:
      return PyvtkBandedPolyDataContourFilter_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkBandedPolyDataContourFilter::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::GenerateValues(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBandedPolyDataContourFilter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkBandedPolyDataContourFilter_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipping(temp0);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClipping() :
      op->vtkBandedPolyDataContourFilter::GetClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_ClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClippingOn();
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::ClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_ClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClippingOff();
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::ClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMinValue() :
      op->vtkBandedPolyDataContourFilter::GetScalarModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMaxValue() :
      op->vtkBandedPolyDataContourFilter::GetScalarModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkBandedPolyDataContourFilter::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetScalarModeToIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToIndex();
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetScalarModeToIndex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetScalarModeToValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToValue();
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetScalarModeToValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetGenerateContourEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateContourEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateContourEdges(temp0);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetGenerateContourEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetGenerateContourEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateContourEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateContourEdges() :
      op->vtkBandedPolyDataContourFilter::GetGenerateContourEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateContourEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateContourEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateContourEdgesOn();
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::GenerateContourEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GenerateContourEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateContourEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateContourEdgesOff();
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::GenerateContourEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetClipTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClipTolerance(temp0);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetClipTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetClipTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetClipTolerance() :
      op->vtkBandedPolyDataContourFilter::GetClipTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0);
    }
    else
    {
      op->vtkBandedPolyDataContourFilter::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkBandedPolyDataContourFilter::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetContourEdgesOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourEdgesOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContourEdgesOutput() :
      op->vtkBandedPolyDataContourFilter::GetContourEdgesOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBandedPolyDataContourFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBandedPolyDataContourFilter *op = static_cast<vtkBandedPolyDataContourFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkBandedPolyDataContourFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBandedPolyDataContourFilter_Methods[] = {
  {"IsTypeOf", PyvtkBandedPolyDataContourFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBandedPolyDataContourFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBandedPolyDataContourFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBandedPolyDataContourFilter\nC++: static vtkBandedPolyDataContourFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBandedPolyDataContourFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBandedPolyDataContourFilter\nC++: vtkBandedPolyDataContourFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBandedPolyDataContourFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBandedPolyDataContourFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetValue", PyvtkBandedPolyDataContourFilter_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nMethods to set / get contour values. A single value at a time can\nbe set with SetValue(). Multiple contour values can be set with\nGenerateValues(). Note that GenerateValues() generates n values\ninclusive of the start and end range values.\n"},
  {"GetValue", PyvtkBandedPolyDataContourFilter_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\n"},
  {"GetValues", PyvtkBandedPolyDataContourFilter_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, contourValues:[float, ...]) -> None\nC++: void GetValues(double *contourValues)\n\n"},
  {"SetNumberOfContours", PyvtkBandedPolyDataContourFilter_SetNumberOfContours, METH_VARARGS,
   "SetNumberOfContours(self, number:int) -> None\nC++: void SetNumberOfContours(int number)\n\n"},
  {"GetNumberOfContours", PyvtkBandedPolyDataContourFilter_GetNumberOfContours, METH_VARARGS,
   "GetNumberOfContours(self) -> int\nC++: vtkIdType GetNumberOfContours()\n\n"},
  {"GenerateValues", PyvtkBandedPolyDataContourFilter_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numContours:int, range:[float, float])\n    -> None\nC++: void GenerateValues(int numContours, double range[2])\nGenerateValues(self, numContours:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\n"},
  {"SetClipping", PyvtkBandedPolyDataContourFilter_SetClipping, METH_VARARGS,
   "SetClipping(self, _arg:int) -> None\nC++: virtual void SetClipping(vtkTypeBool _arg)\n\nIndicate whether to clip outside the range specified by the user.\n(The range is contour value[0] to contour value[numContours-1].)\nClipping means all cells outside of the range specified are not\nsent to the output.\n"},
  {"GetClipping", PyvtkBandedPolyDataContourFilter_GetClipping, METH_VARARGS,
   "GetClipping(self) -> int\nC++: virtual vtkTypeBool GetClipping()\n\n"},
  {"ClippingOn", PyvtkBandedPolyDataContourFilter_ClippingOn, METH_VARARGS,
   "ClippingOn(self) -> None\nC++: virtual void ClippingOn()\n\n"},
  {"ClippingOff", PyvtkBandedPolyDataContourFilter_ClippingOff, METH_VARARGS,
   "ClippingOff(self) -> None\nC++: virtual void ClippingOff()\n\n"},
  {"SetScalarMode", PyvtkBandedPolyDataContourFilter_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, _arg:int) -> None\nC++: virtual void SetScalarMode(int _arg)\n\nControl whether the cell scalars are output as an integer index\nor a scalar value. If an index, the index refers to the bands\nproduced by the clipping range. If a value, then a scalar value\nwhich is a value between clip values is used.\n"},
  {"GetScalarModeMinValue", PyvtkBandedPolyDataContourFilter_GetScalarModeMinValue, METH_VARARGS,
   "GetScalarModeMinValue(self) -> int\nC++: virtual int GetScalarModeMinValue()\n\n"},
  {"GetScalarModeMaxValue", PyvtkBandedPolyDataContourFilter_GetScalarModeMaxValue, METH_VARARGS,
   "GetScalarModeMaxValue(self) -> int\nC++: virtual int GetScalarModeMaxValue()\n\n"},
  {"GetScalarMode", PyvtkBandedPolyDataContourFilter_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"SetScalarModeToIndex", PyvtkBandedPolyDataContourFilter_SetScalarModeToIndex, METH_VARARGS,
   "SetScalarModeToIndex(self) -> None\nC++: void SetScalarModeToIndex()\n\n"},
  {"SetScalarModeToValue", PyvtkBandedPolyDataContourFilter_SetScalarModeToValue, METH_VARARGS,
   "SetScalarModeToValue(self) -> None\nC++: void SetScalarModeToValue()\n\n"},
  {"SetGenerateContourEdges", PyvtkBandedPolyDataContourFilter_SetGenerateContourEdges, METH_VARARGS,
   "SetGenerateContourEdges(self, _arg:int) -> None\nC++: virtual void SetGenerateContourEdges(vtkTypeBool _arg)\n\nTurn on/off a flag to control whether contour edges are\ngenerated. Contour edges are the edges between bands. If enabled,\nthey are generated from polygons/triangle strips and placed into\nthe second output (the ContourEdgesOutput).\n"},
  {"GetGenerateContourEdges", PyvtkBandedPolyDataContourFilter_GetGenerateContourEdges, METH_VARARGS,
   "GetGenerateContourEdges(self) -> int\nC++: virtual vtkTypeBool GetGenerateContourEdges()\n\n"},
  {"GenerateContourEdgesOn", PyvtkBandedPolyDataContourFilter_GenerateContourEdgesOn, METH_VARARGS,
   "GenerateContourEdgesOn(self) -> None\nC++: virtual void GenerateContourEdgesOn()\n\n"},
  {"GenerateContourEdgesOff", PyvtkBandedPolyDataContourFilter_GenerateContourEdgesOff, METH_VARARGS,
   "GenerateContourEdgesOff(self) -> None\nC++: virtual void GenerateContourEdgesOff()\n\n"},
  {"SetClipTolerance", PyvtkBandedPolyDataContourFilter_SetClipTolerance, METH_VARARGS,
   "SetClipTolerance(self, _arg:float) -> None\nC++: virtual void SetClipTolerance(double _arg)\n\nSet/Get the clip tolerance. Warning: setting this too large will\ncertainly cause numerical issues. Change from the default value\nof FLT_EPSILON at your own risk. The actual internal clip\ntolerance is computed by multiplying ClipTolerance by the scalar\nrange.\n"},
  {"GetClipTolerance", PyvtkBandedPolyDataContourFilter_GetClipTolerance, METH_VARARGS,
   "GetClipTolerance(self) -> float\nC++: virtual double GetClipTolerance()\n\n"},
  {"SetComponent", PyvtkBandedPolyDataContourFilter_SetComponent, METH_VARARGS,
   "SetComponent(self, _arg:int) -> None\nC++: virtual void SetComponent(int _arg)\n\nSet/Get the component to use of an input scalars array with more\nthan one component. Default is 0.\n"},
  {"GetComponent", PyvtkBandedPolyDataContourFilter_GetComponent, METH_VARARGS,
   "GetComponent(self) -> int\nC++: virtual int GetComponent()\n\n"},
  {"GetContourEdgesOutput", PyvtkBandedPolyDataContourFilter_GetContourEdgesOutput, METH_VARARGS,
   "GetContourEdgesOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetContourEdgesOutput()\n\nGet the second output which contains the edges dividing the\ncontour bands. This output is empty unless GenerateContourEdges\nis enabled.\n"},
  {"GetMTime", PyvtkBandedPolyDataContourFilter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload GetMTime because we delegate to vtkContourValues so its\nmodified time must be taken into account.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBandedPolyDataContourFilter_Doc =
  "vtkBandedPolyDataContourFilter - generate filled contours for\nvtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkBandedPolyDataContourFilter is a filter that takes as input\n"
  "vtkPolyData and produces as output filled contours (also represented\n"
  "as vtkPolyData). Filled contours are bands of cells that all have the\n"
  "same cell scalar value, and can therefore be colored the same. The\n"
  "method is also referred to as filled contour generation.\n\n"
  "To use this filter you must specify one or more contour values.  You\n"
  "can either use the method SetValue() to specify each contour value,\n"
  "or use GenerateValues() to generate a series of evenly spaced\n"
  "contours.  Each contour value divides (or clips) the data into two\n"
  "pieces, values below the contour value, and values above it. The\n"
  "scalar values of each band correspond to the specified contour value.\n"
  " Note that if the first and last contour values are not the\n"
  "minimum/maximum contour range, then two extra contour values are\n"
  "added corresponding to the minimum and maximum range values. These\n"
  "extra contour bands can be prevented from being output by turning\n"
  "clipping on.\n\n"
  "@sa\n"
  "vtkClipDataSet vtkClipPolyData vtkClipVolume vtkContourFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBandedPolyDataContourFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkBandedPolyDataContourFilter", // tp_name
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
  PyvtkBandedPolyDataContourFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBandedPolyDataContourFilter_StaticNew()
{
  return vtkBandedPolyDataContourFilter::New();
}

PyObject *PyvtkBandedPolyDataContourFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBandedPolyDataContourFilter_Type, PyvtkBandedPolyDataContourFilter_Methods,
    "vtkBandedPolyDataContourFilter",
 &PyvtkBandedPolyDataContourFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBandedPolyDataContourFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBandedPolyDataContourFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBandedPolyDataContourFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_SCALAR_MODE_INDEX", 0 },
        { "VTK_SCALAR_MODE_VALUE", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

