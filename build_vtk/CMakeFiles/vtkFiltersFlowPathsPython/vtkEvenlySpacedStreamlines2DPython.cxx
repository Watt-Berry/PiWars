// python wrapper for vtkEvenlySpacedStreamlines2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEvenlySpacedStreamlines2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEvenlySpacedStreamlines2D(PyObject *dict); }
extern "C" { PyObject *PyvtkEvenlySpacedStreamlines2D_ClassNew(); }


static PyObject *
PyvtkEvenlySpacedStreamlines2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEvenlySpacedStreamlines2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEvenlySpacedStreamlines2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEvenlySpacedStreamlines2D *tempr = vtkEvenlySpacedStreamlines2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEvenlySpacedStreamlines2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEvenlySpacedStreamlines2D::NewInstance());

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
PyvtkEvenlySpacedStreamlines2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEvenlySpacedStreamlines2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEvenlySpacedStreamlines2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

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
      op->SetStartPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetStartPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStartPosition(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetStartPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkEvenlySpacedStreamlines2D_SetStartPosition_s1(self, args);
    case 1:
      return PyvtkEvenlySpacedStreamlines2D_SetStartPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return nullptr;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStartPosition() :
      op->vtkEvenlySpacedStreamlines2D::GetStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  vtkInitialValueProblemSolver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInitialValueProblemSolver"))
  {
    if (ap.IsBound())
    {
      op->SetIntegrator(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkEvenlySpacedStreamlines2D::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorType(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetIntegratorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegratorType() :
      op->vtkEvenlySpacedStreamlines2D::GetIntegratorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetIntegratorTypeToRungeKutta2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta2();
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetIntegratorTypeToRungeKutta2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetIntegratorTypeToRungeKutta4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta4();
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetIntegratorTypeToRungeKutta4();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetInterpolatorTypeToDataSetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToDataSetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToDataSetPointLocator();
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetInterpolatorTypeToDataSetPointLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetInterpolatorTypeToCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToCellLocator();
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetInterpolatorTypeToCellLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationStepUnit(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetIntegrationStepUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationStepUnit() :
      op->vtkEvenlySpacedStreamlines2D::GetIntegrationStepUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSteps(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetMaximumNumberOfSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSteps() :
      op->vtkEvenlySpacedStreamlines2D::GetMaximumNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetMinimumNumberOfLoopPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumNumberOfLoopPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumNumberOfLoopPoints(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetMinimumNumberOfLoopPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetMinimumNumberOfLoopPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumNumberOfLoopPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMinimumNumberOfLoopPoints() :
      op->vtkEvenlySpacedStreamlines2D::GetMinimumNumberOfLoopPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialIntegrationStep(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetInitialIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInitialIntegrationStep() :
      op->vtkEvenlySpacedStreamlines2D::GetInitialIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetSeparatingDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeparatingDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeparatingDistance(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetSeparatingDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetSeparatingDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeparatingDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSeparatingDistance() :
      op->vtkEvenlySpacedStreamlines2D::GetSeparatingDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetSeparatingDistanceRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeparatingDistanceRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeparatingDistanceRatio(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetSeparatingDistanceRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetSeparatingDistanceRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeparatingDistanceRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSeparatingDistanceRatio() :
      op->vtkEvenlySpacedStreamlines2D::GetSeparatingDistanceRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetClosedLoopMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosedLoopMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosedLoopMaximumDistance(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetClosedLoopMaximumDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetClosedLoopMaximumDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosedLoopMaximumDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetClosedLoopMaximumDistance() :
      op->vtkEvenlySpacedStreamlines2D::GetClosedLoopMaximumDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetLoopAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoopAngle(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetLoopAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetLoopAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLoopAngle() :
      op->vtkEvenlySpacedStreamlines2D::GetLoopAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminalSpeed(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetTerminalSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalSpeed() :
      op->vtkEvenlySpacedStreamlines2D::GetTerminalSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVorticity(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkEvenlySpacedStreamlines2D::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetInterpolatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorPrototype(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetInterpolatorPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvenlySpacedStreamlines2D_SetInterpolatorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvenlySpacedStreamlines2D *op = static_cast<vtkEvenlySpacedStreamlines2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorType(temp0);
    }
    else
    {
      op->vtkEvenlySpacedStreamlines2D::SetInterpolatorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkEvenlySpacedStreamlines2D_Methods[] = {
  {"IsTypeOf", PyvtkEvenlySpacedStreamlines2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEvenlySpacedStreamlines2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEvenlySpacedStreamlines2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEvenlySpacedStreamlines2D\nC++: static vtkEvenlySpacedStreamlines2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEvenlySpacedStreamlines2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEvenlySpacedStreamlines2D\nC++: vtkEvenlySpacedStreamlines2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEvenlySpacedStreamlines2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEvenlySpacedStreamlines2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetStartPosition", PyvtkEvenlySpacedStreamlines2D_SetStartPosition, METH_VARARGS,
   "SetStartPosition(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetStartPosition(double _arg1, double _arg2,\n    double _arg3)\nSetStartPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetStartPosition(const double _arg[3])\n\nSpecify the starting point (seed) of the first streamline in the\nglobal coordinate system. Search must be performed to find the\ninitial cell from which to start integration. If the seed is not\nspecified a random position in the input data is chosen.\n"},
  {"GetStartPosition", PyvtkEvenlySpacedStreamlines2D_GetStartPosition, METH_VARARGS,
   "GetStartPosition(self) -> (float, float, float)\nC++: virtual double *GetStartPosition()\n\n"},
  {"SetIntegrator", PyvtkEvenlySpacedStreamlines2D_SetIntegrator, METH_VARARGS,
   "SetIntegrator(self, __a:vtkInitialValueProblemSolver) -> None\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1\n"},
  {"GetIntegrator", PyvtkEvenlySpacedStreamlines2D_GetIntegrator, METH_VARARGS,
   "GetIntegrator(self) -> vtkInitialValueProblemSolver\nC++: virtual vtkInitialValueProblemSolver *GetIntegrator()\n\n"},
  {"SetIntegratorType", PyvtkEvenlySpacedStreamlines2D_SetIntegratorType, METH_VARARGS,
   "SetIntegratorType(self, type:int) -> None\nC++: void SetIntegratorType(int type)\n\n"},
  {"GetIntegratorType", PyvtkEvenlySpacedStreamlines2D_GetIntegratorType, METH_VARARGS,
   "GetIntegratorType(self) -> int\nC++: int GetIntegratorType()\n\n"},
  {"SetIntegratorTypeToRungeKutta2", PyvtkEvenlySpacedStreamlines2D_SetIntegratorTypeToRungeKutta2, METH_VARARGS,
   "SetIntegratorTypeToRungeKutta2(self) -> None\nC++: void SetIntegratorTypeToRungeKutta2()\n\n"},
  {"SetIntegratorTypeToRungeKutta4", PyvtkEvenlySpacedStreamlines2D_SetIntegratorTypeToRungeKutta4, METH_VARARGS,
   "SetIntegratorTypeToRungeKutta4(self) -> None\nC++: void SetIntegratorTypeToRungeKutta4()\n\n"},
  {"SetInterpolatorTypeToDataSetPointLocator", PyvtkEvenlySpacedStreamlines2D_SetInterpolatorTypeToDataSetPointLocator, METH_VARARGS,
   "SetInterpolatorTypeToDataSetPointLocator(self) -> None\nC++: void SetInterpolatorTypeToDataSetPointLocator()\n\nSet the velocity field interpolator type to the one involving a\ndataset point locator.\n"},
  {"SetInterpolatorTypeToCellLocator", PyvtkEvenlySpacedStreamlines2D_SetInterpolatorTypeToCellLocator, METH_VARARGS,
   "SetInterpolatorTypeToCellLocator(self) -> None\nC++: void SetInterpolatorTypeToCellLocator()\n\nSet the velocity field interpolator type to the one involving a\ncell locator.\n"},
  {"SetIntegrationStepUnit", PyvtkEvenlySpacedStreamlines2D_SetIntegrationStepUnit, METH_VARARGS,
   "SetIntegrationStepUnit(self, unit:int) -> None\nC++: void SetIntegrationStepUnit(int unit)\n\nSpecify a uniform integration step unit for\nInitialIntegrationStep, and SeparatingDistance. Valid units are\nLENGTH_UNIT (1) (value is in global coordinates) and\nCELL_LENGTH_UNIT (2) (the value is in number of cell lengths)\n"},
  {"GetIntegrationStepUnit", PyvtkEvenlySpacedStreamlines2D_GetIntegrationStepUnit, METH_VARARGS,
   "GetIntegrationStepUnit(self) -> int\nC++: int GetIntegrationStepUnit()\n\n"},
  {"SetMaximumNumberOfSteps", PyvtkEvenlySpacedStreamlines2D_SetMaximumNumberOfSteps, METH_VARARGS,
   "SetMaximumNumberOfSteps(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfSteps(vtkIdType _arg)\n\nSpecify the maximum number of steps for integrating a streamline.\n"},
  {"GetMaximumNumberOfSteps", PyvtkEvenlySpacedStreamlines2D_GetMaximumNumberOfSteps, METH_VARARGS,
   "GetMaximumNumberOfSteps(self) -> int\nC++: virtual vtkIdType GetMaximumNumberOfSteps()\n\n"},
  {"SetMinimumNumberOfLoopPoints", PyvtkEvenlySpacedStreamlines2D_SetMinimumNumberOfLoopPoints, METH_VARARGS,
   "SetMinimumNumberOfLoopPoints(self, _arg:int) -> None\nC++: virtual void SetMinimumNumberOfLoopPoints(vtkIdType _arg)\n\nWe don't try to eliminate loops with fewer points than this.\nDefault value is 4.\n"},
  {"GetMinimumNumberOfLoopPoints", PyvtkEvenlySpacedStreamlines2D_GetMinimumNumberOfLoopPoints, METH_VARARGS,
   "GetMinimumNumberOfLoopPoints(self) -> int\nC++: virtual vtkIdType GetMinimumNumberOfLoopPoints()\n\n"},
  {"SetInitialIntegrationStep", PyvtkEvenlySpacedStreamlines2D_SetInitialIntegrationStep, METH_VARARGS,
   "SetInitialIntegrationStep(self, _arg:float) -> None\nC++: virtual void SetInitialIntegrationStep(double _arg)\n\nSpecify the Initial step size used for line integration,\nexpressed in IntegrationStepUnit\n\nThis is the constant / fixed size for non-adaptive integration\nmethods, i.e., RK2 and RK4\n"},
  {"GetInitialIntegrationStep", PyvtkEvenlySpacedStreamlines2D_GetInitialIntegrationStep, METH_VARARGS,
   "GetInitialIntegrationStep(self) -> float\nC++: virtual double GetInitialIntegrationStep()\n\n"},
  {"SetSeparatingDistance", PyvtkEvenlySpacedStreamlines2D_SetSeparatingDistance, METH_VARARGS,
   "SetSeparatingDistance(self, _arg:float) -> None\nC++: virtual void SetSeparatingDistance(double _arg)\n\nSpecify the separation distance between streamlines expressed in\nIntegrationStepUnit.\n"},
  {"GetSeparatingDistance", PyvtkEvenlySpacedStreamlines2D_GetSeparatingDistance, METH_VARARGS,
   "GetSeparatingDistance(self) -> float\nC++: virtual double GetSeparatingDistance()\n\n"},
  {"SetSeparatingDistanceRatio", PyvtkEvenlySpacedStreamlines2D_SetSeparatingDistanceRatio, METH_VARARGS,
   "SetSeparatingDistanceRatio(self, _arg:float) -> None\nC++: virtual void SetSeparatingDistanceRatio(double _arg)\n\nStreamline integration is stopped if streamlines are closer than\nSeparatingDistance*SeparatingDistanceRatio to other streamlines.\n"},
  {"GetSeparatingDistanceRatio", PyvtkEvenlySpacedStreamlines2D_GetSeparatingDistanceRatio, METH_VARARGS,
   "GetSeparatingDistanceRatio(self) -> float\nC++: virtual double GetSeparatingDistanceRatio()\n\n"},
  {"SetClosedLoopMaximumDistance", PyvtkEvenlySpacedStreamlines2D_SetClosedLoopMaximumDistance, METH_VARARGS,
   "SetClosedLoopMaximumDistance(self, _arg:float) -> None\nC++: virtual void SetClosedLoopMaximumDistance(double _arg)\n\nLoops are considered closed if the have two points at distance\nless than this. This is expressed in IntegrationStepUnit.\n"},
  {"GetClosedLoopMaximumDistance", PyvtkEvenlySpacedStreamlines2D_GetClosedLoopMaximumDistance, METH_VARARGS,
   "GetClosedLoopMaximumDistance(self) -> float\nC++: virtual double GetClosedLoopMaximumDistance()\n\n"},
  {"SetLoopAngle", PyvtkEvenlySpacedStreamlines2D_SetLoopAngle, METH_VARARGS,
   "SetLoopAngle(self, _arg:float) -> None\nC++: virtual void SetLoopAngle(double _arg)\n\nThe angle (in radians) between the vector created by p0p1 and the\nvelocity in the point closing the loop. p0 is the current point\nand p1 is the point before that.  Default value is 20 degrees in\nradians.\n"},
  {"GetLoopAngle", PyvtkEvenlySpacedStreamlines2D_GetLoopAngle, METH_VARARGS,
   "GetLoopAngle(self) -> float\nC++: virtual double GetLoopAngle()\n\n"},
  {"SetTerminalSpeed", PyvtkEvenlySpacedStreamlines2D_SetTerminalSpeed, METH_VARARGS,
   "SetTerminalSpeed(self, _arg:float) -> None\nC++: virtual void SetTerminalSpeed(double _arg)\n\nSpecify the terminal speed value, below which integration is\nterminated.\n"},
  {"GetTerminalSpeed", PyvtkEvenlySpacedStreamlines2D_GetTerminalSpeed, METH_VARARGS,
   "GetTerminalSpeed(self) -> float\nC++: virtual double GetTerminalSpeed()\n\n"},
  {"SetComputeVorticity", PyvtkEvenlySpacedStreamlines2D_SetComputeVorticity, METH_VARARGS,
   "SetComputeVorticity(self, _arg:bool) -> None\nC++: virtual void SetComputeVorticity(bool _arg)\n\nTurn on/off vorticity computation at streamline points (necessary\nfor generating proper stream-ribbons using the vtkRibbonFilter.\n"},
  {"GetComputeVorticity", PyvtkEvenlySpacedStreamlines2D_GetComputeVorticity, METH_VARARGS,
   "GetComputeVorticity(self) -> bool\nC++: virtual bool GetComputeVorticity()\n\n"},
  {"SetInterpolatorPrototype", PyvtkEvenlySpacedStreamlines2D_SetInterpolatorPrototype, METH_VARARGS,
   "SetInterpolatorPrototype(self,\n    ivf:vtkAbstractInterpolatedVelocityField) -> None\nC++: void SetInterpolatorPrototype(\n    vtkAbstractInterpolatedVelocityField *ivf)\n\nThe object used to interpolate the velocity field during\nintegration is of the same class as this prototype.\n"},
  {"SetInterpolatorType", PyvtkEvenlySpacedStreamlines2D_SetInterpolatorType, METH_VARARGS,
   "SetInterpolatorType(self, interpType:int) -> None\nC++: void SetInterpolatorType(int interpType)\n\nSet the type of the velocity field interpolator to determine\nwhether INTERPOLATOR_WITH_DATASET_POINT_LOCATOR or\nINTERPOLATOR_WITH_CELL_LOCATOR is employed for locating cells\nduring streamline integration. The latter (adopting\nvtkAbstractCellLocator sub-classes such as vtkCellLocator and\nvtkModifiedBSPTree) is more robust then the former (through\nvtkDataSet / vtkPointSet::FindCell() coupled with\nvtkPointLocator).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEvenlySpacedStreamlines2D_Doc =
  "vtkEvenlySpacedStreamlines2D - Evenly spaced streamline generator for\n2D.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkEvenlySpacedStreamlines2D is a filter that integrates a 2D vector\n"
  "field to generate evenly-spaced streamlines.\n\n"
  "We implement the algorithm described in: Jobard, Bruno, and Wilfrid\n"
  "Lefer. \"Creating evenly-spaced streamlines of arbitrary density.\"\n"
  "Visualization in Scientific Computing '97. Springer Vienna, 1997.\n"
  "43-55. The loop detection is described in: Liu, Zhanping, Robert\n"
  "Moorhead, and Joe Groner. \"An advanced evenly-spaced streamline placement\n"
  "algorithm.\" IEEE Transactions on Visualization and Computer Graphics\n"
  "12.5 (2006): 965-972.\n\n"
  "The integration is performed using a specified integrator, by default\n"
  "Runge-Kutta2.\n\n"
  "vtkEvenlySpacedStreamlines2D produces polylines as the output, with\n"
  "each cell (i.e., polyline) representing a streamline. The attribute\n"
  "values associated with each streamline are stored in the cell data,\n"
  "whereas those associated with streamline-points are stored in the\n"
  "point data.\n\n"
  "vtkEvenlySpacedStreamlines2D integrates streamlines both forward and\n"
  "backward. The integration for a streamline terminates upon exiting\n"
  "the flow field domain, or if the particle speed is reduced to a value\n"
  "less than a specified terminal speed, if the current streamline gets\n"
  "too close to other streamlines\n"
  "(vtkStreamTracer::FIXED_REASONS_FOR_TERMINATION_COUNT + 1) or if the\n"
  "streamline forms a loop\n"
  "(vtkStreamTracer::FIXED_REASONS_FOR_TERMINATION_COUNT). The specific\n"
  "reason for the termination is stored in a cell array named\n"
  "ReasonForTermination.\n\n"
  "Note that normalized vectors are adopted in streamline integration,\n"
  "which achieves high numerical accuracy/smoothness of flow lines that\n"
  "is particularly guaranteed for Runge-Kutta45 with adaptive step size\n"
  "and error control). In support of this feature, the underlying step\n"
  "size is ALWAYS in arc length unit (LENGTH_UNIT) while the 'real' time\n"
  "interval (virtual for steady flows) that a particle actually takes to\n"
  "trave in a single step is obtained by dividing the arc length by the\n"
  "LOCAL speed. The overall elapsed time (i.e., the life span) of the\n"
  "particle is the sum of those individual step-wise time intervals.\n\n"
  "The quality of streamline integration can be controlled by setting\n"
  "the initial integration step (InitialIntegrationStep), particularly\n"
  "for Runge-Kutta2 and Runge-Kutta4 (with a fixed step size). We do not\n"
  "support Runge-Kutta45 (with an adaptive step size and error control)\n"
  "because a requirement of the algorithm is that sample points along a\n"
  "streamline be evenly spaced. These steps are in either LENGTH_UNIT or\n"
  "CELL_LENGTH_UNIT.\n\n"
  "The integration time, vorticity, rotation and angular velocity are\n"
  "stored in point data arrays named \"IntegrationTime\", \"Vorticity\",\n"
  "\"Rotation\" and \"AngularVelocity\", respectively (vorticity, rotation\n"
  "and angular velocity are computed only when ComputeVorticity is on).\n"
  "All point data attributes in the source dataset are interpolated on\n"
  "the new streamline points.\n\n"
  "vtkEvenlySpacedStreamlines2D supports integration through any type of\n"
  "2D dataset.\n\n"
  "The starting point, or the so-called 'seed', of the first streamline\n"
  "is set by setting StartPosition\n\n"
  "@sa\n"
  "vtkStreamTracer vtkRibbonFilter vtkRuledSurfaceFilter\n"
  "vtkInitialValueProblemSolver vtkRungeKutta2 vtkRungeKutta4\n"
  "vtkRungeKutta45 vtkParticleTracerBase vtkParticleTracer\n"
  "vtkParticlePathFilter vtkStreaklineFilter\n"
  "vtkAbstractInterpolatedVelocityField\n"
  "vtkCompositeInterpolatedVelocityField vtkAMRInterpolatedVelocityField\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEvenlySpacedStreamlines2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkEvenlySpacedStreamlines2D", // tp_name
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
  PyvtkEvenlySpacedStreamlines2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEvenlySpacedStreamlines2D_StaticNew()
{
  return vtkEvenlySpacedStreamlines2D::New();
}

PyObject *PyvtkEvenlySpacedStreamlines2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEvenlySpacedStreamlines2D_Type, PyvtkEvenlySpacedStreamlines2D_Methods,
    "vtkEvenlySpacedStreamlines2D",
 &PyvtkEvenlySpacedStreamlines2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEvenlySpacedStreamlines2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEvenlySpacedStreamlines2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEvenlySpacedStreamlines2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

