// python wrapper for vtkGraphLayoutView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphLayoutView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphLayoutView(PyObject *dict); }
extern "C" { PyObject *PyvtkGraphLayoutView_ClassNew(); }

#ifndef DECLARED_PyvtkRenderView_ClassNew
extern "C" { PyObject *PyvtkRenderView_ClassNew(); }
#define DECLARED_PyvtkRenderView_ClassNew
#endif

static PyObject *
PyvtkGraphLayoutView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphLayoutView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphLayoutView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphLayoutView *tempr = vtkGraphLayoutView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphLayoutView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphLayoutView::NewInstance());

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
PyvtkGraphLayoutView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphLayoutView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphLayoutView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexLabelArrayName(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetVertexLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexLabelArrayName() :
      op->vtkGraphLayoutView::GetVertexLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLabelArrayName(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeLabelArrayName() :
      op->vtkGraphLayoutView::GetEdgeLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexLabelVisibility(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetVertexLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVertexLabelVisibility() :
      op->vtkGraphLayoutView::GetVertexLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_VertexLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexLabelVisibilityOn();
    }
    else
    {
      op->vtkGraphLayoutView::VertexLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_VertexLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexLabelVisibilityOff();
    }
    else
    {
      op->vtkGraphLayoutView::VertexLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetHideVertexLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideVertexLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHideVertexLabelsOnInteraction(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetHideVertexLabelsOnInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetHideVertexLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideVertexLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHideVertexLabelsOnInteraction() :
      op->vtkGraphLayoutView::GetHideVertexLabelsOnInteraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_HideVertexLabelsOnInteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideVertexLabelsOnInteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideVertexLabelsOnInteractionOn();
    }
    else
    {
      op->vtkGraphLayoutView::HideVertexLabelsOnInteractionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_HideVertexLabelsOnInteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideVertexLabelsOnInteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideVertexLabelsOnInteractionOff();
    }
    else
    {
      op->vtkGraphLayoutView::HideVertexLabelsOnInteractionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeVisibility() :
      op->vtkGraphLayoutView::GetEdgeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOn();
    }
    else
    {
      op->vtkGraphLayoutView::EdgeVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOff();
    }
    else
    {
      op->vtkGraphLayoutView::EdgeVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLabelVisibility(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeLabelVisibility() :
      op->vtkGraphLayoutView::GetEdgeLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeLabelVisibilityOn();
    }
    else
    {
      op->vtkGraphLayoutView::EdgeLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeLabelVisibilityOff();
    }
    else
    {
      op->vtkGraphLayoutView::EdgeLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetHideEdgeLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideEdgeLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHideEdgeLabelsOnInteraction(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetHideEdgeLabelsOnInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetHideEdgeLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideEdgeLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHideEdgeLabelsOnInteraction() :
      op->vtkGraphLayoutView::GetHideEdgeLabelsOnInteraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_HideEdgeLabelsOnInteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideEdgeLabelsOnInteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideEdgeLabelsOnInteractionOn();
    }
    else
    {
      op->vtkGraphLayoutView::HideEdgeLabelsOnInteractionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_HideEdgeLabelsOnInteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideEdgeLabelsOnInteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideEdgeLabelsOnInteractionOff();
    }
    else
    {
      op->vtkGraphLayoutView::HideEdgeLabelsOnInteractionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetVertexColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexColorArrayName() :
      op->vtkGraphLayoutView::GetVertexColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetColorVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetColorVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorVertices() :
      op->vtkGraphLayoutView::GetColorVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ColorVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorVerticesOn();
    }
    else
    {
      op->vtkGraphLayoutView::ColorVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ColorVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorVerticesOff();
    }
    else
    {
      op->vtkGraphLayoutView::ColorVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEdgeColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeColorArrayName() :
      op->vtkGraphLayoutView::GetEdgeColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetColorEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorEdges() :
      op->vtkGraphLayoutView::GetColorEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ColorEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesOn();
    }
    else
    {
      op->vtkGraphLayoutView::ColorEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ColorEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesOff();
    }
    else
    {
      op->vtkGraphLayoutView::ColorEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeSelection(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeSelection() :
      op->vtkGraphLayoutView::GetEdgeSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeSelectionOn();
    }
    else
    {
      op->vtkGraphLayoutView::EdgeSelectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_EdgeSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeSelectionOff();
    }
    else
    {
      op->vtkGraphLayoutView::EdgeSelectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEnabledEdgesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEnabledEdgesArrayName() :
      op->vtkGraphLayoutView::GetEnabledEdgesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
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
      op->vtkGraphLayoutView::SetEnableEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableEdgesByArray() :
      op->vtkGraphLayoutView::GetEnableEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetEnabledVerticesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEnabledVerticesArrayName() :
      op->vtkGraphLayoutView::GetEnabledVerticesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
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
      op->vtkGraphLayoutView::SetEnableVerticesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableVerticesByArray() :
      op->vtkGraphLayoutView::GetEnableVerticesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetScalingArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalingArrayName() :
      op->vtkGraphLayoutView::GetScalingArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetScaledGlyphs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetScaledGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaledGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaledGlyphs() :
      op->vtkGraphLayoutView::GetScaledGlyphs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ScaledGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaledGlyphsOn();
    }
    else
    {
      op->vtkGraphLayoutView::ScaledGlyphsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ScaledGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaledGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaledGlyphsOff();
    }
    else
    {
      op->vtkGraphLayoutView::ScaledGlyphsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  vtkGraphLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraphLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphLayoutView_SetLayoutStrategy_Methods[] = {
  {"SetLayoutStrategy", PyvtkGraphLayoutView_SetLayoutStrategy_s1, METH_VARARGS,
   "@z"},
  {"SetLayoutStrategy", PyvtkGraphLayoutView_SetLayoutStrategy_s2, METH_VARARGS,
   "@V *vtkGraphLayoutStrategy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGraphLayoutView_SetLayoutStrategy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutStrategy");
  return nullptr;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToRandom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToRandom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToRandom();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToRandom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToForceDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToForceDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToForceDirected();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToForceDirected();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToSimple2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSimple2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToSimple2D();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToSimple2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToClustering2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToClustering2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToClustering2D();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToClustering2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToCommunity2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCommunity2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCommunity2D();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToCommunity2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToFast2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToFast2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToFast2D();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToFast2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToPassThrough();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToPassThrough();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToCircular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCircular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCircular();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToCircular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToTree();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToCosmicTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCosmicTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCosmicTree();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToCosmicTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCone();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToCone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetLayoutStrategyToSpanTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSpanTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToSpanTree();
    }
    else
    {
      op->vtkGraphLayoutView::SetLayoutStrategyToSpanTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetLayoutStrategyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLayoutStrategyName() :
      op->vtkGraphLayoutView::GetLayoutStrategyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkGraphLayoutView::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLayoutStrategy(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  vtkEdgeLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEdgeLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLayoutStrategy(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphLayoutView_SetEdgeLayoutStrategy_Methods[] = {
  {"SetEdgeLayoutStrategy", PyvtkGraphLayoutView_SetEdgeLayoutStrategy_s1, METH_VARARGS,
   "@z"},
  {"SetEdgeLayoutStrategy", PyvtkGraphLayoutView_SetEdgeLayoutStrategy_s2, METH_VARARGS,
   "@V *vtkEdgeLayoutStrategy"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGraphLayoutView_SetEdgeLayoutStrategy_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeLayoutStrategy");
  return nullptr;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategyToArcParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToArcParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLayoutStrategyToArcParallel();
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeLayoutStrategyToArcParallel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLayoutStrategyToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLayoutStrategyToPassThrough();
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeLayoutStrategyToPassThrough();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLayoutStrategyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLayoutStrategyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeLayoutStrategyName() :
      op->vtkGraphLayoutView::GetEdgeLayoutStrategyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEdgeLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetEdgeLayoutStrategy() :
      op->vtkGraphLayoutView::GetEdgeLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_AddIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::AddIconType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ClearIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearIconTypes();
    }
    else
    {
      op->vtkGraphLayoutView::ClearIconTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetIconAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetIconVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIconVisibility() :
      op->vtkGraphLayoutView::GetIconVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_IconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IconVisibilityOn();
    }
    else
    {
      op->vtkGraphLayoutView::IconVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_IconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IconVisibilityOff();
    }
    else
    {
      op->vtkGraphLayoutView::IconVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

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
      op->vtkGraphLayoutView::SetIconArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetIconArrayName() :
      op->vtkGraphLayoutView::GetIconArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphType(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkGraphLayoutView::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexLabelFontSize(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetVertexLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertexLabelFontSize() :
      op->vtkGraphLayoutView::GetVertexLabelFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLabelFontSize(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeLabelFontSize() :
      op->vtkGraphLayoutView::GetEdgeLabelFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeScalarBarVisibility(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetEdgeScalarBarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeScalarBarVisibility() :
      op->vtkGraphLayoutView::GetEdgeScalarBarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_SetVertexScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexScalarBarVisibility(temp0);
    }
    else
    {
      op->vtkGraphLayoutView::SetVertexScalarBarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_GetVertexScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVertexScalarBarVisibility() :
      op->vtkGraphLayoutView::GetVertexScalarBarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_ZoomToSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomToSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZoomToSelection();
    }
    else
    {
      op->vtkGraphLayoutView::ZoomToSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLayoutComplete() :
      op->vtkGraphLayoutView::IsLayoutComplete());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphLayoutView_UpdateLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphLayoutView *op = static_cast<vtkGraphLayoutView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateLayout();
    }
    else
    {
      op->vtkGraphLayoutView::UpdateLayout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphLayoutView_Methods[] = {
  {"IsTypeOf", PyvtkGraphLayoutView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphLayoutView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphLayoutView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphLayoutView\nC++: static vtkGraphLayoutView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphLayoutView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphLayoutView\nC++: vtkGraphLayoutView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphLayoutView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphLayoutView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVertexLabelArrayName", PyvtkGraphLayoutView_SetVertexLabelArrayName, METH_VARARGS,
   "SetVertexLabelArrayName(self, name:str) -> None\nC++: void SetVertexLabelArrayName(const char *name)\n\nThe array to use for vertex labeling.  Default is \"VertexDegree\".\n"},
  {"GetVertexLabelArrayName", PyvtkGraphLayoutView_GetVertexLabelArrayName, METH_VARARGS,
   "GetVertexLabelArrayName(self) -> str\nC++: const char *GetVertexLabelArrayName()\n\n"},
  {"SetEdgeLabelArrayName", PyvtkGraphLayoutView_SetEdgeLabelArrayName, METH_VARARGS,
   "SetEdgeLabelArrayName(self, name:str) -> None\nC++: void SetEdgeLabelArrayName(const char *name)\n\nThe array to use for edge labeling.  Default is \"LabelText\".\n"},
  {"GetEdgeLabelArrayName", PyvtkGraphLayoutView_GetEdgeLabelArrayName, METH_VARARGS,
   "GetEdgeLabelArrayName(self) -> str\nC++: const char *GetEdgeLabelArrayName()\n\n"},
  {"SetVertexLabelVisibility", PyvtkGraphLayoutView_SetVertexLabelVisibility, METH_VARARGS,
   "SetVertexLabelVisibility(self, vis:bool) -> None\nC++: void SetVertexLabelVisibility(bool vis)\n\nWhether to show vertex labels.  Default is off.\n"},
  {"GetVertexLabelVisibility", PyvtkGraphLayoutView_GetVertexLabelVisibility, METH_VARARGS,
   "GetVertexLabelVisibility(self) -> bool\nC++: bool GetVertexLabelVisibility()\n\n"},
  {"VertexLabelVisibilityOn", PyvtkGraphLayoutView_VertexLabelVisibilityOn, METH_VARARGS,
   "VertexLabelVisibilityOn(self) -> None\nC++: virtual void VertexLabelVisibilityOn()\n\n"},
  {"VertexLabelVisibilityOff", PyvtkGraphLayoutView_VertexLabelVisibilityOff, METH_VARARGS,
   "VertexLabelVisibilityOff(self) -> None\nC++: virtual void VertexLabelVisibilityOff()\n\n"},
  {"SetHideVertexLabelsOnInteraction", PyvtkGraphLayoutView_SetHideVertexLabelsOnInteraction, METH_VARARGS,
   "SetHideVertexLabelsOnInteraction(self, vis:bool) -> None\nC++: void SetHideVertexLabelsOnInteraction(bool vis)\n\nWhether to hide vertex labels during mouse interactions.  Default\nis off.\n"},
  {"GetHideVertexLabelsOnInteraction", PyvtkGraphLayoutView_GetHideVertexLabelsOnInteraction, METH_VARARGS,
   "GetHideVertexLabelsOnInteraction(self) -> bool\nC++: bool GetHideVertexLabelsOnInteraction()\n\n"},
  {"HideVertexLabelsOnInteractionOn", PyvtkGraphLayoutView_HideVertexLabelsOnInteractionOn, METH_VARARGS,
   "HideVertexLabelsOnInteractionOn(self) -> None\nC++: virtual void HideVertexLabelsOnInteractionOn()\n\n"},
  {"HideVertexLabelsOnInteractionOff", PyvtkGraphLayoutView_HideVertexLabelsOnInteractionOff, METH_VARARGS,
   "HideVertexLabelsOnInteractionOff(self) -> None\nC++: virtual void HideVertexLabelsOnInteractionOff()\n\n"},
  {"SetEdgeVisibility", PyvtkGraphLayoutView_SetEdgeVisibility, METH_VARARGS,
   "SetEdgeVisibility(self, vis:bool) -> None\nC++: void SetEdgeVisibility(bool vis)\n\nWhether to show the edges at all. Default is on\n"},
  {"GetEdgeVisibility", PyvtkGraphLayoutView_GetEdgeVisibility, METH_VARARGS,
   "GetEdgeVisibility(self) -> bool\nC++: bool GetEdgeVisibility()\n\n"},
  {"EdgeVisibilityOn", PyvtkGraphLayoutView_EdgeVisibilityOn, METH_VARARGS,
   "EdgeVisibilityOn(self) -> None\nC++: virtual void EdgeVisibilityOn()\n\n"},
  {"EdgeVisibilityOff", PyvtkGraphLayoutView_EdgeVisibilityOff, METH_VARARGS,
   "EdgeVisibilityOff(self) -> None\nC++: virtual void EdgeVisibilityOff()\n\n"},
  {"SetEdgeLabelVisibility", PyvtkGraphLayoutView_SetEdgeLabelVisibility, METH_VARARGS,
   "SetEdgeLabelVisibility(self, vis:bool) -> None\nC++: void SetEdgeLabelVisibility(bool vis)\n\nWhether to show edge labels.  Default is off.\n"},
  {"GetEdgeLabelVisibility", PyvtkGraphLayoutView_GetEdgeLabelVisibility, METH_VARARGS,
   "GetEdgeLabelVisibility(self) -> bool\nC++: bool GetEdgeLabelVisibility()\n\n"},
  {"EdgeLabelVisibilityOn", PyvtkGraphLayoutView_EdgeLabelVisibilityOn, METH_VARARGS,
   "EdgeLabelVisibilityOn(self) -> None\nC++: virtual void EdgeLabelVisibilityOn()\n\n"},
  {"EdgeLabelVisibilityOff", PyvtkGraphLayoutView_EdgeLabelVisibilityOff, METH_VARARGS,
   "EdgeLabelVisibilityOff(self) -> None\nC++: virtual void EdgeLabelVisibilityOff()\n\n"},
  {"SetHideEdgeLabelsOnInteraction", PyvtkGraphLayoutView_SetHideEdgeLabelsOnInteraction, METH_VARARGS,
   "SetHideEdgeLabelsOnInteraction(self, vis:bool) -> None\nC++: void SetHideEdgeLabelsOnInteraction(bool vis)\n\nWhether to hide edge labels during mouse interactions.  Default\nis off.\n"},
  {"GetHideEdgeLabelsOnInteraction", PyvtkGraphLayoutView_GetHideEdgeLabelsOnInteraction, METH_VARARGS,
   "GetHideEdgeLabelsOnInteraction(self) -> bool\nC++: bool GetHideEdgeLabelsOnInteraction()\n\n"},
  {"HideEdgeLabelsOnInteractionOn", PyvtkGraphLayoutView_HideEdgeLabelsOnInteractionOn, METH_VARARGS,
   "HideEdgeLabelsOnInteractionOn(self) -> None\nC++: virtual void HideEdgeLabelsOnInteractionOn()\n\n"},
  {"HideEdgeLabelsOnInteractionOff", PyvtkGraphLayoutView_HideEdgeLabelsOnInteractionOff, METH_VARARGS,
   "HideEdgeLabelsOnInteractionOff(self) -> None\nC++: virtual void HideEdgeLabelsOnInteractionOff()\n\n"},
  {"SetVertexColorArrayName", PyvtkGraphLayoutView_SetVertexColorArrayName, METH_VARARGS,
   "SetVertexColorArrayName(self, name:str) -> None\nC++: void SetVertexColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  The default behavior is\nto color by vertex degree.\n"},
  {"GetVertexColorArrayName", PyvtkGraphLayoutView_GetVertexColorArrayName, METH_VARARGS,
   "GetVertexColorArrayName(self) -> str\nC++: const char *GetVertexColorArrayName()\n\n"},
  {"SetColorVertices", PyvtkGraphLayoutView_SetColorVertices, METH_VARARGS,
   "SetColorVertices(self, vis:bool) -> None\nC++: void SetColorVertices(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {"GetColorVertices", PyvtkGraphLayoutView_GetColorVertices, METH_VARARGS,
   "GetColorVertices(self) -> bool\nC++: bool GetColorVertices()\n\n"},
  {"ColorVerticesOn", PyvtkGraphLayoutView_ColorVerticesOn, METH_VARARGS,
   "ColorVerticesOn(self) -> None\nC++: virtual void ColorVerticesOn()\n\n"},
  {"ColorVerticesOff", PyvtkGraphLayoutView_ColorVerticesOff, METH_VARARGS,
   "ColorVerticesOff(self) -> None\nC++: virtual void ColorVerticesOff()\n\n"},
  {"SetEdgeColorArrayName", PyvtkGraphLayoutView_SetEdgeColorArrayName, METH_VARARGS,
   "SetEdgeColorArrayName(self, name:str) -> None\nC++: void SetEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetEdgeColorArrayName", PyvtkGraphLayoutView_GetEdgeColorArrayName, METH_VARARGS,
   "GetEdgeColorArrayName(self) -> str\nC++: const char *GetEdgeColorArrayName()\n\n"},
  {"SetColorEdges", PyvtkGraphLayoutView_SetColorEdges, METH_VARARGS,
   "SetColorEdges(self, vis:bool) -> None\nC++: void SetColorEdges(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {"GetColorEdges", PyvtkGraphLayoutView_GetColorEdges, METH_VARARGS,
   "GetColorEdges(self) -> bool\nC++: bool GetColorEdges()\n\n"},
  {"ColorEdgesOn", PyvtkGraphLayoutView_ColorEdgesOn, METH_VARARGS,
   "ColorEdgesOn(self) -> None\nC++: virtual void ColorEdgesOn()\n\n"},
  {"ColorEdgesOff", PyvtkGraphLayoutView_ColorEdgesOff, METH_VARARGS,
   "ColorEdgesOff(self) -> None\nC++: virtual void ColorEdgesOff()\n\n"},
  {"SetEdgeSelection", PyvtkGraphLayoutView_SetEdgeSelection, METH_VARARGS,
   "SetEdgeSelection(self, vis:bool) -> None\nC++: void SetEdgeSelection(bool vis)\n\nWhether edges are selectable. Default is on.\n"},
  {"GetEdgeSelection", PyvtkGraphLayoutView_GetEdgeSelection, METH_VARARGS,
   "GetEdgeSelection(self) -> bool\nC++: bool GetEdgeSelection()\n\n"},
  {"EdgeSelectionOn", PyvtkGraphLayoutView_EdgeSelectionOn, METH_VARARGS,
   "EdgeSelectionOn(self) -> None\nC++: virtual void EdgeSelectionOn()\n\n"},
  {"EdgeSelectionOff", PyvtkGraphLayoutView_EdgeSelectionOff, METH_VARARGS,
   "EdgeSelectionOff(self) -> None\nC++: virtual void EdgeSelectionOff()\n\n"},
  {"SetEnabledEdgesArrayName", PyvtkGraphLayoutView_SetEnabledEdgesArrayName, METH_VARARGS,
   "SetEnabledEdgesArrayName(self, name:str) -> None\nC++: void SetEnabledEdgesArrayName(const char *name)\n\nThe array to use for coloring edges.\n"},
  {"GetEnabledEdgesArrayName", PyvtkGraphLayoutView_GetEnabledEdgesArrayName, METH_VARARGS,
   "GetEnabledEdgesArrayName(self) -> str\nC++: const char *GetEnabledEdgesArrayName()\n\n"},
  {"SetEnableEdgesByArray", PyvtkGraphLayoutView_SetEnableEdgesByArray, METH_VARARGS,
   "SetEnableEdgesByArray(self, vis:bool) -> None\nC++: void SetEnableEdgesByArray(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {"GetEnableEdgesByArray", PyvtkGraphLayoutView_GetEnableEdgesByArray, METH_VARARGS,
   "GetEnableEdgesByArray(self) -> int\nC++: int GetEnableEdgesByArray()\n\n"},
  {"SetEnabledVerticesArrayName", PyvtkGraphLayoutView_SetEnabledVerticesArrayName, METH_VARARGS,
   "SetEnabledVerticesArrayName(self, name:str) -> None\nC++: void SetEnabledVerticesArrayName(const char *name)\n\nThe array to use for coloring vertices.\n"},
  {"GetEnabledVerticesArrayName", PyvtkGraphLayoutView_GetEnabledVerticesArrayName, METH_VARARGS,
   "GetEnabledVerticesArrayName(self) -> str\nC++: const char *GetEnabledVerticesArrayName()\n\n"},
  {"SetEnableVerticesByArray", PyvtkGraphLayoutView_SetEnableVerticesByArray, METH_VARARGS,
   "SetEnableVerticesByArray(self, vis:bool) -> None\nC++: void SetEnableVerticesByArray(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {"GetEnableVerticesByArray", PyvtkGraphLayoutView_GetEnableVerticesByArray, METH_VARARGS,
   "GetEnableVerticesByArray(self) -> int\nC++: int GetEnableVerticesByArray()\n\n"},
  {"SetScalingArrayName", PyvtkGraphLayoutView_SetScalingArrayName, METH_VARARGS,
   "SetScalingArrayName(self, name:str) -> None\nC++: void SetScalingArrayName(const char *name)\n\nThe array used for scaling (if ScaledGlyphs is ON)\n"},
  {"GetScalingArrayName", PyvtkGraphLayoutView_GetScalingArrayName, METH_VARARGS,
   "GetScalingArrayName(self) -> str\nC++: const char *GetScalingArrayName()\n\n"},
  {"SetScaledGlyphs", PyvtkGraphLayoutView_SetScaledGlyphs, METH_VARARGS,
   "SetScaledGlyphs(self, arg:bool) -> None\nC++: void SetScaledGlyphs(bool arg)\n\nWhether to use scaled glyphs or not.  Default is off.\n"},
  {"GetScaledGlyphs", PyvtkGraphLayoutView_GetScaledGlyphs, METH_VARARGS,
   "GetScaledGlyphs(self) -> bool\nC++: bool GetScaledGlyphs()\n\n"},
  {"ScaledGlyphsOn", PyvtkGraphLayoutView_ScaledGlyphsOn, METH_VARARGS,
   "ScaledGlyphsOn(self) -> None\nC++: virtual void ScaledGlyphsOn()\n\n"},
  {"ScaledGlyphsOff", PyvtkGraphLayoutView_ScaledGlyphsOff, METH_VARARGS,
   "ScaledGlyphsOff(self) -> None\nC++: virtual void ScaledGlyphsOff()\n\n"},
  {"SetLayoutStrategy", PyvtkGraphLayoutView_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, name:str) -> None\nC++: void SetLayoutStrategy(const char *name)\nSetLayoutStrategy(self, s:vtkGraphLayoutStrategy) -> None\nC++: void SetLayoutStrategy(vtkGraphLayoutStrategy *s)\n\nThe layout strategy to use when performing the graph layout. The\npossible strings are:\n- \"Random\"         Randomly places vertices in a box.\n- \"Force Directed\" A layout in 3D or 2D simulating forces on\n  edges.\n- \"Simple 2D\"      A simple 2D force directed layout.\n- \"Clustering 2D\"  A 2D force directed layout that's just like\n  simple 2D but uses some techniques to cluster better.\n- \"Community 2D\"   A linear-time 2D layout that's just like Fast\n  2D but looks for and uses a community array to 'accentuate'\n  clusters.\n- \"Fast 2D\"       A linear-time 2D layout.\n- \"Pass Through\"  Use locations assigned to the input.\n- \"Circular\"      Places vertices uniformly on a circle.\n- \"Cone\"          Cone tree layout.\n- \"Span Tree\"     Span Tree Layout. Default is \"Simple 2D\".\n"},
  {"SetLayoutStrategyToRandom", PyvtkGraphLayoutView_SetLayoutStrategyToRandom, METH_VARARGS,
   "SetLayoutStrategyToRandom(self) -> None\nC++: void SetLayoutStrategyToRandom()\n\n"},
  {"SetLayoutStrategyToForceDirected", PyvtkGraphLayoutView_SetLayoutStrategyToForceDirected, METH_VARARGS,
   "SetLayoutStrategyToForceDirected(self) -> None\nC++: void SetLayoutStrategyToForceDirected()\n\n"},
  {"SetLayoutStrategyToSimple2D", PyvtkGraphLayoutView_SetLayoutStrategyToSimple2D, METH_VARARGS,
   "SetLayoutStrategyToSimple2D(self) -> None\nC++: void SetLayoutStrategyToSimple2D()\n\n"},
  {"SetLayoutStrategyToClustering2D", PyvtkGraphLayoutView_SetLayoutStrategyToClustering2D, METH_VARARGS,
   "SetLayoutStrategyToClustering2D(self) -> None\nC++: void SetLayoutStrategyToClustering2D()\n\n"},
  {"SetLayoutStrategyToCommunity2D", PyvtkGraphLayoutView_SetLayoutStrategyToCommunity2D, METH_VARARGS,
   "SetLayoutStrategyToCommunity2D(self) -> None\nC++: void SetLayoutStrategyToCommunity2D()\n\n"},
  {"SetLayoutStrategyToFast2D", PyvtkGraphLayoutView_SetLayoutStrategyToFast2D, METH_VARARGS,
   "SetLayoutStrategyToFast2D(self) -> None\nC++: void SetLayoutStrategyToFast2D()\n\n"},
  {"SetLayoutStrategyToPassThrough", PyvtkGraphLayoutView_SetLayoutStrategyToPassThrough, METH_VARARGS,
   "SetLayoutStrategyToPassThrough(self) -> None\nC++: void SetLayoutStrategyToPassThrough()\n\n"},
  {"SetLayoutStrategyToCircular", PyvtkGraphLayoutView_SetLayoutStrategyToCircular, METH_VARARGS,
   "SetLayoutStrategyToCircular(self) -> None\nC++: void SetLayoutStrategyToCircular()\n\n"},
  {"SetLayoutStrategyToTree", PyvtkGraphLayoutView_SetLayoutStrategyToTree, METH_VARARGS,
   "SetLayoutStrategyToTree(self) -> None\nC++: void SetLayoutStrategyToTree()\n\n"},
  {"SetLayoutStrategyToCosmicTree", PyvtkGraphLayoutView_SetLayoutStrategyToCosmicTree, METH_VARARGS,
   "SetLayoutStrategyToCosmicTree(self) -> None\nC++: void SetLayoutStrategyToCosmicTree()\n\n"},
  {"SetLayoutStrategyToCone", PyvtkGraphLayoutView_SetLayoutStrategyToCone, METH_VARARGS,
   "SetLayoutStrategyToCone(self) -> None\nC++: void SetLayoutStrategyToCone()\n\n"},
  {"SetLayoutStrategyToSpanTree", PyvtkGraphLayoutView_SetLayoutStrategyToSpanTree, METH_VARARGS,
   "SetLayoutStrategyToSpanTree(self) -> None\nC++: void SetLayoutStrategyToSpanTree()\n\n"},
  {"GetLayoutStrategyName", PyvtkGraphLayoutView_GetLayoutStrategyName, METH_VARARGS,
   "GetLayoutStrategyName(self) -> str\nC++: const char *GetLayoutStrategyName()\n\n"},
  {"GetLayoutStrategy", PyvtkGraphLayoutView_GetLayoutStrategy, METH_VARARGS,
   "GetLayoutStrategy(self) -> vtkGraphLayoutStrategy\nC++: vtkGraphLayoutStrategy *GetLayoutStrategy()\n\nThe layout strategy to use when performing the graph layout. This\nsignature allows an application to create a layout object\ndirectly and simply set the pointer through this method.\n"},
  {"SetEdgeLayoutStrategy", PyvtkGraphLayoutView_SetEdgeLayoutStrategy, METH_VARARGS,
   "SetEdgeLayoutStrategy(self, name:str) -> None\nC++: void SetEdgeLayoutStrategy(const char *name)\nSetEdgeLayoutStrategy(self, s:vtkEdgeLayoutStrategy) -> None\nC++: void SetEdgeLayoutStrategy(vtkEdgeLayoutStrategy *s)\n\nThe layout strategy to use when performing the edge layout. The\npossible strings are: \"Arc Parallel\"   - Arc parallel edges and\nself loops. \"Pass Through\"   - Use edge routes assigned to the\ninput. Default is \"Arc Parallel\".\n"},
  {"SetEdgeLayoutStrategyToArcParallel", PyvtkGraphLayoutView_SetEdgeLayoutStrategyToArcParallel, METH_VARARGS,
   "SetEdgeLayoutStrategyToArcParallel(self) -> None\nC++: void SetEdgeLayoutStrategyToArcParallel()\n\n"},
  {"SetEdgeLayoutStrategyToPassThrough", PyvtkGraphLayoutView_SetEdgeLayoutStrategyToPassThrough, METH_VARARGS,
   "SetEdgeLayoutStrategyToPassThrough(self) -> None\nC++: void SetEdgeLayoutStrategyToPassThrough()\n\n"},
  {"GetEdgeLayoutStrategyName", PyvtkGraphLayoutView_GetEdgeLayoutStrategyName, METH_VARARGS,
   "GetEdgeLayoutStrategyName(self) -> str\nC++: const char *GetEdgeLayoutStrategyName()\n\n"},
  {"GetEdgeLayoutStrategy", PyvtkGraphLayoutView_GetEdgeLayoutStrategy, METH_VARARGS,
   "GetEdgeLayoutStrategy(self) -> vtkEdgeLayoutStrategy\nC++: vtkEdgeLayoutStrategy *GetEdgeLayoutStrategy()\n\nThe layout strategy to use when performing the edge layout. This\nsignature allows an application to create a layout object\ndirectly and simply set the pointer through this method.\n"},
  {"AddIconType", PyvtkGraphLayoutView_AddIconType, METH_VARARGS,
   "AddIconType(self, type:str, index:int) -> None\nC++: void AddIconType(const char *type, int index)\n\nAssociate the icon at index \"index\" in the vtkTexture to all\nvertices containing \"type\" as a value in the vertex attribute\narray specified by IconArrayName.\n"},
  {"ClearIconTypes", PyvtkGraphLayoutView_ClearIconTypes, METH_VARARGS,
   "ClearIconTypes(self) -> None\nC++: void ClearIconTypes()\n\nClear all icon mappings.\n"},
  {"SetIconAlignment", PyvtkGraphLayoutView_SetIconAlignment, METH_VARARGS,
   "SetIconAlignment(self, alignment:int) -> None\nC++: void SetIconAlignment(int alignment)\n\nSpecify where the icons should be placed in relation to the\nvertex. See vtkIconGlyphFilter.h for possible values.\n"},
  {"SetIconVisibility", PyvtkGraphLayoutView_SetIconVisibility, METH_VARARGS,
   "SetIconVisibility(self, b:bool) -> None\nC++: void SetIconVisibility(bool b)\n\nWhether icons are visible (default off).\n"},
  {"GetIconVisibility", PyvtkGraphLayoutView_GetIconVisibility, METH_VARARGS,
   "GetIconVisibility(self) -> bool\nC++: bool GetIconVisibility()\n\n"},
  {"IconVisibilityOn", PyvtkGraphLayoutView_IconVisibilityOn, METH_VARARGS,
   "IconVisibilityOn(self) -> None\nC++: virtual void IconVisibilityOn()\n\n"},
  {"IconVisibilityOff", PyvtkGraphLayoutView_IconVisibilityOff, METH_VARARGS,
   "IconVisibilityOff(self) -> None\nC++: virtual void IconVisibilityOff()\n\n"},
  {"SetIconArrayName", PyvtkGraphLayoutView_SetIconArrayName, METH_VARARGS,
   "SetIconArrayName(self, name:str) -> None\nC++: void SetIconArrayName(const char *name)\n\nThe array used for assigning icons\n"},
  {"GetIconArrayName", PyvtkGraphLayoutView_GetIconArrayName, METH_VARARGS,
   "GetIconArrayName(self) -> str\nC++: const char *GetIconArrayName()\n\n"},
  {"SetGlyphType", PyvtkGraphLayoutView_SetGlyphType, METH_VARARGS,
   "SetGlyphType(self, type:int) -> None\nC++: void SetGlyphType(int type)\n\nThe type of glyph to use for the vertices\n"},
  {"GetGlyphType", PyvtkGraphLayoutView_GetGlyphType, METH_VARARGS,
   "GetGlyphType(self) -> int\nC++: int GetGlyphType()\n\n"},
  {"SetVertexLabelFontSize", PyvtkGraphLayoutView_SetVertexLabelFontSize, METH_VARARGS,
   "SetVertexLabelFontSize(self, size:int) -> None\nC++: virtual void SetVertexLabelFontSize(int size)\n\nThe size of the font used for vertex labeling\n"},
  {"GetVertexLabelFontSize", PyvtkGraphLayoutView_GetVertexLabelFontSize, METH_VARARGS,
   "GetVertexLabelFontSize(self) -> int\nC++: virtual int GetVertexLabelFontSize()\n\n"},
  {"SetEdgeLabelFontSize", PyvtkGraphLayoutView_SetEdgeLabelFontSize, METH_VARARGS,
   "SetEdgeLabelFontSize(self, size:int) -> None\nC++: virtual void SetEdgeLabelFontSize(int size)\n\nThe size of the font used for edge labeling\n"},
  {"GetEdgeLabelFontSize", PyvtkGraphLayoutView_GetEdgeLabelFontSize, METH_VARARGS,
   "GetEdgeLabelFontSize(self) -> int\nC++: virtual int GetEdgeLabelFontSize()\n\n"},
  {"SetEdgeScalarBarVisibility", PyvtkGraphLayoutView_SetEdgeScalarBarVisibility, METH_VARARGS,
   "SetEdgeScalarBarVisibility(self, vis:bool) -> None\nC++: void SetEdgeScalarBarVisibility(bool vis)\n\nWhether the scalar bar for edges is visible.  Default is off.\n"},
  {"GetEdgeScalarBarVisibility", PyvtkGraphLayoutView_GetEdgeScalarBarVisibility, METH_VARARGS,
   "GetEdgeScalarBarVisibility(self) -> bool\nC++: bool GetEdgeScalarBarVisibility()\n\n"},
  {"SetVertexScalarBarVisibility", PyvtkGraphLayoutView_SetVertexScalarBarVisibility, METH_VARARGS,
   "SetVertexScalarBarVisibility(self, vis:bool) -> None\nC++: void SetVertexScalarBarVisibility(bool vis)\n\nWhether the scalar bar for vertices is visible.  Default is off.\n"},
  {"GetVertexScalarBarVisibility", PyvtkGraphLayoutView_GetVertexScalarBarVisibility, METH_VARARGS,
   "GetVertexScalarBarVisibility(self) -> bool\nC++: bool GetVertexScalarBarVisibility()\n\n"},
  {"ZoomToSelection", PyvtkGraphLayoutView_ZoomToSelection, METH_VARARGS,
   "ZoomToSelection(self) -> None\nC++: void ZoomToSelection()\n\nReset the camera based on the bounds of the selected region.\n"},
  {"IsLayoutComplete", PyvtkGraphLayoutView_IsLayoutComplete, METH_VARARGS,
   "IsLayoutComplete(self) -> int\nC++: virtual int IsLayoutComplete()\n\nIs the graph layout complete? This method is useful for when the\nstrategy is iterative and the application wants to show the\niterative progress of the graph layout See Also: UpdateLayout();\n"},
  {"UpdateLayout", PyvtkGraphLayoutView_UpdateLayout, METH_VARARGS,
   "UpdateLayout(self) -> None\nC++: virtual void UpdateLayout()\n\nThis method is useful for when the strategy is iterative and the\napplication wants to show the iterative progress of the graph\nlayout. The application would have something like\nwhile(!IsLayoutComplete()) { UpdateLayout(); } See Also:\nIsLayoutComplete();\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGraphLayoutView_Doc =
  "vtkGraphLayoutView - Lays out and displays a graph\n\n"
  "Superclass: vtkRenderView\n\n"
  "vtkGraphLayoutView performs graph layout and displays a vtkGraph. You\n"
  "may color and label the vertices and edges using fields in the graph.\n"
  "If coordinates are already assigned to the graph vertices in your\n"
  "graph, set the layout strategy to PassThrough in this view. The\n"
  "default layout is Fast2D which is fast but not that good, for better\n"
  "layout set the layout to Simple2D or ForceDirected. There are also\n"
  "tree and circle layout strategies. :)\n\n"
  ".SEE ALSO vtkFast2DLayoutStrategy vtkSimple2DLayoutStrategy\n"
  "vtkForceDirectedLayoutStrategy\n\n"
  "@par Thanks: Thanks a bunch to the holographic unfolding pattern.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphLayoutView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkGraphLayoutView", // tp_name
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
  PyvtkGraphLayoutView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphLayoutView_StaticNew()
{
  return vtkGraphLayoutView::New();
}

PyObject *PyvtkGraphLayoutView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphLayoutView_Type, PyvtkGraphLayoutView_Methods,
    "vtkGraphLayoutView",
 &PyvtkGraphLayoutView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRenderView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphLayoutView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphLayoutView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphLayoutView", o) != 0)
  {
    Py_DECREF(o);
  }

}

