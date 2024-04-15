// python wrapper for vtkAxesActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAxesActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAxesActor(PyObject *dict); }
extern "C" { PyObject *PyvtkAxesActor_ClassNew(); }


static PyObject *
PyvtkAxesActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAxesActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAxesActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAxesActor *tempr = vtkAxesActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxesActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAxesActor::NewInstance());

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
PyvtkAxesActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAxesActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAxesActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAxesActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAxesActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkAxesActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAxesActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->vtkAxesActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkAxesActor::GetBounds(temp0);
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
PyvtkAxesActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAxesActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAxesActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxesActor_GetBounds_s1(self, args);
    case 0:
      return PyvtkAxesActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkAxesActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAxesActor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetRedrawMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedrawMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetRedrawMTime() :
      op->vtkAxesActor::GetRedrawMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTotalLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetTotalLength(temp0);
    }
    else
    {
      op->vtkAxesActor::SetTotalLength(temp0);
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
PyvtkAxesActor_SetTotalLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetTotalLength(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxesActor::SetTotalLength(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxesActor_SetTotalLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxesActor_SetTotalLength_s1(self, args);
    case 3:
      return PyvtkAxesActor_SetTotalLength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTotalLength");
  return nullptr;
}


static PyObject *
PyvtkAxesActor_GetTotalLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTotalLength() :
      op->vtkAxesActor::GetTotalLength());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetNormalizedShaftLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedShaftLength(temp0);
    }
    else
    {
      op->vtkAxesActor::SetNormalizedShaftLength(temp0);
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
PyvtkAxesActor_SetNormalizedShaftLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedShaftLength(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxesActor::SetNormalizedShaftLength(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxesActor_SetNormalizedShaftLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxesActor_SetNormalizedShaftLength_s1(self, args);
    case 3:
      return PyvtkAxesActor_SetNormalizedShaftLength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedShaftLength");
  return nullptr;
}


static PyObject *
PyvtkAxesActor_GetNormalizedShaftLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedShaftLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormalizedShaftLength() :
      op->vtkAxesActor::GetNormalizedShaftLength());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetNormalizedTipLength_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedTipLength(temp0);
    }
    else
    {
      op->vtkAxesActor::SetNormalizedTipLength(temp0);
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
PyvtkAxesActor_SetNormalizedTipLength_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedTipLength(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxesActor::SetNormalizedTipLength(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxesActor_SetNormalizedTipLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxesActor_SetNormalizedTipLength_s1(self, args);
    case 3:
      return PyvtkAxesActor_SetNormalizedTipLength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedTipLength");
  return nullptr;
}


static PyObject *
PyvtkAxesActor_GetNormalizedTipLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedTipLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormalizedTipLength() :
      op->vtkAxesActor::GetNormalizedTipLength());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetNormalizedLabelPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedLabelPosition(temp0);
    }
    else
    {
      op->vtkAxesActor::SetNormalizedLabelPosition(temp0);
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
PyvtkAxesActor_SetNormalizedLabelPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizedLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

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
      op->SetNormalizedLabelPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAxesActor::SetNormalizedLabelPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAxesActor_SetNormalizedLabelPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAxesActor_SetNormalizedLabelPosition_s1(self, args);
    case 3:
      return PyvtkAxesActor_SetNormalizedLabelPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormalizedLabelPosition");
  return nullptr;
}


static PyObject *
PyvtkAxesActor_GetNormalizedLabelPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedLabelPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormalizedLabelPosition() :
      op->vtkAxesActor::GetNormalizedLabelPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetConeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConeResolution(temp0);
    }
    else
    {
      op->vtkAxesActor::SetConeResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConeResolutionMinValue() :
      op->vtkAxesActor::GetConeResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConeResolutionMaxValue() :
      op->vtkAxesActor::GetConeResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConeResolution() :
      op->vtkAxesActor::GetConeResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSphereResolution(temp0);
    }
    else
    {
      op->vtkAxesActor::SetSphereResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolutionMinValue() :
      op->vtkAxesActor::GetSphereResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolutionMaxValue() :
      op->vtkAxesActor::GetSphereResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolution() :
      op->vtkAxesActor::GetSphereResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetCylinderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCylinderResolution(temp0);
    }
    else
    {
      op->vtkAxesActor::SetCylinderResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolutionMinValue() :
      op->vtkAxesActor::GetCylinderResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolutionMaxValue() :
      op->vtkAxesActor::GetCylinderResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCylinderResolution() :
      op->vtkAxesActor::GetCylinderResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetConeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConeRadius(temp0);
    }
    else
    {
      op->vtkAxesActor::SetConeRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConeRadiusMinValue() :
      op->vtkAxesActor::GetConeRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConeRadiusMaxValue() :
      op->vtkAxesActor::GetConeRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetConeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConeRadius() :
      op->vtkAxesActor::GetConeRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSphereRadius(temp0);
    }
    else
    {
      op->vtkAxesActor::SetSphereRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSphereRadiusMinValue() :
      op->vtkAxesActor::GetSphereRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSphereRadiusMaxValue() :
      op->vtkAxesActor::GetSphereRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetSphereRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSphereRadius() :
      op->vtkAxesActor::GetSphereRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetCylinderRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCylinderRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCylinderRadius(temp0);
    }
    else
    {
      op->vtkAxesActor::SetCylinderRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCylinderRadiusMinValue() :
      op->vtkAxesActor::GetCylinderRadiusMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCylinderRadiusMaxValue() :
      op->vtkAxesActor::GetCylinderRadiusMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetCylinderRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCylinderRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCylinderRadius() :
      op->vtkAxesActor::GetCylinderRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetShaftType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShaftType(temp0);
    }
    else
    {
      op->vtkAxesActor::SetShaftType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetShaftTypeToCylinder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToCylinder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShaftTypeToCylinder();
    }
    else
    {
      op->vtkAxesActor::SetShaftTypeToCylinder();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetShaftTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShaftTypeToLine();
    }
    else
    {
      op->vtkAxesActor::SetShaftTypeToLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetShaftTypeToUserDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShaftTypeToUserDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShaftTypeToUserDefined();
    }
    else
    {
      op->vtkAxesActor::SetShaftTypeToUserDefined();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetShaftType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaftType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShaftType() :
      op->vtkAxesActor::GetShaftType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTipType(temp0);
    }
    else
    {
      op->vtkAxesActor::SetTipType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTipTypeToCone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToCone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTipTypeToCone();
    }
    else
    {
      op->vtkAxesActor::SetTipTypeToCone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTipTypeToSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTipTypeToSphere();
    }
    else
    {
      op->vtkAxesActor::SetTipTypeToSphere();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetTipTypeToUserDefined(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTipTypeToUserDefined");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTipTypeToUserDefined();
    }
    else
    {
      op->vtkAxesActor::SetTipTypeToUserDefined();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetTipType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTipType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTipType() :
      op->vtkAxesActor::GetTipType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetUserDefinedTip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserDefinedTip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetUserDefinedTip(temp0);
    }
    else
    {
      op->vtkAxesActor::SetUserDefinedTip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetUserDefinedTip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedTip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUserDefinedTip() :
      op->vtkAxesActor::GetUserDefinedTip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetUserDefinedShaft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserDefinedShaft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetUserDefinedShaft(temp0);
    }
    else
    {
      op->vtkAxesActor::SetUserDefinedShaft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetUserDefinedShaft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedShaft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetUserDefinedShaft() :
      op->vtkAxesActor::GetUserDefinedShaft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetXAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisTipProperty() :
      op->vtkAxesActor::GetXAxisTipProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetYAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisTipProperty() :
      op->vtkAxesActor::GetYAxisTipProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetZAxisTipProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisTipProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisTipProperty() :
      op->vtkAxesActor::GetZAxisTipProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetXAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXAxisShaftProperty() :
      op->vtkAxesActor::GetXAxisShaftProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetYAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYAxisShaftProperty() :
      op->vtkAxesActor::GetYAxisShaftProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetZAxisShaftProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisShaftProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZAxisShaftProperty() :
      op->vtkAxesActor::GetZAxisShaftProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetXAxisCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetXAxisCaptionActor2D() :
      op->vtkAxesActor::GetXAxisCaptionActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetYAxisCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetYAxisCaptionActor2D() :
      op->vtkAxesActor::GetYAxisCaptionActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetZAxisCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCaptionActor2D *tempr = (ap.IsBound() ?
      op->GetZAxisCaptionActor2D() :
      op->vtkAxesActor::GetZAxisCaptionActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetXAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAxisLabelText(temp0);
    }
    else
    {
      op->vtkAxesActor::SetXAxisLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetXAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXAxisLabelText() :
      op->vtkAxesActor::GetXAxisLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetYAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAxisLabelText(temp0);
    }
    else
    {
      op->vtkAxesActor::SetYAxisLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetYAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYAxisLabelText() :
      op->vtkAxesActor::GetYAxisLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetZAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZAxisLabelText(temp0);
    }
    else
    {
      op->vtkAxesActor::SetZAxisLabelText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetZAxisLabelText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZAxisLabelText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZAxisLabelText() :
      op->vtkAxesActor::GetZAxisLabelText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_SetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabels(temp0);
    }
    else
    {
      op->vtkAxesActor::SetAxisLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_GetAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabels() :
      op->vtkAxesActor::GetAxisLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_AxisLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisLabelsOn();
    }
    else
    {
      op->vtkAxesActor::AxisLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAxesActor_AxisLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxesActor *op = static_cast<vtkAxesActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AxisLabelsOff();
    }
    else
    {
      op->vtkAxesActor::AxisLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAxesActor_Methods[] = {
  {"IsTypeOf", PyvtkAxesActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAxesActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAxesActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAxesActor\nC++: static vtkAxesActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAxesActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAxesActor\nC++: vtkAxesActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAxesActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAxesActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetActors", PyvtkAxesActor_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"RenderOpaqueGeometry", PyvtkAxesActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAxesActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"RenderOverlay", PyvtkAxesActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkAxesActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ShallowCopy", PyvtkAxesActor_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an axes actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"ReleaseGraphicsResources", PyvtkAxesActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetBounds", PyvtkAxesActor_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\nGetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n(The method GetBounds(double bounds[6]) is available from the\nsuperclass.)\n"},
  {"GetMTime", PyvtkAxesActor_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {"GetRedrawMTime", PyvtkAxesActor_GetRedrawMTime, METH_VARARGS,
   "GetRedrawMTime(self) -> int\nC++: vtkMTimeType GetRedrawMTime() override;\n\nReturn the mtime of anything that would cause the rendered image\nto appear differently. Usually this involves checking the mtime\nof the prop plus anything else it depends on such as properties,\ntextures etc.\n"},
  {"SetTotalLength", PyvtkAxesActor_SetTotalLength, METH_VARARGS,
   "SetTotalLength(self, v:[float, float, float]) -> None\nC++: void SetTotalLength(double v[3])\nSetTotalLength(self, x:float, y:float, z:float) -> None\nC++: void SetTotalLength(double x, double y, double z)\n\nSet the total length of the axes in 3 dimensions.\n"},
  {"GetTotalLength", PyvtkAxesActor_GetTotalLength, METH_VARARGS,
   "GetTotalLength(self) -> (float, float, float)\nC++: virtual double *GetTotalLength()\n\n"},
  {"SetNormalizedShaftLength", PyvtkAxesActor_SetNormalizedShaftLength, METH_VARARGS,
   "SetNormalizedShaftLength(self, v:[float, float, float]) -> None\nC++: void SetNormalizedShaftLength(double v[3])\nSetNormalizedShaftLength(self, x:float, y:float, z:float) -> None\nC++: void SetNormalizedShaftLength(double x, double y, double z)\n\nSet the normalized (0-1) length of the shaft.\n"},
  {"GetNormalizedShaftLength", PyvtkAxesActor_GetNormalizedShaftLength, METH_VARARGS,
   "GetNormalizedShaftLength(self) -> (float, float, float)\nC++: virtual double *GetNormalizedShaftLength()\n\n"},
  {"SetNormalizedTipLength", PyvtkAxesActor_SetNormalizedTipLength, METH_VARARGS,
   "SetNormalizedTipLength(self, v:[float, float, float]) -> None\nC++: void SetNormalizedTipLength(double v[3])\nSetNormalizedTipLength(self, x:float, y:float, z:float) -> None\nC++: void SetNormalizedTipLength(double x, double y, double z)\n\nSet the normalized (0-1) length of the tip.  Normally, this would\nbe 1 - the normalized length of the shaft.\n"},
  {"GetNormalizedTipLength", PyvtkAxesActor_GetNormalizedTipLength, METH_VARARGS,
   "GetNormalizedTipLength(self) -> (float, float, float)\nC++: virtual double *GetNormalizedTipLength()\n\n"},
  {"SetNormalizedLabelPosition", PyvtkAxesActor_SetNormalizedLabelPosition, METH_VARARGS,
   "SetNormalizedLabelPosition(self, v:[float, float, float]) -> None\nC++: void SetNormalizedLabelPosition(double v[3])\nSetNormalizedLabelPosition(self, x:float, y:float, z:float)\n    -> None\nC++: void SetNormalizedLabelPosition(double x, double y, double z)\n\nSet the normalized (0-1) position of the label along the length\nof the shaft.  A value > 1 is permissible.\n"},
  {"GetNormalizedLabelPosition", PyvtkAxesActor_GetNormalizedLabelPosition, METH_VARARGS,
   "GetNormalizedLabelPosition(self) -> (float, float, float)\nC++: virtual double *GetNormalizedLabelPosition()\n\n"},
  {"SetConeResolution", PyvtkAxesActor_SetConeResolution, METH_VARARGS,
   "SetConeResolution(self, _arg:int) -> None\nC++: virtual void SetConeResolution(int _arg)\n\nSet/get the resolution of the pieces of the axes actor.\n"},
  {"GetConeResolutionMinValue", PyvtkAxesActor_GetConeResolutionMinValue, METH_VARARGS,
   "GetConeResolutionMinValue(self) -> int\nC++: virtual int GetConeResolutionMinValue()\n\n"},
  {"GetConeResolutionMaxValue", PyvtkAxesActor_GetConeResolutionMaxValue, METH_VARARGS,
   "GetConeResolutionMaxValue(self) -> int\nC++: virtual int GetConeResolutionMaxValue()\n\n"},
  {"GetConeResolution", PyvtkAxesActor_GetConeResolution, METH_VARARGS,
   "GetConeResolution(self) -> int\nC++: virtual int GetConeResolution()\n\n"},
  {"SetSphereResolution", PyvtkAxesActor_SetSphereResolution, METH_VARARGS,
   "SetSphereResolution(self, _arg:int) -> None\nC++: virtual void SetSphereResolution(int _arg)\n\n"},
  {"GetSphereResolutionMinValue", PyvtkAxesActor_GetSphereResolutionMinValue, METH_VARARGS,
   "GetSphereResolutionMinValue(self) -> int\nC++: virtual int GetSphereResolutionMinValue()\n\n"},
  {"GetSphereResolutionMaxValue", PyvtkAxesActor_GetSphereResolutionMaxValue, METH_VARARGS,
   "GetSphereResolutionMaxValue(self) -> int\nC++: virtual int GetSphereResolutionMaxValue()\n\n"},
  {"GetSphereResolution", PyvtkAxesActor_GetSphereResolution, METH_VARARGS,
   "GetSphereResolution(self) -> int\nC++: virtual int GetSphereResolution()\n\n"},
  {"SetCylinderResolution", PyvtkAxesActor_SetCylinderResolution, METH_VARARGS,
   "SetCylinderResolution(self, _arg:int) -> None\nC++: virtual void SetCylinderResolution(int _arg)\n\n"},
  {"GetCylinderResolutionMinValue", PyvtkAxesActor_GetCylinderResolutionMinValue, METH_VARARGS,
   "GetCylinderResolutionMinValue(self) -> int\nC++: virtual int GetCylinderResolutionMinValue()\n\n"},
  {"GetCylinderResolutionMaxValue", PyvtkAxesActor_GetCylinderResolutionMaxValue, METH_VARARGS,
   "GetCylinderResolutionMaxValue(self) -> int\nC++: virtual int GetCylinderResolutionMaxValue()\n\n"},
  {"GetCylinderResolution", PyvtkAxesActor_GetCylinderResolution, METH_VARARGS,
   "GetCylinderResolution(self) -> int\nC++: virtual int GetCylinderResolution()\n\n"},
  {"SetConeRadius", PyvtkAxesActor_SetConeRadius, METH_VARARGS,
   "SetConeRadius(self, _arg:float) -> None\nC++: virtual void SetConeRadius(double _arg)\n\nSet/get the radius of the pieces of the axes actor.\n"},
  {"GetConeRadiusMinValue", PyvtkAxesActor_GetConeRadiusMinValue, METH_VARARGS,
   "GetConeRadiusMinValue(self) -> float\nC++: virtual double GetConeRadiusMinValue()\n\n"},
  {"GetConeRadiusMaxValue", PyvtkAxesActor_GetConeRadiusMaxValue, METH_VARARGS,
   "GetConeRadiusMaxValue(self) -> float\nC++: virtual double GetConeRadiusMaxValue()\n\n"},
  {"GetConeRadius", PyvtkAxesActor_GetConeRadius, METH_VARARGS,
   "GetConeRadius(self) -> float\nC++: virtual double GetConeRadius()\n\n"},
  {"SetSphereRadius", PyvtkAxesActor_SetSphereRadius, METH_VARARGS,
   "SetSphereRadius(self, _arg:float) -> None\nC++: virtual void SetSphereRadius(double _arg)\n\n"},
  {"GetSphereRadiusMinValue", PyvtkAxesActor_GetSphereRadiusMinValue, METH_VARARGS,
   "GetSphereRadiusMinValue(self) -> float\nC++: virtual double GetSphereRadiusMinValue()\n\n"},
  {"GetSphereRadiusMaxValue", PyvtkAxesActor_GetSphereRadiusMaxValue, METH_VARARGS,
   "GetSphereRadiusMaxValue(self) -> float\nC++: virtual double GetSphereRadiusMaxValue()\n\n"},
  {"GetSphereRadius", PyvtkAxesActor_GetSphereRadius, METH_VARARGS,
   "GetSphereRadius(self) -> float\nC++: virtual double GetSphereRadius()\n\n"},
  {"SetCylinderRadius", PyvtkAxesActor_SetCylinderRadius, METH_VARARGS,
   "SetCylinderRadius(self, _arg:float) -> None\nC++: virtual void SetCylinderRadius(double _arg)\n\n"},
  {"GetCylinderRadiusMinValue", PyvtkAxesActor_GetCylinderRadiusMinValue, METH_VARARGS,
   "GetCylinderRadiusMinValue(self) -> float\nC++: virtual double GetCylinderRadiusMinValue()\n\n"},
  {"GetCylinderRadiusMaxValue", PyvtkAxesActor_GetCylinderRadiusMaxValue, METH_VARARGS,
   "GetCylinderRadiusMaxValue(self) -> float\nC++: virtual double GetCylinderRadiusMaxValue()\n\n"},
  {"GetCylinderRadius", PyvtkAxesActor_GetCylinderRadius, METH_VARARGS,
   "GetCylinderRadius(self) -> float\nC++: virtual double GetCylinderRadius()\n\n"},
  {"SetShaftType", PyvtkAxesActor_SetShaftType, METH_VARARGS,
   "SetShaftType(self, type:int) -> None\nC++: void SetShaftType(int type)\n\nSet the type of the shaft to a cylinder, line, or user defined\ngeometry.\n"},
  {"SetShaftTypeToCylinder", PyvtkAxesActor_SetShaftTypeToCylinder, METH_VARARGS,
   "SetShaftTypeToCylinder(self) -> None\nC++: void SetShaftTypeToCylinder()\n\n"},
  {"SetShaftTypeToLine", PyvtkAxesActor_SetShaftTypeToLine, METH_VARARGS,
   "SetShaftTypeToLine(self) -> None\nC++: void SetShaftTypeToLine()\n\n"},
  {"SetShaftTypeToUserDefined", PyvtkAxesActor_SetShaftTypeToUserDefined, METH_VARARGS,
   "SetShaftTypeToUserDefined(self) -> None\nC++: void SetShaftTypeToUserDefined()\n\n"},
  {"GetShaftType", PyvtkAxesActor_GetShaftType, METH_VARARGS,
   "GetShaftType(self) -> int\nC++: virtual int GetShaftType()\n\n"},
  {"SetTipType", PyvtkAxesActor_SetTipType, METH_VARARGS,
   "SetTipType(self, type:int) -> None\nC++: void SetTipType(int type)\n\nSet the type of the tip to a cone, sphere, or user defined\ngeometry.\n"},
  {"SetTipTypeToCone", PyvtkAxesActor_SetTipTypeToCone, METH_VARARGS,
   "SetTipTypeToCone(self) -> None\nC++: void SetTipTypeToCone()\n\n"},
  {"SetTipTypeToSphere", PyvtkAxesActor_SetTipTypeToSphere, METH_VARARGS,
   "SetTipTypeToSphere(self) -> None\nC++: void SetTipTypeToSphere()\n\n"},
  {"SetTipTypeToUserDefined", PyvtkAxesActor_SetTipTypeToUserDefined, METH_VARARGS,
   "SetTipTypeToUserDefined(self) -> None\nC++: void SetTipTypeToUserDefined()\n\n"},
  {"GetTipType", PyvtkAxesActor_GetTipType, METH_VARARGS,
   "GetTipType(self) -> int\nC++: virtual int GetTipType()\n\n"},
  {"SetUserDefinedTip", PyvtkAxesActor_SetUserDefinedTip, METH_VARARGS,
   "SetUserDefinedTip(self, __a:vtkPolyData) -> None\nC++: void SetUserDefinedTip(vtkPolyData *)\n\nSet the user defined tip polydata.\n"},
  {"GetUserDefinedTip", PyvtkAxesActor_GetUserDefinedTip, METH_VARARGS,
   "GetUserDefinedTip(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetUserDefinedTip()\n\n"},
  {"SetUserDefinedShaft", PyvtkAxesActor_SetUserDefinedShaft, METH_VARARGS,
   "SetUserDefinedShaft(self, __a:vtkPolyData) -> None\nC++: void SetUserDefinedShaft(vtkPolyData *)\n\nSet the user defined shaft polydata.\n"},
  {"GetUserDefinedShaft", PyvtkAxesActor_GetUserDefinedShaft, METH_VARARGS,
   "GetUserDefinedShaft(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetUserDefinedShaft()\n\n"},
  {"GetXAxisTipProperty", PyvtkAxesActor_GetXAxisTipProperty, METH_VARARGS,
   "GetXAxisTipProperty(self) -> vtkProperty\nC++: vtkProperty *GetXAxisTipProperty()\n\nGet the tip properties.\n"},
  {"GetYAxisTipProperty", PyvtkAxesActor_GetYAxisTipProperty, METH_VARARGS,
   "GetYAxisTipProperty(self) -> vtkProperty\nC++: vtkProperty *GetYAxisTipProperty()\n\n"},
  {"GetZAxisTipProperty", PyvtkAxesActor_GetZAxisTipProperty, METH_VARARGS,
   "GetZAxisTipProperty(self) -> vtkProperty\nC++: vtkProperty *GetZAxisTipProperty()\n\n"},
  {"GetXAxisShaftProperty", PyvtkAxesActor_GetXAxisShaftProperty, METH_VARARGS,
   "GetXAxisShaftProperty(self) -> vtkProperty\nC++: vtkProperty *GetXAxisShaftProperty()\n\nGet the shaft properties.\n"},
  {"GetYAxisShaftProperty", PyvtkAxesActor_GetYAxisShaftProperty, METH_VARARGS,
   "GetYAxisShaftProperty(self) -> vtkProperty\nC++: vtkProperty *GetYAxisShaftProperty()\n\n"},
  {"GetZAxisShaftProperty", PyvtkAxesActor_GetZAxisShaftProperty, METH_VARARGS,
   "GetZAxisShaftProperty(self) -> vtkProperty\nC++: vtkProperty *GetZAxisShaftProperty()\n\n"},
  {"GetXAxisCaptionActor2D", PyvtkAxesActor_GetXAxisCaptionActor2D, METH_VARARGS,
   "GetXAxisCaptionActor2D(self) -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetXAxisCaptionActor2D()\n\nRetrieve handles to the X, Y and Z axis (so that you can set\ntheir text properties for example)\n"},
  {"GetYAxisCaptionActor2D", PyvtkAxesActor_GetYAxisCaptionActor2D, METH_VARARGS,
   "GetYAxisCaptionActor2D(self) -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetYAxisCaptionActor2D()\n\n"},
  {"GetZAxisCaptionActor2D", PyvtkAxesActor_GetZAxisCaptionActor2D, METH_VARARGS,
   "GetZAxisCaptionActor2D(self) -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetZAxisCaptionActor2D()\n\n"},
  {"SetXAxisLabelText", PyvtkAxesActor_SetXAxisLabelText, METH_VARARGS,
   "SetXAxisLabelText(self, _arg:str) -> None\nC++: virtual void SetXAxisLabelText(const char *_arg)\n\nSet/get the label text.\n"},
  {"GetXAxisLabelText", PyvtkAxesActor_GetXAxisLabelText, METH_VARARGS,
   "GetXAxisLabelText(self) -> str\nC++: virtual char *GetXAxisLabelText()\n\n"},
  {"SetYAxisLabelText", PyvtkAxesActor_SetYAxisLabelText, METH_VARARGS,
   "SetYAxisLabelText(self, _arg:str) -> None\nC++: virtual void SetYAxisLabelText(const char *_arg)\n\n"},
  {"GetYAxisLabelText", PyvtkAxesActor_GetYAxisLabelText, METH_VARARGS,
   "GetYAxisLabelText(self) -> str\nC++: virtual char *GetYAxisLabelText()\n\n"},
  {"SetZAxisLabelText", PyvtkAxesActor_SetZAxisLabelText, METH_VARARGS,
   "SetZAxisLabelText(self, _arg:str) -> None\nC++: virtual void SetZAxisLabelText(const char *_arg)\n\n"},
  {"GetZAxisLabelText", PyvtkAxesActor_GetZAxisLabelText, METH_VARARGS,
   "GetZAxisLabelText(self) -> str\nC++: virtual char *GetZAxisLabelText()\n\n"},
  {"SetAxisLabels", PyvtkAxesActor_SetAxisLabels, METH_VARARGS,
   "SetAxisLabels(self, _arg:int) -> None\nC++: virtual void SetAxisLabels(vtkTypeBool _arg)\n\nEnable/disable drawing the axis labels.\n"},
  {"GetAxisLabels", PyvtkAxesActor_GetAxisLabels, METH_VARARGS,
   "GetAxisLabels(self) -> int\nC++: virtual vtkTypeBool GetAxisLabels()\n\n"},
  {"AxisLabelsOn", PyvtkAxesActor_AxisLabelsOn, METH_VARARGS,
   "AxisLabelsOn(self) -> None\nC++: virtual void AxisLabelsOn()\n\n"},
  {"AxisLabelsOff", PyvtkAxesActor_AxisLabelsOff, METH_VARARGS,
   "AxisLabelsOff(self) -> None\nC++: virtual void AxisLabelsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAxesActor_Doc =
  "vtkAxesActor - a 3D axes representation\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkAxesActor is a hybrid 2D/3D actor used to represent 3D axes in a\n"
  "scene. The user can define the geometry to use for the shaft or the\n"
  "tip, and the user can set the text for the three axes. The text will\n"
  "appear to follow the camera since it is implemented by means of\n"
  "vtkCaptionActor2D.  All of the functionality of the underlying\n"
  "vtkCaptionActor2D objects are accessible so that, for instance, the\n"
  "font attributes of the axes text can be manipulated through\n"
  "vtkTextProperty. Since this class inherits from vtkProp3D, one can\n"
  "apply a user transform to the underlying geometry and the positioning\n"
  "of the labels. For example, a rotation transform could be used to\n"
  "generate a left-handed axes representation.\n\n"
  "@par Thanks: Thanks to Goodwin Lawlor for posting a tcl script which\n"
  "featured the use of vtkCaptionActor2D to implement the text labels. \n"
  "This class is based on Paraview's vtkPVAxesActor.\n\n"
  "@warning\n"
  "vtkAxesActor is primarily intended for use with\n"
  "vtkOrientationMarkerWidget. The bounds of this actor are calculated\n"
  "as though the geometry of the axes were symmetric: that is, although\n"
  "only positive axes are visible, bounds are calculated as though\n"
  "negative axes are present too.  This is done intentionally to\n"
  "implement functionality of the camera update mechanism in\n"
  "vtkOrientationMarkerWidget.\n\n"
  "@sa\n"
  "vtkAnnotatedCubeActor vtkOrientationMarkerWidget vtkCaptionActor2D\n"
  "vtkTextProperty\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAxesActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAxesActor", // tp_name
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
  PyvtkAxesActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAxesActor_StaticNew()
{
  return vtkAxesActor::New();
}

PyObject *PyvtkAxesActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAxesActor_Type, PyvtkAxesActor_Methods,
    "vtkAxesActor",
 &PyvtkAxesActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProp3D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "CYLINDER_SHAFT", vtkAxesActor::CYLINDER_SHAFT },
        { "LINE_SHAFT", vtkAxesActor::LINE_SHAFT },
        { "USER_DEFINED_SHAFT", vtkAxesActor::USER_DEFINED_SHAFT },
        { "CONE_TIP", vtkAxesActor::CONE_TIP },
        { "SPHERE_TIP", vtkAxesActor::SPHERE_TIP },
        { "USER_DEFINED_TIP", vtkAxesActor::USER_DEFINED_TIP },
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

void PyVTKAddFile_vtkAxesActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAxesActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAxesActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

