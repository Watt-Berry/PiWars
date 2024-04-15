// python wrapper for vtkPlaneCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPlaneCutter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlaneCutter(PyObject *dict); }
extern "C" { PyObject *PyvtkPlaneCutter_ClassNew(); }


static PyObject *
PyvtkPlaneCutter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlaneCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlaneCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlaneCutter *tempr = vtkPlaneCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlaneCutter::NewInstance());

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
PyvtkPlaneCutter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlaneCutter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlaneCutter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPlaneCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkPlaneCutter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkPlaneCutter::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkPlaneCutter::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkPlaneCutter::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateAttributes(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetInterpolateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolateAttributes() :
      op->vtkPlaneCutter::GetInterpolateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_InterpolateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOn();
    }
    else
    {
      op->vtkPlaneCutter::InterpolateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_InterpolateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOff();
    }
    else
    {
      op->vtkPlaneCutter::InterpolateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetGeneratePolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePolygons(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetGeneratePolygons(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetGeneratePolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePolygons() :
      op->vtkPlaneCutter::GetGeneratePolygons());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GeneratePolygonsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolygonsOn();
    }
    else
    {
      op->vtkPlaneCutter::GeneratePolygonsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GeneratePolygonsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolygonsOff();
    }
    else
    {
      op->vtkPlaneCutter::GeneratePolygonsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetBuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildTree(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetBuildTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetBuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBuildTree() :
      op->vtkPlaneCutter::GetBuildTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_BuildTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTreeOn();
    }
    else
    {
      op->vtkPlaneCutter::BuildTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_BuildTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTreeOff();
    }
    else
    {
      op->vtkPlaneCutter::BuildTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetBuildHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBuildHierarchy(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetBuildHierarchy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetBuildHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBuildHierarchy() :
      op->vtkPlaneCutter::GetBuildHierarchy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_BuildHierarchyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildHierarchyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildHierarchyOn();
    }
    else
    {
      op->vtkPlaneCutter::BuildHierarchyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_BuildHierarchyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildHierarchyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildHierarchyOff();
    }
    else
    {
      op->vtkPlaneCutter::BuildHierarchyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePoints(temp0);
    }
    else
    {
      op->vtkPlaneCutter::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtkPlaneCutter::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOn();
    }
    else
    {
      op->vtkPlaneCutter::MergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOff();
    }
    else
    {
      op->vtkPlaneCutter::MergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

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
      op->vtkPlaneCutter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkPlaneCutter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkPlaneCutter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlaneCutter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlaneCutter *op = static_cast<vtkPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkPlaneCutter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlaneCutter_Methods[] = {
  {"IsTypeOf", PyvtkPlaneCutter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlaneCutter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlaneCutter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlaneCutter\nC++: static vtkPlaneCutter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlaneCutter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlaneCutter\nC++: vtkPlaneCutter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlaneCutter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlaneCutter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkPlaneCutter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time depends on the delegated cut plane.\n"},
  {"SetPlane", PyvtkPlaneCutter_SetPlane, METH_VARARGS,
   "SetPlane(self, __a:vtkPlane) -> None\nC++: virtual void SetPlane(vtkPlane *)\n\nSpecify the plane (an implicit function) to perform the cutting.\nThe definition of the plane (its origin and normal) is controlled\nvia this instance of vtkPlane.\n"},
  {"GetPlane", PyvtkPlaneCutter_GetPlane, METH_VARARGS,
   "GetPlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetPlane()\n\n"},
  {"SetComputeNormals", PyvtkPlaneCutter_SetComputeNormals, METH_VARARGS,
   "SetComputeNormals(self, _arg:bool) -> None\nC++: virtual void SetComputeNormals(bool _arg)\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. The normal, if generated, is defined\nby cell data associated with the output polygons. By default\ncomputing of normals is disabled.\n"},
  {"GetComputeNormals", PyvtkPlaneCutter_GetComputeNormals, METH_VARARGS,
   "GetComputeNormals(self) -> bool\nC++: virtual bool GetComputeNormals()\n\n"},
  {"ComputeNormalsOn", PyvtkPlaneCutter_ComputeNormalsOn, METH_VARARGS,
   "ComputeNormalsOn(self) -> None\nC++: virtual void ComputeNormalsOn()\n\n"},
  {"ComputeNormalsOff", PyvtkPlaneCutter_ComputeNormalsOff, METH_VARARGS,
   "ComputeNormalsOff(self) -> None\nC++: virtual void ComputeNormalsOff()\n\n"},
  {"SetInterpolateAttributes", PyvtkPlaneCutter_SetInterpolateAttributes, METH_VARARGS,
   "SetInterpolateAttributes(self, _arg:bool) -> None\nC++: virtual void SetInterpolateAttributes(bool _arg)\n\nIndicate whether to interpolate attribute data. By default this\nis enabled. Note that both cell data and point data is\ninterpolated and output, except for image data input where only\npoint data are output.\n"},
  {"GetInterpolateAttributes", PyvtkPlaneCutter_GetInterpolateAttributes, METH_VARARGS,
   "GetInterpolateAttributes(self) -> bool\nC++: virtual bool GetInterpolateAttributes()\n\n"},
  {"InterpolateAttributesOn", PyvtkPlaneCutter_InterpolateAttributesOn, METH_VARARGS,
   "InterpolateAttributesOn(self) -> None\nC++: virtual void InterpolateAttributesOn()\n\n"},
  {"InterpolateAttributesOff", PyvtkPlaneCutter_InterpolateAttributesOff, METH_VARARGS,
   "InterpolateAttributesOff(self) -> None\nC++: virtual void InterpolateAttributesOff()\n\n"},
  {"SetGeneratePolygons", PyvtkPlaneCutter_SetGeneratePolygons, METH_VARARGS,
   "SetGeneratePolygons(self, _arg:bool) -> None\nC++: virtual void SetGeneratePolygons(bool _arg)\n\nIndicate whether to generate polygons instead of triangles when\ncutting structured and rectilinear grid. No effect with other\nkinds of inputs, enabled by default.\n"},
  {"GetGeneratePolygons", PyvtkPlaneCutter_GetGeneratePolygons, METH_VARARGS,
   "GetGeneratePolygons(self) -> bool\nC++: virtual bool GetGeneratePolygons()\n\n"},
  {"GeneratePolygonsOn", PyvtkPlaneCutter_GeneratePolygonsOn, METH_VARARGS,
   "GeneratePolygonsOn(self) -> None\nC++: virtual void GeneratePolygonsOn()\n\n"},
  {"GeneratePolygonsOff", PyvtkPlaneCutter_GeneratePolygonsOff, METH_VARARGS,
   "GeneratePolygonsOff(self) -> None\nC++: virtual void GeneratePolygonsOff()\n\n"},
  {"SetBuildTree", PyvtkPlaneCutter_SetBuildTree, METH_VARARGS,
   "SetBuildTree(self, _arg:bool) -> None\nC++: virtual void SetBuildTree(bool _arg)\n\nIndicate whether to build the sphere tree. Computing the sphere\nwill take some time on the first computation but if the input\ndoes not change, the computation of all further slice will be\nmuch faster. Default is on.\n"},
  {"GetBuildTree", PyvtkPlaneCutter_GetBuildTree, METH_VARARGS,
   "GetBuildTree(self) -> bool\nC++: virtual bool GetBuildTree()\n\n"},
  {"BuildTreeOn", PyvtkPlaneCutter_BuildTreeOn, METH_VARARGS,
   "BuildTreeOn(self) -> None\nC++: virtual void BuildTreeOn()\n\n"},
  {"BuildTreeOff", PyvtkPlaneCutter_BuildTreeOff, METH_VARARGS,
   "BuildTreeOff(self) -> None\nC++: virtual void BuildTreeOff()\n\n"},
  {"SetBuildHierarchy", PyvtkPlaneCutter_SetBuildHierarchy, METH_VARARGS,
   "SetBuildHierarchy(self, _arg:bool) -> None\nC++: virtual void SetBuildHierarchy(bool _arg)\n\nIndicate whether to build tree hierarchy. Computing the tree\nhierarchy can take some time on the first computation but if the\ninput does not change, the computation of all further slice will\nbe faster. Default is on.\n"},
  {"GetBuildHierarchy", PyvtkPlaneCutter_GetBuildHierarchy, METH_VARARGS,
   "GetBuildHierarchy(self) -> bool\nC++: virtual bool GetBuildHierarchy()\n\n"},
  {"BuildHierarchyOn", PyvtkPlaneCutter_BuildHierarchyOn, METH_VARARGS,
   "BuildHierarchyOn(self) -> None\nC++: virtual void BuildHierarchyOn()\n\n"},
  {"BuildHierarchyOff", PyvtkPlaneCutter_BuildHierarchyOff, METH_VARARGS,
   "BuildHierarchyOff(self) -> None\nC++: virtual void BuildHierarchyOff()\n\n"},
  {"SetMergePoints", PyvtkPlaneCutter_SetMergePoints, METH_VARARGS,
   "SetMergePoints(self, _arg:bool) -> None\nC++: virtual void SetMergePoints(bool _arg)\n\nIndicate whether to merge coincident points. Merging can take\nextra time and produces fewer output points, creating a\n\"watertight\" output surface. On the other hand, merging reduced\noutput data size and may be just as fast. MergingPoints = off is\nmeaningful only for vtkUnstructuredGrid, and vtkPolyData that all\nof its input cells are NOT convex polygons. For all the other\ninput types, the output has unique points. Default is off.\n"},
  {"GetMergePoints", PyvtkPlaneCutter_GetMergePoints, METH_VARARGS,
   "GetMergePoints(self) -> bool\nC++: virtual bool GetMergePoints()\n\n"},
  {"MergePointsOn", PyvtkPlaneCutter_MergePointsOn, METH_VARARGS,
   "MergePointsOn(self) -> None\nC++: virtual void MergePointsOn()\n\n"},
  {"MergePointsOff", PyvtkPlaneCutter_MergePointsOff, METH_VARARGS,
   "MergePointsOff(self) -> None\nC++: virtual void MergePointsOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkPlaneCutter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkPlaneCutter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "GetOutputPointsPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkPlaneCutter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "GetOutputPointsPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\n"},
  {"GetOutputPointsPrecision", PyvtkPlaneCutter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlaneCutter_Doc =
  "vtkPlaneCutter - cut any dataset with a plane and generate a\npolygonal cut surface\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkPlaneCutter is a specialization of the vtkCutter algorithm to cut\n"
  "a dataset grid with a single plane. It is designed for performance\n"
  "and an exploratory, fast workflow. It produces output\n"
  "triangles/polygons that result from cutting the input dataset with\n"
  "the specified plane.\n\n"
  "This algorithm is fast because it is threaded, it may delegate to a\n"
  "high-performance cutting algorithm, and/or it may build (in a\n"
  "preprocessing step) a spatial search structure that accelerates the\n"
  "plane cuts. The search structure, which is typically a sphere tree,\n"
  "is used to quickly cull candidate cells.\n\n"
  "Because this filter may build an initial data structure during a\n"
  "preprocessing step, the first execution of the filter may take longer\n"
  "than subsequent operations. Typically the first execution is still\n"
  "faster than vtkCutter (especially with threading enabled), but for\n"
  "certain types of data this may not be true. However if you are using\n"
  "the filter to cut a dataset multiple times (as in an exploratory or\n"
  "interactive workflow) this filter typically works well.\n\n"
  "@warning\n"
  "Polygons can NOT be generated when the input is\n"
  "vtkPolyData/vtkUnstructuredGridBase.\n\n"
  "@warning\n"
  "This filter chooses the output type based on the input type.\n"
  "1) if input is vtkDataSet, output is vtkPolyData.\n"
  "2) if input is vtkPartitionedDataSet, output is\n"
  "   vtkPartitionedDataSet.\n"
  "3) if input is vtkPartitionedDataSetCollection, output is\n"
  "   vtkPartitionedDataSetCollection.\n"
  "4) if input is vtkUniformGridAMR, output is vtkMultiBlockDataSet.\n"
  "5) if input is vtkMultiBlockDataSet, output is vtkMultiBlockDataSet.\n\n"
  "@warning\n"
  "Delegations to other filters:\n"
  "1) vtkImageData/vtkRectilinearGrid/vtkStructuredGrid delegates\n"
  "   vtkStructuredDataPlaneCutter.\n"
  "2) vtkPolyData with convex cells delegates to vtkPolyDataPlaneCutter.\n"
  "3) vtkUnstructuredGrid with linear cells delegates to\n"
  "   vtk3DLinearGridPlaneCutter.\n\n"
  "@warning\n"
  "This filter can optionally produce output, using MergePoints=false,\n"
  "that has duplicate points. only for vtkUnstructuredGrid, and\n"
  "vtkPolyData that all of its input cells are NOT convex polygons. For\n"
  "all the other input types, the output has unique points.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkFlyingEdgesPlaneCutter vtkStructuredDataPlaneCutter\n"
  "vtkPolyDataPlaneCutter vtk3DLinearGridPlaneCutter vtkCutter vtkPlane\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlaneCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPlaneCutter", // tp_name
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
  PyvtkPlaneCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlaneCutter_StaticNew()
{
  return vtkPlaneCutter::New();
}

PyObject *PyvtkPlaneCutter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlaneCutter_Type, PyvtkPlaneCutter_Methods,
    "vtkPlaneCutter",
 &PyvtkPlaneCutter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlaneCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlaneCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlaneCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

