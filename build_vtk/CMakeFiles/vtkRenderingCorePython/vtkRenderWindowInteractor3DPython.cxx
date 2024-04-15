// python wrapper for vtkRenderWindowInteractor3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEventData.h"
#include "vtkRenderWindowInteractor3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderWindowInteractor3D(PyObject *dict); }
extern "C" { PyObject *PyvtkRenderWindowInteractor3D_ClassNew(); }

#ifndef DECLARED_PyvtkRenderWindowInteractor_ClassNew
extern "C" { PyObject *PyvtkRenderWindowInteractor_ClassNew(); }
#define DECLARED_PyvtkRenderWindowInteractor_ClassNew
#endif

static PyObject *
PyvtkRenderWindowInteractor3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderWindowInteractor3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderWindowInteractor3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderWindowInteractor3D *tempr = vtkRenderWindowInteractor3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindowInteractor3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderWindowInteractor3D::NewInstance());

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
PyvtkRenderWindowInteractor3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderWindowInteractor3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderWindowInteractor3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_Enable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Enable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Enable();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::Enable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Disable();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::Disable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetWorldEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWorldEventPosition(temp0) :
      op->vtkRenderWindowInteractor3D::GetWorldEventPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetLastWorldEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWorldEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastWorldEventPosition(temp0) :
      op->vtkRenderWindowInteractor3D::GetLastWorldEventPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetWorldEventOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldEventOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWorldEventOrientation(temp0) :
      op->vtkRenderWindowInteractor3D::GetWorldEventOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetLastWorldEventOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWorldEventOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastWorldEventOrientation(temp0) :
      op->vtkRenderWindowInteractor3D::GetLastWorldEventOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetWorldEventPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldEventPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetWorldEventPose(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::GetWorldEventPose(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetLastWorldEventPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWorldEventPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetLastWorldEventPose(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::GetLastWorldEventPose(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetPhysicalEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPhysicalEventPosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalEventPosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetPhysicalEventPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalEventPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPhysicalEventPose(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalEventPose(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetPhysicalEventPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalEventPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetPhysicalEventPose(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::GetPhysicalEventPose(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetLastPhysicalEventPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastPhysicalEventPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetLastPhysicalEventPose(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::GetLastPhysicalEventPose(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetStartingPhysicalEventPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartingPhysicalEventPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetStartingPhysicalEventPose(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::GetStartingPhysicalEventPose(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetWorldEventPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldEventPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetWorldEventPosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetWorldEventPosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetWorldEventOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldEventOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetWorldEventOrientation(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetWorldEventOrientation(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetWorldEventPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldEventPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetWorldEventPose(temp0, temp1);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetWorldEventPose(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_RightButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::RightButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_RightButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::RightButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_MiddleButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MiddleButtonPressEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::MiddleButtonPressEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_MiddleButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MiddleButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MiddleButtonReleaseEvent();
    }
    else
    {
      op->vtkRenderWindowInteractor3D::MiddleButtonReleaseEvent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetTouchPadPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTouchPadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkEventDataDevice temp0;
  vtkEventDataDeviceInput temp1;
  const size_t size2 = 3;
  float temp2[3];
  float save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetEnumValue(temp0, "vtkEventDataDevice") &&
      ap.GetEnumValue(temp1, "vtkEventDataDeviceInput") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetTouchPadPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::GetTouchPadPosition(temp0, temp1, temp2);
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
PyvtkRenderWindowInteractor3D_SetPhysicalViewDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalViewDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

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
      op->SetPhysicalViewDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalViewDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetPhysicalViewDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalViewDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPhysicalViewDirection() :
      op->vtkRenderWindowInteractor3D::GetPhysicalViewDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetPhysicalViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

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
      op->SetPhysicalViewUp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalViewUp(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetPhysicalViewUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalViewUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPhysicalViewUp() :
      op->vtkRenderWindowInteractor3D::GetPhysicalViewUp());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetPhysicalTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkCamera *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkCamera") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPhysicalTranslation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalTranslation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetPhysicalTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPhysicalTranslation(temp0) :
      op->vtkRenderWindowInteractor3D::GetPhysicalTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetPhysicalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhysicalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhysicalScale(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetPhysicalScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetPhysicalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhysicalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhysicalScale() :
      op->vtkRenderWindowInteractor3D::GetPhysicalScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_SetTranslation3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

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
      op->SetTranslation3D(temp0);
    }
    else
    {
      op->vtkRenderWindowInteractor3D::SetTranslation3D(temp0);
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
PyvtkRenderWindowInteractor3D_GetTranslation3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTranslation3D() :
      op->vtkRenderWindowInteractor3D::GetTranslation3D());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderWindowInteractor3D_GetLastTranslation3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastTranslation3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderWindowInteractor3D *op = static_cast<vtkRenderWindowInteractor3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLastTranslation3D() :
      op->vtkRenderWindowInteractor3D::GetLastTranslation3D());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderWindowInteractor3D_Methods[] = {
  {"IsTypeOf", PyvtkRenderWindowInteractor3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderWindowInteractor3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderWindowInteractor3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRenderWindowInteractor3D\nC++: static vtkRenderWindowInteractor3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderWindowInteractor3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderWindowInteractor3D\nC++: vtkRenderWindowInteractor3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderWindowInteractor3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderWindowInteractor3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Enable", PyvtkRenderWindowInteractor3D_Enable, METH_VARARGS,
   "Enable(self) -> None\nC++: void Enable() override;\n\nEnable/Disable interactions.  By default interactors are enabled\nwhen initialized.  Initialize() must be called prior to\nenabling/disabling interaction. These methods are used when a\nwindow/widget is being shared by multiple renderers and\ninteractors.  This allows a \"modal\" display where one interactor\nis active when its data is to be displayed and all other\ninteractors associated with the widget are disabled when their\ndata is not displayed.\n"},
  {"Disable", PyvtkRenderWindowInteractor3D_Disable, METH_VARARGS,
   "Disable(self) -> None\nC++: void Disable() override;\n\n"},
  {"GetWorldEventPosition", PyvtkRenderWindowInteractor3D_GetWorldEventPosition, METH_VARARGS,
   "GetWorldEventPosition(self, pointerIndex:int) -> Pointer\nC++: virtual double *GetWorldEventPosition(int pointerIndex)\n\nWith VR we know the world coordinate positions and orientations\nof events. These methods support querying them instead of going\nthrough a display X,Y coordinate approach as is standard for\nmouse/touch events\n"},
  {"GetLastWorldEventPosition", PyvtkRenderWindowInteractor3D_GetLastWorldEventPosition, METH_VARARGS,
   "GetLastWorldEventPosition(self, pointerIndex:int) -> Pointer\nC++: virtual double *GetLastWorldEventPosition(int pointerIndex)\n\n"},
  {"GetWorldEventOrientation", PyvtkRenderWindowInteractor3D_GetWorldEventOrientation, METH_VARARGS,
   "GetWorldEventOrientation(self, pointerIndex:int) -> Pointer\nC++: virtual double *GetWorldEventOrientation(int pointerIndex)\n\n"},
  {"GetLastWorldEventOrientation", PyvtkRenderWindowInteractor3D_GetLastWorldEventOrientation, METH_VARARGS,
   "GetLastWorldEventOrientation(self, pointerIndex:int) -> Pointer\nC++: virtual double *GetLastWorldEventOrientation(\n    int pointerIndex)\n\n"},
  {"GetWorldEventPose", PyvtkRenderWindowInteractor3D_GetWorldEventPose, METH_VARARGS,
   "GetWorldEventPose(self, poseMatrix:vtkMatrix4x4, pointerIndex:int)\n     -> None\nC++: virtual void GetWorldEventPose(vtkMatrix4x4 *poseMatrix,\n    int pointerIndex)\n\n"},
  {"GetLastWorldEventPose", PyvtkRenderWindowInteractor3D_GetLastWorldEventPose, METH_VARARGS,
   "GetLastWorldEventPose(self, poseMatrix:vtkMatrix4x4,\n    pointerIndex:int) -> None\nC++: virtual void GetLastWorldEventPose(vtkMatrix4x4 *poseMatrix,\n    int pointerIndex)\n\n"},
  {"SetPhysicalEventPosition", PyvtkRenderWindowInteractor3D_SetPhysicalEventPosition, METH_VARARGS,
   "SetPhysicalEventPosition(self, x:float, y:float, z:float,\n    pointerIndex:int) -> None\nC++: virtual void SetPhysicalEventPosition(double x, double y,\n    double z, int pointerIndex)\n\nWith VR we know the physical/room coordinate positions and\norientations of events. These methods support setting them.\n"},
  {"SetPhysicalEventPose", PyvtkRenderWindowInteractor3D_SetPhysicalEventPose, METH_VARARGS,
   "SetPhysicalEventPose(self, poseMatrix:vtkMatrix4x4,\n    pointerIndex:int) -> None\nC++: virtual void SetPhysicalEventPose(vtkMatrix4x4 *poseMatrix,\n    int pointerIndex)\n\n"},
  {"GetPhysicalEventPose", PyvtkRenderWindowInteractor3D_GetPhysicalEventPose, METH_VARARGS,
   "GetPhysicalEventPose(self, poseMatrix:vtkMatrix4x4,\n    pointerIndex:int) -> None\nC++: virtual void GetPhysicalEventPose(vtkMatrix4x4 *poseMatrix,\n    int pointerIndex)\n\nWith VR we know the physical/room coordinate positions and\norientations of events. These methods support getting them.\n"},
  {"GetLastPhysicalEventPose", PyvtkRenderWindowInteractor3D_GetLastPhysicalEventPose, METH_VARARGS,
   "GetLastPhysicalEventPose(self, poseMatrix:vtkMatrix4x4,\n    pointerIndex:int) -> None\nC++: virtual void GetLastPhysicalEventPose(\n    vtkMatrix4x4 *poseMatrix, int pointerIndex)\n\n"},
  {"GetStartingPhysicalEventPose", PyvtkRenderWindowInteractor3D_GetStartingPhysicalEventPose, METH_VARARGS,
   "GetStartingPhysicalEventPose(self, poseMatrix:vtkMatrix4x4,\n    pointerIndex:int) -> None\nC++: virtual void GetStartingPhysicalEventPose(\n    vtkMatrix4x4 *poseMatrix, int pointerIndex)\n\n"},
  {"SetWorldEventPosition", PyvtkRenderWindowInteractor3D_SetWorldEventPosition, METH_VARARGS,
   "SetWorldEventPosition(self, x:float, y:float, z:float,\n    pointerIndex:int) -> None\nC++: virtual void SetWorldEventPosition(double x, double y,\n    double z, int pointerIndex)\n\nWith VR we know the world coordinate positions and orientations\nof events. These methods support setting them.\n"},
  {"SetWorldEventOrientation", PyvtkRenderWindowInteractor3D_SetWorldEventOrientation, METH_VARARGS,
   "SetWorldEventOrientation(self, w:float, x:float, y:float, z:float,\n     pointerIndex:int) -> None\nC++: virtual void SetWorldEventOrientation(double w, double x,\n    double y, double z, int pointerIndex)\n\n"},
  {"SetWorldEventPose", PyvtkRenderWindowInteractor3D_SetWorldEventPose, METH_VARARGS,
   "SetWorldEventPose(self, poseMatrix:vtkMatrix4x4, pointerIndex:int)\n     -> None\nC++: virtual void SetWorldEventPose(vtkMatrix4x4 *poseMatrix,\n    int pointerIndex)\n\n"},
  {"RightButtonPressEvent", PyvtkRenderWindowInteractor3D_RightButtonPressEvent, METH_VARARGS,
   "RightButtonPressEvent(self) -> None\nC++: void RightButtonPressEvent() override;\n\nOverride to set pointers down\n"},
  {"RightButtonReleaseEvent", PyvtkRenderWindowInteractor3D_RightButtonReleaseEvent, METH_VARARGS,
   "RightButtonReleaseEvent(self) -> None\nC++: void RightButtonReleaseEvent() override;\n\n"},
  {"MiddleButtonPressEvent", PyvtkRenderWindowInteractor3D_MiddleButtonPressEvent, METH_VARARGS,
   "MiddleButtonPressEvent(self) -> None\nC++: void MiddleButtonPressEvent() override;\n\nOverride to set pointers down\n"},
  {"MiddleButtonReleaseEvent", PyvtkRenderWindowInteractor3D_MiddleButtonReleaseEvent, METH_VARARGS,
   "MiddleButtonReleaseEvent(self) -> None\nC++: void MiddleButtonReleaseEvent() override;\n\n"},
  {"GetTouchPadPosition", PyvtkRenderWindowInteractor3D_GetTouchPadPosition, METH_VARARGS,
   "GetTouchPadPosition(self, __a:vtkEventDataDevice,\n    __b:vtkEventDataDeviceInput, __c:[float, float, float])\n    -> None\nC++: virtual void GetTouchPadPosition(vtkEventDataDevice,\n    vtkEventDataDeviceInput, float[3])\n\nGet the latest touchpad or joystick position for a device\n"},
  {"SetPhysicalViewDirection", PyvtkRenderWindowInteractor3D_SetPhysicalViewDirection, METH_VARARGS,
   "SetPhysicalViewDirection(self, __a:float, __b:float, __c:float)\n    -> None\nC++: virtual void SetPhysicalViewDirection(double, double, double)\n\nSet/get the direction of the physical coordinate system -Z axis\nin world coordinates.\n"},
  {"GetPhysicalViewDirection", PyvtkRenderWindowInteractor3D_GetPhysicalViewDirection, METH_VARARGS,
   "GetPhysicalViewDirection(self) -> Pointer\nC++: virtual double *GetPhysicalViewDirection()\n\n"},
  {"SetPhysicalViewUp", PyvtkRenderWindowInteractor3D_SetPhysicalViewUp, METH_VARARGS,
   "SetPhysicalViewUp(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void SetPhysicalViewUp(double, double, double)\n\nSet/get the direction of the physical coordinate system +Y axis\nin world coordinates.\n"},
  {"GetPhysicalViewUp", PyvtkRenderWindowInteractor3D_GetPhysicalViewUp, METH_VARARGS,
   "GetPhysicalViewUp(self) -> Pointer\nC++: virtual double *GetPhysicalViewUp()\n\n"},
  {"SetPhysicalTranslation", PyvtkRenderWindowInteractor3D_SetPhysicalTranslation, METH_VARARGS,
   "SetPhysicalTranslation(self, __a:vtkCamera, __b:float, __c:float,\n    __d:float) -> None\nC++: virtual void SetPhysicalTranslation(vtkCamera *, double,\n    double, double)\n\nSet/get position of the physical coordinate system origin in\nworld coordinates.\n"},
  {"GetPhysicalTranslation", PyvtkRenderWindowInteractor3D_GetPhysicalTranslation, METH_VARARGS,
   "GetPhysicalTranslation(self, __a:vtkCamera) -> Pointer\nC++: virtual double *GetPhysicalTranslation(vtkCamera *)\n\n"},
  {"SetPhysicalScale", PyvtkRenderWindowInteractor3D_SetPhysicalScale, METH_VARARGS,
   "SetPhysicalScale(self, __a:float) -> None\nC++: virtual void SetPhysicalScale(double)\n\nSet/get the physical scale (world / physical distance ratio)\n"},
  {"GetPhysicalScale", PyvtkRenderWindowInteractor3D_GetPhysicalScale, METH_VARARGS,
   "GetPhysicalScale(self) -> float\nC++: virtual double GetPhysicalScale()\n\n"},
  {"SetTranslation3D", PyvtkRenderWindowInteractor3D_SetTranslation3D, METH_VARARGS,
   "SetTranslation3D(self, val:[float, float, float]) -> None\nC++: void SetTranslation3D(double val[3])\n\nSet/get the translation for pan/swipe gestures, update\nLastTranslation\n"},
  {"GetTranslation3D", PyvtkRenderWindowInteractor3D_GetTranslation3D, METH_VARARGS,
   "GetTranslation3D(self) -> (float, float, float)\nC++: virtual double *GetTranslation3D()\n\n"},
  {"GetLastTranslation3D", PyvtkRenderWindowInteractor3D_GetLastTranslation3D, METH_VARARGS,
   "GetLastTranslation3D(self) -> (float, float, float)\nC++: virtual double *GetLastTranslation3D()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRenderWindowInteractor3D_Doc =
  "vtkRenderWindowInteractor3D - adds support for 3D events to\nvtkRenderWindowInteractor.\n\n"
  "Superclass: vtkRenderWindowInteractor\n\n"
  "vtkRenderWindowInteractor3D provides a platform-independent\n"
  "interaction support for 3D events including 3D clicks and 3D\n"
  "controller orientations. It follows the same basic model as\n"
  "vtkRenderWindowInteractor but adds methods to set and get 3D event\n"
  "locations and orientations. VR systems will subclass this class to\n"
  "provide the code to set these values based on events from their VR\n"
  "controllers.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderWindowInteractor3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkRenderWindowInteractor3D", // tp_name
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
  PyvtkRenderWindowInteractor3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderWindowInteractor3D_StaticNew()
{
  return vtkRenderWindowInteractor3D::New();
}

PyObject *PyvtkRenderWindowInteractor3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderWindowInteractor3D_Type, PyvtkRenderWindowInteractor3D_Methods,
    "vtkRenderWindowInteractor3D",
 &PyvtkRenderWindowInteractor3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRenderWindowInteractor_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderWindowInteractor3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderWindowInteractor3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderWindowInteractor3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

