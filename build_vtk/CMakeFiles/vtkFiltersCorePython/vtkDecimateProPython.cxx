// python wrapper for vtkDecimatePro
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDecimatePro.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDecimatePro(PyObject *dict); }
extern "C" { PyObject *PyvtkDecimatePro_ClassNew(); }


static PyObject *
PyvtkDecimatePro_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDecimatePro::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDecimatePro::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDecimatePro *tempr = vtkDecimatePro::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDecimatePro *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDecimatePro::NewInstance());

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
PyvtkDecimatePro_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDecimatePro::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDecimatePro::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetReduction(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetTargetReduction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetTargetReductionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMinValue() :
      op->vtkDecimatePro::GetTargetReductionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetTargetReductionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReductionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReductionMaxValue() :
      op->vtkDecimatePro::GetTargetReductionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTargetReduction() :
      op->vtkDecimatePro::GetTargetReduction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreserveTopology(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetPreserveTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetPreserveTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreserveTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreserveTopology() :
      op->vtkDecimatePro::GetPreserveTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_PreserveTopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveTopologyOn();
    }
    else
    {
      op->vtkDecimatePro::PreserveTopologyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_PreserveTopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreserveTopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreserveTopologyOff();
    }
    else
    {
      op->vtkDecimatePro::PreserveTopologyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureAngle(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkDecimatePro::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkDecimatePro::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkDecimatePro::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetSplitting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplitting(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetSplitting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetSplitting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplitting() :
      op->vtkDecimatePro::GetSplitting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SplittingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplittingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SplittingOn();
    }
    else
    {
      op->vtkDecimatePro::SplittingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SplittingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SplittingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SplittingOff();
    }
    else
    {
      op->vtkDecimatePro::SplittingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetSplitAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplitAngle(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetSplitAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetSplitAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitAngleMinValue() :
      op->vtkDecimatePro::GetSplitAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetSplitAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitAngleMaxValue() :
      op->vtkDecimatePro::GetSplitAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetSplitAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSplitAngle() :
      op->vtkDecimatePro::GetSplitAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetPreSplitMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreSplitMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreSplitMesh(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetPreSplitMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetPreSplitMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreSplitMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreSplitMesh() :
      op->vtkDecimatePro::GetPreSplitMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_PreSplitMeshOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreSplitMeshOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreSplitMeshOn();
    }
    else
    {
      op->vtkDecimatePro::PreSplitMeshOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_PreSplitMeshOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreSplitMeshOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreSplitMeshOff();
    }
    else
    {
      op->vtkDecimatePro::PreSplitMeshOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumError(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetMaximumError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetMaximumErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumErrorMinValue() :
      op->vtkDecimatePro::GetMaximumErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetMaximumErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumErrorMaxValue() :
      op->vtkDecimatePro::GetMaximumErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumError() :
      op->vtkDecimatePro::GetMaximumError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetAccumulateError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAccumulateError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAccumulateError(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetAccumulateError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetAccumulateError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAccumulateError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAccumulateError() :
      op->vtkDecimatePro::GetAccumulateError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_AccumulateErrorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AccumulateErrorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AccumulateErrorOn();
    }
    else
    {
      op->vtkDecimatePro::AccumulateErrorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_AccumulateErrorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AccumulateErrorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AccumulateErrorOff();
    }
    else
    {
      op->vtkDecimatePro::AccumulateErrorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetErrorIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErrorIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetErrorIsAbsolute(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetErrorIsAbsolute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetErrorIsAbsolute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErrorIsAbsolute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetErrorIsAbsolute() :
      op->vtkDecimatePro::GetErrorIsAbsolute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAbsoluteError(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetAbsoluteError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetAbsoluteErrorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteErrorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteErrorMinValue() :
      op->vtkDecimatePro::GetAbsoluteErrorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetAbsoluteErrorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteErrorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteErrorMaxValue() :
      op->vtkDecimatePro::GetAbsoluteErrorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetAbsoluteError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbsoluteError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAbsoluteError() :
      op->vtkDecimatePro::GetAbsoluteError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetBoundaryVertexDeletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryVertexDeletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryVertexDeletion(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetBoundaryVertexDeletion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetBoundaryVertexDeletion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryVertexDeletion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoundaryVertexDeletion() :
      op->vtkDecimatePro::GetBoundaryVertexDeletion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_BoundaryVertexDeletionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryVertexDeletionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryVertexDeletionOn();
    }
    else
    {
      op->vtkDecimatePro::BoundaryVertexDeletionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_BoundaryVertexDeletionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryVertexDeletionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryVertexDeletionOff();
    }
    else
    {
      op->vtkDecimatePro::BoundaryVertexDeletionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDegree(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetDegree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetDegreeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDegreeMinValue() :
      op->vtkDecimatePro::GetDegreeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetDegreeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDegreeMaxValue() :
      op->vtkDecimatePro::GetDegreeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetDegree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDegree() :
      op->vtkDecimatePro::GetDegree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_SetInflectionPointRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInflectionPointRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInflectionPointRatio(temp0);
    }
    else
    {
      op->vtkDecimatePro::SetInflectionPointRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetInflectionPointRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInflectionPointRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInflectionPointRatioMinValue() :
      op->vtkDecimatePro::GetInflectionPointRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetInflectionPointRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInflectionPointRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInflectionPointRatioMaxValue() :
      op->vtkDecimatePro::GetInflectionPointRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetInflectionPointRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInflectionPointRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInflectionPointRatio() :
      op->vtkDecimatePro::GetInflectionPointRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetNumberOfInflectionPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInflectionPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfInflectionPoints() :
      op->vtkDecimatePro::GetNumberOfInflectionPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetInflectionPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInflectionPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

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
      op->GetInflectionPoints(temp0);
    }
    else
    {
      op->vtkDecimatePro::GetInflectionPoints(temp0);
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
PyvtkDecimatePro_GetInflectionPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInflectionPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetInflectionPoints() :
      op->vtkDecimatePro::GetInflectionPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDecimatePro_GetInflectionPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDecimatePro_GetInflectionPoints_s1(self, args);
    case 0:
      return PyvtkDecimatePro_GetInflectionPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInflectionPoints");
  return nullptr;
}


static PyObject *
PyvtkDecimatePro_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

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
      op->vtkDecimatePro::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDecimatePro_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDecimatePro *op = static_cast<vtkDecimatePro *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkDecimatePro::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDecimatePro_Methods[] = {
  {"IsTypeOf", PyvtkDecimatePro_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDecimatePro_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDecimatePro_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDecimatePro\nC++: static vtkDecimatePro *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDecimatePro_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDecimatePro\nC++: vtkDecimatePro *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDecimatePro_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDecimatePro_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTargetReduction", PyvtkDecimatePro_SetTargetReduction, METH_VARARGS,
   "SetTargetReduction(self, _arg:float) -> None\nC++: virtual void SetTargetReduction(double _arg)\n\nSpecify the desired reduction in the total number of polygons\n(e.g., if TargetReduction is set to 0.9, this filter will try to\nreduce the data set to 10% of its original size). Because of\nvarious constraints, this level of reduction may not be realized.\nIf you want to guarantee a particular reduction, you must turn\noff PreserveTopology, turn on SplitEdges and\nBoundaryVertexDeletion, and set the MaximumError to\nVTK_DOUBLE_MAX (these ivars are initialized this way when the\nobject is instantiated).\n"},
  {"GetTargetReductionMinValue", PyvtkDecimatePro_GetTargetReductionMinValue, METH_VARARGS,
   "GetTargetReductionMinValue(self) -> float\nC++: virtual double GetTargetReductionMinValue()\n\n"},
  {"GetTargetReductionMaxValue", PyvtkDecimatePro_GetTargetReductionMaxValue, METH_VARARGS,
   "GetTargetReductionMaxValue(self) -> float\nC++: virtual double GetTargetReductionMaxValue()\n\n"},
  {"GetTargetReduction", PyvtkDecimatePro_GetTargetReduction, METH_VARARGS,
   "GetTargetReduction(self) -> float\nC++: virtual double GetTargetReduction()\n\n"},
  {"SetPreserveTopology", PyvtkDecimatePro_SetPreserveTopology, METH_VARARGS,
   "SetPreserveTopology(self, _arg:int) -> None\nC++: virtual void SetPreserveTopology(vtkTypeBool _arg)\n\nTurn on/off whether to preserve the topology of the original\nmesh. If on, mesh splitting and hole elimination will not occur.\nThis may limit the maximum reduction that may be achieved.\n"},
  {"GetPreserveTopology", PyvtkDecimatePro_GetPreserveTopology, METH_VARARGS,
   "GetPreserveTopology(self) -> int\nC++: virtual vtkTypeBool GetPreserveTopology()\n\n"},
  {"PreserveTopologyOn", PyvtkDecimatePro_PreserveTopologyOn, METH_VARARGS,
   "PreserveTopologyOn(self) -> None\nC++: virtual void PreserveTopologyOn()\n\n"},
  {"PreserveTopologyOff", PyvtkDecimatePro_PreserveTopologyOff, METH_VARARGS,
   "PreserveTopologyOff(self) -> None\nC++: virtual void PreserveTopologyOff()\n\n"},
  {"SetFeatureAngle", PyvtkDecimatePro_SetFeatureAngle, METH_VARARGS,
   "SetFeatureAngle(self, _arg:float) -> None\nC++: virtual void SetFeatureAngle(double _arg)\n\nSpecify the mesh feature angle. This angle is used to define what\nan edge is (i.e., if the surface normal between two adjacent\ntriangles is >= FeatureAngle, an edge exists).\n"},
  {"GetFeatureAngleMinValue", PyvtkDecimatePro_GetFeatureAngleMinValue, METH_VARARGS,
   "GetFeatureAngleMinValue(self) -> float\nC++: virtual double GetFeatureAngleMinValue()\n\n"},
  {"GetFeatureAngleMaxValue", PyvtkDecimatePro_GetFeatureAngleMaxValue, METH_VARARGS,
   "GetFeatureAngleMaxValue(self) -> float\nC++: virtual double GetFeatureAngleMaxValue()\n\n"},
  {"GetFeatureAngle", PyvtkDecimatePro_GetFeatureAngle, METH_VARARGS,
   "GetFeatureAngle(self) -> float\nC++: virtual double GetFeatureAngle()\n\n"},
  {"SetSplitting", PyvtkDecimatePro_SetSplitting, METH_VARARGS,
   "SetSplitting(self, _arg:int) -> None\nC++: virtual void SetSplitting(vtkTypeBool _arg)\n\nTurn on/off the splitting of the mesh at corners, along edges, at\nnon-manifold points, or anywhere else a split is required.\nTurning splitting off will better preserve the original topology\nof the mesh, but you may not obtain the requested reduction.\n"},
  {"GetSplitting", PyvtkDecimatePro_GetSplitting, METH_VARARGS,
   "GetSplitting(self) -> int\nC++: virtual vtkTypeBool GetSplitting()\n\n"},
  {"SplittingOn", PyvtkDecimatePro_SplittingOn, METH_VARARGS,
   "SplittingOn(self) -> None\nC++: virtual void SplittingOn()\n\n"},
  {"SplittingOff", PyvtkDecimatePro_SplittingOff, METH_VARARGS,
   "SplittingOff(self) -> None\nC++: virtual void SplittingOff()\n\n"},
  {"SetSplitAngle", PyvtkDecimatePro_SetSplitAngle, METH_VARARGS,
   "SetSplitAngle(self, _arg:float) -> None\nC++: virtual void SetSplitAngle(double _arg)\n\nSpecify the mesh split angle. This angle is used to control the\nsplitting of the mesh. A split line exists when the surface\nnormals between two edge connected triangles are >= SplitAngle.\n"},
  {"GetSplitAngleMinValue", PyvtkDecimatePro_GetSplitAngleMinValue, METH_VARARGS,
   "GetSplitAngleMinValue(self) -> float\nC++: virtual double GetSplitAngleMinValue()\n\n"},
  {"GetSplitAngleMaxValue", PyvtkDecimatePro_GetSplitAngleMaxValue, METH_VARARGS,
   "GetSplitAngleMaxValue(self) -> float\nC++: virtual double GetSplitAngleMaxValue()\n\n"},
  {"GetSplitAngle", PyvtkDecimatePro_GetSplitAngle, METH_VARARGS,
   "GetSplitAngle(self) -> float\nC++: virtual double GetSplitAngle()\n\n"},
  {"SetPreSplitMesh", PyvtkDecimatePro_SetPreSplitMesh, METH_VARARGS,
   "SetPreSplitMesh(self, _arg:int) -> None\nC++: virtual void SetPreSplitMesh(vtkTypeBool _arg)\n\nIn some cases you may wish to split the mesh prior to algorithm\nexecution. This separates the mesh into semi-planar patches,\nwhich are disconnected from each other. This can give superior\nresults in some cases. If the ivar PreSplitMesh ivar is enabled,\nthe mesh is split with the specified SplitAngle. Otherwise mesh\nsplitting is deferred as long as possible.\n"},
  {"GetPreSplitMesh", PyvtkDecimatePro_GetPreSplitMesh, METH_VARARGS,
   "GetPreSplitMesh(self) -> int\nC++: virtual vtkTypeBool GetPreSplitMesh()\n\n"},
  {"PreSplitMeshOn", PyvtkDecimatePro_PreSplitMeshOn, METH_VARARGS,
   "PreSplitMeshOn(self) -> None\nC++: virtual void PreSplitMeshOn()\n\n"},
  {"PreSplitMeshOff", PyvtkDecimatePro_PreSplitMeshOff, METH_VARARGS,
   "PreSplitMeshOff(self) -> None\nC++: virtual void PreSplitMeshOff()\n\n"},
  {"SetMaximumError", PyvtkDecimatePro_SetMaximumError, METH_VARARGS,
   "SetMaximumError(self, _arg:float) -> None\nC++: virtual void SetMaximumError(double _arg)\n\nSet the largest decimation error that is allowed during the\ndecimation process. This may limit the maximum reduction that may\nbe achieved. The maximum error is specified as a fraction of the\nmaximum length of the input data bounding box.\n"},
  {"GetMaximumErrorMinValue", PyvtkDecimatePro_GetMaximumErrorMinValue, METH_VARARGS,
   "GetMaximumErrorMinValue(self) -> float\nC++: virtual double GetMaximumErrorMinValue()\n\n"},
  {"GetMaximumErrorMaxValue", PyvtkDecimatePro_GetMaximumErrorMaxValue, METH_VARARGS,
   "GetMaximumErrorMaxValue(self) -> float\nC++: virtual double GetMaximumErrorMaxValue()\n\n"},
  {"GetMaximumError", PyvtkDecimatePro_GetMaximumError, METH_VARARGS,
   "GetMaximumError(self) -> float\nC++: virtual double GetMaximumError()\n\n"},
  {"SetAccumulateError", PyvtkDecimatePro_SetAccumulateError, METH_VARARGS,
   "SetAccumulateError(self, _arg:int) -> None\nC++: virtual void SetAccumulateError(vtkTypeBool _arg)\n\nThe computed error can either be computed directly from the mesh\nor the error may be accumulated as the mesh is modified. If the\nerror is accumulated, then it represents a global error bounds,\nand the ivar MaximumError becomes a global bounds on mesh error.\nAccumulating the error requires extra memory proportional to the\nnumber of vertices in the mesh. If AccumulateError is off, then\nthe error is not accumulated.\n"},
  {"GetAccumulateError", PyvtkDecimatePro_GetAccumulateError, METH_VARARGS,
   "GetAccumulateError(self) -> int\nC++: virtual vtkTypeBool GetAccumulateError()\n\n"},
  {"AccumulateErrorOn", PyvtkDecimatePro_AccumulateErrorOn, METH_VARARGS,
   "AccumulateErrorOn(self) -> None\nC++: virtual void AccumulateErrorOn()\n\n"},
  {"AccumulateErrorOff", PyvtkDecimatePro_AccumulateErrorOff, METH_VARARGS,
   "AccumulateErrorOff(self) -> None\nC++: virtual void AccumulateErrorOff()\n\n"},
  {"SetErrorIsAbsolute", PyvtkDecimatePro_SetErrorIsAbsolute, METH_VARARGS,
   "SetErrorIsAbsolute(self, _arg:int) -> None\nC++: virtual void SetErrorIsAbsolute(int _arg)\n\nThe MaximumError is normally defined as a fraction of the dataset\nbounding diagonal. By setting ErrorIsAbsolute to 1, the error is\ninstead defined as that specified by AbsoluteError. By default\nErrorIsAbsolute=0.\n"},
  {"GetErrorIsAbsolute", PyvtkDecimatePro_GetErrorIsAbsolute, METH_VARARGS,
   "GetErrorIsAbsolute(self) -> int\nC++: virtual int GetErrorIsAbsolute()\n\n"},
  {"SetAbsoluteError", PyvtkDecimatePro_SetAbsoluteError, METH_VARARGS,
   "SetAbsoluteError(self, _arg:float) -> None\nC++: virtual void SetAbsoluteError(double _arg)\n\nSame as MaximumError, but to be used when ErrorIsAbsolute is 1\n"},
  {"GetAbsoluteErrorMinValue", PyvtkDecimatePro_GetAbsoluteErrorMinValue, METH_VARARGS,
   "GetAbsoluteErrorMinValue(self) -> float\nC++: virtual double GetAbsoluteErrorMinValue()\n\n"},
  {"GetAbsoluteErrorMaxValue", PyvtkDecimatePro_GetAbsoluteErrorMaxValue, METH_VARARGS,
   "GetAbsoluteErrorMaxValue(self) -> float\nC++: virtual double GetAbsoluteErrorMaxValue()\n\n"},
  {"GetAbsoluteError", PyvtkDecimatePro_GetAbsoluteError, METH_VARARGS,
   "GetAbsoluteError(self) -> float\nC++: virtual double GetAbsoluteError()\n\n"},
  {"SetBoundaryVertexDeletion", PyvtkDecimatePro_SetBoundaryVertexDeletion, METH_VARARGS,
   "SetBoundaryVertexDeletion(self, _arg:int) -> None\nC++: virtual void SetBoundaryVertexDeletion(vtkTypeBool _arg)\n\nTurn on/off the deletion of vertices on the boundary of a mesh.\nThis may limit the maximum reduction that may be achieved.\n"},
  {"GetBoundaryVertexDeletion", PyvtkDecimatePro_GetBoundaryVertexDeletion, METH_VARARGS,
   "GetBoundaryVertexDeletion(self) -> int\nC++: virtual vtkTypeBool GetBoundaryVertexDeletion()\n\n"},
  {"BoundaryVertexDeletionOn", PyvtkDecimatePro_BoundaryVertexDeletionOn, METH_VARARGS,
   "BoundaryVertexDeletionOn(self) -> None\nC++: virtual void BoundaryVertexDeletionOn()\n\n"},
  {"BoundaryVertexDeletionOff", PyvtkDecimatePro_BoundaryVertexDeletionOff, METH_VARARGS,
   "BoundaryVertexDeletionOff(self) -> None\nC++: virtual void BoundaryVertexDeletionOff()\n\n"},
  {"SetDegree", PyvtkDecimatePro_SetDegree, METH_VARARGS,
   "SetDegree(self, _arg:int) -> None\nC++: virtual void SetDegree(int _arg)\n\nIf the number of triangles connected to a vertex exceeds\n\"Degree\", then the vertex will be split. (NOTE: the complexity of\nthe triangulation algorithm is proportional to Degree^2. Setting\ndegree small can improve the performance of the algorithm.)\n"},
  {"GetDegreeMinValue", PyvtkDecimatePro_GetDegreeMinValue, METH_VARARGS,
   "GetDegreeMinValue(self) -> int\nC++: virtual int GetDegreeMinValue()\n\n"},
  {"GetDegreeMaxValue", PyvtkDecimatePro_GetDegreeMaxValue, METH_VARARGS,
   "GetDegreeMaxValue(self) -> int\nC++: virtual int GetDegreeMaxValue()\n\n"},
  {"GetDegree", PyvtkDecimatePro_GetDegree, METH_VARARGS,
   "GetDegree(self) -> int\nC++: virtual int GetDegree()\n\n"},
  {"SetInflectionPointRatio", PyvtkDecimatePro_SetInflectionPointRatio, METH_VARARGS,
   "SetInflectionPointRatio(self, _arg:float) -> None\nC++: virtual void SetInflectionPointRatio(double _arg)\n\nSpecify the inflection point ratio. An inflection point occurs\nwhen the ratio of reduction error between two iterations is\ngreater than or equal to the InflectionPointRatio.\n"},
  {"GetInflectionPointRatioMinValue", PyvtkDecimatePro_GetInflectionPointRatioMinValue, METH_VARARGS,
   "GetInflectionPointRatioMinValue(self) -> float\nC++: virtual double GetInflectionPointRatioMinValue()\n\n"},
  {"GetInflectionPointRatioMaxValue", PyvtkDecimatePro_GetInflectionPointRatioMaxValue, METH_VARARGS,
   "GetInflectionPointRatioMaxValue(self) -> float\nC++: virtual double GetInflectionPointRatioMaxValue()\n\n"},
  {"GetInflectionPointRatio", PyvtkDecimatePro_GetInflectionPointRatio, METH_VARARGS,
   "GetInflectionPointRatio(self) -> float\nC++: virtual double GetInflectionPointRatio()\n\n"},
  {"GetNumberOfInflectionPoints", PyvtkDecimatePro_GetNumberOfInflectionPoints, METH_VARARGS,
   "GetNumberOfInflectionPoints(self) -> int\nC++: vtkIdType GetNumberOfInflectionPoints()\n\nGet the number of inflection points. Only returns a valid value\nafter the filter has executed.  The values in the list are mesh\nreduction values at each inflection point. Note: the first\ninflection point always occurs right before non-planar triangles\nare decimated (i.e., as the error becomes non-zero).\n"},
  {"GetInflectionPoints", PyvtkDecimatePro_GetInflectionPoints, METH_VARARGS,
   "GetInflectionPoints(self, inflectionPoints:[float, ...]) -> None\nC++: void GetInflectionPoints(double *inflectionPoints)\nGetInflectionPoints(self) -> Pointer\nC++: double *GetInflectionPoints()\n\nGet a list of inflection points. These are double values 0 < r <=\n1.0 corresponding to reduction level, and there are a total of\nNumberOfInflectionPoints() values. You must provide an array (of\nthe correct size) into which the inflection points are written.\n"},
  {"SetOutputPointsPrecision", PyvtkDecimatePro_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkDecimatePro_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDecimatePro_Doc =
  "vtkDecimatePro - reduce the number of triangles in a mesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDecimatePro is a filter to reduce the number of triangles in a\n"
  "triangle mesh, forming a good approximation to the original geometry.\n"
  "The input to vtkDecimatePro is a vtkPolyData object, and only\n"
  "triangles are treated. If you desire to decimate polygonal meshes,\n"
  "first triangulate the polygons with vtkTriangleFilter object.\n\n"
  "The implementation of vtkDecimatePro is similar to the algorithm\n"
  "originally described in \"Decimation of Triangle Meshes\", Proc\n"
  "Siggraph `92, with three major differences. First, this algorithm\n"
  "does not necessarily preserve the topology of the mesh. Second, it is\n"
  "guaranteed to give the a mesh reduction factor specified by the user\n"
  "(as long as certain constraints are not set - see Caveats). Third, it\n"
  "is set up generate progressive meshes, that is a stream of operations\n"
  "that can be easily transmitted and incrementally updated (see Hugues\n"
  "Hoppe's Siggraph '96 paper on progressive meshes).\n\n"
  "The algorithm proceeds as follows. Each vertex in the mesh is\n"
  "classified and inserted into a priority queue. The priority is based\n"
  "on the error to delete the vertex and retriangulate the hole.\n"
  "Vertices that cannot be deleted or triangulated (at this point in the\n"
  "algorithm) are skipped. Then, each vertex in the priority queue is\n"
  "processed (i.e., deleted followed by hole triangulation using edge\n"
  "collapse). This continues until the priority queue is empty. Next,\n"
  "all remaining vertices are processed, and the mesh is split into\n"
  "separate pieces along sharp edges or at non-manifold attachment\n"
  "points and reinserted into the priority queue. Again, the priority\n"
  "queue is processed until empty. If the desired reduction is still not\n"
  "achieved, the remaining vertices are split as necessary (in a\n"
  "recursive fashion) so that it is possible to eliminate every triangle\n"
  "as necessary.\n\n"
  "To use this object, at a minimum you need to specify the ivar\n"
  "TargetReduction. The algorithm is guaranteed to generate a reduced\n"
  "mesh at this level as long as the following four conditions are met:\n"
  "1) topology modification is allowed (i.e., the ivar PreserveTopology\n"
  "is off);\n"
  "2) mesh splitting is enabled (i.e., the ivar Splitting is on); 3) the\n"
  "   algorithm is allowed to modify the boundary of the mesh (i.e., the\n"
  "ivar BoundaryVertexDeletion is on); and 4) the maximum allowable\n"
  "   error (i.e., the ivar MaximumError) is set to VTK_DOUBLE_MAX. \n"
  "   Other important parameters to adjust include the FeatureAngle and\n"
  "   SplitAngle ivars, since these can impact the quality of the final\n"
  "   mesh. Also, you can set the ivar AccumulateError to force\n"
  "   incremental error update and distribution to surrounding vertices\n"
  "   as each vertex is deleted. The accumulated error is a conservative\n"
  "global error bounds and decimation error, but requires additional\n"
  "   memory and time to compute.\n\n"
  "@warning\n"
  "To guarantee a given level of reduction, the ivar PreserveTopology\n"
  "must be off; the ivar Splitting is on; the ivar\n"
  "BoundaryVertexDeletion is on; and the ivar MaximumError is set to\n"
  "VTK_DOUBLE_MAX.\n\n"
  "@warning\n"
  "If PreserveTopology is off, and SplitEdges is off; the mesh topology\n"
  "may be modified by closing holes.\n\n"
  "@warning\n"
  "Once mesh splitting begins, the feature angle is set to the split\n"
  "angle.\n\n"
  "@sa\n"
  "vtkDecimate vtkQuadricClustering vtkQuadricDecimation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDecimatePro_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDecimatePro", // tp_name
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
  PyvtkDecimatePro_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDecimatePro_StaticNew()
{
  return vtkDecimatePro::New();
}

PyObject *PyvtkDecimatePro_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDecimatePro_Type, PyvtkDecimatePro_Methods,
    "vtkDecimatePro",
 &PyvtkDecimatePro_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDecimatePro(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDecimatePro_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDecimatePro", o) != 0)
  {
    Py_DECREF(o);
  }

}

