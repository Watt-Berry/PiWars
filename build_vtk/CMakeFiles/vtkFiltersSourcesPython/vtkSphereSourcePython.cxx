// python wrapper for vtkSphereSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSphereSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSphereSource(PyObject *dict); }
extern "C" { PyObject *PyvtkSphereSource_ClassNew(); }


static PyObject *
PyvtkSphereSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSphereSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSphereSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSphereSource *tempr = vtkSphereSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSphereSource::NewInstance());

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
PyvtkSphereSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSphereSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSphereSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

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
      op->vtkSphereSource::SetRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMinValue() :
      op->vtkSphereSource::GetRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusMaxValue() :
      op->vtkSphereSource::GetRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadius() :
      op->vtkSphereSource::GetRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

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
      op->vtkSphereSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

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
      op->vtkSphereSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSphereSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSphereSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkSphereSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkSphereSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkSphereSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThetaResolution(temp0);
    }
    else
    {
      op->vtkSphereSource::SetThetaResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetThetaResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMinValue() :
      op->vtkSphereSource::GetThetaResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetThetaResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolutionMaxValue() :
      op->vtkSphereSource::GetThetaResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetThetaResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThetaResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThetaResolution() :
      op->vtkSphereSource::GetThetaResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhiResolution(temp0);
    }
    else
    {
      op->vtkSphereSource::SetPhiResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetPhiResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMinValue() :
      op->vtkSphereSource::GetPhiResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetPhiResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolutionMaxValue() :
      op->vtkSphereSource::GetPhiResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetPhiResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhiResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPhiResolution() :
      op->vtkSphereSource::GetPhiResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetStartTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartTheta(temp0);
    }
    else
    {
      op->vtkSphereSource::SetStartTheta(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartThetaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartThetaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartThetaMinValue() :
      op->vtkSphereSource::GetStartThetaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartThetaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartThetaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartThetaMaxValue() :
      op->vtkSphereSource::GetStartThetaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartTheta() :
      op->vtkSphereSource::GetStartTheta());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetEndTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndTheta(temp0);
    }
    else
    {
      op->vtkSphereSource::SetEndTheta(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndThetaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndThetaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndThetaMinValue() :
      op->vtkSphereSource::GetEndThetaMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndThetaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndThetaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndThetaMaxValue() :
      op->vtkSphereSource::GetEndThetaMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndTheta() :
      op->vtkSphereSource::GetEndTheta());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetStartPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartPhi(temp0);
    }
    else
    {
      op->vtkSphereSource::SetStartPhi(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartPhiMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPhiMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartPhiMinValue() :
      op->vtkSphereSource::GetStartPhiMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartPhiMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPhiMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartPhiMaxValue() :
      op->vtkSphereSource::GetStartPhiMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetStartPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStartPhi() :
      op->vtkSphereSource::GetStartPhi());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetEndPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndPhi(temp0);
    }
    else
    {
      op->vtkSphereSource::SetEndPhi(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndPhiMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPhiMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndPhiMinValue() :
      op->vtkSphereSource::GetEndPhiMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndPhiMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPhiMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndPhiMaxValue() :
      op->vtkSphereSource::GetEndPhiMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetEndPhi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPhi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEndPhi() :
      op->vtkSphereSource::GetEndPhi());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetLatLongTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatLongTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

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
      op->vtkSphereSource::SetLatLongTessellation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetLatLongTessellation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatLongTessellation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLatLongTessellation() :
      op->vtkSphereSource::GetLatLongTessellation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_LatLongTessellationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongTessellationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LatLongTessellationOn();
    }
    else
    {
      op->vtkSphereSource::LatLongTessellationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_LatLongTessellationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LatLongTessellationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LatLongTessellationOff();
    }
    else
    {
      op->vtkSphereSource::LatLongTessellationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

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
      op->vtkSphereSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkSphereSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_SetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateNormals(temp0);
    }
    else
    {
      op->vtkSphereSource::SetGenerateNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GetGenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNormals() :
      op->vtkSphereSource::GetGenerateNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GenerateNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateNormalsOn();
    }
    else
    {
      op->vtkSphereSource::GenerateNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSphereSource_GenerateNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSphereSource *op = static_cast<vtkSphereSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateNormalsOff();
    }
    else
    {
      op->vtkSphereSource::GenerateNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSphereSource_Methods[] = {
  {"IsTypeOf", PyvtkSphereSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSphereSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSphereSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSphereSource\nC++: static vtkSphereSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSphereSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSphereSource\nC++: vtkSphereSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSphereSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSphereSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRadius", PyvtkSphereSource_SetRadius, METH_VARARGS,
   "SetRadius(self, _arg:float) -> None\nC++: virtual void SetRadius(double _arg)\n\nSet the radius of sphere. Default is 0.5.\n"},
  {"GetRadiusMinValue", PyvtkSphereSource_GetRadiusMinValue, METH_VARARGS,
   "GetRadiusMinValue(self) -> float\nC++: virtual double GetRadiusMinValue()\n\n"},
  {"GetRadiusMaxValue", PyvtkSphereSource_GetRadiusMaxValue, METH_VARARGS,
   "GetRadiusMaxValue(self) -> float\nC++: virtual double GetRadiusMaxValue()\n\n"},
  {"GetRadius", PyvtkSphereSource_GetRadius, METH_VARARGS,
   "GetRadius(self) -> float\nC++: virtual double GetRadius()\n\n"},
  {"SetCenter", PyvtkSphereSource_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet the center of the sphere. Default is (0,0,0).\n"},
  {"GetCenter", PyvtkSphereSource_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetThetaResolution", PyvtkSphereSource_SetThetaResolution, METH_VARARGS,
   "SetThetaResolution(self, _arg:int) -> None\nC++: virtual void SetThetaResolution(int _arg)\n\nSet the number of points in the longitude direction (ranging from\nStartTheta to EndTheta).\n"},
  {"GetThetaResolutionMinValue", PyvtkSphereSource_GetThetaResolutionMinValue, METH_VARARGS,
   "GetThetaResolutionMinValue(self) -> int\nC++: virtual int GetThetaResolutionMinValue()\n\n"},
  {"GetThetaResolutionMaxValue", PyvtkSphereSource_GetThetaResolutionMaxValue, METH_VARARGS,
   "GetThetaResolutionMaxValue(self) -> int\nC++: virtual int GetThetaResolutionMaxValue()\n\n"},
  {"GetThetaResolution", PyvtkSphereSource_GetThetaResolution, METH_VARARGS,
   "GetThetaResolution(self) -> int\nC++: virtual int GetThetaResolution()\n\n"},
  {"SetPhiResolution", PyvtkSphereSource_SetPhiResolution, METH_VARARGS,
   "SetPhiResolution(self, _arg:int) -> None\nC++: virtual void SetPhiResolution(int _arg)\n\nSet the number of points in the latitude direction (ranging from\nStartPhi to EndPhi).\n"},
  {"GetPhiResolutionMinValue", PyvtkSphereSource_GetPhiResolutionMinValue, METH_VARARGS,
   "GetPhiResolutionMinValue(self) -> int\nC++: virtual int GetPhiResolutionMinValue()\n\n"},
  {"GetPhiResolutionMaxValue", PyvtkSphereSource_GetPhiResolutionMaxValue, METH_VARARGS,
   "GetPhiResolutionMaxValue(self) -> int\nC++: virtual int GetPhiResolutionMaxValue()\n\n"},
  {"GetPhiResolution", PyvtkSphereSource_GetPhiResolution, METH_VARARGS,
   "GetPhiResolution(self) -> int\nC++: virtual int GetPhiResolution()\n\n"},
  {"SetStartTheta", PyvtkSphereSource_SetStartTheta, METH_VARARGS,
   "SetStartTheta(self, _arg:float) -> None\nC++: virtual void SetStartTheta(double _arg)\n\nSet the starting longitude angle. By default StartTheta=0\ndegrees.\n"},
  {"GetStartThetaMinValue", PyvtkSphereSource_GetStartThetaMinValue, METH_VARARGS,
   "GetStartThetaMinValue(self) -> float\nC++: virtual double GetStartThetaMinValue()\n\n"},
  {"GetStartThetaMaxValue", PyvtkSphereSource_GetStartThetaMaxValue, METH_VARARGS,
   "GetStartThetaMaxValue(self) -> float\nC++: virtual double GetStartThetaMaxValue()\n\n"},
  {"GetStartTheta", PyvtkSphereSource_GetStartTheta, METH_VARARGS,
   "GetStartTheta(self) -> float\nC++: virtual double GetStartTheta()\n\n"},
  {"SetEndTheta", PyvtkSphereSource_SetEndTheta, METH_VARARGS,
   "SetEndTheta(self, _arg:float) -> None\nC++: virtual void SetEndTheta(double _arg)\n\nSet the ending longitude angle. By default EndTheta=360 degrees.\n"},
  {"GetEndThetaMinValue", PyvtkSphereSource_GetEndThetaMinValue, METH_VARARGS,
   "GetEndThetaMinValue(self) -> float\nC++: virtual double GetEndThetaMinValue()\n\n"},
  {"GetEndThetaMaxValue", PyvtkSphereSource_GetEndThetaMaxValue, METH_VARARGS,
   "GetEndThetaMaxValue(self) -> float\nC++: virtual double GetEndThetaMaxValue()\n\n"},
  {"GetEndTheta", PyvtkSphereSource_GetEndTheta, METH_VARARGS,
   "GetEndTheta(self) -> float\nC++: virtual double GetEndTheta()\n\n"},
  {"SetStartPhi", PyvtkSphereSource_SetStartPhi, METH_VARARGS,
   "SetStartPhi(self, _arg:float) -> None\nC++: virtual void SetStartPhi(double _arg)\n\nSet the starting latitude angle (0 is at north pole). By default\nStartPhi=0 degrees.\n"},
  {"GetStartPhiMinValue", PyvtkSphereSource_GetStartPhiMinValue, METH_VARARGS,
   "GetStartPhiMinValue(self) -> float\nC++: virtual double GetStartPhiMinValue()\n\n"},
  {"GetStartPhiMaxValue", PyvtkSphereSource_GetStartPhiMaxValue, METH_VARARGS,
   "GetStartPhiMaxValue(self) -> float\nC++: virtual double GetStartPhiMaxValue()\n\n"},
  {"GetStartPhi", PyvtkSphereSource_GetStartPhi, METH_VARARGS,
   "GetStartPhi(self) -> float\nC++: virtual double GetStartPhi()\n\n"},
  {"SetEndPhi", PyvtkSphereSource_SetEndPhi, METH_VARARGS,
   "SetEndPhi(self, _arg:float) -> None\nC++: virtual void SetEndPhi(double _arg)\n\nSet the ending latitude angle. By default EndPhi=180 degrees.\n"},
  {"GetEndPhiMinValue", PyvtkSphereSource_GetEndPhiMinValue, METH_VARARGS,
   "GetEndPhiMinValue(self) -> float\nC++: virtual double GetEndPhiMinValue()\n\n"},
  {"GetEndPhiMaxValue", PyvtkSphereSource_GetEndPhiMaxValue, METH_VARARGS,
   "GetEndPhiMaxValue(self) -> float\nC++: virtual double GetEndPhiMaxValue()\n\n"},
  {"GetEndPhi", PyvtkSphereSource_GetEndPhi, METH_VARARGS,
   "GetEndPhi(self) -> float\nC++: virtual double GetEndPhi()\n\n"},
  {"SetLatLongTessellation", PyvtkSphereSource_SetLatLongTessellation, METH_VARARGS,
   "SetLatLongTessellation(self, _arg:int) -> None\nC++: virtual void SetLatLongTessellation(vtkTypeBool _arg)\n\nCause the sphere to be tessellated with edges along the latitude\nand longitude lines. If off, triangles are generated at non-polar\nregions, which results in edges that are not parallel to latitude\nand longitude lines. If on, quadrilaterals are generated\neverywhere except at the poles. This can be useful for generating\na wireframe sphere with natural latitude and longitude lines.\n"},
  {"GetLatLongTessellation", PyvtkSphereSource_GetLatLongTessellation, METH_VARARGS,
   "GetLatLongTessellation(self) -> int\nC++: virtual vtkTypeBool GetLatLongTessellation()\n\n"},
  {"LatLongTessellationOn", PyvtkSphereSource_LatLongTessellationOn, METH_VARARGS,
   "LatLongTessellationOn(self) -> None\nC++: virtual void LatLongTessellationOn()\n\n"},
  {"LatLongTessellationOff", PyvtkSphereSource_LatLongTessellationOff, METH_VARARGS,
   "LatLongTessellationOff(self) -> None\nC++: virtual void LatLongTessellationOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkSphereSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkSphereSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetGenerateNormals", PyvtkSphereSource_SetGenerateNormals, METH_VARARGS,
   "SetGenerateNormals(self, _arg:int) -> None\nC++: virtual void SetGenerateNormals(vtkTypeBool _arg)\n\nSpecify whether to generate output point normals. By default this\nis enabled.\n"},
  {"GetGenerateNormals", PyvtkSphereSource_GetGenerateNormals, METH_VARARGS,
   "GetGenerateNormals(self) -> int\nC++: virtual vtkTypeBool GetGenerateNormals()\n\n"},
  {"GenerateNormalsOn", PyvtkSphereSource_GenerateNormalsOn, METH_VARARGS,
   "GenerateNormalsOn(self) -> None\nC++: virtual void GenerateNormalsOn()\n\n"},
  {"GenerateNormalsOff", PyvtkSphereSource_GenerateNormalsOff, METH_VARARGS,
   "GenerateNormalsOff(self) -> None\nC++: virtual void GenerateNormalsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSphereSource_Doc =
  "vtkSphereSource - create a polygonal sphere centered at the origin\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSphereSource creates a sphere (represented by polygons) of\n"
  "specified radius centered at the origin. The resolution (polygonal\n"
  "discretization) in both the latitude (phi) and longitude (theta)\n"
  "directions can be specified. It also is possible to create partial\n"
  "spheres by specifying maximum phi and theta angles. By default, the\n"
  "surface tessellation of the sphere uses triangles; however you can\n"
  "set LatLongTessellation to produce a tessellation using\n"
  "quadrilaterals.\n\n"
  "@warning\n"
  "Resolution means the number of latitude or longitude lines for a\n"
  "complete sphere. If you create partial spheres the number of\n"
  "latitude/longitude lines may be off by one.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSphereSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkSphereSource", // tp_name
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
  PyvtkSphereSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSphereSource_StaticNew()
{
  return vtkSphereSource::New();
}

PyObject *PyvtkSphereSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSphereSource_Type, PyvtkSphereSource_Methods,
    "vtkSphereSource",
 &PyvtkSphereSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSphereSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSphereSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSphereSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

