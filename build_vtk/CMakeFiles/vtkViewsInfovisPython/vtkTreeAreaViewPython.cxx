// python wrapper for vtkTreeAreaView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeAreaView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeAreaView(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeAreaView_ClassNew(); }

#ifndef DECLARED_PyvtkRenderView_ClassNew
extern "C" { PyObject *PyvtkRenderView_ClassNew(); }
#define DECLARED_PyvtkRenderView_ClassNew
#endif

static PyObject *
PyvtkTreeAreaView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeAreaView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeAreaView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeAreaView *tempr = vtkTreeAreaView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeAreaView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeAreaView::NewInstance());

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
PyvtkTreeAreaView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeAreaView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeAreaView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetTreeFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetTreeFromInputConnection(temp0) :
      op->vtkTreeAreaView::SetTreeFromInputConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetTreeFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetTreeFromInput(temp0) :
      op->vtkTreeAreaView::SetTreeFromInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetGraphFromInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphFromInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetGraphFromInputConnection(temp0) :
      op->vtkTreeAreaView::SetGraphFromInputConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetGraphFromInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphFromInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    vtkDataRepresentation *tempr = (ap.IsBound() ?
      op->SetGraphFromInput(temp0) :
      op->vtkTreeAreaView::SetGraphFromInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaLabelArrayName(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetAreaLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAreaLabelArrayName() :
      op->vtkTreeAreaView::GetAreaLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaSizeArrayName(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetAreaSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAreaSizeArrayName() :
      op->vtkTreeAreaView::GetAreaSizeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelPriorityArrayName(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetLabelPriorityArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetLabelPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelPriorityArrayName() :
      op->vtkTreeAreaView::GetLabelPriorityArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeLabelArrayName() :
      op->vtkTreeAreaView::GetEdgeLabelArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaHoverArrayName(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetAreaHoverArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaHoverArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaHoverArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAreaHoverArrayName() :
      op->vtkTreeAreaView::GetAreaHoverArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaLabelVisibility(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetAreaLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAreaLabelVisibility() :
      op->vtkTreeAreaView::GetAreaLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_AreaLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AreaLabelVisibilityOn();
    }
    else
    {
      op->vtkTreeAreaView::AreaLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_AreaLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AreaLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AreaLabelVisibilityOff();
    }
    else
    {
      op->vtkTreeAreaView::AreaLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeLabelVisibility() :
      op->vtkTreeAreaView::GetEdgeLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_EdgeLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeLabelVisibilityOn();
    }
    else
    {
      op->vtkTreeAreaView::EdgeLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_EdgeLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeLabelVisibilityOff();
    }
    else
    {
      op->vtkTreeAreaView::EdgeLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaColorArrayName(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetAreaColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAreaColorArrayName() :
      op->vtkTreeAreaView::GetAreaColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetColorAreas(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorAreas");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorAreas(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetColorAreas(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetColorAreas(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorAreas");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorAreas() :
      op->vtkTreeAreaView::GetColorAreas());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_ColorAreasOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAreasOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorAreasOn();
    }
    else
    {
      op->vtkTreeAreaView::ColorAreasOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_ColorAreasOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorAreasOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorAreasOff();
    }
    else
    {
      op->vtkTreeAreaView::ColorAreasOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeColorArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeColorArrayName() :
      op->vtkTreeAreaView::GetEdgeColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeColorToSplineFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColorToSplineFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColorToSplineFraction();
    }
    else
    {
      op->vtkTreeAreaView::SetEdgeColorToSplineFraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShrinkPercentage(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetShrinkPercentage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetShrinkPercentage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShrinkPercentage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetShrinkPercentage() :
      op->vtkTreeAreaView::GetShrinkPercentage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetColorEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetColorEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorEdges() :
      op->vtkTreeAreaView::GetColorEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_ColorEdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesOn();
    }
    else
    {
      op->vtkTreeAreaView::ColorEdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_ColorEdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorEdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorEdgesOff();
    }
    else
    {
      op->vtkTreeAreaView::ColorEdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBundlingStrength(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetBundlingStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetBundlingStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBundlingStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBundlingStrength() :
      op->vtkTreeAreaView::GetBundlingStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetAreaLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaLabelFontSize(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetAreaLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetAreaLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAreaLabelFontSize() :
      op->vtkTreeAreaView::GetAreaLabelFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeLabelFontSize() :
      op->vtkTreeAreaView::GetEdgeLabelFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  vtkAreaLayoutStrategy *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayoutStrategy"))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAreaLayoutStrategy *tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkTreeAreaView::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRectangularCoordinates(temp0);
    }
    else
    {
      op->vtkTreeAreaView::SetUseRectangularCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRectangularCoordinates() :
      op->vtkTreeAreaView::GetUseRectangularCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_UseRectangularCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRectangularCoordinatesOn();
    }
    else
    {
      op->vtkTreeAreaView::UseRectangularCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_UseRectangularCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRectangularCoordinatesOff();
    }
    else
    {
      op->vtkTreeAreaView::UseRectangularCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_SetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

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
      op->vtkTreeAreaView::SetEdgeScalarBarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeAreaView_GetEdgeScalarBarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeScalarBarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeAreaView *op = static_cast<vtkTreeAreaView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEdgeScalarBarVisibility() :
      op->vtkTreeAreaView::GetEdgeScalarBarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeAreaView_Methods[] = {
  {"IsTypeOf", PyvtkTreeAreaView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeAreaView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeAreaView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeAreaView\nC++: static vtkTreeAreaView *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeAreaView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeAreaView\nC++: vtkTreeAreaView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeAreaView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeAreaView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTreeFromInputConnection", PyvtkTreeAreaView_SetTreeFromInputConnection, METH_VARARGS,
   "SetTreeFromInputConnection(self, conn:vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetTreeFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\nSet the tree and graph representations to the appropriate input\nports.\n"},
  {"SetTreeFromInput", PyvtkTreeAreaView_SetTreeFromInput, METH_VARARGS,
   "SetTreeFromInput(self, input:vtkTree) -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetTreeFromInput(vtkTree *input)\n\n"},
  {"SetGraphFromInputConnection", PyvtkTreeAreaView_SetGraphFromInputConnection, METH_VARARGS,
   "SetGraphFromInputConnection(self, conn:vtkAlgorithmOutput)\n    -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetGraphFromInputConnection(\n    vtkAlgorithmOutput *conn)\n\n"},
  {"SetGraphFromInput", PyvtkTreeAreaView_SetGraphFromInput, METH_VARARGS,
   "SetGraphFromInput(self, input:vtkGraph) -> vtkDataRepresentation\nC++: vtkDataRepresentation *SetGraphFromInput(vtkGraph *input)\n\n"},
  {"SetAreaLabelArrayName", PyvtkTreeAreaView_SetAreaLabelArrayName, METH_VARARGS,
   "SetAreaLabelArrayName(self, name:str) -> None\nC++: void SetAreaLabelArrayName(const char *name)\n\nThe array to use for area labeling.  Default is \"label\".\n"},
  {"GetAreaLabelArrayName", PyvtkTreeAreaView_GetAreaLabelArrayName, METH_VARARGS,
   "GetAreaLabelArrayName(self) -> str\nC++: const char *GetAreaLabelArrayName()\n\n"},
  {"SetAreaSizeArrayName", PyvtkTreeAreaView_SetAreaSizeArrayName, METH_VARARGS,
   "SetAreaSizeArrayName(self, name:str) -> None\nC++: void SetAreaSizeArrayName(const char *name)\n\nThe array to use for area sizes. Default is \"size\".\n"},
  {"GetAreaSizeArrayName", PyvtkTreeAreaView_GetAreaSizeArrayName, METH_VARARGS,
   "GetAreaSizeArrayName(self) -> str\nC++: const char *GetAreaSizeArrayName()\n\n"},
  {"SetLabelPriorityArrayName", PyvtkTreeAreaView_SetLabelPriorityArrayName, METH_VARARGS,
   "SetLabelPriorityArrayName(self, name:str) -> None\nC++: void SetLabelPriorityArrayName(const char *name)\n\nThe array to use for area labeling priority. Default is\n\"GraphVertexDegree\".\n"},
  {"GetLabelPriorityArrayName", PyvtkTreeAreaView_GetLabelPriorityArrayName, METH_VARARGS,
   "GetLabelPriorityArrayName(self) -> str\nC++: const char *GetLabelPriorityArrayName()\n\n"},
  {"SetEdgeLabelArrayName", PyvtkTreeAreaView_SetEdgeLabelArrayName, METH_VARARGS,
   "SetEdgeLabelArrayName(self, name:str) -> None\nC++: void SetEdgeLabelArrayName(const char *name)\n\nThe array to use for edge labeling.  Default is \"label\".\n"},
  {"GetEdgeLabelArrayName", PyvtkTreeAreaView_GetEdgeLabelArrayName, METH_VARARGS,
   "GetEdgeLabelArrayName(self) -> str\nC++: const char *GetEdgeLabelArrayName()\n\n"},
  {"SetAreaHoverArrayName", PyvtkTreeAreaView_SetAreaHoverArrayName, METH_VARARGS,
   "SetAreaHoverArrayName(self, name:str) -> None\nC++: void SetAreaHoverArrayName(const char *name)\n\nThe name of the array whose value appears when the mouse hovers\nover a rectangle in the treemap. This must be a string array.\n"},
  {"GetAreaHoverArrayName", PyvtkTreeAreaView_GetAreaHoverArrayName, METH_VARARGS,
   "GetAreaHoverArrayName(self) -> str\nC++: const char *GetAreaHoverArrayName()\n\n"},
  {"SetAreaLabelVisibility", PyvtkTreeAreaView_SetAreaLabelVisibility, METH_VARARGS,
   "SetAreaLabelVisibility(self, vis:bool) -> None\nC++: void SetAreaLabelVisibility(bool vis)\n\nWhether to show area labels.  Default is off.\n"},
  {"GetAreaLabelVisibility", PyvtkTreeAreaView_GetAreaLabelVisibility, METH_VARARGS,
   "GetAreaLabelVisibility(self) -> bool\nC++: bool GetAreaLabelVisibility()\n\n"},
  {"AreaLabelVisibilityOn", PyvtkTreeAreaView_AreaLabelVisibilityOn, METH_VARARGS,
   "AreaLabelVisibilityOn(self) -> None\nC++: virtual void AreaLabelVisibilityOn()\n\n"},
  {"AreaLabelVisibilityOff", PyvtkTreeAreaView_AreaLabelVisibilityOff, METH_VARARGS,
   "AreaLabelVisibilityOff(self) -> None\nC++: virtual void AreaLabelVisibilityOff()\n\n"},
  {"SetEdgeLabelVisibility", PyvtkTreeAreaView_SetEdgeLabelVisibility, METH_VARARGS,
   "SetEdgeLabelVisibility(self, vis:bool) -> None\nC++: void SetEdgeLabelVisibility(bool vis)\n\nWhether to show edge labels.  Default is off.\n"},
  {"GetEdgeLabelVisibility", PyvtkTreeAreaView_GetEdgeLabelVisibility, METH_VARARGS,
   "GetEdgeLabelVisibility(self) -> bool\nC++: bool GetEdgeLabelVisibility()\n\n"},
  {"EdgeLabelVisibilityOn", PyvtkTreeAreaView_EdgeLabelVisibilityOn, METH_VARARGS,
   "EdgeLabelVisibilityOn(self) -> None\nC++: virtual void EdgeLabelVisibilityOn()\n\n"},
  {"EdgeLabelVisibilityOff", PyvtkTreeAreaView_EdgeLabelVisibilityOff, METH_VARARGS,
   "EdgeLabelVisibilityOff(self) -> None\nC++: virtual void EdgeLabelVisibilityOff()\n\n"},
  {"SetAreaColorArrayName", PyvtkTreeAreaView_SetAreaColorArrayName, METH_VARARGS,
   "SetAreaColorArrayName(self, name:str) -> None\nC++: void SetAreaColorArrayName(const char *name)\n\nThe array to use for coloring vertices.  Default is \"color\".\n"},
  {"GetAreaColorArrayName", PyvtkTreeAreaView_GetAreaColorArrayName, METH_VARARGS,
   "GetAreaColorArrayName(self) -> str\nC++: const char *GetAreaColorArrayName()\n\n"},
  {"SetColorAreas", PyvtkTreeAreaView_SetColorAreas, METH_VARARGS,
   "SetColorAreas(self, vis:bool) -> None\nC++: void SetColorAreas(bool vis)\n\nWhether to color vertices.  Default is off.\n"},
  {"GetColorAreas", PyvtkTreeAreaView_GetColorAreas, METH_VARARGS,
   "GetColorAreas(self) -> bool\nC++: bool GetColorAreas()\n\n"},
  {"ColorAreasOn", PyvtkTreeAreaView_ColorAreasOn, METH_VARARGS,
   "ColorAreasOn(self) -> None\nC++: virtual void ColorAreasOn()\n\n"},
  {"ColorAreasOff", PyvtkTreeAreaView_ColorAreasOff, METH_VARARGS,
   "ColorAreasOff(self) -> None\nC++: virtual void ColorAreasOff()\n\n"},
  {"SetEdgeColorArrayName", PyvtkTreeAreaView_SetEdgeColorArrayName, METH_VARARGS,
   "SetEdgeColorArrayName(self, name:str) -> None\nC++: void SetEdgeColorArrayName(const char *name)\n\nThe array to use for coloring edges.  Default is \"color\".\n"},
  {"GetEdgeColorArrayName", PyvtkTreeAreaView_GetEdgeColorArrayName, METH_VARARGS,
   "GetEdgeColorArrayName(self) -> str\nC++: const char *GetEdgeColorArrayName()\n\n"},
  {"SetEdgeColorToSplineFraction", PyvtkTreeAreaView_SetEdgeColorToSplineFraction, METH_VARARGS,
   "SetEdgeColorToSplineFraction(self) -> None\nC++: void SetEdgeColorToSplineFraction()\n\nSet the color to be the spline fraction\n"},
  {"SetShrinkPercentage", PyvtkTreeAreaView_SetShrinkPercentage, METH_VARARGS,
   "SetShrinkPercentage(self, value:float) -> None\nC++: void SetShrinkPercentage(double value)\n\nSet the region shrink percentage between 0.0 and 1.0.\n"},
  {"GetShrinkPercentage", PyvtkTreeAreaView_GetShrinkPercentage, METH_VARARGS,
   "GetShrinkPercentage(self) -> float\nC++: double GetShrinkPercentage()\n\n"},
  {"SetColorEdges", PyvtkTreeAreaView_SetColorEdges, METH_VARARGS,
   "SetColorEdges(self, vis:bool) -> None\nC++: void SetColorEdges(bool vis)\n\nWhether to color edges.  Default is off.\n"},
  {"GetColorEdges", PyvtkTreeAreaView_GetColorEdges, METH_VARARGS,
   "GetColorEdges(self) -> bool\nC++: bool GetColorEdges()\n\n"},
  {"ColorEdgesOn", PyvtkTreeAreaView_ColorEdgesOn, METH_VARARGS,
   "ColorEdgesOn(self) -> None\nC++: virtual void ColorEdgesOn()\n\n"},
  {"ColorEdgesOff", PyvtkTreeAreaView_ColorEdgesOff, METH_VARARGS,
   "ColorEdgesOff(self) -> None\nC++: virtual void ColorEdgesOff()\n\n"},
  {"SetBundlingStrength", PyvtkTreeAreaView_SetBundlingStrength, METH_VARARGS,
   "SetBundlingStrength(self, strength:float) -> None\nC++: void SetBundlingStrength(double strength)\n\nSet the bundling strength.\n"},
  {"GetBundlingStrength", PyvtkTreeAreaView_GetBundlingStrength, METH_VARARGS,
   "GetBundlingStrength(self) -> float\nC++: double GetBundlingStrength()\n\n"},
  {"SetAreaLabelFontSize", PyvtkTreeAreaView_SetAreaLabelFontSize, METH_VARARGS,
   "SetAreaLabelFontSize(self, size:int) -> None\nC++: virtual void SetAreaLabelFontSize(int size)\n\nThe size of the font used for area labeling\n"},
  {"GetAreaLabelFontSize", PyvtkTreeAreaView_GetAreaLabelFontSize, METH_VARARGS,
   "GetAreaLabelFontSize(self) -> int\nC++: virtual int GetAreaLabelFontSize()\n\n"},
  {"SetEdgeLabelFontSize", PyvtkTreeAreaView_SetEdgeLabelFontSize, METH_VARARGS,
   "SetEdgeLabelFontSize(self, size:int) -> None\nC++: virtual void SetEdgeLabelFontSize(int size)\n\nThe size of the font used for edge labeling\n"},
  {"GetEdgeLabelFontSize", PyvtkTreeAreaView_GetEdgeLabelFontSize, METH_VARARGS,
   "GetEdgeLabelFontSize(self) -> int\nC++: virtual int GetEdgeLabelFontSize()\n\n"},
  {"SetLayoutStrategy", PyvtkTreeAreaView_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, strategy:vtkAreaLayoutStrategy) -> None\nC++: virtual void SetLayoutStrategy(\n    vtkAreaLayoutStrategy *strategy)\n\nThe layout strategy for producing spatial regions for the tree.\n"},
  {"GetLayoutStrategy", PyvtkTreeAreaView_GetLayoutStrategy, METH_VARARGS,
   "GetLayoutStrategy(self) -> vtkAreaLayoutStrategy\nC++: virtual vtkAreaLayoutStrategy *GetLayoutStrategy()\n\n"},
  {"SetUseRectangularCoordinates", PyvtkTreeAreaView_SetUseRectangularCoordinates, METH_VARARGS,
   "SetUseRectangularCoordinates(self, rect:bool) -> None\nC++: virtual void SetUseRectangularCoordinates(bool rect)\n\nWhether the area represents radial or rectangular coordinates.\n"},
  {"GetUseRectangularCoordinates", PyvtkTreeAreaView_GetUseRectangularCoordinates, METH_VARARGS,
   "GetUseRectangularCoordinates(self) -> bool\nC++: virtual bool GetUseRectangularCoordinates()\n\n"},
  {"UseRectangularCoordinatesOn", PyvtkTreeAreaView_UseRectangularCoordinatesOn, METH_VARARGS,
   "UseRectangularCoordinatesOn(self) -> None\nC++: virtual void UseRectangularCoordinatesOn()\n\n"},
  {"UseRectangularCoordinatesOff", PyvtkTreeAreaView_UseRectangularCoordinatesOff, METH_VARARGS,
   "UseRectangularCoordinatesOff(self) -> None\nC++: virtual void UseRectangularCoordinatesOff()\n\n"},
  {"SetEdgeScalarBarVisibility", PyvtkTreeAreaView_SetEdgeScalarBarVisibility, METH_VARARGS,
   "SetEdgeScalarBarVisibility(self, b:bool) -> None\nC++: virtual void SetEdgeScalarBarVisibility(bool b)\n\nVisibility of scalar bar actor for edges.\n"},
  {"GetEdgeScalarBarVisibility", PyvtkTreeAreaView_GetEdgeScalarBarVisibility, METH_VARARGS,
   "GetEdgeScalarBarVisibility(self) -> bool\nC++: virtual bool GetEdgeScalarBarVisibility()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeAreaView_Doc =
  "vtkTreeAreaView - Accepts a graph and a hierarchy - currently a tree\n- and provides a hierarchy-aware display.\n\n"
  "Superclass: vtkRenderView\n\n"
  "Currently, this means displaying the hierarchy using a tree ring\n"
  "layout, then rendering the graph vertices as leaves of the tree with\n"
  "curved graph edges between leaves.\n\n"
  "Takes a graph and a hierarchy (currently a tree) and lays out the\n"
  "graph vertices based on their categorization within the hierarchy.\n\n"
  ".SEE ALSO vtkGraphLayoutView\n\n"
  "@par Thanks: Thanks to Jason Shepherd for implementing this class\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeAreaView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkTreeAreaView", // tp_name
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
  PyvtkTreeAreaView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeAreaView_StaticNew()
{
  return vtkTreeAreaView::New();
}

PyObject *PyvtkTreeAreaView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeAreaView_Type, PyvtkTreeAreaView_Methods,
    "vtkTreeAreaView",
 &PyvtkTreeAreaView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRenderView_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeAreaView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeAreaView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeAreaView", o) != 0)
  {
    Py_DECREF(o);
  }

}

