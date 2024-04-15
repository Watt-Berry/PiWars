// python wrapper for vtkFeatureEdges
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFeatureEdges.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFeatureEdges(PyObject *dict); }
extern "C" { PyObject *PyvtkFeatureEdges_ClassNew(); }


static PyObject *
PyvtkFeatureEdges_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFeatureEdges::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFeatureEdges::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFeatureEdges *tempr = vtkFeatureEdges::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFeatureEdges *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFeatureEdges::NewInstance());

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
PyvtkFeatureEdges_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFeatureEdges::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFeatureEdges::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ExtractAllEdgeTypesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractAllEdgeTypesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractAllEdgeTypesOn();
    }
    else
    {
      op->vtkFeatureEdges::ExtractAllEdgeTypesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ExtractAllEdgeTypesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractAllEdgeTypesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractAllEdgeTypesOff();
    }
    else
    {
      op->vtkFeatureEdges::ExtractAllEdgeTypesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetBoundaryEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetBoundaryEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetBoundaryEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBoundaryEdges() :
      op->vtkFeatureEdges::GetBoundaryEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_BoundaryEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryEdgesOn();
    }
    else
    {
      op->vtkFeatureEdges::BoundaryEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_BoundaryEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundaryEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoundaryEdgesOff();
    }
    else
    {
      op->vtkFeatureEdges::BoundaryEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFeatureEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetFeatureEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFeatureEdges() :
      op->vtkFeatureEdges::GetFeatureEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_FeatureEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgesOn();
    }
    else
    {
      op->vtkFeatureEdges::FeatureEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_FeatureEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FeatureEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FeatureEdgesOff();
    }
    else
    {
      op->vtkFeatureEdges::FeatureEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

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
      op->vtkFeatureEdges::SetFeatureAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMinValue() :
      op->vtkFeatureEdges::GetFeatureAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngleMaxValue() :
      op->vtkFeatureEdges::GetFeatureAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetFeatureAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFeatureAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFeatureAngle() :
      op->vtkFeatureEdges::GetFeatureAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetNonManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonManifoldEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetNonManifoldEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetNonManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetNonManifoldEdges() :
      op->vtkFeatureEdges::GetNonManifoldEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NonManifoldEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldEdgesOn();
    }
    else
    {
      op->vtkFeatureEdges::NonManifoldEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_NonManifoldEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonManifoldEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NonManifoldEdgesOff();
    }
    else
    {
      op->vtkFeatureEdges::NonManifoldEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetManifoldEdges(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetManifoldEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetManifoldEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManifoldEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetManifoldEdges() :
      op->vtkFeatureEdges::GetManifoldEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ManifoldEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManifoldEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManifoldEdgesOn();
    }
    else
    {
      op->vtkFeatureEdges::ManifoldEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ManifoldEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ManifoldEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ManifoldEdgesOff();
    }
    else
    {
      op->vtkFeatureEdges::ManifoldEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassLines(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetPassLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetPassLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassLines() :
      op->vtkFeatureEdges::GetPassLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_PassLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassLinesOn();
    }
    else
    {
      op->vtkFeatureEdges::PassLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_PassLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassLinesOff();
    }
    else
    {
      op->vtkFeatureEdges::PassLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColoring(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetColoring(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColoring() :
      op->vtkFeatureEdges::GetColoring());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ColoringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColoringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColoringOn();
    }
    else
    {
      op->vtkFeatureEdges::ColoringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_ColoringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColoringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColoringOff();
    }
    else
    {
      op->vtkFeatureEdges::ColoringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetRemoveGhostInterfaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveGhostInterfaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveGhostInterfaces(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetRemoveGhostInterfaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetRemoveGhostInterfaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveGhostInterfaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveGhostInterfaces() :
      op->vtkFeatureEdges::GetRemoveGhostInterfaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_RemoveGhostInterfacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostInterfacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostInterfacesOn();
    }
    else
    {
      op->vtkFeatureEdges::RemoveGhostInterfacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_RemoveGhostInterfacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostInterfacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostInterfacesOff();
    }
    else
    {
      op->vtkFeatureEdges::RemoveGhostInterfacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkFeatureEdges::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkFeatureEdges::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkFeatureEdges::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFeatureEdges::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

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
      op->vtkFeatureEdges::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFeatureEdges_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFeatureEdges *op = static_cast<vtkFeatureEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkFeatureEdges::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFeatureEdges_Methods[] = {
  {"IsTypeOf", PyvtkFeatureEdges_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFeatureEdges_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFeatureEdges_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFeatureEdges\nC++: static vtkFeatureEdges *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFeatureEdges_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFeatureEdges\nC++: vtkFeatureEdges *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFeatureEdges_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFeatureEdges_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ExtractAllEdgeTypesOn", PyvtkFeatureEdges_ExtractAllEdgeTypesOn, METH_VARARGS,
   "ExtractAllEdgeTypesOn(self) -> None\nC++: void ExtractAllEdgeTypesOn()\n\nMethods for turning the extraction of all types of edges on; and\nturning the extraction of all types of edges off.\n"},
  {"ExtractAllEdgeTypesOff", PyvtkFeatureEdges_ExtractAllEdgeTypesOff, METH_VARARGS,
   "ExtractAllEdgeTypesOff(self) -> None\nC++: void ExtractAllEdgeTypesOff()\n\n"},
  {"SetBoundaryEdges", PyvtkFeatureEdges_SetBoundaryEdges, METH_VARARGS,
   "SetBoundaryEdges(self, _arg:bool) -> None\nC++: virtual void SetBoundaryEdges(bool _arg)\n\nTurn on/off the extraction of boundary edges.\n"},
  {"GetBoundaryEdges", PyvtkFeatureEdges_GetBoundaryEdges, METH_VARARGS,
   "GetBoundaryEdges(self) -> bool\nC++: virtual bool GetBoundaryEdges()\n\n"},
  {"BoundaryEdgesOn", PyvtkFeatureEdges_BoundaryEdgesOn, METH_VARARGS,
   "BoundaryEdgesOn(self) -> None\nC++: virtual void BoundaryEdgesOn()\n\n"},
  {"BoundaryEdgesOff", PyvtkFeatureEdges_BoundaryEdgesOff, METH_VARARGS,
   "BoundaryEdgesOff(self) -> None\nC++: virtual void BoundaryEdgesOff()\n\n"},
  {"SetFeatureEdges", PyvtkFeatureEdges_SetFeatureEdges, METH_VARARGS,
   "SetFeatureEdges(self, _arg:bool) -> None\nC++: virtual void SetFeatureEdges(bool _arg)\n\nTurn on/off the extraction of feature edges.\n"},
  {"GetFeatureEdges", PyvtkFeatureEdges_GetFeatureEdges, METH_VARARGS,
   "GetFeatureEdges(self) -> bool\nC++: virtual bool GetFeatureEdges()\n\n"},
  {"FeatureEdgesOn", PyvtkFeatureEdges_FeatureEdgesOn, METH_VARARGS,
   "FeatureEdgesOn(self) -> None\nC++: virtual void FeatureEdgesOn()\n\n"},
  {"FeatureEdgesOff", PyvtkFeatureEdges_FeatureEdgesOff, METH_VARARGS,
   "FeatureEdgesOff(self) -> None\nC++: virtual void FeatureEdgesOff()\n\n"},
  {"SetFeatureAngle", PyvtkFeatureEdges_SetFeatureAngle, METH_VARARGS,
   "SetFeatureAngle(self, _arg:float) -> None\nC++: virtual void SetFeatureAngle(double _arg)\n\nSpecify the feature angle for extracting feature edges.\n"},
  {"GetFeatureAngleMinValue", PyvtkFeatureEdges_GetFeatureAngleMinValue, METH_VARARGS,
   "GetFeatureAngleMinValue(self) -> float\nC++: virtual double GetFeatureAngleMinValue()\n\n"},
  {"GetFeatureAngleMaxValue", PyvtkFeatureEdges_GetFeatureAngleMaxValue, METH_VARARGS,
   "GetFeatureAngleMaxValue(self) -> float\nC++: virtual double GetFeatureAngleMaxValue()\n\n"},
  {"GetFeatureAngle", PyvtkFeatureEdges_GetFeatureAngle, METH_VARARGS,
   "GetFeatureAngle(self) -> float\nC++: virtual double GetFeatureAngle()\n\n"},
  {"SetNonManifoldEdges", PyvtkFeatureEdges_SetNonManifoldEdges, METH_VARARGS,
   "SetNonManifoldEdges(self, _arg:bool) -> None\nC++: virtual void SetNonManifoldEdges(bool _arg)\n\nTurn on/off the extraction of non-manifold edges.\n"},
  {"GetNonManifoldEdges", PyvtkFeatureEdges_GetNonManifoldEdges, METH_VARARGS,
   "GetNonManifoldEdges(self) -> bool\nC++: virtual bool GetNonManifoldEdges()\n\n"},
  {"NonManifoldEdgesOn", PyvtkFeatureEdges_NonManifoldEdgesOn, METH_VARARGS,
   "NonManifoldEdgesOn(self) -> None\nC++: virtual void NonManifoldEdgesOn()\n\n"},
  {"NonManifoldEdgesOff", PyvtkFeatureEdges_NonManifoldEdgesOff, METH_VARARGS,
   "NonManifoldEdgesOff(self) -> None\nC++: virtual void NonManifoldEdgesOff()\n\n"},
  {"SetManifoldEdges", PyvtkFeatureEdges_SetManifoldEdges, METH_VARARGS,
   "SetManifoldEdges(self, _arg:bool) -> None\nC++: virtual void SetManifoldEdges(bool _arg)\n\nTurn on/off the extraction of manifold edges. This typically\ncorrespond to interior edges.\n"},
  {"GetManifoldEdges", PyvtkFeatureEdges_GetManifoldEdges, METH_VARARGS,
   "GetManifoldEdges(self) -> bool\nC++: virtual bool GetManifoldEdges()\n\n"},
  {"ManifoldEdgesOn", PyvtkFeatureEdges_ManifoldEdgesOn, METH_VARARGS,
   "ManifoldEdgesOn(self) -> None\nC++: virtual void ManifoldEdgesOn()\n\n"},
  {"ManifoldEdgesOff", PyvtkFeatureEdges_ManifoldEdgesOff, METH_VARARGS,
   "ManifoldEdgesOff(self) -> None\nC++: virtual void ManifoldEdgesOff()\n\n"},
  {"SetPassLines", PyvtkFeatureEdges_SetPassLines, METH_VARARGS,
   "SetPassLines(self, _arg:bool) -> None\nC++: virtual void SetPassLines(bool _arg)\n\nTurn on/off passing input lines. If this flag is on, then all\ncells living inside the `Lines` cell array of the input are\ncopied into the output.\n\note Input poly lines are split into separate lines in the output.\n"},
  {"GetPassLines", PyvtkFeatureEdges_GetPassLines, METH_VARARGS,
   "GetPassLines(self) -> bool\nC++: virtual bool GetPassLines()\n\n"},
  {"PassLinesOn", PyvtkFeatureEdges_PassLinesOn, METH_VARARGS,
   "PassLinesOn(self) -> None\nC++: virtual void PassLinesOn()\n\n"},
  {"PassLinesOff", PyvtkFeatureEdges_PassLinesOff, METH_VARARGS,
   "PassLinesOff(self) -> None\nC++: virtual void PassLinesOff()\n\n"},
  {"SetColoring", PyvtkFeatureEdges_SetColoring, METH_VARARGS,
   "SetColoring(self, _arg:bool) -> None\nC++: virtual void SetColoring(bool _arg)\n\nTurn on/off the coloring of edges by type.\n"},
  {"GetColoring", PyvtkFeatureEdges_GetColoring, METH_VARARGS,
   "GetColoring(self) -> bool\nC++: virtual bool GetColoring()\n\n"},
  {"ColoringOn", PyvtkFeatureEdges_ColoringOn, METH_VARARGS,
   "ColoringOn(self) -> None\nC++: virtual void ColoringOn()\n\n"},
  {"ColoringOff", PyvtkFeatureEdges_ColoringOff, METH_VARARGS,
   "ColoringOff(self) -> None\nC++: virtual void ColoringOff()\n\n"},
  {"SetRemoveGhostInterfaces", PyvtkFeatureEdges_SetRemoveGhostInterfaces, METH_VARARGS,
   "SetRemoveGhostInterfaces(self, _arg:bool) -> None\nC++: virtual void SetRemoveGhostInterfaces(bool _arg)\n\nTurn on/off creating edges at ghost interfaces. An edge is at a\nghost interface if it belongs to at least one ghost cell. This is\nturned on by default. When turned off, only edges that solely\nbelong to ghost cells are discarded from the output. When turned\non, edges are discarded if the belong to at least one ghost cell.\n\note In order for the interfaces between ranks to be removed,\nghost cells must be first generated.\n@sa vtkGhostCellsGenerator\n"},
  {"GetRemoveGhostInterfaces", PyvtkFeatureEdges_GetRemoveGhostInterfaces, METH_VARARGS,
   "GetRemoveGhostInterfaces(self) -> bool\nC++: virtual bool GetRemoveGhostInterfaces()\n\n"},
  {"RemoveGhostInterfacesOn", PyvtkFeatureEdges_RemoveGhostInterfacesOn, METH_VARARGS,
   "RemoveGhostInterfacesOn(self) -> None\nC++: virtual void RemoveGhostInterfacesOn()\n\n"},
  {"RemoveGhostInterfacesOff", PyvtkFeatureEdges_RemoveGhostInterfacesOff, METH_VARARGS,
   "RemoveGhostInterfacesOff(self) -> None\nC++: virtual void RemoveGhostInterfacesOff()\n\n"},
  {"SetLocator", PyvtkFeatureEdges_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkFeatureEdges_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkFeatureEdges_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified.\n"},
  {"GetMTime", PyvtkFeatureEdges_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn MTime also considering the locator.\n"},
  {"SetOutputPointsPrecision", PyvtkFeatureEdges_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output point type. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", PyvtkFeatureEdges_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFeatureEdges_Doc =
  "vtkFeatureEdges - extract interior, boundary, non-manifold, and/or\n         sharp edges from polygonal data\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkFeatureEdges is a filter to extract special types of edges from\n"
  "input polygonal data. These edges are either 1) boundary (used by one\n"
  "polygon) or a line cell; 2) non-manifold (used by three or more\n"
  "polygons); 3) feature edges (edges used by two triangles and whose\n"
  "dihedral angle > FeatureAngle); or 4) manifold edges (edges used by\n"
  "exactly two polygons). These edges may be extracted in any\n"
  "combination. Edges may also be \"colored\" (i.e., scalar values\n"
  "assigned) based on edge type. The cell coloring is assigned to the\n"
  "cell data of the extracted edges.\n\n"
  "@warning\n"
  "To see the coloring of the lines you may have to set the ScalarMode\n"
  "instance variable of the mapper to SetScalarModeToUseCellData().\n"
  "(This is only a problem if there are point data scalars.)\n\n"
  "@sa\n"
  "vtkExtractEdges\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFeatureEdges_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkFeatureEdges", // tp_name
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
  PyvtkFeatureEdges_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFeatureEdges_StaticNew()
{
  return vtkFeatureEdges::New();
}

PyObject *PyvtkFeatureEdges_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFeatureEdges_Type, PyvtkFeatureEdges_Methods,
    "vtkFeatureEdges",
 &PyvtkFeatureEdges_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFeatureEdges(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFeatureEdges_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFeatureEdges", o) != 0)
  {
    Py_DECREF(o);
  }

}

