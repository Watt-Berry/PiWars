// python wrapper for vtkSurfaceLICInterface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSurfaceLICInterface.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSurfaceLICInterface(PyObject *dict); }
extern "C" { PyObject *PyvtkSurfaceLICInterface_ClassNew(); }


static PyObject *
PyvtkSurfaceLICInterface_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceLICInterface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceLICInterface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceLICInterface *tempr = vtkSurfaceLICInterface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceLICInterface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceLICInterface::NewInstance());

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
PyvtkSurfaceLICInterface_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSurfaceLICInterface::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSurfaceLICInterface::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSteps(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNumberOfSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSteps() :
      op->vtkSurfaceLICInterface::GetNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStepSize(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetStepSize() :
      op->vtkSurfaceLICInterface::GetStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNormalizeVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeVectors(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNormalizeVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_NormalizeVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeVectorsOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::NormalizeVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_NormalizeVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeVectorsOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::NormalizeVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNormalizeVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeVectors() :
      op->vtkSurfaceLICInterface::GetNormalizeVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaskOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskOnSurface(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskOnSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_MaskOnSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskOnSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskOnSurfaceOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::MaskOnSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_MaskOnSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MaskOnSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MaskOnSurfaceOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::MaskOnSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaskOnSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskOnSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaskOnSurface() :
      op->vtkSurfaceLICInterface::GetMaskOnSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaskThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskThreshold(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaskThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskThreshold() :
      op->vtkSurfaceLICInterface::GetMaskThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaskColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

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
      op->SetMaskColor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskColor(temp0);
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
PyvtkSurfaceLICInterface_SetMaskColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

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
      op->SetMaskColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceLICInterface_SetMaskColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSurfaceLICInterface_SetMaskColor_s1(self, args);
    case 3:
      return PyvtkSurfaceLICInterface_SetMaskColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskColor");
  return nullptr;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaskColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaskColor() :
      op->vtkSurfaceLICInterface::GetMaskColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaskIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaskIntensity(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaskIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaskIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaskIntensity() :
      op->vtkSurfaceLICInterface::GetMaskIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnhancedLIC(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetEnhancedLIC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetEnhancedLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhancedLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhancedLIC() :
      op->vtkSurfaceLICInterface::GetEnhancedLIC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_EnhancedLICOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnhancedLICOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::EnhancedLICOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_EnhancedLICOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnhancedLICOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnhancedLICOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::EnhancedLICOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetEnhanceContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnhanceContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnhanceContrast(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetEnhanceContrast(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetEnhanceContrast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnhanceContrast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnhanceContrast() :
      op->vtkSurfaceLICInterface::GetEnhanceContrast());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetLowLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowLICContrastEnhancementFactor() :
      op->vtkSurfaceLICInterface::GetLowLICContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetHighLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighLICContrastEnhancementFactor() :
      op->vtkSurfaceLICInterface::GetHighLICContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetLowLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowLICContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetLowLICContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetHighLICContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLICContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHighLICContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetHighLICContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetLowColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLowColorContrastEnhancementFactor() :
      op->vtkSurfaceLICInterface::GetLowColorContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetHighColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighColorContrastEnhancementFactor() :
      op->vtkSurfaceLICInterface::GetHighColorContrastEnhancementFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetLowColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowColorContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetLowColorContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetHighColorContrastEnhancementFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighColorContrastEnhancementFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHighColorContrastEnhancementFactor(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetHighColorContrastEnhancementFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetAntiAlias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAntiAlias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAntiAlias(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetAntiAlias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_AntiAliasOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntiAliasOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AntiAliasOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::AntiAliasOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_AntiAliasOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AntiAliasOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AntiAliasOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::AntiAliasOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetAntiAlias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAntiAlias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAntiAlias() :
      op->vtkSurfaceLICInterface::GetAntiAlias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

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
      op->vtkSurfaceLICInterface::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkSurfaceLICInterface::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetLICIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLICIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLICIntensity(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetLICIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetLICIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLICIntensity() :
      op->vtkSurfaceLICInterface::GetLICIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMapModeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapModeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapModeBias(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMapModeBias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMapModeBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapModeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMapModeBias() :
      op->vtkSurfaceLICInterface::GetMapModeBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetNoiseDataSet(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetNoiseDataSet() :
      op->vtkSurfaceLICInterface::GetNoiseDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetGenerateNoiseTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateNoiseTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateNoiseTexture(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetGenerateNoiseTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetGenerateNoiseTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateNoiseTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateNoiseTexture() :
      op->vtkSurfaceLICInterface::GetGenerateNoiseTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoiseType(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseType() :
      op->vtkSurfaceLICInterface::GetNoiseType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoiseTextureSize(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseTextureSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseTextureSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseTextureSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseTextureSize() :
      op->vtkSurfaceLICInterface::GetNoiseTextureSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseGrainSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseGrainSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoiseGrainSize(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseGrainSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseGrainSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseGrainSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseGrainSize() :
      op->vtkSurfaceLICInterface::GetNoiseGrainSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMinNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinNoiseValue(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMinNoiseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetMaxNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNoiseValue(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetMaxNoiseValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMinNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinNoiseValue() :
      op->vtkSurfaceLICInterface::GetMinNoiseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetMaxNoiseValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNoiseValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxNoiseValue() :
      op->vtkSurfaceLICInterface::GetMaxNoiseValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNumberOfNoiseLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNoiseLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfNoiseLevels(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNumberOfNoiseLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNumberOfNoiseLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNoiseLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfNoiseLevels() :
      op->vtkSurfaceLICInterface::GetNumberOfNoiseLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetImpulseNoiseProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImpulseNoiseProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImpulseNoiseProbability(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetImpulseNoiseProbability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetImpulseNoiseProbability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImpulseNoiseProbability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImpulseNoiseProbability() :
      op->vtkSurfaceLICInterface::GetImpulseNoiseProbability());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetImpulseNoiseBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImpulseNoiseBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImpulseNoiseBackgroundValue(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetImpulseNoiseBackgroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetImpulseNoiseBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImpulseNoiseBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetImpulseNoiseBackgroundValue() :
      op->vtkSurfaceLICInterface::GetImpulseNoiseBackgroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetNoiseGeneratorSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoiseGeneratorSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoiseGeneratorSeed(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetNoiseGeneratorSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetNoiseGeneratorSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoiseGeneratorSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoiseGeneratorSeed() :
      op->vtkSurfaceLICInterface::GetNoiseGeneratorSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetCompositeStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeStrategy(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetCompositeStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetCompositeStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeStrategy() :
      op->vtkSurfaceLICInterface::GetCompositeStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_IsSupported(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = vtkSurfaceLICInterface::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_WriteTimerLog(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteTimerLog");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->WriteTimerLog(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::WriteTimerLog(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkSurfaceLICInterface *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSurfaceLICInterface"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CanRenderSurfaceLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanRenderSurfaceLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
  {
    bool tempr = (ap.IsBound() ?
      op->CanRenderSurfaceLIC(temp0) :
      op->vtkSurfaceLICInterface::CanRenderSurfaceLIC(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_ValidateContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->ValidateContext(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::ValidateContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CreateCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  vtkDataObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->CreateCommunicator(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceLICInterface::CreateCommunicator(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_UpdateCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  vtkDataObject *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetVTKObject(temp2, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->UpdateCommunicator(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceLICInterface::UpdateCommunicator(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetHasVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasVectors(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetHasVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetHasVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasVectors() :
      op->vtkSurfaceLICInterface::GetHasVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_InitializeResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeResources();
    }
    else
    {
      op->vtkSurfaceLICInterface::InitializeResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_PrepareForGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareForGeometry();
    }
    else
    {
      op->vtkSurfaceLICInterface::PrepareForGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CompletedGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CompletedGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CompletedGeometry();
    }
    else
    {
      op->vtkSurfaceLICInterface::CompletedGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GatherVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GatherVectors();
    }
    else
    {
      op->vtkSurfaceLICInterface::GatherVectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_ApplyLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ApplyLIC();
    }
    else
    {
      op->vtkSurfaceLICInterface::ApplyLIC();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CombineColorsAndLIC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CombineColorsAndLIC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CombineColorsAndLIC();
    }
    else
    {
      op->vtkSurfaceLICInterface::CombineColorsAndLIC();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_CopyToScreen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyToScreen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyToScreen();
    }
    else
    {
      op->vtkSurfaceLICInterface::CopyToScreen();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_SetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnable(temp0);
    }
    else
    {
      op->vtkSurfaceLICInterface::SetEnable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_GetEnable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnable() :
      op->vtkSurfaceLICInterface::GetEnable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_EnableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableOn();
    }
    else
    {
      op->vtkSurfaceLICInterface::EnableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICInterface_EnableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICInterface *op = static_cast<vtkSurfaceLICInterface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableOff();
    }
    else
    {
      op->vtkSurfaceLICInterface::EnableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceLICInterface_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceLICInterface_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceLICInterface_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceLICInterface_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSurfaceLICInterface\nC++: static vtkSurfaceLICInterface *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceLICInterface_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSurfaceLICInterface\nC++: vtkSurfaceLICInterface *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSurfaceLICInterface_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSurfaceLICInterface_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfSteps", PyvtkSurfaceLICInterface_SetNumberOfSteps, METH_VARARGS,
   "SetNumberOfSteps(self, val:int) -> None\nC++: void SetNumberOfSteps(int val)\n\nGet/Set the number of integration steps in each direction.\n"},
  {"GetNumberOfSteps", PyvtkSurfaceLICInterface_GetNumberOfSteps, METH_VARARGS,
   "GetNumberOfSteps(self) -> int\nC++: virtual int GetNumberOfSteps()\n\n"},
  {"SetStepSize", PyvtkSurfaceLICInterface_SetStepSize, METH_VARARGS,
   "SetStepSize(self, val:float) -> None\nC++: void SetStepSize(double val)\n\nGet/Set the step size (in pixels).\n"},
  {"GetStepSize", PyvtkSurfaceLICInterface_GetStepSize, METH_VARARGS,
   "GetStepSize(self) -> float\nC++: virtual double GetStepSize()\n\n"},
  {"SetNormalizeVectors", PyvtkSurfaceLICInterface_SetNormalizeVectors, METH_VARARGS,
   "SetNormalizeVectors(self, val:int) -> None\nC++: void SetNormalizeVectors(int val)\n\nNormalize vectors during integration. When set(the default) the\ninput vector field is normalized during integration, and each\nintegration occurs over the same arclength. When not set each\nintegration occurs over an arc length proportional to the field\nmagnitude as is customary in traditional numerical methods. See, \"Imaging Vector Fields Using Line Integral\nConvolution\" for an axample where normalization is used. See,\n\"Image Space Based Visualization of Unsteady Flow on Surfaces\"\nfor an example of where no normalization is used.\n"},
  {"NormalizeVectorsOn", PyvtkSurfaceLICInterface_NormalizeVectorsOn, METH_VARARGS,
   "NormalizeVectorsOn(self) -> None\nC++: virtual void NormalizeVectorsOn()\n\n"},
  {"NormalizeVectorsOff", PyvtkSurfaceLICInterface_NormalizeVectorsOff, METH_VARARGS,
   "NormalizeVectorsOff(self) -> None\nC++: virtual void NormalizeVectorsOff()\n\n"},
  {"GetNormalizeVectors", PyvtkSurfaceLICInterface_GetNormalizeVectors, METH_VARARGS,
   "GetNormalizeVectors(self) -> int\nC++: virtual int GetNormalizeVectors()\n\n"},
  {"SetMaskOnSurface", PyvtkSurfaceLICInterface_SetMaskOnSurface, METH_VARARGS,
   "SetMaskOnSurface(self, val:int) -> None\nC++: void SetMaskOnSurface(int val)\n\nWhen set MaskOnSurface computes |V| for use in the fragment\nmasking tests on the surface. When not set the original\nun-projected un-transformed |V| is used.\n"},
  {"MaskOnSurfaceOn", PyvtkSurfaceLICInterface_MaskOnSurfaceOn, METH_VARARGS,
   "MaskOnSurfaceOn(self) -> None\nC++: virtual void MaskOnSurfaceOn()\n\n"},
  {"MaskOnSurfaceOff", PyvtkSurfaceLICInterface_MaskOnSurfaceOff, METH_VARARGS,
   "MaskOnSurfaceOff(self) -> None\nC++: virtual void MaskOnSurfaceOff()\n\n"},
  {"GetMaskOnSurface", PyvtkSurfaceLICInterface_GetMaskOnSurface, METH_VARARGS,
   "GetMaskOnSurface(self) -> int\nC++: virtual int GetMaskOnSurface()\n\n"},
  {"SetMaskThreshold", PyvtkSurfaceLICInterface_SetMaskThreshold, METH_VARARGS,
   "SetMaskThreshold(self, val:float) -> None\nC++: void SetMaskThreshold(double val)\n\nThe MaskThreshold controls the rendering of fragments in stagnant\nregions of flow.  // In these regions LIC noise texture will be\nmasked, where |V| < MaskThreshold is satisfied. The masking\nprocess blends a the MaskColor with the scalar color of the\nsurface proportional to MaskIntesnsity. See MaskIntensity for\nmore information on the blending algorithm. This blending allows\none control over the masking process so that masked fragments may\nbe: highlighted (by setting a unique mask color and mask\nintensity > 0), made invisible with and without passing the\nun-convolved noise texture (by setting mask intensity 0), made to\nblend into the LIC.\n\n* MaskThreshold units are in the original vector space. Note that\nthe\n* threshold can be applied to the original vector field or to the\nsurface\n* projected vector field. See MaskOnSurface.\n"},
  {"GetMaskThreshold", PyvtkSurfaceLICInterface_GetMaskThreshold, METH_VARARGS,
   "GetMaskThreshold(self) -> float\nC++: virtual double GetMaskThreshold()\n\n"},
  {"SetMaskColor", PyvtkSurfaceLICInterface_SetMaskColor, METH_VARARGS,
   "SetMaskColor(self, val:[float, ...]) -> None\nC++: void SetMaskColor(double *val)\nSetMaskColor(self, r:float, g:float, b:float) -> None\nC++: void SetMaskColor(double r, double g, double b)\n\nThe MaskColor is used on masked fragments. The default of (0.5,\n0.5, 0.5) makes the masked fragments look similar to the LIC'd\nfragments. The mask color is applied only when MaskIntensity > 0.\n"},
  {"GetMaskColor", PyvtkSurfaceLICInterface_GetMaskColor, METH_VARARGS,
   "GetMaskColor(self) -> (float, float, float)\nC++: virtual double *GetMaskColor()\n\n"},
  {"SetMaskIntensity", PyvtkSurfaceLICInterface_SetMaskIntensity, METH_VARARGS,
   "SetMaskIntensity(self, val:float) -> None\nC++: void SetMaskIntensity(double val)\n\nThe MaskIntensity controls the blending of the mask color and the\ngeometry color. The color of masked fragments is given by:\n\n* c = maskColor * maskIntensity + geomColor * (1 - maskIntensity)\n\n* The default value of 0.0 results in the geometry color being\n  used.\n"},
  {"GetMaskIntensity", PyvtkSurfaceLICInterface_GetMaskIntensity, METH_VARARGS,
   "GetMaskIntensity(self) -> float\nC++: virtual double GetMaskIntensity()\n\n"},
  {"SetEnhancedLIC", PyvtkSurfaceLICInterface_SetEnhancedLIC, METH_VARARGS,
   "SetEnhancedLIC(self, val:int) -> None\nC++: void SetEnhancedLIC(int val)\n\nEnhancedLIC mean compute the LIC twice with the second pass using\nthe edge-enhanced result of the first pass as a noise texture.\nEdge enhancedment is made by a simple Laplace convolution.\n"},
  {"GetEnhancedLIC", PyvtkSurfaceLICInterface_GetEnhancedLIC, METH_VARARGS,
   "GetEnhancedLIC(self) -> int\nC++: virtual int GetEnhancedLIC()\n\n"},
  {"EnhancedLICOn", PyvtkSurfaceLICInterface_EnhancedLICOn, METH_VARARGS,
   "EnhancedLICOn(self) -> None\nC++: virtual void EnhancedLICOn()\n\n"},
  {"EnhancedLICOff", PyvtkSurfaceLICInterface_EnhancedLICOff, METH_VARARGS,
   "EnhancedLICOff(self) -> None\nC++: virtual void EnhancedLICOff()\n\n"},
  {"SetEnhanceContrast", PyvtkSurfaceLICInterface_SetEnhanceContrast, METH_VARARGS,
   "SetEnhanceContrast(self, val:int) -> None\nC++: void SetEnhanceContrast(int val)\n\n"},
  {"GetEnhanceContrast", PyvtkSurfaceLICInterface_GetEnhanceContrast, METH_VARARGS,
   "GetEnhanceContrast(self) -> int\nC++: virtual int GetEnhanceContrast()\n\n"},
  {"GetLowLICContrastEnhancementFactor", PyvtkSurfaceLICInterface_GetLowLICContrastEnhancementFactor, METH_VARARGS,
   "GetLowLICContrastEnhancementFactor(self) -> float\nC++: virtual double GetLowLICContrastEnhancementFactor()\n\nThis feature is used to fine tune the contrast enhancement. There\nare two modes AUTOMATIC and MANUAL.In AUTOMATIC mode values are\nprovided indicating the fraction of the range to adjust M and m\nby, during contrast enahncement histogram stretching. M and m are\nthe intensity/lightness values that map to 1 and 0. (see\nEnhanceContrast for an explanation of the mapping procedure). m\nand M are computed using the factors as follows:\n\n* m = min(C) + mFactor * (max(C) - min(C))\n* M = max(C) - MFactor * (max(C) - min(C))\n\n* the default values for mFactor and MFactor are 0 which result\n  in\n* m = min(C), M = max(C), taken over the entire image. Modifying\n  mFactor and\n* MFactor above or below zero provide control over the\n  saturation/\n* de-saturation during contrast enhancement.\n"},
  {"GetHighLICContrastEnhancementFactor", PyvtkSurfaceLICInterface_GetHighLICContrastEnhancementFactor, METH_VARARGS,
   "GetHighLICContrastEnhancementFactor(self) -> float\nC++: virtual double GetHighLICContrastEnhancementFactor()\n\n"},
  {"SetLowLICContrastEnhancementFactor", PyvtkSurfaceLICInterface_SetLowLICContrastEnhancementFactor, METH_VARARGS,
   "SetLowLICContrastEnhancementFactor(self, val:float) -> None\nC++: void SetLowLICContrastEnhancementFactor(double val)\n\n"},
  {"SetHighLICContrastEnhancementFactor", PyvtkSurfaceLICInterface_SetHighLICContrastEnhancementFactor, METH_VARARGS,
   "SetHighLICContrastEnhancementFactor(self, val:float) -> None\nC++: void SetHighLICContrastEnhancementFactor(double val)\n\n"},
  {"GetLowColorContrastEnhancementFactor", PyvtkSurfaceLICInterface_GetLowColorContrastEnhancementFactor, METH_VARARGS,
   "GetLowColorContrastEnhancementFactor(self) -> float\nC++: virtual double GetLowColorContrastEnhancementFactor()\n\n"},
  {"GetHighColorContrastEnhancementFactor", PyvtkSurfaceLICInterface_GetHighColorContrastEnhancementFactor, METH_VARARGS,
   "GetHighColorContrastEnhancementFactor(self) -> float\nC++: virtual double GetHighColorContrastEnhancementFactor()\n\n"},
  {"SetLowColorContrastEnhancementFactor", PyvtkSurfaceLICInterface_SetLowColorContrastEnhancementFactor, METH_VARARGS,
   "SetLowColorContrastEnhancementFactor(self, val:float) -> None\nC++: void SetLowColorContrastEnhancementFactor(double val)\n\n"},
  {"SetHighColorContrastEnhancementFactor", PyvtkSurfaceLICInterface_SetHighColorContrastEnhancementFactor, METH_VARARGS,
   "SetHighColorContrastEnhancementFactor(self, val:float) -> None\nC++: void SetHighColorContrastEnhancementFactor(double val)\n\n"},
  {"SetAntiAlias", PyvtkSurfaceLICInterface_SetAntiAlias, METH_VARARGS,
   "SetAntiAlias(self, val:int) -> None\nC++: void SetAntiAlias(int val)\n\nEnable/Disable the anti-aliasing pass. This optional pass\n(disabled by default) can be enabled to reduce jagged patterns in\nthe final LIC image. Values greater than 0 control the number of\niterations, 1 is typically sufficient.\n"},
  {"AntiAliasOn", PyvtkSurfaceLICInterface_AntiAliasOn, METH_VARARGS,
   "AntiAliasOn(self) -> None\nC++: virtual void AntiAliasOn()\n\n"},
  {"AntiAliasOff", PyvtkSurfaceLICInterface_AntiAliasOff, METH_VARARGS,
   "AntiAliasOff(self) -> None\nC++: virtual void AntiAliasOff()\n\n"},
  {"GetAntiAlias", PyvtkSurfaceLICInterface_GetAntiAlias, METH_VARARGS,
   "GetAntiAlias(self) -> int\nC++: virtual int GetAntiAlias()\n\n"},
  {"SetColorMode", PyvtkSurfaceLICInterface_SetColorMode, METH_VARARGS,
   "SetColorMode(self, val:int) -> None\nC++: void SetColorMode(int val)\n\n"},
  {"GetColorMode", PyvtkSurfaceLICInterface_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetLICIntensity", PyvtkSurfaceLICInterface_SetLICIntensity, METH_VARARGS,
   "SetLICIntensity(self, val:float) -> None\nC++: void SetLICIntensity(double val)\n\nFactor used when blend mode is set to COLOR_MODE_BLEND. This\ncontrols the contribution of the LIC in the final output image as\nfollows:\n\n* c = LIC * LICIntensity + scalar * (1 - LICIntensity);\n\n* 0.0 produces same result as disabling LIC altogether, while 1.0\nimplies\n* show LIC result alone.\n"},
  {"GetLICIntensity", PyvtkSurfaceLICInterface_GetLICIntensity, METH_VARARGS,
   "GetLICIntensity(self) -> float\nC++: virtual double GetLICIntensity()\n\n"},
  {"SetMapModeBias", PyvtkSurfaceLICInterface_SetMapModeBias, METH_VARARGS,
   "SetMapModeBias(self, val:float) -> None\nC++: void SetMapModeBias(double val)\n\nFactor used when blend mode is set to COLOR_MODE_MAP. This adds a\nbias to the LIC image. The purpose of this is to adjust the\nbrightness when a brighter image is desired. The default of 0.0\nresults in no change. Values gretaer than 0.0 will brighten the\nimage while values less than 0.0 darken the image.\n"},
  {"GetMapModeBias", PyvtkSurfaceLICInterface_GetMapModeBias, METH_VARARGS,
   "GetMapModeBias(self) -> float\nC++: virtual double GetMapModeBias()\n\n"},
  {"SetNoiseDataSet", PyvtkSurfaceLICInterface_SetNoiseDataSet, METH_VARARGS,
   "SetNoiseDataSet(self, data:vtkImageData) -> None\nC++: void SetNoiseDataSet(vtkImageData *data)\n\nSet the data containing a noise array as active scalars. Active\nscalars array will be converted into a texture for use as noise\nin the LIC process. Noise datasets are expected to be gray scale.\n"},
  {"GetNoiseDataSet", PyvtkSurfaceLICInterface_GetNoiseDataSet, METH_VARARGS,
   "GetNoiseDataSet(self) -> vtkImageData\nC++: vtkImageData *GetNoiseDataSet()\n\n"},
  {"SetGenerateNoiseTexture", PyvtkSurfaceLICInterface_SetGenerateNoiseTexture, METH_VARARGS,
   "SetGenerateNoiseTexture(self, shouldGenerate:int) -> None\nC++: void SetGenerateNoiseTexture(int shouldGenerate)\n\nSet/Get the noise texture source. When not set the default\n200x200 white noise texture is used (see\nVTKData/Data/Data/noise.png). When set a noise texture is\ngenerated based on the following parameters:\n\n* NoiseType               - select noise type. Gaussian, Uniform,\netc\n* NoiseTextureSize        - number of pixels in square noise\n  texture(side)\n* NoiseGrainSize          - number of pixels each noise value\n  spans(side)\n* MinNoiseValue           - minimum noise color >=0 && <\n  MaxNoiseValue\n* MaxNoiseValue           - maximum noise color <=1 ** >\n  MinNoiseValue\n* NumberOfNoiseLevels     - number of discrete noise colors\n* ImpulseNoiseProbability - impulse noise is generated when < 1\n* ImpulseNoiseBackgroundValue  - the background color for\n  untouched pixels\n* NoiseGeneratorSeed      - seed the random number generators\n\n* Changing the noise texture gives one greater control over the\n  look of the\n* final image. The default is 0 which results in the use of a\n  static 200x200\n* Gaussian noise texture. See VTKData/Data/Data/noise.png.\n"},
  {"GetGenerateNoiseTexture", PyvtkSurfaceLICInterface_GetGenerateNoiseTexture, METH_VARARGS,
   "GetGenerateNoiseTexture(self) -> int\nC++: virtual int GetGenerateNoiseTexture()\n\n"},
  {"SetNoiseType", PyvtkSurfaceLICInterface_SetNoiseType, METH_VARARGS,
   "SetNoiseType(self, type:int) -> None\nC++: void SetNoiseType(int type)\n\n"},
  {"GetNoiseType", PyvtkSurfaceLICInterface_GetNoiseType, METH_VARARGS,
   "GetNoiseType(self) -> int\nC++: virtual int GetNoiseType()\n\n"},
  {"SetNoiseTextureSize", PyvtkSurfaceLICInterface_SetNoiseTextureSize, METH_VARARGS,
   "SetNoiseTextureSize(self, length:int) -> None\nC++: void SetNoiseTextureSize(int length)\n\nSet/Get the side length in pixels of the noise texture. The\ntexture will be length^2 pixels in area.\n"},
  {"GetNoiseTextureSize", PyvtkSurfaceLICInterface_GetNoiseTextureSize, METH_VARARGS,
   "GetNoiseTextureSize(self) -> int\nC++: virtual int GetNoiseTextureSize()\n\n"},
  {"SetNoiseGrainSize", PyvtkSurfaceLICInterface_SetNoiseGrainSize, METH_VARARGS,
   "SetNoiseGrainSize(self, val:int) -> None\nC++: void SetNoiseGrainSize(int val)\n\nEach noise value will be length^2 pixels in area.\n"},
  {"GetNoiseGrainSize", PyvtkSurfaceLICInterface_GetNoiseGrainSize, METH_VARARGS,
   "GetNoiseGrainSize(self) -> int\nC++: virtual int GetNoiseGrainSize()\n\n"},
  {"SetMinNoiseValue", PyvtkSurfaceLICInterface_SetMinNoiseValue, METH_VARARGS,
   "SetMinNoiseValue(self, val:float) -> None\nC++: void SetMinNoiseValue(double val)\n\nSet/Get the minimum and mximum  gray scale values that the\ngenerated noise can take on. The generated noise will be in the\nrange of MinNoiseValue to MaxNoiseValue. Values are clamped\nwithin 0 to 1. MinNoiseValue must be less than MaxNoiseValue.\n"},
  {"SetMaxNoiseValue", PyvtkSurfaceLICInterface_SetMaxNoiseValue, METH_VARARGS,
   "SetMaxNoiseValue(self, val:float) -> None\nC++: void SetMaxNoiseValue(double val)\n\n"},
  {"GetMinNoiseValue", PyvtkSurfaceLICInterface_GetMinNoiseValue, METH_VARARGS,
   "GetMinNoiseValue(self) -> float\nC++: virtual double GetMinNoiseValue()\n\n"},
  {"GetMaxNoiseValue", PyvtkSurfaceLICInterface_GetMaxNoiseValue, METH_VARARGS,
   "GetMaxNoiseValue(self) -> float\nC++: virtual double GetMaxNoiseValue()\n\n"},
  {"SetNumberOfNoiseLevels", PyvtkSurfaceLICInterface_SetNumberOfNoiseLevels, METH_VARARGS,
   "SetNumberOfNoiseLevels(self, val:int) -> None\nC++: void SetNumberOfNoiseLevels(int val)\n\nSet/Get the number of discrete values a noise pixel may take on.\nDefault 1024.\n"},
  {"GetNumberOfNoiseLevels", PyvtkSurfaceLICInterface_GetNumberOfNoiseLevels, METH_VARARGS,
   "GetNumberOfNoiseLevels(self) -> int\nC++: virtual int GetNumberOfNoiseLevels()\n\n"},
  {"SetImpulseNoiseProbability", PyvtkSurfaceLICInterface_SetImpulseNoiseProbability, METH_VARARGS,
   "SetImpulseNoiseProbability(self, val:float) -> None\nC++: void SetImpulseNoiseProbability(double val)\n\nControl the density of the noise. A value of 1.0 produces uniform\nrandom noise while values < 1.0 produce impulse noise with the\ngiven probability.\n"},
  {"GetImpulseNoiseProbability", PyvtkSurfaceLICInterface_GetImpulseNoiseProbability, METH_VARARGS,
   "GetImpulseNoiseProbability(self) -> float\nC++: virtual double GetImpulseNoiseProbability()\n\n"},
  {"SetImpulseNoiseBackgroundValue", PyvtkSurfaceLICInterface_SetImpulseNoiseBackgroundValue, METH_VARARGS,
   "SetImpulseNoiseBackgroundValue(self, val:float) -> None\nC++: void SetImpulseNoiseBackgroundValue(double val)\n\nThe color to use for untouched pixels when impulse noise\nprobability < 1.\n"},
  {"GetImpulseNoiseBackgroundValue", PyvtkSurfaceLICInterface_GetImpulseNoiseBackgroundValue, METH_VARARGS,
   "GetImpulseNoiseBackgroundValue(self) -> float\nC++: virtual double GetImpulseNoiseBackgroundValue()\n\n"},
  {"SetNoiseGeneratorSeed", PyvtkSurfaceLICInterface_SetNoiseGeneratorSeed, METH_VARARGS,
   "SetNoiseGeneratorSeed(self, val:int) -> None\nC++: void SetNoiseGeneratorSeed(int val)\n\nSet/Get the seed value used by the random number generator.\n"},
  {"GetNoiseGeneratorSeed", PyvtkSurfaceLICInterface_GetNoiseGeneratorSeed, METH_VARARGS,
   "GetNoiseGeneratorSeed(self) -> int\nC++: virtual int GetNoiseGeneratorSeed()\n\n"},
  {"SetCompositeStrategy", PyvtkSurfaceLICInterface_SetCompositeStrategy, METH_VARARGS,
   "SetCompositeStrategy(self, val:int) -> None\nC++: void SetCompositeStrategy(int val)\n\n"},
  {"GetCompositeStrategy", PyvtkSurfaceLICInterface_GetCompositeStrategy, METH_VARARGS,
   "GetCompositeStrategy(self) -> int\nC++: virtual int GetCompositeStrategy()\n\n"},
  {"IsSupported", PyvtkSurfaceLICInterface_IsSupported, METH_VARARGS,
   "IsSupported(context:vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *context)\n\nReturns true if the rendering context supports extensions needed\nby this painter.\n"},
  {"WriteTimerLog", PyvtkSurfaceLICInterface_WriteTimerLog, METH_VARARGS,
   "WriteTimerLog(self, __a:str) -> None\nC++: virtual void WriteTimerLog(const char *)\n\nMethods used for parallel benchmarks. Use cmake to define\nvtkSurfaceLICMapperTIME to enable benchmarks. During each update\ntiming information is stored, it can be written to disk by\ncalling WriteLog.\n"},
  {"ShallowCopy", PyvtkSurfaceLICInterface_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, m:vtkSurfaceLICInterface) -> None\nC++: void ShallowCopy(vtkSurfaceLICInterface *m)\n\nMake a shallow copy of this interface\n"},
  {"ReleaseGraphicsResources", PyvtkSurfaceLICInterface_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release. In this case, releases the display\nlists.\n"},
  {"CanRenderSurfaceLIC", PyvtkSurfaceLICInterface_CanRenderSurfaceLIC, METH_VARARGS,
   "CanRenderSurfaceLIC(self, actor:vtkActor) -> bool\nC++: bool CanRenderSurfaceLIC(vtkActor *actor)\n\nReturns true when rendering LIC is possible.\n"},
  {"ValidateContext", PyvtkSurfaceLICInterface_ValidateContext, METH_VARARGS,
   "ValidateContext(self, renderer:vtkRenderer) -> None\nC++: void ValidateContext(vtkRenderer *renderer)\n\nLook for changes that would trigger stage updates\n"},
  {"CreateCommunicator", PyvtkSurfaceLICInterface_CreateCommunicator, METH_VARARGS,
   "CreateCommunicator(self, __a:vtkRenderer, __b:vtkActor,\n    data:vtkDataObject) -> None\nC++: void CreateCommunicator(vtkRenderer *, vtkActor *,\n    vtkDataObject *data)\n\nCreates a new communicator for internal use based on this rank's\nvisible data.\n"},
  {"UpdateCommunicator", PyvtkSurfaceLICInterface_UpdateCommunicator, METH_VARARGS,
   "UpdateCommunicator(self, renderer:vtkRenderer, actor:vtkActor,\n    data:vtkDataObject) -> None\nC++: void UpdateCommunicator(vtkRenderer *renderer,\n    vtkActor *actor, vtkDataObject *data)\n\nCalled from a mapper, does what is needed to make sure the\ncommunicators are ready\n"},
  {"SetHasVectors", PyvtkSurfaceLICInterface_SetHasVectors, METH_VARARGS,
   "SetHasVectors(self, val:bool) -> None\nC++: void SetHasVectors(bool val)\n\nDoes the data have vectors which we require\n"},
  {"GetHasVectors", PyvtkSurfaceLICInterface_GetHasVectors, METH_VARARGS,
   "GetHasVectors(self) -> bool\nC++: bool GetHasVectors()\n\n"},
  {"InitializeResources", PyvtkSurfaceLICInterface_InitializeResources, METH_VARARGS,
   "InitializeResources(self) -> None\nC++: void InitializeResources()\n\nresoucre allocators\n"},
  {"PrepareForGeometry", PyvtkSurfaceLICInterface_PrepareForGeometry, METH_VARARGS,
   "PrepareForGeometry(self) -> None\nC++: void PrepareForGeometry()\n\n"},
  {"CompletedGeometry", PyvtkSurfaceLICInterface_CompletedGeometry, METH_VARARGS,
   "CompletedGeometry(self) -> None\nC++: void CompletedGeometry()\n\n"},
  {"GatherVectors", PyvtkSurfaceLICInterface_GatherVectors, METH_VARARGS,
   "GatherVectors(self) -> None\nC++: void GatherVectors()\n\n"},
  {"ApplyLIC", PyvtkSurfaceLICInterface_ApplyLIC, METH_VARARGS,
   "ApplyLIC(self) -> None\nC++: void ApplyLIC()\n\n"},
  {"CombineColorsAndLIC", PyvtkSurfaceLICInterface_CombineColorsAndLIC, METH_VARARGS,
   "CombineColorsAndLIC(self) -> None\nC++: void CombineColorsAndLIC()\n\n"},
  {"CopyToScreen", PyvtkSurfaceLICInterface_CopyToScreen, METH_VARARGS,
   "CopyToScreen(self) -> None\nC++: void CopyToScreen()\n\n"},
  {"SetEnable", PyvtkSurfaceLICInterface_SetEnable, METH_VARARGS,
   "SetEnable(self, _arg:int) -> None\nC++: virtual void SetEnable(int _arg)\n\nEnable/Disable LIC.\n"},
  {"GetEnable", PyvtkSurfaceLICInterface_GetEnable, METH_VARARGS,
   "GetEnable(self) -> int\nC++: virtual int GetEnable()\n\n"},
  {"EnableOn", PyvtkSurfaceLICInterface_EnableOn, METH_VARARGS,
   "EnableOn(self) -> None\nC++: virtual void EnableOn()\n\n"},
  {"EnableOff", PyvtkSurfaceLICInterface_EnableOff, METH_VARARGS,
   "EnableOff(self) -> None\nC++: virtual void EnableOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSurfaceLICInterface_Doc =
  "vtkSurfaceLICInterface - public API for surface lic parameters\n arbitrary geometry.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSurfaceLICInterface performs LIC on the surface of arbitrary\n"
  " geometry. Point vectors are used as the vector field for generating\n"
  "the LIC.\n"
  " The implementation was originallu  based on \"Image Space Based\n"
  "Visualization\n"
  " on Unsteady Flow on Surfaces\" by Laramee, Jobard and Hauser appeared\n"
  "in\n"
  " proceedings of IEEE Visualization '03, pages 131-138.\n\n\n"
  " Internal pipeline:\n\n"
  "noise\n"
  "    |\n"
  "    [ PROJ (GAT) (COMP) LIC2D (SCAT) SHADE (CCE) DEP]\n"
  "    |                                               | vectors        \n"
  "                                surface LIC  PROj  - project vectors\n"
  "onto surface GAT   - gather data for compositing and guard pixel\n"
  "generation  (parallel only) COMP  - composite gathered data LIC2D -\n"
  "line intengral convolution, see vtkLineIntegralConvolution2D. SCAT  -\n"
  "scatter result (parallel only, not all compositors use it) SHADE -\n"
  "combine LIC and scalar colors CCE   - color contrast enhancement\n"
  "(optional) DEP   - depth test and copy to back buffer\n\n"
  "The result of each stage is cached in a texture so that during\n"
  "interaction a stage may be skipped if the user has not modified its\n"
  "parameters or input data.\n\n"
  "The parallel parts of algorithm are implemented in\n"
  "vtkPSurfaceLICInterface. Note that for MPI enabled builds this class\n"
  "will be automatically created by the object factory.\n\n"
  "@sa\n"
  "vtkLineIntegralConvolution2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceLICInterface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLICOpenGL2.vtkSurfaceLICInterface", // tp_name
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
  PyvtkSurfaceLICInterface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceLICInterface_StaticNew()
{
  return vtkSurfaceLICInterface::New();
}

PyObject *PyvtkSurfaceLICInterface_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSurfaceLICInterface_Type, PyvtkSurfaceLICInterface_Methods,
    "vtkSurfaceLICInterface",
 &PyvtkSurfaceLICInterface_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 13; c++)
  {
    static const struct { const char *name; int value; }
      constants[13] = {
        { "ENHANCE_CONTRAST_OFF", vtkSurfaceLICInterface::ENHANCE_CONTRAST_OFF },
        { "ENHANCE_CONTRAST_LIC", vtkSurfaceLICInterface::ENHANCE_CONTRAST_LIC },
        { "ENHANCE_CONTRAST_COLOR", vtkSurfaceLICInterface::ENHANCE_CONTRAST_COLOR },
        { "ENHANCE_CONTRAST_BOTH", vtkSurfaceLICInterface::ENHANCE_CONTRAST_BOTH },
        { "COLOR_MODE_BLEND", vtkSurfaceLICInterface::COLOR_MODE_BLEND },
        { "COLOR_MODE_MAP", vtkSurfaceLICInterface::COLOR_MODE_MAP },
        { "NOISE_TYPE_UNIFORM", vtkSurfaceLICInterface::NOISE_TYPE_UNIFORM },
        { "NOISE_TYPE_GAUSSIAN", vtkSurfaceLICInterface::NOISE_TYPE_GAUSSIAN },
        { "NOISE_TYPE_PERLIN", vtkSurfaceLICInterface::NOISE_TYPE_PERLIN },
        { "COMPOSITE_INPLACE", vtkSurfaceLICInterface::COMPOSITE_INPLACE },
        { "COMPOSITE_INPLACE_DISJOINT", vtkSurfaceLICInterface::COMPOSITE_INPLACE_DISJOINT },
        { "COMPOSITE_BALANCED", vtkSurfaceLICInterface::COMPOSITE_BALANCED },
        { "COMPOSITE_AUTO", vtkSurfaceLICInterface::COMPOSITE_AUTO },
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

void PyVTKAddFile_vtkSurfaceLICInterface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceLICInterface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceLICInterface", o) != 0)
  {
    Py_DECREF(o);
  }

}

