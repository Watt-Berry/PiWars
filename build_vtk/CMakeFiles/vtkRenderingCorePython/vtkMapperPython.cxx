// python wrapper for vtkMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkMapper_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractMapper3D_ClassNew
extern "C" { PyObject *PyvtkAbstractMapper3D_ClassNew(); }
#define DECLARED_PyvtkAbstractMapper3D_ClassNew
#endif

static PyObject *
PyvtkMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMapper *tempr = vtkMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMapper::NewInstance());

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
PyvtkMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkMapper::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLookupTable();
    }
    else
    {
      op->vtkMapper::CreateDefaultLookupTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarVisibility(temp0);
    }
    else
    {
      op->vtkMapper::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkMapper::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkMapper::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkMapper::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStatic(temp0);
    }
    else
    {
      op->vtkMapper::SetStatic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetStatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStatic() :
      op->vtkMapper::GetStatic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_StaticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticOn();
    }
    else
    {
      op->vtkMapper::StaticOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_StaticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StaticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StaticOff();
    }
    else
    {
      op->vtkMapper::StaticOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMode(temp0);
    }
    else
    {
      op->vtkMapper::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkMapper::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDefault();
    }
    else
    {
      op->vtkMapper::SetColorModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetColorModeToMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToMapScalars();
    }
    else
    {
      op->vtkMapper::SetColorModeToMapScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetColorModeToDirectScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDirectScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDirectScalars();
    }
    else
    {
      op->vtkMapper::SetColorModeToDirectScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkMapper::GetColorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateScalarsBeforeMapping(temp0);
    }
    else
    {
      op->vtkMapper::SetInterpolateScalarsBeforeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolateScalarsBeforeMapping() :
      op->vtkMapper::GetInterpolateScalarsBeforeMapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_InterpolateScalarsBeforeMappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateScalarsBeforeMappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateScalarsBeforeMappingOn();
    }
    else
    {
      op->vtkMapper::InterpolateScalarsBeforeMappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_InterpolateScalarsBeforeMappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateScalarsBeforeMappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateScalarsBeforeMappingOff();
    }
    else
    {
      op->vtkMapper::InterpolateScalarsBeforeMappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLookupTableScalarRange(temp0);
    }
    else
    {
      op->vtkMapper::SetUseLookupTableScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseLookupTableScalarRange() :
      op->vtkMapper::GetUseLookupTableScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_UseLookupTableScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableScalarRangeOn();
    }
    else
    {
      op->vtkMapper::UseLookupTableScalarRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_UseLookupTableScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableScalarRangeOff();
    }
    else
    {
      op->vtkMapper::UseLookupTableScalarRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkMapper::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkMapper::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkMapper_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkMapper_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkMapper_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkMapper::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkMapper::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkMapper::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToDefault();
    }
    else
    {
      op->vtkMapper::SetScalarModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUsePointFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointFieldData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUsePointFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellFieldData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUseCellFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetScalarModeToUseFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseFieldData();
    }
    else
    {
      op->vtkMapper::SetScalarModeToUseFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectColorArray(temp0);
    }
    else
    {
      op->vtkMapper::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectColorArray(temp0);
    }
    else
    {
      op->vtkMapper::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMapper_SelectColorArray_Methods[] = {
  {"SelectColorArray", PyvtkMapper_SelectColorArray_s1, METH_VARARGS,
   "@i"},
  {"SelectColorArray", PyvtkMapper_SelectColorArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMapper_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapper_SelectColorArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectColorArray");
  return nullptr;
}


static PyObject *
PyvtkMapper_SetFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataTupleId(temp0);
    }
    else
    {
      op->vtkMapper::SetFieldDataTupleId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetFieldDataTupleId() :
      op->vtkMapper::GetFieldDataTupleId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ColorByArrayComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ColorByArrayComponent(temp0, temp1);
    }
    else
    {
      op->vtkMapper::ColorByArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_ColorByArrayComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ColorByArrayComponent(temp0, temp1);
    }
    else
    {
      op->vtkMapper::ColorByArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMapper_ColorByArrayComponent_Methods[] = {
  {"ColorByArrayComponent", PyvtkMapper_ColorByArrayComponent_s1, METH_VARARGS,
   "@ii"},
  {"ColorByArrayComponent", PyvtkMapper_ColorByArrayComponent_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMapper_ColorByArrayComponent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapper_ColorByArrayComponent_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ColorByArrayComponent");
  return nullptr;
}


static PyObject *
PyvtkMapper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkMapper::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkMapper::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkMapper::GetArrayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayId(temp0);
    }
    else
    {
      op->vtkMapper::SetArrayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayAccessMode() :
      op->vtkMapper::GetArrayAccessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayAccessMode(temp0);
    }
    else
    {
      op->vtkMapper::SetArrayAccessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkMapper::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkMapper::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkMapper::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopology(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopology");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::SetResolveCoincidentTopology(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopology(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopology");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMapper::GetResolveCoincidentTopology();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToDefault(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToDefault");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMapper::SetResolveCoincidentTopologyToDefault();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToOff(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToOff");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMapper::SetResolveCoincidentTopologyToOff();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToPolygonOffset(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToPolygonOffset");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMapper::SetResolveCoincidentTopologyToPolygonOffset();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyToShiftZBuffer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyToShiftZBuffer");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkMapper::SetResolveCoincidentTopologyToShiftZBuffer();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetParameters(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyPolygonOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMapper::SetResolveCoincidentTopologyPolygonOffsetParameters(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetParameters(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyPolygonOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMapper::GetResolveCoincidentTopologyPolygonOffsetParameters(temp0, temp1);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetRelativeCoincidentTopologyPolygonOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeCoincidentTopologyPolygonOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRelativeCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::SetRelativeCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetRelativeCoincidentTopologyPolygonOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeCoincidentTopologyPolygonOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetRelativeCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::GetRelativeCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyLineOffsetParameters(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyLineOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMapper::SetResolveCoincidentTopologyLineOffsetParameters(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyLineOffsetParameters(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyLineOffsetParameters");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkMapper::GetResolveCoincidentTopologyLineOffsetParameters(temp0, temp1);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetRelativeCoincidentTopologyLineOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeCoincidentTopologyLineOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRelativeCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::SetRelativeCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetRelativeCoincidentTopologyLineOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeCoincidentTopologyLineOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetRelativeCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::GetRelativeCoincidentTopologyLineOffsetParameters(temp0, temp1);
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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyPointOffsetParameter(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyPointOffsetParameter");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::SetResolveCoincidentTopologyPointOffsetParameter(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyPointOffsetParameter(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyPointOffsetParameter");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::GetResolveCoincidentTopologyPointOffsetParameter(temp0);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetRelativeCoincidentTopologyPointOffsetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeCoincidentTopologyPointOffsetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeCoincidentTopologyPointOffsetParameter(temp0);
    }
    else
    {
      op->vtkMapper::SetRelativeCoincidentTopologyPointOffsetParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetRelativeCoincidentTopologyPointOffsetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeCoincidentTopologyPointOffsetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->GetRelativeCoincidentTopologyPointOffsetParameter(temp0);
    }
    else
    {
      op->vtkMapper::GetRelativeCoincidentTopologyPointOffsetParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetCoincidentTopologyPolygonOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentTopologyPolygonOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::GetCoincidentTopologyPolygonOffsetParameters(temp0, temp1);
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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetCoincidentTopologyLineOffsetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentTopologyLineOffsetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->GetCoincidentTopologyLineOffsetParameters(temp0, temp1);
    }
    else
    {
      op->vtkMapper::GetCoincidentTopologyLineOffsetParameters(temp0, temp1);
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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetCoincidentTopologyPointOffsetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentTopologyPointOffsetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->GetCoincidentTopologyPointOffsetParameter(temp0);
    }
    else
    {
      op->vtkMapper::GetCoincidentTopologyPointOffsetParameter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetFaces(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyPolygonOffsetFaces");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::SetResolveCoincidentTopologyPolygonOffsetFaces(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetFaces(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyPolygonOffsetFaces");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMapper::GetResolveCoincidentTopologyPolygonOffsetFaces();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetResolveCoincidentTopologyZShift(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetResolveCoincidentTopologyZShift");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMapper::SetResolveCoincidentTopologyZShift(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetResolveCoincidentTopologyZShift(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResolveCoincidentTopologyZShift");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkMapper::GetResolveCoincidentTopologyZShift();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

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
      op->vtkMapper::GetBounds(temp0);
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
PyvtkMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkMapper_SetRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderTime(temp0);
    }
    else
    {
      op->vtkMapper::SetRenderTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetRenderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRenderTime() :
      op->vtkMapper::GetRenderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetInputAsDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputAsDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInputAsDataSet() :
      op->vtkMapper::GetInputAsDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_MapScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0) :
      op->vtkMapper::MapScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_MapScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  double temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1) :
      op->vtkMapper::MapScalars(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_MapScalars_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkDataSet *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1) :
      op->vtkMapper::MapScalars(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMapper_MapScalars_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkDataSet *temp0 = nullptr;
  double temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0, temp1, temp2) :
      op->vtkMapper::MapScalars(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMapper_MapScalars_Methods[] = {
  {"MapScalars", PyvtkMapper_MapScalars_s2, METH_VARARGS,
   "@di"},
  {"MapScalars", PyvtkMapper_MapScalars_s3, METH_VARARGS,
   "@Vd *vtkDataSet"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMapper_MapScalars(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMapper_MapScalars_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkMapper_MapScalars_s1(self, args);
    case 3:
      return PyvtkMapper_MapScalars_s4(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MapScalars");
  return nullptr;
}


static PyObject *
PyvtkMapper_HasOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasOpaqueGeometry() :
      op->vtkMapper::HasOpaqueGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkMapper::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ProcessSelectorPixelBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessSelectorPixelBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkHardwareSelector *temp0 = nullptr;
  std::vector<unsigned int> temp1(ap.GetArgSize(1));
  vtkProp *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkHardwareSelector") &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetVTKObject(temp2, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMapper::ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_CanUseTextureMapForColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanUseTextureMapForColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->CanUseTextureMapForColoring(temp0) :
      op->vtkMapper::CanUseTextureMapForColoring(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_ClearColorArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearColorArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearColorArrays();
    }
    else
    {
      op->vtkMapper::ClearColorArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorMapColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMapColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetColorMapColors() :
      op->vtkMapper::GetColorMapColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetColorCoordinates() :
      op->vtkMapper::GetColorCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetColorTextureMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTextureMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetColorTextureMap() :
      op->vtkMapper::GetColorTextureMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_GetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetSelection() :
      op->vtkMapper::GetSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMapper_SetSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMapper *op = static_cast<vtkMapper *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->SetSelection(temp0);
    }
    else
    {
      op->vtkMapper::SetSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMapper_Methods[] = {
  {"IsTypeOf", PyvtkMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMapper\nC++: static vtkMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMapper\nC++: vtkMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShallowCopy", PyvtkMapper_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, m:vtkAbstractMapper) -> None\nC++: void ShallowCopy(vtkAbstractMapper *m) override;\n\nMake a shallow copy of this mapper.\n"},
  {"GetMTime", PyvtkMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload standard modified time function. If lookup table is\nmodified, then this object is modified as well.\n"},
  {"Render", PyvtkMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, a:vtkActor) -> None\nC++: virtual void Render(vtkRenderer *ren, vtkActor *a)\n\nMethod initiates the mapping process. Generally sent by the actor\nas each frame is rendered.\n"},
  {"ReleaseGraphicsResources", PyvtkMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetLookupTable", PyvtkMapper_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {"GetLookupTable", PyvtkMapper_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\n"},
  {"CreateDefaultLookupTable", PyvtkMapper_CreateDefaultLookupTable, METH_VARARGS,
   "CreateDefaultLookupTable(self) -> None\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {"SetScalarVisibility", PyvtkMapper_SetScalarVisibility, METH_VARARGS,
   "SetScalarVisibility(self, _arg:int) -> None\nC++: virtual void SetScalarVisibility(vtkTypeBool _arg)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"GetScalarVisibility", PyvtkMapper_GetScalarVisibility, METH_VARARGS,
   "GetScalarVisibility(self) -> int\nC++: virtual vtkTypeBool GetScalarVisibility()\n\n"},
  {"ScalarVisibilityOn", PyvtkMapper_ScalarVisibilityOn, METH_VARARGS,
   "ScalarVisibilityOn(self) -> None\nC++: virtual void ScalarVisibilityOn()\n\n"},
  {"ScalarVisibilityOff", PyvtkMapper_ScalarVisibilityOff, METH_VARARGS,
   "ScalarVisibilityOff(self) -> None\nC++: virtual void ScalarVisibilityOff()\n\n"},
  {"SetStatic", PyvtkMapper_SetStatic, METH_VARARGS,
   "SetStatic(self, _arg:int) -> None\nC++: virtual void SetStatic(vtkTypeBool _arg)\n\nTurn on/off flag to control whether the mapper's data is static.\nStatic data means that the mapper does not propagate updates down\nthe pipeline, greatly decreasing the time it takes to update many\nmappers. This should only be used if the data never changes.\n"},
  {"GetStatic", PyvtkMapper_GetStatic, METH_VARARGS,
   "GetStatic(self) -> int\nC++: virtual vtkTypeBool GetStatic()\n\n"},
  {"StaticOn", PyvtkMapper_StaticOn, METH_VARARGS,
   "StaticOn(self) -> None\nC++: virtual void StaticOn()\n\n"},
  {"StaticOff", PyvtkMapper_StaticOff, METH_VARARGS,
   "StaticOff(self) -> None\nC++: virtual void StaticOff()\n\n"},
  {"SetColorMode", PyvtkMapper_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\ndefault (ColorModeToDefault), unsigned char scalars are treated\nas colors, and NOT mapped through the lookup table, while\neverything else is.  ColorModeToDirectScalar extends\nColorModeToDefault such that all integer types are treated as\ncolors with values in the range 0-255 and floating types are\ntreated as colors with values in the range 0.0-1.0.  Setting\nColorModeToMapScalars means that all scalar data will be mapped\nthrough the lookup table.  (Note that for multi-component\nscalars, the particular component to use for mapping can be\nspecified using the SelectColorArray() method.)\n"},
  {"GetColorMode", PyvtkMapper_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetColorModeToDefault", PyvtkMapper_SetColorModeToDefault, METH_VARARGS,
   "SetColorModeToDefault(self) -> None\nC++: void SetColorModeToDefault()\n\n"},
  {"SetColorModeToMapScalars", PyvtkMapper_SetColorModeToMapScalars, METH_VARARGS,
   "SetColorModeToMapScalars(self) -> None\nC++: void SetColorModeToMapScalars()\n\n"},
  {"SetColorModeToDirectScalars", PyvtkMapper_SetColorModeToDirectScalars, METH_VARARGS,
   "SetColorModeToDirectScalars(self) -> None\nC++: void SetColorModeToDirectScalars()\n\n"},
  {"GetColorModeAsString", PyvtkMapper_GetColorModeAsString, METH_VARARGS,
   "GetColorModeAsString(self) -> str\nC++: const char *GetColorModeAsString()\n\nReturn the method of coloring scalar data.\n"},
  {"SetInterpolateScalarsBeforeMapping", PyvtkMapper_SetInterpolateScalarsBeforeMapping, METH_VARARGS,
   "SetInterpolateScalarsBeforeMapping(self, _arg:int) -> None\nC++: virtual void SetInterpolateScalarsBeforeMapping(\n    vtkTypeBool _arg)\n\nBy default, vertex color is used to map colors to a surface.\nColors are interpolated after being mapped. This option avoids\ncolor interpolation by using a one dimensional texture map for\nthe colors.\n"},
  {"GetInterpolateScalarsBeforeMapping", PyvtkMapper_GetInterpolateScalarsBeforeMapping, METH_VARARGS,
   "GetInterpolateScalarsBeforeMapping(self) -> int\nC++: virtual vtkTypeBool GetInterpolateScalarsBeforeMapping()\n\n"},
  {"InterpolateScalarsBeforeMappingOn", PyvtkMapper_InterpolateScalarsBeforeMappingOn, METH_VARARGS,
   "InterpolateScalarsBeforeMappingOn(self) -> None\nC++: virtual void InterpolateScalarsBeforeMappingOn()\n\n"},
  {"InterpolateScalarsBeforeMappingOff", PyvtkMapper_InterpolateScalarsBeforeMappingOff, METH_VARARGS,
   "InterpolateScalarsBeforeMappingOff(self) -> None\nC++: virtual void InterpolateScalarsBeforeMappingOff()\n\n"},
  {"SetUseLookupTableScalarRange", PyvtkMapper_SetUseLookupTableScalarRange, METH_VARARGS,
   "SetUseLookupTableScalarRange(self, _arg:int) -> None\nC++: virtual void SetUseLookupTableScalarRange(vtkTypeBool _arg)\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {"GetUseLookupTableScalarRange", PyvtkMapper_GetUseLookupTableScalarRange, METH_VARARGS,
   "GetUseLookupTableScalarRange(self) -> int\nC++: virtual vtkTypeBool GetUseLookupTableScalarRange()\n\n"},
  {"UseLookupTableScalarRangeOn", PyvtkMapper_UseLookupTableScalarRangeOn, METH_VARARGS,
   "UseLookupTableScalarRangeOn(self) -> None\nC++: virtual void UseLookupTableScalarRangeOn()\n\n"},
  {"UseLookupTableScalarRangeOff", PyvtkMapper_UseLookupTableScalarRangeOff, METH_VARARGS,
   "UseLookupTableScalarRangeOff(self) -> None\nC++: virtual void UseLookupTableScalarRangeOff()\n\n"},
  {"SetScalarRange", PyvtkMapper_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSpecify range in terms of scalar minimum and maximum (smin,smax).\nThese values are used to map scalars into lookup table. Has no\neffect when UseLookupTableScalarRange is true.\n"},
  {"GetScalarRange", PyvtkMapper_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"SetScalarMode", PyvtkMapper_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, _arg:int) -> None\nC++: virtual void SetScalarMode(int _arg)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectColorArray before you call GetColors.\n"},
  {"GetScalarMode", PyvtkMapper_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"SetScalarModeToDefault", PyvtkMapper_SetScalarModeToDefault, METH_VARARGS,
   "SetScalarModeToDefault(self) -> None\nC++: void SetScalarModeToDefault()\n\n"},
  {"SetScalarModeToUsePointData", PyvtkMapper_SetScalarModeToUsePointData, METH_VARARGS,
   "SetScalarModeToUsePointData(self) -> None\nC++: void SetScalarModeToUsePointData()\n\n"},
  {"SetScalarModeToUseCellData", PyvtkMapper_SetScalarModeToUseCellData, METH_VARARGS,
   "SetScalarModeToUseCellData(self) -> None\nC++: void SetScalarModeToUseCellData()\n\n"},
  {"SetScalarModeToUsePointFieldData", PyvtkMapper_SetScalarModeToUsePointFieldData, METH_VARARGS,
   "SetScalarModeToUsePointFieldData(self) -> None\nC++: void SetScalarModeToUsePointFieldData()\n\n"},
  {"SetScalarModeToUseCellFieldData", PyvtkMapper_SetScalarModeToUseCellFieldData, METH_VARARGS,
   "SetScalarModeToUseCellFieldData(self) -> None\nC++: void SetScalarModeToUseCellFieldData()\n\n"},
  {"SetScalarModeToUseFieldData", PyvtkMapper_SetScalarModeToUseFieldData, METH_VARARGS,
   "SetScalarModeToUseFieldData(self) -> None\nC++: void SetScalarModeToUseFieldData()\n\n"},
  {"SelectColorArray", PyvtkMapper_SelectColorArray, METH_VARARGS,
   "SelectColorArray(self, arrayNum:int) -> None\nC++: void SelectColorArray(int arrayNum)\nSelectColorArray(self, arrayName:str) -> None\nC++: void SelectColorArray(const char *arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {"SetFieldDataTupleId", PyvtkMapper_SetFieldDataTupleId, METH_VARARGS,
   "SetFieldDataTupleId(self, _arg:int) -> None\nC++: virtual void SetFieldDataTupleId(vtkIdType _arg)\n\n"},
  {"GetFieldDataTupleId", PyvtkMapper_GetFieldDataTupleId, METH_VARARGS,
   "GetFieldDataTupleId(self) -> int\nC++: virtual vtkIdType GetFieldDataTupleId()\n\n"},
  {"ColorByArrayComponent", PyvtkMapper_ColorByArrayComponent, METH_VARARGS,
   "ColorByArrayComponent(self, arrayNum:int, component:int) -> None\nC++: void ColorByArrayComponent(int arrayNum, int component)\nColorByArrayComponent(self, arrayName:str, component:int) -> None\nC++: void ColorByArrayComponent(const char *arrayName,\n    int component)\n\nLegacy: These methods used to be used to specify the array\ncomponent. It is better to do this in the lookup table.\n"},
  {"GetArrayName", PyvtkMapper_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: virtual char *GetArrayName()\n\nSet/Get the array name or number and component to color by.\n"},
  {"SetArrayName", PyvtkMapper_SetArrayName, METH_VARARGS,
   "SetArrayName(self, _arg:str) -> None\nC++: virtual void SetArrayName(const char *_arg)\n\n"},
  {"GetArrayId", PyvtkMapper_GetArrayId, METH_VARARGS,
   "GetArrayId(self) -> int\nC++: virtual int GetArrayId()\n\n"},
  {"SetArrayId", PyvtkMapper_SetArrayId, METH_VARARGS,
   "SetArrayId(self, _arg:int) -> None\nC++: virtual void SetArrayId(int _arg)\n\n"},
  {"GetArrayAccessMode", PyvtkMapper_GetArrayAccessMode, METH_VARARGS,
   "GetArrayAccessMode(self) -> int\nC++: virtual int GetArrayAccessMode()\n\n"},
  {"SetArrayAccessMode", PyvtkMapper_SetArrayAccessMode, METH_VARARGS,
   "SetArrayAccessMode(self, _arg:int) -> None\nC++: virtual void SetArrayAccessMode(int _arg)\n\n"},
  {"GetArrayComponent", PyvtkMapper_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self) -> int\nC++: virtual int GetArrayComponent()\n\n"},
  {"SetArrayComponent", PyvtkMapper_SetArrayComponent, METH_VARARGS,
   "SetArrayComponent(self, _arg:int) -> None\nC++: virtual void SetArrayComponent(int _arg)\n\n"},
  {"GetScalarModeAsString", PyvtkMapper_GetScalarModeAsString, METH_VARARGS,
   "GetScalarModeAsString(self) -> str\nC++: const char *GetScalarModeAsString()\n\nReturn the method for obtaining scalar data.\n"},
  {"SetResolveCoincidentTopology", PyvtkMapper_SetResolveCoincidentTopology, METH_VARARGS,
   "SetResolveCoincidentTopology(val:int) -> None\nC++: static void SetResolveCoincidentTopology(int val)\n\nSet/Get a global flag that controls whether coincident topology\n(e.g., a line on top of a polygon) is shifted to avoid z-buffer\nresolution (and hence rendering problems). If not off, there are\ntwo methods to choose from. PolygonOffset uses graphics systems\ncalls to shift polygons, lines and points from each other.\nShiftZBuffer is a legacy method that used to remap the z-buffer\nto distinguish vertices, lines, and polygons, but does not always\nproduce acceptable results. You should only use the PolygonOffset\nmethod (or none) at this point.\n"},
  {"GetResolveCoincidentTopology", PyvtkMapper_GetResolveCoincidentTopology, METH_VARARGS,
   "GetResolveCoincidentTopology() -> int\nC++: static int GetResolveCoincidentTopology()\n\n"},
  {"SetResolveCoincidentTopologyToDefault", PyvtkMapper_SetResolveCoincidentTopologyToDefault, METH_VARARGS,
   "SetResolveCoincidentTopologyToDefault() -> None\nC++: static void SetResolveCoincidentTopologyToDefault()\n\n"},
  {"SetResolveCoincidentTopologyToOff", PyvtkMapper_SetResolveCoincidentTopologyToOff, METH_VARARGS,
   "SetResolveCoincidentTopologyToOff() -> None\nC++: static void SetResolveCoincidentTopologyToOff()\n\n"},
  {"SetResolveCoincidentTopologyToPolygonOffset", PyvtkMapper_SetResolveCoincidentTopologyToPolygonOffset, METH_VARARGS,
   "SetResolveCoincidentTopologyToPolygonOffset() -> None\nC++: static void SetResolveCoincidentTopologyToPolygonOffset()\n\n"},
  {"SetResolveCoincidentTopologyToShiftZBuffer", PyvtkMapper_SetResolveCoincidentTopologyToShiftZBuffer, METH_VARARGS,
   "SetResolveCoincidentTopologyToShiftZBuffer() -> None\nC++: static void SetResolveCoincidentTopologyToShiftZBuffer()\n\n"},
  {"SetResolveCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "SetResolveCoincidentTopologyPolygonOffsetParameters(factor:float,\n    units:float) -> None\nC++: static void SetResolveCoincidentTopologyPolygonOffsetParameters(\n    double factor, double units)\n\nUsed to set the polygon offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"GetResolveCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "GetResolveCoincidentTopologyPolygonOffsetParameters(factor:float,\n    units:float) -> None\nC++: static void GetResolveCoincidentTopologyPolygonOffsetParameters(\n    double &factor, double &units)\n\n"},
  {"SetRelativeCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_SetRelativeCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "SetRelativeCoincidentTopologyPolygonOffsetParameters(self,\n    factor:float, units:float) -> None\nC++: void SetRelativeCoincidentTopologyPolygonOffsetParameters(\n    double factor, double units)\n\nUsed to set the polygon offset values relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"GetRelativeCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_GetRelativeCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "GetRelativeCoincidentTopologyPolygonOffsetParameters(self,\n    factor:float, units:float) -> None\nC++: void GetRelativeCoincidentTopologyPolygonOffsetParameters(\n    double &factor, double &units)\n\n"},
  {"SetResolveCoincidentTopologyLineOffsetParameters", PyvtkMapper_SetResolveCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "SetResolveCoincidentTopologyLineOffsetParameters(factor:float,\n    units:float) -> None\nC++: static void SetResolveCoincidentTopologyLineOffsetParameters(\n    double factor, double units)\n\nUsed to set the line offset scale factor and units. Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"GetResolveCoincidentTopologyLineOffsetParameters", PyvtkMapper_GetResolveCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "GetResolveCoincidentTopologyLineOffsetParameters(factor:float,\n    units:float) -> None\nC++: static void GetResolveCoincidentTopologyLineOffsetParameters(\n    double &factor, double &units)\n\n"},
  {"SetRelativeCoincidentTopologyLineOffsetParameters", PyvtkMapper_SetRelativeCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "SetRelativeCoincidentTopologyLineOffsetParameters(self,\n    factor:float, units:float) -> None\nC++: void SetRelativeCoincidentTopologyLineOffsetParameters(\n    double factor, double units)\n\nUsed to set the line offset values relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"GetRelativeCoincidentTopologyLineOffsetParameters", PyvtkMapper_GetRelativeCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "GetRelativeCoincidentTopologyLineOffsetParameters(self,\n    factor:float, units:float) -> None\nC++: void GetRelativeCoincidentTopologyLineOffsetParameters(\n    double &factor, double &units)\n\n"},
  {"SetResolveCoincidentTopologyPointOffsetParameter", PyvtkMapper_SetResolveCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "SetResolveCoincidentTopologyPointOffsetParameter(units:float)\n    -> None\nC++: static void SetResolveCoincidentTopologyPointOffsetParameter(\n    double units)\n\nUsed to set the point offset value Used when\nResolveCoincidentTopology is set to PolygonOffset. These are\nglobal variables.\n"},
  {"GetResolveCoincidentTopologyPointOffsetParameter", PyvtkMapper_GetResolveCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "GetResolveCoincidentTopologyPointOffsetParameter(units:float)\n    -> None\nC++: static void GetResolveCoincidentTopologyPointOffsetParameter(\n    double &units)\n\n"},
  {"SetRelativeCoincidentTopologyPointOffsetParameter", PyvtkMapper_SetRelativeCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "SetRelativeCoincidentTopologyPointOffsetParameter(self,\n    units:float) -> None\nC++: void SetRelativeCoincidentTopologyPointOffsetParameter(\n    double units)\n\nUsed to set the point offset value relative to the global Used\nwhen ResolveCoincidentTopology is set to PolygonOffset.\n"},
  {"GetRelativeCoincidentTopologyPointOffsetParameter", PyvtkMapper_GetRelativeCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "GetRelativeCoincidentTopologyPointOffsetParameter(self,\n    units:float) -> None\nC++: void GetRelativeCoincidentTopologyPointOffsetParameter(\n    double &units)\n\n"},
  {"GetCoincidentTopologyPolygonOffsetParameters", PyvtkMapper_GetCoincidentTopologyPolygonOffsetParameters, METH_VARARGS,
   "GetCoincidentTopologyPolygonOffsetParameters(self, factor:float,\n    units:float) -> None\nC++: void GetCoincidentTopologyPolygonOffsetParameters(\n    double &factor, double &units)\n\nGet the net parameters for handling coincident topology obtained\nby summing the global values with the relative values.\n"},
  {"GetCoincidentTopologyLineOffsetParameters", PyvtkMapper_GetCoincidentTopologyLineOffsetParameters, METH_VARARGS,
   "GetCoincidentTopologyLineOffsetParameters(self, factor:float,\n    units:float) -> None\nC++: void GetCoincidentTopologyLineOffsetParameters(\n    double &factor, double &units)\n\n"},
  {"GetCoincidentTopologyPointOffsetParameter", PyvtkMapper_GetCoincidentTopologyPointOffsetParameter, METH_VARARGS,
   "GetCoincidentTopologyPointOffsetParameter(self, units:float)\n    -> None\nC++: void GetCoincidentTopologyPointOffsetParameter(double &units)\n\n"},
  {"SetResolveCoincidentTopologyPolygonOffsetFaces", PyvtkMapper_SetResolveCoincidentTopologyPolygonOffsetFaces, METH_VARARGS,
   "SetResolveCoincidentTopologyPolygonOffsetFaces(faces:int) -> None\nC++: static void SetResolveCoincidentTopologyPolygonOffsetFaces(\n    int faces)\n\nUsed when ResolveCoincidentTopology is set to PolygonOffset. The\npolygon offset can be applied either to the solid polygonal faces\nor the lines/vertices. When set (default), the offset is applied\nto the faces otherwise it is applied to lines and vertices. This\nis a global variable.\n"},
  {"GetResolveCoincidentTopologyPolygonOffsetFaces", PyvtkMapper_GetResolveCoincidentTopologyPolygonOffsetFaces, METH_VARARGS,
   "GetResolveCoincidentTopologyPolygonOffsetFaces() -> int\nC++: static int GetResolveCoincidentTopologyPolygonOffsetFaces()\n\n"},
  {"SetResolveCoincidentTopologyZShift", PyvtkMapper_SetResolveCoincidentTopologyZShift, METH_VARARGS,
   "SetResolveCoincidentTopologyZShift(val:float) -> None\nC++: static void SetResolveCoincidentTopologyZShift(double val)\n\nUsed to set the z-shift if ResolveCoincidentTopology is set to\nShiftZBuffer. This is a global variable.\n"},
  {"GetResolveCoincidentTopologyZShift", PyvtkMapper_GetResolveCoincidentTopologyZShift, METH_VARARGS,
   "GetResolveCoincidentTopologyZShift() -> float\nC++: static double GetResolveCoincidentTopologyZShift()\n\n"},
  {"GetBounds", PyvtkMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"SetRenderTime", PyvtkMapper_SetRenderTime, METH_VARARGS,
   "SetRenderTime(self, time:float) -> None\nC++: void SetRenderTime(double time)\n\nThis instance variable is used by vtkLODActor to determine which\nmapper to use.  It is an estimate of the time necessary to\nrender. Setting the render time does not modify the mapper.\n"},
  {"GetRenderTime", PyvtkMapper_GetRenderTime, METH_VARARGS,
   "GetRenderTime(self) -> float\nC++: virtual double GetRenderTime()\n\n"},
  {"GetInput", PyvtkMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet the input as a vtkDataSet.  This method is overridden in the\nspecialized mapper classes to return more specific data types.\n"},
  {"GetInputAsDataSet", PyvtkMapper_GetInputAsDataSet, METH_VARARGS,
   "GetInputAsDataSet(self) -> vtkDataSet\nC++: vtkDataSet *GetInputAsDataSet()\n\nGet the input to this mapper as a vtkDataSet, instead of as a\nmore specialized data type that the subclass may return from\nGetInput().  This method is provided for use in the wrapper\nlanguages, C++ programmers should use GetInput() instead.\n"},
  {"MapScalars", PyvtkMapper_MapScalars, METH_VARARGS,
   "MapScalars(self, alpha:float) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(double alpha)\nMapScalars(self, alpha:float, cellFlag:int)\n    -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(double alpha,\n    int &cellFlag)\nMapScalars(self, input:vtkDataSet, alpha:float)\n    -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(vtkDataSet *input,\n    double alpha)\nMapScalars(self, input:vtkDataSet, alpha:float, cellFlag:int)\n    -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(vtkDataSet *input,\n    double alpha, int &cellFlag)\n\nMap the scalars (if there are any scalars and ScalarVisibility is\non) through the lookup table, returning an unsigned char RGBA\narray. This is typically done as part of the rendering process.\nThe alpha parameter allows the blending of the scalars with an\nadditional alpha (typically which comes from a vtkActor, etc.)\n"},
  {"HasOpaqueGeometry", PyvtkMapper_HasOpaqueGeometry, METH_VARARGS,
   "HasOpaqueGeometry(self) -> bool\nC++: virtual bool HasOpaqueGeometry()\n\nSome introspection on the type of data the mapper will render\nused by props to determine if they should invoke the mapper on a\nspecific rendering pass.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkMapper_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> bool\nC++: virtual bool HasTranslucentPolygonalGeometry()\n\n"},
  {"GetSupportsSelection", PyvtkMapper_GetSupportsSelection, METH_VARARGS,
   "GetSupportsSelection(self) -> bool\nC++: virtual bool GetSupportsSelection()\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {"ProcessSelectorPixelBuffers", PyvtkMapper_ProcessSelectorPixelBuffers, METH_VARARGS,
   "ProcessSelectorPixelBuffers(self, __a:vtkHardwareSelector,\n    __b:[int, ...], __c:vtkProp) -> None\nC++: virtual void ProcessSelectorPixelBuffers(\n    vtkHardwareSelector *, std::vector<unsigned int> &, vtkProp *)\n\nallows a mapper to update a selections color buffers Called from\na prop which in turn is called from the selector\n"},
  {"CanUseTextureMapForColoring", PyvtkMapper_CanUseTextureMapForColoring, METH_VARARGS,
   "CanUseTextureMapForColoring(self, input:vtkDataObject) -> int\nC++: virtual int CanUseTextureMapForColoring(vtkDataObject *input)\n\nReturns if we can use texture maps for scalar coloring. Note this\ndoesn't say we \"will\" use scalar coloring. It says, if we do use\nscalar coloring, we will use a texture. When rendering multiblock\ndatasets, if any 2 blocks provide different lookup tables for the\nscalars, then also we cannot use textures. This case can be\nhandled if required.\n"},
  {"ClearColorArrays", PyvtkMapper_ClearColorArrays, METH_VARARGS,
   "ClearColorArrays(self) -> None\nC++: void ClearColorArrays()\n\nCall to force a rebuild of color result arrays on next\nMapScalars. Necessary when using arrays in the case of multiblock\ndata.\n"},
  {"GetColorMapColors", PyvtkMapper_GetColorMapColors, METH_VARARGS,
   "GetColorMapColors(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetColorMapColors()\n\nProvide read access to the color array\n"},
  {"GetColorCoordinates", PyvtkMapper_GetColorCoordinates, METH_VARARGS,
   "GetColorCoordinates(self) -> vtkFloatArray\nC++: vtkFloatArray *GetColorCoordinates()\n\nProvide read access to the color texture coordinate array\n"},
  {"GetColorTextureMap", PyvtkMapper_GetColorTextureMap, METH_VARARGS,
   "GetColorTextureMap(self) -> vtkImageData\nC++: vtkImageData *GetColorTextureMap()\n\nProvide read access to the color texture array\n"},
  {"GetSelection", PyvtkMapper_GetSelection, METH_VARARGS,
   "GetSelection(self) -> vtkSelection\nC++: virtual vtkSelection *GetSelection()\n\nSet/Get selection used to display particular points or cells in a\nsecond pass. This can be use to efficiently display a selection.\n"},
  {"SetSelection", PyvtkMapper_SetSelection, METH_VARARGS,
   "SetSelection(self, __a:vtkSelection) -> None\nC++: virtual void SetSelection(vtkSelection *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMapper_Doc =
  "vtkMapper - abstract class specifies interface to map data to\ngraphics primitives\n\n"
  "Superclass: vtkAbstractMapper3D\n\n"
  "vtkMapper is an abstract class to specify interface between data and\n"
  "graphics primitives. Subclasses of vtkMapper map data through a\n"
  "lookuptable and control the creation of rendering primitives that\n"
  "interface to the graphics library. The mapping can be controlled by\n"
  "supplying a lookup table and specifying a scalar range to map data\n"
  "through.\n\n"
  "There are several important control mechanisms affecting the behavior\n"
  "of this object. The ScalarVisibility flag controls whether scalar\n"
  "data (if any) controls the color of the associated actor(s) that\n"
  "refer to the mapper. The ScalarMode ivar is used to determine whether\n"
  "scalar point data or cell data is used to color the object. By\n"
  "default, point data scalars are used unless there are none, in which\n"
  "cell scalars are used. Or you can explicitly control whether to use\n"
  "point or cell scalar data. Finally, the mapping of scalars through\n"
  "the lookup table varies depending on the setting of the ColorMode\n"
  "flag. See the documentation for the appropriate methods for an\n"
  "explanation.\n\n"
  "Another important feature of the mapper is the ability to shift the\n"
  "z-buffer to resolve coincident topology. For example, if you'd like\n"
  "to draw a mesh with some edges a different color, and the edges lie\n"
  "on the mesh, this feature can be useful to get nice looking lines.\n"
  "(See the ResolveCoincidentTopology-related methods.)\n\n"
  "@sa\n"
  "vtkDataSetMapper vtkPolyDataMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkMapper", // tp_name
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
  PyvtkMapper_Doc, // tp_doc
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

PyObject *PyvtkMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMapper_Type, PyvtkMapper_Methods,
    "vtkMapper",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractMapper3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMapper", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VTK_RESOLVE_OFF", 0 },
        { "VTK_RESOLVE_POLYGON_OFFSET", 1 },
        { "VTK_RESOLVE_SHIFT_ZBUFFER", 2 },
        { "VTK_GET_ARRAY_BY_ID", 0 },
        { "VTK_GET_ARRAY_BY_NAME", 1 },
        { "VTK_MATERIALMODE_DEFAULT", 0 },
        { "VTK_MATERIALMODE_AMBIENT", 1 },
        { "VTK_MATERIALMODE_DIFFUSE", 2 },
        { "VTK_MATERIALMODE_AMBIENT_AND_DIFFUSE", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

