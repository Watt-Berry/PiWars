// python wrapper for vtkForceDirectedLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkForceDirectedLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkForceDirectedLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkForceDirectedLayoutStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkForceDirectedLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkForceDirectedLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkForceDirectedLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkForceDirectedLayoutStrategy *tempr = vtkForceDirectedLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkForceDirectedLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkForceDirectedLayoutStrategy::NewInstance());

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
PyvtkForceDirectedLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkForceDirectedLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkForceDirectedLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomSeed(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetRandomSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetRandomSeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeedMinValue() :
      op->vtkForceDirectedLayoutStrategy::GetRandomSeedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetRandomSeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeedMaxValue() :
      op->vtkForceDirectedLayoutStrategy::GetRandomSeedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeed() :
      op->vtkForceDirectedLayoutStrategy::GetRandomSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetGraphBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetGraphBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkForceDirectedLayoutStrategy_SetGraphBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGraphBounds(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetGraphBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkForceDirectedLayoutStrategy_SetGraphBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkForceDirectedLayoutStrategy_SetGraphBounds_s1(self, args);
    case 1:
      return PyvtkForceDirectedLayoutStrategy_SetGraphBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGraphBounds");
  return nullptr;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGraphBounds() :
      op->vtkForceDirectedLayoutStrategy::GetGraphBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticBoundsComputation(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetAutomaticBoundsComputation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetAutomaticBoundsComputation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticBoundsComputation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticBoundsComputation() :
      op->vtkForceDirectedLayoutStrategy::GetAutomaticBoundsComputation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_AutomaticBoundsComputationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBoundsComputationOn();
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::AutomaticBoundsComputationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_AutomaticBoundsComputationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticBoundsComputationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticBoundsComputationOff();
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::AutomaticBoundsComputationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumberOfIterations(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetMaxNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMinValue() :
      op->vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMaxValue() :
      op->vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterations() :
      op->vtkForceDirectedLayoutStrategy::GetMaxNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetIterationsPerLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationsPerLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIterationsPerLayout(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetIterationsPerLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayoutMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayoutMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationsPerLayoutMinValue() :
      op->vtkForceDirectedLayoutStrategy::GetIterationsPerLayoutMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayoutMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayoutMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationsPerLayoutMaxValue() :
      op->vtkForceDirectedLayoutStrategy::GetIterationsPerLayoutMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationsPerLayout() :
      op->vtkForceDirectedLayoutStrategy::GetIterationsPerLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoolDownRate(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetCoolDownRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetCoolDownRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMinValue() :
      op->vtkForceDirectedLayoutStrategy::GetCoolDownRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetCoolDownRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMaxValue() :
      op->vtkForceDirectedLayoutStrategy::GetCoolDownRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRate() :
      op->vtkForceDirectedLayoutStrategy::GetCoolDownRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreeDimensionalLayout(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetThreeDimensionalLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetThreeDimensionalLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeDimensionalLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThreeDimensionalLayout() :
      op->vtkForceDirectedLayoutStrategy::GetThreeDimensionalLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_ThreeDimensionalLayoutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLayoutOn();
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::ThreeDimensionalLayoutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_ThreeDimensionalLayoutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeDimensionalLayoutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThreeDimensionalLayoutOff();
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::ThreeDimensionalLayoutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetRandomInitialPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomInitialPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRandomInitialPoints(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetRandomInitialPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetRandomInitialPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomInitialPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomInitialPoints() :
      op->vtkForceDirectedLayoutStrategy::GetRandomInitialPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_RandomInitialPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomInitialPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomInitialPointsOn();
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::RandomInitialPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_RandomInitialPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RandomInitialPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RandomInitialPointsOff();
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::RandomInitialPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_SetInitialTemperature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialTemperature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialTemperature(temp0);
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::SetInitialTemperature(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetInitialTemperatureMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperatureMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetInitialTemperatureMinValue() :
      op->vtkForceDirectedLayoutStrategy::GetInitialTemperatureMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetInitialTemperatureMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperatureMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetInitialTemperatureMaxValue() :
      op->vtkForceDirectedLayoutStrategy::GetInitialTemperatureMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_GetInitialTemperature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetInitialTemperature() :
      op->vtkForceDirectedLayoutStrategy::GetInitialTemperature());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkForceDirectedLayoutStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkForceDirectedLayoutStrategy_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkForceDirectedLayoutStrategy *op = static_cast<vtkForceDirectedLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLayoutComplete() :
      op->vtkForceDirectedLayoutStrategy::IsLayoutComplete());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkForceDirectedLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkForceDirectedLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkForceDirectedLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkForceDirectedLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkForceDirectedLayoutStrategy\nC++: static vtkForceDirectedLayoutStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkForceDirectedLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkForceDirectedLayoutStrategy\nC++: vtkForceDirectedLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkForceDirectedLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkForceDirectedLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRandomSeed", PyvtkForceDirectedLayoutStrategy_SetRandomSeed, METH_VARARGS,
   "SetRandomSeed(self, _arg:int) -> None\nC++: virtual void SetRandomSeed(int _arg)\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {"GetRandomSeedMinValue", PyvtkForceDirectedLayoutStrategy_GetRandomSeedMinValue, METH_VARARGS,
   "GetRandomSeedMinValue(self) -> int\nC++: virtual int GetRandomSeedMinValue()\n\n"},
  {"GetRandomSeedMaxValue", PyvtkForceDirectedLayoutStrategy_GetRandomSeedMaxValue, METH_VARARGS,
   "GetRandomSeedMaxValue(self) -> int\nC++: virtual int GetRandomSeedMaxValue()\n\n"},
  {"GetRandomSeed", PyvtkForceDirectedLayoutStrategy_GetRandomSeed, METH_VARARGS,
   "GetRandomSeed(self) -> int\nC++: virtual int GetRandomSeed()\n\n"},
  {"SetGraphBounds", PyvtkForceDirectedLayoutStrategy_SetGraphBounds, METH_VARARGS,
   "SetGraphBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetGraphBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetGraphBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetGraphBounds(const double _arg[6])\n\nSet / get the region in space in which to place the final graph.\nThe GraphBounds only affects the results if\nAutomaticBoundsComputation is off.\n"},
  {"GetGraphBounds", PyvtkForceDirectedLayoutStrategy_GetGraphBounds, METH_VARARGS,
   "GetGraphBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetGraphBounds()\n\n"},
  {"SetAutomaticBoundsComputation", PyvtkForceDirectedLayoutStrategy_SetAutomaticBoundsComputation, METH_VARARGS,
   "SetAutomaticBoundsComputation(self, _arg:int) -> None\nC++: virtual void SetAutomaticBoundsComputation(vtkTypeBool _arg)\n\nTurn on/off automatic graph bounds calculation. If this boolean\nis off, then the manually specified GraphBounds is used. If on,\nthen the input's bounds us used as the graph bounds.\n"},
  {"GetAutomaticBoundsComputation", PyvtkForceDirectedLayoutStrategy_GetAutomaticBoundsComputation, METH_VARARGS,
   "GetAutomaticBoundsComputation(self) -> int\nC++: virtual vtkTypeBool GetAutomaticBoundsComputation()\n\n"},
  {"AutomaticBoundsComputationOn", PyvtkForceDirectedLayoutStrategy_AutomaticBoundsComputationOn, METH_VARARGS,
   "AutomaticBoundsComputationOn(self) -> None\nC++: virtual void AutomaticBoundsComputationOn()\n\n"},
  {"AutomaticBoundsComputationOff", PyvtkForceDirectedLayoutStrategy_AutomaticBoundsComputationOff, METH_VARARGS,
   "AutomaticBoundsComputationOff(self) -> None\nC++: virtual void AutomaticBoundsComputationOff()\n\n"},
  {"SetMaxNumberOfIterations", PyvtkForceDirectedLayoutStrategy_SetMaxNumberOfIterations, METH_VARARGS,
   "SetMaxNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetMaxNumberOfIterations(int _arg)\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '50' for no particular reason\n"},
  {"GetMaxNumberOfIterationsMinValue", PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterationsMinValue, METH_VARARGS,
   "GetMaxNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetMaxNumberOfIterationsMinValue()\n\n"},
  {"GetMaxNumberOfIterationsMaxValue", PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterationsMaxValue, METH_VARARGS,
   "GetMaxNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetMaxNumberOfIterationsMaxValue()\n\n"},
  {"GetMaxNumberOfIterations", PyvtkForceDirectedLayoutStrategy_GetMaxNumberOfIterations, METH_VARARGS,
   "GetMaxNumberOfIterations(self) -> int\nC++: virtual int GetMaxNumberOfIterations()\n\n"},
  {"SetIterationsPerLayout", PyvtkForceDirectedLayoutStrategy_SetIterationsPerLayout, METH_VARARGS,
   "SetIterationsPerLayout(self, _arg:int) -> None\nC++: virtual void SetIterationsPerLayout(int _arg)\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '50' to match the\ndefault 'MaxNumberOfIterations'\n"},
  {"GetIterationsPerLayoutMinValue", PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayoutMinValue, METH_VARARGS,
   "GetIterationsPerLayoutMinValue(self) -> int\nC++: virtual int GetIterationsPerLayoutMinValue()\n\n"},
  {"GetIterationsPerLayoutMaxValue", PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayoutMaxValue, METH_VARARGS,
   "GetIterationsPerLayoutMaxValue(self) -> int\nC++: virtual int GetIterationsPerLayoutMaxValue()\n\n"},
  {"GetIterationsPerLayout", PyvtkForceDirectedLayoutStrategy_GetIterationsPerLayout, METH_VARARGS,
   "GetIterationsPerLayout(self) -> int\nC++: virtual int GetIterationsPerLayout()\n\n"},
  {"SetCoolDownRate", PyvtkForceDirectedLayoutStrategy_SetCoolDownRate, METH_VARARGS,
   "SetCoolDownRate(self, _arg:float) -> None\nC++: virtual void SetCoolDownRate(double _arg)\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified.\n"},
  {"GetCoolDownRateMinValue", PyvtkForceDirectedLayoutStrategy_GetCoolDownRateMinValue, METH_VARARGS,
   "GetCoolDownRateMinValue(self) -> float\nC++: virtual double GetCoolDownRateMinValue()\n\n"},
  {"GetCoolDownRateMaxValue", PyvtkForceDirectedLayoutStrategy_GetCoolDownRateMaxValue, METH_VARARGS,
   "GetCoolDownRateMaxValue(self) -> float\nC++: virtual double GetCoolDownRateMaxValue()\n\n"},
  {"GetCoolDownRate", PyvtkForceDirectedLayoutStrategy_GetCoolDownRate, METH_VARARGS,
   "GetCoolDownRate(self) -> float\nC++: virtual double GetCoolDownRate()\n\n"},
  {"SetThreeDimensionalLayout", PyvtkForceDirectedLayoutStrategy_SetThreeDimensionalLayout, METH_VARARGS,
   "SetThreeDimensionalLayout(self, _arg:int) -> None\nC++: virtual void SetThreeDimensionalLayout(vtkTypeBool _arg)\n\nTurn on/off layout of graph in three dimensions. If off, graph\nlayout occurs in two dimensions. By default, three dimensional\nlayout is off.\n"},
  {"GetThreeDimensionalLayout", PyvtkForceDirectedLayoutStrategy_GetThreeDimensionalLayout, METH_VARARGS,
   "GetThreeDimensionalLayout(self) -> int\nC++: virtual vtkTypeBool GetThreeDimensionalLayout()\n\n"},
  {"ThreeDimensionalLayoutOn", PyvtkForceDirectedLayoutStrategy_ThreeDimensionalLayoutOn, METH_VARARGS,
   "ThreeDimensionalLayoutOn(self) -> None\nC++: virtual void ThreeDimensionalLayoutOn()\n\n"},
  {"ThreeDimensionalLayoutOff", PyvtkForceDirectedLayoutStrategy_ThreeDimensionalLayoutOff, METH_VARARGS,
   "ThreeDimensionalLayoutOff(self) -> None\nC++: virtual void ThreeDimensionalLayoutOff()\n\n"},
  {"SetRandomInitialPoints", PyvtkForceDirectedLayoutStrategy_SetRandomInitialPoints, METH_VARARGS,
   "SetRandomInitialPoints(self, _arg:int) -> None\nC++: virtual void SetRandomInitialPoints(vtkTypeBool _arg)\n\nTurn on/off use of random positions within the graph bounds as\ninitial points.\n"},
  {"GetRandomInitialPoints", PyvtkForceDirectedLayoutStrategy_GetRandomInitialPoints, METH_VARARGS,
   "GetRandomInitialPoints(self) -> int\nC++: virtual vtkTypeBool GetRandomInitialPoints()\n\n"},
  {"RandomInitialPointsOn", PyvtkForceDirectedLayoutStrategy_RandomInitialPointsOn, METH_VARARGS,
   "RandomInitialPointsOn(self) -> None\nC++: virtual void RandomInitialPointsOn()\n\n"},
  {"RandomInitialPointsOff", PyvtkForceDirectedLayoutStrategy_RandomInitialPointsOff, METH_VARARGS,
   "RandomInitialPointsOff(self) -> None\nC++: virtual void RandomInitialPointsOff()\n\n"},
  {"SetInitialTemperature", PyvtkForceDirectedLayoutStrategy_SetInitialTemperature, METH_VARARGS,
   "SetInitialTemperature(self, _arg:float) -> None\nC++: virtual void SetInitialTemperature(float _arg)\n\nSet the initial temperature.  If zero (the default) , the initial\ntemperature will be computed automatically.\n"},
  {"GetInitialTemperatureMinValue", PyvtkForceDirectedLayoutStrategy_GetInitialTemperatureMinValue, METH_VARARGS,
   "GetInitialTemperatureMinValue(self) -> float\nC++: virtual float GetInitialTemperatureMinValue()\n\n"},
  {"GetInitialTemperatureMaxValue", PyvtkForceDirectedLayoutStrategy_GetInitialTemperatureMaxValue, METH_VARARGS,
   "GetInitialTemperatureMaxValue(self) -> float\nC++: virtual float GetInitialTemperatureMaxValue()\n\n"},
  {"GetInitialTemperature", PyvtkForceDirectedLayoutStrategy_GetInitialTemperature, METH_VARARGS,
   "GetInitialTemperature(self) -> float\nC++: virtual float GetInitialTemperature()\n\n"},
  {"Initialize", PyvtkForceDirectedLayoutStrategy_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nThis strategy sets up some data structures for faster processing\nof each Layout() call\n"},
  {"Layout", PyvtkForceDirectedLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out. The method can either entirely layout the\ngraph or iteratively lay out the graph. If you have an iterative\nlayout please implement the IsLayoutComplete() method.\n"},
  {"IsLayoutComplete", PyvtkForceDirectedLayoutStrategy_IsLayoutComplete, METH_VARARGS,
   "IsLayoutComplete(self) -> int\nC++: int IsLayoutComplete() override;\n\nI'm an iterative layout so this method lets the caller know if\nI'm done laying out the graph\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkForceDirectedLayoutStrategy_Doc =
  "vtkForceDirectedLayoutStrategy - a force directed graph layout\nalgorithm\n\n"
  "Superclass: vtkGraphLayoutStrategy\n\n"
  "Lays out a graph in 2D or 3D using a force-directed algorithm. The\n"
  "user may specify whether to layout the graph randomly initially, the\n"
  "bounds, the number of dimensions (2 or 3), and the cool-down rate.\n\n"
  "@par Thanks: Thanks to Brian Wylie for adding functionality for\n"
  "allowing this layout to be incremental.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkForceDirectedLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkForceDirectedLayoutStrategy", // tp_name
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
  PyvtkForceDirectedLayoutStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkForceDirectedLayoutStrategy_StaticNew()
{
  return vtkForceDirectedLayoutStrategy::New();
}

PyObject *PyvtkForceDirectedLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkForceDirectedLayoutStrategy_Type, PyvtkForceDirectedLayoutStrategy_Methods,
    "vtkForceDirectedLayoutStrategy",
 &PyvtkForceDirectedLayoutStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkForceDirectedLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkForceDirectedLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkForceDirectedLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

