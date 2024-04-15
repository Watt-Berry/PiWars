// python wrapper for vtkPanoramicProjectionPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPanoramicProjectionPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPanoramicProjectionPass(PyObject *dict); }
extern "C" { PyObject *PyvtkPanoramicProjectionPass_ClassNew(); }

#ifndef DECLARED_PyvtkImageProcessingPass_ClassNew
extern "C" { PyObject *PyvtkImageProcessingPass_ClassNew(); }
#define DECLARED_PyvtkImageProcessingPass_ClassNew
#endif

static PyObject *
PyvtkPanoramicProjectionPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPanoramicProjectionPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPanoramicProjectionPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPanoramicProjectionPass *tempr = vtkPanoramicProjectionPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPanoramicProjectionPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPanoramicProjectionPass::NewInstance());

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
PyvtkPanoramicProjectionPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPanoramicProjectionPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPanoramicProjectionPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

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
      op->vtkPanoramicProjectionPass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetCubeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCubeResolution() :
      op->vtkPanoramicProjectionPass::GetCubeResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_SetCubeResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCubeResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCubeResolution(temp0);
    }
    else
    {
      op->vtkPanoramicProjectionPass::SetCubeResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetProjectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionType() :
      op->vtkPanoramicProjectionPass::GetProjectionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_SetProjectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionType(temp0);
    }
    else
    {
      op->vtkPanoramicProjectionPass::SetProjectionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetProjectionTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionTypeMinValue() :
      op->vtkPanoramicProjectionPass::GetProjectionTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetProjectionTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionTypeMaxValue() :
      op->vtkPanoramicProjectionPass::GetProjectionTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_SetProjectionTypeToEquirectangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionTypeToEquirectangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionTypeToEquirectangular();
    }
    else
    {
      op->vtkPanoramicProjectionPass::SetProjectionTypeToEquirectangular();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_SetProjectionTypeToAzimuthal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionTypeToAzimuthal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionTypeToAzimuthal();
    }
    else
    {
      op->vtkPanoramicProjectionPass::SetProjectionTypeToAzimuthal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkPanoramicProjectionPass::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkPanoramicProjectionPass::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetAngleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMinValue() :
      op->vtkPanoramicProjectionPass::GetAngleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetAngleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleMaxValue() :
      op->vtkPanoramicProjectionPass::GetAngleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolate() :
      op->vtkPanoramicProjectionPass::GetInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolate(temp0);
    }
    else
    {
      op->vtkPanoramicProjectionPass::SetInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOn();
    }
    else
    {
      op->vtkPanoramicProjectionPass::InterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPanoramicProjectionPass_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPanoramicProjectionPass *op = static_cast<vtkPanoramicProjectionPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateOff();
    }
    else
    {
      op->vtkPanoramicProjectionPass::InterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPanoramicProjectionPass_Methods[] = {
  {"IsTypeOf", PyvtkPanoramicProjectionPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPanoramicProjectionPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPanoramicProjectionPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPanoramicProjectionPass\nC++: static vtkPanoramicProjectionPass *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPanoramicProjectionPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPanoramicProjectionPass\nC++: vtkPanoramicProjectionPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPanoramicProjectionPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPanoramicProjectionPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkPanoramicProjectionPass_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, w:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *w) override;\n\nRelease graphics resources and ask components to release their\nown resources.\n"},
  {"GetCubeResolution", PyvtkPanoramicProjectionPass_GetCubeResolution, METH_VARARGS,
   "GetCubeResolution(self) -> int\nC++: virtual unsigned int GetCubeResolution()\n\nGet/Set the cubemap textures resolution used to render\n(offscreen) all directions. Default is 300.\n"},
  {"SetCubeResolution", PyvtkPanoramicProjectionPass_SetCubeResolution, METH_VARARGS,
   "SetCubeResolution(self, _arg:int) -> None\nC++: virtual void SetCubeResolution(unsigned int _arg)\n\n"},
  {"GetProjectionType", PyvtkPanoramicProjectionPass_GetProjectionType, METH_VARARGS,
   "GetProjectionType(self) -> int\nC++: virtual int GetProjectionType()\n\nGet/Set the type of projection. Equirectangular projection maps\nmeridians to vertical straight lines and circles of latitude to\nhorizontal straight lines. Azimuthal equidistant projection maps\nall points of the scene based on their distance to the view\ndirection. This projection produces a fisheye effect. Default is\nEquirectangular.\n"},
  {"SetProjectionType", PyvtkPanoramicProjectionPass_SetProjectionType, METH_VARARGS,
   "SetProjectionType(self, _arg:int) -> None\nC++: virtual void SetProjectionType(int _arg)\n\n"},
  {"GetProjectionTypeMinValue", PyvtkPanoramicProjectionPass_GetProjectionTypeMinValue, METH_VARARGS,
   "GetProjectionTypeMinValue(self) -> int\nC++: virtual int GetProjectionTypeMinValue()\n\n"},
  {"GetProjectionTypeMaxValue", PyvtkPanoramicProjectionPass_GetProjectionTypeMaxValue, METH_VARARGS,
   "GetProjectionTypeMaxValue(self) -> int\nC++: virtual int GetProjectionTypeMaxValue()\n\n"},
  {"SetProjectionTypeToEquirectangular", PyvtkPanoramicProjectionPass_SetProjectionTypeToEquirectangular, METH_VARARGS,
   "SetProjectionTypeToEquirectangular(self) -> None\nC++: void SetProjectionTypeToEquirectangular()\n\n"},
  {"SetProjectionTypeToAzimuthal", PyvtkPanoramicProjectionPass_SetProjectionTypeToAzimuthal, METH_VARARGS,
   "SetProjectionTypeToAzimuthal(self) -> None\nC++: void SetProjectionTypeToAzimuthal()\n\n"},
  {"GetAngle", PyvtkPanoramicProjectionPass_GetAngle, METH_VARARGS,
   "GetAngle(self) -> float\nC++: virtual double GetAngle()\n\nGet/Set the vertical angle of projection. 180 degrees is a half\nsphere, 360 degrees is a full sphere, but any values in the range\n(90;360) can be set. Default is 180 degrees.\n"},
  {"SetAngle", PyvtkPanoramicProjectionPass_SetAngle, METH_VARARGS,
   "SetAngle(self, _arg:float) -> None\nC++: virtual void SetAngle(double _arg)\n\n"},
  {"GetAngleMinValue", PyvtkPanoramicProjectionPass_GetAngleMinValue, METH_VARARGS,
   "GetAngleMinValue(self) -> float\nC++: virtual double GetAngleMinValue()\n\n"},
  {"GetAngleMaxValue", PyvtkPanoramicProjectionPass_GetAngleMaxValue, METH_VARARGS,
   "GetAngleMaxValue(self) -> float\nC++: virtual double GetAngleMaxValue()\n\n"},
  {"GetInterpolate", PyvtkPanoramicProjectionPass_GetInterpolate, METH_VARARGS,
   "GetInterpolate(self) -> bool\nC++: virtual bool GetInterpolate()\n\nGet/Set the interpolation mode. If true, the projection of the\ncubemap use hardware interpolation. Default is off.\n"},
  {"SetInterpolate", PyvtkPanoramicProjectionPass_SetInterpolate, METH_VARARGS,
   "SetInterpolate(self, _arg:bool) -> None\nC++: virtual void SetInterpolate(bool _arg)\n\n"},
  {"InterpolateOn", PyvtkPanoramicProjectionPass_InterpolateOn, METH_VARARGS,
   "InterpolateOn(self) -> None\nC++: virtual void InterpolateOn()\n\n"},
  {"InterpolateOff", PyvtkPanoramicProjectionPass_InterpolateOff, METH_VARARGS,
   "InterpolateOff(self) -> None\nC++: virtual void InterpolateOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPanoramicProjectionPass_Doc =
  "vtkPanoramicProjectionPass - Render pass that render the scene in a\ncubemap and project these six renderings to a single quad.\n\n"
  "Superclass: vtkImageProcessingPass\n\n"
  "There are currently two different projections implemented\n"
  "(Equirectangular and Azimuthal). This pass can be used to produce\n"
  "images that can be visualize with specific devices that re-maps the\n"
  "distorted image to a panoramic view (for instance VR headsets, domes,\n"
  "panoramic screens)\n\n"
  "Note that it is often necessary to disable frustum cullers in order\n"
  "to render properly objects that are behind the camera.\n\n"
  "@sa\n"
  "vtkRenderPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPanoramicProjectionPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkPanoramicProjectionPass", // tp_name
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
  PyvtkPanoramicProjectionPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPanoramicProjectionPass_StaticNew()
{
  return vtkPanoramicProjectionPass::New();
}

PyObject *PyvtkPanoramicProjectionPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPanoramicProjectionPass_Type, PyvtkPanoramicProjectionPass_Methods,
    "vtkPanoramicProjectionPass",
 &PyvtkPanoramicProjectionPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageProcessingPass_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "Equirectangular", vtkPanoramicProjectionPass::Equirectangular },
        { "Azimuthal", vtkPanoramicProjectionPass::Azimuthal },
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

void PyVTKAddFile_vtkPanoramicProjectionPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPanoramicProjectionPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPanoramicProjectionPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

