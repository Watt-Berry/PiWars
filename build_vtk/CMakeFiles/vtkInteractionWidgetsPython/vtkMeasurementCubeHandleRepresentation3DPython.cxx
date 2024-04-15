// python wrapper for vtkMeasurementCubeHandleRepresentation3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMeasurementCubeHandleRepresentation3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMeasurementCubeHandleRepresentation3D(PyObject *dict); }
extern "C" { PyObject *PyvtkMeasurementCubeHandleRepresentation3D_ClassNew(); }

#ifndef DECLARED_PyvtkHandleRepresentation_ClassNew
extern "C" { PyObject *PyvtkHandleRepresentation_ClassNew(); }
#define DECLARED_PyvtkHandleRepresentation_ClassNew
#endif

static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMeasurementCubeHandleRepresentation3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMeasurementCubeHandleRepresentation3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMeasurementCubeHandleRepresentation3D *tempr = vtkMeasurementCubeHandleRepresentation3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMeasurementCubeHandleRepresentation3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMeasurementCubeHandleRepresentation3D::NewInstance());

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
PyvtkMeasurementCubeHandleRepresentation3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMeasurementCubeHandleRepresentation3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMeasurementCubeHandleRepresentation3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetWorldPosition(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetWorldPosition(temp0);
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
PyvtkMeasurementCubeHandleRepresentation3D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDisplayPosition(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetDisplayPosition(temp0);
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
PyvtkMeasurementCubeHandleRepresentation3D_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedProperty(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetSelectedProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

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
      op->vtkMeasurementCubeHandleRepresentation3D::StartWidgetInteraction(temp0);
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
PyvtkMeasurementCubeHandleRepresentation3D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

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
      op->vtkMeasurementCubeHandleRepresentation3D::WidgetInteraction(temp0);
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
PyvtkMeasurementCubeHandleRepresentation3D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

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
      op->vtkMeasurementCubeHandleRepresentation3D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

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
      op->vtkMeasurementCubeHandleRepresentation3D::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

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
      op->vtkMeasurementCubeHandleRepresentation3D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkMeasurementCubeHandleRepresentation3D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkMeasurementCubeHandleRepresentation3D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkMeasurementCubeHandleRepresentation3D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelVisibility(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLabelVisibility() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOn();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::LabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LabelVisibilityOff();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::LabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetSelectedLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedLabelVisibility(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetSelectedLabelVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetSelectedLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedLabelVisibility() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetSelectedLabelVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SelectedLabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectedLabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectedLabelVisibilityOn();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SelectedLabelVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SelectedLabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectedLabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectedLabelVisibilityOff();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SelectedLabelVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetLabelTextInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextInput(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetLabelTextInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetLabelTextInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelTextInput() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetLabelTextInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBillboardTextActor3D *tempr = (ap.IsBound() ?
      op->GetLabelText() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleVisibility(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetHandleVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetHandleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleVisibility() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetHandleVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_HandleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleVisibilityOn();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::HandleVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_HandleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleVisibilityOff();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::HandleVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Highlight(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothMotion(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetSmoothMotion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetSmoothMotion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothMotion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSmoothMotion() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetSmoothMotion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SmoothMotionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothMotionOn();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SmoothMotionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SmoothMotionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothMotionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothMotionOff();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SmoothMotionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetSideLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSideLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSideLength(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetSideLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetSideLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSideLength() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetSideLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetAdaptiveScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdaptiveScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdaptiveScaling(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetAdaptiveScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetAdaptiveScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdaptiveScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdaptiveScaling() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetAdaptiveScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_AdaptiveScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdaptiveScalingOn();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::AdaptiveScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_AdaptiveScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdaptiveScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdaptiveScalingOff();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::AdaptiveScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetRescaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRescaleFactor(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetRescaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetRescaleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleFactorMinValue() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetRescaleFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetRescaleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleFactorMaxValue() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetRescaleFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetRescaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleFactor() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetRescaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetMinRelativeCubeScreenArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinRelativeCubeScreenArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinRelativeCubeScreenArea(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetMinRelativeCubeScreenArea(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetMinRelativeCubeScreenArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinRelativeCubeScreenArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinRelativeCubeScreenArea() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetMinRelativeCubeScreenArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetMaxRelativeCubeScreenArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRelativeCubeScreenArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxRelativeCubeScreenArea(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetMaxRelativeCubeScreenArea(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetMaxRelativeCubeScreenArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRelativeCubeScreenArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxRelativeCubeScreenArea() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetMaxRelativeCubeScreenArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_SetLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLengthUnit(temp0);
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::SetLengthUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_GetLengthUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLengthUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLengthUnit() :
      op->vtkMeasurementCubeHandleRepresentation3D::GetLengthUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMeasurementCubeHandleRepresentation3D_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMeasurementCubeHandleRepresentation3D *op = static_cast<vtkMeasurementCubeHandleRepresentation3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkMeasurementCubeHandleRepresentation3D::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMeasurementCubeHandleRepresentation3D_Methods[] = {
  {"IsTypeOf", PyvtkMeasurementCubeHandleRepresentation3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMeasurementCubeHandleRepresentation3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMeasurementCubeHandleRepresentation3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkMeasurementCubeHandleRepresentation3D\nC++: static vtkMeasurementCubeHandleRepresentation3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMeasurementCubeHandleRepresentation3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMeasurementCubeHandleRepresentation3D\nC++: vtkMeasurementCubeHandleRepresentation3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMeasurementCubeHandleRepresentation3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMeasurementCubeHandleRepresentation3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWorldPosition", PyvtkMeasurementCubeHandleRepresentation3D_SetWorldPosition, METH_VARARGS,
   "SetWorldPosition(self, p:[float, float, float]) -> None\nC++: void SetWorldPosition(double p[3]) override;\n\nSet the position of the point in world and display coordinates.\n"},
  {"SetDisplayPosition", PyvtkMeasurementCubeHandleRepresentation3D_SetDisplayPosition, METH_VARARGS,
   "SetDisplayPosition(self, p:[float, float, float]) -> None\nC++: void SetDisplayPosition(double p[3]) override;\n\nHandles usually have their coordinates set in display coordinates\n(generally by an associated widget) and internally maintain the\nposition in world coordinates. (Using world coordinates insures\nthat handles are rendered in the right position when the camera\nview changes.) These methods are often subclassed because special\nconstraint operations can be used to control the actual\npositioning.\n"},
  {"GetHandle", PyvtkMeasurementCubeHandleRepresentation3D_GetHandle, METH_VARARGS,
   "GetHandle(self) -> vtkPolyData\nC++: vtkPolyData *GetHandle()\n\nGet the handle polydata.\n"},
  {"SetProperty", PyvtkMeasurementCubeHandleRepresentation3D_SetProperty, METH_VARARGS,
   "SetProperty(self, __a:vtkProperty) -> None\nC++: void SetProperty(vtkProperty *)\n\nSet/Get the handle properties when unselected and selected.\n"},
  {"SetSelectedProperty", PyvtkMeasurementCubeHandleRepresentation3D_SetSelectedProperty, METH_VARARGS,
   "SetSelectedProperty(self, __a:vtkProperty) -> None\nC++: void SetSelectedProperty(vtkProperty *)\n\n"},
  {"GetProperty", PyvtkMeasurementCubeHandleRepresentation3D_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\n"},
  {"GetSelectedProperty", PyvtkMeasurementCubeHandleRepresentation3D_GetSelectedProperty, METH_VARARGS,
   "GetSelectedProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\n"},
  {"GetTransform", PyvtkMeasurementCubeHandleRepresentation3D_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nGet the transform used to transform the generic handle polydata\nbefore placing it in the render window\n"},
  {"BuildRepresentation", PyvtkMeasurementCubeHandleRepresentation3D_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"StartWidgetInteraction", PyvtkMeasurementCubeHandleRepresentation3D_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkMeasurementCubeHandleRepresentation3D_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"ComputeInteractionState", PyvtkMeasurementCubeHandleRepresentation3D_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"ShallowCopy", PyvtkMeasurementCubeHandleRepresentation3D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"DeepCopy", PyvtkMeasurementCubeHandleRepresentation3D_DeepCopy, METH_VARARGS,
   "DeepCopy(self, prop:vtkProp) -> None\nC++: void DeepCopy(vtkProp *prop) override;\n\n"},
  {"GetActors", PyvtkMeasurementCubeHandleRepresentation3D_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkMeasurementCubeHandleRepresentation3D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkMeasurementCubeHandleRepresentation3D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkMeasurementCubeHandleRepresentation3D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkMeasurementCubeHandleRepresentation3D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"GetBounds", PyvtkMeasurementCubeHandleRepresentation3D_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"SetLabelVisibility", PyvtkMeasurementCubeHandleRepresentation3D_SetLabelVisibility, METH_VARARGS,
   "SetLabelVisibility(self, _arg:int) -> None\nC++: virtual void SetLabelVisibility(vtkTypeBool _arg)\n\nA label may be associated with the cube. The string can be set\nvia SetLabelText. The visibility of the label can be turned on /\noff.\n"},
  {"GetLabelVisibility", PyvtkMeasurementCubeHandleRepresentation3D_GetLabelVisibility, METH_VARARGS,
   "GetLabelVisibility(self) -> int\nC++: virtual vtkTypeBool GetLabelVisibility()\n\n"},
  {"LabelVisibilityOn", PyvtkMeasurementCubeHandleRepresentation3D_LabelVisibilityOn, METH_VARARGS,
   "LabelVisibilityOn(self) -> None\nC++: virtual void LabelVisibilityOn()\n\n"},
  {"LabelVisibilityOff", PyvtkMeasurementCubeHandleRepresentation3D_LabelVisibilityOff, METH_VARARGS,
   "LabelVisibilityOff(self) -> None\nC++: virtual void LabelVisibilityOff()\n\n"},
  {"SetSelectedLabelVisibility", PyvtkMeasurementCubeHandleRepresentation3D_SetSelectedLabelVisibility, METH_VARARGS,
   "SetSelectedLabelVisibility(self, _arg:int) -> None\nC++: virtual void SetSelectedLabelVisibility(vtkTypeBool _arg)\n\n"},
  {"GetSelectedLabelVisibility", PyvtkMeasurementCubeHandleRepresentation3D_GetSelectedLabelVisibility, METH_VARARGS,
   "GetSelectedLabelVisibility(self) -> int\nC++: virtual vtkTypeBool GetSelectedLabelVisibility()\n\n"},
  {"SelectedLabelVisibilityOn", PyvtkMeasurementCubeHandleRepresentation3D_SelectedLabelVisibilityOn, METH_VARARGS,
   "SelectedLabelVisibilityOn(self) -> None\nC++: virtual void SelectedLabelVisibilityOn()\n\n"},
  {"SelectedLabelVisibilityOff", PyvtkMeasurementCubeHandleRepresentation3D_SelectedLabelVisibilityOff, METH_VARARGS,
   "SelectedLabelVisibilityOff(self) -> None\nC++: virtual void SelectedLabelVisibilityOff()\n\n"},
  {"SetLabelTextInput", PyvtkMeasurementCubeHandleRepresentation3D_SetLabelTextInput, METH_VARARGS,
   "SetLabelTextInput(self, label:str) -> None\nC++: virtual void SetLabelTextInput(const char *label)\n\n"},
  {"GetLabelTextInput", PyvtkMeasurementCubeHandleRepresentation3D_GetLabelTextInput, METH_VARARGS,
   "GetLabelTextInput(self) -> str\nC++: virtual char *GetLabelTextInput()\n\n"},
  {"GetLabelText", PyvtkMeasurementCubeHandleRepresentation3D_GetLabelText, METH_VARARGS,
   "GetLabelText(self) -> vtkBillboardTextActor3D\nC++: virtual vtkBillboardTextActor3D *GetLabelText()\n\nGet the label text actor\n"},
  {"SetHandleVisibility", PyvtkMeasurementCubeHandleRepresentation3D_SetHandleVisibility, METH_VARARGS,
   "SetHandleVisibility(self, _arg:int) -> None\nC++: virtual void SetHandleVisibility(vtkTypeBool _arg)\n\nToggle the visibility of the handle on and off\n"},
  {"GetHandleVisibility", PyvtkMeasurementCubeHandleRepresentation3D_GetHandleVisibility, METH_VARARGS,
   "GetHandleVisibility(self) -> int\nC++: virtual vtkTypeBool GetHandleVisibility()\n\n"},
  {"HandleVisibilityOn", PyvtkMeasurementCubeHandleRepresentation3D_HandleVisibilityOn, METH_VARARGS,
   "HandleVisibilityOn(self) -> None\nC++: virtual void HandleVisibilityOn()\n\n"},
  {"HandleVisibilityOff", PyvtkMeasurementCubeHandleRepresentation3D_HandleVisibilityOff, METH_VARARGS,
   "HandleVisibilityOff(self) -> None\nC++: virtual void HandleVisibilityOff()\n\n"},
  {"Highlight", PyvtkMeasurementCubeHandleRepresentation3D_Highlight, METH_VARARGS,
   "Highlight(self, highlight:int) -> None\nC++: void Highlight(int highlight) override;\n\nToggle highlighting (used when the cube is selected).\n"},
  {"SetSmoothMotion", PyvtkMeasurementCubeHandleRepresentation3D_SetSmoothMotion, METH_VARARGS,
   "SetSmoothMotion(self, _arg:int) -> None\nC++: virtual void SetSmoothMotion(vtkTypeBool _arg)\n\nTurn on/off smooth motion of the handle. See the documentation of\nMoveFocusRequest for details. By default, SmoothMotion is ON.\nHowever, in certain applications the user may want to turn it\noff. For instance when using certain specific PointPlacer's with\nthe representation such as the vtkCellCentersPointPlacer, which\ncauses the representation to snap to the center of cells. In such\ncases, inherent restrictions on handle placement might conflict\nwith a request for smooth motion of the handles.\n"},
  {"GetSmoothMotion", PyvtkMeasurementCubeHandleRepresentation3D_GetSmoothMotion, METH_VARARGS,
   "GetSmoothMotion(self) -> int\nC++: virtual vtkTypeBool GetSmoothMotion()\n\n"},
  {"SmoothMotionOn", PyvtkMeasurementCubeHandleRepresentation3D_SmoothMotionOn, METH_VARARGS,
   "SmoothMotionOn(self) -> None\nC++: virtual void SmoothMotionOn()\n\n"},
  {"SmoothMotionOff", PyvtkMeasurementCubeHandleRepresentation3D_SmoothMotionOff, METH_VARARGS,
   "SmoothMotionOff(self) -> None\nC++: virtual void SmoothMotionOff()\n\n"},
  {"SetSideLength", PyvtkMeasurementCubeHandleRepresentation3D_SetSideLength, METH_VARARGS,
   "SetSideLength(self, __a:float) -> None\nC++: void SetSideLength(double)\n\nSet the length of a side of the cube (default is 1).\n"},
  {"GetSideLength", PyvtkMeasurementCubeHandleRepresentation3D_GetSideLength, METH_VARARGS,
   "GetSideLength(self) -> float\nC++: virtual double GetSideLength()\n\n"},
  {"SetAdaptiveScaling", PyvtkMeasurementCubeHandleRepresentation3D_SetAdaptiveScaling, METH_VARARGS,
   "SetAdaptiveScaling(self, _arg:int) -> None\nC++: virtual void SetAdaptiveScaling(vtkTypeBool _arg)\n\nTurn on/off adaptive scaling for the cube.\n"},
  {"GetAdaptiveScaling", PyvtkMeasurementCubeHandleRepresentation3D_GetAdaptiveScaling, METH_VARARGS,
   "GetAdaptiveScaling(self) -> int\nC++: virtual vtkTypeBool GetAdaptiveScaling()\n\n"},
  {"AdaptiveScalingOn", PyvtkMeasurementCubeHandleRepresentation3D_AdaptiveScalingOn, METH_VARARGS,
   "AdaptiveScalingOn(self) -> None\nC++: virtual void AdaptiveScalingOn()\n\n"},
  {"AdaptiveScalingOff", PyvtkMeasurementCubeHandleRepresentation3D_AdaptiveScalingOff, METH_VARARGS,
   "AdaptiveScalingOff(self) -> None\nC++: virtual void AdaptiveScalingOff()\n\n"},
  {"SetRescaleFactor", PyvtkMeasurementCubeHandleRepresentation3D_SetRescaleFactor, METH_VARARGS,
   "SetRescaleFactor(self, _arg:float) -> None\nC++: virtual void SetRescaleFactor(double _arg)\n\nSet/Get the rescaling increment for the cube. This value is\napplied to each dimension, so volume scaling =\nstd::pow(RescaleFactor, 3).\n"},
  {"GetRescaleFactorMinValue", PyvtkMeasurementCubeHandleRepresentation3D_GetRescaleFactorMinValue, METH_VARARGS,
   "GetRescaleFactorMinValue(self) -> float\nC++: virtual double GetRescaleFactorMinValue()\n\n"},
  {"GetRescaleFactorMaxValue", PyvtkMeasurementCubeHandleRepresentation3D_GetRescaleFactorMaxValue, METH_VARARGS,
   "GetRescaleFactorMaxValue(self) -> float\nC++: virtual double GetRescaleFactorMaxValue()\n\n"},
  {"GetRescaleFactor", PyvtkMeasurementCubeHandleRepresentation3D_GetRescaleFactor, METH_VARARGS,
   "GetRescaleFactor(self) -> float\nC++: virtual double GetRescaleFactor()\n\n"},
  {"SetMinRelativeCubeScreenArea", PyvtkMeasurementCubeHandleRepresentation3D_SetMinRelativeCubeScreenArea, METH_VARARGS,
   "SetMinRelativeCubeScreenArea(self, __a:float) -> None\nC++: void SetMinRelativeCubeScreenArea(double)\n\nSet the min/max cube representational area relative to the render\nwindow area. If adaptive scaling is on and the cube's image is\noutside of these bounds, the cube is adaptively scaled. The max\nand min relative cube sizes are clamped between 1. and 1.e-6, and\nMaxRelativeubeSize must be more thanRescaleFactor greater than\nMinRelativeCubeScreenArea.\n"},
  {"GetMinRelativeCubeScreenArea", PyvtkMeasurementCubeHandleRepresentation3D_GetMinRelativeCubeScreenArea, METH_VARARGS,
   "GetMinRelativeCubeScreenArea(self) -> float\nC++: virtual double GetMinRelativeCubeScreenArea()\n\n"},
  {"SetMaxRelativeCubeScreenArea", PyvtkMeasurementCubeHandleRepresentation3D_SetMaxRelativeCubeScreenArea, METH_VARARGS,
   "SetMaxRelativeCubeScreenArea(self, __a:float) -> None\nC++: void SetMaxRelativeCubeScreenArea(double)\n\n"},
  {"GetMaxRelativeCubeScreenArea", PyvtkMeasurementCubeHandleRepresentation3D_GetMaxRelativeCubeScreenArea, METH_VARARGS,
   "GetMaxRelativeCubeScreenArea(self) -> float\nC++: virtual double GetMaxRelativeCubeScreenArea()\n\n"},
  {"SetLengthUnit", PyvtkMeasurementCubeHandleRepresentation3D_SetLengthUnit, METH_VARARGS,
   "SetLengthUnit(self, _arg:str) -> None\nC++: virtual void SetLengthUnit(const char *_arg)\n\nSet the label for the unit of length of a side of the cube.\n"},
  {"GetLengthUnit", PyvtkMeasurementCubeHandleRepresentation3D_GetLengthUnit, METH_VARARGS,
   "GetLengthUnit(self) -> str\nC++: virtual char *GetLengthUnit()\n\n"},
  {"RegisterPickers", PyvtkMeasurementCubeHandleRepresentation3D_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMeasurementCubeHandleRepresentation3D_Doc =
  "vtkMeasurementCubeHandleRepresentation3D - represent a unit cube for\nmeasuring/comparing to data.\n\n"
  "Superclass: vtkHandleRepresentation\n\n"
  "@sa\n"
  "vtkPolygonalHandleRepresentation3D vtkHandleRepresentation\n"
  "vtkHandleWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMeasurementCubeHandleRepresentation3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkMeasurementCubeHandleRepresentation3D", // tp_name
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
  PyvtkMeasurementCubeHandleRepresentation3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMeasurementCubeHandleRepresentation3D_StaticNew()
{
  return vtkMeasurementCubeHandleRepresentation3D::New();
}

PyObject *PyvtkMeasurementCubeHandleRepresentation3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMeasurementCubeHandleRepresentation3D_Type, PyvtkMeasurementCubeHandleRepresentation3D_Methods,
    "vtkMeasurementCubeHandleRepresentation3D",
 &PyvtkMeasurementCubeHandleRepresentation3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHandleRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMeasurementCubeHandleRepresentation3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMeasurementCubeHandleRepresentation3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMeasurementCubeHandleRepresentation3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

