// python wrapper for vtkStructuredDataPlaneCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStructuredDataPlaneCutter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredDataPlaneCutter(PyObject *dict); }
extern "C" { PyObject *PyvtkStructuredDataPlaneCutter_ClassNew(); }


static PyObject *
PyvtkStructuredDataPlaneCutter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredDataPlaneCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredDataPlaneCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredDataPlaneCutter *tempr = vtkStructuredDataPlaneCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredDataPlaneCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredDataPlaneCutter::NewInstance());

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
PyvtkStructuredDataPlaneCutter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStructuredDataPlaneCutter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStructuredDataPlaneCutter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkStructuredDataPlaneCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

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
      op->vtkStructuredDataPlaneCutter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkStructuredDataPlaneCutter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetGeneratePolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

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
      op->vtkStructuredDataPlaneCutter::SetGeneratePolygons(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetGeneratePolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePolygons() :
      op->vtkStructuredDataPlaneCutter::GetGeneratePolygons());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GeneratePolygonsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolygonsOn();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::GeneratePolygonsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GeneratePolygonsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePolygonsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePolygonsOff();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::GeneratePolygonsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetBuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

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
      op->vtkStructuredDataPlaneCutter::SetBuildTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetBuildTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBuildTree() :
      op->vtkStructuredDataPlaneCutter::GetBuildTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_BuildTreeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTreeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTreeOn();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::BuildTreeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_BuildTreeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildTreeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildTreeOff();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::BuildTreeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetBuildHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBuildHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

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
      op->vtkStructuredDataPlaneCutter::SetBuildHierarchy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetBuildHierarchy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuildHierarchy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBuildHierarchy() :
      op->vtkStructuredDataPlaneCutter::GetBuildHierarchy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_BuildHierarchyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildHierarchyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildHierarchyOn();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::BuildHierarchyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_BuildHierarchyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildHierarchyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildHierarchyOff();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::BuildHierarchyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetSphereTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  vtkSphereTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSphereTree"))
  {
    if (ap.IsBound())
    {
      op->SetSphereTree(temp0);
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::SetSphereTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetSphereTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSphereTree *tempr = (ap.IsBound() ?
      op->GetSphereTree() :
      op->vtkStructuredDataPlaneCutter::GetSphereTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

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
      op->vtkStructuredDataPlaneCutter::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkStructuredDataPlaneCutter::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

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
      op->vtkStructuredDataPlaneCutter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkStructuredDataPlaneCutter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkStructuredDataPlaneCutter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkStructuredDataPlaneCutter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

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
      op->vtkStructuredDataPlaneCutter::SetInterpolateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolateAttributes() :
      op->vtkStructuredDataPlaneCutter::GetInterpolateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_InterpolateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOn();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::InterpolateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_InterpolateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOff();
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::InterpolateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_SetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBatchSize(temp0);
    }
    else
    {
      op->vtkStructuredDataPlaneCutter::SetBatchSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetBatchSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMinValue() :
      op->vtkStructuredDataPlaneCutter::GetBatchSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetBatchSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSizeMaxValue() :
      op->vtkStructuredDataPlaneCutter::GetBatchSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredDataPlaneCutter_GetBatchSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBatchSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredDataPlaneCutter *op = static_cast<vtkStructuredDataPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBatchSize() :
      op->vtkStructuredDataPlaneCutter::GetBatchSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkStructuredDataPlaneCutter_Methods[] = {
  {"IsTypeOf", PyvtkStructuredDataPlaneCutter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredDataPlaneCutter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredDataPlaneCutter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStructuredDataPlaneCutter\nC++: static vtkStructuredDataPlaneCutter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredDataPlaneCutter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStructuredDataPlaneCutter\nC++: vtkStructuredDataPlaneCutter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStructuredDataPlaneCutter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStructuredDataPlaneCutter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkStructuredDataPlaneCutter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time depends on the delegated cut plane.\n"},
  {"SetPlane", PyvtkStructuredDataPlaneCutter_SetPlane, METH_VARARGS,
   "SetPlane(self, __a:vtkPlane) -> None\nC++: virtual void SetPlane(vtkPlane *)\n\nSpecify the plane (an implicit function) to perform the cutting.\nThe definition of the plane (its origin and normal) is controlled\nvia this instance of vtkPlane.\n"},
  {"GetPlane", PyvtkStructuredDataPlaneCutter_GetPlane, METH_VARARGS,
   "GetPlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetPlane()\n\n"},
  {"SetGeneratePolygons", PyvtkStructuredDataPlaneCutter_SetGeneratePolygons, METH_VARARGS,
   "SetGeneratePolygons(self, _arg:bool) -> None\nC++: virtual void SetGeneratePolygons(bool _arg)\n\nIndicate whether to generate polygons instead of triangles\n\nDefault is on.\n"},
  {"GetGeneratePolygons", PyvtkStructuredDataPlaneCutter_GetGeneratePolygons, METH_VARARGS,
   "GetGeneratePolygons(self) -> bool\nC++: virtual bool GetGeneratePolygons()\n\n"},
  {"GeneratePolygonsOn", PyvtkStructuredDataPlaneCutter_GeneratePolygonsOn, METH_VARARGS,
   "GeneratePolygonsOn(self) -> None\nC++: virtual void GeneratePolygonsOn()\n\n"},
  {"GeneratePolygonsOff", PyvtkStructuredDataPlaneCutter_GeneratePolygonsOff, METH_VARARGS,
   "GeneratePolygonsOff(self) -> None\nC++: virtual void GeneratePolygonsOff()\n\n"},
  {"SetBuildTree", PyvtkStructuredDataPlaneCutter_SetBuildTree, METH_VARARGS,
   "SetBuildTree(self, _arg:bool) -> None\nC++: virtual void SetBuildTree(bool _arg)\n\nIndicate whether to build the sphere tree. Computing the sphere\nwill take some time on the first computation but if the input\ndoes not change, the computation of all further slice will be\nmuch faster.\n\nDefault is on.\n"},
  {"GetBuildTree", PyvtkStructuredDataPlaneCutter_GetBuildTree, METH_VARARGS,
   "GetBuildTree(self) -> bool\nC++: virtual bool GetBuildTree()\n\n"},
  {"BuildTreeOn", PyvtkStructuredDataPlaneCutter_BuildTreeOn, METH_VARARGS,
   "BuildTreeOn(self) -> None\nC++: virtual void BuildTreeOn()\n\n"},
  {"BuildTreeOff", PyvtkStructuredDataPlaneCutter_BuildTreeOff, METH_VARARGS,
   "BuildTreeOff(self) -> None\nC++: virtual void BuildTreeOff()\n\n"},
  {"SetBuildHierarchy", PyvtkStructuredDataPlaneCutter_SetBuildHierarchy, METH_VARARGS,
   "SetBuildHierarchy(self, _arg:bool) -> None\nC++: virtual void SetBuildHierarchy(bool _arg)\n\nIndicate whether to build tree hierarchy. Computing the tree\nhierarchy can take some time on the first computation but if the\ninput does not change, the computation of all further slice will\nbe faster.\n\nDefault is on.\n"},
  {"GetBuildHierarchy", PyvtkStructuredDataPlaneCutter_GetBuildHierarchy, METH_VARARGS,
   "GetBuildHierarchy(self) -> bool\nC++: virtual bool GetBuildHierarchy()\n\n"},
  {"BuildHierarchyOn", PyvtkStructuredDataPlaneCutter_BuildHierarchyOn, METH_VARARGS,
   "BuildHierarchyOn(self) -> None\nC++: virtual void BuildHierarchyOn()\n\n"},
  {"BuildHierarchyOff", PyvtkStructuredDataPlaneCutter_BuildHierarchyOff, METH_VARARGS,
   "BuildHierarchyOff(self) -> None\nC++: virtual void BuildHierarchyOff()\n\n"},
  {"SetSphereTree", PyvtkStructuredDataPlaneCutter_SetSphereTree, METH_VARARGS,
   "SetSphereTree(self, __a:vtkSphereTree) -> None\nC++: virtual void SetSphereTree(vtkSphereTree *)\n\nSpecify the sphere tree object. If defined, the sphere tree will\nnot be built unless the dataset has changed.\n"},
  {"GetSphereTree", PyvtkStructuredDataPlaneCutter_GetSphereTree, METH_VARARGS,
   "GetSphereTree(self) -> vtkSphereTree\nC++: virtual vtkSphereTree *GetSphereTree()\n\n"},
  {"SetComputeNormals", PyvtkStructuredDataPlaneCutter_SetComputeNormals, METH_VARARGS,
   "SetComputeNormals(self, _arg:bool) -> None\nC++: virtual void SetComputeNormals(bool _arg)\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal.\n\nDefault is off.\n"},
  {"GetComputeNormals", PyvtkStructuredDataPlaneCutter_GetComputeNormals, METH_VARARGS,
   "GetComputeNormals(self) -> bool\nC++: virtual bool GetComputeNormals()\n\n"},
  {"ComputeNormalsOn", PyvtkStructuredDataPlaneCutter_ComputeNormalsOn, METH_VARARGS,
   "ComputeNormalsOn(self) -> None\nC++: virtual void ComputeNormalsOn()\n\n"},
  {"ComputeNormalsOff", PyvtkStructuredDataPlaneCutter_ComputeNormalsOff, METH_VARARGS,
   "ComputeNormalsOff(self) -> None\nC++: virtual void ComputeNormalsOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkStructuredDataPlaneCutter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkStructuredDataPlaneCutter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "GetOutputPointsPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkStructuredDataPlaneCutter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "GetOutputPointsPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\n"},
  {"GetOutputPointsPrecision", PyvtkStructuredDataPlaneCutter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {"SetInterpolateAttributes", PyvtkStructuredDataPlaneCutter_SetInterpolateAttributes, METH_VARARGS,
   "SetInterpolateAttributes(self, _arg:bool) -> None\nC++: virtual void SetInterpolateAttributes(bool _arg)\n\nIndicate whether to interpolate attribute data. Note that both\ncell data and point data is interpolated and output\n\nDefault is on.\n"},
  {"GetInterpolateAttributes", PyvtkStructuredDataPlaneCutter_GetInterpolateAttributes, METH_VARARGS,
   "GetInterpolateAttributes(self) -> bool\nC++: virtual bool GetInterpolateAttributes()\n\n"},
  {"InterpolateAttributesOn", PyvtkStructuredDataPlaneCutter_InterpolateAttributesOn, METH_VARARGS,
   "InterpolateAttributesOn(self) -> None\nC++: virtual void InterpolateAttributesOn()\n\n"},
  {"InterpolateAttributesOff", PyvtkStructuredDataPlaneCutter_InterpolateAttributesOff, METH_VARARGS,
   "InterpolateAttributesOff(self) -> None\nC++: virtual void InterpolateAttributesOff()\n\n"},
  {"SetBatchSize", PyvtkStructuredDataPlaneCutter_SetBatchSize, METH_VARARGS,
   "SetBatchSize(self, _arg:int) -> None\nC++: virtual void SetBatchSize(unsigned int _arg)\n\nSpecify the number of input cells in a batch, where a batch\ndefines a subset of the input cells operated on during threaded\nexecution. Generally this is only used for debugging or\nperformance studies (since batch size affects the thread\nworkload).\n\nDefault is 1000.\n"},
  {"GetBatchSizeMinValue", PyvtkStructuredDataPlaneCutter_GetBatchSizeMinValue, METH_VARARGS,
   "GetBatchSizeMinValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMinValue()\n\n"},
  {"GetBatchSizeMaxValue", PyvtkStructuredDataPlaneCutter_GetBatchSizeMaxValue, METH_VARARGS,
   "GetBatchSizeMaxValue(self) -> int\nC++: virtual unsigned int GetBatchSizeMaxValue()\n\n"},
  {"GetBatchSize", PyvtkStructuredDataPlaneCutter_GetBatchSize, METH_VARARGS,
   "GetBatchSize(self) -> int\nC++: virtual unsigned int GetBatchSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStructuredDataPlaneCutter_Doc =
  "vtkStructuredDataPlaneCutter - fast plane cutting of\nvtkImageData/vtkRectilinearGrid/vtkStructuredGrid\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkStructuredDataPlaneCutter is a specialized filter that cuts an\n"
  "input vtkImageData/vtkRectilinearGrid/vtkStructuredGrid. The filter\n"
  "is designed for high speed.\n\n"
  "To use this filter you must specify an input\n"
  "vtkImageData/vtkRectilinearGrid/ vtkStructuredGrid and a plane to cut\n"
  "with.\n\n"
  "This algorithm is linear with regard to cells. Tt may build (in a\n"
  "preprocessing step) a spatial search structure that accelerates the\n"
  "plane cuts. The search structure, which is typically a sphere tree,\n"
  "is used to quickly cull candidate cells.\n\n"
  "@warning\n"
  "This filter delegates to vtkFlyingEdgesPlaneCutter for vtkImageData\n"
  "if you DON'T want to generate polygons.\n\n"
  "@warning\n"
  "This class is templated. It may run slower than serial execution if\n"
  "the code is not optimized during compilation. Build in Release or\n"
  "ReleaseWithDebugInfo.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkCutter vtkPlaneCutter vtkFlyingEdgesPlaneCutter\n"
  "vtk3DLinearGridPlaneCutter vtkPolyDataPlaneCutter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredDataPlaneCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkStructuredDataPlaneCutter", // tp_name
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
  PyvtkStructuredDataPlaneCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStructuredDataPlaneCutter_StaticNew()
{
  return vtkStructuredDataPlaneCutter::New();
}

PyObject *PyvtkStructuredDataPlaneCutter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStructuredDataPlaneCutter_Type, PyvtkStructuredDataPlaneCutter_Methods,
    "vtkStructuredDataPlaneCutter",
 &PyvtkStructuredDataPlaneCutter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredDataPlaneCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredDataPlaneCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredDataPlaneCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

