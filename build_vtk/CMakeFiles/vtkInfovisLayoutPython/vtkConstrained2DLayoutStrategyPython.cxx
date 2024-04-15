// python wrapper for vtkConstrained2DLayoutStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConstrained2DLayoutStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConstrained2DLayoutStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkConstrained2DLayoutStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkGraphLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkGraphLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkGraphLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkConstrained2DLayoutStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConstrained2DLayoutStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConstrained2DLayoutStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConstrained2DLayoutStrategy *tempr = vtkConstrained2DLayoutStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConstrained2DLayoutStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConstrained2DLayoutStrategy::NewInstance());

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
PyvtkConstrained2DLayoutStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConstrained2DLayoutStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConstrained2DLayoutStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_SetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

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
      op->vtkConstrained2DLayoutStrategy::SetRandomSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetRandomSeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeedMinValue() :
      op->vtkConstrained2DLayoutStrategy::GetRandomSeedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetRandomSeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeedMaxValue() :
      op->vtkConstrained2DLayoutStrategy::GetRandomSeedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetRandomSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRandomSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRandomSeed() :
      op->vtkConstrained2DLayoutStrategy::GetRandomSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_SetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

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
      op->vtkConstrained2DLayoutStrategy::SetMaxNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetMaxNumberOfIterationsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMinValue() :
      op->vtkConstrained2DLayoutStrategy::GetMaxNumberOfIterationsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetMaxNumberOfIterationsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterationsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterationsMaxValue() :
      op->vtkConstrained2DLayoutStrategy::GetMaxNumberOfIterationsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetMaxNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumberOfIterations() :
      op->vtkConstrained2DLayoutStrategy::GetMaxNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_SetIterationsPerLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationsPerLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

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
      op->vtkConstrained2DLayoutStrategy::SetIterationsPerLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetIterationsPerLayoutMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayoutMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationsPerLayoutMinValue() :
      op->vtkConstrained2DLayoutStrategy::GetIterationsPerLayoutMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetIterationsPerLayoutMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayoutMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationsPerLayoutMaxValue() :
      op->vtkConstrained2DLayoutStrategy::GetIterationsPerLayoutMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetIterationsPerLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationsPerLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationsPerLayout() :
      op->vtkConstrained2DLayoutStrategy::GetIterationsPerLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_SetInitialTemperature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialTemperature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

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
      op->vtkConstrained2DLayoutStrategy::SetInitialTemperature(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetInitialTemperatureMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperatureMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetInitialTemperatureMinValue() :
      op->vtkConstrained2DLayoutStrategy::GetInitialTemperatureMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetInitialTemperatureMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperatureMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetInitialTemperatureMaxValue() :
      op->vtkConstrained2DLayoutStrategy::GetInitialTemperatureMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetInitialTemperature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialTemperature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetInitialTemperature() :
      op->vtkConstrained2DLayoutStrategy::GetInitialTemperature());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_SetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

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
      op->vtkConstrained2DLayoutStrategy::SetCoolDownRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetCoolDownRateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMinValue() :
      op->vtkConstrained2DLayoutStrategy::GetCoolDownRateMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetCoolDownRateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRateMaxValue() :
      op->vtkConstrained2DLayoutStrategy::GetCoolDownRateMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetCoolDownRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoolDownRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoolDownRate() :
      op->vtkConstrained2DLayoutStrategy::GetCoolDownRate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_SetRestDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRestDistance(temp0);
    }
    else
    {
      op->vtkConstrained2DLayoutStrategy::SetRestDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetRestDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetRestDistance() :
      op->vtkConstrained2DLayoutStrategy::GetRestDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkConstrained2DLayoutStrategy::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkConstrained2DLayoutStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLayoutComplete() :
      op->vtkConstrained2DLayoutStrategy::IsLayoutComplete());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_SetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayName(temp0);
    }
    else
    {
      op->vtkConstrained2DLayoutStrategy::SetInputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrained2DLayoutStrategy_GetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrained2DLayoutStrategy *op = static_cast<vtkConstrained2DLayoutStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputArrayName() :
      op->vtkConstrained2DLayoutStrategy::GetInputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConstrained2DLayoutStrategy_Methods[] = {
  {"IsTypeOf", PyvtkConstrained2DLayoutStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConstrained2DLayoutStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConstrained2DLayoutStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkConstrained2DLayoutStrategy\nC++: static vtkConstrained2DLayoutStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConstrained2DLayoutStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkConstrained2DLayoutStrategy\nC++: vtkConstrained2DLayoutStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConstrained2DLayoutStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConstrained2DLayoutStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRandomSeed", PyvtkConstrained2DLayoutStrategy_SetRandomSeed, METH_VARARGS,
   "SetRandomSeed(self, _arg:int) -> None\nC++: virtual void SetRandomSeed(int _arg)\n\nSeed the random number generator used to jitter point positions.\nThis has a significant effect on their final positions when the\nlayout is complete.\n"},
  {"GetRandomSeedMinValue", PyvtkConstrained2DLayoutStrategy_GetRandomSeedMinValue, METH_VARARGS,
   "GetRandomSeedMinValue(self) -> int\nC++: virtual int GetRandomSeedMinValue()\n\n"},
  {"GetRandomSeedMaxValue", PyvtkConstrained2DLayoutStrategy_GetRandomSeedMaxValue, METH_VARARGS,
   "GetRandomSeedMaxValue(self) -> int\nC++: virtual int GetRandomSeedMaxValue()\n\n"},
  {"GetRandomSeed", PyvtkConstrained2DLayoutStrategy_GetRandomSeed, METH_VARARGS,
   "GetRandomSeed(self) -> int\nC++: virtual int GetRandomSeed()\n\n"},
  {"SetMaxNumberOfIterations", PyvtkConstrained2DLayoutStrategy_SetMaxNumberOfIterations, METH_VARARGS,
   "SetMaxNumberOfIterations(self, _arg:int) -> None\nC++: virtual void SetMaxNumberOfIterations(int _arg)\n\nSet/Get the maximum number of iterations to be used. The higher\nthis number, the more iterations through the algorithm is\npossible, and thus, the more the graph gets modified. The default\nis '100' for no particular reason Note: The strong recommendation\nis that you do not change this parameter. :)\n"},
  {"GetMaxNumberOfIterationsMinValue", PyvtkConstrained2DLayoutStrategy_GetMaxNumberOfIterationsMinValue, METH_VARARGS,
   "GetMaxNumberOfIterationsMinValue(self) -> int\nC++: virtual int GetMaxNumberOfIterationsMinValue()\n\n"},
  {"GetMaxNumberOfIterationsMaxValue", PyvtkConstrained2DLayoutStrategy_GetMaxNumberOfIterationsMaxValue, METH_VARARGS,
   "GetMaxNumberOfIterationsMaxValue(self) -> int\nC++: virtual int GetMaxNumberOfIterationsMaxValue()\n\n"},
  {"GetMaxNumberOfIterations", PyvtkConstrained2DLayoutStrategy_GetMaxNumberOfIterations, METH_VARARGS,
   "GetMaxNumberOfIterations(self) -> int\nC++: virtual int GetMaxNumberOfIterations()\n\n"},
  {"SetIterationsPerLayout", PyvtkConstrained2DLayoutStrategy_SetIterationsPerLayout, METH_VARARGS,
   "SetIterationsPerLayout(self, _arg:int) -> None\nC++: virtual void SetIterationsPerLayout(int _arg)\n\nSet/Get the number of iterations per layout. The only use for\nthis ivar is for the application to do visualizations of the\nlayout before it's complete. The default is '100' to match the\ndefault 'MaxNumberOfIterations' Note: Changing this parameter is\njust fine :)\n"},
  {"GetIterationsPerLayoutMinValue", PyvtkConstrained2DLayoutStrategy_GetIterationsPerLayoutMinValue, METH_VARARGS,
   "GetIterationsPerLayoutMinValue(self) -> int\nC++: virtual int GetIterationsPerLayoutMinValue()\n\n"},
  {"GetIterationsPerLayoutMaxValue", PyvtkConstrained2DLayoutStrategy_GetIterationsPerLayoutMaxValue, METH_VARARGS,
   "GetIterationsPerLayoutMaxValue(self) -> int\nC++: virtual int GetIterationsPerLayoutMaxValue()\n\n"},
  {"GetIterationsPerLayout", PyvtkConstrained2DLayoutStrategy_GetIterationsPerLayout, METH_VARARGS,
   "GetIterationsPerLayout(self) -> int\nC++: virtual int GetIterationsPerLayout()\n\n"},
  {"SetInitialTemperature", PyvtkConstrained2DLayoutStrategy_SetInitialTemperature, METH_VARARGS,
   "SetInitialTemperature(self, _arg:float) -> None\nC++: virtual void SetInitialTemperature(float _arg)\n\nSet the initial temperature.  The temperature default is '5' for\nno particular reason Note: The strong recommendation is that you\ndo not change this parameter. :)\n"},
  {"GetInitialTemperatureMinValue", PyvtkConstrained2DLayoutStrategy_GetInitialTemperatureMinValue, METH_VARARGS,
   "GetInitialTemperatureMinValue(self) -> float\nC++: virtual float GetInitialTemperatureMinValue()\n\n"},
  {"GetInitialTemperatureMaxValue", PyvtkConstrained2DLayoutStrategy_GetInitialTemperatureMaxValue, METH_VARARGS,
   "GetInitialTemperatureMaxValue(self) -> float\nC++: virtual float GetInitialTemperatureMaxValue()\n\n"},
  {"GetInitialTemperature", PyvtkConstrained2DLayoutStrategy_GetInitialTemperature, METH_VARARGS,
   "GetInitialTemperature(self) -> float\nC++: virtual float GetInitialTemperature()\n\n"},
  {"SetCoolDownRate", PyvtkConstrained2DLayoutStrategy_SetCoolDownRate, METH_VARARGS,
   "SetCoolDownRate(self, _arg:float) -> None\nC++: virtual void SetCoolDownRate(double _arg)\n\nSet/Get the Cool-down rate. The higher this number is, the longer\nit will take to \"cool-down\", and thus, the more the graph will be\nmodified. The default is '10' for no particular reason. Note: The\nstrong recommendation is that you do not change this parameter.\n:)\n"},
  {"GetCoolDownRateMinValue", PyvtkConstrained2DLayoutStrategy_GetCoolDownRateMinValue, METH_VARARGS,
   "GetCoolDownRateMinValue(self) -> float\nC++: virtual double GetCoolDownRateMinValue()\n\n"},
  {"GetCoolDownRateMaxValue", PyvtkConstrained2DLayoutStrategy_GetCoolDownRateMaxValue, METH_VARARGS,
   "GetCoolDownRateMaxValue(self) -> float\nC++: virtual double GetCoolDownRateMaxValue()\n\n"},
  {"GetCoolDownRate", PyvtkConstrained2DLayoutStrategy_GetCoolDownRate, METH_VARARGS,
   "GetCoolDownRate(self) -> float\nC++: virtual double GetCoolDownRate()\n\n"},
  {"SetRestDistance", PyvtkConstrained2DLayoutStrategy_SetRestDistance, METH_VARARGS,
   "SetRestDistance(self, _arg:float) -> None\nC++: virtual void SetRestDistance(float _arg)\n\nManually set the resting distance. Otherwise the distance is\ncomputed automatically.\n"},
  {"GetRestDistance", PyvtkConstrained2DLayoutStrategy_GetRestDistance, METH_VARARGS,
   "GetRestDistance(self) -> float\nC++: virtual float GetRestDistance()\n\n"},
  {"Initialize", PyvtkConstrained2DLayoutStrategy_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nThis strategy sets up some data structures for faster processing\nof each Layout() call\n"},
  {"Layout", PyvtkConstrained2DLayoutStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nThis is the layout method where the graph that was set in\nSetGraph() is laid out. The method can either entirely layout the\ngraph or iteratively lay out the graph. If you have an iterative\nlayout please implement the IsLayoutComplete() method.\n"},
  {"IsLayoutComplete", PyvtkConstrained2DLayoutStrategy_IsLayoutComplete, METH_VARARGS,
   "IsLayoutComplete(self) -> int\nC++: int IsLayoutComplete() override;\n\nI'm an iterative layout so this method lets the caller know if\nI'm done laying out the graph\n"},
  {"SetInputArrayName", PyvtkConstrained2DLayoutStrategy_SetInputArrayName, METH_VARARGS,
   "SetInputArrayName(self, _arg:str) -> None\nC++: virtual void SetInputArrayName(const char *_arg)\n\nSet/Get the input constraint array name. If no input array name\nis set then the name 'constraint' is used.\n"},
  {"GetInputArrayName", PyvtkConstrained2DLayoutStrategy_GetInputArrayName, METH_VARARGS,
   "GetInputArrayName(self) -> str\nC++: virtual char *GetInputArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkConstrained2DLayoutStrategy_Doc =
  "vtkConstrained2DLayoutStrategy - a simple fast 2D graph layout that\nlooks for a 'constraint' array (vtkDoubleArray).\n\n"
  "Superclass: vtkGraphLayoutStrategy\n\n"
  "Any entry in the constraint array will indicate the level of\n"
  "impedance a node has to the force calculations during the layout\n"
  "optimization. The array is assumed to be normalized between zero and\n"
  "one, with one being totally constrained, so no force will be applied\n"
  "to the node (i.e. no movement), and zero being full range of movement\n"
  "(no constraints).\n\n"
  "This class is a density grid based force directed layout strategy.\n"
  "Also please note that 'fast' is relative to quite slow. :) The layout\n"
  "running time is O(V+E) with an extremely high constant.@par Thanks:\n"
  "We would like to thank Mothra for distracting Godzilla while we wrote\n"
  "this class.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConstrained2DLayoutStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkConstrained2DLayoutStrategy", // tp_name
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
  PyvtkConstrained2DLayoutStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConstrained2DLayoutStrategy_StaticNew()
{
  return vtkConstrained2DLayoutStrategy::New();
}

PyObject *PyvtkConstrained2DLayoutStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConstrained2DLayoutStrategy_Type, PyvtkConstrained2DLayoutStrategy_Methods,
    "vtkConstrained2DLayoutStrategy",
 &PyvtkConstrained2DLayoutStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGraphLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConstrained2DLayoutStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConstrained2DLayoutStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConstrained2DLayoutStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

