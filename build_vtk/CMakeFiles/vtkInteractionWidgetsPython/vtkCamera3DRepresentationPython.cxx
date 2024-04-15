// python wrapper for vtkCamera3DRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCamera3DRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCamera3DRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkCamera3DRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkCamera3DRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCamera3DRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCamera3DRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCamera3DRepresentation *tempr = vtkCamera3DRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera3DRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCamera3DRepresentation::NewInstance());

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
PyvtkCamera3DRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCamera3DRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCamera3DRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

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
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::PlaceWidget(temp0);
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
PyvtkCamera3DRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCamera3DRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

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
      op->vtkCamera3DRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

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
      op->vtkCamera3DRepresentation::StartWidgetInteraction(temp0);
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
PyvtkCamera3DRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

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
      op->vtkCamera3DRepresentation::WidgetInteraction(temp0);
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
PyvtkCamera3DRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCamera3DRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

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
      op->vtkCamera3DRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCamera3DRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCamera3DRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCamera3DRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCamera3DRepresentation::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetFrontHandleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontHandleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrontHandleDistance(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::SetFrontHandleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetFrontHandleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontHandleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFrontHandleDistanceMinValue() :
      op->vtkCamera3DRepresentation::GetFrontHandleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetFrontHandleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontHandleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFrontHandleDistanceMaxValue() :
      op->vtkCamera3DRepresentation::GetFrontHandleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetFrontHandleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontHandleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFrontHandleDistance() :
      op->vtkCamera3DRepresentation::GetFrontHandleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetUpHandleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpHandleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpHandleDistance(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::SetUpHandleDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetUpHandleDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpHandleDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpHandleDistanceMinValue() :
      op->vtkCamera3DRepresentation::GetUpHandleDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetUpHandleDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpHandleDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpHandleDistanceMaxValue() :
      op->vtkCamera3DRepresentation::GetUpHandleDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetUpHandleDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpHandleDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetUpHandleDistance() :
      op->vtkCamera3DRepresentation::GetUpHandleDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetTranslationAxisToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisToXAxis();
    }
    else
    {
      op->vtkCamera3DRepresentation::SetTranslationAxisToXAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetTranslationAxisToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisToYAxis();
    }
    else
    {
      op->vtkCamera3DRepresentation::SetTranslationAxisToYAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetTranslationAxisToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisToZAxis();
    }
    else
    {
      op->vtkCamera3DRepresentation::SetTranslationAxisToZAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetTranslationAxisToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxisToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxisToNone();
    }
    else
    {
      op->vtkCamera3DRepresentation::SetTranslationAxisToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationAxis(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::SetTranslationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetTranslationAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMinValue() :
      op->vtkCamera3DRepresentation::GetTranslationAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetTranslationAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxisMaxValue() :
      op->vtkCamera3DRepresentation::GetTranslationAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetTranslationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationAxis() :
      op->vtkCamera3DRepresentation::GetTranslationAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetTranslatingAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslatingAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslatingAll(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::SetTranslatingAll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetTranslatingAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslatingAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTranslatingAll() :
      op->vtkCamera3DRepresentation::GetTranslatingAll());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_TranslatingAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslatingAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslatingAllOn();
    }
    else
    {
      op->vtkCamera3DRepresentation::TranslatingAllOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_TranslatingAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslatingAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslatingAllOff();
    }
    else
    {
      op->vtkCamera3DRepresentation::TranslatingAllOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetFrustumVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustumVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrustumVisibility(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::SetFrustumVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetFrustumVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustumVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFrustumVisibility() :
      op->vtkCamera3DRepresentation::GetFrustumVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_FrustumVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrustumVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrustumVisibilityOn();
    }
    else
    {
      op->vtkCamera3DRepresentation::FrustumVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_FrustumVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrustumVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrustumVisibilityOff();
    }
    else
    {
      op->vtkCamera3DRepresentation::FrustumVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetSecondaryHandlesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondaryHandlesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondaryHandlesVisibility(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::SetSecondaryHandlesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetSecondaryHandlesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondaryHandlesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSecondaryHandlesVisibility() :
      op->vtkCamera3DRepresentation::GetSecondaryHandlesVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SecondaryHandlesVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SecondaryHandlesVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SecondaryHandlesVisibilityOn();
    }
    else
    {
      op->vtkCamera3DRepresentation::SecondaryHandlesVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SecondaryHandlesVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SecondaryHandlesVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SecondaryHandlesVisibilityOff();
    }
    else
    {
      op->vtkCamera3DRepresentation::SecondaryHandlesVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractionState(temp0);
    }
    else
    {
      op->vtkCamera3DRepresentation::SetInteractionState(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkCamera3DRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCamera3DRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCamera3DRepresentation *op = static_cast<vtkCamera3DRepresentation *>(vp);

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
      op->vtkCamera3DRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCamera3DRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCamera3DRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCamera3DRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCamera3DRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCamera3DRepresentation\nC++: static vtkCamera3DRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCamera3DRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCamera3DRepresentation\nC++: vtkCamera3DRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCamera3DRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCamera3DRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PlaceWidget", PyvtkCamera3DRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"BuildRepresentation", PyvtkCamera3DRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"ComputeInteractionState", PyvtkCamera3DRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"StartWidgetInteraction", PyvtkCamera3DRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkCamera3DRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override;\n\n"},
  {"GetBounds", PyvtkCamera3DRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"ReleaseGraphicsResources", PyvtkCamera3DRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nMethods supporting, and required by, the rendering process.\n"},
  {"RenderOpaqueGeometry", PyvtkCamera3DRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCamera3DRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCamera3DRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"SetCamera", PyvtkCamera3DRepresentation_SetCamera, METH_VARARGS,
   "SetCamera(self, camera:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *camera)\n\nSet/Get the camera.\n"},
  {"GetCamera", PyvtkCamera3DRepresentation_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: vtkCamera *GetCamera()\n\n"},
  {"SetFrontHandleDistance", PyvtkCamera3DRepresentation_SetFrontHandleDistance, METH_VARARGS,
   "SetFrontHandleDistance(self, _arg:float) -> None\nC++: virtual void SetFrontHandleDistance(double _arg)\n\nSet/Get the distance betweem camera position and the front\nhandle. Note that the distance is scaled with view to keep the\nwidget the same size. Default: 2.5.\n"},
  {"GetFrontHandleDistanceMinValue", PyvtkCamera3DRepresentation_GetFrontHandleDistanceMinValue, METH_VARARGS,
   "GetFrontHandleDistanceMinValue(self) -> float\nC++: virtual double GetFrontHandleDistanceMinValue()\n\n"},
  {"GetFrontHandleDistanceMaxValue", PyvtkCamera3DRepresentation_GetFrontHandleDistanceMaxValue, METH_VARARGS,
   "GetFrontHandleDistanceMaxValue(self) -> float\nC++: virtual double GetFrontHandleDistanceMaxValue()\n\n"},
  {"GetFrontHandleDistance", PyvtkCamera3DRepresentation_GetFrontHandleDistance, METH_VARARGS,
   "GetFrontHandleDistance(self) -> float\nC++: virtual double GetFrontHandleDistance()\n\n"},
  {"SetUpHandleDistance", PyvtkCamera3DRepresentation_SetUpHandleDistance, METH_VARARGS,
   "SetUpHandleDistance(self, _arg:float) -> None\nC++: virtual void SetUpHandleDistance(double _arg)\n\nSet/Get the distance betweem camera position and the up handle.\nNote that the distance is scaled with view to keep the widget the\nsame size. Default: 1.5.\n"},
  {"GetUpHandleDistanceMinValue", PyvtkCamera3DRepresentation_GetUpHandleDistanceMinValue, METH_VARARGS,
   "GetUpHandleDistanceMinValue(self) -> float\nC++: virtual double GetUpHandleDistanceMinValue()\n\n"},
  {"GetUpHandleDistanceMaxValue", PyvtkCamera3DRepresentation_GetUpHandleDistanceMaxValue, METH_VARARGS,
   "GetUpHandleDistanceMaxValue(self) -> float\nC++: virtual double GetUpHandleDistanceMaxValue()\n\n"},
  {"GetUpHandleDistance", PyvtkCamera3DRepresentation_GetUpHandleDistance, METH_VARARGS,
   "GetUpHandleDistance(self) -> float\nC++: virtual double GetUpHandleDistance()\n\n"},
  {"SetTranslationAxisToXAxis", PyvtkCamera3DRepresentation_SetTranslationAxisToXAxis, METH_VARARGS,
   "SetTranslationAxisToXAxis(self) -> None\nC++: void SetTranslationAxisToXAxis()\n\nSet/Get the constraint axis for translations. Default: Axis::NONE\n(-1).\n"},
  {"SetTranslationAxisToYAxis", PyvtkCamera3DRepresentation_SetTranslationAxisToYAxis, METH_VARARGS,
   "SetTranslationAxisToYAxis(self) -> None\nC++: void SetTranslationAxisToYAxis()\n\n"},
  {"SetTranslationAxisToZAxis", PyvtkCamera3DRepresentation_SetTranslationAxisToZAxis, METH_VARARGS,
   "SetTranslationAxisToZAxis(self) -> None\nC++: void SetTranslationAxisToZAxis()\n\n"},
  {"SetTranslationAxisToNone", PyvtkCamera3DRepresentation_SetTranslationAxisToNone, METH_VARARGS,
   "SetTranslationAxisToNone(self) -> None\nC++: void SetTranslationAxisToNone()\n\n"},
  {"SetTranslationAxis", PyvtkCamera3DRepresentation_SetTranslationAxis, METH_VARARGS,
   "SetTranslationAxis(self, _arg:int) -> None\nC++: virtual void SetTranslationAxis(int _arg)\n\n"},
  {"GetTranslationAxisMinValue", PyvtkCamera3DRepresentation_GetTranslationAxisMinValue, METH_VARARGS,
   "GetTranslationAxisMinValue(self) -> int\nC++: virtual int GetTranslationAxisMinValue()\n\n"},
  {"GetTranslationAxisMaxValue", PyvtkCamera3DRepresentation_GetTranslationAxisMaxValue, METH_VARARGS,
   "GetTranslationAxisMaxValue(self) -> int\nC++: virtual int GetTranslationAxisMaxValue()\n\n"},
  {"GetTranslationAxis", PyvtkCamera3DRepresentation_GetTranslationAxis, METH_VARARGS,
   "GetTranslationAxis(self) -> int\nC++: virtual int GetTranslationAxis()\n\n"},
  {"SetTranslatingAll", PyvtkCamera3DRepresentation_SetTranslatingAll, METH_VARARGS,
   "SetTranslatingAll(self, _arg:bool) -> None\nC++: virtual void SetTranslatingAll(bool _arg)\n\nSet/Get whether to translate both position and target or not.\nDefault: false.\n"},
  {"GetTranslatingAll", PyvtkCamera3DRepresentation_GetTranslatingAll, METH_VARARGS,
   "GetTranslatingAll(self) -> bool\nC++: virtual bool GetTranslatingAll()\n\n"},
  {"TranslatingAllOn", PyvtkCamera3DRepresentation_TranslatingAllOn, METH_VARARGS,
   "TranslatingAllOn(self) -> None\nC++: virtual void TranslatingAllOn()\n\n"},
  {"TranslatingAllOff", PyvtkCamera3DRepresentation_TranslatingAllOff, METH_VARARGS,
   "TranslatingAllOff(self) -> None\nC++: virtual void TranslatingAllOff()\n\n"},
  {"SetFrustumVisibility", PyvtkCamera3DRepresentation_SetFrustumVisibility, METH_VARARGS,
   "SetFrustumVisibility(self, visible:bool) -> None\nC++: void SetFrustumVisibility(bool visible)\n\nSet/Get whether to show camera frustum. Default: true.\n"},
  {"GetFrustumVisibility", PyvtkCamera3DRepresentation_GetFrustumVisibility, METH_VARARGS,
   "GetFrustumVisibility(self) -> bool\nC++: virtual bool GetFrustumVisibility()\n\n"},
  {"FrustumVisibilityOn", PyvtkCamera3DRepresentation_FrustumVisibilityOn, METH_VARARGS,
   "FrustumVisibilityOn(self) -> None\nC++: virtual void FrustumVisibilityOn()\n\n"},
  {"FrustumVisibilityOff", PyvtkCamera3DRepresentation_FrustumVisibilityOff, METH_VARARGS,
   "FrustumVisibilityOff(self) -> None\nC++: virtual void FrustumVisibilityOff()\n\n"},
  {"SetSecondaryHandlesVisibility", PyvtkCamera3DRepresentation_SetSecondaryHandlesVisibility, METH_VARARGS,
   "SetSecondaryHandlesVisibility(self, visible:bool) -> None\nC++: void SetSecondaryHandlesVisibility(bool visible)\n\nSet/Get whether to show secondary handles (spheres and lines).\nDefault: true.\n"},
  {"GetSecondaryHandlesVisibility", PyvtkCamera3DRepresentation_GetSecondaryHandlesVisibility, METH_VARARGS,
   "GetSecondaryHandlesVisibility(self) -> bool\nC++: virtual bool GetSecondaryHandlesVisibility()\n\n"},
  {"SecondaryHandlesVisibilityOn", PyvtkCamera3DRepresentation_SecondaryHandlesVisibilityOn, METH_VARARGS,
   "SecondaryHandlesVisibilityOn(self) -> None\nC++: virtual void SecondaryHandlesVisibilityOn()\n\n"},
  {"SecondaryHandlesVisibilityOff", PyvtkCamera3DRepresentation_SecondaryHandlesVisibilityOff, METH_VARARGS,
   "SecondaryHandlesVisibilityOff(self) -> None\nC++: virtual void SecondaryHandlesVisibilityOff()\n\n"},
  {"SetInteractionState", PyvtkCamera3DRepresentation_SetInteractionState, METH_VARARGS,
   "SetInteractionState(self, state:int) -> None\nC++: void SetInteractionState(int state)\n\nThe interaction state may be set from a widget (e.g.,\nvtkCamera3DWidget) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {"RegisterPickers", PyvtkCamera3DRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {"GetActors", PyvtkCamera3DRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp (i.e., support rendering). GetActors adds all the\ninternal props used by this representation to the supplied\ncollection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCamera3DRepresentation_Doc =
  "vtkCamera3DRepresentation - a class defining the representation for\nthe vtkCamera3DWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "This class is a concrete representation for the vtkCamera3DWidget.\n"
  "The camera is represented by a box and a cone. The first one allows\n"
  "camera movement, the second allows view angle update. There are three\n"
  "more handles to rotate the view up, and move the target position. It\n"
  "also has a frustum representation.\n\n"
  "To use this representation, you can use the PlaceWidget() method to\n"
  "position the widget looking at a specified region in space. This is\n"
  "optional as you may want to not move the camera at setup.\n\n"
  "@sa\n"
  "vtkCamera3DWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCamera3DRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCamera3DRepresentation", // tp_name
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
  PyvtkCamera3DRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCamera3DRepresentation_StaticNew()
{
  return vtkCamera3DRepresentation::New();
}

PyObject *PyvtkCamera3DRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCamera3DRepresentation_Type, PyvtkCamera3DRepresentation_Methods,
    "vtkCamera3DRepresentation",
 &PyvtkCamera3DRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "Outside", vtkCamera3DRepresentation::Outside },
        { "Translating", vtkCamera3DRepresentation::Translating },
        { "TranslatingPosition", vtkCamera3DRepresentation::TranslatingPosition },
        { "TranslatingNearTarget", vtkCamera3DRepresentation::TranslatingNearTarget },
        { "TranslatingTarget", vtkCamera3DRepresentation::TranslatingTarget },
        { "TranslatingUp", vtkCamera3DRepresentation::TranslatingUp },
        { "Scaling", vtkCamera3DRepresentation::Scaling },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCamera3DRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCamera3DRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCamera3DRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

