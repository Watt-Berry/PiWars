// python wrapper for vtkTexturedButtonRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTexturedButtonRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTexturedButtonRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkTexturedButtonRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkButtonRepresentation_ClassNew
extern "C" { PyObject *PyvtkButtonRepresentation_ClassNew(); }
#define DECLARED_PyvtkButtonRepresentation_ClassNew
#endif

static PyObject *
PyvtkTexturedButtonRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTexturedButtonRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTexturedButtonRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTexturedButtonRepresentation *tempr = vtkTexturedButtonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexturedButtonRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTexturedButtonRepresentation::NewInstance());

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
PyvtkTexturedButtonRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTexturedButtonRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTexturedButtonRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetButtonGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetButtonGeometry(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetButtonGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetButtonGeometryConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonGeometryConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetButtonGeometryConnection(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetButtonGeometryConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetButtonGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetButtonGeometry() :
      op->vtkTexturedButtonRepresentation::GetButtonGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFollowCamera(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetFollowCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFollowCamera() :
      op->vtkTexturedButtonRepresentation::GetFollowCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_FollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FollowCameraOn();
    }
    else
    {
      op->vtkTexturedButtonRepresentation::FollowCameraOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_FollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FollowCameraOff();
    }
    else
    {
      op->vtkTexturedButtonRepresentation::FollowCameraOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkTexturedButtonRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetHoveringProperty(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetHoveringProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHoveringProperty() :
      op->vtkTexturedButtonRepresentation::GetHoveringProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectingProperty(temp0);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetSelectingProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectingProperty() :
      op->vtkTexturedButtonRepresentation::GetSelectingProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_SetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetButtonTexture(temp0, temp1);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::SetButtonTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetButtonTexture(temp0) :
      op->vtkTexturedButtonRepresentation::GetButtonTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTexturedButtonRepresentation::PlaceWidget(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTexturedButtonRepresentation_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::PlaceWidget(temp0);
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
PyvtkTexturedButtonRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTexturedButtonRepresentation_PlaceWidget_s1(self, args);
    case 1:
      return PyvtkTexturedButtonRepresentation_PlaceWidget_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}


static PyObject *
PyvtkTexturedButtonRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkTexturedButtonRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkTexturedButtonRepresentation::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

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
      op->vtkTexturedButtonRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTexturedButtonRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkTexturedButtonRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkTexturedButtonRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation_RegisterPickers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RegisterPickers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation *op = static_cast<vtkTexturedButtonRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RegisterPickers();
    }
    else
    {
      op->vtkTexturedButtonRepresentation::RegisterPickers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTexturedButtonRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkTexturedButtonRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTexturedButtonRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTexturedButtonRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTexturedButtonRepresentation\nC++: static vtkTexturedButtonRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTexturedButtonRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTexturedButtonRepresentation\nC++: vtkTexturedButtonRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTexturedButtonRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTexturedButtonRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetButtonGeometry", PyvtkTexturedButtonRepresentation_SetButtonGeometry, METH_VARARGS,
   "SetButtonGeometry(self, pd:vtkPolyData) -> None\nC++: void SetButtonGeometry(vtkPolyData *pd)\n\nSet/Get the polydata which defines the button geometry.\n"},
  {"SetButtonGeometryConnection", PyvtkTexturedButtonRepresentation_SetButtonGeometryConnection, METH_VARARGS,
   "SetButtonGeometryConnection(self, algOutput:vtkAlgorithmOutput)\n    -> None\nC++: void SetButtonGeometryConnection(\n    vtkAlgorithmOutput *algOutput)\n\n"},
  {"GetButtonGeometry", PyvtkTexturedButtonRepresentation_GetButtonGeometry, METH_VARARGS,
   "GetButtonGeometry(self) -> vtkPolyData\nC++: vtkPolyData *GetButtonGeometry()\n\n"},
  {"SetFollowCamera", PyvtkTexturedButtonRepresentation_SetFollowCamera, METH_VARARGS,
   "SetFollowCamera(self, _arg:int) -> None\nC++: virtual void SetFollowCamera(vtkTypeBool _arg)\n\nSpecify whether the button should always face the camera. If\nenabled, the button rotates as the camera moves.\n"},
  {"GetFollowCamera", PyvtkTexturedButtonRepresentation_GetFollowCamera, METH_VARARGS,
   "GetFollowCamera(self) -> int\nC++: virtual vtkTypeBool GetFollowCamera()\n\n"},
  {"FollowCameraOn", PyvtkTexturedButtonRepresentation_FollowCameraOn, METH_VARARGS,
   "FollowCameraOn(self) -> None\nC++: virtual void FollowCameraOn()\n\n"},
  {"FollowCameraOff", PyvtkTexturedButtonRepresentation_FollowCameraOff, METH_VARARGS,
   "FollowCameraOff(self) -> None\nC++: virtual void FollowCameraOff()\n\n"},
  {"SetProperty", PyvtkTexturedButtonRepresentation_SetProperty, METH_VARARGS,
   "SetProperty(self, p:vtkProperty) -> None\nC++: virtual void SetProperty(vtkProperty *p)\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {"GetProperty", PyvtkTexturedButtonRepresentation_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\n"},
  {"SetHoveringProperty", PyvtkTexturedButtonRepresentation_SetHoveringProperty, METH_VARARGS,
   "SetHoveringProperty(self, p:vtkProperty) -> None\nC++: virtual void SetHoveringProperty(vtkProperty *p)\n\nSpecify the property to use when the hovering over the button.\n"},
  {"GetHoveringProperty", PyvtkTexturedButtonRepresentation_GetHoveringProperty, METH_VARARGS,
   "GetHoveringProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetHoveringProperty()\n\n"},
  {"SetSelectingProperty", PyvtkTexturedButtonRepresentation_SetSelectingProperty, METH_VARARGS,
   "SetSelectingProperty(self, p:vtkProperty) -> None\nC++: virtual void SetSelectingProperty(vtkProperty *p)\n\nSpecify the property to use when selecting the button.\n"},
  {"GetSelectingProperty", PyvtkTexturedButtonRepresentation_GetSelectingProperty, METH_VARARGS,
   "GetSelectingProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectingProperty()\n\n"},
  {"SetButtonTexture", PyvtkTexturedButtonRepresentation_SetButtonTexture, METH_VARARGS,
   "SetButtonTexture(self, i:int, image:vtkImageData) -> None\nC++: void SetButtonTexture(int i, vtkImageData *image)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {"GetButtonTexture", PyvtkTexturedButtonRepresentation_GetButtonTexture, METH_VARARGS,
   "GetButtonTexture(self, i:int) -> vtkImageData\nC++: vtkImageData *GetButtonTexture(int i)\n\n"},
  {"PlaceWidget", PyvtkTexturedButtonRepresentation_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, scale:float, point:[float, float, float],\n    normal:[float, float, float]) -> None\nC++: virtual void PlaceWidget(double scale, double point[3],\n    double normal[3])\nPlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nAlternative method for placing a button at a given position\n(defined by point[3]); at a given orientation (normal[3], where\nthe z-axis of the button geometry is parallel to the normal); and\nscaled by the scale parameter. This method can bs used to attach \"sticky\nnotes\" or \"sticky buttons\" to objects. A great way to attach\ninteractive meta-data to 3D actors.\n"},
  {"ComputeInteractionState", PyvtkTexturedButtonRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {"BuildRepresentation", PyvtkTexturedButtonRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"Highlight", PyvtkTexturedButtonRepresentation_Highlight, METH_VARARGS,
   "Highlight(self, state:int) -> None\nC++: void Highlight(int state) override;\n\n"},
  {"ShallowCopy", PyvtkTexturedButtonRepresentation_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {"GetBounds", PyvtkTexturedButtonRepresentation_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nMethods to make this class behave as a vtkProp. They are repeated\nhere (from the vtkProp superclass) as a reminder to the widget\nimplementor. Failure to implement these methods properly may\nresult in the representation not appearing in the scene (i.e.,\nnot implementing the Render() methods properly) or leaking\ngraphics resources (i.e., not implementing\nReleaseGraphicsResources() properly).\n"},
  {"GetActors", PyvtkTexturedButtonRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, pc:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ReleaseGraphicsResources", PyvtkTexturedButtonRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkTexturedButtonRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"RegisterPickers", PyvtkTexturedButtonRepresentation_RegisterPickers, METH_VARARGS,
   "RegisterPickers(self) -> None\nC++: void RegisterPickers() override;\n\nRegister internal Pickers in the Picking Manager. Must be\nreimplemented by concrete widget representations to register\ntheir pickers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTexturedButtonRepresentation_Doc =
  "vtkTexturedButtonRepresentation - defines a representation for a\nvtkButtonWidget\n\n"
  "Superclass: vtkButtonRepresentation\n\n"
  "This class implements one type of vtkButtonRepresentation. It changes\n"
  "the appearance of a user-provided polydata by assigning textures\n"
  "according to the current button state. It also provides highlighting\n"
  "(when hovering and selecting the button) by fiddling with the actor's\n"
  "property.\n\n"
  "To use this representation, always begin by specifying the number of\n"
  "button states.  Then provide a polydata (the polydata should have\n"
  "associated texture coordinates), and a list of textures corresponding\n"
  "to the button states. Optionally, the HoveringProperty and\n"
  "SelectionProperty can be adjusted to obtain the appropriate\n"
  "appearance.\n\n"
  "This widget representation has two placement methods. The\n"
  "conventional PlaceWidget() method is used to locate the textured\n"
  "button inside of a user-specified bounding box (note that the button\n"
  "geometry is uniformly scaled to fit, thus two of the three dimensions\n"
  "can be \"large\" and the third used to perform the scaling). However\n"
  "this PlaceWidget() method will align the geometry within x-y-z\n"
  "oriented bounds. To further control the placement, use the additional\n"
  "PlaceWidget(scale,point,normal) method. This scales the geometry,\n"
  "places its center at the specified point position, and orients the\n"
  "geometry's z-direction parallel to the specified normal. This can be\n"
  "used to attach \"sticky notes\" or \"sticky buttons\" to the surface of\n"
  "objects.\n\n"
  "@sa\n"
  "vtkButtonWidget vtkButtonRepresentation vtkButtonSource\n"
  "vtkEllipticalButtonSource vtkRectangularButtonSource\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTexturedButtonRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkTexturedButtonRepresentation", // tp_name
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
  PyvtkTexturedButtonRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTexturedButtonRepresentation_StaticNew()
{
  return vtkTexturedButtonRepresentation::New();
}

PyObject *PyvtkTexturedButtonRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTexturedButtonRepresentation_Type, PyvtkTexturedButtonRepresentation_Methods,
    "vtkTexturedButtonRepresentation",
 &PyvtkTexturedButtonRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkButtonRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTexturedButtonRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTexturedButtonRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTexturedButtonRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

