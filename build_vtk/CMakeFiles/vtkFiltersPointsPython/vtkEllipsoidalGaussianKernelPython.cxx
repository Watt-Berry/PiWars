// python wrapper for vtkEllipsoidalGaussianKernel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkEllipsoidalGaussianKernel.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEllipsoidalGaussianKernel(PyObject *dict); }
extern "C" { PyObject *PyvtkEllipsoidalGaussianKernel_ClassNew(); }

#ifndef DECLARED_PyvtkGeneralizedKernel_ClassNew
extern "C" { PyObject *PyvtkGeneralizedKernel_ClassNew(); }
#define DECLARED_PyvtkGeneralizedKernel_ClassNew
#endif

static PyObject *
PyvtkEllipsoidalGaussianKernel_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEllipsoidalGaussianKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEllipsoidalGaussianKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEllipsoidalGaussianKernel *tempr = vtkEllipsoidalGaussianKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEllipsoidalGaussianKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEllipsoidalGaussianKernel::NewInstance());

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
PyvtkEllipsoidalGaussianKernel_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEllipsoidalGaussianKernel::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEllipsoidalGaussianKernel::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkPointData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkPointData"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_ComputeWeights_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkDoubleArray"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2, temp3) :
      op->vtkEllipsoidalGaussianKernel::ComputeWeights(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEllipsoidalGaussianKernel_ComputeWeights_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2) :
      op->vtkEllipsoidalGaussianKernel::ComputeWeights(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEllipsoidalGaussianKernel_ComputeWeights(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkEllipsoidalGaussianKernel_ComputeWeights_s1(self, args);
    case 3:
      return PyvtkEllipsoidalGaussianKernel_ComputeWeights_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWeights");
  return nullptr;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_SetUseNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseNormals(temp0);
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::SetUseNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetUseNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseNormals() :
      op->vtkEllipsoidalGaussianKernel::GetUseNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_UseNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNormalsOn();
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::UseNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_UseNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseNormalsOff();
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::UseNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_SetNormalsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalsArrayName(temp0);
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::SetNormalsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetNormalsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetNormalsArrayName() :
      op->vtkEllipsoidalGaussianKernel::GetNormalsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_SetUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseScalars(temp0);
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::SetUseScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetUseScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseScalars() :
      op->vtkEllipsoidalGaussianKernel::GetUseScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_UseScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseScalarsOn();
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::UseScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_UseScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseScalarsOff();
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::UseScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_SetScalarsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarsArrayName(temp0);
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::SetScalarsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetScalarsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetScalarsArrayName() :
      op->vtkEllipsoidalGaussianKernel::GetScalarsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

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
      op->vtkEllipsoidalGaussianKernel::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetScaleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactorMinValue() :
      op->vtkEllipsoidalGaussianKernel::GetScaleFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetScaleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactorMaxValue() :
      op->vtkEllipsoidalGaussianKernel::GetScaleFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkEllipsoidalGaussianKernel::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_SetSharpness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharpness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSharpness(temp0);
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::SetSharpness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetSharpnessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharpnessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSharpnessMinValue() :
      op->vtkEllipsoidalGaussianKernel::GetSharpnessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetSharpnessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharpnessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSharpnessMaxValue() :
      op->vtkEllipsoidalGaussianKernel::GetSharpnessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetSharpness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharpness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSharpness() :
      op->vtkEllipsoidalGaussianKernel::GetSharpness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_SetEccentricity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEccentricity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEccentricity(temp0);
    }
    else
    {
      op->vtkEllipsoidalGaussianKernel::SetEccentricity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetEccentricityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricityMinValue() :
      op->vtkEllipsoidalGaussianKernel::GetEccentricityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetEccentricityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricityMaxValue() :
      op->vtkEllipsoidalGaussianKernel::GetEccentricityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEllipsoidalGaussianKernel_GetEccentricity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEccentricity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEllipsoidalGaussianKernel *op = static_cast<vtkEllipsoidalGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEccentricity() :
      op->vtkEllipsoidalGaussianKernel::GetEccentricity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEllipsoidalGaussianKernel_Methods[] = {
  {"IsTypeOf", PyvtkEllipsoidalGaussianKernel_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEllipsoidalGaussianKernel_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEllipsoidalGaussianKernel_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEllipsoidalGaussianKernel\nC++: static vtkEllipsoidalGaussianKernel *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEllipsoidalGaussianKernel_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEllipsoidalGaussianKernel\nC++: vtkEllipsoidalGaussianKernel *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEllipsoidalGaussianKernel_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEllipsoidalGaussianKernel_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkEllipsoidalGaussianKernel_Initialize, METH_VARARGS,
   "Initialize(self, loc:vtkAbstractPointLocator, ds:vtkDataSet,\n    pd:vtkPointData) -> None\nC++: void Initialize(vtkAbstractPointLocator *loc, vtkDataSet *ds,\n     vtkPointData *pd) override;\n\nInitialize the kernel. Overload the superclass to set up scalars\nand vectors.\n"},
  {"ComputeWeights", PyvtkEllipsoidalGaussianKernel_ComputeWeights, METH_VARARGS,
   "ComputeWeights(self, x:[float, float, float], pIds:vtkIdList,\n    prob:vtkDoubleArray, weights:vtkDoubleArray) -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *prob, vtkDoubleArray *weights) override;\nComputeWeights(self, x:[float, float, float], pIds:vtkIdList,\n    weights:vtkDoubleArray) -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *weights) override;\n\nGiven a point x, a list of basis points pIds, and a probability\nweighting function prob, compute interpolation weights associated\nwith these basis points.  Note that basis points list pIds, the\nprobability weighting prob, and the weights array are provided by\nthe caller of the method, and may be dynamically resized as\nnecessary. The method returns the number of weights (pIds may be\nresized in some cases). Typically this method is called after\nComputeBasis(), although advanced users can invoke\nComputeWeights() and provide the interpolation basis points pIds\ndirectly. The probably weighting prob are numbers 0<=prob<=1\nwhich are multiplied against the interpolation weights before\nnormalization. They are estimates of local confidence of weights.\nThe prob may be nullptr in which all probabilities are considered\n=1.\n"},
  {"SetUseNormals", PyvtkEllipsoidalGaussianKernel_SetUseNormals, METH_VARARGS,
   "SetUseNormals(self, _arg:bool) -> None\nC++: virtual void SetUseNormals(bool _arg)\n\nSpecify whether vector values should be used to affect the shape\nof the Gaussian distribution. By default this is on.\n"},
  {"GetUseNormals", PyvtkEllipsoidalGaussianKernel_GetUseNormals, METH_VARARGS,
   "GetUseNormals(self) -> bool\nC++: virtual bool GetUseNormals()\n\n"},
  {"UseNormalsOn", PyvtkEllipsoidalGaussianKernel_UseNormalsOn, METH_VARARGS,
   "UseNormalsOn(self) -> None\nC++: virtual void UseNormalsOn()\n\n"},
  {"UseNormalsOff", PyvtkEllipsoidalGaussianKernel_UseNormalsOff, METH_VARARGS,
   "UseNormalsOff(self) -> None\nC++: virtual void UseNormalsOff()\n\n"},
  {"SetNormalsArrayName", PyvtkEllipsoidalGaussianKernel_SetNormalsArrayName, METH_VARARGS,
   "SetNormalsArrayName(self, _arg:str) -> None\nC++: virtual void SetNormalsArrayName(vtkStdString _arg)\n\nSpecify the normals array name. Used to orient the ellipsoid.\nNote that by default the input normals are used (i.e. the input\nto vtkPointInterpolator). If no input normals are available, then\nthe named NormalsArrayName is used.\n"},
  {"GetNormalsArrayName", PyvtkEllipsoidalGaussianKernel_GetNormalsArrayName, METH_VARARGS,
   "GetNormalsArrayName(self) -> str\nC++: virtual vtkStdString GetNormalsArrayName()\n\n"},
  {"SetUseScalars", PyvtkEllipsoidalGaussianKernel_SetUseScalars, METH_VARARGS,
   "SetUseScalars(self, _arg:bool) -> None\nC++: virtual void SetUseScalars(bool _arg)\n\nSpecify whether scalar values should be used to scale the\nweights. By default this is off.\n"},
  {"GetUseScalars", PyvtkEllipsoidalGaussianKernel_GetUseScalars, METH_VARARGS,
   "GetUseScalars(self) -> bool\nC++: virtual bool GetUseScalars()\n\n"},
  {"UseScalarsOn", PyvtkEllipsoidalGaussianKernel_UseScalarsOn, METH_VARARGS,
   "UseScalarsOn(self) -> None\nC++: virtual void UseScalarsOn()\n\n"},
  {"UseScalarsOff", PyvtkEllipsoidalGaussianKernel_UseScalarsOff, METH_VARARGS,
   "UseScalarsOff(self) -> None\nC++: virtual void UseScalarsOff()\n\n"},
  {"SetScalarsArrayName", PyvtkEllipsoidalGaussianKernel_SetScalarsArrayName, METH_VARARGS,
   "SetScalarsArrayName(self, _arg:str) -> None\nC++: virtual void SetScalarsArrayName(vtkStdString _arg)\n\nSpecify the scalars array name. Used to scale the ellipsoid. Note\nthat by default the input scalars are used (i.e. the input to\nvtkPointInterpolator). If no input scalars are available, then\nthe named ScalarsArrayName is used.\n"},
  {"GetScalarsArrayName", PyvtkEllipsoidalGaussianKernel_GetScalarsArrayName, METH_VARARGS,
   "GetScalarsArrayName(self) -> str\nC++: virtual vtkStdString GetScalarsArrayName()\n\n"},
  {"SetScaleFactor", PyvtkEllipsoidalGaussianKernel_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nMultiply the Gaussian splat distribution by this value. If\nUseScalars is on and a scalar array is provided, then the scalar\nvalue will be multiplied by the ScaleFactor times the Gaussian\nfunction.\n"},
  {"GetScaleFactorMinValue", PyvtkEllipsoidalGaussianKernel_GetScaleFactorMinValue, METH_VARARGS,
   "GetScaleFactorMinValue(self) -> float\nC++: virtual double GetScaleFactorMinValue()\n\n"},
  {"GetScaleFactorMaxValue", PyvtkEllipsoidalGaussianKernel_GetScaleFactorMaxValue, METH_VARARGS,
   "GetScaleFactorMaxValue(self) -> float\nC++: virtual double GetScaleFactorMaxValue()\n\n"},
  {"GetScaleFactor", PyvtkEllipsoidalGaussianKernel_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetSharpness", PyvtkEllipsoidalGaussianKernel_SetSharpness, METH_VARARGS,
   "SetSharpness(self, _arg:float) -> None\nC++: virtual void SetSharpness(double _arg)\n\nSet / Get the sharpness (i.e., falloff) of the Gaussian. By\ndefault Sharpness=2. As the sharpness increases the effects of\ndistant points are reduced.\n"},
  {"GetSharpnessMinValue", PyvtkEllipsoidalGaussianKernel_GetSharpnessMinValue, METH_VARARGS,
   "GetSharpnessMinValue(self) -> float\nC++: virtual double GetSharpnessMinValue()\n\n"},
  {"GetSharpnessMaxValue", PyvtkEllipsoidalGaussianKernel_GetSharpnessMaxValue, METH_VARARGS,
   "GetSharpnessMaxValue(self) -> float\nC++: virtual double GetSharpnessMaxValue()\n\n"},
  {"GetSharpness", PyvtkEllipsoidalGaussianKernel_GetSharpness, METH_VARARGS,
   "GetSharpness(self) -> float\nC++: virtual double GetSharpness()\n\n"},
  {"SetEccentricity", PyvtkEllipsoidalGaussianKernel_SetEccentricity, METH_VARARGS,
   "SetEccentricity(self, _arg:float) -> None\nC++: virtual void SetEccentricity(double _arg)\n\nSet / Get the eccentricity of the ellipsoidal Gaussian. A\nvalue=1.0 produces a spherical distribution. Values < 1 produce a\nneedle like distribution (in the direction of the normal); values\n> 1 produce a pancake like distribution (orthogonal to the\nnormal).\n"},
  {"GetEccentricityMinValue", PyvtkEllipsoidalGaussianKernel_GetEccentricityMinValue, METH_VARARGS,
   "GetEccentricityMinValue(self) -> float\nC++: virtual double GetEccentricityMinValue()\n\n"},
  {"GetEccentricityMaxValue", PyvtkEllipsoidalGaussianKernel_GetEccentricityMaxValue, METH_VARARGS,
   "GetEccentricityMaxValue(self) -> float\nC++: virtual double GetEccentricityMaxValue()\n\n"},
  {"GetEccentricity", PyvtkEllipsoidalGaussianKernel_GetEccentricity, METH_VARARGS,
   "GetEccentricity(self) -> float\nC++: virtual double GetEccentricity()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEllipsoidalGaussianKernel_Doc =
  "vtkEllipsoidalGaussianKernel - an ellipsoidal Gaussian interpolation\nkernel\n\n"
  "Superclass: vtkGeneralizedKernel\n\n"
  "vtkEllipsoidalGaussianKernel is an interpolation kernel that returns\n"
  "the weights for all points found in the ellipsoid defined by radius R\n"
  "in combination with local data (normals and/or scalars). For example,\n"
  "\"pancake\" weightings (the local normal parallel to the minimum\n"
  "ellisoidal axis); or \"needle\" weightings (the local normal parallel\n"
  "to the maximum ellipsoidal axis) are possible. (Note that spherical\n"
  "Gaussian weightings are more efficiently computed using\n"
  "vtkGaussianKernel.)\n\n"
  "The ellipsoidal Gaussian can be described by:\n\n\n"
  "    W(x) = S * exp( -( Sharpness^2 * ((rxy/E)**2 + z**2)/R**2) )\n\n"
  "where S is the local scalar value; E is a user-defined eccentricity\n"
  "factor that controls the elliptical shape of the splat; z is the\n"
  "distance of the current voxel sample point along the local normal N;\n"
  "and rxy is the distance to neighbor point x in the direction\n"
  "perpendicular to N.\n\n"
  "@warning\n"
  "The weights are normalized so that SUM(Wi) = 1. If a neighbor point p\n"
  "precisely lies on the point to be interpolated, then the interpolated\n"
  "point takes on the values associated with p.\n\n"
  "@sa\n"
  "vtkPointInterpolator vtkInterpolationKernel vtkGeneralizedKernel\n"
  "vtkGaussianKernel vtkVoronoiKernel vtkSPHKernel vtkShepardKernel\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEllipsoidalGaussianKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkEllipsoidalGaussianKernel", // tp_name
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
  PyvtkEllipsoidalGaussianKernel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEllipsoidalGaussianKernel_StaticNew()
{
  return vtkEllipsoidalGaussianKernel::New();
}

PyObject *PyvtkEllipsoidalGaussianKernel_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEllipsoidalGaussianKernel_Type, PyvtkEllipsoidalGaussianKernel_Methods,
    "vtkEllipsoidalGaussianKernel",
 &PyvtkEllipsoidalGaussianKernel_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGeneralizedKernel_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEllipsoidalGaussianKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEllipsoidalGaussianKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEllipsoidalGaussianKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

