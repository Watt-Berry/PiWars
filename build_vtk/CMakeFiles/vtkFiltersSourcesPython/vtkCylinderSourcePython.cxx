// python wrapper for vtkCylinderSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCylinderSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCylinderSource(PyObject *dict); }
extern "C" { PyObject *PyvtkCylinderSource_ClassNew(); }


static PyObject *
PyvtkCylinderSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCylinderSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCylinderSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCylinderSource *tempr = vtkCylinderSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCylinderSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCylinderSource::NewInstance());

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
PyvtkCylinderSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCylinderSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCylinderSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeight(temp0);
    }
    else
    {
      op->vtkCylinderSource::SetHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightMinValue() :
      op->vtkCylinderSource::GetHeightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightMaxValue() :
      op->vtkCylinderSource::GetHeightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkCylinderSource::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadius(temp0);
    }
    else
    {
      op->vtkCylinderSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkCylinderSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkCylinderSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkCylinderSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double temp0;
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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCylinderSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCylinderSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkCylinderSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCylinderSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCylinderSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkCylinderSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkCylinderSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkCylinderSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkCylinderSource::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkCylinderSource::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkCylinderSource::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkCylinderSource::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkCylinderSource::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkCylinderSource::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkCylinderSource::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkCylinderSource::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetCapsuleCap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapsuleCap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapsuleCap(temp0);
    }
    else
    {
      op->vtkCylinderSource::SetCapsuleCap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetCapsuleCap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapsuleCap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapsuleCap() :
      op->vtkCylinderSource::GetCapsuleCap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_CapsuleCapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CapsuleCapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CapsuleCapOn();
    }
    else
    {
      op->vtkCylinderSource::CapsuleCapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_CapsuleCapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CapsuleCapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CapsuleCapOff();
    }
    else
    {
      op->vtkCylinderSource::CapsuleCapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetLatLongTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatLongTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLatLongTessellation(temp0);
    }
    else
    {
      op->vtkCylinderSource::SetLatLongTessellation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetLatLongTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatLongTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLatLongTessellation() :
      op->vtkCylinderSource::GetLatLongTessellation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_LatLongTessellationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongTessellationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LatLongTessellationOn();
    }
    else
    {
      op->vtkCylinderSource::LatLongTessellationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_LatLongTessellationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongTessellationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LatLongTessellationOff();
    }
    else
    {
      op->vtkCylinderSource::LatLongTessellationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      op->vtkCylinderSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCylinderSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCylinderSource_Methods[] = {
  {"IsTypeOf", PyvtkCylinderSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCylinderSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCylinderSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCylinderSource\nC++: static vtkCylinderSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCylinderSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCylinderSource\nC++: vtkCylinderSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCylinderSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCylinderSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetHeight", PyvtkCylinderSource_SetHeight, METH_VARARGS,
   "SetHeight(self, _arg:float) -> None\nC++: virtual void SetHeight(double _arg)\n\nSet the height of the cylinder. Initial value is 1.\n"},
  {"GetHeightMinValue", PyvtkCylinderSource_GetHeightMinValue, METH_VARARGS,
   "GetHeightMinValue(self) -> float\nC++: virtual double GetHeightMinValue()\n\n"},
  {"GetHeightMaxValue", PyvtkCylinderSource_GetHeightMaxValue, METH_VARARGS,
   "GetHeightMaxValue(self) -> float\nC++: virtual double GetHeightMaxValue()\n\n"},
  {"GetHeight", PyvtkCylinderSource_GetHeight, METH_VARARGS,
   "GetHeight(self) -> float\nC++: virtual double GetHeight()\n\n"},
  {"SetRadius", PyvtkCylinderSource_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet the radius of the cylinder. Initial value is 0.5\n"},
  {"GetRadiusMinValue", PyvtkCylinderSource_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkCylinderSource_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkCylinderSource_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetCenter", PyvtkCylinderSource_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet/Get cylinder center. Initial value is (0.0,0.0,0.0)\n"},
  {"GetCenter", PyvtkCylinderSource_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetResolution", PyvtkCylinderSource_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSet the number of facets used to define cylinder. Initial value\nis 6.\n"},
  {"GetResolutionMinValue", PyvtkCylinderSource_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkCylinderSource_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkCylinderSource_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetCapping", PyvtkCylinderSource_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:int) -> None\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off whether to cap cylinder with polygons. Initial value\nis true.\n"},
  {"GetCapping", PyvtkCylinderSource_GetCapping, METH_VARARGS,
   "GetCapping(self) -> int\nC++: virtual vtkTypeBool GetCapping()\n\n"},
  {"CappingOn", PyvtkCylinderSource_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkCylinderSource_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"SetCapsuleCap", PyvtkCylinderSource_SetCapsuleCap, METH_VARARGS,
   "SetCapsuleCap(self, _arg:int) -> None\nC++: virtual void SetCapsuleCap(vtkTypeBool _arg)\n\nSet/Get whether the capping should make the cylinder a capsule.\nThis adds hemispherical caps at the ends of the cylinder.\n\n\\sa SetCapping()\n"},
  {"GetCapsuleCap", PyvtkCylinderSource_GetCapsuleCap, METH_VARARGS,
   "GetCapsuleCap(self) -> int\nC++: virtual vtkTypeBool GetCapsuleCap()\n\n"},
  {"CapsuleCapOn", PyvtkCylinderSource_CapsuleCapOn, METH_VARARGS,
   "CapsuleCapOn(self) -> None\nC++: virtual void CapsuleCapOn()\n\n"},
  {"CapsuleCapOff", PyvtkCylinderSource_CapsuleCapOff, METH_VARARGS,
   "CapsuleCapOff(self) -> None\nC++: virtual void CapsuleCapOff()\n\n"},
  {"SetLatLongTessellation", PyvtkCylinderSource_SetLatLongTessellation, METH_VARARGS,
   "SetLatLongTessellation(self, _arg:int) -> None\nC++: virtual void SetLatLongTessellation(vtkTypeBool _arg)\n\nCause the spheres to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\nwireframe spheres with natural latitude and longitude lines.\n"},
  {"GetLatLongTessellation", PyvtkCylinderSource_GetLatLongTessellation, METH_VARARGS,
   "GetLatLongTessellation(self) -> int\nC++: virtual vtkTypeBool GetLatLongTessellation()\n\n"},
  {"LatLongTessellationOn", PyvtkCylinderSource_LatLongTessellationOn, METH_VARARGS,
   "LatLongTessellationOn(self) -> None\nC++: virtual void LatLongTessellationOn()\n\n"},
  {"LatLongTessellationOff", PyvtkCylinderSource_LatLongTessellationOff, METH_VARARGS,
   "LatLongTessellationOff(self) -> None\nC++: virtual void LatLongTessellationOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkCylinderSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkCylinderSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCylinderSource_Doc =
  "vtkCylinderSource - generate a polygonal cylinder centered at the\norigin\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCylinderSource creates a polygonal cylinder centered at Center;\n"
  "The axis of the cylinder is aligned along the global y-axis.  The\n"
  "height and radius of the cylinder can be specified, as well as the\n"
  "number of sides. It is also possible to control whether the cylinder\n"
  "is open-ended or capped. The cylinder can be given a capsular shape\n"
  "by enabling hemispherical end caps. If you have the end points of the\n"
  "cylinder, you should use a vtkLineSource followed by a vtkTubeFilter\n"
  "instead of the vtkCylinderSource.\n\n"
  "@sa\n"
  "vtkCylinder\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCylinderSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkCylinderSource", // tp_name
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
  PyvtkCylinderSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCylinderSource_StaticNew()
{
  return vtkCylinderSource::New();
}

PyObject *PyvtkCylinderSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCylinderSource_Type, PyvtkCylinderSource_Methods,
    "vtkCylinderSource",
 &PyvtkCylinderSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCylinderSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCylinderSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCylinderSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

