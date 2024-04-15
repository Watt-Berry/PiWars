// python wrapper for vtkAnnotatedCubeActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAnnotatedCubeActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnnotatedCubeActor(PyObject *dict); }
extern "C" { PyObject *PyvtkAnnotatedCubeActor_ClassNew(); }


static PyObject *
PyvtkAnnotatedCubeActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnnotatedCubeActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnnotatedCubeActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnnotatedCubeActor *tempr = vtkAnnotatedCubeActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotatedCubeActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnnotatedCubeActor::NewInstance());

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
PyvtkAnnotatedCubeActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAnnotatedCubeActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAnnotatedCubeActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->vtkAnnotatedCubeActor::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkAnnotatedCubeActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkAnnotatedCubeActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkAnnotatedCubeActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->vtkAnnotatedCubeActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->vtkAnnotatedCubeActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

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
      op->vtkAnnotatedCubeActor::GetBounds(temp0);
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
PyvtkAnnotatedCubeActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAnnotatedCubeActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAnnotatedCubeActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAnnotatedCubeActor_GetBounds_s1(self, args);
    case 0:
      return PyvtkAnnotatedCubeActor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAnnotatedCubeActor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetFaceTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFaceTextScale(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetFaceTextScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetFaceTextScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceTextScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFaceTextScale() :
      op->vtkAnnotatedCubeActor::GetFaceTextScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXPlusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetXPlusFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetXMinusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetXMinusFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYPlusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetYPlusFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetYMinusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetYMinusFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZPlusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZPlusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZPlusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetZPlusFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZMinusFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMinusFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetZMinusFaceProperty() :
      op->vtkAnnotatedCubeActor::GetZMinusFaceProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetCubeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCubeProperty() :
      op->vtkAnnotatedCubeActor::GetCubeProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetTextEdgesProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextEdgesProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetTextEdgesProperty() :
      op->vtkAnnotatedCubeActor::GetTextEdgesProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXPlusFaceText(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetXPlusFaceText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXPlusFaceText() :
      op->vtkAnnotatedCubeActor::GetXPlusFaceText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXMinusFaceText(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetXMinusFaceText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXMinusFaceText() :
      op->vtkAnnotatedCubeActor::GetXMinusFaceText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYPlusFaceText(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetYPlusFaceText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYPlusFaceText() :
      op->vtkAnnotatedCubeActor::GetYPlusFaceText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYMinusFaceText(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetYMinusFaceText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYMinusFaceText() :
      op->vtkAnnotatedCubeActor::GetYMinusFaceText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZPlusFaceText(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetZPlusFaceText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZPlusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZPlusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZPlusFaceText() :
      op->vtkAnnotatedCubeActor::GetZPlusFaceText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZMinusFaceText(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetZMinusFaceText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZMinusFaceText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZMinusFaceText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZMinusFaceText() :
      op->vtkAnnotatedCubeActor::GetZMinusFaceText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetTextEdgesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextEdgesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextEdgesVisibility(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetTextEdgesVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetTextEdgesVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextEdgesVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextEdgesVisibility() :
      op->vtkAnnotatedCubeActor::GetTextEdgesVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetCubeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCubeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCubeVisibility(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetCubeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetCubeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCubeVisibility() :
      op->vtkAnnotatedCubeActor::GetCubeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetFaceTextVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaceTextVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFaceTextVisibility(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetFaceTextVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetFaceTextVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceTextVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaceTextVisibility() :
      op->vtkAnnotatedCubeActor::GetFaceTextVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetXFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXFaceTextRotation(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetXFaceTextRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetXFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXFaceTextRotation() :
      op->vtkAnnotatedCubeActor::GetXFaceTextRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetYFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYFaceTextRotation(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetYFaceTextRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetYFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYFaceTextRotation() :
      op->vtkAnnotatedCubeActor::GetYFaceTextRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_SetZFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZFaceTextRotation(temp0);
    }
    else
    {
      op->vtkAnnotatedCubeActor::SetZFaceTextRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetZFaceTextRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZFaceTextRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZFaceTextRotation() :
      op->vtkAnnotatedCubeActor::GetZFaceTextRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnnotatedCubeActor_GetAssembly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssembly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnnotatedCubeActor *op = static_cast<vtkAnnotatedCubeActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssembly *tempr = (ap.IsBound() ?
      op->GetAssembly() :
      op->vtkAnnotatedCubeActor::GetAssembly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnnotatedCubeActor_Methods[] = {
  {"IsTypeOf", PyvtkAnnotatedCubeActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnnotatedCubeActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnnotatedCubeActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAnnotatedCubeActor\nC++: static vtkAnnotatedCubeActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnnotatedCubeActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAnnotatedCubeActor\nC++: vtkAnnotatedCubeActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAnnotatedCubeActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAnnotatedCubeActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetActors", PyvtkAnnotatedCubeActor_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nFor some exporters and other other operations we must be able to\ncollect all the actors or volumes. These methods are used in that\nprocess.\n"},
  {"RenderOpaqueGeometry", PyvtkAnnotatedCubeActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkAnnotatedCubeActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, viewport:vtkViewport)\n    -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *viewport)\n     override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkAnnotatedCubeActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ShallowCopy", PyvtkAnnotatedCubeActor_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an axes actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"ReleaseGraphicsResources", PyvtkAnnotatedCubeActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetBounds", PyvtkAnnotatedCubeActor_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\nGetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n(The method GetBounds(double bounds[6]) is available from the\nsuperclass.)\n"},
  {"GetMTime", PyvtkAnnotatedCubeActor_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {"SetFaceTextScale", PyvtkAnnotatedCubeActor_SetFaceTextScale, METH_VARARGS,
   "SetFaceTextScale(self, __a:float) -> None\nC++: void SetFaceTextScale(double)\n\nSet/Get the scale factor for the face text\n"},
  {"GetFaceTextScale", PyvtkAnnotatedCubeActor_GetFaceTextScale, METH_VARARGS,
   "GetFaceTextScale(self) -> float\nC++: virtual double GetFaceTextScale()\n\n"},
  {"GetXPlusFaceProperty", PyvtkAnnotatedCubeActor_GetXPlusFaceProperty, METH_VARARGS,
   "GetXPlusFaceProperty(self) -> vtkProperty\nC++: vtkProperty *GetXPlusFaceProperty()\n\nGet the individual face text properties.\n"},
  {"GetXMinusFaceProperty", PyvtkAnnotatedCubeActor_GetXMinusFaceProperty, METH_VARARGS,
   "GetXMinusFaceProperty(self) -> vtkProperty\nC++: vtkProperty *GetXMinusFaceProperty()\n\n"},
  {"GetYPlusFaceProperty", PyvtkAnnotatedCubeActor_GetYPlusFaceProperty, METH_VARARGS,
   "GetYPlusFaceProperty(self) -> vtkProperty\nC++: vtkProperty *GetYPlusFaceProperty()\n\n"},
  {"GetYMinusFaceProperty", PyvtkAnnotatedCubeActor_GetYMinusFaceProperty, METH_VARARGS,
   "GetYMinusFaceProperty(self) -> vtkProperty\nC++: vtkProperty *GetYMinusFaceProperty()\n\n"},
  {"GetZPlusFaceProperty", PyvtkAnnotatedCubeActor_GetZPlusFaceProperty, METH_VARARGS,
   "GetZPlusFaceProperty(self) -> vtkProperty\nC++: vtkProperty *GetZPlusFaceProperty()\n\n"},
  {"GetZMinusFaceProperty", PyvtkAnnotatedCubeActor_GetZMinusFaceProperty, METH_VARARGS,
   "GetZMinusFaceProperty(self) -> vtkProperty\nC++: vtkProperty *GetZMinusFaceProperty()\n\n"},
  {"GetCubeProperty", PyvtkAnnotatedCubeActor_GetCubeProperty, METH_VARARGS,
   "GetCubeProperty(self) -> vtkProperty\nC++: vtkProperty *GetCubeProperty()\n\nGet the cube properties.\n"},
  {"GetTextEdgesProperty", PyvtkAnnotatedCubeActor_GetTextEdgesProperty, METH_VARARGS,
   "GetTextEdgesProperty(self) -> vtkProperty\nC++: vtkProperty *GetTextEdgesProperty()\n\nGet the text edges properties.\n"},
  {"SetXPlusFaceText", PyvtkAnnotatedCubeActor_SetXPlusFaceText, METH_VARARGS,
   "SetXPlusFaceText(self, _arg:str) -> None\nC++: virtual void SetXPlusFaceText(const char *_arg)\n\nSet/get the face text.\n"},
  {"GetXPlusFaceText", PyvtkAnnotatedCubeActor_GetXPlusFaceText, METH_VARARGS,
   "GetXPlusFaceText(self) -> str\nC++: virtual char *GetXPlusFaceText()\n\n"},
  {"SetXMinusFaceText", PyvtkAnnotatedCubeActor_SetXMinusFaceText, METH_VARARGS,
   "SetXMinusFaceText(self, _arg:str) -> None\nC++: virtual void SetXMinusFaceText(const char *_arg)\n\n"},
  {"GetXMinusFaceText", PyvtkAnnotatedCubeActor_GetXMinusFaceText, METH_VARARGS,
   "GetXMinusFaceText(self) -> str\nC++: virtual char *GetXMinusFaceText()\n\n"},
  {"SetYPlusFaceText", PyvtkAnnotatedCubeActor_SetYPlusFaceText, METH_VARARGS,
   "SetYPlusFaceText(self, _arg:str) -> None\nC++: virtual void SetYPlusFaceText(const char *_arg)\n\n"},
  {"GetYPlusFaceText", PyvtkAnnotatedCubeActor_GetYPlusFaceText, METH_VARARGS,
   "GetYPlusFaceText(self) -> str\nC++: virtual char *GetYPlusFaceText()\n\n"},
  {"SetYMinusFaceText", PyvtkAnnotatedCubeActor_SetYMinusFaceText, METH_VARARGS,
   "SetYMinusFaceText(self, _arg:str) -> None\nC++: virtual void SetYMinusFaceText(const char *_arg)\n\n"},
  {"GetYMinusFaceText", PyvtkAnnotatedCubeActor_GetYMinusFaceText, METH_VARARGS,
   "GetYMinusFaceText(self) -> str\nC++: virtual char *GetYMinusFaceText()\n\n"},
  {"SetZPlusFaceText", PyvtkAnnotatedCubeActor_SetZPlusFaceText, METH_VARARGS,
   "SetZPlusFaceText(self, _arg:str) -> None\nC++: virtual void SetZPlusFaceText(const char *_arg)\n\n"},
  {"GetZPlusFaceText", PyvtkAnnotatedCubeActor_GetZPlusFaceText, METH_VARARGS,
   "GetZPlusFaceText(self) -> str\nC++: virtual char *GetZPlusFaceText()\n\n"},
  {"SetZMinusFaceText", PyvtkAnnotatedCubeActor_SetZMinusFaceText, METH_VARARGS,
   "SetZMinusFaceText(self, _arg:str) -> None\nC++: virtual void SetZMinusFaceText(const char *_arg)\n\n"},
  {"GetZMinusFaceText", PyvtkAnnotatedCubeActor_GetZMinusFaceText, METH_VARARGS,
   "GetZMinusFaceText(self) -> str\nC++: virtual char *GetZMinusFaceText()\n\n"},
  {"SetTextEdgesVisibility", PyvtkAnnotatedCubeActor_SetTextEdgesVisibility, METH_VARARGS,
   "SetTextEdgesVisibility(self, __a:int) -> None\nC++: void SetTextEdgesVisibility(int)\n\nEnable/disable drawing the vector text edges.\n"},
  {"GetTextEdgesVisibility", PyvtkAnnotatedCubeActor_GetTextEdgesVisibility, METH_VARARGS,
   "GetTextEdgesVisibility(self) -> int\nC++: int GetTextEdgesVisibility()\n\n"},
  {"SetCubeVisibility", PyvtkAnnotatedCubeActor_SetCubeVisibility, METH_VARARGS,
   "SetCubeVisibility(self, __a:int) -> None\nC++: void SetCubeVisibility(int)\n\nEnable/disable drawing the cube.\n"},
  {"GetCubeVisibility", PyvtkAnnotatedCubeActor_GetCubeVisibility, METH_VARARGS,
   "GetCubeVisibility(self) -> int\nC++: int GetCubeVisibility()\n\n"},
  {"SetFaceTextVisibility", PyvtkAnnotatedCubeActor_SetFaceTextVisibility, METH_VARARGS,
   "SetFaceTextVisibility(self, __a:int) -> None\nC++: void SetFaceTextVisibility(int)\n\nEnable/disable drawing the vector text.\n"},
  {"GetFaceTextVisibility", PyvtkAnnotatedCubeActor_GetFaceTextVisibility, METH_VARARGS,
   "GetFaceTextVisibility(self) -> int\nC++: int GetFaceTextVisibility()\n\n"},
  {"SetXFaceTextRotation", PyvtkAnnotatedCubeActor_SetXFaceTextRotation, METH_VARARGS,
   "SetXFaceTextRotation(self, _arg:float) -> None\nC++: virtual void SetXFaceTextRotation(double _arg)\n\nAugment individual face text orientations.\n"},
  {"GetXFaceTextRotation", PyvtkAnnotatedCubeActor_GetXFaceTextRotation, METH_VARARGS,
   "GetXFaceTextRotation(self) -> float\nC++: virtual double GetXFaceTextRotation()\n\n"},
  {"SetYFaceTextRotation", PyvtkAnnotatedCubeActor_SetYFaceTextRotation, METH_VARARGS,
   "SetYFaceTextRotation(self, _arg:float) -> None\nC++: virtual void SetYFaceTextRotation(double _arg)\n\n"},
  {"GetYFaceTextRotation", PyvtkAnnotatedCubeActor_GetYFaceTextRotation, METH_VARARGS,
   "GetYFaceTextRotation(self) -> float\nC++: virtual double GetYFaceTextRotation()\n\n"},
  {"SetZFaceTextRotation", PyvtkAnnotatedCubeActor_SetZFaceTextRotation, METH_VARARGS,
   "SetZFaceTextRotation(self, _arg:float) -> None\nC++: virtual void SetZFaceTextRotation(double _arg)\n\n"},
  {"GetZFaceTextRotation", PyvtkAnnotatedCubeActor_GetZFaceTextRotation, METH_VARARGS,
   "GetZFaceTextRotation(self) -> float\nC++: virtual double GetZFaceTextRotation()\n\n"},
  {"GetAssembly", PyvtkAnnotatedCubeActor_GetAssembly, METH_VARARGS,
   "GetAssembly(self) -> vtkAssembly\nC++: vtkAssembly *GetAssembly()\n\nGet the assembly so that user supplied transforms can be applied\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAnnotatedCubeActor_Doc =
  "vtkAnnotatedCubeActor - a 3D cube with face labels\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkAnnotatedCubeActor is a hybrid 3D actor used to represent an\n"
  "anatomical orientation marker in a scene.  The class consists of a 3D\n"
  "unit cube centered on the origin with each face labelled in\n"
  "correspondence to a particular coordinate direction.  For example,\n"
  "with Cartesian directions, the user defined text labels could be: +X,\n"
  "-X, +Y, -Y, +Z, -Z, while for anatomical directions: A, P, L, R, S,\n"
  "I.  Text is automatically centered on each cube face and is not\n"
  "restriceted to single characters. In addition to or in replace of a\n"
  "solid text label representation, the outline edges of the labels can\n"
  "be displayed.  The individual properties of the cube, face labels and\n"
  "text outlines can be manipulated as can their visibility.\n\n"
  "@warning\n"
  "vtkAnnotatedCubeActor is primarily intended for use with\n"
  "vtkOrientationMarkerWidget. The cube face text is generated by\n"
  "vtkVectorText and therefore the font attributes are restricted.\n\n"
  "@sa\n"
  "vtkAxesActor vtkOrientationMarkerWidget vtkVectorText\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnnotatedCubeActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkAnnotatedCubeActor", // tp_name
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
  PyvtkAnnotatedCubeActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnnotatedCubeActor_StaticNew()
{
  return vtkAnnotatedCubeActor::New();
}

PyObject *PyvtkAnnotatedCubeActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAnnotatedCubeActor_Type, PyvtkAnnotatedCubeActor_Methods,
    "vtkAnnotatedCubeActor",
 &PyvtkAnnotatedCubeActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProp3D");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnnotatedCubeActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnnotatedCubeActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnnotatedCubeActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

