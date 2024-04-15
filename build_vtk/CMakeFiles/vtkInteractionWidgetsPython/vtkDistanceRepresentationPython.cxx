// python wrapper for vtkDistanceRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDistanceRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDistanceRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkDistanceRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkDistanceRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistanceRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistanceRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistanceRepresentation *tempr = vtkDistanceRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistanceRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistanceRepresentation::NewInstance());

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
PyvtkDistanceRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDistanceRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDistanceRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double tempr = op->GetDistance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint1WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_GetPoint1WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPoint1WorldPosition();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDistanceRepresentation_GetPoint1WorldPosition_s1(self, args);
    case 0:
      return PyvtkDistanceRepresentation_GetPoint1WorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1WorldPosition");
  return nullptr;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint2WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_GetPoint2WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPoint2WorldPosition();

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDistanceRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDistanceRepresentation_GetPoint2WorldPosition_s1(self, args);
    case 0:
      return PyvtkDistanceRepresentation_GetPoint2WorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2WorldPosition");
  return nullptr;
}


static PyObject *
PyvtkDistanceRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
PyvtkDistanceRepresentation_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->SetPoint1WorldPosition(temp0);

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
PyvtkDistanceRepresentation_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    op->SetPoint2WorldPosition(temp0);

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
PyvtkDistanceRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetHandleRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InstantiateHandleRepresentation();
    }
    else
    {
      op->vtkDistanceRepresentation::InstantiateHandleRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint1Representation() :
      op->vtkDistanceRepresentation::GetPoint1Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleRepresentation *tempr = (ap.IsBound() ?
      op->GetPoint2Representation() :
      op->vtkDistanceRepresentation::GetPoint2Representation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkDistanceRepresentation::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkDistanceRepresentation::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkDistanceRepresentation::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkDistanceRepresentation::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkDistanceRepresentation::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerMode(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation::SetRulerMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRulerMode() :
      op->vtkDistanceRepresentation::GetRulerMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_RulerModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RulerModeOn();
    }
    else
    {
      op->vtkDistanceRepresentation::RulerModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_RulerModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RulerModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RulerModeOff();
    }
    else
    {
      op->vtkDistanceRepresentation::RulerModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRulerDistance(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation::SetRulerDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistanceMinValue() :
      op->vtkDistanceRepresentation::GetRulerDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistanceMaxValue() :
      op->vtkDistanceRepresentation::GetRulerDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetRulerDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRulerDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRulerDistance() :
      op->vtkDistanceRepresentation::GetRulerDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_SetNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRulerTicks(temp0);
    }
    else
    {
      op->vtkDistanceRepresentation::SetNumberOfRulerTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicksMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicksMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRulerTicksMinValue() :
      op->vtkDistanceRepresentation::GetNumberOfRulerTicksMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicksMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicksMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRulerTicksMaxValue() :
      op->vtkDistanceRepresentation::GetNumberOfRulerTicksMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_GetNumberOfRulerTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRulerTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRulerTicks() :
      op->vtkDistanceRepresentation::GetNumberOfRulerTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkDistanceRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistanceRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::StartWidgetInteraction(temp0);
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
PyvtkDistanceRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

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
      op->vtkDistanceRepresentation::WidgetInteraction(temp0);
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
PyvtkDistanceRepresentation_StartComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->StartComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDistanceRepresentation::StartComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkDistanceRepresentation_ComplexInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComplexInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->ComplexInteraction(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDistanceRepresentation::ComplexInteraction(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkDistanceRepresentation_ComputeComplexInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeComplexInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistanceRepresentation *op = static_cast<vtkDistanceRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkAbstractWidget *temp1 = nullptr;
  unsigned long temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkAbstractWidget") &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDistanceRepresentation::ComputeComplexInteractionState(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}

static PyMethodDef PyvtkDistanceRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkDistanceRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDistanceRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDistanceRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDistanceRepresentation\nC++: static vtkDistanceRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDistanceRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDistanceRepresentation\nC++: vtkDistanceRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDistanceRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDistanceRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDistance", PyvtkDistanceRepresentation_GetDistance, METH_VARARGS,
   "GetDistance(self) -> float\nC++: virtual double GetDistance()\n\nThis representation and all subclasses must keep a distance\nconsistent with the state of the widget.\n"},
  {"GetPoint1WorldPosition", PyvtkDistanceRepresentation_GetPoint1WorldPosition, METH_VARARGS,
   "GetPoint1WorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetPoint1WorldPosition(double pos[3])\nGetPoint1WorldPosition(self) -> (float, float, float)\nC++: virtual double *GetPoint1WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {"GetPoint2WorldPosition", PyvtkDistanceRepresentation_GetPoint2WorldPosition, METH_VARARGS,
   "GetPoint2WorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetPoint2WorldPosition(double pos[3])\nGetPoint2WorldPosition(self) -> (float, float, float)\nC++: virtual double *GetPoint2WorldPosition()\n\n"},
  {"SetPoint1DisplayPosition", PyvtkDistanceRepresentation_SetPoint1DisplayPosition, METH_VARARGS,
   "SetPoint1DisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetPoint1DisplayPosition(double pos[3])\n\n"},
  {"SetPoint2DisplayPosition", PyvtkDistanceRepresentation_SetPoint2DisplayPosition, METH_VARARGS,
   "SetPoint2DisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetPoint2DisplayPosition(double pos[3])\n\n"},
  {"GetPoint1DisplayPosition", PyvtkDistanceRepresentation_GetPoint1DisplayPosition, METH_VARARGS,
   "GetPoint1DisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetPoint1DisplayPosition(double pos[3])\n\n"},
  {"GetPoint2DisplayPosition", PyvtkDistanceRepresentation_GetPoint2DisplayPosition, METH_VARARGS,
   "GetPoint2DisplayPosition(self, pos:[float, float, float]) -> None\nC++: virtual void GetPoint2DisplayPosition(double pos[3])\n\n"},
  {"SetPoint1WorldPosition", PyvtkDistanceRepresentation_SetPoint1WorldPosition, METH_VARARGS,
   "SetPoint1WorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetPoint1WorldPosition(double pos[3])\n\n"},
  {"SetPoint2WorldPosition", PyvtkDistanceRepresentation_SetPoint2WorldPosition, METH_VARARGS,
   "SetPoint2WorldPosition(self, pos:[float, float, float]) -> None\nC++: virtual void SetPoint2WorldPosition(double pos[3])\n\n"},
  {"SetHandleRepresentation", PyvtkDistanceRepresentation_SetHandleRepresentation, METH_VARARGS,
   "SetHandleRepresentation(self, handle:vtkHandleRepresentation)\n    -> None\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\nThis method is used to specify the type of handle representation\nto use for the two internal vtkHandleWidgets within\nvtkDistanceWidget. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkDistanceRepresentation uses this dummy to\nclone two vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkDistance widget.)\n"},
  {"InstantiateHandleRepresentation", PyvtkDistanceRepresentation_InstantiateHandleRepresentation, METH_VARARGS,
   "InstantiateHandleRepresentation(self) -> None\nC++: void InstantiateHandleRepresentation()\n\n"},
  {"GetPoint1Representation", PyvtkDistanceRepresentation_GetPoint1Representation, METH_VARARGS,
   "GetPoint1Representation(self) -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetPoint1Representation()\n\nSet/Get the two handle representations used for the\nvtkDistanceWidget. (Note: properties can be set by grabbing these\nrepresentations and setting the properties appropriately.)\n"},
  {"GetPoint2Representation", PyvtkDistanceRepresentation_GetPoint2Representation, METH_VARARGS,
   "GetPoint2Representation(self) -> vtkHandleRepresentation\nC++: virtual vtkHandleRepresentation *GetPoint2Representation()\n\n"},
  {"SetTolerance", PyvtkDistanceRepresentation_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:int) -> None\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the end points\nof the widget to be active.\n"},
  {"GetToleranceMinValue", PyvtkDistanceRepresentation_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> int\nC++: virtual int GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkDistanceRepresentation_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> int\nC++: virtual int GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkDistanceRepresentation_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> int\nC++: virtual int GetTolerance()\n\n"},
  {"SetLabelFormat", PyvtkDistanceRepresentation_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSpecify the format to use for labelling the distance. Note that\nan empty string results in no label, or a format string without a\n\"%\" character will not print the distance value.\n"},
  {"GetLabelFormat", PyvtkDistanceRepresentation_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"SetScale", PyvtkDistanceRepresentation_SetScale, METH_VARARGS,
   "SetScale(self, _arg:float) -> None\nC++: virtual void SetScale(double _arg)\n\nSet the scale factor from VTK world coordinates. The ruler marks\nand label will be defined in terms of the scaled space. For\nexample, if the VTK world coordinates are assumed to be in\ninches, but the desired distance units should be defined in terms\nof centimeters, the scale factor should be set to 2.54. The ruler\nmarks will then be spaced in terms of centimeters, and the label\nwill show the measurement in centimeters.\n"},
  {"GetScale", PyvtkDistanceRepresentation_GetScale, METH_VARARGS,
   "GetScale(self) -> float\nC++: virtual double GetScale()\n\n"},
  {"SetRulerMode", PyvtkDistanceRepresentation_SetRulerMode, METH_VARARGS,
   "SetRulerMode(self, _arg:int) -> None\nC++: virtual void SetRulerMode(vtkTypeBool _arg)\n\nEnable or disable ruler mode. When enabled, the ticks on the\ndistance widget are separated by the amount specified by\nRulerDistance. Otherwise, the ivar NumberOfRulerTicks is used to\ndraw the tick marks.\n"},
  {"GetRulerMode", PyvtkDistanceRepresentation_GetRulerMode, METH_VARARGS,
   "GetRulerMode(self) -> int\nC++: virtual vtkTypeBool GetRulerMode()\n\n"},
  {"RulerModeOn", PyvtkDistanceRepresentation_RulerModeOn, METH_VARARGS,
   "RulerModeOn(self) -> None\nC++: virtual void RulerModeOn()\n\n"},
  {"RulerModeOff", PyvtkDistanceRepresentation_RulerModeOff, METH_VARARGS,
   "RulerModeOff(self) -> None\nC++: virtual void RulerModeOff()\n\n"},
  {"SetRulerDistance", PyvtkDistanceRepresentation_SetRulerDistance, METH_VARARGS,
   "SetRulerDistance(self, _arg:float) -> None\nC++: virtual void SetRulerDistance(double _arg)\n\nSpecify the RulerDistance which indicates the spacing of the\nmajor ticks. This ivar only has effect when the RulerMode is on.\n"},
  {"GetRulerDistanceMinValue", PyvtkDistanceRepresentation_GetRulerDistanceMinValue, METH_VARARGS,
   "GetRulerDistanceMinValue(self) -> float\nC++: virtual double GetRulerDistanceMinValue()\n\n"},
  {"GetRulerDistanceMaxValue", PyvtkDistanceRepresentation_GetRulerDistanceMaxValue, METH_VARARGS,
   "GetRulerDistanceMaxValue(self) -> float\nC++: virtual double GetRulerDistanceMaxValue()\n\n"},
  {"GetRulerDistance", PyvtkDistanceRepresentation_GetRulerDistance, METH_VARARGS,
   "GetRulerDistance(self) -> float\nC++: virtual double GetRulerDistance()\n\n"},
  {"SetNumberOfRulerTicks", PyvtkDistanceRepresentation_SetNumberOfRulerTicks, METH_VARARGS,
   "SetNumberOfRulerTicks(self, _arg:int) -> None\nC++: virtual void SetNumberOfRulerTicks(int _arg)\n\nSpecify the number of major ruler ticks. This overrides any\nsubclasses (e.g., vtkDistanceRepresentation2D) that have\nalternative methods to specify the number of major ticks. Note:\nthe number of ticks is the number between the two handle\nendpoints. This ivar only has effect when the RulerMode is off.\n"},
  {"GetNumberOfRulerTicksMinValue", PyvtkDistanceRepresentation_GetNumberOfRulerTicksMinValue, METH_VARARGS,
   "GetNumberOfRulerTicksMinValue(self) -> int\nC++: virtual int GetNumberOfRulerTicksMinValue()\n\n"},
  {"GetNumberOfRulerTicksMaxValue", PyvtkDistanceRepresentation_GetNumberOfRulerTicksMaxValue, METH_VARARGS,
   "GetNumberOfRulerTicksMaxValue(self) -> int\nC++: virtual int GetNumberOfRulerTicksMaxValue()\n\n"},
  {"GetNumberOfRulerTicks", PyvtkDistanceRepresentation_GetNumberOfRulerTicks, METH_VARARGS,
   "GetNumberOfRulerTicks(self) -> int\nC++: virtual int GetNumberOfRulerTicks()\n\n"},
  {"BuildRepresentation", PyvtkDistanceRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {"ComputeInteractionState", PyvtkDistanceRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"StartWidgetInteraction", PyvtkDistanceRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, e:[float, float]) -> None\nC++: void StartWidgetInteraction(double e[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkDistanceRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, e:[float, float]) -> None\nC++: void WidgetInteraction(double e[2]) override;\n\n"},
  {"StartComplexInteraction", PyvtkDistanceRepresentation_StartComplexInteraction, METH_VARARGS,
   "StartComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void StartComplexInteraction(vtkRenderWindowInteractor *iren,\n     vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ComplexInteraction", PyvtkDistanceRepresentation_ComplexInteraction, METH_VARARGS,
   "ComplexInteraction(self, iren:vtkRenderWindowInteractor,\n    widget:vtkAbstractWidget, event:int, calldata:Pointer) -> None\nC++: void ComplexInteraction(vtkRenderWindowInteractor *iren,\n    vtkAbstractWidget *widget, unsigned long event,\n    void *calldata) override;\n\n"},
  {"ComputeComplexInteractionState", PyvtkDistanceRepresentation_ComputeComplexInteractionState, METH_VARARGS,
   "ComputeComplexInteractionState(self,\n    iren:vtkRenderWindowInteractor, widget:vtkAbstractWidget,\n    event:int, calldata:Pointer, modify:int=0) -> int\nC++: int ComputeComplexInteractionState(\n    vtkRenderWindowInteractor *iren, vtkAbstractWidget *widget,\n    unsigned long event, void *calldata, int modify=0) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDistanceRepresentation_Doc =
  "vtkDistanceRepresentation - represent the vtkDistanceWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The vtkDistanceRepresentation is a superclass for various types of\n"
  "representations for the vtkDistanceWidget. Logically subclasses\n"
  "consist of an axis and two handles for placing/manipulating the end\n"
  "points.\n\n"
  "@sa\n"
  "vtkDistanceWidget vtkHandleRepresentation vtkDistanceRepresentation2D\n"
  "vtkDistanceRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDistanceRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkDistanceRepresentation", // tp_name
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
  PyvtkDistanceRepresentation_Doc, // tp_doc
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

PyObject *PyvtkDistanceRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDistanceRepresentation_Type, PyvtkDistanceRepresentation_Methods,
    "vtkDistanceRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "Outside", vtkDistanceRepresentation::Outside },
        { "NearP1", vtkDistanceRepresentation::NearP1 },
        { "NearP2", vtkDistanceRepresentation::NearP2 },
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

void PyVTKAddFile_vtkDistanceRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistanceRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistanceRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

