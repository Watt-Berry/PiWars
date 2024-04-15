// python wrapper for vtkApplyColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkApplyColors.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkApplyColors(PyObject *dict); }
extern "C" { PyObject *PyvtkApplyColors_ClassNew(); }


static PyObject *
PyvtkApplyColors_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkApplyColors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkApplyColors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkApplyColors *tempr = vtkApplyColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkApplyColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkApplyColors::NewInstance());

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
PyvtkApplyColors_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkApplyColors::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkApplyColors::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetPointLookupTable(temp0);
    }
    else
    {
      op->vtkApplyColors::SetPointLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetPointLookupTable() :
      op->vtkApplyColors::GetPointLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetUsePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUsePointLookupTable(temp0);
    }
    else
    {
      op->vtkApplyColors::SetUsePointLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetUsePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUsePointLookupTable() :
      op->vtkApplyColors::GetUsePointLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_UsePointLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsePointLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UsePointLookupTableOn();
    }
    else
    {
      op->vtkApplyColors::UsePointLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_UsePointLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsePointLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UsePointLookupTableOff();
    }
    else
    {
      op->vtkApplyColors::UsePointLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalePointLookupTable(temp0);
    }
    else
    {
      op->vtkApplyColors::SetScalePointLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalePointLookupTable() :
      op->vtkApplyColors::GetScalePointLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_ScalePointLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalePointLookupTableOn();
    }
    else
    {
      op->vtkApplyColors::ScalePointLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_ScalePointLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalePointLookupTableOff();
    }
    else
    {
      op->vtkApplyColors::ScalePointLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetDefaultPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      op->SetDefaultPointColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkApplyColors::SetDefaultPointColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyColors_SetDefaultPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultPointColor(temp0);
    }
    else
    {
      op->vtkApplyColors::SetDefaultPointColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyColors_SetDefaultPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkApplyColors_SetDefaultPointColor_s1(self, args);
    case 1:
      return PyvtkApplyColors_SetDefaultPointColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultPointColor");
  return nullptr;
}


static PyObject *
PyvtkApplyColors_GetDefaultPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultPointColor() :
      op->vtkApplyColors::GetDefaultPointColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetDefaultPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultPointOpacity(temp0);
    }
    else
    {
      op->vtkApplyColors::SetDefaultPointOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetDefaultPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultPointOpacity() :
      op->vtkApplyColors::GetDefaultPointOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetSelectedPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      op->SetSelectedPointColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkApplyColors::SetSelectedPointColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyColors_SetSelectedPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPointColor(temp0);
    }
    else
    {
      op->vtkApplyColors::SetSelectedPointColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyColors_SetSelectedPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkApplyColors_SetSelectedPointColor_s1(self, args);
    case 1:
      return PyvtkApplyColors_SetSelectedPointColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedPointColor");
  return nullptr;
}


static PyObject *
PyvtkApplyColors_GetSelectedPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectedPointColor() :
      op->vtkApplyColors::GetSelectedPointColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPointOpacity(temp0);
    }
    else
    {
      op->vtkApplyColors::SetSelectedPointOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedPointOpacity() :
      op->vtkApplyColors::GetSelectedPointOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetPointColorOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColorOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointColorOutputArrayName(temp0);
    }
    else
    {
      op->vtkApplyColors::SetPointColorOutputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetPointColorOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColorOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPointColorOutputArrayName() :
      op->vtkApplyColors::GetPointColorOutputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetCellLookupTable(temp0);
    }
    else
    {
      op->vtkApplyColors::SetCellLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetCellLookupTable() :
      op->vtkApplyColors::GetCellLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetUseCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCellLookupTable(temp0);
    }
    else
    {
      op->vtkApplyColors::SetUseCellLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetUseCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCellLookupTable() :
      op->vtkApplyColors::GetUseCellLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_UseCellLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCellLookupTableOn();
    }
    else
    {
      op->vtkApplyColors::UseCellLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_UseCellLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCellLookupTableOff();
    }
    else
    {
      op->vtkApplyColors::UseCellLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleCellLookupTable(temp0);
    }
    else
    {
      op->vtkApplyColors::SetScaleCellLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaleCellLookupTable() :
      op->vtkApplyColors::GetScaleCellLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_ScaleCellLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleCellLookupTableOn();
    }
    else
    {
      op->vtkApplyColors::ScaleCellLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_ScaleCellLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScaleCellLookupTableOff();
    }
    else
    {
      op->vtkApplyColors::ScaleCellLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetDefaultCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      op->SetDefaultCellColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkApplyColors::SetDefaultCellColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyColors_SetDefaultCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultCellColor(temp0);
    }
    else
    {
      op->vtkApplyColors::SetDefaultCellColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyColors_SetDefaultCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkApplyColors_SetDefaultCellColor_s1(self, args);
    case 1:
      return PyvtkApplyColors_SetDefaultCellColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDefaultCellColor");
  return nullptr;
}


static PyObject *
PyvtkApplyColors_GetDefaultCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDefaultCellColor() :
      op->vtkApplyColors::GetDefaultCellColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetDefaultCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultCellOpacity(temp0);
    }
    else
    {
      op->vtkApplyColors::SetDefaultCellOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetDefaultCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultCellOpacity() :
      op->vtkApplyColors::GetDefaultCellOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetSelectedCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

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
      op->SetSelectedCellColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkApplyColors::SetSelectedCellColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyColors_SetSelectedCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedCellColor(temp0);
    }
    else
    {
      op->vtkApplyColors::SetSelectedCellColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyColors_SetSelectedCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkApplyColors_SetSelectedCellColor_s1(self, args);
    case 1:
      return PyvtkApplyColors_SetSelectedCellColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedCellColor");
  return nullptr;
}


static PyObject *
PyvtkApplyColors_GetSelectedCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectedCellColor() :
      op->vtkApplyColors::GetSelectedCellColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedCellOpacity(temp0);
    }
    else
    {
      op->vtkApplyColors::SetSelectedCellOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedCellOpacity() :
      op->vtkApplyColors::GetSelectedCellOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetCellColorOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellColorOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellColorOutputArrayName(temp0);
    }
    else
    {
      op->vtkApplyColors::SetCellColorOutputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetCellColorOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellColorOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCellColorOutputArrayName() :
      op->vtkApplyColors::GetCellColorOutputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_SetUseCurrentAnnotationColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCurrentAnnotationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCurrentAnnotationColor(temp0);
    }
    else
    {
      op->vtkApplyColors::SetUseCurrentAnnotationColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetUseCurrentAnnotationColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCurrentAnnotationColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseCurrentAnnotationColor() :
      op->vtkApplyColors::GetUseCurrentAnnotationColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_UseCurrentAnnotationColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCurrentAnnotationColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCurrentAnnotationColorOn();
    }
    else
    {
      op->vtkApplyColors::UseCurrentAnnotationColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_UseCurrentAnnotationColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCurrentAnnotationColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCurrentAnnotationColorOff();
    }
    else
    {
      op->vtkApplyColors::UseCurrentAnnotationColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyColors_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyColors *op = static_cast<vtkApplyColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkApplyColors::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkApplyColors_Methods[] = {
  {"IsTypeOf", PyvtkApplyColors_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkApplyColors_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkApplyColors_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkApplyColors\nC++: static vtkApplyColors *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkApplyColors_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkApplyColors\nC++: vtkApplyColors *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkApplyColors_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkApplyColors_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPointLookupTable", PyvtkApplyColors_SetPointLookupTable, METH_VARARGS,
   "SetPointLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: virtual void SetPointLookupTable(vtkScalarsToColors *lut)\n\nThe lookup table to use for point colors. This is only used if\ninput array 0 is set and UsePointLookupTable is on.\n"},
  {"GetPointLookupTable", PyvtkApplyColors_GetPointLookupTable, METH_VARARGS,
   "GetPointLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetPointLookupTable()\n\n"},
  {"SetUsePointLookupTable", PyvtkApplyColors_SetUsePointLookupTable, METH_VARARGS,
   "SetUsePointLookupTable(self, _arg:bool) -> None\nC++: virtual void SetUsePointLookupTable(bool _arg)\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {"GetUsePointLookupTable", PyvtkApplyColors_GetUsePointLookupTable, METH_VARARGS,
   "GetUsePointLookupTable(self) -> bool\nC++: virtual bool GetUsePointLookupTable()\n\n"},
  {"UsePointLookupTableOn", PyvtkApplyColors_UsePointLookupTableOn, METH_VARARGS,
   "UsePointLookupTableOn(self) -> None\nC++: virtual void UsePointLookupTableOn()\n\n"},
  {"UsePointLookupTableOff", PyvtkApplyColors_UsePointLookupTableOff, METH_VARARGS,
   "UsePointLookupTableOff(self) -> None\nC++: virtual void UsePointLookupTableOff()\n\n"},
  {"SetScalePointLookupTable", PyvtkApplyColors_SetScalePointLookupTable, METH_VARARGS,
   "SetScalePointLookupTable(self, _arg:bool) -> None\nC++: virtual void SetScalePointLookupTable(bool _arg)\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {"GetScalePointLookupTable", PyvtkApplyColors_GetScalePointLookupTable, METH_VARARGS,
   "GetScalePointLookupTable(self) -> bool\nC++: virtual bool GetScalePointLookupTable()\n\n"},
  {"ScalePointLookupTableOn", PyvtkApplyColors_ScalePointLookupTableOn, METH_VARARGS,
   "ScalePointLookupTableOn(self) -> None\nC++: virtual void ScalePointLookupTableOn()\n\n"},
  {"ScalePointLookupTableOff", PyvtkApplyColors_ScalePointLookupTableOff, METH_VARARGS,
   "ScalePointLookupTableOff(self) -> None\nC++: virtual void ScalePointLookupTableOff()\n\n"},
  {"SetDefaultPointColor", PyvtkApplyColors_SetDefaultPointColor, METH_VARARGS,
   "SetDefaultPointColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDefaultPointColor(double _arg1, double _arg2,\n     double _arg3)\nSetDefaultPointColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDefaultPointColor(const double _arg[3])\n\nThe default point color for all unannotated, unselected elements\nof the data. This is used if UsePointLookupTable is off.\n"},
  {"GetDefaultPointColor", PyvtkApplyColors_GetDefaultPointColor, METH_VARARGS,
   "GetDefaultPointColor(self) -> (float, float, float)\nC++: virtual double *GetDefaultPointColor()\n\n"},
  {"SetDefaultPointOpacity", PyvtkApplyColors_SetDefaultPointOpacity, METH_VARARGS,
   "SetDefaultPointOpacity(self, _arg:float) -> None\nC++: virtual void SetDefaultPointOpacity(double _arg)\n\nThe default point opacity for all unannotated, unselected\nelements of the data. This is used if UsePointLookupTable is off.\n"},
  {"GetDefaultPointOpacity", PyvtkApplyColors_GetDefaultPointOpacity, METH_VARARGS,
   "GetDefaultPointOpacity(self) -> float\nC++: virtual double GetDefaultPointOpacity()\n\n"},
  {"SetSelectedPointColor", PyvtkApplyColors_SetSelectedPointColor, METH_VARARGS,
   "SetSelectedPointColor(self, _arg1:float, _arg2:float, _arg3:float)\n     -> None\nC++: virtual void SetSelectedPointColor(double _arg1,\n    double _arg2, double _arg3)\nSetSelectedPointColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSelectedPointColor(const double _arg[3])\n\nThe point color for all selected elements of the data. This is\nused if the selection input is available.\n"},
  {"GetSelectedPointColor", PyvtkApplyColors_GetSelectedPointColor, METH_VARARGS,
   "GetSelectedPointColor(self) -> (float, float, float)\nC++: virtual double *GetSelectedPointColor()\n\n"},
  {"SetSelectedPointOpacity", PyvtkApplyColors_SetSelectedPointOpacity, METH_VARARGS,
   "SetSelectedPointOpacity(self, _arg:float) -> None\nC++: virtual void SetSelectedPointOpacity(double _arg)\n\nThe point opacity for all selected elements of the data. This is\nused if the selection input is available.\n"},
  {"GetSelectedPointOpacity", PyvtkApplyColors_GetSelectedPointOpacity, METH_VARARGS,
   "GetSelectedPointOpacity(self) -> float\nC++: virtual double GetSelectedPointOpacity()\n\n"},
  {"SetPointColorOutputArrayName", PyvtkApplyColors_SetPointColorOutputArrayName, METH_VARARGS,
   "SetPointColorOutputArrayName(self, _arg:str) -> None\nC++: virtual void SetPointColorOutputArrayName(const char *_arg)\n\nThe output array name for the point color RGBA array. Default is \"vtkApplyColors\ncolor\".\n"},
  {"GetPointColorOutputArrayName", PyvtkApplyColors_GetPointColorOutputArrayName, METH_VARARGS,
   "GetPointColorOutputArrayName(self) -> str\nC++: virtual char *GetPointColorOutputArrayName()\n\n"},
  {"SetCellLookupTable", PyvtkApplyColors_SetCellLookupTable, METH_VARARGS,
   "SetCellLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: virtual void SetCellLookupTable(vtkScalarsToColors *lut)\n\nThe lookup table to use for cell colors. This is only used if\ninput array 1 is set and UseCellLookupTable is on.\n"},
  {"GetCellLookupTable", PyvtkApplyColors_GetCellLookupTable, METH_VARARGS,
   "GetCellLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetCellLookupTable()\n\n"},
  {"SetUseCellLookupTable", PyvtkApplyColors_SetUseCellLookupTable, METH_VARARGS,
   "SetUseCellLookupTable(self, _arg:bool) -> None\nC++: virtual void SetUseCellLookupTable(bool _arg)\n\nIf on, uses the cell lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {"GetUseCellLookupTable", PyvtkApplyColors_GetUseCellLookupTable, METH_VARARGS,
   "GetUseCellLookupTable(self) -> bool\nC++: virtual bool GetUseCellLookupTable()\n\n"},
  {"UseCellLookupTableOn", PyvtkApplyColors_UseCellLookupTableOn, METH_VARARGS,
   "UseCellLookupTableOn(self) -> None\nC++: virtual void UseCellLookupTableOn()\n\n"},
  {"UseCellLookupTableOff", PyvtkApplyColors_UseCellLookupTableOff, METH_VARARGS,
   "UseCellLookupTableOff(self) -> None\nC++: virtual void UseCellLookupTableOff()\n\n"},
  {"SetScaleCellLookupTable", PyvtkApplyColors_SetScaleCellLookupTable, METH_VARARGS,
   "SetScaleCellLookupTable(self, _arg:bool) -> None\nC++: virtual void SetScaleCellLookupTable(bool _arg)\n\nIf on, uses the range of the data to scale the lookup table\nrange. Otherwise, uses the range defined in the lookup table.\n"},
  {"GetScaleCellLookupTable", PyvtkApplyColors_GetScaleCellLookupTable, METH_VARARGS,
   "GetScaleCellLookupTable(self) -> bool\nC++: virtual bool GetScaleCellLookupTable()\n\n"},
  {"ScaleCellLookupTableOn", PyvtkApplyColors_ScaleCellLookupTableOn, METH_VARARGS,
   "ScaleCellLookupTableOn(self) -> None\nC++: virtual void ScaleCellLookupTableOn()\n\n"},
  {"ScaleCellLookupTableOff", PyvtkApplyColors_ScaleCellLookupTableOff, METH_VARARGS,
   "ScaleCellLookupTableOff(self) -> None\nC++: virtual void ScaleCellLookupTableOff()\n\n"},
  {"SetDefaultCellColor", PyvtkApplyColors_SetDefaultCellColor, METH_VARARGS,
   "SetDefaultCellColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetDefaultCellColor(double _arg1, double _arg2,\n    double _arg3)\nSetDefaultCellColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetDefaultCellColor(const double _arg[3])\n\nThe default cell color for all unannotated, unselected elements\nof the data. This is used if UseCellLookupTable is off.\n"},
  {"GetDefaultCellColor", PyvtkApplyColors_GetDefaultCellColor, METH_VARARGS,
   "GetDefaultCellColor(self) -> (float, float, float)\nC++: virtual double *GetDefaultCellColor()\n\n"},
  {"SetDefaultCellOpacity", PyvtkApplyColors_SetDefaultCellOpacity, METH_VARARGS,
   "SetDefaultCellOpacity(self, _arg:float) -> None\nC++: virtual void SetDefaultCellOpacity(double _arg)\n\nThe default cell opacity for all unannotated, unselected elements\nof the data. This is used if UseCellLookupTable is off.\n"},
  {"GetDefaultCellOpacity", PyvtkApplyColors_GetDefaultCellOpacity, METH_VARARGS,
   "GetDefaultCellOpacity(self) -> float\nC++: virtual double GetDefaultCellOpacity()\n\n"},
  {"SetSelectedCellColor", PyvtkApplyColors_SetSelectedCellColor, METH_VARARGS,
   "SetSelectedCellColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetSelectedCellColor(double _arg1, double _arg2,\n     double _arg3)\nSetSelectedCellColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSelectedCellColor(const double _arg[3])\n\nThe cell color for all selected elements of the data. This is\nused if the selection input is available.\n"},
  {"GetSelectedCellColor", PyvtkApplyColors_GetSelectedCellColor, METH_VARARGS,
   "GetSelectedCellColor(self) -> (float, float, float)\nC++: virtual double *GetSelectedCellColor()\n\n"},
  {"SetSelectedCellOpacity", PyvtkApplyColors_SetSelectedCellOpacity, METH_VARARGS,
   "SetSelectedCellOpacity(self, _arg:float) -> None\nC++: virtual void SetSelectedCellOpacity(double _arg)\n\nThe cell opacity for all selected elements of the data. This is\nused if the selection input is available.\n"},
  {"GetSelectedCellOpacity", PyvtkApplyColors_GetSelectedCellOpacity, METH_VARARGS,
   "GetSelectedCellOpacity(self) -> float\nC++: virtual double GetSelectedCellOpacity()\n\n"},
  {"SetCellColorOutputArrayName", PyvtkApplyColors_SetCellColorOutputArrayName, METH_VARARGS,
   "SetCellColorOutputArrayName(self, _arg:str) -> None\nC++: virtual void SetCellColorOutputArrayName(const char *_arg)\n\nThe output array name for the cell color RGBA array. Default is \"vtkApplyColors\ncolor\".\n"},
  {"GetCellColorOutputArrayName", PyvtkApplyColors_GetCellColorOutputArrayName, METH_VARARGS,
   "GetCellColorOutputArrayName(self) -> str\nC++: virtual char *GetCellColorOutputArrayName()\n\n"},
  {"SetUseCurrentAnnotationColor", PyvtkApplyColors_SetUseCurrentAnnotationColor, METH_VARARGS,
   "SetUseCurrentAnnotationColor(self, _arg:bool) -> None\nC++: virtual void SetUseCurrentAnnotationColor(bool _arg)\n\nUse the annotation to color the current annotation (i.e. the\ncurrent selection). Otherwise use the selection color attributes\nof this filter.\n"},
  {"GetUseCurrentAnnotationColor", PyvtkApplyColors_GetUseCurrentAnnotationColor, METH_VARARGS,
   "GetUseCurrentAnnotationColor(self) -> bool\nC++: virtual bool GetUseCurrentAnnotationColor()\n\n"},
  {"UseCurrentAnnotationColorOn", PyvtkApplyColors_UseCurrentAnnotationColorOn, METH_VARARGS,
   "UseCurrentAnnotationColorOn(self) -> None\nC++: virtual void UseCurrentAnnotationColorOn()\n\n"},
  {"UseCurrentAnnotationColorOff", PyvtkApplyColors_UseCurrentAnnotationColorOff, METH_VARARGS,
   "UseCurrentAnnotationColorOff(self) -> None\nC++: virtual void UseCurrentAnnotationColorOff()\n\n"},
  {"GetMTime", PyvtkApplyColors_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nRetrieve the modified time for this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkApplyColors_Doc =
  "vtkApplyColors - apply colors to a data set.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkApplyColors performs a coloring of the dataset using default\n"
  "colors, lookup tables, annotations, and/or a selection. The output is\n"
  "a four-component vtkUnsignedCharArray containing RGBA tuples for each\n"
  "element in the dataset. The first input is the dataset to be colored,\n"
  "which may be a vtkTable, vtkGraph subclass, or vtkDataSet subclass.\n"
  "The API of this algorithm refers to \"points\" and \"cells\". For\n"
  "vtkGraph, the \"points\" refer to the graph vertices and \"cells\" refer\n"
  "to graph edges. For vtkTable, \"points\" refer to table rows. For\n"
  "vtkDataSet subclasses, the meaning is obvious.\n\n"
  "The second (optional) input is a vtkAnnotationLayers object, which\n"
  "stores a list of annotation layers, with each layer holding a list of\n"
  "vtkAnnotation objects. The annotation specifies a subset of data\n"
  "along with other properties, including color. For annotations with\n"
  "color properties, this algorithm will use the color to color\n"
  "elements, using a \"top one wins\" strategy.\n\n"
  "The third (optional) input is a vtkSelection object, meant for\n"
  "specifying the current selection. You can control the color of the\n"
  "selection.\n\n"
  "The algorithm takes two input arrays, specified with\n"
  "SetInputArrayToProcess(0, 0, 0,\n"
  "vtkDataObject::FIELD_ASSOCIATION_POINTS, name) and\n"
  "SetInputArrayToProcess(1, 0, 0,\n"
  "vtkDataObject::FIELD_ASSOCIATION_CELLS, name). These set the point\n"
  "and cell data arrays to use to color the data with the associated\n"
  "lookup table. For vtkGraph, vtkTable inputs, you would use\n"
  "FIELD_ASSOCIATION_VERTICES, FIELD_ASSOCIATION_EDGES, or\n"
  "FIELD_ASSOCIATION_ROWS as appropriate.\n\n"
  "To use the color array generated here, you should do the following:\n\n\n"
  " mapper->SetScalarModeToUseCellFieldData();\n"
  " mapper->SelectColorArray(\"vtkApplyColors color\");\n"
  " mapper->SetScalarVisibility(true);\n\n"
  "Colors are assigned with the following priorities:  If an item is\n"
  "part of the selection, it is colored with that color. Otherwise, if\n"
  "the item is part of an annotation, it is colored\n"
  "     with the color of the final (top) annotation in the set of\n"
  "layers. Otherwise, if the lookup table is used, it is colored using\n"
  "the\n"
  "     lookup table color for the data value of the element. Otherwise\n"
  "it will be colored with the default color. \n\n"
  "Note: The opacity of an unselected item is defined by the\n"
  "multiplication of default opacity, lookup table opacity, and\n"
  "annotation opacity, where opacity is taken as a number from 0 to 1.\n"
  "So items will never be more opaque than any of these three opacities.\n"
  "Selected items are always given the selection opacity directly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkApplyColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkApplyColors", // tp_name
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
  PyvtkApplyColors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkApplyColors_StaticNew()
{
  return vtkApplyColors::New();
}

PyObject *PyvtkApplyColors_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkApplyColors_Type, PyvtkApplyColors_Methods,
    "vtkApplyColors",
 &PyvtkApplyColors_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkApplyColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkApplyColors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkApplyColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

