// python wrapper for vtkVectorFieldTopology
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVectorFieldTopology.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVectorFieldTopology(PyObject *dict); }
extern "C" { PyObject *PyvtkVectorFieldTopology_ClassNew(); }


static PyObject *
PyvtkVectorFieldTopology_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVectorFieldTopology::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVectorFieldTopology::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVectorFieldTopology *tempr = vtkVectorFieldTopology::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVectorFieldTopology *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVectorFieldTopology::NewInstance());

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
PyvtkVectorFieldTopology_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVectorFieldTopology::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVectorFieldTopology::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

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
      op->vtkVectorFieldTopology::SetIntegrationStepUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationStepUnit() :
      op->vtkVectorFieldTopology::GetIntegrationStepUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetMaxNumSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxNumSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxNumSteps(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetMaxNumSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetMaxNumSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxNumSteps() :
      op->vtkVectorFieldTopology::GetMaxNumSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetIntegrationStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationStepSize(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetIntegrationStepSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetIntegrationStepSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIntegrationStepSize() :
      op->vtkVectorFieldTopology::GetIntegrationStepSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetSeparatrixDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeparatrixDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeparatrixDistance(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetSeparatrixDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetSeparatrixDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeparatrixDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSeparatrixDistance() :
      op->vtkVectorFieldTopology::GetSeparatrixDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetUseIterativeSeeding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIterativeSeeding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIterativeSeeding(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetUseIterativeSeeding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetUseIterativeSeeding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIterativeSeeding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIterativeSeeding() :
      op->vtkVectorFieldTopology::GetUseIterativeSeeding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetComputeSurfaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeSurfaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeSurfaces(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetComputeSurfaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetComputeSurfaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeSurfaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeSurfaces() :
      op->vtkVectorFieldTopology::GetComputeSurfaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetExcludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExcludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExcludeBoundary(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetExcludeBoundary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetExcludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExcludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExcludeBoundary() :
      op->vtkVectorFieldTopology::GetExcludeBoundary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetUseBoundarySwitchPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBoundarySwitchPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBoundarySwitchPoints(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetUseBoundarySwitchPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetUseBoundarySwitchPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBoundarySwitchPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseBoundarySwitchPoints() :
      op->vtkVectorFieldTopology::GetUseBoundarySwitchPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetVectorAngleThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorAngleThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorAngleThreshold(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetVectorAngleThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetVectorAngleThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorAngleThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVectorAngleThreshold() :
      op->vtkVectorFieldTopology::GetVectorAngleThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetOffsetAwayFromBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffsetAwayFromBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffsetAwayFromBoundary(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetOffsetAwayFromBoundary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetOffsetAwayFromBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetAwayFromBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetAwayFromBoundary() :
      op->vtkVectorFieldTopology::GetOffsetAwayFromBoundary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetEpsilonCriticalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEpsilonCriticalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEpsilonCriticalPoint(temp0);
    }
    else
    {
      op->vtkVectorFieldTopology::SetEpsilonCriticalPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_GetEpsilonCriticalPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEpsilonCriticalPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEpsilonCriticalPoint() :
      op->vtkVectorFieldTopology::GetEpsilonCriticalPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetInterpolatorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

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
      op->vtkVectorFieldTopology::SetInterpolatorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetInterpolatorTypeToCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToCellLocator();
    }
    else
    {
      op->vtkVectorFieldTopology::SetInterpolatorTypeToCellLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVectorFieldTopology_SetInterpolatorTypeToDataSetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToDataSetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVectorFieldTopology *op = static_cast<vtkVectorFieldTopology *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToDataSetPointLocator();
    }
    else
    {
      op->vtkVectorFieldTopology::SetInterpolatorTypeToDataSetPointLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVectorFieldTopology_Methods[] = {
  {"IsTypeOf", PyvtkVectorFieldTopology_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVectorFieldTopology_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVectorFieldTopology_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVectorFieldTopology\nC++: static vtkVectorFieldTopology *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVectorFieldTopology_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVectorFieldTopology\nC++: vtkVectorFieldTopology *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVectorFieldTopology_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVectorFieldTopology_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetIntegrationStepUnit", PyvtkVectorFieldTopology_SetIntegrationStepUnit, METH_VARARGS,
   "SetIntegrationStepUnit(self, _arg:int) -> None\nC++: virtual void SetIntegrationStepUnit(int _arg)\n\nSpecify a uniform integration step unit for\nMinimumIntegrationStep, InitialIntegrationStep, and\nMaximumIntegrationStep. 1 = LENGTH_UNIT, i.e. all sizes are\nexpressed in coordinate scale or cell scale 2 = CELL_LENGTH_UNIT,\ni.e. all sizes are expressed in cell scale\n"},
  {"GetIntegrationStepUnit", PyvtkVectorFieldTopology_GetIntegrationStepUnit, METH_VARARGS,
   "GetIntegrationStepUnit(self) -> int\nC++: virtual int GetIntegrationStepUnit()\n\n"},
  {"SetMaxNumSteps", PyvtkVectorFieldTopology_SetMaxNumSteps, METH_VARARGS,
   "SetMaxNumSteps(self, _arg:int) -> None\nC++: virtual void SetMaxNumSteps(int _arg)\n\nSpecify/see the maximal number of iterations in this class and in\nvtkStreamTracer\n"},
  {"GetMaxNumSteps", PyvtkVectorFieldTopology_GetMaxNumSteps, METH_VARARGS,
   "GetMaxNumSteps(self) -> int\nC++: virtual int GetMaxNumSteps()\n\n"},
  {"SetIntegrationStepSize", PyvtkVectorFieldTopology_SetIntegrationStepSize, METH_VARARGS,
   "SetIntegrationStepSize(self, _arg:float) -> None\nC++: virtual void SetIntegrationStepSize(double _arg)\n\nSpecify the Initial, minimum, and maximum step size used for line\nintegration, expressed in IntegrationStepUnit\n"},
  {"GetIntegrationStepSize", PyvtkVectorFieldTopology_GetIntegrationStepSize, METH_VARARGS,
   "GetIntegrationStepSize(self) -> float\nC++: virtual double GetIntegrationStepSize()\n\n"},
  {"SetSeparatrixDistance", PyvtkVectorFieldTopology_SetSeparatrixDistance, METH_VARARGS,
   "SetSeparatrixDistance(self, _arg:float) -> None\nC++: virtual void SetSeparatrixDistance(double _arg)\n\nSpecify/see the distance by which the seedpoints of the\nseparatrices are placed away from the saddle expressed in\nIntegrationStepUnit\n"},
  {"GetSeparatrixDistance", PyvtkVectorFieldTopology_GetSeparatrixDistance, METH_VARARGS,
   "GetSeparatrixDistance(self) -> float\nC++: virtual double GetSeparatrixDistance()\n\n"},
  {"SetUseIterativeSeeding", PyvtkVectorFieldTopology_SetUseIterativeSeeding, METH_VARARGS,
   "SetUseIterativeSeeding(self, _arg:bool) -> None\nC++: virtual void SetUseIterativeSeeding(bool _arg)\n\nSpecify/see if the simple (fast) or iterative (correct) version\nis called\n"},
  {"GetUseIterativeSeeding", PyvtkVectorFieldTopology_GetUseIterativeSeeding, METH_VARARGS,
   "GetUseIterativeSeeding(self) -> bool\nC++: virtual bool GetUseIterativeSeeding()\n\n"},
  {"SetComputeSurfaces", PyvtkVectorFieldTopology_SetComputeSurfaces, METH_VARARGS,
   "SetComputeSurfaces(self, _arg:bool) -> None\nC++: virtual void SetComputeSurfaces(bool _arg)\n\nSpecify/see if the separating surfaces (separatrices in 3D) are\ncomputed or not\n"},
  {"GetComputeSurfaces", PyvtkVectorFieldTopology_GetComputeSurfaces, METH_VARARGS,
   "GetComputeSurfaces(self) -> bool\nC++: virtual bool GetComputeSurfaces()\n\n"},
  {"SetExcludeBoundary", PyvtkVectorFieldTopology_SetExcludeBoundary, METH_VARARGS,
   "SetExcludeBoundary(self, _arg:bool) -> None\nC++: virtual void SetExcludeBoundary(bool _arg)\n\nSpecify/see if the boundary cells are treated or not\n"},
  {"GetExcludeBoundary", PyvtkVectorFieldTopology_GetExcludeBoundary, METH_VARARGS,
   "GetExcludeBoundary(self) -> bool\nC++: virtual bool GetExcludeBoundary()\n\n"},
  {"SetUseBoundarySwitchPoints", PyvtkVectorFieldTopology_SetUseBoundarySwitchPoints, METH_VARARGS,
   "SetUseBoundarySwitchPoints(self, _arg:bool) -> None\nC++: virtual void SetUseBoundarySwitchPoints(bool _arg)\n\nSpecify/see whether to use boundary switch points/lines points as\nseeds or not\n"},
  {"GetUseBoundarySwitchPoints", PyvtkVectorFieldTopology_GetUseBoundarySwitchPoints, METH_VARARGS,
   "GetUseBoundarySwitchPoints(self) -> bool\nC++: virtual bool GetUseBoundarySwitchPoints()\n\n"},
  {"SetVectorAngleThreshold", PyvtkVectorFieldTopology_SetVectorAngleThreshold, METH_VARARGS,
   "SetVectorAngleThreshold(self, _arg:float) -> None\nC++: virtual void SetVectorAngleThreshold(double _arg)\n\nSpecify the VectorAngleThreshold to remove noisy boundary switch\npoints/lines When computing boundary switch point, if the vectors\nof the two points within a cell are almost parallel, the boundary\nswitch point computed is considered as a noise point. Let v0 and\nv1 be the vectors of the two points, and their norm equal to 1.\nThe dot product between them Dot(v0,v1) = cos(theta), where theta\nis the angle between v0 and v1. When v0 and v1 are almost\nparallel, abs(Dot(v0,v1)) is close to 1. The range of this\nthreshold is [0,1]. For any abs(Dot(v0,v1)) >\nVectorAngleThreshold, the boundary switch point computed is a\nnoise point.\n"},
  {"GetVectorAngleThreshold", PyvtkVectorFieldTopology_GetVectorAngleThreshold, METH_VARARGS,
   "GetVectorAngleThreshold(self) -> float\nC++: virtual double GetVectorAngleThreshold()\n\n"},
  {"SetOffsetAwayFromBoundary", PyvtkVectorFieldTopology_SetOffsetAwayFromBoundary, METH_VARARGS,
   "SetOffsetAwayFromBoundary(self, _arg:float) -> None\nC++: virtual void SetOffsetAwayFromBoundary(double _arg)\n\nSpecify the OffsetAwayFromBoundary to shift seeds for computing\nseparating lines/surfaces\n"},
  {"GetOffsetAwayFromBoundary", PyvtkVectorFieldTopology_GetOffsetAwayFromBoundary, METH_VARARGS,
   "GetOffsetAwayFromBoundary(self) -> float\nC++: virtual double GetOffsetAwayFromBoundary()\n\n"},
  {"SetEpsilonCriticalPoint", PyvtkVectorFieldTopology_SetEpsilonCriticalPoint, METH_VARARGS,
   "SetEpsilonCriticalPoint(self, _arg:float) -> None\nC++: virtual void SetEpsilonCriticalPoint(double _arg)\n\nSpecify EpsilonCriticalPoint for classifying critical points. The\ndefault is 1e-10.\n"},
  {"GetEpsilonCriticalPoint", PyvtkVectorFieldTopology_GetEpsilonCriticalPoint, METH_VARARGS,
   "GetEpsilonCriticalPoint(self) -> float\nC++: virtual double GetEpsilonCriticalPoint()\n\n"},
  {"SetInterpolatorType", PyvtkVectorFieldTopology_SetInterpolatorType, METH_VARARGS,
   "SetInterpolatorType(self, interpType:int) -> None\nC++: void SetInterpolatorType(int interpType)\n\nSet the type of the velocity field interpolator to determine\nwhether INTERPOLATOR_WITH_DATASET_POINT_LOCATOR or\nINTERPOLATOR_WITH_CELL_LOCATOR is employed for locating cells\nduring streamline integration.\n"},
  {"SetInterpolatorTypeToCellLocator", PyvtkVectorFieldTopology_SetInterpolatorTypeToCellLocator, METH_VARARGS,
   "SetInterpolatorTypeToCellLocator(self) -> None\nC++: void SetInterpolatorTypeToCellLocator()\n\nSet the velocity field interpolator type to the one involving a\ncell locator.\n"},
  {"SetInterpolatorTypeToDataSetPointLocator", PyvtkVectorFieldTopology_SetInterpolatorTypeToDataSetPointLocator, METH_VARARGS,
   "SetInterpolatorTypeToDataSetPointLocator(self) -> None\nC++: void SetInterpolatorTypeToDataSetPointLocator()\n\nSet the velocity field interpolator type to the one involving a\ndataset point locator.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVectorFieldTopology_Doc =
  "vtkVectorFieldTopology - Extract the topological skeleton as output\ndatasets\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVectorFieldTopology is a filter that extracts the critical points\n"
  "and the 1D separatrices (lines) If the data is 3D and the user\n"
  "enables ComputeSurfaces, also the 2D separatrices are computed\n"
  "(surfaces)\n\n"
  "@par Thanks: Developed by Roxana Bujack and Karen Tsai at Los Alamos\n"
  "National Laboratory under LDRD 20190143ER\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVectorFieldTopology_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkVectorFieldTopology", // tp_name
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
  PyvtkVectorFieldTopology_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVectorFieldTopology_StaticNew()
{
  return vtkVectorFieldTopology::New();
}

PyObject *PyvtkVectorFieldTopology_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVectorFieldTopology_Type, PyvtkVectorFieldTopology_Methods,
    "vtkVectorFieldTopology",
 &PyvtkVectorFieldTopology_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVectorFieldTopology(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVectorFieldTopology_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVectorFieldTopology", o) != 0)
  {
    Py_DECREF(o);
  }

}

