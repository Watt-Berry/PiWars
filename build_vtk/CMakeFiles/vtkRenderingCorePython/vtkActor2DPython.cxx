// python wrapper for vtkActor2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkActor2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkActor2D(PyObject *dict); }
extern "C" { PyObject *PyvtkActor2D_ClassNew(); }

#ifndef DECLARED_PyvtkProp_ClassNew
extern "C" { PyObject *PyvtkProp_ClassNew(); }
#define DECLARED_PyvtkProp_ClassNew
#endif

static PyObject *
PyvtkActor2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkActor2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkActor2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkActor2D *tempr = vtkActor2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkActor2D::NewInstance());

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
PyvtkActor2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkActor2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkActor2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkActor2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkActor2D::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkActor2D::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkActor2D::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkMapper2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper2D"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkActor2D::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper2D *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkActor2D::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayerNumber(temp0);
    }
    else
    {
      op->vtkActor2D::SetLayerNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayerNumber() :
      op->vtkActor2D::GetLayerNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkActor2D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkActor2D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPositionCoordinate() :
      op->vtkActor2D::GetPositionCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkActor2D::SetPosition(temp0);
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
PyvtkActor2D_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkActor2D::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkActor2D_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkActor2D_SetPosition_s1(self, args);
    case 2:
      return PyvtkActor2D_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkActor2D_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkActor2D::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplayPosition(temp0, temp1);
    }
    else
    {
      op->vtkActor2D::SetDisplayPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetPosition2Coordinate() :
      op->vtkActor2D::GetPosition2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->SetPosition2(temp0);
    }
    else
    {
      op->vtkActor2D::SetPosition2(temp0);
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
PyvtkActor2D_SetPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition2(temp0, temp1);
    }
    else
    {
      op->vtkActor2D::SetPosition2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkActor2D_SetPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkActor2D_SetPosition2_s1(self, args);
    case 2:
      return PyvtkActor2D_SetPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition2");
  return nullptr;
}


static PyObject *
PyvtkActor2D_GetPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition2() :
      op->vtkActor2D::GetPosition2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidth(temp0);
    }
    else
    {
      op->vtkActor2D::SetWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkActor2D::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeight(temp0);
    }
    else
    {
      op->vtkActor2D::SetHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkActor2D::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkActor2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->vtkActor2D::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->vtkActor2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

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
      op->vtkActor2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetActualPositionCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualPositionCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetActualPositionCoordinate() :
      op->vtkActor2D::GetActualPositionCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkActor2D_GetActualPosition2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualPosition2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkActor2D *op = static_cast<vtkActor2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetActualPosition2Coordinate() :
      op->vtkActor2D::GetActualPosition2Coordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkActor2D_Methods[] = {
  {"IsTypeOf", PyvtkActor2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkActor2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkActor2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkActor2D\nC++: static vtkActor2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkActor2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkActor2D\nC++: vtkActor2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkActor2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkActor2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOverlay", PyvtkActor2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderOpaqueGeometry", PyvtkActor2D_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkActor2D_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkActor2D_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"SetMapper", PyvtkActor2D_SetMapper, METH_VARARGS,
   "SetMapper(self, mapper:vtkMapper2D) -> None\nC++: virtual void SetMapper(vtkMapper2D *mapper)\n\nSet/Get the vtkMapper2D which defines the data to be drawn.\n"},
  {"GetMapper", PyvtkActor2D_GetMapper, METH_VARARGS,
   "GetMapper(self) -> vtkMapper2D\nC++: virtual vtkMapper2D *GetMapper()\n\n"},
  {"SetLayerNumber", PyvtkActor2D_SetLayerNumber, METH_VARARGS,
   "SetLayerNumber(self, _arg:int) -> None\nC++: virtual void SetLayerNumber(int _arg)\n\nSet/Get the layer number in the overlay planes into which to\nrender.\n"},
  {"GetLayerNumber", PyvtkActor2D_GetLayerNumber, METH_VARARGS,
   "GetLayerNumber(self) -> int\nC++: virtual int GetLayerNumber()\n\n"},
  {"GetProperty", PyvtkActor2D_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nReturns this actor's vtkProperty2D.  Creates a property if one\ndoesn't already exist.\n"},
  {"SetProperty", PyvtkActor2D_SetProperty, METH_VARARGS,
   "SetProperty(self, __a:vtkProperty2D) -> None\nC++: virtual void SetProperty(vtkProperty2D *)\n\nSet this vtkProp's vtkProperty2D.\n"},
  {"GetPositionCoordinate", PyvtkActor2D_GetPositionCoordinate, METH_VARARGS,
   "GetPositionCoordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPositionCoordinate()\n\nGet the PositionCoordinate instance of vtkCoordinate. This is\nused for for complicated or relative positioning. The position\nvariable controls the lower left corner of the Actor2D\n"},
  {"SetPosition", PyvtkActor2D_SetPosition, METH_VARARGS,
   "SetPosition(self, x:[float, float]) -> None\nC++: virtual void SetPosition(double x[2])\nSetPosition(self, x:float, y:float) -> None\nC++: virtual void SetPosition(double x, double y)\n\n"},
  {"GetPosition", PyvtkActor2D_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float)\nC++: virtual double *GetPosition()\n\n"},
  {"SetDisplayPosition", PyvtkActor2D_SetDisplayPosition, METH_VARARGS,
   "SetDisplayPosition(self, __a:int, __b:int) -> None\nC++: void SetDisplayPosition(int, int)\n\nSet the Prop2D's position in display coordinates.\n"},
  {"GetPosition2Coordinate", PyvtkActor2D_GetPosition2Coordinate, METH_VARARGS,
   "GetPosition2Coordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPosition2Coordinate()\n\nAccess the Position2 instance variable. This variable controls\nthe upper right corner of the Actor2D. It is by default relative\nto Position and in normalized viewport coordinates. Some 2D actor\nsubclasses ignore the position2 variable\n"},
  {"SetPosition2", PyvtkActor2D_SetPosition2, METH_VARARGS,
   "SetPosition2(self, x:[float, float]) -> None\nC++: virtual void SetPosition2(double x[2])\nSetPosition2(self, x:float, y:float) -> None\nC++: virtual void SetPosition2(double x, double y)\n\n"},
  {"GetPosition2", PyvtkActor2D_GetPosition2, METH_VARARGS,
   "GetPosition2(self) -> (float, float)\nC++: virtual double *GetPosition2()\n\n"},
  {"SetWidth", PyvtkActor2D_SetWidth, METH_VARARGS,
   "SetWidth(self, w:float) -> None\nC++: void SetWidth(double w)\n\nSet/Get the height and width of the Actor2D. The value is\nexpressed as a fraction of the viewport. This really is just\nanother way of setting the Position2 instance variable.\n"},
  {"GetWidth", PyvtkActor2D_GetWidth, METH_VARARGS,
   "GetWidth(self) -> float\nC++: double GetWidth()\n\n"},
  {"SetHeight", PyvtkActor2D_SetHeight, METH_VARARGS,
   "SetHeight(self, h:float) -> None\nC++: void SetHeight(double h)\n\n"},
  {"GetHeight", PyvtkActor2D_GetHeight, METH_VARARGS,
   "GetHeight(self) -> float\nC++: double GetHeight()\n\n"},
  {"GetMTime", PyvtkActor2D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this objects MTime.\n"},
  {"GetActors2D", PyvtkActor2D_GetActors2D, METH_VARARGS,
   "GetActors2D(self, pc:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *pc) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"ShallowCopy", PyvtkActor2D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this vtkActor2D. Overloads the virtual vtkProp\nmethod.\n"},
  {"ReleaseGraphicsResources", PyvtkActor2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetActualPositionCoordinate", PyvtkActor2D_GetActualPositionCoordinate, METH_VARARGS,
   "GetActualPositionCoordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetActualPositionCoordinate()\n\nReturn the actual vtkCoordinate reference that the mapper should\nuse to position the actor. This is used internally by the mappers\nand should be overridden in specialized subclasses and otherwise\nignored.\n"},
  {"GetActualPosition2Coordinate", PyvtkActor2D_GetActualPosition2Coordinate, METH_VARARGS,
   "GetActualPosition2Coordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetActualPosition2Coordinate()\n\nReturn the actual vtkCoordinate reference that the mapper should\nuse to position the actor. This is used internally by the mappers\nand should be overridden in specialized subclasses and otherwise\nignored.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkActor2D_Doc =
  "vtkActor2D - a actor that draws 2D data\n\n"
  "Superclass: vtkProp\n\n"
  "vtkActor2D is similar to vtkActor, but it is made to be used with two\n"
  "dimensional images and annotation.  vtkActor2D has a position but\n"
  "does not use a transformation matrix like vtkActor (see the\n"
  "superclass vtkProp for information on positioning vtkActor2D). \n"
  "vtkActor2D has a reference to a vtkMapper2D object which does the\n"
  "rendering.\n\n"
  "@sa\n"
  "vtkProp  vtkMapper2D vtkProperty2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkActor2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkActor2D", // tp_name
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
  PyvtkActor2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkActor2D_StaticNew()
{
  return vtkActor2D::New();
}

PyObject *PyvtkActor2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkActor2D_Type, PyvtkActor2D_Methods,
    "vtkActor2D",
 &PyvtkActor2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkProp_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkActor2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkActor2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkActor2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

