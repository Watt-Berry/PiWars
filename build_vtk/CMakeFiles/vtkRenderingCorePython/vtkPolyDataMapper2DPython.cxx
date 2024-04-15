// python wrapper for vtkPolyDataMapper2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataMapper2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataMapper2D(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataMapper2D_ClassNew(); }

#ifndef DECLARED_PyvtkMapper2D_ClassNew
extern "C" { PyObject *PyvtkMapper2D_ClassNew(); }
#define DECLARED_PyvtkMapper2D_ClassNew
#endif

static PyObject *
PyvtkPolyDataMapper2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataMapper2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataMapper2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataMapper2D *tempr = vtkPolyDataMapper2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataMapper2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataMapper2D::NewInstance());

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
PyvtkPolyDataMapper2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataMapper2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataMapper2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPolyDataMapper2D::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkPolyDataMapper2D::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPolyDataMapper2D::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLookupTable();
    }
    else
    {
      op->vtkPolyDataMapper2D::CreateDefaultLookupTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkPolyDataMapper2D::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkPolyDataMapper2D::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkPolyDataMapper2D::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkPolyDataMapper2D::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDefault();
    }
    else
    {
      op->vtkPolyDataMapper2D::SetColorModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetColorModeToMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToMapScalars();
    }
    else
    {
      op->vtkPolyDataMapper2D::SetColorModeToMapScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetColorModeToDirectScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDirectScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDirectScalars();
    }
    else
    {
      op->vtkPolyDataMapper2D::SetColorModeToDirectScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetColorModeAsString() :
      op->vtkPolyDataMapper2D::GetColorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::SetUseLookupTableScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseLookupTableScalarRange() :
      op->vtkPolyDataMapper2D::GetUseLookupTableScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_UseLookupTableScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableScalarRangeOn();
    }
    else
    {
      op->vtkPolyDataMapper2D::UseLookupTableScalarRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_UseLookupTableScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableScalarRangeOff();
    }
    else
    {
      op->vtkPolyDataMapper2D::UseLookupTableScalarRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper2D_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper2D_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkPolyDataMapper2D_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkPolyDataMapper2D_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkPolyDataMapper2D_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkPolyDataMapper2D::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkPolyDataMapper2D::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToDefault();
    }
    else
    {
      op->vtkPolyDataMapper2D::SetScalarModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointData();
    }
    else
    {
      op->vtkPolyDataMapper2D::SetScalarModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellData();
    }
    else
    {
      op->vtkPolyDataMapper2D::SetScalarModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToUsePointFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointFieldData();
    }
    else
    {
      op->vtkPolyDataMapper2D::SetScalarModeToUsePointFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetScalarModeToUseCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellFieldData();
    }
    else
    {
      op->vtkPolyDataMapper2D::SetScalarModeToUseCellFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_ColorByArrayComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::ColorByArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolyDataMapper2D_ColorByArrayComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::ColorByArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataMapper2D_ColorByArrayComponent_Methods[] = {
  {"ColorByArrayComponent", PyvtkPolyDataMapper2D_ColorByArrayComponent_s1, METH_VARARGS,
   "@ii"},
  {"ColorByArrayComponent", PyvtkPolyDataMapper2D_ColorByArrayComponent_s2, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolyDataMapper2D_ColorByArrayComponent(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolyDataMapper2D_ColorByArrayComponent_Methods;
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
PyvtkPolyDataMapper2D_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkPolyDataMapper2D::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkPolyDataMapper2D::GetArrayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayAccessMode() :
      op->vtkPolyDataMapper2D::GetArrayAccessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkPolyDataMapper2D::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkPolyDataMapper2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetTransformCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  vtkCoordinate *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCoordinate"))
  {
    if (ap.IsBound())
    {
      op->SetTransformCoordinate(temp0);
    }
    else
    {
      op->vtkPolyDataMapper2D::SetTransformCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetTransformCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetTransformCoordinate() :
      op->vtkPolyDataMapper2D::GetTransformCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_GetTransformCoordinateUseDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransformCoordinateUseDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransformCoordinateUseDouble() :
      op->vtkPolyDataMapper2D::GetTransformCoordinateUseDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_SetTransformCoordinateUseDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformCoordinateUseDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransformCoordinateUseDouble(temp0);
    }
    else
    {
      op->vtkPolyDataMapper2D::SetTransformCoordinateUseDouble(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_TransformCoordinateUseDoubleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformCoordinateUseDoubleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransformCoordinateUseDoubleOn();
    }
    else
    {
      op->vtkPolyDataMapper2D::TransformCoordinateUseDoubleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_TransformCoordinateUseDoubleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformCoordinateUseDoubleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TransformCoordinateUseDoubleOff();
    }
    else
    {
      op->vtkPolyDataMapper2D::TransformCoordinateUseDoubleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_MapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->MapScalars(temp0) :
      op->vtkPolyDataMapper2D::MapScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataMapper2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataMapper2D *op = static_cast<vtkPolyDataMapper2D *>(vp);

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
      op->vtkPolyDataMapper2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataMapper2D_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataMapper2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataMapper2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataMapper2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataMapper2D\nC++: static vtkPolyDataMapper2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataMapper2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataMapper2D\nC++: vtkPolyDataMapper2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataMapper2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataMapper2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputData", PyvtkPolyDataMapper2D_SetInputData, METH_VARARGS,
   "SetInputData(self, in_:vtkPolyData) -> None\nC++: void SetInputData(vtkPolyData *in)\n\nSet the input to the mapper.\n"},
  {"GetInput", PyvtkPolyDataMapper2D_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\n"},
  {"SetLookupTable", PyvtkPolyDataMapper2D_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {"GetLookupTable", PyvtkPolyDataMapper2D_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\n"},
  {"CreateDefaultLookupTable", PyvtkPolyDataMapper2D_CreateDefaultLookupTable, METH_VARARGS,
   "CreateDefaultLookupTable(self) -> None\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {"SetScalarVisibility", PyvtkPolyDataMapper2D_SetScalarVisibility, METH_VARARGS,
   "SetScalarVisibility(self, _arg:int) -> None\nC++: virtual void SetScalarVisibility(vtkTypeBool _arg)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"GetScalarVisibility", PyvtkPolyDataMapper2D_GetScalarVisibility, METH_VARARGS,
   "GetScalarVisibility(self) -> int\nC++: virtual vtkTypeBool GetScalarVisibility()\n\n"},
  {"ScalarVisibilityOn", PyvtkPolyDataMapper2D_ScalarVisibilityOn, METH_VARARGS,
   "ScalarVisibilityOn(self) -> None\nC++: virtual void ScalarVisibilityOn()\n\n"},
  {"ScalarVisibilityOff", PyvtkPolyDataMapper2D_ScalarVisibilityOff, METH_VARARGS,
   "ScalarVisibilityOff(self) -> None\nC++: virtual void ScalarVisibilityOff()\n\n"},
  {"SetColorMode", PyvtkPolyDataMapper2D_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\nControl how the scalar data is mapped to colors.  By default\n(ColorModeToDefault), unsigned char scalars are treated as\ncolors, and NOT mapped through the lookup table, while everything\nelse is. ColorModeToDirectScalar extends ColorModeToDefault such\nthat all integer types are treated as colors with values in the\nrange 0-255 and floating types are treated as colors with values\nin the range 0.0-1.0. Setting ColorModeToMapScalars means that\nall scalar data will be mapped through the lookup table.  (Note\nthat for multi-component scalars, the particular component to use\nfor mapping can be specified using the ColorByArrayComponent()\nmethod.)\n"},
  {"GetColorMode", PyvtkPolyDataMapper2D_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"SetColorModeToDefault", PyvtkPolyDataMapper2D_SetColorModeToDefault, METH_VARARGS,
   "SetColorModeToDefault(self) -> None\nC++: void SetColorModeToDefault()\n\n"},
  {"SetColorModeToMapScalars", PyvtkPolyDataMapper2D_SetColorModeToMapScalars, METH_VARARGS,
   "SetColorModeToMapScalars(self) -> None\nC++: void SetColorModeToMapScalars()\n\n"},
  {"SetColorModeToDirectScalars", PyvtkPolyDataMapper2D_SetColorModeToDirectScalars, METH_VARARGS,
   "SetColorModeToDirectScalars(self) -> None\nC++: void SetColorModeToDirectScalars()\n\n"},
  {"GetColorModeAsString", PyvtkPolyDataMapper2D_GetColorModeAsString, METH_VARARGS,
   "GetColorModeAsString(self) -> str\nC++: const char *GetColorModeAsString()\n\nReturn the method of coloring scalar data.\n"},
  {"SetUseLookupTableScalarRange", PyvtkPolyDataMapper2D_SetUseLookupTableScalarRange, METH_VARARGS,
   "SetUseLookupTableScalarRange(self, _arg:int) -> None\nC++: virtual void SetUseLookupTableScalarRange(vtkTypeBool _arg)\n\nControl whether the mapper sets the lookuptable range based on\nits own ScalarRange, or whether it will use the LookupTable\nScalarRange regardless of it's own setting. By default the Mapper\nis allowed to set the LookupTable range, but users who are\nsharing LookupTables between mappers/actors will probably wish to\nforce the mapper to use the LookupTable unchanged.\n"},
  {"GetUseLookupTableScalarRange", PyvtkPolyDataMapper2D_GetUseLookupTableScalarRange, METH_VARARGS,
   "GetUseLookupTableScalarRange(self) -> int\nC++: virtual vtkTypeBool GetUseLookupTableScalarRange()\n\n"},
  {"UseLookupTableScalarRangeOn", PyvtkPolyDataMapper2D_UseLookupTableScalarRangeOn, METH_VARARGS,
   "UseLookupTableScalarRangeOn(self) -> None\nC++: virtual void UseLookupTableScalarRangeOn()\n\n"},
  {"UseLookupTableScalarRangeOff", PyvtkPolyDataMapper2D_UseLookupTableScalarRangeOff, METH_VARARGS,
   "UseLookupTableScalarRangeOff(self) -> None\nC++: virtual void UseLookupTableScalarRangeOff()\n\n"},
  {"SetScalarRange", PyvtkPolyDataMapper2D_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSpecify range in terms of scalar minimum and maximum (smin,smax).\nThese values are used to map scalars into lookup table. Has no\neffect when UseLookupTableScalarRange is true.\n"},
  {"GetScalarRange", PyvtkPolyDataMapper2D_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"SetScalarMode", PyvtkPolyDataMapper2D_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, _arg:int) -> None\nC++: virtual void SetScalarMode(int _arg)\n\nControl how the filter works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the filter\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the filter to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nColorByArrayComponent before you call GetColors.\n"},
  {"GetScalarMode", PyvtkPolyDataMapper2D_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"SetScalarModeToDefault", PyvtkPolyDataMapper2D_SetScalarModeToDefault, METH_VARARGS,
   "SetScalarModeToDefault(self) -> None\nC++: void SetScalarModeToDefault()\n\n"},
  {"SetScalarModeToUsePointData", PyvtkPolyDataMapper2D_SetScalarModeToUsePointData, METH_VARARGS,
   "SetScalarModeToUsePointData(self) -> None\nC++: void SetScalarModeToUsePointData()\n\n"},
  {"SetScalarModeToUseCellData", PyvtkPolyDataMapper2D_SetScalarModeToUseCellData, METH_VARARGS,
   "SetScalarModeToUseCellData(self) -> None\nC++: void SetScalarModeToUseCellData()\n\n"},
  {"SetScalarModeToUsePointFieldData", PyvtkPolyDataMapper2D_SetScalarModeToUsePointFieldData, METH_VARARGS,
   "SetScalarModeToUsePointFieldData(self) -> None\nC++: void SetScalarModeToUsePointFieldData()\n\n"},
  {"SetScalarModeToUseCellFieldData", PyvtkPolyDataMapper2D_SetScalarModeToUseCellFieldData, METH_VARARGS,
   "SetScalarModeToUseCellFieldData(self) -> None\nC++: void SetScalarModeToUseCellFieldData()\n\n"},
  {"ColorByArrayComponent", PyvtkPolyDataMapper2D_ColorByArrayComponent, METH_VARARGS,
   "ColorByArrayComponent(self, arrayNum:int, component:int) -> None\nC++: void ColorByArrayComponent(int arrayNum, int component)\nColorByArrayComponent(self, arrayName:str, component:int) -> None\nC++: void ColorByArrayComponent(const char *arrayName,\n    int component)\n\nChoose which component of which field data array to color by.\n"},
  {"GetArrayName", PyvtkPolyDataMapper2D_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: const char *GetArrayName()\n\nGet the array name or number and component to color by.\n"},
  {"GetArrayId", PyvtkPolyDataMapper2D_GetArrayId, METH_VARARGS,
   "GetArrayId(self) -> int\nC++: int GetArrayId()\n\n"},
  {"GetArrayAccessMode", PyvtkPolyDataMapper2D_GetArrayAccessMode, METH_VARARGS,
   "GetArrayAccessMode(self) -> int\nC++: int GetArrayAccessMode()\n\n"},
  {"GetArrayComponent", PyvtkPolyDataMapper2D_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self) -> int\nC++: int GetArrayComponent()\n\n"},
  {"GetMTime", PyvtkPolyDataMapper2D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload standard modified time function. If lookup table is\nmodified, then this object is modified as well.\n"},
  {"SetTransformCoordinate", PyvtkPolyDataMapper2D_SetTransformCoordinate, METH_VARARGS,
   "SetTransformCoordinate(self, __a:vtkCoordinate) -> None\nC++: virtual void SetTransformCoordinate(vtkCoordinate *)\n\nSpecify a vtkCoordinate object to be used to transform the\nvtkPolyData point coordinates. By default (no vtkCoordinate\nspecified), the point coordinates are taken as viewport\ncoordinates (pixels in the viewport into which the mapper is\nrendering).\n"},
  {"GetTransformCoordinate", PyvtkPolyDataMapper2D_GetTransformCoordinate, METH_VARARGS,
   "GetTransformCoordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetTransformCoordinate()\n\n"},
  {"GetTransformCoordinateUseDouble", PyvtkPolyDataMapper2D_GetTransformCoordinateUseDouble, METH_VARARGS,
   "GetTransformCoordinateUseDouble(self) -> bool\nC++: virtual bool GetTransformCoordinateUseDouble()\n\nSpecify whether or not rounding to integers the transformed\npoints when TransformCoordinate is set. By default, it does not\nuse double precision.\n"},
  {"SetTransformCoordinateUseDouble", PyvtkPolyDataMapper2D_SetTransformCoordinateUseDouble, METH_VARARGS,
   "SetTransformCoordinateUseDouble(self, _arg:bool) -> None\nC++: virtual void SetTransformCoordinateUseDouble(bool _arg)\n\n"},
  {"TransformCoordinateUseDoubleOn", PyvtkPolyDataMapper2D_TransformCoordinateUseDoubleOn, METH_VARARGS,
   "TransformCoordinateUseDoubleOn(self) -> None\nC++: virtual void TransformCoordinateUseDoubleOn()\n\n"},
  {"TransformCoordinateUseDoubleOff", PyvtkPolyDataMapper2D_TransformCoordinateUseDoubleOff, METH_VARARGS,
   "TransformCoordinateUseDoubleOff(self) -> None\nC++: virtual void TransformCoordinateUseDoubleOff()\n\n"},
  {"MapScalars", PyvtkPolyDataMapper2D_MapScalars, METH_VARARGS,
   "MapScalars(self, alpha:float) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *MapScalars(double alpha)\n\nMap the scalars (if there are any scalars and ScalarVisibility is\non) through the lookup table, returning an unsigned char RGBA\narray. This is typically done as part of the rendering process.\nThe alpha parameter allows the blending of the scalars with an\nadditional alpha (typically which comes from a vtkActor, etc.)\n"},
  {"ShallowCopy", PyvtkPolyDataMapper2D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, m:vtkAbstractMapper) -> None\nC++: void ShallowCopy(vtkAbstractMapper *m) override;\n\nMake a shallow copy of this mapper.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataMapper2D_Doc =
  "vtkPolyDataMapper2D - draw vtkPolyData onto the image plane\n\n"
  "Superclass: vtkMapper2D\n\n"
  "vtkPolyDataMapper2D is a mapper that renders 3D polygonal data\n"
  "(vtkPolyData) onto the 2D image plane (i.e., the renderer's\n"
  "viewport). By default, the 3D data is transformed into 2D data by\n"
  "ignoring the z-coordinate of the 3D points in vtkPolyData, and taking\n"
  "the x-y values as local display values (i.e., pixel coordinates).\n"
  "Alternatively, you can provide a vtkCoordinate object that will\n"
  "transform the data into local display coordinates (use the\n"
  "vtkCoordinate::SetCoordinateSystem() methods to indicate which\n"
  "coordinate system you are transforming the data from).\n\n"
  "@sa\n"
  "vtkMapper2D vtkActor2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataMapper2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkPolyDataMapper2D", // tp_name
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
  PyvtkPolyDataMapper2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataMapper2D_StaticNew()
{
  return vtkPolyDataMapper2D::New();
}

PyObject *PyvtkPolyDataMapper2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataMapper2D_Type, PyvtkPolyDataMapper2D_Methods,
    "vtkPolyDataMapper2D",
 &PyvtkPolyDataMapper2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMapper2D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataMapper2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataMapper2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataMapper2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

