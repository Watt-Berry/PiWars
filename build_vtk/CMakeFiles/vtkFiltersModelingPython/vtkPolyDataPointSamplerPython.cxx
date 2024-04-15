// python wrapper for vtkPolyDataPointSampler
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataPointSampler.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataPointSampler(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataPointSampler_ClassNew(); }


static PyObject *
PyvtkPolyDataPointSampler_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataPointSampler::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataPointSampler::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataPointSampler *tempr = vtkPolyDataPointSampler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataPointSampler *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataPointSampler::NewInstance());

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
PyvtkPolyDataPointSampler_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataPointSampler::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataPointSampler::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistance(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMinValue() :
      op->vtkPolyDataPointSampler::GetDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMaxValue() :
      op->vtkPolyDataPointSampler::GetDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkPolyDataPointSampler::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetPointGenerationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointGenerationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointGenerationMode(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetPointGenerationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetPointGenerationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGenerationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointGenerationModeMinValue() :
      op->vtkPolyDataPointSampler::GetPointGenerationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetPointGenerationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGenerationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointGenerationModeMaxValue() :
      op->vtkPolyDataPointSampler::GetPointGenerationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetPointGenerationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGenerationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointGenerationMode() :
      op->vtkPolyDataPointSampler::GetPointGenerationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetPointGenerationModeToRegular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointGenerationModeToRegular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointGenerationModeToRegular();
    }
    else
    {
      op->vtkPolyDataPointSampler::SetPointGenerationModeToRegular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetPointGenerationModeToRandom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointGenerationModeToRandom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointGenerationModeToRandom();
    }
    else
    {
      op->vtkPolyDataPointSampler::SetPointGenerationModeToRandom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateVertexPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertexPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateVertexPoints() :
      op->vtkPolyDataPointSampler::GetGenerateVertexPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateVertexPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertexPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertexPoints(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetGenerateVertexPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVertexPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexPointsOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateVertexPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVertexPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVertexPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVertexPointsOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateVertexPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateEdgePoints() :
      op->vtkPolyDataPointSampler::GetGenerateEdgePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateEdgePoints(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetGenerateEdgePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateEdgePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgePointsOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateEdgePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateEdgePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateEdgePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateEdgePointsOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateEdgePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateInteriorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateInteriorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateInteriorPoints() :
      op->vtkPolyDataPointSampler::GetGenerateInteriorPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateInteriorPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateInteriorPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateInteriorPoints(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetGenerateInteriorPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateInteriorPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInteriorPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateInteriorPointsOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateInteriorPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateInteriorPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInteriorPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateInteriorPointsOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateInteriorPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateVertices() :
      op->vtkPolyDataPointSampler::GetGenerateVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetGenerateVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateVertices(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetGenerateVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GenerateVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateVerticesOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::GenerateVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_GetInterpolatePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolatePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolatePointData() :
      op->vtkPolyDataPointSampler::GetInterpolatePointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_SetInterpolatePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatePointData(temp0);
    }
    else
    {
      op->vtkPolyDataPointSampler::SetInterpolatePointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_InterpolatePointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolatePointDataOn();
    }
    else
    {
      op->vtkPolyDataPointSampler::InterpolatePointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataPointSampler_InterpolatePointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointSampler *op = static_cast<vtkPolyDataPointSampler *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolatePointDataOff();
    }
    else
    {
      op->vtkPolyDataPointSampler::InterpolatePointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataPointSampler_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataPointSampler_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataPointSampler_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataPointSampler_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataPointSampler\nC++: static vtkPolyDataPointSampler *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataPointSampler_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataPointSampler\nC++: vtkPolyDataPointSampler *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataPointSampler_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataPointSampler_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDistance", PyvtkPolyDataPointSampler_SetDistance, METH_VARARGS,
   "SetDistance(self, _arg:float) -> None\nC++: virtual void SetDistance(double _arg)\n\nSet/Get the approximate distance between points. This is an\nabsolute distance measure. The default is 0.01.\n"},
  {"GetDistanceMinValue", PyvtkPolyDataPointSampler_GetDistanceMinValue, METH_VARARGS,
   "GetDistanceMinValue(self) -> float\nC++: virtual double GetDistanceMinValue()\n\n"},
  {"GetDistanceMaxValue", PyvtkPolyDataPointSampler_GetDistanceMaxValue, METH_VARARGS,
   "GetDistanceMaxValue(self) -> float\nC++: virtual double GetDistanceMaxValue()\n\n"},
  {"GetDistance", PyvtkPolyDataPointSampler_GetDistance, METH_VARARGS,
   "GetDistance(self) -> float\nC++: virtual double GetDistance()\n\n"},
  {"SetPointGenerationMode", PyvtkPolyDataPointSampler_SetPointGenerationMode, METH_VARARGS,
   "SetPointGenerationMode(self, _arg:int) -> None\nC++: virtual void SetPointGenerationMode(int _arg)\n\nSpecify/retrieve the type of point generation: either regular\npoint generation or random point generation. By default, regular\npoint generation is used.\n"},
  {"GetPointGenerationModeMinValue", PyvtkPolyDataPointSampler_GetPointGenerationModeMinValue, METH_VARARGS,
   "GetPointGenerationModeMinValue(self) -> int\nC++: virtual int GetPointGenerationModeMinValue()\n\n"},
  {"GetPointGenerationModeMaxValue", PyvtkPolyDataPointSampler_GetPointGenerationModeMaxValue, METH_VARARGS,
   "GetPointGenerationModeMaxValue(self) -> int\nC++: virtual int GetPointGenerationModeMaxValue()\n\n"},
  {"GetPointGenerationMode", PyvtkPolyDataPointSampler_GetPointGenerationMode, METH_VARARGS,
   "GetPointGenerationMode(self) -> int\nC++: virtual int GetPointGenerationMode()\n\n"},
  {"SetPointGenerationModeToRegular", PyvtkPolyDataPointSampler_SetPointGenerationModeToRegular, METH_VARARGS,
   "SetPointGenerationModeToRegular(self) -> None\nC++: void SetPointGenerationModeToRegular()\n\n"},
  {"SetPointGenerationModeToRandom", PyvtkPolyDataPointSampler_SetPointGenerationModeToRandom, METH_VARARGS,
   "SetPointGenerationModeToRandom(self) -> None\nC++: void SetPointGenerationModeToRandom()\n\n"},
  {"GetGenerateVertexPoints", PyvtkPolyDataPointSampler_GetGenerateVertexPoints, METH_VARARGS,
   "GetGenerateVertexPoints(self) -> bool\nC++: virtual bool GetGenerateVertexPoints()\n\nSpecify/retrieve a boolean flag indicating whether cell vertex\npoints should be output.\n"},
  {"SetGenerateVertexPoints", PyvtkPolyDataPointSampler_SetGenerateVertexPoints, METH_VARARGS,
   "SetGenerateVertexPoints(self, _arg:bool) -> None\nC++: virtual void SetGenerateVertexPoints(bool _arg)\n\n"},
  {"GenerateVertexPointsOn", PyvtkPolyDataPointSampler_GenerateVertexPointsOn, METH_VARARGS,
   "GenerateVertexPointsOn(self) -> None\nC++: virtual void GenerateVertexPointsOn()\n\n"},
  {"GenerateVertexPointsOff", PyvtkPolyDataPointSampler_GenerateVertexPointsOff, METH_VARARGS,
   "GenerateVertexPointsOff(self) -> None\nC++: virtual void GenerateVertexPointsOff()\n\n"},
  {"GetGenerateEdgePoints", PyvtkPolyDataPointSampler_GetGenerateEdgePoints, METH_VARARGS,
   "GetGenerateEdgePoints(self) -> bool\nC++: virtual bool GetGenerateEdgePoints()\n\nSpecify/retrieve a boolean flag indicating whether cell edges\nshould be sampled to produce output points. The default is true.\n"},
  {"SetGenerateEdgePoints", PyvtkPolyDataPointSampler_SetGenerateEdgePoints, METH_VARARGS,
   "SetGenerateEdgePoints(self, _arg:bool) -> None\nC++: virtual void SetGenerateEdgePoints(bool _arg)\n\n"},
  {"GenerateEdgePointsOn", PyvtkPolyDataPointSampler_GenerateEdgePointsOn, METH_VARARGS,
   "GenerateEdgePointsOn(self) -> None\nC++: virtual void GenerateEdgePointsOn()\n\n"},
  {"GenerateEdgePointsOff", PyvtkPolyDataPointSampler_GenerateEdgePointsOff, METH_VARARGS,
   "GenerateEdgePointsOff(self) -> None\nC++: virtual void GenerateEdgePointsOff()\n\n"},
  {"GetGenerateInteriorPoints", PyvtkPolyDataPointSampler_GetGenerateInteriorPoints, METH_VARARGS,
   "GetGenerateInteriorPoints(self) -> bool\nC++: virtual bool GetGenerateInteriorPoints()\n\nSpecify/retrieve a boolean flag indicating whether cell interiors\nshould be sampled to produce output points. The default is true.\n"},
  {"SetGenerateInteriorPoints", PyvtkPolyDataPointSampler_SetGenerateInteriorPoints, METH_VARARGS,
   "SetGenerateInteriorPoints(self, _arg:bool) -> None\nC++: virtual void SetGenerateInteriorPoints(bool _arg)\n\n"},
  {"GenerateInteriorPointsOn", PyvtkPolyDataPointSampler_GenerateInteriorPointsOn, METH_VARARGS,
   "GenerateInteriorPointsOn(self) -> None\nC++: virtual void GenerateInteriorPointsOn()\n\n"},
  {"GenerateInteriorPointsOff", PyvtkPolyDataPointSampler_GenerateInteriorPointsOff, METH_VARARGS,
   "GenerateInteriorPointsOff(self) -> None\nC++: virtual void GenerateInteriorPointsOff()\n\n"},
  {"GetGenerateVertices", PyvtkPolyDataPointSampler_GetGenerateVertices, METH_VARARGS,
   "GetGenerateVertices(self) -> bool\nC++: virtual bool GetGenerateVertices()\n\nSpecify/retrieve a boolean flag indicating whether cell vertices\nshould be generated. Cell vertices are useful if you actually\nwant to display the points (that is, for each point generated, a\nvertex is generated). Recall that VTK only renders vertices and\nnot points.  The default is true.\n"},
  {"SetGenerateVertices", PyvtkPolyDataPointSampler_SetGenerateVertices, METH_VARARGS,
   "SetGenerateVertices(self, _arg:bool) -> None\nC++: virtual void SetGenerateVertices(bool _arg)\n\n"},
  {"GenerateVerticesOn", PyvtkPolyDataPointSampler_GenerateVerticesOn, METH_VARARGS,
   "GenerateVerticesOn(self) -> None\nC++: virtual void GenerateVerticesOn()\n\n"},
  {"GenerateVerticesOff", PyvtkPolyDataPointSampler_GenerateVerticesOff, METH_VARARGS,
   "GenerateVerticesOff(self) -> None\nC++: virtual void GenerateVerticesOff()\n\n"},
  {"GetInterpolatePointData", PyvtkPolyDataPointSampler_GetInterpolatePointData, METH_VARARGS,
   "GetInterpolatePointData(self) -> bool\nC++: virtual bool GetInterpolatePointData()\n\nSpecify/retrieve a boolean flag indicating whether point data\nshould be interpolated onto the newly generated points. If\nenabled, points generated from existing vertices will carry the\nvertex point data; points generated from edges will interpolate\npoint data along each edge; and interior point data (inside\ntriangles, polygons cells) will be interpolated from the cell\nvertices. By default this is off.\n"},
  {"SetInterpolatePointData", PyvtkPolyDataPointSampler_SetInterpolatePointData, METH_VARARGS,
   "SetInterpolatePointData(self, _arg:bool) -> None\nC++: virtual void SetInterpolatePointData(bool _arg)\n\n"},
  {"InterpolatePointDataOn", PyvtkPolyDataPointSampler_InterpolatePointDataOn, METH_VARARGS,
   "InterpolatePointDataOn(self) -> None\nC++: virtual void InterpolatePointDataOn()\n\n"},
  {"InterpolatePointDataOff", PyvtkPolyDataPointSampler_InterpolatePointDataOff, METH_VARARGS,
   "InterpolatePointDataOff(self) -> None\nC++: virtual void InterpolatePointDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataPointSampler_Doc =
  "vtkPolyDataPointSampler - generate points from vtkPolyData\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataPointSampler generates points from input vtkPolyData. The\n"
  "filter has two modes of operation: random point generation, or\n"
  "regular point generation. In random generation mode, points are\n"
  "generated in each polygonal entity using a random approach. In\n"
  "regular generation mode, the points are placed approximately a\n"
  "specified distance apart. Optionally, the points attributes can be\n"
  "interpolated from the generating vertices, edges, and polygons.\n\n"
  "In regular point generation mode, this filter functions as follows.\n"
  "First, it regurgitates all input points, then it samples all lines,\n"
  "plus edges associated with the input polygons and triangle strips to\n"
  "produce edge points. Finally, the interiors of polygons and triangle\n"
  "strips are subsampled to produce points. All of these operations can\n"
  "be enabled or disabled separately. Note that this algorithm only\n"
  "approximately generates points the specified distance apart.\n"
  "Generally the point density is finer than requested.\n\n"
  "In random point generation mode, this filter functions as follows.\n"
  "First, it randomly regurgitates all input points (if enabled), then\n"
  "it randomly samples all lines, plus edges associated with the input\n"
  "polygons and triangle strips to produce edge points (if enabled).\n"
  "Finally, the interiors of polygons and triangle strips are randomly\n"
  "subsampled to produce points. All of these operations can be enabled\n"
  "or disabled separately. Note that this algorithm only approximately\n"
  "generates points the specified distance apart. Generally the point\n"
  "density is finer than requested. Also note that the result is not\n"
  "truly random due to the constraints of the mesh construction.\n\n"
  "@warning\n"
  "Although this algorithm processes general polygons. it does so by\n"
  "performing a fan triangulation. This may produce poor results,\n"
  "especially for concave polygons. For better results, use a triangle\n"
  "filter to pre-tesselate polygons.\n\n"
  "@warning\n"
  "In random point generation mode, producing random edges and vertex\n"
  "points from polygons and triangle strips is less random than is\n"
  "typically desirable. You may wish to disable vertex and edge point\n"
  "generation for a result that is closer to random.\n\n"
  "@warning\n"
  "Point generation can be useful in a variety of applications. For\n"
  "example, generating seed points for glyphing or streamline\n"
  "generation. Another useful application is generating points for\n"
  "implicit modeling. In many cases implicit models can be more\n"
  "efficiently generated from points than from polygons or other\n"
  "primitives.\n\n"
  "@warning\n"
  "When sampling polygons of five sides or more, the polygon is\n"
  "triangulated. This can result in variations in point density near\n"
  "tessellation boundaries.\n\n"
  "@sa\n"
  "vtkTriangleFilter vtkImplicitModeller\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataPointSampler_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkPolyDataPointSampler", // tp_name
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
  PyvtkPolyDataPointSampler_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataPointSampler_StaticNew()
{
  return vtkPolyDataPointSampler::New();
}

PyObject *PyvtkPolyDataPointSampler_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataPointSampler_Type, PyvtkPolyDataPointSampler_Methods,
    "vtkPolyDataPointSampler",
 &PyvtkPolyDataPointSampler_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "REGULAR_GENERATION", vtkPolyDataPointSampler::REGULAR_GENERATION },
        { "RANDOM_GENERATION", vtkPolyDataPointSampler::RANDOM_GENERATION },
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

void PyVTKAddFile_vtkPolyDataPointSampler(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataPointSampler_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataPointSampler", o) != 0)
  {
    Py_DECREF(o);
  }

}

