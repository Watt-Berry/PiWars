// python wrapper for vtkGraphMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkGraphMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper_ClassNew
extern "C" { PyObject *PyvtkMapper_ClassNew(); }
#define DECLARED_PyvtkMapper_ClassNew
#endif

static PyObject *
PyvtkGraphMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphMapper *tempr = vtkGraphMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphMapper::NewInstance());

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
PyvtkGraphMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkGraphMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexColorArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetVertexColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexColorArrayName() :
      op->vtkGraphMapper::GetVertexColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorVertices(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetColorVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorVertices() :
      op->vtkGraphMapper::GetColorVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorVerticesOn();
    }
    else
    {
      op->vtkGraphMapper::ColorVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorVerticesOff();
    }
    else
    {
      op->vtkGraphMapper::ColorVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaledGlyphs(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetScaledGlyphs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaledGlyphs() :
      op->vtkGraphMapper::GetScaledGlyphs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ScaledGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaledGlyphsOn();
    }
    else
    {
      op->vtkGraphMapper::ScaledGlyphsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ScaledGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaledGlyphsOff();
    }
    else
    {
      op->vtkGraphMapper::ScaledGlyphsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetScalingArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetScalingArrayName() :
      op->vtkGraphMapper::GetScalingArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeVisibility(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEdgeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeVisibility() :
      op->vtkGraphMapper::GetEdgeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOn();
    }
    else
    {
      op->vtkGraphMapper::EdgeVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOff();
    }
    else
    {
      op->vtkGraphMapper::EdgeVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColorArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEdgeColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeColorArrayName() :
      op->vtkGraphMapper::GetEdgeColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorEdges(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetColorEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorEdges() :
      op->vtkGraphMapper::GetColorEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesOn();
    }
    else
    {
      op->vtkGraphMapper::ColorEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ColorEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesOff();
    }
    else
    {
      op->vtkGraphMapper::ColorEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabledEdgesArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEnabledEdgesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEnabledEdgesArrayName() :
      op->vtkGraphMapper::GetEnabledEdgesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableEdgesByArray(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEnableEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableEdgesByArray() :
      op->vtkGraphMapper::GetEnableEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableEdgesByArrayOn();
    }
    else
    {
      op->vtkGraphMapper::EnableEdgesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableEdgesByArrayOff();
    }
    else
    {
      op->vtkGraphMapper::EnableEdgesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabledVerticesArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEnabledVerticesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEnabledVerticesArrayName() :
      op->vtkGraphMapper::GetEnabledVerticesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnableVerticesByArray(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEnableVerticesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableVerticesByArray() :
      op->vtkGraphMapper::GetEnableVerticesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableVerticesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableVerticesByArrayOn();
    }
    else
    {
      op->vtkGraphMapper::EnableVerticesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_EnableVerticesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableVerticesByArrayOff();
    }
    else
    {
      op->vtkGraphMapper::EnableVerticesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconArrayName(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIconArrayName() :
      op->vtkGraphMapper::GetIconArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_AddIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddIconType(temp0, temp1);
    }
    else
    {
      op->vtkGraphMapper::AddIconType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ClearIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearIconTypes();
    }
    else
    {
      op->vtkGraphMapper::ClearIconTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetIconSize(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconSize(temp0);
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
PyvtkGraphMapper_GetIconSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetIconSize() :
      op->vtkGraphMapper::GetIconSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconAlignment(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetIconTexture() :
      op->vtkGraphMapper::GetIconTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetIconTexture(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconVisibility(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetIconVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIconVisibility() :
      op->vtkGraphMapper::GetIconVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_IconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IconVisibilityOn();
    }
    else
    {
      op->vtkGraphMapper::IconVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_IconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IconVisibilityOff();
    }
    else
    {
      op->vtkGraphMapper::IconVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVertexPointSize() :
      op->vtkGraphMapper::GetVertexPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetVertexPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexPointSize(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetVertexPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetEdgeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetEdgeLineWidth() :
      op->vtkGraphMapper::GetEdgeLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetEdgeLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLineWidth(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetEdgeLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkGraphMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkGraphMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkGraphMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkGraphMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkGraphMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkGraphMapper::GetBounds(temp0);
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
PyvtkGraphMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkGraphMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkGraphMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkGraphMapper_GetEdgeLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetEdgeLookupTable() :
      op->vtkGraphMapper::GetEdgeLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphMapper_GetVertexLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphMapper *op = static_cast<vtkGraphMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetVertexLookupTable() :
      op->vtkGraphMapper::GetVertexLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphMapper_Methods[] = {
  {"IsTypeOf", PyvtkGraphMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphMapper\nC++: static vtkGraphMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphMapper\nC++: vtkGraphMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkGraphMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nMethod initiates the mapping process. Generally sent by the actor\nas each frame is rendered.\n"},
  {"SetVertexColorArrayName", PyvtkGraphMapper_SetVertexColorArrayName, METH_VARARGS,
   "SetVertexColorArrayName(self, name:str) -> None\nC++: void SetVertexColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {"GetVertexColorArrayName", PyvtkGraphMapper_GetVertexColorArrayName, METH_VARARGS,
   "GetVertexColorArrayName(self) -> str\nC++: const char *GetVertexColorArrayName()\n\n"},
  {"SetColorVertices", PyvtkGraphMapper_SetColorVertices, METH_VARARGS,
   "SetColorVertices(self, vis:bool) -> None\nC++: void SetColorVertices(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {"GetColorVertices", PyvtkGraphMapper_GetColorVertices, METH_VARARGS,
   "GetColorVertices(self) -> bool\nC++: bool GetColorVertices()\n\n"},
  {"ColorVerticesOn", PyvtkGraphMapper_ColorVerticesOn, METH_VARARGS,
   "ColorVerticesOn(self) -> None\nC++: void ColorVerticesOn()\n\n"},
  {"ColorVerticesOff", PyvtkGraphMapper_ColorVerticesOff, METH_VARARGS,
   "ColorVerticesOff(self) -> None\nC++: void ColorVerticesOff()\n\n"},
  {"SetScaledGlyphs", PyvtkGraphMapper_SetScaledGlyphs, METH_VARARGS,
   "SetScaledGlyphs(self, arg:bool) -> None\nC++: void SetScaledGlyphs(bool arg)\n\nWhether scaled glyphs are on or not.  Default is off. By default\nthis mapper uses vertex glyphs that do not scale. If you turn\nthis option on you will get circles at each vertex and they will\nscale as you zoom in/out.\n"},
  {"GetScaledGlyphs", PyvtkGraphMapper_GetScaledGlyphs, METH_VARARGS,
   "GetScaledGlyphs(self) -> bool\nC++: virtual bool GetScaledGlyphs()\n\n"},
  {"ScaledGlyphsOn", PyvtkGraphMapper_ScaledGlyphsOn, METH_VARARGS,
   "ScaledGlyphsOn(self) -> None\nC++: virtual void ScaledGlyphsOn()\n\n"},
  {"ScaledGlyphsOff", PyvtkGraphMapper_ScaledGlyphsOff, METH_VARARGS,
   "ScaledGlyphsOff(self) -> None\nC++: virtual void ScaledGlyphsOff()\n\n"},
  {"SetScalingArrayName", PyvtkGraphMapper_SetScalingArrayName, METH_VARARGS,
   "SetScalingArrayName(self, _arg:str) -> None\nC++: virtual void SetScalingArrayName(const char *_arg)\n\nGlyph scaling array name. Default is \"scale\"\n"},
  {"GetScalingArrayName", PyvtkGraphMapper_GetScalingArrayName, METH_VARARGS,
   "GetScalingArrayName(self) -> str\nC++: virtual char *GetScalingArrayName()\n\n"},
  {"SetEdgeVisibility", PyvtkGraphMapper_SetEdgeVisibility, METH_VARARGS,
   "SetEdgeVisibility(self, vis:bool) -> None\nC++: void SetEdgeVisibility(bool vis)\n\nWhether to show edges or not.  Default is on.\n"},
  {"GetEdgeVisibility", PyvtkGraphMapper_GetEdgeVisibility, METH_VARARGS,
   "GetEdgeVisibility(self) -> bool\nC++: bool GetEdgeVisibility()\n\n"},
  {"EdgeVisibilityOn", PyvtkGraphMapper_EdgeVisibilityOn, METH_VARARGS,
   "EdgeVisibilityOn(self) -> None\nC++: virtual void EdgeVisibilityOn()\n\n"},
  {"EdgeVisibilityOff", PyvtkGraphMapper_EdgeVisibilityOff, METH_VARARGS,
   "EdgeVisibilityOff(self) -> None\nC++: virtual void EdgeVisibilityOff()\n\n"},
  {"SetEdgeColorArrayName", PyvtkGraphMapper_SetEdgeColorArrayName, METH_VARARGS,
   "SetEdgeColorArrayName(self, name:str) -> None\nC++: void SetEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetEdgeColorArrayName", PyvtkGraphMapper_GetEdgeColorArrayName, METH_VARARGS,
   "GetEdgeColorArrayName(self) -> str\nC++: const char *GetEdgeColorArrayName()\n\n"},
  {"SetColorEdges", PyvtkGraphMapper_SetColorEdges, METH_VARARGS,
   "SetColorEdges(self, vis:bool) -> None\nC++: void SetColorEdges(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {"GetColorEdges", PyvtkGraphMapper_GetColorEdges, METH_VARARGS,
   "GetColorEdges(self) -> bool\nC++: bool GetColorEdges()\n\n"},
  {"ColorEdgesOn", PyvtkGraphMapper_ColorEdgesOn, METH_VARARGS,
   "ColorEdgesOn(self) -> None\nC++: void ColorEdgesOn()\n\n"},
  {"ColorEdgesOff", PyvtkGraphMapper_ColorEdgesOff, METH_VARARGS,
   "ColorEdgesOff(self) -> None\nC++: void ColorEdgesOff()\n\n"},
  {"SetEnabledEdgesArrayName", PyvtkGraphMapper_SetEnabledEdgesArrayName, METH_VARARGS,
   "SetEnabledEdgesArrayName(self, _arg:str) -> None\nC++: virtual void SetEnabledEdgesArrayName(const char *_arg)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetEnabledEdgesArrayName", PyvtkGraphMapper_GetEnabledEdgesArrayName, METH_VARARGS,
   "GetEnabledEdgesArrayName(self) -> str\nC++: virtual char *GetEnabledEdgesArrayName()\n\n"},
  {"SetEnableEdgesByArray", PyvtkGraphMapper_SetEnableEdgesByArray, METH_VARARGS,
   "SetEnableEdgesByArray(self, _arg:int) -> None\nC++: virtual void SetEnableEdgesByArray(vtkTypeBool _arg)\n\nWhether to enable/disable edges using array values.  Default is\noff.\n"},
  {"GetEnableEdgesByArray", PyvtkGraphMapper_GetEnableEdgesByArray, METH_VARARGS,
   "GetEnableEdgesByArray(self) -> int\nC++: virtual vtkTypeBool GetEnableEdgesByArray()\n\n"},
  {"EnableEdgesByArrayOn", PyvtkGraphMapper_EnableEdgesByArrayOn, METH_VARARGS,
   "EnableEdgesByArrayOn(self) -> None\nC++: virtual void EnableEdgesByArrayOn()\n\n"},
  {"EnableEdgesByArrayOff", PyvtkGraphMapper_EnableEdgesByArrayOff, METH_VARARGS,
   "EnableEdgesByArrayOff(self) -> None\nC++: virtual void EnableEdgesByArrayOff()\n\n"},
  {"SetEnabledVerticesArrayName", PyvtkGraphMapper_SetEnabledVerticesArrayName, METH_VARARGS,
   "SetEnabledVerticesArrayName(self, _arg:str) -> None\nC++: virtual void SetEnabledVerticesArrayName(const char *_arg)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetEnabledVerticesArrayName", PyvtkGraphMapper_GetEnabledVerticesArrayName, METH_VARARGS,
   "GetEnabledVerticesArrayName(self) -> str\nC++: virtual char *GetEnabledVerticesArrayName()\n\n"},
  {"SetEnableVerticesByArray", PyvtkGraphMapper_SetEnableVerticesByArray, METH_VARARGS,
   "SetEnableVerticesByArray(self, _arg:int) -> None\nC++: virtual void SetEnableVerticesByArray(vtkTypeBool _arg)\n\nWhether to enable/disable vertices using array values.  Default\nis off.\n"},
  {"GetEnableVerticesByArray", PyvtkGraphMapper_GetEnableVerticesByArray, METH_VARARGS,
   "GetEnableVerticesByArray(self) -> int\nC++: virtual vtkTypeBool GetEnableVerticesByArray()\n\n"},
  {"EnableVerticesByArrayOn", PyvtkGraphMapper_EnableVerticesByArrayOn, METH_VARARGS,
   "EnableVerticesByArrayOn(self) -> None\nC++: virtual void EnableVerticesByArrayOn()\n\n"},
  {"EnableVerticesByArrayOff", PyvtkGraphMapper_EnableVerticesByArrayOff, METH_VARARGS,
   "EnableVerticesByArrayOff(self) -> None\nC++: virtual void EnableVerticesByArrayOff()\n\n"},
  {"SetIconArrayName", PyvtkGraphMapper_SetIconArrayName, METH_VARARGS,
   "SetIconArrayName(self, name:str) -> None\nC++: void SetIconArrayName(const char *name)\n\nThe array to use for assigning icons.\n"},
  {"GetIconArrayName", PyvtkGraphMapper_GetIconArrayName, METH_VARARGS,
   "GetIconArrayName(self) -> str\nC++: const char *GetIconArrayName()\n\n"},
  {"AddIconType", PyvtkGraphMapper_AddIconType, METH_VARARGS,
   "AddIconType(self, type:str, index:int) -> None\nC++: void AddIconType(const char *type, int index)\n\nAssociate the icon at index \"index\" in the vtkTexture to all\nvertices containing \"type\" as a value in the vertex attribute\narray specified by IconArrayName.\n"},
  {"ClearIconTypes", PyvtkGraphMapper_ClearIconTypes, METH_VARARGS,
   "ClearIconTypes(self) -> None\nC++: void ClearIconTypes()\n\nClear all icon mappings.\n"},
  {"SetIconSize", PyvtkGraphMapper_SetIconSize, METH_VARARGS,
   "SetIconSize(self, size:[int, ...]) -> None\nC++: void SetIconSize(int *size)\n\nSpecify the Width and Height, in pixels, of an icon in the icon\nsheet.\n"},
  {"GetIconSize", PyvtkGraphMapper_GetIconSize, METH_VARARGS,
   "GetIconSize(self) -> Pointer\nC++: int *GetIconSize()\n\n"},
  {"SetIconAlignment", PyvtkGraphMapper_SetIconAlignment, METH_VARARGS,
   "SetIconAlignment(self, alignment:int) -> None\nC++: void SetIconAlignment(int alignment)\n\nSpecify where the icons should be placed in relation to the\nvertex. See vtkIconGlyphFilter.h for possible values.\n"},
  {"GetIconTexture", PyvtkGraphMapper_GetIconTexture, METH_VARARGS,
   "GetIconTexture(self) -> vtkTexture\nC++: vtkTexture *GetIconTexture()\n\nThe texture containing the icon sheet.\n"},
  {"SetIconTexture", PyvtkGraphMapper_SetIconTexture, METH_VARARGS,
   "SetIconTexture(self, texture:vtkTexture) -> None\nC++: void SetIconTexture(vtkTexture *texture)\n\n"},
  {"SetIconVisibility", PyvtkGraphMapper_SetIconVisibility, METH_VARARGS,
   "SetIconVisibility(self, vis:bool) -> None\nC++: void SetIconVisibility(bool vis)\n\nWhether to show icons.  Default is off.\n"},
  {"GetIconVisibility", PyvtkGraphMapper_GetIconVisibility, METH_VARARGS,
   "GetIconVisibility(self) -> bool\nC++: bool GetIconVisibility()\n\n"},
  {"IconVisibilityOn", PyvtkGraphMapper_IconVisibilityOn, METH_VARARGS,
   "IconVisibilityOn(self) -> None\nC++: virtual void IconVisibilityOn()\n\n"},
  {"IconVisibilityOff", PyvtkGraphMapper_IconVisibilityOff, METH_VARARGS,
   "IconVisibilityOff(self) -> None\nC++: virtual void IconVisibilityOff()\n\n"},
  {"GetVertexPointSize", PyvtkGraphMapper_GetVertexPointSize, METH_VARARGS,
   "GetVertexPointSize(self) -> float\nC++: virtual float GetVertexPointSize()\n\nGet/Set the vertex point size\n"},
  {"SetVertexPointSize", PyvtkGraphMapper_SetVertexPointSize, METH_VARARGS,
   "SetVertexPointSize(self, size:float) -> None\nC++: void SetVertexPointSize(float size)\n\n"},
  {"GetEdgeLineWidth", PyvtkGraphMapper_GetEdgeLineWidth, METH_VARARGS,
   "GetEdgeLineWidth(self) -> float\nC++: virtual float GetEdgeLineWidth()\n\nGet/Set the edge line width\n"},
  {"SetEdgeLineWidth", PyvtkGraphMapper_SetEdgeLineWidth, METH_VARARGS,
   "SetEdgeLineWidth(self, width:float) -> None\nC++: void SetEdgeLineWidth(float width)\n\n"},
  {"ReleaseGraphicsResources", PyvtkGraphMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetMTime", PyvtkGraphMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime also considering the lookup table.\n"},
  {"SetInputData", PyvtkGraphMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, input:vtkGraph) -> None\nC++: void SetInputData(vtkGraph *input)\n\nSet the Input of this mapper.\n"},
  {"GetInput", PyvtkGraphMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkGraph\nC++: vtkGraph *GetInput()\n\nGet the input as a vtkDataSet.  This method is overridden in the\nspecialized mapper classes to return more specific data types.\n"},
  {"GetBounds", PyvtkGraphMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double *bounds) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"GetEdgeLookupTable", PyvtkGraphMapper_GetEdgeLookupTable, METH_VARARGS,
   "GetEdgeLookupTable(self) -> vtkLookupTable\nC++: virtual vtkLookupTable *GetEdgeLookupTable()\n\nAccess to the lookup tables used by the vertex and edge mappers.\n"},
  {"GetVertexLookupTable", PyvtkGraphMapper_GetVertexLookupTable, METH_VARARGS,
   "GetVertexLookupTable(self) -> vtkLookupTable\nC++: virtual vtkLookupTable *GetVertexLookupTable()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGraphMapper_Doc =
  "vtkGraphMapper - map vtkGraph and derived classes to graphics\nprimitives\n\n"
  "Superclass: vtkMapper\n\n"
  "vtkGraphMapper is a mapper to map vtkGraph (and all derived classes)\n"
  "to graphics primitives.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkGraphMapper", // tp_name
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
  PyvtkGraphMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphMapper_StaticNew()
{
  return vtkGraphMapper::New();
}

PyObject *PyvtkGraphMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphMapper_Type, PyvtkGraphMapper_Methods,
    "vtkGraphMapper",
 &PyvtkGraphMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

