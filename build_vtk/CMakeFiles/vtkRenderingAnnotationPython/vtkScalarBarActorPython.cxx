// python wrapper for vtkScalarBarActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkScalarBarActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarBarActor(PyObject *dict); }
extern "C" { PyObject *PyvtkScalarBarActor_ClassNew(); }


static PyObject *
PyvtkScalarBarActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarBarActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarBarActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarBarActor *tempr = vtkScalarBarActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarBarActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarBarActor::NewInstance());

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
PyvtkScalarBarActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkScalarBarActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkScalarBarActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkScalarBarActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkScalarBarActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkScalarBarActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkScalarBarActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      op->vtkScalarBarActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetScalarBarRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarBarRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  vtkViewport *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkViewport"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetScalarBarRect(temp0, temp1);
    }
    else
    {
      op->vtkScalarBarActor::GetScalarBarRect(temp0, temp1);
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
PyvtkScalarBarActor_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkScalarBarActor::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetUseOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseOpacity(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetUseOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetUseOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseOpacity() :
      op->vtkScalarBarActor::GetUseOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseOpacityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpacityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOpacityOn();
    }
    else
    {
      op->vtkScalarBarActor::UseOpacityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseOpacityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseOpacityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseOpacityOff();
    }
    else
    {
      op->vtkScalarBarActor::UseOpacityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfColors(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetMaximumNumberOfColors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColorsMinValue() :
      op->vtkScalarBarActor::GetMaximumNumberOfColorsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColorsMaxValue() :
      op->vtkScalarBarActor::GetMaximumNumberOfColorsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumNumberOfColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfColors() :
      op->vtkScalarBarActor::GetMaximumNumberOfColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMinValue() :
      op->vtkScalarBarActor::GetNumberOfLabelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabelsMaxValue() :
      op->vtkScalarBarActor::GetNumberOfLabelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkScalarBarActor::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetCustomLabels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetCustomLabels() :
      op->vtkScalarBarActor::GetCustomLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCustomLabels() :
      op->vtkScalarBarActor::GetUseCustomLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetUseCustomLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomLabels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetUseCustomLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseCustomLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomLabelsOn();
    }
    else
    {
      op->vtkScalarBarActor::UseCustomLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UseCustomLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomLabelsOff();
    }
    else
    {
      op->vtkScalarBarActor::UseCustomLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMinValue() :
      op->vtkScalarBarActor::GetOrientationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationMaxValue() :
      op->vtkScalarBarActor::GetOrientationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkScalarBarActor::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientationToHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToHorizontal();
    }
    else
    {
      op->vtkScalarBarActor::SetOrientationToHorizontal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetOrientationToVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationToVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOrientationToVertical();
    }
    else
    {
      op->vtkScalarBarActor::SetOrientationToVertical();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkScalarBarActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelTextProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelTextProperty() :
      op->vtkScalarBarActor::GetLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAnnotationTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationTextProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetAnnotationTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAnnotationTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAnnotationTextProperty() :
      op->vtkScalarBarActor::GetAnnotationTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      op->vtkScalarBarActor::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkScalarBarActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkScalarBarActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponentTitle(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetComponentTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetComponentTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetComponentTitle() :
      op->vtkScalarBarActor::GetComponentTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

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
      op->vtkScalarBarActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextureGridWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureGridWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureGridWidth(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTextureGridWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextureGridWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureGridWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureGridWidth() :
      op->vtkScalarBarActor::GetTextureGridWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextureActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexturedActor2D *tempr = (ap.IsBound() ?
      op->GetTextureActor() :
      op->vtkScalarBarActor::GetTextureActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextPosition(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTextPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextPositionMinValue() :
      op->vtkScalarBarActor::GetTextPositionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextPositionMaxValue() :
      op->vtkScalarBarActor::GetTextPositionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextPosition() :
      op->vtkScalarBarActor::GetTextPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPositionToPrecedeScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPositionToPrecedeScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextPositionToPrecedeScalarBar();
    }
    else
    {
      op->vtkScalarBarActor::SetTextPositionToPrecedeScalarBar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPositionToSucceedScalarBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPositionToSucceedScalarBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextPositionToSucceedScalarBar();
    }
    else
    {
      op->vtkScalarBarActor::SetTextPositionToSucceedScalarBar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumWidthInPixels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetMaximumWidthInPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumWidthInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumWidthInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumWidthInPixels() :
      op->vtkScalarBarActor::GetMaximumWidthInPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetMaximumHeightInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumHeightInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumHeightInPixels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetMaximumHeightInPixels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetMaximumHeightInPixels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumHeightInPixels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumHeightInPixels() :
      op->vtkScalarBarActor::GetMaximumHeightInPixels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAnnotationLeaderPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLeaderPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLeaderPadding(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetAnnotationLeaderPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAnnotationLeaderPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLeaderPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAnnotationLeaderPadding() :
      op->vtkScalarBarActor::GetAnnotationLeaderPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawAnnotations(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawAnnotations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawAnnotations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAnnotations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawAnnotations() :
      op->vtkScalarBarActor::GetDrawAnnotations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAnnotationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAnnotationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAnnotationsOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawAnnotationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAnnotationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAnnotationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAnnotationsOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawAnnotationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawNanAnnotation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawNanAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawNanAnnotation() :
      op->vtkScalarBarActor::GetDrawNanAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawNanAnnotationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawNanAnnotationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawNanAnnotationOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawNanAnnotationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawNanAnnotationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawNanAnnotationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawNanAnnotationOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawNanAnnotationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawBelowRangeSwatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBelowRangeSwatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBelowRangeSwatch(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawBelowRangeSwatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawBelowRangeSwatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBelowRangeSwatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawBelowRangeSwatch() :
      op->vtkScalarBarActor::GetDrawBelowRangeSwatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBelowRangeSwatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBelowRangeSwatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBelowRangeSwatchOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawBelowRangeSwatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBelowRangeSwatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBelowRangeSwatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBelowRangeSwatchOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawBelowRangeSwatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetBelowRangeAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBelowRangeAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBelowRangeAnnotation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetBelowRangeAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBelowRangeAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBelowRangeAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBelowRangeAnnotation() :
      op->vtkScalarBarActor::GetBelowRangeAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawAboveRangeSwatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAboveRangeSwatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawAboveRangeSwatch(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawAboveRangeSwatch(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawAboveRangeSwatch(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAboveRangeSwatch");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawAboveRangeSwatch() :
      op->vtkScalarBarActor::GetDrawAboveRangeSwatch());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAboveRangeSwatchOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAboveRangeSwatchOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAboveRangeSwatchOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawAboveRangeSwatchOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawAboveRangeSwatchOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAboveRangeSwatchOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAboveRangeSwatchOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawAboveRangeSwatchOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAboveRangeAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAboveRangeAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAboveRangeAnnotation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetAboveRangeAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAboveRangeAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAboveRangeAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAboveRangeAnnotation() :
      op->vtkScalarBarActor::GetAboveRangeAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetFixedAnnotationLeaderLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedAnnotationLeaderLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixedAnnotationLeaderLineColor(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetFixedAnnotationLeaderLineColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetFixedAnnotationLeaderLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixedAnnotationLeaderLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFixedAnnotationLeaderLineColor() :
      op->vtkScalarBarActor::GetFixedAnnotationLeaderLineColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedAnnotationLeaderLineColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixedAnnotationLeaderLineColorOn();
    }
    else
    {
      op->vtkScalarBarActor::FixedAnnotationLeaderLineColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixedAnnotationLeaderLineColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixedAnnotationLeaderLineColorOff();
    }
    else
    {
      op->vtkScalarBarActor::FixedAnnotationLeaderLineColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNanAnnotation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetNanAnnotation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetNanAnnotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNanAnnotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetNanAnnotation() :
      op->vtkScalarBarActor::GetNanAnnotation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetAnnotationTextScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationTextScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationTextScaling(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetAnnotationTextScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetAnnotationTextScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationTextScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnnotationTextScaling() :
      op->vtkScalarBarActor::GetAnnotationTextScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_AnnotationTextScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnnotationTextScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnnotationTextScalingOn();
    }
    else
    {
      op->vtkScalarBarActor::AnnotationTextScalingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_AnnotationTextScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnnotationTextScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnnotationTextScalingOff();
    }
    else
    {
      op->vtkScalarBarActor::AnnotationTextScalingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawBackground(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawBackground() :
      op->vtkScalarBarActor::GetDrawBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawBackgroundOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawFrame(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawFrame(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawFrame(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawFrame");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawFrame() :
      op->vtkScalarBarActor::GetDrawFrame());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawFrameOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrameOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawFrameOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawFrameOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawFrameOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawFrameOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawFrameOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawFrameOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawColorBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColorBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawColorBar(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawColorBar(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawColorBar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawColorBar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawColorBar() :
      op->vtkScalarBarActor::GetDrawColorBar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawColorBarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColorBarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawColorBarOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawColorBarOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawColorBarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColorBarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawColorBarOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawColorBarOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetDrawTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawTickLabels(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetDrawTickLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetDrawTickLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawTickLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDrawTickLabels() :
      op->vtkScalarBarActor::GetDrawTickLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawTickLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawTickLabelsOn();
    }
    else
    {
      op->vtkScalarBarActor::DrawTickLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_DrawTickLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTickLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawTickLabelsOff();
    }
    else
    {
      op->vtkScalarBarActor::DrawTickLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetBackgroundProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetBackgroundProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBackgroundProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetBackgroundProperty() :
      op->vtkScalarBarActor::GetBackgroundProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetFrameProperty(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetFrameProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetFrameProperty() :
      op->vtkScalarBarActor::GetFrameProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTextPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextPad() :
      op->vtkScalarBarActor::GetTextPad());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTextPad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextPad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextPad(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTextPad(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetVerticalTitleSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalTitleSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalTitleSeparation() :
      op->vtkScalarBarActor::GetVerticalTitleSeparation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetVerticalTitleSeparation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalTitleSeparation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalTitleSeparation(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetVerticalTitleSeparation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBarRatio() :
      op->vtkScalarBarActor::GetBarRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetBarRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBarRatio(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetBarRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBarRatioMinValue() :
      op->vtkScalarBarActor::GetBarRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetBarRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBarRatioMaxValue() :
      op->vtkScalarBarActor::GetBarRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatio() :
      op->vtkScalarBarActor::GetTitleRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetTitleRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleRatio(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetTitleRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatioMinValue() :
      op->vtkScalarBarActor::GetTitleRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetTitleRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTitleRatioMaxValue() :
      op->vtkScalarBarActor::GetTitleRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_SetUnconstrainedFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnconstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnconstrainedFontSize(temp0);
    }
    else
    {
      op->vtkScalarBarActor::SetUnconstrainedFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_GetUnconstrainedFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnconstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUnconstrainedFontSize() :
      op->vtkScalarBarActor::GetUnconstrainedFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UnconstrainedFontSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnconstrainedFontSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnconstrainedFontSizeOn();
    }
    else
    {
      op->vtkScalarBarActor::UnconstrainedFontSizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarBarActor_UnconstrainedFontSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnconstrainedFontSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarBarActor *op = static_cast<vtkScalarBarActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnconstrainedFontSizeOff();
    }
    else
    {
      op->vtkScalarBarActor::UnconstrainedFontSizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarBarActor_Methods[] = {
  {"IsTypeOf", PyvtkScalarBarActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScalarBarActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScalarBarActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkScalarBarActor\nC++: static vtkScalarBarActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScalarBarActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkScalarBarActor\nC++: vtkScalarBarActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkScalarBarActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkScalarBarActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderOpaqueGeometry", PyvtkScalarBarActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nDraw the scalar bar and annotation text to the screen.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkScalarBarActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"RenderOverlay", PyvtkScalarBarActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkScalarBarActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkScalarBarActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetScalarBarRect", PyvtkScalarBarActor_GetScalarBarRect, METH_VARARGS,
   "GetScalarBarRect(self, rect:[int, int, int, int],\n    viewport:vtkViewport) -> None\nC++: virtual void GetScalarBarRect(int rect[4],\n    vtkViewport *viewport)\n\nFills rect with the dimensions of the scalar bar in viewport\ncoordinates. Only the color bar is considered -- text labels are\nnot considered. rect is {xmin, xmax, width, height}\n"},
  {"SetLookupTable", PyvtkScalarBarActor_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, __a:vtkScalarsToColors) -> None\nC++: virtual void SetLookupTable(vtkScalarsToColors *)\n\nSet/Get the lookup table to use. The lookup table specifies the\nnumber of colors to use in the table (if not overridden), the\nscalar range, and any annotated values. Annotated values are\nrendered using vtkTextActor.\n"},
  {"GetLookupTable", PyvtkScalarBarActor_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\n"},
  {"SetUseOpacity", PyvtkScalarBarActor_SetUseOpacity, METH_VARARGS,
   "SetUseOpacity(self, _arg:int) -> None\nC++: virtual void SetUseOpacity(vtkTypeBool _arg)\n\nShould be display the opacity as well. This is displayed by\nchanging the opacity of the scalar bar in accordance with the\nopacity of the given color. For clarity, a texture grid is placed\nin the background if Opacity is ON. You might also want to play\nwith SetTextureGridWith in that case. [Default: off]\n"},
  {"GetUseOpacity", PyvtkScalarBarActor_GetUseOpacity, METH_VARARGS,
   "GetUseOpacity(self) -> int\nC++: virtual vtkTypeBool GetUseOpacity()\n\n"},
  {"UseOpacityOn", PyvtkScalarBarActor_UseOpacityOn, METH_VARARGS,
   "UseOpacityOn(self) -> None\nC++: virtual void UseOpacityOn()\n\n"},
  {"UseOpacityOff", PyvtkScalarBarActor_UseOpacityOff, METH_VARARGS,
   "UseOpacityOff(self) -> None\nC++: virtual void UseOpacityOff()\n\n"},
  {"SetMaximumNumberOfColors", PyvtkScalarBarActor_SetMaximumNumberOfColors, METH_VARARGS,
   "SetMaximumNumberOfColors(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfColors(int _arg)\n\nSet/Get the maximum number of scalar bar segments to show. This\nmay differ from the number of colors in the lookup table, in\nwhich case the colors are samples from the lookup table.\n"},
  {"GetMaximumNumberOfColorsMinValue", PyvtkScalarBarActor_GetMaximumNumberOfColorsMinValue, METH_VARARGS,
   "GetMaximumNumberOfColorsMinValue(self) -> int\nC++: virtual int GetMaximumNumberOfColorsMinValue()\n\n"},
  {"GetMaximumNumberOfColorsMaxValue", PyvtkScalarBarActor_GetMaximumNumberOfColorsMaxValue, METH_VARARGS,
   "GetMaximumNumberOfColorsMaxValue(self) -> int\nC++: virtual int GetMaximumNumberOfColorsMaxValue()\n\n"},
  {"GetMaximumNumberOfColors", PyvtkScalarBarActor_GetMaximumNumberOfColors, METH_VARARGS,
   "GetMaximumNumberOfColors(self) -> int\nC++: virtual int GetMaximumNumberOfColors()\n\n"},
  {"SetNumberOfLabels", PyvtkScalarBarActor_SetNumberOfLabels, METH_VARARGS,
   "SetNumberOfLabels(self, _arg:int) -> None\nC++: virtual void SetNumberOfLabels(int _arg)\n\nSet/Get the number of automatic tick labels to show.\n"},
  {"GetNumberOfLabelsMinValue", PyvtkScalarBarActor_GetNumberOfLabelsMinValue, METH_VARARGS,
   "GetNumberOfLabelsMinValue(self) -> int\nC++: virtual int GetNumberOfLabelsMinValue()\n\n"},
  {"GetNumberOfLabelsMaxValue", PyvtkScalarBarActor_GetNumberOfLabelsMaxValue, METH_VARARGS,
   "GetNumberOfLabelsMaxValue(self) -> int\nC++: virtual int GetNumberOfLabelsMaxValue()\n\n"},
  {"GetNumberOfLabels", PyvtkScalarBarActor_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: virtual int GetNumberOfLabels()\n\n"},
  {"SetCustomLabels", PyvtkScalarBarActor_SetCustomLabels, METH_VARARGS,
   "SetCustomLabels(self, labels:vtkDoubleArray) -> None\nC++: virtual void SetCustomLabels(vtkDoubleArray *labels)\n\nSet/Get the fixed locations to use.\n"},
  {"GetCustomLabels", PyvtkScalarBarActor_GetCustomLabels, METH_VARARGS,
   "GetCustomLabels(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetCustomLabels()\n\n"},
  {"GetUseCustomLabels", PyvtkScalarBarActor_GetUseCustomLabels, METH_VARARGS,
   "GetUseCustomLabels(self) -> bool\nC++: virtual bool GetUseCustomLabels()\n\nGet/Set whether custom labels will be used. bonds. Default: Off.\n"},
  {"SetUseCustomLabels", PyvtkScalarBarActor_SetUseCustomLabels, METH_VARARGS,
   "SetUseCustomLabels(self, _arg:bool) -> None\nC++: virtual void SetUseCustomLabels(bool _arg)\n\n"},
  {"UseCustomLabelsOn", PyvtkScalarBarActor_UseCustomLabelsOn, METH_VARARGS,
   "UseCustomLabelsOn(self) -> None\nC++: virtual void UseCustomLabelsOn()\n\n"},
  {"UseCustomLabelsOff", PyvtkScalarBarActor_UseCustomLabelsOff, METH_VARARGS,
   "UseCustomLabelsOff(self) -> None\nC++: virtual void UseCustomLabelsOff()\n\n"},
  {"SetOrientation", PyvtkScalarBarActor_SetOrientation, METH_VARARGS,
   "SetOrientation(self, _arg:int) -> None\nC++: virtual void SetOrientation(int _arg)\n\nControl the orientation of the scalar bar.\n"},
  {"GetOrientationMinValue", PyvtkScalarBarActor_GetOrientationMinValue, METH_VARARGS,
   "GetOrientationMinValue(self) -> int\nC++: virtual int GetOrientationMinValue()\n\n"},
  {"GetOrientationMaxValue", PyvtkScalarBarActor_GetOrientationMaxValue, METH_VARARGS,
   "GetOrientationMaxValue(self) -> int\nC++: virtual int GetOrientationMaxValue()\n\n"},
  {"GetOrientation", PyvtkScalarBarActor_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: virtual int GetOrientation()\n\n"},
  {"SetOrientationToHorizontal", PyvtkScalarBarActor_SetOrientationToHorizontal, METH_VARARGS,
   "SetOrientationToHorizontal(self) -> None\nC++: void SetOrientationToHorizontal()\n\n"},
  {"SetOrientationToVertical", PyvtkScalarBarActor_SetOrientationToVertical, METH_VARARGS,
   "SetOrientationToVertical(self) -> None\nC++: void SetOrientationToVertical()\n\n"},
  {"SetTitleTextProperty", PyvtkScalarBarActor_SetTitleTextProperty, METH_VARARGS,
   "SetTitleTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {"GetTitleTextProperty", PyvtkScalarBarActor_GetTitleTextProperty, METH_VARARGS,
   "GetTitleTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\n"},
  {"SetLabelTextProperty", PyvtkScalarBarActor_SetLabelTextProperty, METH_VARARGS,
   "SetLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property.\n"},
  {"GetLabelTextProperty", PyvtkScalarBarActor_GetLabelTextProperty, METH_VARARGS,
   "GetLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelTextProperty()\n\n"},
  {"SetAnnotationTextProperty", PyvtkScalarBarActor_SetAnnotationTextProperty, METH_VARARGS,
   "SetAnnotationTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetAnnotationTextProperty(vtkTextProperty *p)\n\nSet/Get the annotation text property.\n"},
  {"GetAnnotationTextProperty", PyvtkScalarBarActor_GetAnnotationTextProperty, METH_VARARGS,
   "GetAnnotationTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetAnnotationTextProperty()\n\n"},
  {"SetLabelFormat", PyvtkScalarBarActor_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nSet/Get the format with which to print the labels on the scalar\nbar.\n"},
  {"GetLabelFormat", PyvtkScalarBarActor_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"SetTitle", PyvtkScalarBarActor_SetTitle, METH_VARARGS,
   "SetTitle(self, _arg:str) -> None\nC++: virtual void SetTitle(const char *_arg)\n\nSet/Get the title of the scalar bar actor,\n"},
  {"GetTitle", PyvtkScalarBarActor_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual char *GetTitle()\n\n"},
  {"SetComponentTitle", PyvtkScalarBarActor_SetComponentTitle, METH_VARARGS,
   "SetComponentTitle(self, _arg:str) -> None\nC++: virtual void SetComponentTitle(const char *_arg)\n\nSet/Get the title for the component that is selected,\n"},
  {"GetComponentTitle", PyvtkScalarBarActor_GetComponentTitle, METH_VARARGS,
   "GetComponentTitle(self) -> str\nC++: virtual char *GetComponentTitle()\n\n"},
  {"ShallowCopy", PyvtkScalarBarActor_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of a scalar bar actor. Overloads the virtual vtkProp\nmethod.\n"},
  {"SetTextureGridWidth", PyvtkScalarBarActor_SetTextureGridWidth, METH_VARARGS,
   "SetTextureGridWidth(self, _arg:float) -> None\nC++: virtual void SetTextureGridWidth(double _arg)\n\nSet the width of the texture grid. Used only if UseOpacity is ON.\n"},
  {"GetTextureGridWidth", PyvtkScalarBarActor_GetTextureGridWidth, METH_VARARGS,
   "GetTextureGridWidth(self) -> float\nC++: virtual double GetTextureGridWidth()\n\n"},
  {"GetTextureActor", PyvtkScalarBarActor_GetTextureActor, METH_VARARGS,
   "GetTextureActor(self) -> vtkTexturedActor2D\nC++: virtual vtkTexturedActor2D *GetTextureActor()\n\nGet the texture actor.. you may want to change some properties on\nit\n"},
  {"SetTextPosition", PyvtkScalarBarActor_SetTextPosition, METH_VARARGS,
   "SetTextPosition(self, _arg:int) -> None\nC++: virtual void SetTextPosition(int _arg)\n\nShould the title and tick marks precede the scalar bar or succeed\nit? This is measured along the viewport coordinate direction\nperpendicular to the long axis of the scalar bar, not the reading\ndirection. Thus, succeed implies the that the text is above\nscalar bar if the orientation is horizontal or right of scalar\nbar if the orientation is vertical. Precede is the opposite.\n"},
  {"GetTextPositionMinValue", PyvtkScalarBarActor_GetTextPositionMinValue, METH_VARARGS,
   "GetTextPositionMinValue(self) -> int\nC++: virtual int GetTextPositionMinValue()\n\n"},
  {"GetTextPositionMaxValue", PyvtkScalarBarActor_GetTextPositionMaxValue, METH_VARARGS,
   "GetTextPositionMaxValue(self) -> int\nC++: virtual int GetTextPositionMaxValue()\n\n"},
  {"GetTextPosition", PyvtkScalarBarActor_GetTextPosition, METH_VARARGS,
   "GetTextPosition(self) -> int\nC++: virtual int GetTextPosition()\n\n"},
  {"SetTextPositionToPrecedeScalarBar", PyvtkScalarBarActor_SetTextPositionToPrecedeScalarBar, METH_VARARGS,
   "SetTextPositionToPrecedeScalarBar(self) -> None\nC++: virtual void SetTextPositionToPrecedeScalarBar()\n\n"},
  {"SetTextPositionToSucceedScalarBar", PyvtkScalarBarActor_SetTextPositionToSucceedScalarBar, METH_VARARGS,
   "SetTextPositionToSucceedScalarBar(self) -> None\nC++: virtual void SetTextPositionToSucceedScalarBar()\n\n"},
  {"SetMaximumWidthInPixels", PyvtkScalarBarActor_SetMaximumWidthInPixels, METH_VARARGS,
   "SetMaximumWidthInPixels(self, _arg:int) -> None\nC++: virtual void SetMaximumWidthInPixels(int _arg)\n\nSet/Get the maximum width and height in pixels. Specifying the\nsize as a relative fraction of the viewport can sometimes\nundesirably stretch the size of the actor too much. These methods\nallow the user to set bounds on the maximum size of the scalar\nbar in pixels along any direction. Defaults to unbounded.\n"},
  {"GetMaximumWidthInPixels", PyvtkScalarBarActor_GetMaximumWidthInPixels, METH_VARARGS,
   "GetMaximumWidthInPixels(self) -> int\nC++: virtual int GetMaximumWidthInPixels()\n\n"},
  {"SetMaximumHeightInPixels", PyvtkScalarBarActor_SetMaximumHeightInPixels, METH_VARARGS,
   "SetMaximumHeightInPixels(self, _arg:int) -> None\nC++: virtual void SetMaximumHeightInPixels(int _arg)\n\n"},
  {"GetMaximumHeightInPixels", PyvtkScalarBarActor_GetMaximumHeightInPixels, METH_VARARGS,
   "GetMaximumHeightInPixels(self) -> int\nC++: virtual int GetMaximumHeightInPixels()\n\n"},
  {"SetAnnotationLeaderPadding", PyvtkScalarBarActor_SetAnnotationLeaderPadding, METH_VARARGS,
   "SetAnnotationLeaderPadding(self, _arg:float) -> None\nC++: virtual void SetAnnotationLeaderPadding(double _arg)\n\nSet/get the padding between the scalar bar and the text\nannotations. This space is used to draw leader lines. The default\nis 8 pixels.\n"},
  {"GetAnnotationLeaderPadding", PyvtkScalarBarActor_GetAnnotationLeaderPadding, METH_VARARGS,
   "GetAnnotationLeaderPadding(self) -> float\nC++: virtual double GetAnnotationLeaderPadding()\n\n"},
  {"SetDrawAnnotations", PyvtkScalarBarActor_SetDrawAnnotations, METH_VARARGS,
   "SetDrawAnnotations(self, _arg:int) -> None\nC++: virtual void SetDrawAnnotations(vtkTypeBool _arg)\n\nSet/get whether text annotations should be rendered or not.\nCurrently, this only affects rendering when IndexedLookup is\ntrue. The default is true.\n"},
  {"GetDrawAnnotations", PyvtkScalarBarActor_GetDrawAnnotations, METH_VARARGS,
   "GetDrawAnnotations(self) -> int\nC++: virtual vtkTypeBool GetDrawAnnotations()\n\n"},
  {"DrawAnnotationsOn", PyvtkScalarBarActor_DrawAnnotationsOn, METH_VARARGS,
   "DrawAnnotationsOn(self) -> None\nC++: virtual void DrawAnnotationsOn()\n\n"},
  {"DrawAnnotationsOff", PyvtkScalarBarActor_DrawAnnotationsOff, METH_VARARGS,
   "DrawAnnotationsOff(self) -> None\nC++: virtual void DrawAnnotationsOff()\n\n"},
  {"SetDrawNanAnnotation", PyvtkScalarBarActor_SetDrawNanAnnotation, METH_VARARGS,
   "SetDrawNanAnnotation(self, _arg:int) -> None\nC++: virtual void SetDrawNanAnnotation(vtkTypeBool _arg)\n\nSet/get whether the NaN annotation should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"GetDrawNanAnnotation", PyvtkScalarBarActor_GetDrawNanAnnotation, METH_VARARGS,
   "GetDrawNanAnnotation(self) -> int\nC++: virtual vtkTypeBool GetDrawNanAnnotation()\n\n"},
  {"DrawNanAnnotationOn", PyvtkScalarBarActor_DrawNanAnnotationOn, METH_VARARGS,
   "DrawNanAnnotationOn(self) -> None\nC++: virtual void DrawNanAnnotationOn()\n\n"},
  {"DrawNanAnnotationOff", PyvtkScalarBarActor_DrawNanAnnotationOff, METH_VARARGS,
   "DrawNanAnnotationOff(self) -> None\nC++: virtual void DrawNanAnnotationOff()\n\n"},
  {"SetDrawBelowRangeSwatch", PyvtkScalarBarActor_SetDrawBelowRangeSwatch, METH_VARARGS,
   "SetDrawBelowRangeSwatch(self, _arg:bool) -> None\nC++: virtual void SetDrawBelowRangeSwatch(bool _arg)\n\nSet/get whether the Below range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"GetDrawBelowRangeSwatch", PyvtkScalarBarActor_GetDrawBelowRangeSwatch, METH_VARARGS,
   "GetDrawBelowRangeSwatch(self) -> bool\nC++: virtual bool GetDrawBelowRangeSwatch()\n\n"},
  {"DrawBelowRangeSwatchOn", PyvtkScalarBarActor_DrawBelowRangeSwatchOn, METH_VARARGS,
   "DrawBelowRangeSwatchOn(self) -> None\nC++: virtual void DrawBelowRangeSwatchOn()\n\n"},
  {"DrawBelowRangeSwatchOff", PyvtkScalarBarActor_DrawBelowRangeSwatchOff, METH_VARARGS,
   "DrawBelowRangeSwatchOff(self) -> None\nC++: virtual void DrawBelowRangeSwatchOff()\n\n"},
  {"SetBelowRangeAnnotation", PyvtkScalarBarActor_SetBelowRangeAnnotation, METH_VARARGS,
   "SetBelowRangeAnnotation(self, _arg:str) -> None\nC++: virtual void SetBelowRangeAnnotation(const char *_arg)\n\nSet/get the annotation text for \"Below Range\" values.\n"},
  {"GetBelowRangeAnnotation", PyvtkScalarBarActor_GetBelowRangeAnnotation, METH_VARARGS,
   "GetBelowRangeAnnotation(self) -> str\nC++: virtual char *GetBelowRangeAnnotation()\n\n"},
  {"SetDrawAboveRangeSwatch", PyvtkScalarBarActor_SetDrawAboveRangeSwatch, METH_VARARGS,
   "SetDrawAboveRangeSwatch(self, _arg:bool) -> None\nC++: virtual void SetDrawAboveRangeSwatch(bool _arg)\n\nSet/get whether the Above range swatch should be rendered or not.\nThis only affects rendering when DrawAnnotations is true. The\ndefault is false.\n"},
  {"GetDrawAboveRangeSwatch", PyvtkScalarBarActor_GetDrawAboveRangeSwatch, METH_VARARGS,
   "GetDrawAboveRangeSwatch(self) -> bool\nC++: virtual bool GetDrawAboveRangeSwatch()\n\n"},
  {"DrawAboveRangeSwatchOn", PyvtkScalarBarActor_DrawAboveRangeSwatchOn, METH_VARARGS,
   "DrawAboveRangeSwatchOn(self) -> None\nC++: virtual void DrawAboveRangeSwatchOn()\n\n"},
  {"DrawAboveRangeSwatchOff", PyvtkScalarBarActor_DrawAboveRangeSwatchOff, METH_VARARGS,
   "DrawAboveRangeSwatchOff(self) -> None\nC++: virtual void DrawAboveRangeSwatchOff()\n\n"},
  {"SetAboveRangeAnnotation", PyvtkScalarBarActor_SetAboveRangeAnnotation, METH_VARARGS,
   "SetAboveRangeAnnotation(self, _arg:str) -> None\nC++: virtual void SetAboveRangeAnnotation(const char *_arg)\n\nSet/get the annotation text for \"Above Range Swatch\" values.\n"},
  {"GetAboveRangeAnnotation", PyvtkScalarBarActor_GetAboveRangeAnnotation, METH_VARARGS,
   "GetAboveRangeAnnotation(self) -> str\nC++: virtual char *GetAboveRangeAnnotation()\n\n"},
  {"SetFixedAnnotationLeaderLineColor", PyvtkScalarBarActor_SetFixedAnnotationLeaderLineColor, METH_VARARGS,
   "SetFixedAnnotationLeaderLineColor(self, _arg:int) -> None\nC++: virtual void SetFixedAnnotationLeaderLineColor(\n    vtkTypeBool _arg)\n\nSet/get how leader lines connecting annotations to values should\nbe colored.\n\n* When true, leader lines are all the same color (and match the\n  LabelTextProperty color).\n* When false, leader lines take on the color of the value they\n  correspond to.\n* This only affects rendering when DrawAnnotations is true.\n* The default is false.\n"},
  {"GetFixedAnnotationLeaderLineColor", PyvtkScalarBarActor_GetFixedAnnotationLeaderLineColor, METH_VARARGS,
   "GetFixedAnnotationLeaderLineColor(self) -> int\nC++: virtual vtkTypeBool GetFixedAnnotationLeaderLineColor()\n\n"},
  {"FixedAnnotationLeaderLineColorOn", PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOn, METH_VARARGS,
   "FixedAnnotationLeaderLineColorOn(self) -> None\nC++: virtual void FixedAnnotationLeaderLineColorOn()\n\n"},
  {"FixedAnnotationLeaderLineColorOff", PyvtkScalarBarActor_FixedAnnotationLeaderLineColorOff, METH_VARARGS,
   "FixedAnnotationLeaderLineColorOff(self) -> None\nC++: virtual void FixedAnnotationLeaderLineColorOff()\n\n"},
  {"SetNanAnnotation", PyvtkScalarBarActor_SetNanAnnotation, METH_VARARGS,
   "SetNanAnnotation(self, _arg:str) -> None\nC++: virtual void SetNanAnnotation(const char *_arg)\n\nSet/get the annotation text for \"NaN\" values.\n"},
  {"GetNanAnnotation", PyvtkScalarBarActor_GetNanAnnotation, METH_VARARGS,
   "GetNanAnnotation(self) -> str\nC++: virtual char *GetNanAnnotation()\n\n"},
  {"SetAnnotationTextScaling", PyvtkScalarBarActor_SetAnnotationTextScaling, METH_VARARGS,
   "SetAnnotationTextScaling(self, _arg:int) -> None\nC++: virtual void SetAnnotationTextScaling(vtkTypeBool _arg)\n\nSet/get whether annotation labels should be scaled with the\nviewport.\n\n* The default value is 0 (no scaling).\n* If non-zero, the vtkTextActor instances used to render\n  annotation\n* labels will have their TextScaleMode set to viewport-based\n  scaling,\n* which nonlinearly scales font size with the viewport size.\n"},
  {"GetAnnotationTextScaling", PyvtkScalarBarActor_GetAnnotationTextScaling, METH_VARARGS,
   "GetAnnotationTextScaling(self) -> int\nC++: virtual vtkTypeBool GetAnnotationTextScaling()\n\n"},
  {"AnnotationTextScalingOn", PyvtkScalarBarActor_AnnotationTextScalingOn, METH_VARARGS,
   "AnnotationTextScalingOn(self) -> None\nC++: virtual void AnnotationTextScalingOn()\n\n"},
  {"AnnotationTextScalingOff", PyvtkScalarBarActor_AnnotationTextScalingOff, METH_VARARGS,
   "AnnotationTextScalingOff(self) -> None\nC++: virtual void AnnotationTextScalingOff()\n\n"},
  {"SetDrawBackground", PyvtkScalarBarActor_SetDrawBackground, METH_VARARGS,
   "SetDrawBackground(self, _arg:int) -> None\nC++: virtual void SetDrawBackground(vtkTypeBool _arg)\n\nSet/Get whether a background should be drawn around the scalar\nbar. Default is off.\n"},
  {"GetDrawBackground", PyvtkScalarBarActor_GetDrawBackground, METH_VARARGS,
   "GetDrawBackground(self) -> int\nC++: virtual vtkTypeBool GetDrawBackground()\n\n"},
  {"DrawBackgroundOn", PyvtkScalarBarActor_DrawBackgroundOn, METH_VARARGS,
   "DrawBackgroundOn(self) -> None\nC++: virtual void DrawBackgroundOn()\n\n"},
  {"DrawBackgroundOff", PyvtkScalarBarActor_DrawBackgroundOff, METH_VARARGS,
   "DrawBackgroundOff(self) -> None\nC++: virtual void DrawBackgroundOff()\n\n"},
  {"SetDrawFrame", PyvtkScalarBarActor_SetDrawFrame, METH_VARARGS,
   "SetDrawFrame(self, _arg:int) -> None\nC++: virtual void SetDrawFrame(vtkTypeBool _arg)\n\nSet/Get whether a frame should be drawn around the scalar bar.\nDefault is off.\n"},
  {"GetDrawFrame", PyvtkScalarBarActor_GetDrawFrame, METH_VARARGS,
   "GetDrawFrame(self) -> int\nC++: virtual vtkTypeBool GetDrawFrame()\n\n"},
  {"DrawFrameOn", PyvtkScalarBarActor_DrawFrameOn, METH_VARARGS,
   "DrawFrameOn(self) -> None\nC++: virtual void DrawFrameOn()\n\n"},
  {"DrawFrameOff", PyvtkScalarBarActor_DrawFrameOff, METH_VARARGS,
   "DrawFrameOff(self) -> None\nC++: virtual void DrawFrameOff()\n\n"},
  {"SetDrawColorBar", PyvtkScalarBarActor_SetDrawColorBar, METH_VARARGS,
   "SetDrawColorBar(self, _arg:int) -> None\nC++: virtual void SetDrawColorBar(vtkTypeBool _arg)\n\nSet/Get whether the color bar should be drawn. If off, only the\ntickmarks and text will be drawn. Default is on.\n"},
  {"GetDrawColorBar", PyvtkScalarBarActor_GetDrawColorBar, METH_VARARGS,
   "GetDrawColorBar(self) -> int\nC++: virtual vtkTypeBool GetDrawColorBar()\n\n"},
  {"DrawColorBarOn", PyvtkScalarBarActor_DrawColorBarOn, METH_VARARGS,
   "DrawColorBarOn(self) -> None\nC++: virtual void DrawColorBarOn()\n\n"},
  {"DrawColorBarOff", PyvtkScalarBarActor_DrawColorBarOff, METH_VARARGS,
   "DrawColorBarOff(self) -> None\nC++: virtual void DrawColorBarOff()\n\n"},
  {"SetDrawTickLabels", PyvtkScalarBarActor_SetDrawTickLabels, METH_VARARGS,
   "SetDrawTickLabels(self, _arg:int) -> None\nC++: virtual void SetDrawTickLabels(vtkTypeBool _arg)\n\nSet/Get whether the tick labels should be drawn. Default is on.\n"},
  {"GetDrawTickLabels", PyvtkScalarBarActor_GetDrawTickLabels, METH_VARARGS,
   "GetDrawTickLabels(self) -> int\nC++: virtual vtkTypeBool GetDrawTickLabels()\n\n"},
  {"DrawTickLabelsOn", PyvtkScalarBarActor_DrawTickLabelsOn, METH_VARARGS,
   "DrawTickLabelsOn(self) -> None\nC++: virtual void DrawTickLabelsOn()\n\n"},
  {"DrawTickLabelsOff", PyvtkScalarBarActor_DrawTickLabelsOff, METH_VARARGS,
   "DrawTickLabelsOff(self) -> None\nC++: virtual void DrawTickLabelsOff()\n\n"},
  {"SetBackgroundProperty", PyvtkScalarBarActor_SetBackgroundProperty, METH_VARARGS,
   "SetBackgroundProperty(self, p:vtkProperty2D) -> None\nC++: virtual void SetBackgroundProperty(vtkProperty2D *p)\n\nSet/Get the background property.\n"},
  {"GetBackgroundProperty", PyvtkScalarBarActor_GetBackgroundProperty, METH_VARARGS,
   "GetBackgroundProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetBackgroundProperty()\n\n"},
  {"SetFrameProperty", PyvtkScalarBarActor_SetFrameProperty, METH_VARARGS,
   "SetFrameProperty(self, p:vtkProperty2D) -> None\nC++: virtual void SetFrameProperty(vtkProperty2D *p)\n\nSet/Get the frame property.\n"},
  {"GetFrameProperty", PyvtkScalarBarActor_GetFrameProperty, METH_VARARGS,
   "GetFrameProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetFrameProperty()\n\n"},
  {"GetTextPad", PyvtkScalarBarActor_GetTextPad, METH_VARARGS,
   "GetTextPad(self) -> int\nC++: virtual int GetTextPad()\n\nSet/get the amount of padding around text boxes. The default is 1\npixel.\n"},
  {"SetTextPad", PyvtkScalarBarActor_SetTextPad, METH_VARARGS,
   "SetTextPad(self, _arg:int) -> None\nC++: virtual void SetTextPad(int _arg)\n\n"},
  {"GetVerticalTitleSeparation", PyvtkScalarBarActor_GetVerticalTitleSeparation, METH_VARARGS,
   "GetVerticalTitleSeparation(self) -> int\nC++: virtual int GetVerticalTitleSeparation()\n\nSet/get the margin in pixels, between the title and the bar, when\nthe Orientation is vertical. The default is 0 pixels.\n"},
  {"SetVerticalTitleSeparation", PyvtkScalarBarActor_SetVerticalTitleSeparation, METH_VARARGS,
   "SetVerticalTitleSeparation(self, _arg:int) -> None\nC++: virtual void SetVerticalTitleSeparation(int _arg)\n\n"},
  {"GetBarRatio", PyvtkScalarBarActor_GetBarRatio, METH_VARARGS,
   "GetBarRatio(self) -> float\nC++: virtual double GetBarRatio()\n\nSet/get the thickness of the color bar relative to the widget\nframe. The default is 0.375 and must always be in the range ]0,\n1[.\n"},
  {"SetBarRatio", PyvtkScalarBarActor_SetBarRatio, METH_VARARGS,
   "SetBarRatio(self, _arg:float) -> None\nC++: virtual void SetBarRatio(double _arg)\n\n"},
  {"GetBarRatioMinValue", PyvtkScalarBarActor_GetBarRatioMinValue, METH_VARARGS,
   "GetBarRatioMinValue(self) -> float\nC++: virtual double GetBarRatioMinValue()\n\n"},
  {"GetBarRatioMaxValue", PyvtkScalarBarActor_GetBarRatioMaxValue, METH_VARARGS,
   "GetBarRatioMaxValue(self) -> float\nC++: virtual double GetBarRatioMaxValue()\n\n"},
  {"GetTitleRatio", PyvtkScalarBarActor_GetTitleRatio, METH_VARARGS,
   "GetTitleRatio(self) -> float\nC++: virtual double GetTitleRatio()\n\nSet/get the ratio of the title height to the tick label height\n(used only when the Orientation is horizontal). The default is\n0.5, which attempts to make the labels and title the same size.\nThis must be a number in the range ]0, 1[.\n"},
  {"SetTitleRatio", PyvtkScalarBarActor_SetTitleRatio, METH_VARARGS,
   "SetTitleRatio(self, _arg:float) -> None\nC++: virtual void SetTitleRatio(double _arg)\n\n"},
  {"GetTitleRatioMinValue", PyvtkScalarBarActor_GetTitleRatioMinValue, METH_VARARGS,
   "GetTitleRatioMinValue(self) -> float\nC++: virtual double GetTitleRatioMinValue()\n\n"},
  {"GetTitleRatioMaxValue", PyvtkScalarBarActor_GetTitleRatioMaxValue, METH_VARARGS,
   "GetTitleRatioMaxValue(self) -> float\nC++: virtual double GetTitleRatioMaxValue()\n\n"},
  {"SetUnconstrainedFontSize", PyvtkScalarBarActor_SetUnconstrainedFontSize, METH_VARARGS,
   "SetUnconstrainedFontSize(self, _arg:bool) -> None\nC++: virtual void SetUnconstrainedFontSize(bool _arg)\n\nSet/Get whether the font size of title and labels is\nunconstrained. Default is off. When it is constrained, the size\nof the scalar bar will constrain the font size. When it is not,\nthe size of the font will always be respected. Using custom\nlabels will force this mode to be on.\n"},
  {"GetUnconstrainedFontSize", PyvtkScalarBarActor_GetUnconstrainedFontSize, METH_VARARGS,
   "GetUnconstrainedFontSize(self) -> bool\nC++: virtual bool GetUnconstrainedFontSize()\n\n"},
  {"UnconstrainedFontSizeOn", PyvtkScalarBarActor_UnconstrainedFontSizeOn, METH_VARARGS,
   "UnconstrainedFontSizeOn(self) -> None\nC++: virtual void UnconstrainedFontSizeOn()\n\n"},
  {"UnconstrainedFontSizeOff", PyvtkScalarBarActor_UnconstrainedFontSizeOff, METH_VARARGS,
   "UnconstrainedFontSizeOff(self) -> None\nC++: virtual void UnconstrainedFontSizeOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkScalarBarActor_Doc =
  "vtkScalarBarActor - Create a scalar bar with labels\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkScalarBarActor creates a scalar bar with tick marks. A scalar bar\n"
  "is a legend that indicates to the viewer the correspondence between\n"
  "color value and data value. The legend consists of a rectangular bar\n"
  "made of rectangular pieces each colored a constant value. Since\n"
  "vtkScalarBarActor is a subclass of vtkActor2D, it is drawn in the\n"
  "image plane (i.e., in the renderer's viewport) on top of the 3D\n"
  "graphics window.\n\n"
  "To use vtkScalarBarActor you must associate a vtkScalarsToColors (or\n"
  "subclass) with it. The lookup table defines the colors and the range\n"
  "of scalar values used to map scalar data.  Typically, the number of\n"
  "colors shown in the scalar bar is not equal to the number of colors\n"
  "in the lookup table, in which case sampling of the lookup table is\n"
  "performed.\n\n"
  "Other optional capabilities include specifying the fraction of the\n"
  "viewport size (both x and y directions) which will control the size\n"
  "of the scalar bar and the number of tick labels. The actual position\n"
  "of the scalar bar on the screen is controlled by using the\n"
  "vtkActor2D::SetPosition() method (by default the scalar bar is\n"
  "centered in the viewport).  Other features include the ability to\n"
  "orient the scalar bar horizontally of vertically and controlling the\n"
  "format (printf style) with which to print the labels on the scalar\n"
  "bar. Also, the vtkScalarBarActor's property is applied to the scalar\n"
  "bar and annotations (including layer, and compositing operator).\n\n"
  "Set the text property/attributes of the title and the labels through\n"
  "the vtkTextProperty objects associated to this actor.\n\n"
  "@warning\n"
  "If a vtkLogLookupTable is specified as the lookup table to use, then\n"
  "the labels are created using a logarithmic scale.\n\n"
  "@sa\n"
  "vtkActor2D vtkTextProperty vtkTextMapper vtkPolyDataMapper2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkScalarBarActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkScalarBarActor", // tp_name
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
  PyvtkScalarBarActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScalarBarActor_StaticNew()
{
  return vtkScalarBarActor::New();
}

PyObject *PyvtkScalarBarActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkScalarBarActor_Type, PyvtkScalarBarActor_Methods,
    "vtkScalarBarActor",
 &PyvtkScalarBarActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor2D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "PrecedeScalarBar", vtkScalarBarActor::PrecedeScalarBar },
        { "SucceedScalarBar", vtkScalarBarActor::SucceedScalarBar },
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

void PyVTKAddFile_vtkScalarBarActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarBarActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarBarActor", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ORIENT_HORIZONTAL", 0 },
        { "VTK_ORIENT_VERTICAL", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

