// python wrapper for vtkProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProperty.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProperty(PyObject *dict); }
extern "C" { PyObject *PyvtkProperty_ClassNew(); }


static PyObject *
PyvtkProperty_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProperty *tempr = vtkProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProperty::NewInstance());

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
PyvtkProperty_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProperty::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProperty::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkProperty::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkProperty::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->BackfaceRender(temp0, temp1);
    }
    else
    {
      op->vtkProperty::BackfaceRender(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_PostRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PostRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkActor *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkActor") &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->PostRender(temp0, temp1);
    }
    else
    {
      op->vtkProperty::PostRender(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLighting() :
      op->vtkProperty::GetLighting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetLighting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLighting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLighting(temp0);
    }
    else
    {
      op->vtkProperty::SetLighting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_LightingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightingOn();
    }
    else
    {
      op->vtkProperty::LightingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_LightingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LightingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LightingOff();
    }
    else
    {
      op->vtkProperty::LightingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRenderPointsAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderPointsAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderPointsAsSpheres() :
      op->vtkProperty::GetRenderPointsAsSpheres());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRenderPointsAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderPointsAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderPointsAsSpheres(temp0);
    }
    else
    {
      op->vtkProperty::SetRenderPointsAsSpheres(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RenderPointsAsSpheresOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPointsAsSpheresOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderPointsAsSpheresOn();
    }
    else
    {
      op->vtkProperty::RenderPointsAsSpheresOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RenderPointsAsSpheresOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPointsAsSpheresOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderPointsAsSpheresOff();
    }
    else
    {
      op->vtkProperty::RenderPointsAsSpheresOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRenderLinesAsTubes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderLinesAsTubes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderLinesAsTubes() :
      op->vtkProperty::GetRenderLinesAsTubes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRenderLinesAsTubes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderLinesAsTubes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderLinesAsTubes(temp0);
    }
    else
    {
      op->vtkProperty::SetRenderLinesAsTubes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RenderLinesAsTubesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLinesAsTubesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLinesAsTubesOn();
    }
    else
    {
      op->vtkProperty::RenderLinesAsTubesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RenderLinesAsTubesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLinesAsTubesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLinesAsTubesOff();
    }
    else
    {
      op->vtkProperty::RenderLinesAsTubesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolation(temp0);
    }
    else
    {
      op->vtkProperty::SetInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMinValue() :
      op->vtkProperty::GetInterpolationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationMaxValue() :
      op->vtkProperty::GetInterpolationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolation() :
      op->vtkProperty::GetInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToFlat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToFlat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationToFlat();
    }
    else
    {
      op->vtkProperty::SetInterpolationToFlat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToGouraud(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToGouraud");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationToGouraud();
    }
    else
    {
      op->vtkProperty::SetInterpolationToGouraud();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToPhong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToPhong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationToPhong();
    }
    else
    {
      op->vtkProperty::SetInterpolationToPhong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInterpolationToPBR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationToPBR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationToPBR();
    }
    else
    {
      op->vtkProperty::SetInterpolationToPBR();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInterpolationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationAsString() :
      op->vtkProperty::GetInterpolationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkProperty::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMinValue() :
      op->vtkProperty::GetRepresentationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentationMaxValue() :
      op->vtkProperty::GetRepresentationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepresentation() :
      op->vtkProperty::GetRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToPoints();
    }
    else
    {
      op->vtkProperty::SetRepresentationToPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToWireframe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToWireframe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToWireframe();
    }
    else
    {
      op->vtkProperty::SetRepresentationToWireframe();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRepresentationToSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationToSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetRepresentationToSurface();
    }
    else
    {
      op->vtkProperty::SetRepresentationToSurface();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRepresentationAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRepresentationAsString() :
      op->vtkProperty::GetRepresentationAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetColor(temp0);
    }
    else
    {
      op->vtkProperty::SetColor(temp0);
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
PyvtkProperty_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkProperty::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->GetColor(temp0);
    }
    else
    {
      op->vtkProperty::GetColor(temp0);
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
PyvtkProperty_GetColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->GetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::GetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkProperty_GetColor_s1(self, args);
    case 1:
      return PyvtkProperty_GetColor_s2(self, args);
    case 3:
      return PyvtkProperty_GetColor_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_SetBaseIOR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseIOR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBaseIOR(temp0);
    }
    else
    {
      op->vtkProperty::SetBaseIOR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetBaseIORMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseIORMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBaseIORMinValue() :
      op->vtkProperty::GetBaseIORMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetBaseIORMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseIORMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBaseIORMaxValue() :
      op->vtkProperty::GetBaseIORMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetBaseIOR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseIOR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBaseIOR() :
      op->vtkProperty::GetBaseIOR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetMetallic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMetallic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMetallic(temp0);
    }
    else
    {
      op->vtkProperty::SetMetallic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetMetallicMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetallicMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMetallicMinValue() :
      op->vtkProperty::GetMetallicMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetMetallicMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetallicMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMetallicMaxValue() :
      op->vtkProperty::GetMetallicMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetMetallic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMetallic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMetallic() :
      op->vtkProperty::GetMetallic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetRoughness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRoughness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRoughness(temp0);
    }
    else
    {
      op->vtkProperty::SetRoughness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRoughnessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoughnessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRoughnessMinValue() :
      op->vtkProperty::GetRoughnessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRoughnessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoughnessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRoughnessMaxValue() :
      op->vtkProperty::GetRoughnessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetRoughness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRoughness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRoughness() :
      op->vtkProperty::GetRoughness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnisotropy(temp0);
    }
    else
    {
      op->vtkProperty::SetAnisotropy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAnisotropyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnisotropyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnisotropyMinValue() :
      op->vtkProperty::GetAnisotropyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAnisotropyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnisotropyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnisotropyMaxValue() :
      op->vtkProperty::GetAnisotropyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAnisotropy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnisotropy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnisotropy() :
      op->vtkProperty::GetAnisotropy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetAnisotropyRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnisotropyRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnisotropyRotation(temp0);
    }
    else
    {
      op->vtkProperty::SetAnisotropyRotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAnisotropyRotationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnisotropyRotationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnisotropyRotationMinValue() :
      op->vtkProperty::GetAnisotropyRotationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAnisotropyRotationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnisotropyRotationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnisotropyRotationMaxValue() :
      op->vtkProperty::GetAnisotropyRotationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAnisotropyRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnisotropyRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnisotropyRotation() :
      op->vtkProperty::GetAnisotropyRotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetCoatIOR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoatIOR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoatIOR(temp0);
    }
    else
    {
      op->vtkProperty::SetCoatIOR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatIORMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatIORMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatIORMinValue() :
      op->vtkProperty::GetCoatIORMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatIORMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatIORMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatIORMaxValue() :
      op->vtkProperty::GetCoatIORMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatIOR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatIOR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatIOR() :
      op->vtkProperty::GetCoatIOR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetCoatRoughness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoatRoughness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoatRoughness(temp0);
    }
    else
    {
      op->vtkProperty::SetCoatRoughness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatRoughnessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatRoughnessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatRoughnessMinValue() :
      op->vtkProperty::GetCoatRoughnessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatRoughnessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatRoughnessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatRoughnessMaxValue() :
      op->vtkProperty::GetCoatRoughnessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatRoughness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatRoughness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatRoughness() :
      op->vtkProperty::GetCoatRoughness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetCoatStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoatStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoatStrength(temp0);
    }
    else
    {
      op->vtkProperty::SetCoatStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatStrengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatStrengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatStrengthMinValue() :
      op->vtkProperty::GetCoatStrengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatStrengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatStrengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatStrengthMaxValue() :
      op->vtkProperty::GetCoatStrengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatStrength() :
      op->vtkProperty::GetCoatStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetCoatColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoatColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetCoatColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetCoatColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetCoatColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoatColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCoatColor(temp0);
    }
    else
    {
      op->vtkProperty::SetCoatColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetCoatColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetCoatColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetCoatColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCoatColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetCoatColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCoatColor() :
      op->vtkProperty::GetCoatColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetCoatNormalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoatNormalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoatNormalScale(temp0);
    }
    else
    {
      op->vtkProperty::SetCoatNormalScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatNormalScaleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatNormalScaleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatNormalScaleMinValue() :
      op->vtkProperty::GetCoatNormalScaleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatNormalScaleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatNormalScaleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatNormalScaleMaxValue() :
      op->vtkProperty::GetCoatNormalScaleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetCoatNormalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoatNormalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCoatNormalScale() :
      op->vtkProperty::GetCoatNormalScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetNormalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalScale(temp0);
    }
    else
    {
      op->vtkProperty::SetNormalScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetNormalScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNormalScale() :
      op->vtkProperty::GetNormalScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetOcclusionStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOcclusionStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOcclusionStrength(temp0);
    }
    else
    {
      op->vtkProperty::SetOcclusionStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOcclusionStrengthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionStrengthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionStrengthMinValue() :
      op->vtkProperty::GetOcclusionStrengthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOcclusionStrengthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionStrengthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionStrengthMaxValue() :
      op->vtkProperty::GetOcclusionStrengthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOcclusionStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOcclusionStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOcclusionStrength() :
      op->vtkProperty::GetOcclusionStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetEmissiveFactor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmissiveFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetEmissiveFactor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetEmissiveFactor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetEmissiveFactor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmissiveFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEmissiveFactor(temp0);
    }
    else
    {
      op->vtkProperty::SetEmissiveFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetEmissiveFactor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetEmissiveFactor_s1(self, args);
    case 1:
      return PyvtkProperty_SetEmissiveFactor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEmissiveFactor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetEmissiveFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmissiveFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEmissiveFactor() :
      op->vtkProperty::GetEmissiveFactor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetEdgeTint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeTint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetEdgeTint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetEdgeTint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetEdgeTint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeTint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeTint(temp0);
    }
    else
    {
      op->vtkProperty::SetEdgeTint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetEdgeTint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetEdgeTint_s1(self, args);
    case 1:
      return PyvtkProperty_SetEdgeTint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeTint");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetEdgeTint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeTint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEdgeTint() :
      op->vtkProperty::GetEdgeTint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkProperty::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbientMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbientMinValue() :
      op->vtkProperty::GetAmbientMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbientMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbientMaxValue() :
      op->vtkProperty::GetAmbientMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkProperty::GetAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkProperty::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuseMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuseMinValue() :
      op->vtkProperty::GetDiffuseMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuseMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuseMaxValue() :
      op->vtkProperty::GetDiffuseMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkProperty::GetDiffuse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecular(temp0);
    }
    else
    {
      op->vtkProperty::SetSpecular(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularMinValue() :
      op->vtkProperty::GetSpecularMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularMaxValue() :
      op->vtkProperty::GetSpecularMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecular() :
      op->vtkProperty::GetSpecular());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularPower(temp0);
    }
    else
    {
      op->vtkProperty::SetSpecularPower(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPowerMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPowerMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularPowerMinValue() :
      op->vtkProperty::GetSpecularPowerMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPowerMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPowerMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularPowerMaxValue() :
      op->vtkProperty::GetSpecularPowerMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSpecularPower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularPower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSpecularPower() :
      op->vtkProperty::GetSpecularPower());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkProperty::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkProperty::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkProperty::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkProperty::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetEdgeOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeOpacity(temp0);
    }
    else
    {
      op->vtkProperty::SetEdgeOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetEdgeOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeOpacityMinValue() :
      op->vtkProperty::GetEdgeOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetEdgeOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeOpacityMaxValue() :
      op->vtkProperty::GetEdgeOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetEdgeOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEdgeOpacity() :
      op->vtkProperty::GetEdgeOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetAmbientColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetAmbientColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetAmbientColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetAmbientColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAmbientColor(temp0);
    }
    else
    {
      op->vtkProperty::SetAmbientColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetAmbientColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetAmbientColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetAmbientColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAmbientColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetAmbientColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAmbientColor() :
      op->vtkProperty::GetAmbientColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetDiffuseColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetDiffuseColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetDiffuseColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetDiffuseColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuseColor(temp0);
    }
    else
    {
      op->vtkProperty::SetDiffuseColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetDiffuseColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetDiffuseColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetDiffuseColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDiffuseColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetDiffuseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDiffuseColor() :
      op->vtkProperty::GetDiffuseColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSpecularColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetSpecularColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetSpecularColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetSpecularColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpecularColor(temp0);
    }
    else
    {
      op->vtkProperty::SetSpecularColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetSpecularColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetSpecularColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetSpecularColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpecularColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetSpecularColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpecularColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpecularColor() :
      op->vtkProperty::GetSpecularColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdgeVisibility() :
      op->vtkProperty::GetEdgeVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetEdgeVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeVisibility(temp0);
    }
    else
    {
      op->vtkProperty::SetEdgeVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_EdgeVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOn();
    }
    else
    {
      op->vtkProperty::EdgeVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_EdgeVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgeVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgeVisibilityOff();
    }
    else
    {
      op->vtkProperty::EdgeVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetEdgeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetEdgeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetEdgeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetEdgeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEdgeColor(temp0);
    }
    else
    {
      op->vtkProperty::SetEdgeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetEdgeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetEdgeColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetEdgeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetEdgeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEdgeColor() :
      op->vtkProperty::GetEdgeColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetVertexVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertexVisibility() :
      op->vtkProperty::GetVertexVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetVertexVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexVisibility(temp0);
    }
    else
    {
      op->vtkProperty::SetVertexVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_VertexVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexVisibilityOn();
    }
    else
    {
      op->vtkProperty::VertexVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_VertexVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "VertexVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->VertexVisibilityOff();
    }
    else
    {
      op->vtkProperty::VertexVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetVertexColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->SetVertexColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::SetVertexColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetVertexColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVertexColor(temp0);
    }
    else
    {
      op->vtkProperty::SetVertexColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetVertexColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProperty_SetVertexColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetVertexColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVertexColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetVertexColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVertexColor() :
      op->vtkProperty::GetVertexColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSelectionColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetSelectionColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkProperty::SetSelectionColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetSelectionColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionColor(temp0);
    }
    else
    {
      op->vtkProperty::SetSelectionColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_SetSelectionColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkProperty_SetSelectionColor_s1(self, args);
    case 1:
      return PyvtkProperty_SetSelectionColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionColor");
  return nullptr;
}


static PyObject *
PyvtkProperty_GetSelectionColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectionColor() :
      op->vtkProperty::GetSelectionColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSelectionLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionLineWidth(temp0);
    }
    else
    {
      op->vtkProperty::SetSelectionLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSelectionLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSelectionLineWidth() :
      op->vtkProperty::GetSelectionLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetSelectionPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionPointSize(temp0);
    }
    else
    {
      op->vtkProperty::SetSelectionPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetSelectionPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetSelectionPointSize() :
      op->vtkProperty::GetSelectionPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkProperty::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthMinValue() :
      op->vtkProperty::GetLineWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidthMaxValue() :
      op->vtkProperty::GetLineWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkProperty::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStipplePattern(temp0);
    }
    else
    {
      op->vtkProperty::SetLineStipplePattern(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStipplePattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStipplePattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStipplePattern() :
      op->vtkProperty::GetLineStipplePattern());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineStippleRepeatFactor(temp0);
    }
    else
    {
      op->vtkProperty::SetLineStippleRepeatFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactorMinValue() :
      op->vtkProperty::GetLineStippleRepeatFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactorMaxValue() :
      op->vtkProperty::GetLineStippleRepeatFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetLineStippleRepeatFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineStippleRepeatFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLineStippleRepeatFactor() :
      op->vtkProperty::GetLineStippleRepeatFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkProperty::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeMinValue() :
      op->vtkProperty::GetPointSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSizeMaxValue() :
      op->vtkProperty::GetPointSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetPointSize() :
      op->vtkProperty::GetPointSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetBackfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBackfaceCulling() :
      op->vtkProperty::GetBackfaceCulling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetBackfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackfaceCulling(temp0);
    }
    else
    {
      op->vtkProperty::SetBackfaceCulling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceCullingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceCullingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackfaceCullingOn();
    }
    else
    {
      op->vtkProperty::BackfaceCullingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_BackfaceCullingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackfaceCullingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackfaceCullingOff();
    }
    else
    {
      op->vtkProperty::BackfaceCullingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetFrontfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrontfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFrontfaceCulling() :
      op->vtkProperty::GetFrontfaceCulling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetFrontfaceCulling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrontfaceCulling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFrontfaceCulling(temp0);
    }
    else
    {
      op->vtkProperty::SetFrontfaceCulling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_FrontfaceCullingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontfaceCullingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrontfaceCullingOn();
    }
    else
    {
      op->vtkProperty::FrontfaceCullingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_FrontfaceCullingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FrontfaceCullingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FrontfaceCullingOff();
    }
    else
    {
      op->vtkProperty::FrontfaceCullingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetMaterialName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialName(temp0);
    }
    else
    {
      op->vtkProperty::SetMaterialName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetMaterialName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialName() :
      op->vtkProperty::GetMaterialName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetShading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShading(temp0);
    }
    else
    {
      op->vtkProperty::SetShading(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetShading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShading() :
      op->vtkProperty::GetShading());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ShadingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadingOn();
    }
    else
    {
      op->vtkProperty::ShadingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ShadingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadingOff();
    }
    else
    {
      op->vtkProperty::ShadingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_AddShaderVariable_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
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
PyvtkProperty_AddShaderVariable_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
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
PyvtkProperty_AddShaderVariable_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
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
      op->AddShaderVariable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
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
      op->AddShaderVariable(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProperty_AddShaderVariable_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddShaderVariable(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkProperty::AddShaderVariable(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProperty_AddShaderVariable_Methods[] = {
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable_s1, METH_VARARGS,
   "@ziP *i"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable_s2, METH_VARARGS,
   "@ziP *d"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable_s3, METH_VARARGS,
   "@zi"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable_s4, METH_VARARGS,
   "@zd"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable_s5, METH_VARARGS,
   "@zii"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable_s6, METH_VARARGS,
   "@zdd"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable_s7, METH_VARARGS,
   "@ziii"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable_s8, METH_VARARGS,
   "@zddd"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkProperty_AddShaderVariable(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProperty_AddShaderVariable_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddShaderVariable");
  return nullptr;
}


static PyObject *
PyvtkProperty_SetShowTexturesOnBackface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowTexturesOnBackface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowTexturesOnBackface(temp0);
    }
    else
    {
      op->vtkProperty::SetShowTexturesOnBackface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetShowTexturesOnBackface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowTexturesOnBackface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowTexturesOnBackface() :
      op->vtkProperty::GetShowTexturesOnBackface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ShowTexturesOnBackfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowTexturesOnBackfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowTexturesOnBackfaceOn();
    }
    else
    {
      op->vtkProperty::ShowTexturesOnBackfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ShowTexturesOnBackfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowTexturesOnBackfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowTexturesOnBackfaceOff();
    }
    else
    {
      op->vtkProperty::ShowTexturesOnBackfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  vtkTexture *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0, temp1);
    }
    else
    {
      op->vtkProperty::SetTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetTexture(temp0) :
      op->vtkProperty::GetTexture(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetBaseColorTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseColorTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetBaseColorTexture(temp0);
    }
    else
    {
      op->vtkProperty::SetBaseColorTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetORMTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetORMTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetORMTexture(temp0);
    }
    else
    {
      op->vtkProperty::SetORMTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetAnisotropyTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnisotropyTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetAnisotropyTexture(temp0);
    }
    else
    {
      op->vtkProperty::SetAnisotropyTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetNormalTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetNormalTexture(temp0);
    }
    else
    {
      op->vtkProperty::SetNormalTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetEmissiveTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmissiveTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetEmissiveTexture(temp0);
    }
    else
    {
      op->vtkProperty::SetEmissiveTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetCoatNormalTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoatNormalTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
  {
    if (ap.IsBound())
    {
      op->SetCoatNormalTexture(temp0);
    }
    else
    {
      op->vtkProperty::SetCoatNormalTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RemoveTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveTexture(temp0);
    }
    else
    {
      op->vtkProperty::RemoveTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_RemoveAllTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllTextures();
    }
    else
    {
      op->vtkProperty::RemoveAllTextures();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetNumberOfTextures(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextures");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTextures() :
      op->vtkProperty::GetNumberOfTextures());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

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
      op->vtkProperty::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkProperty::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformation(temp0);
    }
    else
    {
      op->vtkProperty::SetInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ComputeReflectanceFromIOR(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeReflectanceFromIOR");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkProperty::ComputeReflectanceFromIOR(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ComputeIORFromReflectance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeIORFromReflectance");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkProperty::ComputeIORFromReflectance(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProperty_ComputeReflectanceOfBaseLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeReflectanceOfBaseLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProperty *op = static_cast<vtkProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeReflectanceOfBaseLayer() :
      op->vtkProperty::ComputeReflectanceOfBaseLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProperty_Methods[] = {
  {"IsTypeOf", PyvtkProperty_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProperty_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProperty_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProperty\nC++: static vtkProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProperty_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProperty\nC++: vtkProperty *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProperty_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProperty_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkProperty_DeepCopy, METH_VARARGS,
   "DeepCopy(self, p:vtkProperty) -> None\nC++: void DeepCopy(vtkProperty *p)\n\nAssign one property to another.\n"},
  {"Render", PyvtkProperty_Render, METH_VARARGS,
   "Render(self, __a:vtkActor, __b:vtkRenderer) -> None\nC++: virtual void Render(vtkActor *, vtkRenderer *)\n\nThis method causes the property to set up whatever is required\nfor its instance variables. This is actually handled by a\nsubclass of vtkProperty, which is created automatically. This\nmethod includes the invoking actor as an argument which can be\nused by property devices that require the actor.\n"},
  {"BackfaceRender", PyvtkProperty_BackfaceRender, METH_VARARGS,
   "BackfaceRender(self, __a:vtkActor, __b:vtkRenderer) -> None\nC++: virtual void BackfaceRender(vtkActor *, vtkRenderer *)\n\nThis method renders the property as a backface property.\nTwoSidedLighting must be turned off to see any backface\nproperties. Note that only colors and opacity are used for\nbackface properties. Other properties such as Representation,\nCulling are specified by the Property.\n"},
  {"PostRender", PyvtkProperty_PostRender, METH_VARARGS,
   "PostRender(self, __a:vtkActor, __b:vtkRenderer) -> None\nC++: virtual void PostRender(vtkActor *, vtkRenderer *)\n\nThis method is called after the actor has been rendered. Don't\ncall this directly. This method cleans up any shaders allocated.\n"},
  {"GetLighting", PyvtkProperty_GetLighting, METH_VARARGS,
   "GetLighting(self) -> bool\nC++: virtual bool GetLighting()\n\nSet/Get lighting flag for an object. Initial value is true.\n"},
  {"SetLighting", PyvtkProperty_SetLighting, METH_VARARGS,
   "SetLighting(self, _arg:bool) -> None\nC++: virtual void SetLighting(bool _arg)\n\n"},
  {"LightingOn", PyvtkProperty_LightingOn, METH_VARARGS,
   "LightingOn(self) -> None\nC++: virtual void LightingOn()\n\n"},
  {"LightingOff", PyvtkProperty_LightingOff, METH_VARARGS,
   "LightingOff(self) -> None\nC++: virtual void LightingOff()\n\n"},
  {"GetRenderPointsAsSpheres", PyvtkProperty_GetRenderPointsAsSpheres, METH_VARARGS,
   "GetRenderPointsAsSpheres(self) -> bool\nC++: virtual bool GetRenderPointsAsSpheres()\n\nSet/Get rendering of points as spheres. The size of the sphere in\npixels is controlled by the PointSize attribute. Note that half\nspheres may be rendered instead of spheres.\n"},
  {"SetRenderPointsAsSpheres", PyvtkProperty_SetRenderPointsAsSpheres, METH_VARARGS,
   "SetRenderPointsAsSpheres(self, _arg:bool) -> None\nC++: virtual void SetRenderPointsAsSpheres(bool _arg)\n\n"},
  {"RenderPointsAsSpheresOn", PyvtkProperty_RenderPointsAsSpheresOn, METH_VARARGS,
   "RenderPointsAsSpheresOn(self) -> None\nC++: virtual void RenderPointsAsSpheresOn()\n\n"},
  {"RenderPointsAsSpheresOff", PyvtkProperty_RenderPointsAsSpheresOff, METH_VARARGS,
   "RenderPointsAsSpheresOff(self) -> None\nC++: virtual void RenderPointsAsSpheresOff()\n\n"},
  {"GetRenderLinesAsTubes", PyvtkProperty_GetRenderLinesAsTubes, METH_VARARGS,
   "GetRenderLinesAsTubes(self) -> bool\nC++: virtual bool GetRenderLinesAsTubes()\n\nSet/Get rendering of lines as tubes. The width of the line in\npixels is controlled by the LineWidth attribute. May not be\nsupported on every platform and the implementation may be half\ntubes, or something only tube like in appearance.\n"},
  {"SetRenderLinesAsTubes", PyvtkProperty_SetRenderLinesAsTubes, METH_VARARGS,
   "SetRenderLinesAsTubes(self, _arg:bool) -> None\nC++: virtual void SetRenderLinesAsTubes(bool _arg)\n\n"},
  {"RenderLinesAsTubesOn", PyvtkProperty_RenderLinesAsTubesOn, METH_VARARGS,
   "RenderLinesAsTubesOn(self) -> None\nC++: virtual void RenderLinesAsTubesOn()\n\n"},
  {"RenderLinesAsTubesOff", PyvtkProperty_RenderLinesAsTubesOff, METH_VARARGS,
   "RenderLinesAsTubesOff(self) -> None\nC++: virtual void RenderLinesAsTubesOff()\n\n"},
  {"SetInterpolation", PyvtkProperty_SetInterpolation, METH_VARARGS,
   "SetInterpolation(self, _arg:int) -> None\nC++: virtual void SetInterpolation(int _arg)\n\nSet the shading interpolation method for an object.\n"},
  {"GetInterpolationMinValue", PyvtkProperty_GetInterpolationMinValue, METH_VARARGS,
   "GetInterpolationMinValue(self) -> int\nC++: virtual int GetInterpolationMinValue()\n\n"},
  {"GetInterpolationMaxValue", PyvtkProperty_GetInterpolationMaxValue, METH_VARARGS,
   "GetInterpolationMaxValue(self) -> int\nC++: virtual int GetInterpolationMaxValue()\n\n"},
  {"GetInterpolation", PyvtkProperty_GetInterpolation, METH_VARARGS,
   "GetInterpolation(self) -> int\nC++: virtual int GetInterpolation()\n\n"},
  {"SetInterpolationToFlat", PyvtkProperty_SetInterpolationToFlat, METH_VARARGS,
   "SetInterpolationToFlat(self) -> None\nC++: void SetInterpolationToFlat()\n\n"},
  {"SetInterpolationToGouraud", PyvtkProperty_SetInterpolationToGouraud, METH_VARARGS,
   "SetInterpolationToGouraud(self) -> None\nC++: void SetInterpolationToGouraud()\n\n"},
  {"SetInterpolationToPhong", PyvtkProperty_SetInterpolationToPhong, METH_VARARGS,
   "SetInterpolationToPhong(self) -> None\nC++: void SetInterpolationToPhong()\n\n"},
  {"SetInterpolationToPBR", PyvtkProperty_SetInterpolationToPBR, METH_VARARGS,
   "SetInterpolationToPBR(self) -> None\nC++: void SetInterpolationToPBR()\n\n"},
  {"GetInterpolationAsString", PyvtkProperty_GetInterpolationAsString, METH_VARARGS,
   "GetInterpolationAsString(self) -> str\nC++: const char *GetInterpolationAsString()\n\n"},
  {"SetRepresentation", PyvtkProperty_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, _arg:int) -> None\nC++: virtual void SetRepresentation(int _arg)\n\nControl the surface geometry representation for the object.\n"},
  {"GetRepresentationMinValue", PyvtkProperty_GetRepresentationMinValue, METH_VARARGS,
   "GetRepresentationMinValue(self) -> int\nC++: virtual int GetRepresentationMinValue()\n\n"},
  {"GetRepresentationMaxValue", PyvtkProperty_GetRepresentationMaxValue, METH_VARARGS,
   "GetRepresentationMaxValue(self) -> int\nC++: virtual int GetRepresentationMaxValue()\n\n"},
  {"GetRepresentation", PyvtkProperty_GetRepresentation, METH_VARARGS,
   "GetRepresentation(self) -> int\nC++: virtual int GetRepresentation()\n\n"},
  {"SetRepresentationToPoints", PyvtkProperty_SetRepresentationToPoints, METH_VARARGS,
   "SetRepresentationToPoints(self) -> None\nC++: void SetRepresentationToPoints()\n\n"},
  {"SetRepresentationToWireframe", PyvtkProperty_SetRepresentationToWireframe, METH_VARARGS,
   "SetRepresentationToWireframe(self) -> None\nC++: void SetRepresentationToWireframe()\n\n"},
  {"SetRepresentationToSurface", PyvtkProperty_SetRepresentationToSurface, METH_VARARGS,
   "SetRepresentationToSurface(self) -> None\nC++: void SetRepresentationToSurface()\n\n"},
  {"GetRepresentationAsString", PyvtkProperty_GetRepresentationAsString, METH_VARARGS,
   "GetRepresentationAsString(self) -> str\nC++: const char *GetRepresentationAsString()\n\n"},
  {"SetColor", PyvtkProperty_SetColor, METH_VARARGS,
   "SetColor(self, r:float, g:float, b:float) -> None\nC++: virtual void SetColor(double r, double g, double b)\nSetColor(self, a:[float, float, float]) -> None\nC++: virtual void SetColor(double a[3])\n\nSet the color of the object. Has the side effect of setting the\nambient diffuse and specular colors as well. This is basically a\nquick overall color setting method.\n"},
  {"GetColor", PyvtkProperty_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: double *GetColor()\nGetColor(self, rgb:[float, float, float]) -> None\nC++: void GetColor(double rgb[3])\nGetColor(self, r:float, g:float, b:float) -> None\nC++: void GetColor(double &r, double &g, double &b)\n\n"},
  {"SetBaseIOR", PyvtkProperty_SetBaseIOR, METH_VARARGS,
   "SetBaseIOR(self, _arg:float) -> None\nC++: virtual void SetBaseIOR(double _arg)\n\nSet/Get the Index Of Refraction of the base layer. It controls\nthe amount of light reflected at normal incidence (the\nreflectance F0), depending on the IOR of the upper layer (eg.\ncoat layer, or environment). For example, with a base IOR of 1.5\nand an IOR of 1.0 outside (IOR of the air), 4% of the amount of\nthe light is reflected at normal incidence. Notice that modifying\nthis value is only useful for dielectrics materials, as the\nreflectance for metallic is the albedo. This parameter is only\nused by PBR Interpolation. Default value is 1.5\n"},
  {"GetBaseIORMinValue", PyvtkProperty_GetBaseIORMinValue, METH_VARARGS,
   "GetBaseIORMinValue(self) -> float\nC++: virtual double GetBaseIORMinValue()\n\n"},
  {"GetBaseIORMaxValue", PyvtkProperty_GetBaseIORMaxValue, METH_VARARGS,
   "GetBaseIORMaxValue(self) -> float\nC++: virtual double GetBaseIORMaxValue()\n\n"},
  {"GetBaseIOR", PyvtkProperty_GetBaseIOR, METH_VARARGS,
   "GetBaseIOR(self) -> float\nC++: virtual double GetBaseIOR()\n\n"},
  {"SetMetallic", PyvtkProperty_SetMetallic, METH_VARARGS,
   "SetMetallic(self, _arg:float) -> None\nC++: virtual void SetMetallic(double _arg)\n\nSet/Get the metallic coefficient. Usually this value is either 0\nor 1 for real material but any value in between is valid. This\nparameter is only used by PBR Interpolation. Default value is 0.0\n"},
  {"GetMetallicMinValue", PyvtkProperty_GetMetallicMinValue, METH_VARARGS,
   "GetMetallicMinValue(self) -> float\nC++: virtual double GetMetallicMinValue()\n\n"},
  {"GetMetallicMaxValue", PyvtkProperty_GetMetallicMaxValue, METH_VARARGS,
   "GetMetallicMaxValue(self) -> float\nC++: virtual double GetMetallicMaxValue()\n\n"},
  {"GetMetallic", PyvtkProperty_GetMetallic, METH_VARARGS,
   "GetMetallic(self) -> float\nC++: virtual double GetMetallic()\n\n"},
  {"SetRoughness", PyvtkProperty_SetRoughness, METH_VARARGS,
   "SetRoughness(self, _arg:float) -> None\nC++: virtual void SetRoughness(double _arg)\n\nSet/Get the roughness coefficient. This value has to be between 0\n(glossy) and 1 (rough). A glossy material has reflections and a\nhigh specular part. This parameter is only used by PBR\nInterpolation. Default value is 0.5\n"},
  {"GetRoughnessMinValue", PyvtkProperty_GetRoughnessMinValue, METH_VARARGS,
   "GetRoughnessMinValue(self) -> float\nC++: virtual double GetRoughnessMinValue()\n\n"},
  {"GetRoughnessMaxValue", PyvtkProperty_GetRoughnessMaxValue, METH_VARARGS,
   "GetRoughnessMaxValue(self) -> float\nC++: virtual double GetRoughnessMaxValue()\n\n"},
  {"GetRoughness", PyvtkProperty_GetRoughness, METH_VARARGS,
   "GetRoughness(self) -> float\nC++: virtual double GetRoughness()\n\n"},
  {"SetAnisotropy", PyvtkProperty_SetAnisotropy, METH_VARARGS,
   "SetAnisotropy(self, _arg:float) -> None\nC++: virtual void SetAnisotropy(double _arg)\n\nSet/Get the anisotropy coefficient. This value controls the\nanisotropy of the material (0.0 means isotropic) This parameter\nis only used by PBR Interpolation. Default value is 0.0\n"},
  {"GetAnisotropyMinValue", PyvtkProperty_GetAnisotropyMinValue, METH_VARARGS,
   "GetAnisotropyMinValue(self) -> float\nC++: virtual double GetAnisotropyMinValue()\n\n"},
  {"GetAnisotropyMaxValue", PyvtkProperty_GetAnisotropyMaxValue, METH_VARARGS,
   "GetAnisotropyMaxValue(self) -> float\nC++: virtual double GetAnisotropyMaxValue()\n\n"},
  {"GetAnisotropy", PyvtkProperty_GetAnisotropy, METH_VARARGS,
   "GetAnisotropy(self) -> float\nC++: virtual double GetAnisotropy()\n\n"},
  {"SetAnisotropyRotation", PyvtkProperty_SetAnisotropyRotation, METH_VARARGS,
   "SetAnisotropyRotation(self, _arg:float) -> None\nC++: virtual void SetAnisotropyRotation(double _arg)\n\nSet/Get the anisotropy rotation coefficient. This value controls\nthe rotation of the direction of the anisotropy. This parameter\nis only used by PBR Interpolation. Default value is 0.0\n"},
  {"GetAnisotropyRotationMinValue", PyvtkProperty_GetAnisotropyRotationMinValue, METH_VARARGS,
   "GetAnisotropyRotationMinValue(self) -> float\nC++: virtual double GetAnisotropyRotationMinValue()\n\n"},
  {"GetAnisotropyRotationMaxValue", PyvtkProperty_GetAnisotropyRotationMaxValue, METH_VARARGS,
   "GetAnisotropyRotationMaxValue(self) -> float\nC++: virtual double GetAnisotropyRotationMaxValue()\n\n"},
  {"GetAnisotropyRotation", PyvtkProperty_GetAnisotropyRotation, METH_VARARGS,
   "GetAnisotropyRotation(self) -> float\nC++: virtual double GetAnisotropyRotation()\n\n"},
  {"SetCoatIOR", PyvtkProperty_SetCoatIOR, METH_VARARGS,
   "SetCoatIOR(self, _arg:float) -> None\nC++: virtual void SetCoatIOR(double _arg)\n\nSet/Get the coat layer Index Of Refraction. This parameter is\nonly used by PBR Interpolation. Default value is 2.0\n"},
  {"GetCoatIORMinValue", PyvtkProperty_GetCoatIORMinValue, METH_VARARGS,
   "GetCoatIORMinValue(self) -> float\nC++: virtual double GetCoatIORMinValue()\n\n"},
  {"GetCoatIORMaxValue", PyvtkProperty_GetCoatIORMaxValue, METH_VARARGS,
   "GetCoatIORMaxValue(self) -> float\nC++: virtual double GetCoatIORMaxValue()\n\n"},
  {"GetCoatIOR", PyvtkProperty_GetCoatIOR, METH_VARARGS,
   "GetCoatIOR(self) -> float\nC++: virtual double GetCoatIOR()\n\n"},
  {"SetCoatRoughness", PyvtkProperty_SetCoatRoughness, METH_VARARGS,
   "SetCoatRoughness(self, _arg:float) -> None\nC++: virtual void SetCoatRoughness(double _arg)\n\nSet/Get the coat layer roughness coefficient. This value has to\nbe between 0 (glossy) and 1 (rough). This parameter is only used\nby PBR Interpolation. Default value is 0.0\n"},
  {"GetCoatRoughnessMinValue", PyvtkProperty_GetCoatRoughnessMinValue, METH_VARARGS,
   "GetCoatRoughnessMinValue(self) -> float\nC++: virtual double GetCoatRoughnessMinValue()\n\n"},
  {"GetCoatRoughnessMaxValue", PyvtkProperty_GetCoatRoughnessMaxValue, METH_VARARGS,
   "GetCoatRoughnessMaxValue(self) -> float\nC++: virtual double GetCoatRoughnessMaxValue()\n\n"},
  {"GetCoatRoughness", PyvtkProperty_GetCoatRoughness, METH_VARARGS,
   "GetCoatRoughness(self) -> float\nC++: virtual double GetCoatRoughness()\n\n"},
  {"SetCoatStrength", PyvtkProperty_SetCoatStrength, METH_VARARGS,
   "SetCoatStrength(self, _arg:float) -> None\nC++: virtual void SetCoatStrength(double _arg)\n\nSet/Get the coat layer strength coefficient. This value affects\nthe strength of the coat layer reflection. This parameter is only\nused by PBR Interpolation. Default value is 0.0\n"},
  {"GetCoatStrengthMinValue", PyvtkProperty_GetCoatStrengthMinValue, METH_VARARGS,
   "GetCoatStrengthMinValue(self) -> float\nC++: virtual double GetCoatStrengthMinValue()\n\n"},
  {"GetCoatStrengthMaxValue", PyvtkProperty_GetCoatStrengthMaxValue, METH_VARARGS,
   "GetCoatStrengthMaxValue(self) -> float\nC++: virtual double GetCoatStrengthMaxValue()\n\n"},
  {"GetCoatStrength", PyvtkProperty_GetCoatStrength, METH_VARARGS,
   "GetCoatStrength(self) -> float\nC++: virtual double GetCoatStrength()\n\n"},
  {"SetCoatColor", PyvtkProperty_SetCoatColor, METH_VARARGS,
   "SetCoatColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCoatColor(double _arg1, double _arg2,\n    double _arg3)\nSetCoatColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCoatColor(const double _arg[3])\n\nSet/Get the color of the coat layer. This value is only used by\nPBR Interpolation. Default value is white [1.0, 1.0, 1.0]\n"},
  {"GetCoatColor", PyvtkProperty_GetCoatColor, METH_VARARGS,
   "GetCoatColor(self) -> (float, float, float)\nC++: virtual double *GetCoatColor()\n\n"},
  {"SetCoatNormalScale", PyvtkProperty_SetCoatNormalScale, METH_VARARGS,
   "SetCoatNormalScale(self, _arg:float) -> None\nC++: virtual void SetCoatNormalScale(double _arg)\n\nSet/Get the coat layer normal scale coefficient. This value\naffects the strength of the normal deviation from the coat normal\ntexture. This parameter is only used by PBR Interpolation.\nDefault value is 1.0\n"},
  {"GetCoatNormalScaleMinValue", PyvtkProperty_GetCoatNormalScaleMinValue, METH_VARARGS,
   "GetCoatNormalScaleMinValue(self) -> float\nC++: virtual double GetCoatNormalScaleMinValue()\n\n"},
  {"GetCoatNormalScaleMaxValue", PyvtkProperty_GetCoatNormalScaleMaxValue, METH_VARARGS,
   "GetCoatNormalScaleMaxValue(self) -> float\nC++: virtual double GetCoatNormalScaleMaxValue()\n\n"},
  {"GetCoatNormalScale", PyvtkProperty_GetCoatNormalScale, METH_VARARGS,
   "GetCoatNormalScale(self) -> float\nC++: virtual double GetCoatNormalScale()\n\n"},
  {"SetNormalScale", PyvtkProperty_SetNormalScale, METH_VARARGS,
   "SetNormalScale(self, _arg:float) -> None\nC++: virtual void SetNormalScale(double _arg)\n\nSet/Get the normal scale coefficient. This value affects the\nstrength of the normal deviation from the texture. Default value\nis 1.0\n"},
  {"GetNormalScale", PyvtkProperty_GetNormalScale, METH_VARARGS,
   "GetNormalScale(self) -> float\nC++: virtual double GetNormalScale()\n\n"},
  {"SetOcclusionStrength", PyvtkProperty_SetOcclusionStrength, METH_VARARGS,
   "SetOcclusionStrength(self, _arg:float) -> None\nC++: virtual void SetOcclusionStrength(double _arg)\n\nSet/Get the occlusion strength coefficient. This value affects\nthe strength of the occlusion if a material texture is present.\nThis parameter is only used by PBR Interpolation. Default value\nis 1.0\n"},
  {"GetOcclusionStrengthMinValue", PyvtkProperty_GetOcclusionStrengthMinValue, METH_VARARGS,
   "GetOcclusionStrengthMinValue(self) -> float\nC++: virtual double GetOcclusionStrengthMinValue()\n\n"},
  {"GetOcclusionStrengthMaxValue", PyvtkProperty_GetOcclusionStrengthMaxValue, METH_VARARGS,
   "GetOcclusionStrengthMaxValue(self) -> float\nC++: virtual double GetOcclusionStrengthMaxValue()\n\n"},
  {"GetOcclusionStrength", PyvtkProperty_GetOcclusionStrength, METH_VARARGS,
   "GetOcclusionStrength(self) -> float\nC++: virtual double GetOcclusionStrength()\n\n"},
  {"SetEmissiveFactor", PyvtkProperty_SetEmissiveFactor, METH_VARARGS,
   "SetEmissiveFactor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetEmissiveFactor(double _arg1, double _arg2,\n    double _arg3)\nSetEmissiveFactor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetEmissiveFactor(const double _arg[3])\n\nSet/Get the emissive factor. This value is multiplied with the\nemissive color when an emissive texture is present. This\nparameter is only used by PBR Interpolation. Default value is\n[1.0, 1.0, 1.0]\n"},
  {"GetEmissiveFactor", PyvtkProperty_GetEmissiveFactor, METH_VARARGS,
   "GetEmissiveFactor(self) -> (float, float, float)\nC++: virtual double *GetEmissiveFactor()\n\n"},
  {"SetEdgeTint", PyvtkProperty_SetEdgeTint, METH_VARARGS,
   "SetEdgeTint(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetEdgeTint(double _arg1, double _arg2,\n    double _arg3)\nSetEdgeTint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetEdgeTint(const double _arg[3])\n\nSet/Get the edge tint (for metals only). Set the color at grazing\nangle (fresnel reflectance). This parameter is only used by PBR\nInterpolation. Default value is [1.0, 1.0, 1.0]\n"},
  {"GetEdgeTint", PyvtkProperty_GetEdgeTint, METH_VARARGS,
   "GetEdgeTint(self) -> (float, float, float)\nC++: virtual double *GetEdgeTint()\n\n"},
  {"SetAmbient", PyvtkProperty_SetAmbient, METH_VARARGS,
   "SetAmbient(self, _arg:float) -> None\nC++: virtual void SetAmbient(double _arg)\n\nSet/Get the ambient lighting coefficient.\n"},
  {"GetAmbientMinValue", PyvtkProperty_GetAmbientMinValue, METH_VARARGS,
   "GetAmbientMinValue(self) -> float\nC++: virtual double GetAmbientMinValue()\n\n"},
  {"GetAmbientMaxValue", PyvtkProperty_GetAmbientMaxValue, METH_VARARGS,
   "GetAmbientMaxValue(self) -> float\nC++: virtual double GetAmbientMaxValue()\n\n"},
  {"GetAmbient", PyvtkProperty_GetAmbient, METH_VARARGS,
   "GetAmbient(self) -> float\nC++: virtual double GetAmbient()\n\n"},
  {"SetDiffuse", PyvtkProperty_SetDiffuse, METH_VARARGS,
   "SetDiffuse(self, _arg:float) -> None\nC++: virtual void SetDiffuse(double _arg)\n\nSet/Get the diffuse lighting coefficient.\n"},
  {"GetDiffuseMinValue", PyvtkProperty_GetDiffuseMinValue, METH_VARARGS,
   "GetDiffuseMinValue(self) -> float\nC++: virtual double GetDiffuseMinValue()\n\n"},
  {"GetDiffuseMaxValue", PyvtkProperty_GetDiffuseMaxValue, METH_VARARGS,
   "GetDiffuseMaxValue(self) -> float\nC++: virtual double GetDiffuseMaxValue()\n\n"},
  {"GetDiffuse", PyvtkProperty_GetDiffuse, METH_VARARGS,
   "GetDiffuse(self) -> float\nC++: virtual double GetDiffuse()\n\n"},
  {"SetSpecular", PyvtkProperty_SetSpecular, METH_VARARGS,
   "SetSpecular(self, _arg:float) -> None\nC++: virtual void SetSpecular(double _arg)\n\nSet/Get the specular lighting coefficient.\n"},
  {"GetSpecularMinValue", PyvtkProperty_GetSpecularMinValue, METH_VARARGS,
   "GetSpecularMinValue(self) -> float\nC++: virtual double GetSpecularMinValue()\n\n"},
  {"GetSpecularMaxValue", PyvtkProperty_GetSpecularMaxValue, METH_VARARGS,
   "GetSpecularMaxValue(self) -> float\nC++: virtual double GetSpecularMaxValue()\n\n"},
  {"GetSpecular", PyvtkProperty_GetSpecular, METH_VARARGS,
   "GetSpecular(self) -> float\nC++: virtual double GetSpecular()\n\n"},
  {"SetSpecularPower", PyvtkProperty_SetSpecularPower, METH_VARARGS,
   "SetSpecularPower(self, _arg:float) -> None\nC++: virtual void SetSpecularPower(double _arg)\n\nSet/Get the specular power.\n"},
  {"GetSpecularPowerMinValue", PyvtkProperty_GetSpecularPowerMinValue, METH_VARARGS,
   "GetSpecularPowerMinValue(self) -> float\nC++: virtual double GetSpecularPowerMinValue()\n\n"},
  {"GetSpecularPowerMaxValue", PyvtkProperty_GetSpecularPowerMaxValue, METH_VARARGS,
   "GetSpecularPowerMaxValue(self) -> float\nC++: virtual double GetSpecularPowerMaxValue()\n\n"},
  {"GetSpecularPower", PyvtkProperty_GetSpecularPower, METH_VARARGS,
   "GetSpecularPower(self) -> float\nC++: virtual double GetSpecularPower()\n\n"},
  {"SetOpacity", PyvtkProperty_SetOpacity, METH_VARARGS,
   "SetOpacity(self, _arg:float) -> None\nC++: virtual void SetOpacity(double _arg)\n\nSet/Get the object's opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetOpacityMinValue", PyvtkProperty_GetOpacityMinValue, METH_VARARGS,
   "GetOpacityMinValue(self) -> float\nC++: virtual double GetOpacityMinValue()\n\n"},
  {"GetOpacityMaxValue", PyvtkProperty_GetOpacityMaxValue, METH_VARARGS,
   "GetOpacityMaxValue(self) -> float\nC++: virtual double GetOpacityMaxValue()\n\n"},
  {"GetOpacity", PyvtkProperty_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual double GetOpacity()\n\n"},
  {"SetEdgeOpacity", PyvtkProperty_SetEdgeOpacity, METH_VARARGS,
   "SetEdgeOpacity(self, _arg:float) -> None\nC++: virtual void SetEdgeOpacity(double _arg)\n\nSet/Get the line opacity. 1.0 is totally opaque and 0.0 is\ncompletely transparent.\n"},
  {"GetEdgeOpacityMinValue", PyvtkProperty_GetEdgeOpacityMinValue, METH_VARARGS,
   "GetEdgeOpacityMinValue(self) -> float\nC++: virtual double GetEdgeOpacityMinValue()\n\n"},
  {"GetEdgeOpacityMaxValue", PyvtkProperty_GetEdgeOpacityMaxValue, METH_VARARGS,
   "GetEdgeOpacityMaxValue(self) -> float\nC++: virtual double GetEdgeOpacityMaxValue()\n\n"},
  {"GetEdgeOpacity", PyvtkProperty_GetEdgeOpacity, METH_VARARGS,
   "GetEdgeOpacity(self) -> float\nC++: virtual double GetEdgeOpacity()\n\n"},
  {"SetAmbientColor", PyvtkProperty_SetAmbientColor, METH_VARARGS,
   "SetAmbientColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAmbientColor(double _arg1, double _arg2,\n    double _arg3)\nSetAmbientColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAmbientColor(const double _arg[3])\n\nSet/Get the ambient surface color. Not all renderers support\nseparate ambient and diffuse colors. From a physical standpoint\nit really doesn't make too much sense to have both. For the\nrendering libraries that don't support both, the diffuse color is\nused.\n"},
  {"GetAmbientColor", PyvtkProperty_GetAmbientColor, METH_VARARGS,
   "GetAmbientColor(self) -> (float, float, float)\nC++: virtual double *GetAmbientColor()\n\n"},
  {"SetDiffuseColor", PyvtkProperty_SetDiffuseColor, METH_VARARGS,
   "SetDiffuseColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDiffuseColor(double _arg1, double _arg2,\n    double _arg3)\nSetDiffuseColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDiffuseColor(const double _arg[3])\n\nSet/Get the diffuse surface color. For PBR Interpolation,\nDiffuseColor is used as the base color\n"},
  {"GetDiffuseColor", PyvtkProperty_GetDiffuseColor, METH_VARARGS,
   "GetDiffuseColor(self) -> (float, float, float)\nC++: virtual double *GetDiffuseColor()\n\n"},
  {"SetSpecularColor", PyvtkProperty_SetSpecularColor, METH_VARARGS,
   "SetSpecularColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetSpecularColor(double _arg1, double _arg2,\n    double _arg3)\nSetSpecularColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSpecularColor(const double _arg[3])\n\nSet/Get the specular surface color.\n"},
  {"GetSpecularColor", PyvtkProperty_GetSpecularColor, METH_VARARGS,
   "GetSpecularColor(self) -> (float, float, float)\nC++: virtual double *GetSpecularColor()\n\n"},
  {"GetEdgeVisibility", PyvtkProperty_GetEdgeVisibility, METH_VARARGS,
   "GetEdgeVisibility(self) -> int\nC++: virtual vtkTypeBool GetEdgeVisibility()\n\nTurn on/off the visibility of edges. On some renderers it is\npossible to render the edges of geometric primitives separately\nfrom the interior.\n"},
  {"SetEdgeVisibility", PyvtkProperty_SetEdgeVisibility, METH_VARARGS,
   "SetEdgeVisibility(self, _arg:int) -> None\nC++: virtual void SetEdgeVisibility(vtkTypeBool _arg)\n\n"},
  {"EdgeVisibilityOn", PyvtkProperty_EdgeVisibilityOn, METH_VARARGS,
   "EdgeVisibilityOn(self) -> None\nC++: virtual void EdgeVisibilityOn()\n\n"},
  {"EdgeVisibilityOff", PyvtkProperty_EdgeVisibilityOff, METH_VARARGS,
   "EdgeVisibilityOff(self) -> None\nC++: virtual void EdgeVisibilityOff()\n\n"},
  {"SetEdgeColor", PyvtkProperty_SetEdgeColor, METH_VARARGS,
   "SetEdgeColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetEdgeColor(double _arg1, double _arg2,\n    double _arg3)\nSetEdgeColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetEdgeColor(const double _arg[3])\n\nSet/Get the color of primitive edges (if edge visibility is\nenabled).\n"},
  {"GetEdgeColor", PyvtkProperty_GetEdgeColor, METH_VARARGS,
   "GetEdgeColor(self) -> (float, float, float)\nC++: virtual double *GetEdgeColor()\n\n"},
  {"GetVertexVisibility", PyvtkProperty_GetVertexVisibility, METH_VARARGS,
   "GetVertexVisibility(self) -> int\nC++: virtual vtkTypeBool GetVertexVisibility()\n\nTurn on/off the visibility of vertices. On some renderers it is\npossible to render the vertices of geometric primitives\nseparately from the interior.\n"},
  {"SetVertexVisibility", PyvtkProperty_SetVertexVisibility, METH_VARARGS,
   "SetVertexVisibility(self, _arg:int) -> None\nC++: virtual void SetVertexVisibility(vtkTypeBool _arg)\n\n"},
  {"VertexVisibilityOn", PyvtkProperty_VertexVisibilityOn, METH_VARARGS,
   "VertexVisibilityOn(self) -> None\nC++: virtual void VertexVisibilityOn()\n\n"},
  {"VertexVisibilityOff", PyvtkProperty_VertexVisibilityOff, METH_VARARGS,
   "VertexVisibilityOff(self) -> None\nC++: virtual void VertexVisibilityOff()\n\n"},
  {"SetVertexColor", PyvtkProperty_SetVertexColor, METH_VARARGS,
   "SetVertexColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetVertexColor(double _arg1, double _arg2,\n    double _arg3)\nSetVertexColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetVertexColor(const double _arg[3])\n\nSet/Get the color of primitive vertices (if vertex visibility is\nenabled).\n"},
  {"GetVertexColor", PyvtkProperty_GetVertexColor, METH_VARARGS,
   "GetVertexColor(self) -> (float, float, float)\nC++: virtual double *GetVertexColor()\n\n"},
  {"SetSelectionColor", PyvtkProperty_SetSelectionColor, METH_VARARGS,
   "SetSelectionColor(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetSelectionColor(double _arg1, double _arg2,\n    double _arg3, double _arg4)\nSetSelectionColor(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetSelectionColor(const double _arg[4])\n\nSet/Get the RGBA color of selection primitives (if a selection is\nactive on the mapper). Default is red and opaque.\n"},
  {"GetSelectionColor", PyvtkProperty_GetSelectionColor, METH_VARARGS,
   "GetSelectionColor(self) -> (float, float, float, float)\nC++: virtual double *GetSelectionColor()\n\n"},
  {"SetSelectionLineWidth", PyvtkProperty_SetSelectionLineWidth, METH_VARARGS,
   "SetSelectionLineWidth(self, _arg:float) -> None\nC++: virtual void SetSelectionLineWidth(float _arg)\n\nSet/Get the selection line width. Default is 2.\n"},
  {"GetSelectionLineWidth", PyvtkProperty_GetSelectionLineWidth, METH_VARARGS,
   "GetSelectionLineWidth(self) -> float\nC++: virtual float GetSelectionLineWidth()\n\n"},
  {"SetSelectionPointSize", PyvtkProperty_SetSelectionPointSize, METH_VARARGS,
   "SetSelectionPointSize(self, _arg:float) -> None\nC++: virtual void SetSelectionPointSize(float _arg)\n\nSet/Get the selection point size. Default is 2.\n"},
  {"GetSelectionPointSize", PyvtkProperty_GetSelectionPointSize, METH_VARARGS,
   "GetSelectionPointSize(self) -> float\nC++: virtual float GetSelectionPointSize()\n\n"},
  {"SetLineWidth", PyvtkProperty_SetLineWidth, METH_VARARGS,
   "SetLineWidth(self, _arg:float) -> None\nC++: virtual void SetLineWidth(float _arg)\n\nSet/Get the width of a Line. The width is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetLineWidthMinValue", PyvtkProperty_GetLineWidthMinValue, METH_VARARGS,
   "GetLineWidthMinValue(self) -> float\nC++: virtual float GetLineWidthMinValue()\n\n"},
  {"GetLineWidthMaxValue", PyvtkProperty_GetLineWidthMaxValue, METH_VARARGS,
   "GetLineWidthMaxValue(self) -> float\nC++: virtual float GetLineWidthMaxValue()\n\n"},
  {"GetLineWidth", PyvtkProperty_GetLineWidth, METH_VARARGS,
   "GetLineWidth(self) -> float\nC++: virtual float GetLineWidth()\n\n"},
  {"SetLineStipplePattern", PyvtkProperty_SetLineStipplePattern, METH_VARARGS,
   "SetLineStipplePattern(self, _arg:int) -> None\nC++: virtual void SetLineStipplePattern(int _arg)\n\nSet/Get the stippling pattern of a Line, as a 16-bit binary\npattern (1 = pixel on, 0 = pixel off). This is only implemented\nfor OpenGL, not OpenGL2. The default is 0xFFFF.\n"},
  {"GetLineStipplePattern", PyvtkProperty_GetLineStipplePattern, METH_VARARGS,
   "GetLineStipplePattern(self) -> int\nC++: virtual int GetLineStipplePattern()\n\n"},
  {"SetLineStippleRepeatFactor", PyvtkProperty_SetLineStippleRepeatFactor, METH_VARARGS,
   "SetLineStippleRepeatFactor(self, _arg:int) -> None\nC++: virtual void SetLineStippleRepeatFactor(int _arg)\n\nSet/Get the stippling repeat factor of a Line, which specifies\nhow many times each bit in the pattern is to be repeated. This is\nonly implemented for OpenGL, not OpenGL2. The default is 1.\n"},
  {"GetLineStippleRepeatFactorMinValue", PyvtkProperty_GetLineStippleRepeatFactorMinValue, METH_VARARGS,
   "GetLineStippleRepeatFactorMinValue(self) -> int\nC++: virtual int GetLineStippleRepeatFactorMinValue()\n\n"},
  {"GetLineStippleRepeatFactorMaxValue", PyvtkProperty_GetLineStippleRepeatFactorMaxValue, METH_VARARGS,
   "GetLineStippleRepeatFactorMaxValue(self) -> int\nC++: virtual int GetLineStippleRepeatFactorMaxValue()\n\n"},
  {"GetLineStippleRepeatFactor", PyvtkProperty_GetLineStippleRepeatFactor, METH_VARARGS,
   "GetLineStippleRepeatFactor(self) -> int\nC++: virtual int GetLineStippleRepeatFactor()\n\n"},
  {"SetPointSize", PyvtkProperty_SetPointSize, METH_VARARGS,
   "SetPointSize(self, _arg:float) -> None\nC++: virtual void SetPointSize(float _arg)\n\nSet/Get the diameter of a point. The size is expressed in screen\nunits. This is only implemented for OpenGL. The default is 1.0.\n"},
  {"GetPointSizeMinValue", PyvtkProperty_GetPointSizeMinValue, METH_VARARGS,
   "GetPointSizeMinValue(self) -> float\nC++: virtual float GetPointSizeMinValue()\n\n"},
  {"GetPointSizeMaxValue", PyvtkProperty_GetPointSizeMaxValue, METH_VARARGS,
   "GetPointSizeMaxValue(self) -> float\nC++: virtual float GetPointSizeMaxValue()\n\n"},
  {"GetPointSize", PyvtkProperty_GetPointSize, METH_VARARGS,
   "GetPointSize(self) -> float\nC++: virtual float GetPointSize()\n\n"},
  {"GetBackfaceCulling", PyvtkProperty_GetBackfaceCulling, METH_VARARGS,
   "GetBackfaceCulling(self) -> int\nC++: virtual vtkTypeBool GetBackfaceCulling()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If backface culling is on,\npolygons facing away from camera are not drawn.\n"},
  {"SetBackfaceCulling", PyvtkProperty_SetBackfaceCulling, METH_VARARGS,
   "SetBackfaceCulling(self, _arg:int) -> None\nC++: virtual void SetBackfaceCulling(vtkTypeBool _arg)\n\n"},
  {"BackfaceCullingOn", PyvtkProperty_BackfaceCullingOn, METH_VARARGS,
   "BackfaceCullingOn(self) -> None\nC++: virtual void BackfaceCullingOn()\n\n"},
  {"BackfaceCullingOff", PyvtkProperty_BackfaceCullingOff, METH_VARARGS,
   "BackfaceCullingOff(self) -> None\nC++: virtual void BackfaceCullingOff()\n\n"},
  {"GetFrontfaceCulling", PyvtkProperty_GetFrontfaceCulling, METH_VARARGS,
   "GetFrontfaceCulling(self) -> int\nC++: virtual vtkTypeBool GetFrontfaceCulling()\n\nTurn on/off fast culling of polygons based on orientation of\nnormal with respect to camera. If frontface culling is on,\npolygons facing towards camera are not drawn.\n"},
  {"SetFrontfaceCulling", PyvtkProperty_SetFrontfaceCulling, METH_VARARGS,
   "SetFrontfaceCulling(self, _arg:int) -> None\nC++: virtual void SetFrontfaceCulling(vtkTypeBool _arg)\n\n"},
  {"FrontfaceCullingOn", PyvtkProperty_FrontfaceCullingOn, METH_VARARGS,
   "FrontfaceCullingOn(self) -> None\nC++: virtual void FrontfaceCullingOn()\n\n"},
  {"FrontfaceCullingOff", PyvtkProperty_FrontfaceCullingOff, METH_VARARGS,
   "FrontfaceCullingOff(self) -> None\nC++: virtual void FrontfaceCullingOff()\n\n"},
  {"SetMaterialName", PyvtkProperty_SetMaterialName, METH_VARARGS,
   "SetMaterialName(self, _arg:str) -> None\nC++: virtual void SetMaterialName(const char *_arg)\n\nReturns the name of the material currently loaded, if any.\n"},
  {"GetMaterialName", PyvtkProperty_GetMaterialName, METH_VARARGS,
   "GetMaterialName(self) -> str\nC++: virtual char *GetMaterialName()\n\n"},
  {"SetShading", PyvtkProperty_SetShading, METH_VARARGS,
   "SetShading(self, _arg:int) -> None\nC++: virtual void SetShading(vtkTypeBool _arg)\n\nEnable/Disable shading. When shading is enabled, the Material\nmust be set.\n"},
  {"GetShading", PyvtkProperty_GetShading, METH_VARARGS,
   "GetShading(self) -> int\nC++: virtual vtkTypeBool GetShading()\n\n"},
  {"ShadingOn", PyvtkProperty_ShadingOn, METH_VARARGS,
   "ShadingOn(self) -> None\nC++: virtual void ShadingOn()\n\n"},
  {"ShadingOff", PyvtkProperty_ShadingOff, METH_VARARGS,
   "ShadingOff(self) -> None\nC++: virtual void ShadingOff()\n\n"},
  {"AddShaderVariable", PyvtkProperty_AddShaderVariable, METH_VARARGS,
   "AddShaderVariable(self, name:str, numVars:int, x:[int, ...])\n    -> None\nC++: virtual void AddShaderVariable(const char *name, int numVars,\n     int *x)\nAddShaderVariable(self, name:str, numVars:int, x:[float, ...])\n    -> None\nC++: virtual void AddShaderVariable(const char *name, int numVars,\n     double *x)\nAddShaderVariable(self, name:str, v:int) -> None\nC++: void AddShaderVariable(const char *name, int v)\nAddShaderVariable(self, name:str, v:float) -> None\nC++: void AddShaderVariable(const char *name, double v)\nAddShaderVariable(self, name:str, v1:int, v2:int) -> None\nC++: void AddShaderVariable(const char *name, int v1, int v2)\nAddShaderVariable(self, name:str, v1:float, v2:float) -> None\nC++: void AddShaderVariable(const char *name, double v1,\n    double v2)\nAddShaderVariable(self, name:str, v1:int, v2:int, v3:int) -> None\nC++: void AddShaderVariable(const char *name, int v1, int v2,\n    int v3)\nAddShaderVariable(self, name:str, v1:float, v2:float, v3:float)\n    -> None\nC++: void AddShaderVariable(const char *name, double v1,\n    double v2, double v3)\n\nProvide values to initialize shader variables. Useful to\ninitialize shader variables that change over time (animation, GUI\nwidgets inputs, etc. )\n- name - hardware name of the uniform variable\n- numVars - number of variables being set\n- x - values\n"},
  {"SetShowTexturesOnBackface", PyvtkProperty_SetShowTexturesOnBackface, METH_VARARGS,
   "SetShowTexturesOnBackface(self, _arg:bool) -> None\nC++: virtual void SetShowTexturesOnBackface(bool _arg)\n\nShow texture maps when the geometry is backfacing. Texture maps\nare always shown when frontfacing. By default this is true.\n"},
  {"GetShowTexturesOnBackface", PyvtkProperty_GetShowTexturesOnBackface, METH_VARARGS,
   "GetShowTexturesOnBackface(self) -> bool\nC++: virtual bool GetShowTexturesOnBackface()\n\n"},
  {"ShowTexturesOnBackfaceOn", PyvtkProperty_ShowTexturesOnBackfaceOn, METH_VARARGS,
   "ShowTexturesOnBackfaceOn(self) -> None\nC++: virtual void ShowTexturesOnBackfaceOn()\n\n"},
  {"ShowTexturesOnBackfaceOff", PyvtkProperty_ShowTexturesOnBackfaceOff, METH_VARARGS,
   "ShowTexturesOnBackfaceOff(self) -> None\nC++: virtual void ShowTexturesOnBackfaceOff()\n\n"},
  {"SetTexture", PyvtkProperty_SetTexture, METH_VARARGS,
   "SetTexture(self, name:str, texture:vtkTexture) -> None\nC++: void SetTexture(const char *name, vtkTexture *texture)\n\nSet/Get the texture object to control rendering texture maps.\nThis will be a vtkTexture object. A property does not need to\nhave an associated texture map and multiple properties can share\none texture. Textures must be assigned unique names. Note that\nfor texture blending the textures will be rendering is\nalphabetical order and after any texture defined in the actor.\nThere exists 6 special textures with reserved names: \"albedoTex\",\n\"materialTex\", \"normalTex\", \"emissiveTex\", \"anisotropyTex\" and\n\"coatNormalTex\". While these textures can be added with the\nregular SetTexture method, it is preferred to use the methods\nSetBaseColorTexture, SetORMTexture, SetNormalTexture,\nSetEmissiveTexture, SetAnisotropyTexture and SetCoatNormalTex\nrespectively.\n"},
  {"GetTexture", PyvtkProperty_GetTexture, METH_VARARGS,
   "GetTexture(self, name:str) -> vtkTexture\nC++: vtkTexture *GetTexture(const char *name)\n\n"},
  {"SetBaseColorTexture", PyvtkProperty_SetBaseColorTexture, METH_VARARGS,
   "SetBaseColorTexture(self, texture:vtkTexture) -> None\nC++: void SetBaseColorTexture(vtkTexture *texture)\n\nSet the base color texture. Also called albedo, this texture is\nonly used while rendering with PBR interpolation. This is the\ncolor of the object. This texture must be in sRGB color space.\n@sa SetInterpolationToPBR vtkTexture::UseSRGBColorSpaceOn\n"},
  {"SetORMTexture", PyvtkProperty_SetORMTexture, METH_VARARGS,
   "SetORMTexture(self, texture:vtkTexture) -> None\nC++: void SetORMTexture(vtkTexture *texture)\n\nSet the ORM texture. This texture contains three RGB independent\ncomponents corresponding to the Occlusion value, Roughness value\nand Metallic value respectively. Each texture value is scaled by\nthe Occlusion strength, roughness coefficient and metallic\ncoefficient. This texture must be in linear color space. This is\nonly used by the PBR shading model.\n@sa SetInterpolationToPBR SetOcclusionStrength SetMetallic\n    SetRoughness\n"},
  {"SetAnisotropyTexture", PyvtkProperty_SetAnisotropyTexture, METH_VARARGS,
   "SetAnisotropyTexture(self, texture:vtkTexture) -> None\nC++: void SetAnisotropyTexture(vtkTexture *texture)\n\nSet the anisotropy texture. This texture contains two independent\ncomponents corresponding to the anisotropy value and anisotropy\nrotation. The last component (blue channel) is discarded. The\nanisotropy value is scaled by the anisotropy coefficient of the\nmaterial. The anisotropy rotation rotates the direction of the\nanisotropy (ie. the tangent) around the normal and is not scaled\nby the anisotropy rotation coefficient. This texture must be in\nlinear color space. This is only used by the PBR shading model.\n@sa SetInterpolationToPBR SetAnisotropy\n"},
  {"SetNormalTexture", PyvtkProperty_SetNormalTexture, METH_VARARGS,
   "SetNormalTexture(self, texture:vtkTexture) -> None\nC++: void SetNormalTexture(vtkTexture *texture)\n\nSet the normal texture. This texture is required for normal\nmapping. It is valid for both PBR and Phong interpolation. The\nnormal mapping is enabled if this texture is present and both\nnormals and tangents are presents in the vtkPolyData. This\ntexture must be in linear color space.\n@sa vtkPolyDataTangents SetNormalScale\n"},
  {"SetEmissiveTexture", PyvtkProperty_SetEmissiveTexture, METH_VARARGS,
   "SetEmissiveTexture(self, texture:vtkTexture) -> None\nC++: void SetEmissiveTexture(vtkTexture *texture)\n\nSet the emissive texture. When present, this RGB texture provides\nlocation and color to the shader where the vtkPolyData should\nemit light. Emitted light is scaled by EmissiveFactor. This is\nonly supported by PBR interpolation model. This texture must be\nin sRGB color space.\n@sa SetInterpolationToPBR SetEmissiveFactor\n    vtkTexture::UseSRGBColorSpaceOn\n"},
  {"SetCoatNormalTexture", PyvtkProperty_SetCoatNormalTexture, METH_VARARGS,
   "SetCoatNormalTexture(self, texture:vtkTexture) -> None\nC++: void SetCoatNormalTexture(vtkTexture *texture)\n\nSet the coat normal texture. This texture is required for coat\nnormal mapping. It is valid only for PBR interpolation. The coat\nnormal mapping is enabled if this texture is present and both\nnormals and tangents are presents in the vtkPolyData. This\ntexture must be in linear color space.\n@sa vtkPolyDataTangents SetCoatNormalScale\n"},
  {"RemoveTexture", PyvtkProperty_RemoveTexture, METH_VARARGS,
   "RemoveTexture(self, name:str) -> None\nC++: void RemoveTexture(const char *name)\n\nRemove a texture from the collection.\n"},
  {"RemoveAllTextures", PyvtkProperty_RemoveAllTextures, METH_VARARGS,
   "RemoveAllTextures(self) -> None\nC++: void RemoveAllTextures()\n\nRemove all the textures.\n"},
  {"GetNumberOfTextures", PyvtkProperty_GetNumberOfTextures, METH_VARARGS,
   "GetNumberOfTextures(self) -> int\nC++: int GetNumberOfTextures()\n\nReturns the number of textures in this property.\n"},
  {"ReleaseGraphicsResources", PyvtkProperty_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: virtual void ReleaseGraphicsResources(vtkWindow *win)\n\nRelease any graphics resources that are being consumed by this\nproperty. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetInformation", PyvtkProperty_GetInformation, METH_VARARGS,
   "GetInformation(self) -> vtkInformation\nC++: virtual vtkInformation *GetInformation()\n\nSet/Get the information object associated with the Property.\n"},
  {"SetInformation", PyvtkProperty_SetInformation, METH_VARARGS,
   "SetInformation(self, __a:vtkInformation) -> None\nC++: virtual void SetInformation(vtkInformation *)\n\n"},
  {"ComputeReflectanceFromIOR", PyvtkProperty_ComputeReflectanceFromIOR, METH_VARARGS,
   "ComputeReflectanceFromIOR(IORTo:float, IORFrom:float) -> float\nC++: static double ComputeReflectanceFromIOR(double IORTo,\n    double IORFrom)\n\nFor PBR, calculate the reflectance from the refractive index of\ningoing and outgoing interfaces.\n"},
  {"ComputeIORFromReflectance", PyvtkProperty_ComputeIORFromReflectance, METH_VARARGS,
   "ComputeIORFromReflectance(reflectance:float, ior:float) -> float\nC++: static double ComputeIORFromReflectance(double reflectance,\n    double ior)\n\nFor PBR, calculate the refractive index from the reflectance of\nthe interface and the refractive index of one of both medium.\n"},
  {"ComputeReflectanceOfBaseLayer", PyvtkProperty_ComputeReflectanceOfBaseLayer, METH_VARARGS,
   "ComputeReflectanceOfBaseLayer(self) -> float\nC++: double ComputeReflectanceOfBaseLayer()\n\nFor PBR, calculate the reflectance of the base layer depending on\nthe presence of a coat layer. If there is no coat layer, the\nreflectance is the one at the interface environment - base layer.\nIf a coat layer is present, the reflectance is the one at the\ninterface between the base and the coat layer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProperty_Doc =
  "vtkProperty - represent surface properties of a geometric object\n\n"
  "Superclass: vtkObject\n\n"
  "vtkProperty is an object that represents lighting and other surface\n"
  "properties of a geometric object. The primary properties that can be\n"
  "set are colors (overall, ambient, diffuse, specular, and edge color);\n"
  "specular power; opacity of the object; the representation of the\n"
  "object (points, wireframe, or surface); and the shading method to be\n"
  "used (flat, Gouraud, and Phong). Also, some special graphics features\n"
  "like backface properties can be set and manipulated with this object.\n\n"
  "@sa\n"
  "vtkActor vtkPropertyDevice\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkProperty", // tp_name
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
  PyvtkProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProperty_StaticNew()
{
  return vtkProperty::New();
}

PyObject *PyvtkProperty_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProperty_Type, PyvtkProperty_Methods,
    "vtkProperty",
 &PyvtkProperty_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProperty", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_FLAT", 0 },
        { "VTK_GOURAUD", 1 },
        { "VTK_PHONG", 2 },
        { "VTK_PBR", 3 },
        { "VTK_POINTS", 0 },
        { "VTK_WIREFRAME", 1 },
        { "VTK_SURFACE", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

