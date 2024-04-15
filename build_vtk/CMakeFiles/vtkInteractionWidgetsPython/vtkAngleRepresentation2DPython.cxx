// python wrapper for vtkAngleRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAngleRepresentation2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAngleRepresentation2D(PyObject *dict); }
extern "C" { PyObject *PyvtkAngleRepresentation2D_ClassNew(); }

#ifndef DECLARED_PyvtkAngleRepresentation_ClassNew
extern "C" { PyObject *PyvtkAngleRepresentation_ClassNew(); }
#define DECLARED_PyvtkAngleRepresentation_ClassNew
#endif

static PyObject *
PyvtkAngleRepresentation2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAngleRepresentation2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAngleRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAngleRepresentation2D *tempr = vtkAngleRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAngleRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAngleRepresentation2D::NewInstance());

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
PyvtkAngleRepresentation2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAngleRepresentation2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAngleRepresentation2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkAngleRepresentation2D::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetPoint1WorldPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::GetPoint1WorldPosition(temp0);
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
PyvtkAngleRepresentation2D_GetCenterWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetCenterWorldPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::GetCenterWorldPosition(temp0);
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
PyvtkAngleRepresentation2D_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetPoint2WorldPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::GetPoint2WorldPosition(temp0);
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
PyvtkAngleRepresentation2D_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetPoint1DisplayPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::SetPoint1DisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetPoint1WorldPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::SetPoint1WorldPosition(temp0);
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
PyvtkAngleRepresentation2D_SetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetCenterDisplayPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::SetCenterDisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_SetCenterWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetCenterWorldPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::SetCenterWorldPosition(temp0);
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
PyvtkAngleRepresentation2D_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetPoint2DisplayPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::SetPoint2DisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetPoint2WorldPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::SetPoint2WorldPosition(temp0);
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
PyvtkAngleRepresentation2D_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetPoint1DisplayPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::GetPoint1DisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_GetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetCenterDisplayPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::GetCenterDisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetPoint2DisplayPosition(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::GetPoint2DisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_GetRay1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLeaderActor2D *tempr = (ap.IsBound() ?
      op->GetRay1() :
      op->vtkAngleRepresentation2D::GetRay1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetRay2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLeaderActor2D *tempr = (ap.IsBound() ?
      op->GetRay2() :
      op->vtkAngleRepresentation2D::GetRay2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLeaderActor2D *tempr = (ap.IsBound() ?
      op->GetArc() :
      op->vtkAngleRepresentation2D::GetArc());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_SetForce3DArcPlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForce3DArcPlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForce3DArcPlacement(temp0);
    }
    else
    {
      op->vtkAngleRepresentation2D::SetForce3DArcPlacement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetForce3DArcPlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForce3DArcPlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForce3DArcPlacement() :
      op->vtkAngleRepresentation2D::GetForce3DArcPlacement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkAngleRepresentation2D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->vtkAngleRepresentation2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkAngleRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAngleRepresentation2D_Methods[] = {
  {"IsTypeOf", PyvtkAngleRepresentation2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAngleRepresentation2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAngleRepresentation2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAngleRepresentation2D\nC++: static vtkAngleRepresentation2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAngleRepresentation2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAngleRepresentation2D\nC++: vtkAngleRepresentation2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAngleRepresentation2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAngleRepresentation2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAngle", PyvtkAngleRepresentation2D_GetAngle, METH_VARARGS,
   "GetAngle(self) -> float\nC++: double GetAngle() override;\n\nSatisfy the superclasses API.\n"},
  {"GetPoint1WorldPosition", PyvtkAngleRepresentation2D_GetPoint1WorldPosition, METH_VARARGS,
   "GetPoint1WorldPosition(self, pos:[float, float, float]) -> None\nC++: void GetPoint1WorldPosition(double pos[3]) override;\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetCenterWorldPosition", PyvtkAngleRepresentation2D_GetCenterWorldPosition, METH_VARARGS,
   "GetCenterWorldPosition(self, pos:[float, float, float]) -> None\nC++: void GetCenterWorldPosition(double pos[3]) override;\n\n"},
  {"GetPoint2WorldPosition", PyvtkAngleRepresentation2D_GetPoint2WorldPosition, METH_VARARGS,
   "GetPoint2WorldPosition(self, pos:[float, float, float]) -> None\nC++: void GetPoint2WorldPosition(double pos[3]) override;\n\n"},
  {"SetPoint1DisplayPosition", PyvtkAngleRepresentation2D_SetPoint1DisplayPosition, METH_VARARGS,
   "SetPoint1DisplayPosition(self, pos:[float, float, float]) -> None\nC++: void SetPoint1DisplayPosition(double pos[3]) override;\n\n"},
  {"SetPoint1WorldPosition", PyvtkAngleRepresentation2D_SetPoint1WorldPosition, METH_VARARGS,
   "SetPoint1WorldPosition(self, pos:[float, float, float]) -> None\nC++: void SetPoint1WorldPosition(double pos[3])\n\n"},
  {"SetCenterDisplayPosition", PyvtkAngleRepresentation2D_SetCenterDisplayPosition, METH_VARARGS,
   "SetCenterDisplayPosition(self, pos:[float, float, float]) -> None\nC++: void SetCenterDisplayPosition(double pos[3]) override;\n\n"},
  {"SetCenterWorldPosition", PyvtkAngleRepresentation2D_SetCenterWorldPosition, METH_VARARGS,
   "SetCenterWorldPosition(self, pos:[float, float, float]) -> None\nC++: void SetCenterWorldPosition(double pos[3])\n\n"},
  {"SetPoint2DisplayPosition", PyvtkAngleRepresentation2D_SetPoint2DisplayPosition, METH_VARARGS,
   "SetPoint2DisplayPosition(self, pos:[float, float, float]) -> None\nC++: void SetPoint2DisplayPosition(double pos[3]) override;\n\n"},
  {"SetPoint2WorldPosition", PyvtkAngleRepresentation2D_SetPoint2WorldPosition, METH_VARARGS,
   "SetPoint2WorldPosition(self, pos:[float, float, float]) -> None\nC++: void SetPoint2WorldPosition(double pos[3])\n\n"},
  {"GetPoint1DisplayPosition", PyvtkAngleRepresentation2D_GetPoint1DisplayPosition, METH_VARARGS,
   "GetPoint1DisplayPosition(self, pos:[float, float, float]) -> None\nC++: void GetPoint1DisplayPosition(double pos[3]) override;\n\n"},
  {"GetCenterDisplayPosition", PyvtkAngleRepresentation2D_GetCenterDisplayPosition, METH_VARARGS,
   "GetCenterDisplayPosition(self, pos:[float, float, float]) -> None\nC++: void GetCenterDisplayPosition(double pos[3]) override;\n\n"},
  {"GetPoint2DisplayPosition", PyvtkAngleRepresentation2D_GetPoint2DisplayPosition, METH_VARARGS,
   "GetPoint2DisplayPosition(self, pos:[float, float, float]) -> None\nC++: void GetPoint2DisplayPosition(double pos[3]) override;\n\n"},
  {"GetRay1", PyvtkAngleRepresentation2D_GetRay1, METH_VARARGS,
   "GetRay1(self) -> vtkLeaderActor2D\nC++: virtual vtkLeaderActor2D *GetRay1()\n\nGet the three leaders used to create this representation. By\nobtaining these leaders the user can set the appropriate\nproperties, etc.\n"},
  {"GetRay2", PyvtkAngleRepresentation2D_GetRay2, METH_VARARGS,
   "GetRay2(self) -> vtkLeaderActor2D\nC++: virtual vtkLeaderActor2D *GetRay2()\n\n"},
  {"GetArc", PyvtkAngleRepresentation2D_GetArc, METH_VARARGS,
   "GetArc(self) -> vtkLeaderActor2D\nC++: virtual vtkLeaderActor2D *GetArc()\n\n"},
  {"SetForce3DArcPlacement", PyvtkAngleRepresentation2D_SetForce3DArcPlacement, METH_VARARGS,
   "SetForce3DArcPlacement(self, _arg:bool) -> None\nC++: virtual void SetForce3DArcPlacement(bool _arg)\n\nSet/Get if the widget should use screen space or world space\ncoordinates when trying to place the arc. Screen space may\nproduce nicer results but breaks easily when interacting with the\ncamera.\n\nDefault is false (screen space)\n"},
  {"GetForce3DArcPlacement", PyvtkAngleRepresentation2D_GetForce3DArcPlacement, METH_VARARGS,
   "GetForce3DArcPlacement(self) -> bool\nC++: virtual bool GetForce3DArcPlacement()\n\n"},
  {"BuildRepresentation", PyvtkAngleRepresentation2D_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nMethod defined by vtkWidgetRepresentation superclass and needed\nhere.\n"},
  {"ReleaseGraphicsResources", PyvtkAngleRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nMethods required by vtkProp superclass.\n"},
  {"RenderOverlay", PyvtkAngleRepresentation2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAngleRepresentation2D_Doc =
  "vtkAngleRepresentation2D - represent the vtkAngleWidget\n\n"
  "Superclass: vtkAngleRepresentation\n\n"
  "The vtkAngleRepresentation2D is a representation for the\n"
  "vtkAngleWidget. This representation consists of two rays and three\n"
  "vtkHandleRepresentations to place and manipulate the three points\n"
  "defining the angle representation. (Note: the three points are\n"
  "referred to as Point1, Center, and Point2, at the two end points\n"
  "(Point1 and Point2) and Center (around which the angle is measured).\n"
  "This particular implementation is a 2D representation, meaning that\n"
  "it draws in the overlay plane.\n\n"
  "@sa\n"
  "vtkAngleWidget vtkHandleRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAngleRepresentation2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkAngleRepresentation2D", // tp_name
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
  PyvtkAngleRepresentation2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAngleRepresentation2D_StaticNew()
{
  return vtkAngleRepresentation2D::New();
}

PyObject *PyvtkAngleRepresentation2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAngleRepresentation2D_Type, PyvtkAngleRepresentation2D_Methods,
    "vtkAngleRepresentation2D",
 &PyvtkAngleRepresentation2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAngleRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAngleRepresentation2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAngleRepresentation2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAngleRepresentation2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

