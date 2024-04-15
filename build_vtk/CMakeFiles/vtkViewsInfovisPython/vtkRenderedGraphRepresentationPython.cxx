// python wrapper for vtkRenderedGraphRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRenderedGraphRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderedGraphRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkRenderedGraphRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkRenderedRepresentation_ClassNew
extern "C" { PyObject *PyvtkRenderedRepresentation_ClassNew(); }
#define DECLARED_PyvtkRenderedRepresentation_ClassNew
#endif

static PyObject *
PyvtkRenderedGraphRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderedGraphRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderedGraphRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderedGraphRepresentation *tempr = vtkRenderedGraphRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderedGraphRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderedGraphRepresentation::NewInstance());

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
PyvtkRenderedGraphRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderedGraphRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderedGraphRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetVertexLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexLabelArrayName() :
      op->vtkRenderedGraphRepresentation::GetVertexLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexLabelPriorityArrayName(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexLabelPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexLabelPriorityArrayName() :
      op->vtkRenderedGraphRepresentation::GetVertexLabelPriorityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetVertexLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVertexLabelVisibility() :
      op->vtkRenderedGraphRepresentation::GetVertexLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_VertexLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexLabelVisibilityOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::VertexLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_VertexLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexLabelVisibilityOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::VertexLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetVertexLabelTextProperty(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetVertexLabelTextProperty() :
      op->vtkRenderedGraphRepresentation::GetVertexLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexHoverArrayName(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexHoverArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexHoverArrayName() :
      op->vtkRenderedGraphRepresentation::GetVertexHoverArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetHideVertexLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideVertexLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetHideVertexLabelsOnInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetHideVertexLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideVertexLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHideVertexLabelsOnInteraction() :
      op->vtkRenderedGraphRepresentation::GetHideVertexLabelsOnInteraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_HideVertexLabelsOnInteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideVertexLabelsOnInteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideVertexLabelsOnInteractionOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::HideVertexLabelsOnInteractionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_HideVertexLabelsOnInteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideVertexLabelsOnInteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideVertexLabelsOnInteractionOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::HideVertexLabelsOnInteractionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEdgeLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeLabelArrayName() :
      op->vtkRenderedGraphRepresentation::GetEdgeLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLabelPriorityArrayName(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeLabelPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeLabelPriorityArrayName() :
      op->vtkRenderedGraphRepresentation::GetEdgeLabelPriorityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEdgeLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeLabelVisibility() :
      op->vtkRenderedGraphRepresentation::GetEdgeLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeLabelVisibilityOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EdgeLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeLabelVisibilityOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EdgeLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLabelTextProperty(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetEdgeLabelTextProperty() :
      op->vtkRenderedGraphRepresentation::GetEdgeLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeHoverArrayName(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeHoverArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeHoverArrayName() :
      op->vtkRenderedGraphRepresentation::GetEdgeHoverArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetHideEdgeLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHideEdgeLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetHideEdgeLabelsOnInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetHideEdgeLabelsOnInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHideEdgeLabelsOnInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHideEdgeLabelsOnInteraction() :
      op->vtkRenderedGraphRepresentation::GetHideEdgeLabelsOnInteraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_HideEdgeLabelsOnInteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideEdgeLabelsOnInteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideEdgeLabelsOnInteractionOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::HideEdgeLabelsOnInteractionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_HideEdgeLabelsOnInteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HideEdgeLabelsOnInteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HideEdgeLabelsOnInteractionOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::HideEdgeLabelsOnInteractionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconArrayName(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexIconArrayName() :
      op->vtkRenderedGraphRepresentation::GetVertexIconArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconPriorityArrayName(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexIconPriorityArrayName() :
      op->vtkRenderedGraphRepresentation::GetVertexIconPriorityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconVisibility(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVertexIconVisibility() :
      op->vtkRenderedGraphRepresentation::GetVertexIconVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_VertexIconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexIconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexIconVisibilityOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::VertexIconVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_VertexIconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexIconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexIconVisibilityOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::VertexIconVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_AddVertexIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertexIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddVertexIconType(temp0, temp1);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::AddVertexIconType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ClearVertexIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearVertexIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearVertexIconTypes();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ClearVertexIconTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetUseVertexIconTypeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseVertexIconTypeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseVertexIconTypeMap(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetUseVertexIconTypeMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetUseVertexIconTypeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseVertexIconTypeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseVertexIconTypeMap() :
      op->vtkRenderedGraphRepresentation::GetUseVertexIconTypeMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UseVertexIconTypeMapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVertexIconTypeMapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseVertexIconTypeMapOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::UseVertexIconTypeMapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UseVertexIconTypeMapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVertexIconTypeMapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseVertexIconTypeMapOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::UseVertexIconTypeMapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconAlignment(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertexIconAlignment() :
      op->vtkRenderedGraphRepresentation::GetVertexIconAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexSelectedIcon(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexSelectedIcon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertexSelectedIcon() :
      op->vtkRenderedGraphRepresentation::GetVertexSelectedIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexDefaultIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexDefaultIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexDefaultIcon(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexDefaultIcon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexDefaultIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexDefaultIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertexDefaultIcon() :
      op->vtkRenderedGraphRepresentation::GetVertexDefaultIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconSelectionMode(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexIconSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIconSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertexIconSelectionMode() :
      op->vtkRenderedGraphRepresentation::GetVertexIconSelectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionModeToSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconSelectionModeToSelectedIcon();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionModeToSelectedIcon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToSelectedOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionModeToSelectedOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconSelectionModeToSelectedOffset();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionModeToSelectedOffset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToAnnotationIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionModeToAnnotationIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconSelectionModeToAnnotationIcon();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionModeToAnnotationIcon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToIgnoreSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexIconSelectionModeToIgnoreSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVertexIconSelectionModeToIgnoreSelection();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetVertexIconSelectionModeToIgnoreSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeIconArrayName(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeIconArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeIconArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIconArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeIconArrayName() :
      op->vtkRenderedGraphRepresentation::GetEdgeIconArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeIconPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeIconPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeIconPriorityArrayName(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeIconPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeIconPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIconPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeIconPriorityArrayName() :
      op->vtkRenderedGraphRepresentation::GetEdgeIconPriorityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeIconVisibility(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeIconVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeIconVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIconVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeIconVisibility() :
      op->vtkRenderedGraphRepresentation::GetEdgeIconVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeIconVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeIconVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeIconVisibilityOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EdgeIconVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeIconVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeIconVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeIconVisibilityOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EdgeIconVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_AddEdgeIconType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEdgeIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddEdgeIconType(temp0, temp1);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::AddEdgeIconType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ClearEdgeIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEdgeIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearEdgeIconTypes();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ClearEdgeIconTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetUseEdgeIconTypeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseEdgeIconTypeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseEdgeIconTypeMap(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetUseEdgeIconTypeMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetUseEdgeIconTypeMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseEdgeIconTypeMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseEdgeIconTypeMap() :
      op->vtkRenderedGraphRepresentation::GetUseEdgeIconTypeMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UseEdgeIconTypeMapOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeIconTypeMapOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeIconTypeMapOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::UseEdgeIconTypeMapOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UseEdgeIconTypeMapOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseEdgeIconTypeMapOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseEdgeIconTypeMapOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::UseEdgeIconTypeMapOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeIconAlignment(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeIconAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeIconAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIconAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeIconAlignment() :
      op->vtkRenderedGraphRepresentation::GetEdgeIconAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetColorVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorVerticesByArray(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetColorVerticesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetColorVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorVerticesByArray() :
      op->vtkRenderedGraphRepresentation::GetColorVerticesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ColorVerticesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorVerticesByArrayOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ColorVerticesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ColorVerticesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorVerticesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorVerticesByArrayOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ColorVerticesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetVertexColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexColorArrayName() :
      op->vtkRenderedGraphRepresentation::GetVertexColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetColorEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorEdgesByArray(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetColorEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetColorEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorEdgesByArray() :
      op->vtkRenderedGraphRepresentation::GetColorEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ColorEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesByArrayOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ColorEdgesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ColorEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesByArrayOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ColorEdgesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEdgeColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeColorArrayName() :
      op->vtkRenderedGraphRepresentation::GetEdgeColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEnableVerticesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEnableVerticesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableVerticesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableVerticesByArray() :
      op->vtkRenderedGraphRepresentation::GetEnableVerticesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EnableVerticesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableVerticesByArrayOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EnableVerticesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EnableVerticesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableVerticesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableVerticesByArrayOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EnableVerticesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEnabledVerticesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEnabledVerticesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledVerticesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEnabledVerticesArrayName() :
      op->vtkRenderedGraphRepresentation::GetEnabledVerticesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEnableEdgesByArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEnableEdgesByArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableEdgesByArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEnableEdgesByArray() :
      op->vtkRenderedGraphRepresentation::GetEnableEdgesByArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EnableEdgesByArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableEdgesByArrayOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EnableEdgesByArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EnableEdgesByArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableEdgesByArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableEdgesByArrayOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EnableEdgesByArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEnabledEdgesArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEnabledEdgesArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledEdgesArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEnabledEdgesArrayName() :
      op->vtkRenderedGraphRepresentation::GetEnabledEdgesArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEdgeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeVisibility() :
      op->vtkRenderedGraphRepresentation::GetEdgeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EdgeVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::EdgeVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEdgeSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeSelection() :
      op->vtkRenderedGraphRepresentation::GetEdgeSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderedGraphRepresentation_SetLayoutStrategy_Methods[] = {
  {"SetLayoutStrategy", PyvtkRenderedGraphRepresentation_SetLayoutStrategy_s1, METH_VARARGS,
   "@V *vtkGraphLayoutStrategy"},
  {"SetLayoutStrategy", PyvtkRenderedGraphRepresentation_SetLayoutStrategy_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderedGraphRepresentation_SetLayoutStrategy_Methods;
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
PyvtkRenderedGraphRepresentation_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkRenderedGraphRepresentation::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetLayoutStrategyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLayoutStrategyName() :
      op->vtkRenderedGraphRepresentation::GetLayoutStrategyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToRandom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToRandom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToRandom();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToRandom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToForceDirected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToForceDirected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToForceDirected();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToForceDirected();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToSimple2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSimple2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToSimple2D();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToSimple2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToClustering2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToClustering2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToClustering2D();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToClustering2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCommunity2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCommunity2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCommunity2D();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCommunity2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToFast2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToFast2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToFast2D();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToFast2D();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToPassThrough();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToPassThrough();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCircular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCircular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCircular();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCircular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToTree();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  double temp1 = 90;
  double temp2 = 0.9;
  double temp3 = 1.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToTree(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToTree(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree_s1(self, args);
    case 1:
    case 2:
    case 3:
    case 4:
      return PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutStrategyToTree");
  return nullptr;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCosmicTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCosmicTree();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCosmicTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCosmicTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = true;
  int temp2 = 0;
  long long temp3 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 4) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCosmicTree(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCosmicTree(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree_s1(self, args);
    case 1:
    case 2:
    case 3:
    case 4:
      return PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLayoutStrategyToCosmicTree");
  return nullptr;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToCone();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToCone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToSpanTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToSpanTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToSpanTree();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToSpanTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetLayoutStrategyToAssignCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategyToAssignCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategyToAssignCoordinates(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetLayoutStrategyToAssignCoordinates(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_Methods[] = {
  {"SetEdgeLayoutStrategy", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_s1, METH_VARARGS,
   "@V *vtkEdgeLayoutStrategy"},
  {"SetEdgeLayoutStrategy", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy_Methods;
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
PyvtkRenderedGraphRepresentation_GetEdgeLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEdgeLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetEdgeLayoutStrategy() :
      op->vtkRenderedGraphRepresentation::GetEdgeLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToArcParallel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToArcParallel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLayoutStrategyToArcParallel();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategyToArcParallel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLayoutStrategyToPassThrough();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategyToPassThrough();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToGeo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLayoutStrategyToGeo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  double temp0 = 0.2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->SetEdgeLayoutStrategyToGeo(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetEdgeLayoutStrategyToGeo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeLayoutStrategyName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLayoutStrategyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEdgeLayoutStrategyName() :
      op->vtkRenderedGraphRepresentation::GetEdgeLayoutStrategyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  vtkViewTheme *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
  {
    if (ap.IsBound())
    {
      op->ApplyViewTheme(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkRenderedGraphRepresentation::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkRenderedGraphRepresentation::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOn();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingOff();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetScalingArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetScalingArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalingArrayName() :
      op->vtkRenderedGraphRepresentation::GetScalingArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetVertexScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetVertexScalarBarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVertexScalarBarVisibility() :
      op->vtkRenderedGraphRepresentation::GetVertexScalarBarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_SetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->vtkRenderedGraphRepresentation::SetEdgeScalarBarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeScalarBarVisibility() :
      op->vtkRenderedGraphRepresentation::GetEdgeScalarBarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetVertexScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarWidget *tempr = (ap.IsBound() ?
      op->GetVertexScalarBar() :
      op->vtkRenderedGraphRepresentation::GetVertexScalarBar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_GetEdgeScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarWidget *tempr = (ap.IsBound() ?
      op->GetEdgeScalarBar() :
      op->vtkRenderedGraphRepresentation::GetEdgeScalarBar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_IsLayoutComplete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLayoutComplete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLayoutComplete() :
      op->vtkRenderedGraphRepresentation::IsLayoutComplete());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_UpdateLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateLayout();
    }
    else
    {
      op->vtkRenderedGraphRepresentation::UpdateLayout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderedGraphRepresentation_ComputeSelectedGraphBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeSelectedGraphBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderedGraphRepresentation *op = static_cast<vtkRenderedGraphRepresentation *>(vp);

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
      op->ComputeSelectedGraphBounds(temp0);
    }
    else
    {
      op->vtkRenderedGraphRepresentation::ComputeSelectedGraphBounds(temp0);
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

static PyMethodDef PyvtkRenderedGraphRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkRenderedGraphRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderedGraphRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderedGraphRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRenderedGraphRepresentation\nC++: static vtkRenderedGraphRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderedGraphRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderedGraphRepresentation\nC++: vtkRenderedGraphRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderedGraphRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderedGraphRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVertexLabelArrayName", PyvtkRenderedGraphRepresentation_SetVertexLabelArrayName, METH_VARARGS,
   "SetVertexLabelArrayName(self, name:str) -> None\nC++: virtual void SetVertexLabelArrayName(const char *name)\n\n"},
  {"GetVertexLabelArrayName", PyvtkRenderedGraphRepresentation_GetVertexLabelArrayName, METH_VARARGS,
   "GetVertexLabelArrayName(self) -> str\nC++: virtual const char *GetVertexLabelArrayName()\n\n"},
  {"SetVertexLabelPriorityArrayName", PyvtkRenderedGraphRepresentation_SetVertexLabelPriorityArrayName, METH_VARARGS,
   "SetVertexLabelPriorityArrayName(self, name:str) -> None\nC++: virtual void SetVertexLabelPriorityArrayName(\n    const char *name)\n\n"},
  {"GetVertexLabelPriorityArrayName", PyvtkRenderedGraphRepresentation_GetVertexLabelPriorityArrayName, METH_VARARGS,
   "GetVertexLabelPriorityArrayName(self) -> str\nC++: virtual const char *GetVertexLabelPriorityArrayName()\n\n"},
  {"SetVertexLabelVisibility", PyvtkRenderedGraphRepresentation_SetVertexLabelVisibility, METH_VARARGS,
   "SetVertexLabelVisibility(self, b:bool) -> None\nC++: virtual void SetVertexLabelVisibility(bool b)\n\n"},
  {"GetVertexLabelVisibility", PyvtkRenderedGraphRepresentation_GetVertexLabelVisibility, METH_VARARGS,
   "GetVertexLabelVisibility(self) -> bool\nC++: virtual bool GetVertexLabelVisibility()\n\n"},
  {"VertexLabelVisibilityOn", PyvtkRenderedGraphRepresentation_VertexLabelVisibilityOn, METH_VARARGS,
   "VertexLabelVisibilityOn(self) -> None\nC++: virtual void VertexLabelVisibilityOn()\n\n"},
  {"VertexLabelVisibilityOff", PyvtkRenderedGraphRepresentation_VertexLabelVisibilityOff, METH_VARARGS,
   "VertexLabelVisibilityOff(self) -> None\nC++: virtual void VertexLabelVisibilityOff()\n\n"},
  {"SetVertexLabelTextProperty", PyvtkRenderedGraphRepresentation_SetVertexLabelTextProperty, METH_VARARGS,
   "SetVertexLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetVertexLabelTextProperty(vtkTextProperty *p)\n\n"},
  {"GetVertexLabelTextProperty", PyvtkRenderedGraphRepresentation_GetVertexLabelTextProperty, METH_VARARGS,
   "GetVertexLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetVertexLabelTextProperty()\n\n"},
  {"SetVertexHoverArrayName", PyvtkRenderedGraphRepresentation_SetVertexHoverArrayName, METH_VARARGS,
   "SetVertexHoverArrayName(self, _arg:str) -> None\nC++: virtual void SetVertexHoverArrayName(const char *_arg)\n\n"},
  {"GetVertexHoverArrayName", PyvtkRenderedGraphRepresentation_GetVertexHoverArrayName, METH_VARARGS,
   "GetVertexHoverArrayName(self) -> str\nC++: virtual char *GetVertexHoverArrayName()\n\n"},
  {"SetHideVertexLabelsOnInteraction", PyvtkRenderedGraphRepresentation_SetHideVertexLabelsOnInteraction, METH_VARARGS,
   "SetHideVertexLabelsOnInteraction(self, _arg:bool) -> None\nC++: virtual void SetHideVertexLabelsOnInteraction(bool _arg)\n\nWhether to hide the display of vertex labels during mouse\ninteraction.  Default is off.\n"},
  {"GetHideVertexLabelsOnInteraction", PyvtkRenderedGraphRepresentation_GetHideVertexLabelsOnInteraction, METH_VARARGS,
   "GetHideVertexLabelsOnInteraction(self) -> bool\nC++: virtual bool GetHideVertexLabelsOnInteraction()\n\n"},
  {"HideVertexLabelsOnInteractionOn", PyvtkRenderedGraphRepresentation_HideVertexLabelsOnInteractionOn, METH_VARARGS,
   "HideVertexLabelsOnInteractionOn(self) -> None\nC++: virtual void HideVertexLabelsOnInteractionOn()\n\n"},
  {"HideVertexLabelsOnInteractionOff", PyvtkRenderedGraphRepresentation_HideVertexLabelsOnInteractionOff, METH_VARARGS,
   "HideVertexLabelsOnInteractionOff(self) -> None\nC++: virtual void HideVertexLabelsOnInteractionOff()\n\n"},
  {"SetEdgeLabelArrayName", PyvtkRenderedGraphRepresentation_SetEdgeLabelArrayName, METH_VARARGS,
   "SetEdgeLabelArrayName(self, name:str) -> None\nC++: virtual void SetEdgeLabelArrayName(const char *name)\n\n"},
  {"GetEdgeLabelArrayName", PyvtkRenderedGraphRepresentation_GetEdgeLabelArrayName, METH_VARARGS,
   "GetEdgeLabelArrayName(self) -> str\nC++: virtual const char *GetEdgeLabelArrayName()\n\n"},
  {"SetEdgeLabelPriorityArrayName", PyvtkRenderedGraphRepresentation_SetEdgeLabelPriorityArrayName, METH_VARARGS,
   "SetEdgeLabelPriorityArrayName(self, name:str) -> None\nC++: virtual void SetEdgeLabelPriorityArrayName(const char *name)\n\n"},
  {"GetEdgeLabelPriorityArrayName", PyvtkRenderedGraphRepresentation_GetEdgeLabelPriorityArrayName, METH_VARARGS,
   "GetEdgeLabelPriorityArrayName(self) -> str\nC++: virtual const char *GetEdgeLabelPriorityArrayName()\n\n"},
  {"SetEdgeLabelVisibility", PyvtkRenderedGraphRepresentation_SetEdgeLabelVisibility, METH_VARARGS,
   "SetEdgeLabelVisibility(self, b:bool) -> None\nC++: virtual void SetEdgeLabelVisibility(bool b)\n\n"},
  {"GetEdgeLabelVisibility", PyvtkRenderedGraphRepresentation_GetEdgeLabelVisibility, METH_VARARGS,
   "GetEdgeLabelVisibility(self) -> bool\nC++: virtual bool GetEdgeLabelVisibility()\n\n"},
  {"EdgeLabelVisibilityOn", PyvtkRenderedGraphRepresentation_EdgeLabelVisibilityOn, METH_VARARGS,
   "EdgeLabelVisibilityOn(self) -> None\nC++: virtual void EdgeLabelVisibilityOn()\n\n"},
  {"EdgeLabelVisibilityOff", PyvtkRenderedGraphRepresentation_EdgeLabelVisibilityOff, METH_VARARGS,
   "EdgeLabelVisibilityOff(self) -> None\nC++: virtual void EdgeLabelVisibilityOff()\n\n"},
  {"SetEdgeLabelTextProperty", PyvtkRenderedGraphRepresentation_SetEdgeLabelTextProperty, METH_VARARGS,
   "SetEdgeLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetEdgeLabelTextProperty(vtkTextProperty *p)\n\n"},
  {"GetEdgeLabelTextProperty", PyvtkRenderedGraphRepresentation_GetEdgeLabelTextProperty, METH_VARARGS,
   "GetEdgeLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetEdgeLabelTextProperty()\n\n"},
  {"SetEdgeHoverArrayName", PyvtkRenderedGraphRepresentation_SetEdgeHoverArrayName, METH_VARARGS,
   "SetEdgeHoverArrayName(self, _arg:str) -> None\nC++: virtual void SetEdgeHoverArrayName(const char *_arg)\n\n"},
  {"GetEdgeHoverArrayName", PyvtkRenderedGraphRepresentation_GetEdgeHoverArrayName, METH_VARARGS,
   "GetEdgeHoverArrayName(self) -> str\nC++: virtual char *GetEdgeHoverArrayName()\n\n"},
  {"SetHideEdgeLabelsOnInteraction", PyvtkRenderedGraphRepresentation_SetHideEdgeLabelsOnInteraction, METH_VARARGS,
   "SetHideEdgeLabelsOnInteraction(self, _arg:bool) -> None\nC++: virtual void SetHideEdgeLabelsOnInteraction(bool _arg)\n\nWhether to hide the display of edge labels during mouse\ninteraction.  Default is off.\n"},
  {"GetHideEdgeLabelsOnInteraction", PyvtkRenderedGraphRepresentation_GetHideEdgeLabelsOnInteraction, METH_VARARGS,
   "GetHideEdgeLabelsOnInteraction(self) -> bool\nC++: virtual bool GetHideEdgeLabelsOnInteraction()\n\n"},
  {"HideEdgeLabelsOnInteractionOn", PyvtkRenderedGraphRepresentation_HideEdgeLabelsOnInteractionOn, METH_VARARGS,
   "HideEdgeLabelsOnInteractionOn(self) -> None\nC++: virtual void HideEdgeLabelsOnInteractionOn()\n\n"},
  {"HideEdgeLabelsOnInteractionOff", PyvtkRenderedGraphRepresentation_HideEdgeLabelsOnInteractionOff, METH_VARARGS,
   "HideEdgeLabelsOnInteractionOff(self) -> None\nC++: virtual void HideEdgeLabelsOnInteractionOff()\n\n"},
  {"SetVertexIconArrayName", PyvtkRenderedGraphRepresentation_SetVertexIconArrayName, METH_VARARGS,
   "SetVertexIconArrayName(self, name:str) -> None\nC++: virtual void SetVertexIconArrayName(const char *name)\n\n"},
  {"GetVertexIconArrayName", PyvtkRenderedGraphRepresentation_GetVertexIconArrayName, METH_VARARGS,
   "GetVertexIconArrayName(self) -> str\nC++: virtual const char *GetVertexIconArrayName()\n\n"},
  {"SetVertexIconPriorityArrayName", PyvtkRenderedGraphRepresentation_SetVertexIconPriorityArrayName, METH_VARARGS,
   "SetVertexIconPriorityArrayName(self, name:str) -> None\nC++: virtual void SetVertexIconPriorityArrayName(const char *name)\n\n"},
  {"GetVertexIconPriorityArrayName", PyvtkRenderedGraphRepresentation_GetVertexIconPriorityArrayName, METH_VARARGS,
   "GetVertexIconPriorityArrayName(self) -> str\nC++: virtual const char *GetVertexIconPriorityArrayName()\n\n"},
  {"SetVertexIconVisibility", PyvtkRenderedGraphRepresentation_SetVertexIconVisibility, METH_VARARGS,
   "SetVertexIconVisibility(self, b:bool) -> None\nC++: virtual void SetVertexIconVisibility(bool b)\n\n"},
  {"GetVertexIconVisibility", PyvtkRenderedGraphRepresentation_GetVertexIconVisibility, METH_VARARGS,
   "GetVertexIconVisibility(self) -> bool\nC++: virtual bool GetVertexIconVisibility()\n\n"},
  {"VertexIconVisibilityOn", PyvtkRenderedGraphRepresentation_VertexIconVisibilityOn, METH_VARARGS,
   "VertexIconVisibilityOn(self) -> None\nC++: virtual void VertexIconVisibilityOn()\n\n"},
  {"VertexIconVisibilityOff", PyvtkRenderedGraphRepresentation_VertexIconVisibilityOff, METH_VARARGS,
   "VertexIconVisibilityOff(self) -> None\nC++: virtual void VertexIconVisibilityOff()\n\n"},
  {"AddVertexIconType", PyvtkRenderedGraphRepresentation_AddVertexIconType, METH_VARARGS,
   "AddVertexIconType(self, name:str, type:int) -> None\nC++: virtual void AddVertexIconType(const char *name, int type)\n\n"},
  {"ClearVertexIconTypes", PyvtkRenderedGraphRepresentation_ClearVertexIconTypes, METH_VARARGS,
   "ClearVertexIconTypes(self) -> None\nC++: virtual void ClearVertexIconTypes()\n\n"},
  {"SetUseVertexIconTypeMap", PyvtkRenderedGraphRepresentation_SetUseVertexIconTypeMap, METH_VARARGS,
   "SetUseVertexIconTypeMap(self, b:bool) -> None\nC++: virtual void SetUseVertexIconTypeMap(bool b)\n\n"},
  {"GetUseVertexIconTypeMap", PyvtkRenderedGraphRepresentation_GetUseVertexIconTypeMap, METH_VARARGS,
   "GetUseVertexIconTypeMap(self) -> bool\nC++: virtual bool GetUseVertexIconTypeMap()\n\n"},
  {"UseVertexIconTypeMapOn", PyvtkRenderedGraphRepresentation_UseVertexIconTypeMapOn, METH_VARARGS,
   "UseVertexIconTypeMapOn(self) -> None\nC++: virtual void UseVertexIconTypeMapOn()\n\n"},
  {"UseVertexIconTypeMapOff", PyvtkRenderedGraphRepresentation_UseVertexIconTypeMapOff, METH_VARARGS,
   "UseVertexIconTypeMapOff(self) -> None\nC++: virtual void UseVertexIconTypeMapOff()\n\n"},
  {"SetVertexIconAlignment", PyvtkRenderedGraphRepresentation_SetVertexIconAlignment, METH_VARARGS,
   "SetVertexIconAlignment(self, align:int) -> None\nC++: virtual void SetVertexIconAlignment(int align)\n\n"},
  {"GetVertexIconAlignment", PyvtkRenderedGraphRepresentation_GetVertexIconAlignment, METH_VARARGS,
   "GetVertexIconAlignment(self) -> int\nC++: virtual int GetVertexIconAlignment()\n\n"},
  {"SetVertexSelectedIcon", PyvtkRenderedGraphRepresentation_SetVertexSelectedIcon, METH_VARARGS,
   "SetVertexSelectedIcon(self, icon:int) -> None\nC++: virtual void SetVertexSelectedIcon(int icon)\n\n"},
  {"GetVertexSelectedIcon", PyvtkRenderedGraphRepresentation_GetVertexSelectedIcon, METH_VARARGS,
   "GetVertexSelectedIcon(self) -> int\nC++: virtual int GetVertexSelectedIcon()\n\n"},
  {"SetVertexDefaultIcon", PyvtkRenderedGraphRepresentation_SetVertexDefaultIcon, METH_VARARGS,
   "SetVertexDefaultIcon(self, icon:int) -> None\nC++: virtual void SetVertexDefaultIcon(int icon)\n\n"},
  {"GetVertexDefaultIcon", PyvtkRenderedGraphRepresentation_GetVertexDefaultIcon, METH_VARARGS,
   "GetVertexDefaultIcon(self) -> int\nC++: virtual int GetVertexDefaultIcon()\n\n"},
  {"SetVertexIconSelectionMode", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionMode, METH_VARARGS,
   "SetVertexIconSelectionMode(self, mode:int) -> None\nC++: virtual void SetVertexIconSelectionMode(int mode)\n\nSet the mode to one of  vtkApplyIcons::SELECTED_ICON - use\nVertexSelectedIcon vtkApplyIcons::SELECTED_OFFSET - use\nVertexSelectedIcon as offset vtkApplyIcons::ANNOTATION_ICON - use\ncurrent annotation icon vtkApplyIcons::IGNORE_SELECTION - ignore\nselected elements  The default is IGNORE_SELECTION.\n"},
  {"GetVertexIconSelectionMode", PyvtkRenderedGraphRepresentation_GetVertexIconSelectionMode, METH_VARARGS,
   "GetVertexIconSelectionMode(self) -> int\nC++: virtual int GetVertexIconSelectionMode()\n\n"},
  {"SetVertexIconSelectionModeToSelectedIcon", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToSelectedIcon, METH_VARARGS,
   "SetVertexIconSelectionModeToSelectedIcon(self) -> None\nC++: virtual void SetVertexIconSelectionModeToSelectedIcon()\n\n"},
  {"SetVertexIconSelectionModeToSelectedOffset", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToSelectedOffset, METH_VARARGS,
   "SetVertexIconSelectionModeToSelectedOffset(self) -> None\nC++: virtual void SetVertexIconSelectionModeToSelectedOffset()\n\n"},
  {"SetVertexIconSelectionModeToAnnotationIcon", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToAnnotationIcon, METH_VARARGS,
   "SetVertexIconSelectionModeToAnnotationIcon(self) -> None\nC++: virtual void SetVertexIconSelectionModeToAnnotationIcon()\n\n"},
  {"SetVertexIconSelectionModeToIgnoreSelection", PyvtkRenderedGraphRepresentation_SetVertexIconSelectionModeToIgnoreSelection, METH_VARARGS,
   "SetVertexIconSelectionModeToIgnoreSelection(self) -> None\nC++: virtual void SetVertexIconSelectionModeToIgnoreSelection()\n\n"},
  {"SetEdgeIconArrayName", PyvtkRenderedGraphRepresentation_SetEdgeIconArrayName, METH_VARARGS,
   "SetEdgeIconArrayName(self, name:str) -> None\nC++: virtual void SetEdgeIconArrayName(const char *name)\n\n"},
  {"GetEdgeIconArrayName", PyvtkRenderedGraphRepresentation_GetEdgeIconArrayName, METH_VARARGS,
   "GetEdgeIconArrayName(self) -> str\nC++: virtual const char *GetEdgeIconArrayName()\n\n"},
  {"SetEdgeIconPriorityArrayName", PyvtkRenderedGraphRepresentation_SetEdgeIconPriorityArrayName, METH_VARARGS,
   "SetEdgeIconPriorityArrayName(self, name:str) -> None\nC++: virtual void SetEdgeIconPriorityArrayName(const char *name)\n\n"},
  {"GetEdgeIconPriorityArrayName", PyvtkRenderedGraphRepresentation_GetEdgeIconPriorityArrayName, METH_VARARGS,
   "GetEdgeIconPriorityArrayName(self) -> str\nC++: virtual const char *GetEdgeIconPriorityArrayName()\n\n"},
  {"SetEdgeIconVisibility", PyvtkRenderedGraphRepresentation_SetEdgeIconVisibility, METH_VARARGS,
   "SetEdgeIconVisibility(self, b:bool) -> None\nC++: virtual void SetEdgeIconVisibility(bool b)\n\n"},
  {"GetEdgeIconVisibility", PyvtkRenderedGraphRepresentation_GetEdgeIconVisibility, METH_VARARGS,
   "GetEdgeIconVisibility(self) -> bool\nC++: virtual bool GetEdgeIconVisibility()\n\n"},
  {"EdgeIconVisibilityOn", PyvtkRenderedGraphRepresentation_EdgeIconVisibilityOn, METH_VARARGS,
   "EdgeIconVisibilityOn(self) -> None\nC++: virtual void EdgeIconVisibilityOn()\n\n"},
  {"EdgeIconVisibilityOff", PyvtkRenderedGraphRepresentation_EdgeIconVisibilityOff, METH_VARARGS,
   "EdgeIconVisibilityOff(self) -> None\nC++: virtual void EdgeIconVisibilityOff()\n\n"},
  {"AddEdgeIconType", PyvtkRenderedGraphRepresentation_AddEdgeIconType, METH_VARARGS,
   "AddEdgeIconType(self, name:str, type:int) -> None\nC++: virtual void AddEdgeIconType(const char *name, int type)\n\n"},
  {"ClearEdgeIconTypes", PyvtkRenderedGraphRepresentation_ClearEdgeIconTypes, METH_VARARGS,
   "ClearEdgeIconTypes(self) -> None\nC++: virtual void ClearEdgeIconTypes()\n\n"},
  {"SetUseEdgeIconTypeMap", PyvtkRenderedGraphRepresentation_SetUseEdgeIconTypeMap, METH_VARARGS,
   "SetUseEdgeIconTypeMap(self, b:bool) -> None\nC++: virtual void SetUseEdgeIconTypeMap(bool b)\n\n"},
  {"GetUseEdgeIconTypeMap", PyvtkRenderedGraphRepresentation_GetUseEdgeIconTypeMap, METH_VARARGS,
   "GetUseEdgeIconTypeMap(self) -> bool\nC++: virtual bool GetUseEdgeIconTypeMap()\n\n"},
  {"UseEdgeIconTypeMapOn", PyvtkRenderedGraphRepresentation_UseEdgeIconTypeMapOn, METH_VARARGS,
   "UseEdgeIconTypeMapOn(self) -> None\nC++: virtual void UseEdgeIconTypeMapOn()\n\n"},
  {"UseEdgeIconTypeMapOff", PyvtkRenderedGraphRepresentation_UseEdgeIconTypeMapOff, METH_VARARGS,
   "UseEdgeIconTypeMapOff(self) -> None\nC++: virtual void UseEdgeIconTypeMapOff()\n\n"},
  {"SetEdgeIconAlignment", PyvtkRenderedGraphRepresentation_SetEdgeIconAlignment, METH_VARARGS,
   "SetEdgeIconAlignment(self, align:int) -> None\nC++: virtual void SetEdgeIconAlignment(int align)\n\n"},
  {"GetEdgeIconAlignment", PyvtkRenderedGraphRepresentation_GetEdgeIconAlignment, METH_VARARGS,
   "GetEdgeIconAlignment(self) -> int\nC++: virtual int GetEdgeIconAlignment()\n\n"},
  {"SetColorVerticesByArray", PyvtkRenderedGraphRepresentation_SetColorVerticesByArray, METH_VARARGS,
   "SetColorVerticesByArray(self, b:bool) -> None\nC++: virtual void SetColorVerticesByArray(bool b)\n\n"},
  {"GetColorVerticesByArray", PyvtkRenderedGraphRepresentation_GetColorVerticesByArray, METH_VARARGS,
   "GetColorVerticesByArray(self) -> bool\nC++: virtual bool GetColorVerticesByArray()\n\n"},
  {"ColorVerticesByArrayOn", PyvtkRenderedGraphRepresentation_ColorVerticesByArrayOn, METH_VARARGS,
   "ColorVerticesByArrayOn(self) -> None\nC++: virtual void ColorVerticesByArrayOn()\n\n"},
  {"ColorVerticesByArrayOff", PyvtkRenderedGraphRepresentation_ColorVerticesByArrayOff, METH_VARARGS,
   "ColorVerticesByArrayOff(self) -> None\nC++: virtual void ColorVerticesByArrayOff()\n\n"},
  {"SetVertexColorArrayName", PyvtkRenderedGraphRepresentation_SetVertexColorArrayName, METH_VARARGS,
   "SetVertexColorArrayName(self, name:str) -> None\nC++: virtual void SetVertexColorArrayName(const char *name)\n\n"},
  {"GetVertexColorArrayName", PyvtkRenderedGraphRepresentation_GetVertexColorArrayName, METH_VARARGS,
   "GetVertexColorArrayName(self) -> str\nC++: virtual const char *GetVertexColorArrayName()\n\n"},
  {"SetColorEdgesByArray", PyvtkRenderedGraphRepresentation_SetColorEdgesByArray, METH_VARARGS,
   "SetColorEdgesByArray(self, b:bool) -> None\nC++: virtual void SetColorEdgesByArray(bool b)\n\n"},
  {"GetColorEdgesByArray", PyvtkRenderedGraphRepresentation_GetColorEdgesByArray, METH_VARARGS,
   "GetColorEdgesByArray(self) -> bool\nC++: virtual bool GetColorEdgesByArray()\n\n"},
  {"ColorEdgesByArrayOn", PyvtkRenderedGraphRepresentation_ColorEdgesByArrayOn, METH_VARARGS,
   "ColorEdgesByArrayOn(self) -> None\nC++: virtual void ColorEdgesByArrayOn()\n\n"},
  {"ColorEdgesByArrayOff", PyvtkRenderedGraphRepresentation_ColorEdgesByArrayOff, METH_VARARGS,
   "ColorEdgesByArrayOff(self) -> None\nC++: virtual void ColorEdgesByArrayOff()\n\n"},
  {"SetEdgeColorArrayName", PyvtkRenderedGraphRepresentation_SetEdgeColorArrayName, METH_VARARGS,
   "SetEdgeColorArrayName(self, name:str) -> None\nC++: virtual void SetEdgeColorArrayName(const char *name)\n\n"},
  {"GetEdgeColorArrayName", PyvtkRenderedGraphRepresentation_GetEdgeColorArrayName, METH_VARARGS,
   "GetEdgeColorArrayName(self) -> str\nC++: virtual const char *GetEdgeColorArrayName()\n\n"},
  {"SetEnableVerticesByArray", PyvtkRenderedGraphRepresentation_SetEnableVerticesByArray, METH_VARARGS,
   "SetEnableVerticesByArray(self, b:bool) -> None\nC++: virtual void SetEnableVerticesByArray(bool b)\n\n"},
  {"GetEnableVerticesByArray", PyvtkRenderedGraphRepresentation_GetEnableVerticesByArray, METH_VARARGS,
   "GetEnableVerticesByArray(self) -> bool\nC++: virtual bool GetEnableVerticesByArray()\n\n"},
  {"EnableVerticesByArrayOn", PyvtkRenderedGraphRepresentation_EnableVerticesByArrayOn, METH_VARARGS,
   "EnableVerticesByArrayOn(self) -> None\nC++: virtual void EnableVerticesByArrayOn()\n\n"},
  {"EnableVerticesByArrayOff", PyvtkRenderedGraphRepresentation_EnableVerticesByArrayOff, METH_VARARGS,
   "EnableVerticesByArrayOff(self) -> None\nC++: virtual void EnableVerticesByArrayOff()\n\n"},
  {"SetEnabledVerticesArrayName", PyvtkRenderedGraphRepresentation_SetEnabledVerticesArrayName, METH_VARARGS,
   "SetEnabledVerticesArrayName(self, name:str) -> None\nC++: virtual void SetEnabledVerticesArrayName(const char *name)\n\n"},
  {"GetEnabledVerticesArrayName", PyvtkRenderedGraphRepresentation_GetEnabledVerticesArrayName, METH_VARARGS,
   "GetEnabledVerticesArrayName(self) -> str\nC++: virtual const char *GetEnabledVerticesArrayName()\n\n"},
  {"SetEnableEdgesByArray", PyvtkRenderedGraphRepresentation_SetEnableEdgesByArray, METH_VARARGS,
   "SetEnableEdgesByArray(self, b:bool) -> None\nC++: virtual void SetEnableEdgesByArray(bool b)\n\n"},
  {"GetEnableEdgesByArray", PyvtkRenderedGraphRepresentation_GetEnableEdgesByArray, METH_VARARGS,
   "GetEnableEdgesByArray(self) -> bool\nC++: virtual bool GetEnableEdgesByArray()\n\n"},
  {"EnableEdgesByArrayOn", PyvtkRenderedGraphRepresentation_EnableEdgesByArrayOn, METH_VARARGS,
   "EnableEdgesByArrayOn(self) -> None\nC++: virtual void EnableEdgesByArrayOn()\n\n"},
  {"EnableEdgesByArrayOff", PyvtkRenderedGraphRepresentation_EnableEdgesByArrayOff, METH_VARARGS,
   "EnableEdgesByArrayOff(self) -> None\nC++: virtual void EnableEdgesByArrayOff()\n\n"},
  {"SetEnabledEdgesArrayName", PyvtkRenderedGraphRepresentation_SetEnabledEdgesArrayName, METH_VARARGS,
   "SetEnabledEdgesArrayName(self, name:str) -> None\nC++: virtual void SetEnabledEdgesArrayName(const char *name)\n\n"},
  {"GetEnabledEdgesArrayName", PyvtkRenderedGraphRepresentation_GetEnabledEdgesArrayName, METH_VARARGS,
   "GetEnabledEdgesArrayName(self) -> str\nC++: virtual const char *GetEnabledEdgesArrayName()\n\n"},
  {"SetEdgeVisibility", PyvtkRenderedGraphRepresentation_SetEdgeVisibility, METH_VARARGS,
   "SetEdgeVisibility(self, b:bool) -> None\nC++: virtual void SetEdgeVisibility(bool b)\n\n"},
  {"GetEdgeVisibility", PyvtkRenderedGraphRepresentation_GetEdgeVisibility, METH_VARARGS,
   "GetEdgeVisibility(self) -> bool\nC++: virtual bool GetEdgeVisibility()\n\n"},
  {"EdgeVisibilityOn", PyvtkRenderedGraphRepresentation_EdgeVisibilityOn, METH_VARARGS,
   "EdgeVisibilityOn(self) -> None\nC++: virtual void EdgeVisibilityOn()\n\n"},
  {"EdgeVisibilityOff", PyvtkRenderedGraphRepresentation_EdgeVisibilityOff, METH_VARARGS,
   "EdgeVisibilityOff(self) -> None\nC++: virtual void EdgeVisibilityOff()\n\n"},
  {"SetEdgeSelection", PyvtkRenderedGraphRepresentation_SetEdgeSelection, METH_VARARGS,
   "SetEdgeSelection(self, b:bool) -> None\nC++: void SetEdgeSelection(bool b)\n\n"},
  {"GetEdgeSelection", PyvtkRenderedGraphRepresentation_GetEdgeSelection, METH_VARARGS,
   "GetEdgeSelection(self) -> bool\nC++: bool GetEdgeSelection()\n\n"},
  {"SetLayoutStrategy", PyvtkRenderedGraphRepresentation_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, strategy:vtkGraphLayoutStrategy) -> None\nC++: virtual void SetLayoutStrategy(\n    vtkGraphLayoutStrategy *strategy)\nSetLayoutStrategy(self, name:str) -> None\nC++: virtual void SetLayoutStrategy(const char *name)\n\nSet/get the graph layout strategy.\n"},
  {"GetLayoutStrategy", PyvtkRenderedGraphRepresentation_GetLayoutStrategy, METH_VARARGS,
   "GetLayoutStrategy(self) -> vtkGraphLayoutStrategy\nC++: virtual vtkGraphLayoutStrategy *GetLayoutStrategy()\n\n"},
  {"GetLayoutStrategyName", PyvtkRenderedGraphRepresentation_GetLayoutStrategyName, METH_VARARGS,
   "GetLayoutStrategyName(self) -> str\nC++: virtual char *GetLayoutStrategyName()\n\n"},
  {"SetLayoutStrategyToRandom", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToRandom, METH_VARARGS,
   "SetLayoutStrategyToRandom(self) -> None\nC++: void SetLayoutStrategyToRandom()\n\nSet predefined layout strategies.\n"},
  {"SetLayoutStrategyToForceDirected", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToForceDirected, METH_VARARGS,
   "SetLayoutStrategyToForceDirected(self) -> None\nC++: void SetLayoutStrategyToForceDirected()\n\n"},
  {"SetLayoutStrategyToSimple2D", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToSimple2D, METH_VARARGS,
   "SetLayoutStrategyToSimple2D(self) -> None\nC++: void SetLayoutStrategyToSimple2D()\n\n"},
  {"SetLayoutStrategyToClustering2D", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToClustering2D, METH_VARARGS,
   "SetLayoutStrategyToClustering2D(self) -> None\nC++: void SetLayoutStrategyToClustering2D()\n\n"},
  {"SetLayoutStrategyToCommunity2D", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCommunity2D, METH_VARARGS,
   "SetLayoutStrategyToCommunity2D(self) -> None\nC++: void SetLayoutStrategyToCommunity2D()\n\n"},
  {"SetLayoutStrategyToFast2D", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToFast2D, METH_VARARGS,
   "SetLayoutStrategyToFast2D(self) -> None\nC++: void SetLayoutStrategyToFast2D()\n\n"},
  {"SetLayoutStrategyToPassThrough", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToPassThrough, METH_VARARGS,
   "SetLayoutStrategyToPassThrough(self) -> None\nC++: void SetLayoutStrategyToPassThrough()\n\n"},
  {"SetLayoutStrategyToCircular", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCircular, METH_VARARGS,
   "SetLayoutStrategyToCircular(self) -> None\nC++: void SetLayoutStrategyToCircular()\n\n"},
  {"SetLayoutStrategyToTree", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToTree, METH_VARARGS,
   "SetLayoutStrategyToTree(self) -> None\nC++: void SetLayoutStrategyToTree()\nSetLayoutStrategyToTree(self, radial:bool, angle:float=90,\n    leafSpacing:float=0.9, logSpacing:float=1.0) -> None\nC++: virtual void SetLayoutStrategyToTree(bool radial,\n    double angle=90, double leafSpacing=0.9,\n    double logSpacing=1.0)\n\n"},
  {"SetLayoutStrategyToCosmicTree", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCosmicTree, METH_VARARGS,
   "SetLayoutStrategyToCosmicTree(self) -> None\nC++: void SetLayoutStrategyToCosmicTree()\nSetLayoutStrategyToCosmicTree(self, nodeSizeArrayName:str,\n    sizeLeafNodesOnly:bool=True, layoutDepth:int=0,\n    layoutRoot:int=-1) -> None\nC++: virtual void SetLayoutStrategyToCosmicTree(\n    const char *nodeSizeArrayName, bool sizeLeafNodesOnly=true,\n    int layoutDepth=0, vtkIdType layoutRoot=-1)\n\n"},
  {"SetLayoutStrategyToCone", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToCone, METH_VARARGS,
   "SetLayoutStrategyToCone(self) -> None\nC++: void SetLayoutStrategyToCone()\n\n"},
  {"SetLayoutStrategyToSpanTree", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToSpanTree, METH_VARARGS,
   "SetLayoutStrategyToSpanTree(self) -> None\nC++: void SetLayoutStrategyToSpanTree()\n\n"},
  {"SetLayoutStrategyToAssignCoordinates", PyvtkRenderedGraphRepresentation_SetLayoutStrategyToAssignCoordinates, METH_VARARGS,
   "SetLayoutStrategyToAssignCoordinates(self, xarr:str, yarr:str=...,\n     zarr:str=...) -> None\nC++: virtual void SetLayoutStrategyToAssignCoordinates(\n    const char *xarr, const char *yarr=nullptr,\n    const char *zarr=nullptr)\n\nSet the layout strategy to use coordinates from arrays. The x\narray must be specified. The y and z arrays are optional.\n"},
  {"SetEdgeLayoutStrategy", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategy, METH_VARARGS,
   "SetEdgeLayoutStrategy(self, strategy:vtkEdgeLayoutStrategy)\n    -> None\nC++: virtual void SetEdgeLayoutStrategy(\n    vtkEdgeLayoutStrategy *strategy)\nSetEdgeLayoutStrategy(self, name:str) -> None\nC++: virtual void SetEdgeLayoutStrategy(const char *name)\n\nSet/get the graph layout strategy.\n"},
  {"GetEdgeLayoutStrategy", PyvtkRenderedGraphRepresentation_GetEdgeLayoutStrategy, METH_VARARGS,
   "GetEdgeLayoutStrategy(self) -> vtkEdgeLayoutStrategy\nC++: virtual vtkEdgeLayoutStrategy *GetEdgeLayoutStrategy()\n\n"},
  {"SetEdgeLayoutStrategyToArcParallel", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToArcParallel, METH_VARARGS,
   "SetEdgeLayoutStrategyToArcParallel(self) -> None\nC++: void SetEdgeLayoutStrategyToArcParallel()\n\n"},
  {"SetEdgeLayoutStrategyToPassThrough", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToPassThrough, METH_VARARGS,
   "SetEdgeLayoutStrategyToPassThrough(self) -> None\nC++: void SetEdgeLayoutStrategyToPassThrough()\n\n"},
  {"SetEdgeLayoutStrategyToGeo", PyvtkRenderedGraphRepresentation_SetEdgeLayoutStrategyToGeo, METH_VARARGS,
   "SetEdgeLayoutStrategyToGeo(self, explodeFactor:float=0.2) -> None\nC++: virtual void SetEdgeLayoutStrategyToGeo(\n    double explodeFactor=0.2)\n\nSet the edge layout strategy to a geospatial arced strategy\nappropriate for vtkGeoView.\n"},
  {"GetEdgeLayoutStrategyName", PyvtkRenderedGraphRepresentation_GetEdgeLayoutStrategyName, METH_VARARGS,
   "GetEdgeLayoutStrategyName(self) -> str\nC++: virtual char *GetEdgeLayoutStrategyName()\n\n"},
  {"ApplyViewTheme", PyvtkRenderedGraphRepresentation_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: void ApplyViewTheme(vtkViewTheme *theme) override;\n\nApply a theme to this representation.\n"},
  {"SetGlyphType", PyvtkRenderedGraphRepresentation_SetGlyphType, METH_VARARGS,
   "SetGlyphType(self, type:int) -> None\nC++: virtual void SetGlyphType(int type)\n\nSet the graph vertex glyph type.\n"},
  {"GetGlyphType", PyvtkRenderedGraphRepresentation_GetGlyphType, METH_VARARGS,
   "GetGlyphType(self) -> int\nC++: virtual int GetGlyphType()\n\n"},
  {"SetScaling", PyvtkRenderedGraphRepresentation_SetScaling, METH_VARARGS,
   "SetScaling(self, b:bool) -> None\nC++: virtual void SetScaling(bool b)\n\nSet whether to scale vertex glyphs.\n"},
  {"GetScaling", PyvtkRenderedGraphRepresentation_GetScaling, METH_VARARGS,
   "GetScaling(self) -> bool\nC++: virtual bool GetScaling()\n\n"},
  {"ScalingOn", PyvtkRenderedGraphRepresentation_ScalingOn, METH_VARARGS,
   "ScalingOn(self) -> None\nC++: virtual void ScalingOn()\n\n"},
  {"ScalingOff", PyvtkRenderedGraphRepresentation_ScalingOff, METH_VARARGS,
   "ScalingOff(self) -> None\nC++: virtual void ScalingOff()\n\n"},
  {"SetScalingArrayName", PyvtkRenderedGraphRepresentation_SetScalingArrayName, METH_VARARGS,
   "SetScalingArrayName(self, name:str) -> None\nC++: virtual void SetScalingArrayName(const char *name)\n\nSet the glyph scaling array name.\n"},
  {"GetScalingArrayName", PyvtkRenderedGraphRepresentation_GetScalingArrayName, METH_VARARGS,
   "GetScalingArrayName(self) -> str\nC++: virtual const char *GetScalingArrayName()\n\n"},
  {"SetVertexScalarBarVisibility", PyvtkRenderedGraphRepresentation_SetVertexScalarBarVisibility, METH_VARARGS,
   "SetVertexScalarBarVisibility(self, b:bool) -> None\nC++: virtual void SetVertexScalarBarVisibility(bool b)\n\nVertex/edge scalar bar visibility.\n"},
  {"GetVertexScalarBarVisibility", PyvtkRenderedGraphRepresentation_GetVertexScalarBarVisibility, METH_VARARGS,
   "GetVertexScalarBarVisibility(self) -> bool\nC++: virtual bool GetVertexScalarBarVisibility()\n\n"},
  {"SetEdgeScalarBarVisibility", PyvtkRenderedGraphRepresentation_SetEdgeScalarBarVisibility, METH_VARARGS,
   "SetEdgeScalarBarVisibility(self, b:bool) -> None\nC++: virtual void SetEdgeScalarBarVisibility(bool b)\n\n"},
  {"GetEdgeScalarBarVisibility", PyvtkRenderedGraphRepresentation_GetEdgeScalarBarVisibility, METH_VARARGS,
   "GetEdgeScalarBarVisibility(self) -> bool\nC++: virtual bool GetEdgeScalarBarVisibility()\n\n"},
  {"GetVertexScalarBar", PyvtkRenderedGraphRepresentation_GetVertexScalarBar, METH_VARARGS,
   "GetVertexScalarBar(self) -> vtkScalarBarWidget\nC++: virtual vtkScalarBarWidget *GetVertexScalarBar()\n\nObtain the scalar bar widget used to draw a legend for the\nvertices/edges.\n"},
  {"GetEdgeScalarBar", PyvtkRenderedGraphRepresentation_GetEdgeScalarBar, METH_VARARGS,
   "GetEdgeScalarBar(self) -> vtkScalarBarWidget\nC++: virtual vtkScalarBarWidget *GetEdgeScalarBar()\n\n"},
  {"IsLayoutComplete", PyvtkRenderedGraphRepresentation_IsLayoutComplete, METH_VARARGS,
   "IsLayoutComplete(self) -> bool\nC++: virtual bool IsLayoutComplete()\n\nWhether the current graph layout is complete.\n"},
  {"UpdateLayout", PyvtkRenderedGraphRepresentation_UpdateLayout, METH_VARARGS,
   "UpdateLayout(self) -> None\nC++: virtual void UpdateLayout()\n\nPerforms another iteration on the graph layout.\n"},
  {"ComputeSelectedGraphBounds", PyvtkRenderedGraphRepresentation_ComputeSelectedGraphBounds, METH_VARARGS,
   "ComputeSelectedGraphBounds(self, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void ComputeSelectedGraphBounds(double bounds[6])\n\nCompute the bounding box of the selected subgraph.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRenderedGraphRepresentation_Doc =
  "vtkRenderedGraphRepresentation - \n\n"
  "Superclass: vtkRenderedRepresentation\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderedGraphRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkRenderedGraphRepresentation", // tp_name
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
  PyvtkRenderedGraphRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderedGraphRepresentation_StaticNew()
{
  return vtkRenderedGraphRepresentation::New();
}

PyObject *PyvtkRenderedGraphRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderedGraphRepresentation_Type, PyvtkRenderedGraphRepresentation_Methods,
    "vtkRenderedGraphRepresentation",
 &PyvtkRenderedGraphRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRenderedRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderedGraphRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderedGraphRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderedGraphRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

