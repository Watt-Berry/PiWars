// python wrapper for vtkConstrainedPointHandleRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConstrainedPointHandleRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConstrainedPointHandleRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkConstrainedPointHandleRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkHandleRepresentation_ClassNew
extern "C" { PyObject *PyvtkHandleRepresentation_ClassNew(); }
#define DECLARED_PyvtkHandleRepresentation_ClassNew
#endif

static PyObject *
PyvtkConstrainedPointHandleRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConstrainedPointHandleRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConstrainedPointHandleRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConstrainedPointHandleRepresentation *tempr = vtkConstrainedPointHandleRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConstrainedPointHandleRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConstrainedPointHandleRepresentation::NewInstance());

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
PyvtkConstrainedPointHandleRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConstrainedPointHandleRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConstrainedPointHandleRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::SetCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCursorShape() :
      op->vtkConstrainedPointHandleRepresentation::GetCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::SetActiveCursorShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetActiveCursorShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveCursorShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetActiveCursorShape() :
      op->vtkConstrainedPointHandleRepresentation::GetActiveCursorShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormal(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkConstrainedPointHandleRepresentation::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkConstrainedPointHandleRepresentation::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkConstrainedPointHandleRepresentation::GetProjectionNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToXAxis();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormalToXAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToYAxis();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormalToYAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToZAxis();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormalToZAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToOblique();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionNormalToOblique();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetObliquePlane(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetObliquePlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetObliquePlane() :
      op->vtkConstrainedPointHandleRepresentation::GetObliquePlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPosition(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetProjectionPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkConstrainedPointHandleRepresentation::GetProjectionPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_AddBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->AddBoundingPlane(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::AddBoundingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RemoveBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->RemoveBoundingPlane(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::RemoveBoundingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RemoveAllBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBoundingPlanes();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::RemoveAllBoundingPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->SetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetBoundingPlanes(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetBoundingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_Methods[] = {
  {"SetBoundingPlanes", PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_s1, METH_VARARGS,
   "@V *vtkPlaneCollection"},
  {"SetBoundingPlanes", PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_s2, METH_VARARGS,
   "@V *vtkPlanes"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBoundingPlanes");
  return nullptr;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetBoundingPlanes() :
      op->vtkConstrainedPointHandleRepresentation::GetBoundingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_CheckConstraint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckConstraint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->CheckConstraint(temp0, temp1) :
      op->vtkConstrainedPointHandleRepresentation::CheckConstraint(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::SetPosition(temp0);
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
PyvtkConstrainedPointHandleRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkConstrainedPointHandleRepresentation_SetPosition_s1(self, args);
    case 1:
      return PyvtkConstrainedPointHandleRepresentation_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkConstrainedPointHandleRepresentation::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::GetPosition(temp0);
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
PyvtkConstrainedPointHandleRepresentation_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkConstrainedPointHandleRepresentation_GetPosition_s1(self, args);
    case 1:
      return PyvtkConstrainedPointHandleRepresentation_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkConstrainedPointHandleRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkConstrainedPointHandleRepresentation::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_GetActiveProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetActiveProperty() :
      op->vtkConstrainedPointHandleRepresentation::GetActiveProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::StartWidgetInteraction(temp0);
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
PyvtkConstrainedPointHandleRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::WidgetInteraction(temp0);
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
PyvtkConstrainedPointHandleRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkConstrainedPointHandleRepresentation::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::SetDisplayPosition(temp0);
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
PyvtkConstrainedPointHandleRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkConstrainedPointHandleRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkConstrainedPointHandleRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkConstrainedPointHandleRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkConstrainedPointHandleRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

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
      op->vtkConstrainedPointHandleRepresentation::Highlight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConstrainedPointHandleRepresentation_Translate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConstrainedPointHandleRepresentation *op = static_cast<vtkConstrainedPointHandleRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->Translate(temp0, temp1);
    }
    else
    {
      op->vtkConstrainedPointHandleRepresentation::Translate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkConstrainedPointHandleRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkConstrainedPointHandleRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConstrainedPointHandleRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConstrainedPointHandleRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkConstrainedPointHandleRepresentation\nC++: static vtkConstrainedPointHandleRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConstrainedPointHandleRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkConstrainedPointHandleRepresentation\nC++: vtkConstrainedPointHandleRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConstrainedPointHandleRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConstrainedPointHandleRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCursorShape", PyvtkConstrainedPointHandleRepresentation_SetCursorShape, METH_VARARGS,
   "SetCursorShape(self, cursorShape:vtkPolyData) -> None\nC++: void SetCursorShape(vtkPolyData *cursorShape)\n\nSpecify the cursor shape. Keep in mind that the shape will be\naligned with the constraining plane by orienting it such that the\nx axis of the geometry lies along the normal of the plane.\n"},
  {"GetCursorShape", PyvtkConstrainedPointHandleRepresentation_GetCursorShape, METH_VARARGS,
   "GetCursorShape(self) -> vtkPolyData\nC++: vtkPolyData *GetCursorShape()\n\n"},
  {"SetActiveCursorShape", PyvtkConstrainedPointHandleRepresentation_SetActiveCursorShape, METH_VARARGS,
   "SetActiveCursorShape(self, activeShape:vtkPolyData) -> None\nC++: void SetActiveCursorShape(vtkPolyData *activeShape)\n\nSpecify the shape of the cursor (handle) when it is active. This\nis the geometry that will be used when the mouse is close to the\nhandle or if the user is manipulating the handle.\n"},
  {"GetActiveCursorShape", PyvtkConstrainedPointHandleRepresentation_GetActiveCursorShape, METH_VARARGS,
   "GetActiveCursorShape(self) -> vtkPolyData\nC++: vtkPolyData *GetActiveCursorShape()\n\n"},
  {"SetProjectionNormal", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormal, METH_VARARGS,
   "SetProjectionNormal(self, _arg:int) -> None\nC++: virtual void SetProjectionNormal(int _arg)\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {"GetProjectionNormalMinValue", PyvtkConstrainedPointHandleRepresentation_GetProjectionNormalMinValue, METH_VARARGS,
   "GetProjectionNormalMinValue(self) -> int\nC++: virtual int GetProjectionNormalMinValue()\n\n"},
  {"GetProjectionNormalMaxValue", PyvtkConstrainedPointHandleRepresentation_GetProjectionNormalMaxValue, METH_VARARGS,
   "GetProjectionNormalMaxValue(self) -> int\nC++: virtual int GetProjectionNormalMaxValue()\n\n"},
  {"GetProjectionNormal", PyvtkConstrainedPointHandleRepresentation_GetProjectionNormal, METH_VARARGS,
   "GetProjectionNormal(self) -> int\nC++: virtual int GetProjectionNormal()\n\n"},
  {"SetProjectionNormalToXAxis", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToXAxis, METH_VARARGS,
   "SetProjectionNormalToXAxis(self) -> None\nC++: void SetProjectionNormalToXAxis()\n\n"},
  {"SetProjectionNormalToYAxis", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToYAxis, METH_VARARGS,
   "SetProjectionNormalToYAxis(self) -> None\nC++: void SetProjectionNormalToYAxis()\n\n"},
  {"SetProjectionNormalToZAxis", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToZAxis, METH_VARARGS,
   "SetProjectionNormalToZAxis(self) -> None\nC++: void SetProjectionNormalToZAxis()\n\n"},
  {"SetProjectionNormalToOblique", PyvtkConstrainedPointHandleRepresentation_SetProjectionNormalToOblique, METH_VARARGS,
   "SetProjectionNormalToOblique(self) -> None\nC++: void SetProjectionNormalToOblique()\n\n"},
  {"SetObliquePlane", PyvtkConstrainedPointHandleRepresentation_SetObliquePlane, METH_VARARGS,
   "SetObliquePlane(self, __a:vtkPlane) -> None\nC++: void SetObliquePlane(vtkPlane *)\n\nIf the ProjectionNormal is set to Oblique, then this is the\noblique plane used to constrain the handle position\n"},
  {"GetObliquePlane", PyvtkConstrainedPointHandleRepresentation_GetObliquePlane, METH_VARARGS,
   "GetObliquePlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetObliquePlane()\n\n"},
  {"SetProjectionPosition", PyvtkConstrainedPointHandleRepresentation_SetProjectionPosition, METH_VARARGS,
   "SetProjectionPosition(self, position:float) -> None\nC++: void SetProjectionPosition(double position)\n\nThe position of the bounding plane from the origin along the\nnormal. The origin and normal are defined in the oblique plane\nwhen the ProjectionNormal is Oblique. For the X, Y, and Z axes\nprojection normals, the normal is the axis direction, and the\norigin is (0,0,0).\n"},
  {"GetProjectionPosition", PyvtkConstrainedPointHandleRepresentation_GetProjectionPosition, METH_VARARGS,
   "GetProjectionPosition(self) -> float\nC++: virtual double GetProjectionPosition()\n\n"},
  {"AddBoundingPlane", PyvtkConstrainedPointHandleRepresentation_AddBoundingPlane, METH_VARARGS,
   "AddBoundingPlane(self, plane:vtkPlane) -> None\nC++: void AddBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {"RemoveBoundingPlane", PyvtkConstrainedPointHandleRepresentation_RemoveBoundingPlane, METH_VARARGS,
   "RemoveBoundingPlane(self, plane:vtkPlane) -> None\nC++: void RemoveBoundingPlane(vtkPlane *plane)\n\n"},
  {"RemoveAllBoundingPlanes", PyvtkConstrainedPointHandleRepresentation_RemoveAllBoundingPlanes, METH_VARARGS,
   "RemoveAllBoundingPlanes(self) -> None\nC++: void RemoveAllBoundingPlanes()\n\n"},
  {"SetBoundingPlanes", PyvtkConstrainedPointHandleRepresentation_SetBoundingPlanes, METH_VARARGS,
   "SetBoundingPlanes(self, __a:vtkPlaneCollection) -> None\nC++: virtual void SetBoundingPlanes(vtkPlaneCollection *)\nSetBoundingPlanes(self, planes:vtkPlanes) -> None\nC++: void SetBoundingPlanes(vtkPlanes *planes)\n\n"},
  {"GetBoundingPlanes", PyvtkConstrainedPointHandleRepresentation_GetBoundingPlanes, METH_VARARGS,
   "GetBoundingPlanes(self) -> vtkPlaneCollection\nC++: virtual vtkPlaneCollection *GetBoundingPlanes()\n\n"},
  {"CheckConstraint", PyvtkConstrainedPointHandleRepresentation_CheckConstraint, METH_VARARGS,
   "CheckConstraint(self, renderer:vtkRenderer, pos:[float, float])\n    -> int\nC++: int CheckConstraint(vtkRenderer *renderer, double pos[2])\n    override;\n\nOverridden from the base class. It converts the display\nco-ordinates to world co-ordinates. It returns 1 if the point\nlies within the constrained region, otherwise return 0\n"},
  {"SetPosition", PyvtkConstrainedPointHandleRepresentation_SetPosition, METH_VARARGS,
   "SetPosition(self, x:float, y:float, z:float) -> None\nC++: void SetPosition(double x, double y, double z)\nSetPosition(self, xyz:[float, float, float]) -> None\nC++: void SetPosition(double xyz[3])\n\nSet/Get the position of the point in display coordinates.  These\nare convenience methods that extend the superclasses'\nGetHandlePosition() method. Note that only the x-y coordinate\nvalues are used\n"},
  {"GetPosition", PyvtkConstrainedPointHandleRepresentation_GetPosition, METH_VARARGS,
   "GetPosition(self) -> Pointer\nC++: double *GetPosition()\nGetPosition(self, xyz:[float, float, float]) -> None\nC++: void GetPosition(double xyz[3])\n\n"},
  {"GetProperty", PyvtkConstrainedPointHandleRepresentation_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nThis is the property used when the handle is not active (the\nmouse is not near the handle)\n"},
  {"GetSelectedProperty", PyvtkConstrainedPointHandleRepresentation_GetSelectedProperty, METH_VARARGS,
   "GetSelectedProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\nThis is the property used when the mouse is near the handle (but\nthe user is not yet interacting with it)\n"},
  {"GetActiveProperty", PyvtkConstrainedPointHandleRepresentation_GetActiveProperty, METH_VARARGS,
   "GetActiveProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetActiveProperty()\n\nThis is the property used when the user is interacting with the\nhandle.\n"},
  {"SetRenderer", PyvtkConstrainedPointHandleRepresentation_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *ren) override;\n\nSubclasses of vtkConstrainedPointHandleRepresentation must\nimplement these methods. These are the methods that the widget\nand its representation use to communicate with each other.\n"},
  {"BuildRepresentation", PyvtkConstrainedPointHandleRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"StartWidgetInteraction", PyvtkConstrainedPointHandleRepresentation_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkConstrainedPointHandleRepresentation_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"ComputeInteractionState", PyvtkConstrainedPointHandleRepresentation_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify)\n    override;\n\n"},
  {"SetDisplayPosition", PyvtkConstrainedPointHandleRepresentation_SetDisplayPosition, METH_VARARGS,
   "SetDisplayPosition(self, pos:[float, float, float]) -> None\nC++: void SetDisplayPosition(double pos[3]) override;\n\nMethod overridden from Superclass. computes the world\nco-ordinates using GetIntersectionPosition()\n"},
  {"GetActors", PyvtkConstrainedPointHandleRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkConstrainedPointHandleRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkConstrainedPointHandleRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkConstrainedPointHandleRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkConstrainedPointHandleRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkConstrainedPointHandleRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {"ShallowCopy", PyvtkConstrainedPointHandleRepresentation_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class properly act like a\nvtkWidgetRepresentation.\n"},
  {"Highlight", PyvtkConstrainedPointHandleRepresentation_Highlight, METH_VARARGS,
   "Highlight(self, highlight:int) -> None\nC++: void Highlight(int highlight) override;\n\n"},
  {"Translate", PyvtkConstrainedPointHandleRepresentation_Translate, METH_VARARGS,
   "Translate(self, p1:(float, ...), p2:(float, ...)) -> None\nC++: virtual void Translate(const double *p1, const double *p2)\n\nTranslates world position by vector p1p2 projected on the\nconstraint axis if any.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkConstrainedPointHandleRepresentation_Doc =
  "vtkConstrainedPointHandleRepresentation - point representation\nconstrained to a 2D plane\n\n"
  "Superclass: vtkHandleRepresentation\n\n"
  "This class is used to represent a vtkHandleWidget. It represents a\n"
  "position in 3D world coordinates that is constrained to a specified\n"
  "plane. The default look is to draw a white point when this widget is\n"
  "not selected or active, a thin green circle when it is highlighted,\n"
  "and a thicker cyan circle when it is active (being positioned).\n"
  "Defaults can be adjusted - but take care to define cursor geometry\n"
  "that makes sense for this widget. The geometry will be aligned on the\n"
  "constraining plane, with the plane normal aligned with the X axis of\n"
  "the geometry (similar behavior to vtkGlyph3D).\n\n"
  "TODO: still need to work on\n"
  "1) translation when mouse is outside bounding planes\n"
  "2) size of the widget\n\n"
  "@sa\n"
  "vtkHandleRepresentation vtkHandleWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConstrainedPointHandleRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkConstrainedPointHandleRepresentation", // tp_name
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
  PyvtkConstrainedPointHandleRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConstrainedPointHandleRepresentation_StaticNew()
{
  return vtkConstrainedPointHandleRepresentation::New();
}

PyObject *PyvtkConstrainedPointHandleRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConstrainedPointHandleRepresentation_Type, PyvtkConstrainedPointHandleRepresentation_Methods,
    "vtkConstrainedPointHandleRepresentation",
 &PyvtkConstrainedPointHandleRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHandleRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "XAxis", vtkConstrainedPointHandleRepresentation::XAxis },
        { "YAxis", vtkConstrainedPointHandleRepresentation::YAxis },
        { "ZAxis", vtkConstrainedPointHandleRepresentation::ZAxis },
        { "Oblique", vtkConstrainedPointHandleRepresentation::Oblique },
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

void PyVTKAddFile_vtkConstrainedPointHandleRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConstrainedPointHandleRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConstrainedPointHandleRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

