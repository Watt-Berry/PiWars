// python wrapper for vtkCameraRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCameraRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkCameraRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkBorderRepresentation_ClassNew
extern "C" { PyObject *PyvtkBorderRepresentation_ClassNew(); }
#define DECLARED_PyvtkBorderRepresentation_ClassNew
#endif

static PyObject *
PyvtkCameraRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraRepresentation *tempr = vtkCameraRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraRepresentation::NewInstance());

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
PyvtkCameraRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCameraRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCameraRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

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
      op->vtkCameraRepresentation::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkCameraRepresentation::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkCameraInterpolator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCameraInterpolator"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolator(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::SetInterpolator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetInterpolator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraInterpolator *tempr = (ap.IsBound() ?
      op->GetInterpolator() :
      op->vtkCameraRepresentation::GetInterpolator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFrames(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::SetNumberOfFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFramesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMinValue() :
      op->vtkCameraRepresentation::GetNumberOfFramesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFramesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFramesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFramesMaxValue() :
      op->vtkCameraRepresentation::GetNumberOfFramesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFrames() :
      op->vtkCameraRepresentation::GetNumberOfFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkCameraRepresentation::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_AddCameraToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCameraToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddCameraToPath();
    }
    else
    {
      op->vtkCameraRepresentation::AddCameraToPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_AnimatePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimatePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->AnimatePath(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::AnimatePath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_InitializePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializePath();
    }
    else
    {
      op->vtkCameraRepresentation::InitializePath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCameraRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

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
      op->GetSize(temp0);
    }
    else
    {
      op->vtkCameraRepresentation::GetSize(temp0);
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
PyvtkCameraRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

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
      op->vtkCameraRepresentation::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

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
      op->vtkCameraRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkCameraRepresentation::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkCameraRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkCameraRepresentation::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraRepresentation *op = static_cast<vtkCameraRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCameraRepresentation::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCameraRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCameraRepresentation\nC++: static vtkCameraRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCameraRepresentation\nC++: vtkCameraRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCameraRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCameraRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCamera", PyvtkCameraRepresentation_SetCamera, METH_VARARGS,
   "SetCamera(self, camera:vtkCamera) -> None\nC++: void SetCamera(vtkCamera *camera)\n\nSpecify the camera to interpolate. This must be specified by the\nuser.\n"},
  {"GetCamera", PyvtkCameraRepresentation_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\n"},
  {"SetInterpolator", PyvtkCameraRepresentation_SetInterpolator, METH_VARARGS,
   "SetInterpolator(self, camInt:vtkCameraInterpolator) -> None\nC++: void SetInterpolator(vtkCameraInterpolator *camInt)\n\nGet the vtkCameraInterpolator used to interpolate and save the\nsequence of camera views. If not defined, one is created\nautomatically. Note that you can access this object to set the\ninterpolation type (linear, spline) and other instance variables.\n"},
  {"GetInterpolator", PyvtkCameraRepresentation_GetInterpolator, METH_VARARGS,
   "GetInterpolator(self) -> vtkCameraInterpolator\nC++: virtual vtkCameraInterpolator *GetInterpolator()\n\n"},
  {"SetNumberOfFrames", PyvtkCameraRepresentation_SetNumberOfFrames, METH_VARARGS,
   "SetNumberOfFrames(self, _arg:int) -> None\nC++: virtual void SetNumberOfFrames(int _arg)\n\nSet the number of frames to generate when playback is initiated.\n"},
  {"GetNumberOfFramesMinValue", PyvtkCameraRepresentation_GetNumberOfFramesMinValue, METH_VARARGS,
   "GetNumberOfFramesMinValue(self) -> int\nC++: virtual int GetNumberOfFramesMinValue()\n\n"},
  {"GetNumberOfFramesMaxValue", PyvtkCameraRepresentation_GetNumberOfFramesMaxValue, METH_VARARGS,
   "GetNumberOfFramesMaxValue(self) -> int\nC++: virtual int GetNumberOfFramesMaxValue()\n\n"},
  {"GetNumberOfFrames", PyvtkCameraRepresentation_GetNumberOfFrames, METH_VARARGS,
   "GetNumberOfFrames(self) -> int\nC++: virtual int GetNumberOfFrames()\n\n"},
  {"GetProperty", PyvtkCameraRepresentation_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\nBy obtaining this property you can specify the properties of the\nrepresentation.\n"},
  {"AddCameraToPath", PyvtkCameraRepresentation_AddCameraToPath, METH_VARARGS,
   "AddCameraToPath(self) -> None\nC++: void AddCameraToPath()\n\nThese methods are used to create interpolated camera paths.  The\nAddCameraToPath() method adds the view defined by the current\ncamera (via SetCamera()) to the interpolated camera path.\nAnimatePath() interpolates NumberOfFrames along the current path.\nInitializePath() resets the interpolated path to its initial,\nempty configuration.\n"},
  {"AnimatePath", PyvtkCameraRepresentation_AnimatePath, METH_VARARGS,
   "AnimatePath(self, rwi:vtkRenderWindowInteractor) -> None\nC++: void AnimatePath(vtkRenderWindowInteractor *rwi)\n\n"},
  {"InitializePath", PyvtkCameraRepresentation_InitializePath, METH_VARARGS,
   "InitializePath(self) -> None\nC++: void InitializePath()\n\n"},
  {"BuildRepresentation", PyvtkCameraRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nSatisfy the superclasses' API.\n"},
  {"GetSize", PyvtkCameraRepresentation_GetSize, METH_VARARGS,
   "GetSize(self, size:[float, float]) -> None\nC++: void GetSize(double size[2]) override;\n\n"},
  {"GetActors2D", PyvtkCameraRepresentation_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {"ReleaseGraphicsResources", PyvtkCameraRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkCameraRepresentation_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\n"},
  {"RenderOpaqueGeometry", PyvtkCameraRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkCameraRepresentation_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCameraRepresentation_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS Does this prop\nhave some translucent polygonal geometry? This method is called\nduring the rendering process to know if there is some translucent\npolygonal geometry. A simple prop that has some translucent\npolygonal geometry will return true. A composite prop (like\nvtkAssembly) that has at least one sub-prop that has some\ntranslucent polygonal geometry will return true. Default\nimplementation return false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCameraRepresentation_Doc =
  "vtkCameraRepresentation - represent the vtkCameraWidget\n\n"
  "Superclass: vtkBorderRepresentation\n\n"
  "This class provides support for interactively saving a series of\n"
  "camera views into an interpolated path (using vtkCameraInterpolator).\n"
  "The class typically works in conjunction with vtkCameraWidget. To use\n"
  "this class simply specify the camera to interpolate and use the\n"
  "methods AddCameraToPath(), AnimatePath(), and InitializePath() to add\n"
  "a new camera view, animate the current views, and initialize the\n"
  "interpolation.\n\n"
  "@sa\n"
  "vtkCameraWidget vtkCameraInterpolator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCameraRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCameraRepresentation", // tp_name
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
  PyvtkCameraRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraRepresentation_StaticNew()
{
  return vtkCameraRepresentation::New();
}

PyObject *PyvtkCameraRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCameraRepresentation_Type, PyvtkCameraRepresentation_Methods,
    "vtkCameraRepresentation",
 &PyvtkCameraRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkBorderRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCameraRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

