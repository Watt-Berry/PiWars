// python wrapper for vtkOrientedGlyphFocalPlaneContourRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOrientedGlyphFocalPlaneContourRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientedGlyphFocalPlaneContourRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkOrientedGlyphFocalPlaneContourRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkFocalPlaneContourRepresentation_ClassNew
extern "C" { PyObject *PyvtkFocalPlaneContourRepresentation_ClassNew(); }
#define DECLARED_PyvtkFocalPlaneContourRepresentation_ClassNew
#endif

static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientedGlyphFocalPlaneContourRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientedGlyphFocalPlaneContourRepresentation *tempr = vtkOrientedGlyphFocalPlaneContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientedGlyphFocalPlaneContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::NewInstance());

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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOrientedGlyphFocalPlaneContourRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetActiveCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetActiveCursorShape() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActiveCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetActiveProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActiveProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetLinesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetLinesProperty() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetLinesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::StartWidgetInteraction(temp0);
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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::WidgetInteraction(temp0);
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
PyvtkOrientedGlyphFocalPlaneContourRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

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
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourRepresentationAsPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourRepresentationAsPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContourRepresentationAsPolyData() :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetContourRepresentationAsPolyData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourPlaneDirectionCosines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContourPlaneDirectionCosines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientedGlyphFocalPlaneContourRepresentation *op = static_cast<vtkOrientedGlyphFocalPlaneContourRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetContourPlaneDirectionCosines(temp0) :
      op->vtkOrientedGlyphFocalPlaneContourRepresentation::GetContourPlaneDirectionCosines(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientedGlyphFocalPlaneContourRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrientedGlyphFocalPlaneContourRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkOrientedGlyphFocalPlaneContourRepresentation\nC++: static vtkOrientedGlyphFocalPlaneContourRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrientedGlyphFocalPlaneContourRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkOrientedGlyphFocalPlaneContourRepresentation\nC++: vtkOrientedGlyphFocalPlaneContourRepresentation *NewInstance(\n    )\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetCursorShape, METH_VARARGS,
   "SetCursorShape(self, cursorShape:vtkPolyData) -> None\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"GetCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetCursorShape, METH_VARARGS,
   "GetCursorShape(self) -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\n"},
  {"SetActiveCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetActiveCursorShape, METH_VARARGS,
   "SetActiveCursorShape(self, activeShape:vtkPolyData) -> None\nC++: void SetActiveCursorShape(vtkPolyData *activeShape)\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"GetActiveCursorShape", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveCursorShape, METH_VARARGS,
   "GetActiveCursorShape(self) -> vtkPolyData\nC++: vtkPolyData *GetActiveCursorShape()\n\n"},
  {"GetProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nThis is the property used when the handle is not active (the\nmouse is not near the handle)\n"},
  {"GetActiveProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActiveProperty, METH_VARARGS,
   "GetActiveProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetActiveProperty()\n\nThis is the property used when the user is interacting with the\nhandle.\n"},
  {"GetLinesProperty", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetLinesProperty, METH_VARARGS,
   "GetLinesProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetLinesProperty()\n\nThis is the property used by the lines.\n"},
  {"SetRenderer", PyvtkOrientedGlyphFocalPlaneContourRepresentation_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSubclasses of vtkOrientedGlyphFocalPlaneContourRepresentation\nmust implement these methods. These are the methods that the\nwidget and its representation use to communicate with each other.\n"},
  {"BuildRepresentation", PyvtkOrientedGlyphFocalPlaneContourRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"StartWidgetInteraction", PyvtkOrientedGlyphFocalPlaneContourRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkOrientedGlyphFocalPlaneContourRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"ComputeInteractionState", PyvtkOrientedGlyphFocalPlaneContourRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modified:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modified=0)\n    override;\n\n"},
  {"GetActors2D", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkOrientedGlyphFocalPlaneContourRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkOrientedGlyphFocalPlaneContourRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"GetContourRepresentationAsPolyData", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourRepresentationAsPolyData, METH_VARARGS,
   "GetContourRepresentationAsPolyData(self) -> vtkPolyData\nC++: vtkPolyData *GetContourRepresentationAsPolyData() override;\n\nGet the points in this contour as a vtkPolyData.\n"},
  {"GetContourPlaneDirectionCosines", PyvtkOrientedGlyphFocalPlaneContourRepresentation_GetContourPlaneDirectionCosines, METH_VARARGS,
   "GetContourPlaneDirectionCosines(self, origin:(float, float, float)\n    ) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetContourPlaneDirectionCosines(\n    const double origin[3])\n\nDirection cosines of the plane on which the contour lies on in\nworld co-ordinates. This would be the same matrix that would be\nset in vtkImageReslice or vtkImagePlaneWidget if there were a\nplane passing through the contour points. The origin must be the\norigin of the data under the contour.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOrientedGlyphFocalPlaneContourRepresentation_Doc =
  "vtkOrientedGlyphFocalPlaneContourRepresentation - Contours\nconstrained to a focal plane.\n\n"
  "Superclass: vtkFocalPlaneContourRepresentation\n\n"
  "This class is used to represent a contour drawn on the focal plane\n"
  "(usually overlaid on top of an image or volume widget). The class was\n"
  "written in order to be able to draw contours on a volume widget and\n"
  "have the contours overlaid on the focal plane in order to do contour\n"
  "segmentation.\n\n"
  "@sa\n"
  "vtkOrientedGlyphContourRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOrientedGlyphFocalPlaneContourRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkOrientedGlyphFocalPlaneContourRepresentation", // tp_name
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
  PyvtkOrientedGlyphFocalPlaneContourRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientedGlyphFocalPlaneContourRepresentation_StaticNew()
{
  return vtkOrientedGlyphFocalPlaneContourRepresentation::New();
}

PyObject *PyvtkOrientedGlyphFocalPlaneContourRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOrientedGlyphFocalPlaneContourRepresentation_Type, PyvtkOrientedGlyphFocalPlaneContourRepresentation_Methods,
    "vtkOrientedGlyphFocalPlaneContourRepresentation",
 &PyvtkOrientedGlyphFocalPlaneContourRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkFocalPlaneContourRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientedGlyphFocalPlaneContourRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientedGlyphFocalPlaneContourRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientedGlyphFocalPlaneContourRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

