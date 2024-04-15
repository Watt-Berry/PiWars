// python wrapper for vtkAngleRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAngleRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAngleRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkAngleRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkAngleRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAngleRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAngleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAngleRepresentation *tempr = vtkAngleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAngleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAngleRepresentation::NewInstance());

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
PyvtkAngleRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAngleRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAngleRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double tempr = op->GetAngle();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetPoint1WorldPosition(temp0);

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
PyvtkAngleRepresentation_GetCenterWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetCenterWorldPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetPoint2WorldPosition(temp0);

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
PyvtkAngleRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->SetPoint1DisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->SetCenterDisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->SetPoint2DisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetPoint1DisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetCenterDisplayPosition(temp0);

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
PyvtkAngleRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->GetPoint2DisplayPosition(temp0);

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
PyvtkAngleRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetHandleRepresentation(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetHandleRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InstantiateHandleRepresentation();
    }
    else
    {
      op->vtkAngleRepresentation::InstantiateHandleRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint1Representation() :
      op->vtkAngleRepresentation::GetPoint1Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetCenterRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetCenterRepresentation() :
      op->vtkAngleRepresentation::GetCenterRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint2Representation() :
      op->vtkAngleRepresentation::GetPoint2Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkAngleRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkAngleRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkAngleRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkAngleRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkAngleRepresentation::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetRay1Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay1Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRay1Visibility(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetRay1Visibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetRay1Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay1Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRay1Visibility() :
      op->vtkAngleRepresentation::GetRay1Visibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray1VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray1VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Ray1VisibilityOn();
    }
    else
    {
      op->vtkAngleRepresentation::Ray1VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray1VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray1VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Ray1VisibilityOff();
    }
    else
    {
      op->vtkAngleRepresentation::Ray1VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetRay2Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRay2Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRay2Visibility(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetRay2Visibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetRay2Visibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay2Visibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRay2Visibility() :
      op->vtkAngleRepresentation::GetRay2Visibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray2VisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray2VisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Ray2VisibilityOn();
    }
    else
    {
      op->vtkAngleRepresentation::Ray2VisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_Ray2VisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Ray2VisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Ray2VisibilityOff();
    }
    else
    {
      op->vtkAngleRepresentation::Ray2VisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_SetArcVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcVisibility(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::SetArcVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_GetArcVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArcVisibility() :
      op->vtkAngleRepresentation::GetArcVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ArcVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcVisibilityOn();
    }
    else
    {
      op->vtkAngleRepresentation::ArcVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ArcVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArcVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ArcVisibilityOff();
    }
    else
    {
      op->vtkAngleRepresentation::ArcVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkAngleRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAngleRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::StartWidgetInteraction(temp0);
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
PyvtkAngleRepresentation_CenterWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CenterWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->CenterWidgetInteraction(temp0);
    }
    else
    {
      op->vtkAngleRepresentation::CenterWidgetInteraction(temp0);
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
PyvtkAngleRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::WidgetInteraction(temp0);
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
PyvtkAngleRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation *op = static_cast<vtkAngleRepresentation *>(vp);

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
      op->vtkAngleRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAngleRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkAngleRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAngleRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAngleRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAngleRepresentation\nC++: static vtkAngleRepresentation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAngleRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAngleRepresentation\nC++: vtkAngleRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAngleRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAngleRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAngle", PyvtkAngleRepresentation_GetAngle, METH_VARARGS,
   "GetAngle(self) -> float\nC++: virtual double GetAngle()\n\nThis representation and all subclasses must keep an angle (in\ndegrees) consistent with the state of the widget.\n"},
  {"GetPoint1WorldPosition", PyvtkAngleRepresentation_GetPoint1WorldPosition, METH_VARARGS,
   "GetPoint1WorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the three points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetCenterWorldPosition", PyvtkAngleRepresentation_GetCenterWorldPosition, METH_VARARGS,
   "GetCenterWorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetCenterWorldPosition(double pos[3])\n\n"},
  {"GetPoint2WorldPosition", PyvtkAngleRepresentation_GetPoint2WorldPosition, METH_VARARGS,
   "GetPoint2WorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetPoint2WorldPosition(double pos[3])\n\n"},
  {"SetPoint1DisplayPosition", PyvtkAngleRepresentation_SetPoint1DisplayPosition, METH_VARARGS,
   "SetPoint1DisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetPoint1DisplayPosition(double pos[3])\n\n"},
  {"SetCenterDisplayPosition", PyvtkAngleRepresentation_SetCenterDisplayPosition, METH_VARARGS,
   "SetCenterDisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetCenterDisplayPosition(double pos[3])\n\n"},
  {"SetPoint2DisplayPosition", PyvtkAngleRepresentation_SetPoint2DisplayPosition, METH_VARARGS,
   "SetPoint2DisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetPoint2DisplayPosition(double pos[3])\n\n"},
  {"GetPoint1DisplayPosition", PyvtkAngleRepresentation_GetPoint1DisplayPosition, METH_VARARGS,
   "GetPoint1DisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetPoint1DisplayPosition(double pos[3])\n\n"},
  {"GetCenterDisplayPosition", PyvtkAngleRepresentation_GetCenterDisplayPosition, METH_VARARGS,
   "GetCenterDisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetCenterDisplayPosition(double pos[3])\n\n"},
  {"GetPoint2DisplayPosition", PyvtkAngleRepresentation_GetPoint2DisplayPosition, METH_VARARGS,
   "GetPoint2DisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetPoint2DisplayPosition(double pos[3])\n\n"},
  {"SetHandleRepresentation", PyvtkAngleRepresentation_SetHandleRepresentation, METH_VARARGS,
   "SetHandleRepresentation(self, handle:vtkHandleRepresentation)\n    -> None\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkAngleRepresentation. To use this method, create a dummy\nvtkHandleRepresentation (or subclass), and then invoke this\nmethod with this dummy. Then the vtkAngleRepresentation uses this\ndummy to clone three vtkHandleRepresentations of the same type.\nMake sure you set the handle representation before the widget is\nenabled. (The method InstantiateHandleRepresentation() is invoked\nby the vtkAngle widget.)\n"},
  {"InstantiateHandleRepresentation", PyvtkAngleRepresentation_InstantiateHandleRepresentation, METH_VARARGS,
   "InstantiateHandleRepresentation(self) -> None\nC++: void InstantiateHandleRepresentation()\n\n"},
  {"GetPoint1Representation", PyvtkAngleRepresentation_GetPoint1Representation, METH_VARARGS,
   "GetPoint1Representation(self) -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetPoint1Representation()\n\nSet/Get the handle representations used for the\nvtkAngleRepresentation.\n"},
  {"GetCenterRepresentation", PyvtkAngleRepresentation_GetCenterRepresentation, METH_VARARGS,
   "GetCenterRepresentation(self) -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetCenterRepresentation()\n\n"},
  {"GetPoint2Representation", PyvtkAngleRepresentation_GetPoint2Representation, METH_VARARGS,
   "GetPoint2Representation(self) -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetPoint2Representation()\n\n"},
  {"SetTolerance", PyvtkAngleRepresentation_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:int) -> None\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the representation (in\npixels) in which the cursor is considered near enough to the end\npoints of the representation to be active.\n"},
  {"GetToleranceMinValue", PyvtkAngleRepresentation_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> int\nC++: virtual int GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkAngleRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> int\nC++: virtual int GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkAngleRepresentation_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> int\nC++: virtual int GetTolerance()\n\n"},
  {"SetLabelFormat", PyvtkAngleRepresentation_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSpecify the format to use for labeling the angle. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {"GetLabelFormat", PyvtkAngleRepresentation_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"SetScale", PyvtkAngleRepresentation_SetScale, METH_VARARGS,
   "SetScale(self, _arg:float) -> None\nC++: virtual void SetScale(double _arg)\n\nSet the scale factor from degrees. The label will be defined in\nterms of the scaled space. For example, to use radians in the\nlabel set the scale factor to pi/180.\n"},
  {"GetScale", PyvtkAngleRepresentation_GetScale, METH_VARARGS,
   "GetScale(self) -> float\nC++: virtual double GetScale()\n\n"},
  {"SetRay1Visibility", PyvtkAngleRepresentation_SetRay1Visibility, METH_VARARGS,
   "SetRay1Visibility(self, _arg:int) -> None\nC++: virtual void SetRay1Visibility(vtkTypeBool _arg)\n\nSpecial methods for turning off the rays and arc that define the\ncone and arc of the angle.\n"},
  {"GetRay1Visibility", PyvtkAngleRepresentation_GetRay1Visibility, METH_VARARGS,
   "GetRay1Visibility(self) -> int\nC++: virtual vtkTypeBool GetRay1Visibility()\n\n"},
  {"Ray1VisibilityOn", PyvtkAngleRepresentation_Ray1VisibilityOn, METH_VARARGS,
   "Ray1VisibilityOn(self) -> None\nC++: virtual void Ray1VisibilityOn()\n\n"},
  {"Ray1VisibilityOff", PyvtkAngleRepresentation_Ray1VisibilityOff, METH_VARARGS,
   "Ray1VisibilityOff(self) -> None\nC++: virtual void Ray1VisibilityOff()\n\n"},
  {"SetRay2Visibility", PyvtkAngleRepresentation_SetRay2Visibility, METH_VARARGS,
   "SetRay2Visibility(self, _arg:int) -> None\nC++: virtual void SetRay2Visibility(vtkTypeBool _arg)\n\n"},
  {"GetRay2Visibility", PyvtkAngleRepresentation_GetRay2Visibility, METH_VARARGS,
   "GetRay2Visibility(self) -> int\nC++: virtual vtkTypeBool GetRay2Visibility()\n\n"},
  {"Ray2VisibilityOn", PyvtkAngleRepresentation_Ray2VisibilityOn, METH_VARARGS,
   "Ray2VisibilityOn(self) -> None\nC++: virtual void Ray2VisibilityOn()\n\n"},
  {"Ray2VisibilityOff", PyvtkAngleRepresentation_Ray2VisibilityOff, METH_VARARGS,
   "Ray2VisibilityOff(self) -> None\nC++: virtual void Ray2VisibilityOff()\n\n"},
  {"SetArcVisibility", PyvtkAngleRepresentation_SetArcVisibility, METH_VARARGS,
   "SetArcVisibility(self, _arg:int) -> None\nC++: virtual void SetArcVisibility(vtkTypeBool _arg)\n\n"},
  {"GetArcVisibility", PyvtkAngleRepresentation_GetArcVisibility, METH_VARARGS,
   "GetArcVisibility(self) -> int\nC++: virtual vtkTypeBool GetArcVisibility()\n\n"},
  {"ArcVisibilityOn", PyvtkAngleRepresentation_ArcVisibilityOn, METH_VARARGS,
   "ArcVisibilityOn(self) -> None\nC++: virtual void ArcVisibilityOn()\n\n"},
  {"ArcVisibilityOff", PyvtkAngleRepresentation_ArcVisibilityOff, METH_VARARGS,
   "ArcVisibilityOff(self) -> None\nC++: virtual void ArcVisibilityOff()\n\n"},
  {"BuildRepresentation", PyvtkAngleRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkAngleRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"StartWidgetInteraction", PyvtkAngleRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override;\n\n"},
  {"CenterWidgetInteraction", PyvtkAngleRepresentation_CenterWidgetInteraction, METH_VARARGS,
   "CenterWidgetInteraction(self, e:[float, float]) -> None\nC++: virtual void CenterWidgetInteraction(double e[2])\n\n"},
  {"WidgetInteraction", PyvtkAngleRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override;\n\n"},
  {"SetRenderer", PyvtkAngleRepresentation_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSubclasses of vtkWidgetRepresentation must implement these\nmethods. This is considered the minimum API for a widget\nrepresentation.\n\nSetRenderer() - the renderer in which the representations draws\nitself. Typically the renderer is set by the associated widget.\nUse the widget's SetCurrentRenderer() method in most cases;\notherwise there is a risk of inconsistent behavior as events and\ndrawing may be performed in different viewports.\nBuildRepresentation() - update the geometry of the widget based\non its current state.  WARNING: The renderer is NOT reference\ncounted by the representation, in order to avoid reference loops.\n Be sure that the representation lifetime does not extend beyond\nthe renderer lifetime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAngleRepresentation_Doc =
  "vtkAngleRepresentation - represent the vtkAngleWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkAngleRepresentation is a superclass for classes representing\n"
  "the vtkAngleWidget. This representation consists of two rays and\n"
  "three vtkHandleRepresentations to place and manipulate the three\n"
  "points defining the angle representation. (Note: the three points are\n"
  "referred to as Point1, Center, and Point2, at the two end points\n"
  "(Point1 and Point2) and Center (around which the angle is measured).\n\n"
  "@sa\n"
  "vtkAngleWidget vtkHandleRepresentation vtkAngleRepresentation2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAngleRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkAngleRepresentation", // tp_name
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
  PyvtkAngleRepresentation_Doc, // tp_doc
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

PyObject *PyvtkAngleRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAngleRepresentation_Type, PyvtkAngleRepresentation_Methods,
    "vtkAngleRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "Outside", vtkAngleRepresentation::Outside },
        { "NearP1", vtkAngleRepresentation::NearP1 },
        { "NearCenter", vtkAngleRepresentation::NearCenter },
        { "NearP2", vtkAngleRepresentation::NearP2 },
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

void PyVTKAddFile_vtkAngleRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAngleRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAngleRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

