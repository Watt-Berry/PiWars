// python wrapper for vtkTemporalFractal
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTemporalFractal.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTemporalFractal(PyObject *dict); }
extern "C" { PyObject *PyvtkTemporalFractal_ClassNew(); }


static PyObject *
PyvtkTemporalFractal_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTemporalFractal::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTemporalFractal::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTemporalFractal *tempr = vtkTemporalFractal::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTemporalFractal *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTemporalFractal::NewInstance());

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
PyvtkTemporalFractal_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTemporalFractal::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTemporalFractal::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFractalValue(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetFractalValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetFractalValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFractalValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFractalValue() :
      op->vtkTemporalFractal::GetFractalValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumLevel(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetMaximumLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetMaximumLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumLevel() :
      op->vtkTemporalFractal::GetMaximumLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkTemporalFractal::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostLevels(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetGhostLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetGhostLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGhostLevels() :
      op->vtkTemporalFractal::GetGhostLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GhostLevelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GhostLevelsOn();
    }
    else
    {
      op->vtkTemporalFractal::GhostLevelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GhostLevelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GhostLevelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GhostLevelsOff();
    }
    else
    {
      op->vtkTemporalFractal::GhostLevelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateRectilinearGrids(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetGenerateRectilinearGrids(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetGenerateRectilinearGrids(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateRectilinearGrids");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateRectilinearGrids() :
      op->vtkTemporalFractal::GetGenerateRectilinearGrids());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GenerateRectilinearGridsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRectilinearGridsOn();
    }
    else
    {
      op->vtkTemporalFractal::GenerateRectilinearGridsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GenerateRectilinearGridsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRectilinearGridsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRectilinearGridsOff();
    }
    else
    {
      op->vtkTemporalFractal::GenerateRectilinearGridsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetDiscreteTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiscreteTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiscreteTimeSteps(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetDiscreteTimeSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetDiscreteTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscreteTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDiscreteTimeSteps() :
      op->vtkTemporalFractal::GetDiscreteTimeSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_DiscreteTimeStepsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscreteTimeStepsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DiscreteTimeStepsOn();
    }
    else
    {
      op->vtkTemporalFractal::DiscreteTimeStepsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_DiscreteTimeStepsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscreteTimeStepsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DiscreteTimeStepsOff();
    }
    else
    {
      op->vtkTemporalFractal::DiscreteTimeStepsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwoDimensional(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetTwoDimensional(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetTwoDimensional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoDimensional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwoDimensional() :
      op->vtkTemporalFractal::GetTwoDimensional());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_TwoDimensionalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoDimensionalOn();
    }
    else
    {
      op->vtkTemporalFractal::TwoDimensionalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_TwoDimensionalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoDimensionalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoDimensionalOff();
    }
    else
    {
      op->vtkTemporalFractal::TwoDimensionalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetAsymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAsymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAsymmetric(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetAsymmetric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetAsymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAsymmetric() :
      op->vtkTemporalFractal::GetAsymmetric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_SetAdaptiveSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdaptiveSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdaptiveSubdivision(temp0);
    }
    else
    {
      op->vtkTemporalFractal::SetAdaptiveSubdivision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_GetAdaptiveSubdivision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdaptiveSubdivision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdaptiveSubdivision() :
      op->vtkTemporalFractal::GetAdaptiveSubdivision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_AdaptiveSubdivisionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveSubdivisionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdaptiveSubdivisionOn();
    }
    else
    {
      op->vtkTemporalFractal::AdaptiveSubdivisionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTemporalFractal_AdaptiveSubdivisionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveSubdivisionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalFractal *op = static_cast<vtkTemporalFractal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdaptiveSubdivisionOff();
    }
    else
    {
      op->vtkTemporalFractal::AdaptiveSubdivisionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTemporalFractal_Methods[] = {
  {"IsTypeOf", PyvtkTemporalFractal_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTemporalFractal_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTemporalFractal_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTemporalFractal\nC++: static vtkTemporalFractal *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTemporalFractal_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTemporalFractal\nC++: vtkTemporalFractal *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTemporalFractal_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTemporalFractal_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFractalValue", PyvtkTemporalFractal_SetFractalValue, METH_VARARGS,
   "SetFractalValue(self, _arg:float) -> None\nC++: virtual void SetFractalValue(float _arg)\n\nEssentially the iso surface value.  The fractal array is scaled\nto map this value to 0.5 for use as a volume fraction.\n"},
  {"GetFractalValue", PyvtkTemporalFractal_GetFractalValue, METH_VARARGS,
   "GetFractalValue(self) -> float\nC++: virtual float GetFractalValue()\n\n"},
  {"SetMaximumLevel", PyvtkTemporalFractal_SetMaximumLevel, METH_VARARGS,
   "SetMaximumLevel(self, _arg:int) -> None\nC++: virtual void SetMaximumLevel(int _arg)\n\nAny blocks touching a predefined line will be subdivided to this\nlevel. Other blocks are subdivided so that neighboring blocks\nonly differ by one level.\n"},
  {"GetMaximumLevel", PyvtkTemporalFractal_GetMaximumLevel, METH_VARARGS,
   "GetMaximumLevel(self) -> int\nC++: virtual int GetMaximumLevel()\n\n"},
  {"SetDimensions", PyvtkTemporalFractal_SetDimensions, METH_VARARGS,
   "SetDimensions(self, _arg:int) -> None\nC++: virtual void SetDimensions(int _arg)\n\nXYZ dimensions of cells.\n"},
  {"GetDimensions", PyvtkTemporalFractal_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> int\nC++: virtual int GetDimensions()\n\n"},
  {"SetGhostLevels", PyvtkTemporalFractal_SetGhostLevels, METH_VARARGS,
   "SetGhostLevels(self, _arg:int) -> None\nC++: virtual void SetGhostLevels(vtkTypeBool _arg)\n\nFor testing ghost levels.\n"},
  {"GetGhostLevels", PyvtkTemporalFractal_GetGhostLevels, METH_VARARGS,
   "GetGhostLevels(self) -> int\nC++: virtual vtkTypeBool GetGhostLevels()\n\n"},
  {"GhostLevelsOn", PyvtkTemporalFractal_GhostLevelsOn, METH_VARARGS,
   "GhostLevelsOn(self) -> None\nC++: virtual void GhostLevelsOn()\n\n"},
  {"GhostLevelsOff", PyvtkTemporalFractal_GhostLevelsOff, METH_VARARGS,
   "GhostLevelsOff(self) -> None\nC++: virtual void GhostLevelsOff()\n\n"},
  {"SetGenerateRectilinearGrids", PyvtkTemporalFractal_SetGenerateRectilinearGrids, METH_VARARGS,
   "SetGenerateRectilinearGrids(self, _arg:int) -> None\nC++: virtual void SetGenerateRectilinearGrids(vtkTypeBool _arg)\n\nGenerate either rectilinear grids either uniform grids. Default\nis false.\n"},
  {"GetGenerateRectilinearGrids", PyvtkTemporalFractal_GetGenerateRectilinearGrids, METH_VARARGS,
   "GetGenerateRectilinearGrids(self) -> int\nC++: virtual vtkTypeBool GetGenerateRectilinearGrids()\n\n"},
  {"GenerateRectilinearGridsOn", PyvtkTemporalFractal_GenerateRectilinearGridsOn, METH_VARARGS,
   "GenerateRectilinearGridsOn(self) -> None\nC++: virtual void GenerateRectilinearGridsOn()\n\n"},
  {"GenerateRectilinearGridsOff", PyvtkTemporalFractal_GenerateRectilinearGridsOff, METH_VARARGS,
   "GenerateRectilinearGridsOff(self) -> None\nC++: virtual void GenerateRectilinearGridsOff()\n\n"},
  {"SetDiscreteTimeSteps", PyvtkTemporalFractal_SetDiscreteTimeSteps, METH_VARARGS,
   "SetDiscreteTimeSteps(self, _arg:int) -> None\nC++: virtual void SetDiscreteTimeSteps(vtkTypeBool _arg)\n\nLimit this source to discrete integer time steps Default is off\n(continuous)\n"},
  {"GetDiscreteTimeSteps", PyvtkTemporalFractal_GetDiscreteTimeSteps, METH_VARARGS,
   "GetDiscreteTimeSteps(self) -> int\nC++: virtual vtkTypeBool GetDiscreteTimeSteps()\n\n"},
  {"DiscreteTimeStepsOn", PyvtkTemporalFractal_DiscreteTimeStepsOn, METH_VARARGS,
   "DiscreteTimeStepsOn(self) -> None\nC++: virtual void DiscreteTimeStepsOn()\n\n"},
  {"DiscreteTimeStepsOff", PyvtkTemporalFractal_DiscreteTimeStepsOff, METH_VARARGS,
   "DiscreteTimeStepsOff(self) -> None\nC++: virtual void DiscreteTimeStepsOff()\n\n"},
  {"SetTwoDimensional", PyvtkTemporalFractal_SetTwoDimensional, METH_VARARGS,
   "SetTwoDimensional(self, _arg:int) -> None\nC++: virtual void SetTwoDimensional(vtkTypeBool _arg)\n\nMake a 2D data set to test.\n"},
  {"GetTwoDimensional", PyvtkTemporalFractal_GetTwoDimensional, METH_VARARGS,
   "GetTwoDimensional(self) -> int\nC++: virtual vtkTypeBool GetTwoDimensional()\n\n"},
  {"TwoDimensionalOn", PyvtkTemporalFractal_TwoDimensionalOn, METH_VARARGS,
   "TwoDimensionalOn(self) -> None\nC++: virtual void TwoDimensionalOn()\n\n"},
  {"TwoDimensionalOff", PyvtkTemporalFractal_TwoDimensionalOff, METH_VARARGS,
   "TwoDimensionalOff(self) -> None\nC++: virtual void TwoDimensionalOff()\n\n"},
  {"SetAsymmetric", PyvtkTemporalFractal_SetAsymmetric, METH_VARARGS,
   "SetAsymmetric(self, _arg:int) -> None\nC++: virtual void SetAsymmetric(int _arg)\n\nTest the case when the blocks do not have the same sizes. Adds 2\nto the x extent of the far x blocks (level 1).\n"},
  {"GetAsymmetric", PyvtkTemporalFractal_GetAsymmetric, METH_VARARGS,
   "GetAsymmetric(self) -> int\nC++: virtual int GetAsymmetric()\n\n"},
  {"SetAdaptiveSubdivision", PyvtkTemporalFractal_SetAdaptiveSubdivision, METH_VARARGS,
   "SetAdaptiveSubdivision(self, _arg:int) -> None\nC++: virtual void SetAdaptiveSubdivision(vtkTypeBool _arg)\n\nMake the division adaptive or not, defaults to Adaptive\n"},
  {"GetAdaptiveSubdivision", PyvtkTemporalFractal_GetAdaptiveSubdivision, METH_VARARGS,
   "GetAdaptiveSubdivision(self) -> int\nC++: virtual vtkTypeBool GetAdaptiveSubdivision()\n\n"},
  {"AdaptiveSubdivisionOn", PyvtkTemporalFractal_AdaptiveSubdivisionOn, METH_VARARGS,
   "AdaptiveSubdivisionOn(self) -> None\nC++: virtual void AdaptiveSubdivisionOn()\n\n"},
  {"AdaptiveSubdivisionOff", PyvtkTemporalFractal_AdaptiveSubdivisionOff, METH_VARARGS,
   "AdaptiveSubdivisionOff(self) -> None\nC++: virtual void AdaptiveSubdivisionOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTemporalFractal_Doc =
  "vtkTemporalFractal - A source to test AMR data object.\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkTemporalFractal is a collection of uniform grids.  All have the\n"
  "same dimensions. Each block has a different origin and spacing.  It\n"
  "uses mandelbrot to create cell data. The fractal array is scaled to\n"
  "look like a volume fraction.\n\n"
  "I may also add block id and level as extra cell arrays. This source\n"
  "produces a vtkHierarchicalBoxDataSet when GenerateRectilinearGrids is\n"
  "off, otherwise produces a vtkMultiBlockDataSet.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTemporalFractal_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkTemporalFractal", // tp_name
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
  PyvtkTemporalFractal_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTemporalFractal_StaticNew()
{
  return vtkTemporalFractal::New();
}

PyObject *PyvtkTemporalFractal_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTemporalFractal_Type, PyvtkTemporalFractal_Methods,
    "vtkTemporalFractal",
 &PyvtkTemporalFractal_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTemporalFractal(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTemporalFractal_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTemporalFractal", o) != 0)
  {
    Py_DECREF(o);
  }

}

