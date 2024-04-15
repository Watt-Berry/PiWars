// python wrapper for vtkOrientedGlyphContourRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOrientedGlyphContourRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientedGlyphContourRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkOrientedGlyphContourRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkContourRepresentation_ClassNew
extern "C" { PyObject *PyvtkContourRepresentation_ClassNew(); }
#define DECLARED_PyvtkContourRepresentation_ClassNew
#endif

static PyObject *
PyvtkOrientedGlyphContourRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientedGlyphContourRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedGlyphContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientedGlyphContourRepresentation *tempr = vtkOrientedGlyphContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedGlyphContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedGlyphContourRepresentation::NewInstance());

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
PyvtkOrientedGlyphContourRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOrientedGlyphContourRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOrientedGlyphContourRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetCursorShape(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkOrientedGlyphContourRepresentation::GetCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetActiveCursorShape(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetActiveCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetActiveCursorShape() :
      op->vtkOrientedGlyphContourRepresentation::GetActiveCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActiveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetActiveProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetActiveProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLinesProperty() :
      op->vtkOrientedGlyphContourRepresentation::GetLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::StartWidgetInteraction(temp0);
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
PyvtkOrientedGlyphContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::WidgetInteraction(temp0);
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
PyvtkOrientedGlyphContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkOrientedGlyphContourRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphContourRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkOrientedGlyphContourRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkOrientedGlyphContourRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContourRepresentationAsPolyData() :
      op->vtkOrientedGlyphContourRepresentation::GetContourRepresentationAsPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetAlwaysOnTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlwaysOnTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlwaysOnTop(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetAlwaysOnTop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetAlwaysOnTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlwaysOnTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAlwaysOnTop() :
      op->vtkOrientedGlyphContourRepresentation::GetAlwaysOnTop());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlwaysOnTopOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlwaysOnTopOn();
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::AlwaysOnTopOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AlwaysOnTopOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AlwaysOnTopOff();
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::AlwaysOnTopOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetLineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_SetShowSelectedNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowSelectedNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowSelectedNodes(temp0);
    }
    else
    {
      op->vtkOrientedGlyphContourRepresentation::SetShowSelectedNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphContourRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphContourRepresentation *op = static_cast<vtkOrientedGlyphContourRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkOrientedGlyphContourRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientedGlyphContourRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkOrientedGlyphContourRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrientedGlyphContourRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrientedGlyphContourRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkOrientedGlyphContourRepresentation\nC++: static vtkOrientedGlyphContourRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrientedGlyphContourRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOrientedGlyphContourRepresentation\nC++: vtkOrientedGlyphContourRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOrientedGlyphContourRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOrientedGlyphContourRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCursorShape", PyvtkOrientedGlyphContourRepresentation_SetCursorShape, METH_VARARGS,
   "SetCursorShape(self, cursorShape:vtkPolyData) -> None\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"GetCursorShape", PyvtkOrientedGlyphContourRepresentation_GetCursorShape, METH_VARARGS,
   "GetCursorShape(self) -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\n"},
  {"SetActiveCursorShape", PyvtkOrientedGlyphContourRepresentation_SetActiveCursorShape, METH_VARARGS,
   "SetActiveCursorShape(self, activeShape:vtkPolyData) -> None\nC++: void SetActiveCursorShape(vtkPolyData *activeShape)\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"GetActiveCursorShape", PyvtkOrientedGlyphContourRepresentation_GetActiveCursorShape, METH_VARARGS,
   "GetActiveCursorShape(self) -> vtkPolyData\nC++: vtkPolyData *GetActiveCursorShape()\n\n"},
  {"GetProperty", PyvtkOrientedGlyphContourRepresentation_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nThis is the property used when the handle is not active (the\nmouse is not near the handle)\n"},
  {"GetActiveProperty", PyvtkOrientedGlyphContourRepresentation_GetActiveProperty, METH_VARARGS,
   "GetActiveProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetActiveProperty()\n\nThis is the property used when the user is interacting with the\nhandle.\n"},
  {"GetLinesProperty", PyvtkOrientedGlyphContourRepresentation_GetLinesProperty, METH_VARARGS,
   "GetLinesProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetLinesProperty()\n\nThis is the property used by the lines.\n"},
  {"SetRenderer", PyvtkOrientedGlyphContourRepresentation_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSubclasses of vtkOrientedGlyphContourRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"BuildRepresentation", PyvtkOrientedGlyphContourRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetInteraction", PyvtkOrientedGlyphContourRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkOrientedGlyphContourRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"ComputeInteractionState", PyvtkOrientedGlyphContourRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modified:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modified=0)\n    override;\n\n"},
  {"GetActors", PyvtkOrientedGlyphContourRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkOrientedGlyphContourRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkOrientedGlyphContourRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkOrientedGlyphContourRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkOrientedGlyphContourRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkOrientedGlyphContourRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"GetContourRepresentationAsPolyData", PyvtkOrientedGlyphContourRepresentation_GetContourRepresentationAsPolyData, METH_VARARGS,
   "GetContourRepresentationAsPolyData(self) -> vtkPolyData\nC++: vtkPolyData *GetContourRepresentationAsPolyData() override;\n\nGet the points in this contour as a vtkPolyData.\n"},
  {"SetAlwaysOnTop", PyvtkOrientedGlyphContourRepresentation_SetAlwaysOnTop, METH_VARARGS,
   "SetAlwaysOnTop(self, _arg:int) -> None\nC++: virtual void SetAlwaysOnTop(vtkTypeBool _arg)\n\nControls whether the contour widget should always appear on top\nof other actors in the scene. (In effect, this will disable\nOpenGL Depth buffer tests while rendering the contour). Default\nis to set it to false.\n"},
  {"GetAlwaysOnTop", PyvtkOrientedGlyphContourRepresentation_GetAlwaysOnTop, METH_VARARGS,
   "GetAlwaysOnTop(self) -> int\nC++: virtual vtkTypeBool GetAlwaysOnTop()\n\n"},
  {"AlwaysOnTopOn", PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOn, METH_VARARGS,
   "AlwaysOnTopOn(self) -> None\nC++: virtual void AlwaysOnTopOn()\n\n"},
  {"AlwaysOnTopOff", PyvtkOrientedGlyphContourRepresentation_AlwaysOnTopOff, METH_VARARGS,
   "AlwaysOnTopOff(self) -> None\nC++: virtual void AlwaysOnTopOff()\n\n"},
  {"SetLineColor", PyvtkOrientedGlyphContourRepresentation_SetLineColor, METH_VARARGS,
   "SetLineColor(self, r:float, g:float, b:float) -> None\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLinesProperty()->SetColor().\n"},
  {"SetShowSelectedNodes", PyvtkOrientedGlyphContourRepresentation_SetShowSelectedNodes, METH_VARARGS,
   "SetShowSelectedNodes(self, __a:int) -> None\nC++: void SetShowSelectedNodes(vtkTypeBool) override;\n\nA flag to indicate whether to show the Selected nodes Default is\nto set it to false.\n"},
  {"GetBounds", PyvtkOrientedGlyphContourRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nReturn the bounds of the representation\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOrientedGlyphContourRepresentation_Doc =
  "vtkOrientedGlyphContourRepresentation - Default representation for\nthe contour widget\n\n"
  "Superclass: vtkContourRepresentation\n\n"
  "This class provides the default concrete representation for the\n"
  "vtkContourWidget. It works in conjunction with the\n"
  "vtkContourLineInterpolator and vtkPointPlacer. See vtkContourWidget\n"
  "for details.\n"
  "@sa\n"
  "vtkContourRepresentation vtkContourWidget vtkPointPlacer\n"
  "vtkContourLineInterpolator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOrientedGlyphContourRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkOrientedGlyphContourRepresentation", // tp_name
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
  PyvtkOrientedGlyphContourRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientedGlyphContourRepresentation_StaticNew()
{
  return vtkOrientedGlyphContourRepresentation::New();
}

PyObject *PyvtkOrientedGlyphContourRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOrientedGlyphContourRepresentation_Type, PyvtkOrientedGlyphContourRepresentation_Methods,
    "vtkOrientedGlyphContourRepresentation",
 &PyvtkOrientedGlyphContourRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkContourRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientedGlyphContourRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientedGlyphContourRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientedGlyphContourRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

