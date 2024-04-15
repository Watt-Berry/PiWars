// python wrapper for vtkBinnedDecimation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBinnedDecimation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBinnedDecimation(PyObject *dict); }
extern "C" { PyObject *PyvtkBinnedDecimation_ClassNew(); }


static PyObject *
PyvtkBinnedDecimation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBinnedDecimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBinnedDecimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBinnedDecimation *tempr = vtkBinnedDecimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBinnedDecimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBinnedDecimation::NewInstance());

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
PyvtkBinnedDecimation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBinnedDecimation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBinnedDecimation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetNumberOfXDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfXDivisions(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetNumberOfXDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetNumberOfYDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfYDivisions(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetNumberOfYDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetNumberOfZDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfZDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfZDivisions(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetNumberOfZDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetNumberOfXDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXDivisions() :
      op->vtkBinnedDecimation::GetNumberOfXDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetNumberOfYDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYDivisions() :
      op->vtkBinnedDecimation::GetNumberOfYDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetNumberOfZDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfZDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfZDivisions() :
      op->vtkBinnedDecimation::GetNumberOfZDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetNumberOfDivisions(temp0);
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
PyvtkBinnedDecimation_SetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  int temp0;
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
      op->SetNumberOfDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBinnedDecimation::SetNumberOfDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBinnedDecimation_SetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkBinnedDecimation_SetNumberOfDivisions_s1(self, args);
    case 3:
      return PyvtkBinnedDecimation_SetNumberOfDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfDivisions");
  return nullptr;
}


static PyObject *
PyvtkBinnedDecimation_GetNumberOfDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetNumberOfDivisions() :
      op->vtkBinnedDecimation::GetNumberOfDivisions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkBinnedDecimation_GetNumberOfDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::GetNumberOfDivisions(temp0);
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
PyvtkBinnedDecimation_GetNumberOfDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBinnedDecimation_GetNumberOfDivisions_s1(self, args);
    case 1:
      return PyvtkBinnedDecimation_GetNumberOfDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfDivisions");
  return nullptr;
}


static PyObject *
PyvtkBinnedDecimation_SetAutoAdjustNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAdjustNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAdjustNumberOfDivisions(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetAutoAdjustNumberOfDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetAutoAdjustNumberOfDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAdjustNumberOfDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoAdjustNumberOfDivisions() :
      op->vtkBinnedDecimation::GetAutoAdjustNumberOfDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_AutoAdjustNumberOfDivisionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustNumberOfDivisionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustNumberOfDivisionsOn();
    }
    else
    {
      op->vtkBinnedDecimation::AutoAdjustNumberOfDivisionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_AutoAdjustNumberOfDivisionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAdjustNumberOfDivisionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAdjustNumberOfDivisionsOff();
    }
    else
    {
      op->vtkBinnedDecimation::AutoAdjustNumberOfDivisionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetDivisionOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

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
      op->SetDivisionOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBinnedDecimation::SetDivisionOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBinnedDecimation_SetDivisionOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

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
      op->SetDivisionOrigin(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetDivisionOrigin(temp0);
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
PyvtkBinnedDecimation_SetDivisionOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBinnedDecimation_SetDivisionOrigin_s1(self, args);
    case 1:
      return PyvtkBinnedDecimation_SetDivisionOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisionOrigin");
  return nullptr;
}


static PyObject *
PyvtkBinnedDecimation_GetDivisionOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDivisionOrigin() :
      op->vtkBinnedDecimation::GetDivisionOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetDivisionSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

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
      op->SetDivisionSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkBinnedDecimation::SetDivisionSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBinnedDecimation_SetDivisionSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

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
      op->SetDivisionSpacing(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetDivisionSpacing(temp0);
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
PyvtkBinnedDecimation_SetDivisionSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkBinnedDecimation_SetDivisionSpacing_s1(self, args);
    case 1:
      return PyvtkBinnedDecimation_SetDivisionSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisionSpacing");
  return nullptr;
}


static PyObject *
PyvtkBinnedDecimation_GetDivisionSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisionSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDivisionSpacing() :
      op->vtkBinnedDecimation::GetDivisionSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetPointGenerationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointGenerationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointGenerationMode(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetPointGenerationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetPointGenerationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGenerationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointGenerationModeMinValue() :
      op->vtkBinnedDecimation::GetPointGenerationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetPointGenerationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGenerationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointGenerationModeMaxValue() :
      op->vtkBinnedDecimation::GetPointGenerationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetPointGenerationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGenerationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointGenerationMode() :
      op->vtkBinnedDecimation::GetPointGenerationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetPointGenerationModeToUseInputPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointGenerationModeToUseInputPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointGenerationModeToUseInputPoints();
    }
    else
    {
      op->vtkBinnedDecimation::SetPointGenerationModeToUseInputPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetPointGenerationModeToBinPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointGenerationModeToBinPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointGenerationModeToBinPoints();
    }
    else
    {
      op->vtkBinnedDecimation::SetPointGenerationModeToBinPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetPointGenerationModeToBinCenters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointGenerationModeToBinCenters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointGenerationModeToBinCenters();
    }
    else
    {
      op->vtkBinnedDecimation::SetPointGenerationModeToBinCenters();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetPointGenerationModeToBinAverages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointGenerationModeToBinAverages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPointGenerationModeToBinAverages();
    }
    else
    {
      op->vtkBinnedDecimation::SetPointGenerationModeToBinAverages();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetProducePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProducePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProducePointData(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetProducePointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetProducePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProducePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProducePointData() :
      op->vtkBinnedDecimation::GetProducePointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_ProducePointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProducePointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProducePointDataOn();
    }
    else
    {
      op->vtkBinnedDecimation::ProducePointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_ProducePointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProducePointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProducePointDataOff();
    }
    else
    {
      op->vtkBinnedDecimation::ProducePointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_SetProduceCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProduceCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProduceCellData(temp0);
    }
    else
    {
      op->vtkBinnedDecimation::SetProduceCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetProduceCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProduceCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProduceCellData() :
      op->vtkBinnedDecimation::GetProduceCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_ProduceCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceCellDataOn();
    }
    else
    {
      op->vtkBinnedDecimation::ProduceCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_ProduceCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceCellDataOff();
    }
    else
    {
      op->vtkBinnedDecimation::ProduceCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBinnedDecimation_GetLargeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBinnedDecimation *op = static_cast<vtkBinnedDecimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLargeIds() :
      op->vtkBinnedDecimation::GetLargeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBinnedDecimation_Methods[] = {
  {"IsTypeOf", PyvtkBinnedDecimation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBinnedDecimation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBinnedDecimation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBinnedDecimation\nC++: static vtkBinnedDecimation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBinnedDecimation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBinnedDecimation\nC++: vtkBinnedDecimation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBinnedDecimation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBinnedDecimation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfXDivisions", PyvtkBinnedDecimation_SetNumberOfXDivisions, METH_VARARGS,
   "SetNumberOfXDivisions(self, num:int) -> None\nC++: void SetNumberOfXDivisions(int num)\n\nSet/Get the number of divisions along each axis for the spatial\nbins. The number of spatial bins is\nNumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions. The\nfilter may choose to ignore large numbers of divisions if the\ninput has few points and AutoAdjustNumberOfDivisions is enabled.\nAlso, the maximum number of divisions is controlled so that no\nmore than 2^31 bins are created. (If bin adjustment due to the\nlimit on the number of bins is necessary, then a proportional\nscaling of the divisions in the x-y-z directions is used.) This\nAPI has been adopted to be consistent with vtkQuadricClustering.\n"},
  {"SetNumberOfYDivisions", PyvtkBinnedDecimation_SetNumberOfYDivisions, METH_VARARGS,
   "SetNumberOfYDivisions(self, num:int) -> None\nC++: void SetNumberOfYDivisions(int num)\n\n"},
  {"SetNumberOfZDivisions", PyvtkBinnedDecimation_SetNumberOfZDivisions, METH_VARARGS,
   "SetNumberOfZDivisions(self, num:int) -> None\nC++: void SetNumberOfZDivisions(int num)\n\n"},
  {"GetNumberOfXDivisions", PyvtkBinnedDecimation_GetNumberOfXDivisions, METH_VARARGS,
   "GetNumberOfXDivisions(self) -> int\nC++: virtual int GetNumberOfXDivisions()\n\n"},
  {"GetNumberOfYDivisions", PyvtkBinnedDecimation_GetNumberOfYDivisions, METH_VARARGS,
   "GetNumberOfYDivisions(self) -> int\nC++: virtual int GetNumberOfYDivisions()\n\n"},
  {"GetNumberOfZDivisions", PyvtkBinnedDecimation_GetNumberOfZDivisions, METH_VARARGS,
   "GetNumberOfZDivisions(self) -> int\nC++: virtual int GetNumberOfZDivisions()\n\n"},
  {"SetNumberOfDivisions", PyvtkBinnedDecimation_SetNumberOfDivisions, METH_VARARGS,
   "SetNumberOfDivisions(self, div:[int, int, int]) -> None\nC++: void SetNumberOfDivisions(int div[3])\nSetNumberOfDivisions(self, div0:int, div1:int, div2:int) -> None\nC++: void SetNumberOfDivisions(int div0, int div1, int div2)\n\n"},
  {"GetNumberOfDivisions", PyvtkBinnedDecimation_GetNumberOfDivisions, METH_VARARGS,
   "GetNumberOfDivisions(self) -> (int, int, int)\nC++: int *GetNumberOfDivisions()\nGetNumberOfDivisions(self, div:[int, int, int]) -> None\nC++: void GetNumberOfDivisions(int div[3])\n\n"},
  {"SetAutoAdjustNumberOfDivisions", PyvtkBinnedDecimation_SetAutoAdjustNumberOfDivisions, METH_VARARGS,
   "SetAutoAdjustNumberOfDivisions(self, _arg:bool) -> None\nC++: virtual void SetAutoAdjustNumberOfDivisions(bool _arg)\n\nEnable automatic adjustment of number of divisions. If disabled,\nthe number of divisions specified by the user is always used (as\nlong as it is valid). The default is On.\n"},
  {"GetAutoAdjustNumberOfDivisions", PyvtkBinnedDecimation_GetAutoAdjustNumberOfDivisions, METH_VARARGS,
   "GetAutoAdjustNumberOfDivisions(self) -> bool\nC++: virtual bool GetAutoAdjustNumberOfDivisions()\n\n"},
  {"AutoAdjustNumberOfDivisionsOn", PyvtkBinnedDecimation_AutoAdjustNumberOfDivisionsOn, METH_VARARGS,
   "AutoAdjustNumberOfDivisionsOn(self) -> None\nC++: virtual void AutoAdjustNumberOfDivisionsOn()\n\n"},
  {"AutoAdjustNumberOfDivisionsOff", PyvtkBinnedDecimation_AutoAdjustNumberOfDivisionsOff, METH_VARARGS,
   "AutoAdjustNumberOfDivisionsOff(self) -> None\nC++: virtual void AutoAdjustNumberOfDivisionsOff()\n\n"},
  {"SetDivisionOrigin", PyvtkBinnedDecimation_SetDivisionOrigin, METH_VARARGS,
   "SetDivisionOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetDivisionOrigin(double x, double y, double z)\nSetDivisionOrigin(self, o:[float, float, float]) -> None\nC++: void SetDivisionOrigin(double o[3])\n\nThis is an alternative way to set up the bins.  If you are trying\nto match boundaries between pieces, then you should use these\nmethods rather than SetNumberOfDivisions(). To use these methods,\nspecify the origin and spacing of the spatial binning.\n"},
  {"GetDivisionOrigin", PyvtkBinnedDecimation_GetDivisionOrigin, METH_VARARGS,
   "GetDivisionOrigin(self) -> (float, float, float)\nC++: virtual double *GetDivisionOrigin()\n\n"},
  {"SetDivisionSpacing", PyvtkBinnedDecimation_SetDivisionSpacing, METH_VARARGS,
   "SetDivisionSpacing(self, x:float, y:float, z:float) -> None\nC++: void SetDivisionSpacing(double x, double y, double z)\nSetDivisionSpacing(self, s:[float, float, float]) -> None\nC++: void SetDivisionSpacing(double s[3])\n\n"},
  {"GetDivisionSpacing", PyvtkBinnedDecimation_GetDivisionSpacing, METH_VARARGS,
   "GetDivisionSpacing(self) -> (float, float, float)\nC++: virtual double *GetDivisionSpacing()\n\n"},
  {"SetPointGenerationMode", PyvtkBinnedDecimation_SetPointGenerationMode, METH_VARARGS,
   "SetPointGenerationMode(self, _arg:int) -> None\nC++: virtual void SetPointGenerationMode(int _arg)\n\n"},
  {"GetPointGenerationModeMinValue", PyvtkBinnedDecimation_GetPointGenerationModeMinValue, METH_VARARGS,
   "GetPointGenerationModeMinValue(self) -> int\nC++: virtual int GetPointGenerationModeMinValue()\n\n"},
  {"GetPointGenerationModeMaxValue", PyvtkBinnedDecimation_GetPointGenerationModeMaxValue, METH_VARARGS,
   "GetPointGenerationModeMaxValue(self) -> int\nC++: virtual int GetPointGenerationModeMaxValue()\n\n"},
  {"GetPointGenerationMode", PyvtkBinnedDecimation_GetPointGenerationMode, METH_VARARGS,
   "GetPointGenerationMode(self) -> int\nC++: virtual int GetPointGenerationMode()\n\n"},
  {"SetPointGenerationModeToUseInputPoints", PyvtkBinnedDecimation_SetPointGenerationModeToUseInputPoints, METH_VARARGS,
   "SetPointGenerationModeToUseInputPoints(self) -> None\nC++: void SetPointGenerationModeToUseInputPoints()\n\n"},
  {"SetPointGenerationModeToBinPoints", PyvtkBinnedDecimation_SetPointGenerationModeToBinPoints, METH_VARARGS,
   "SetPointGenerationModeToBinPoints(self) -> None\nC++: void SetPointGenerationModeToBinPoints()\n\n"},
  {"SetPointGenerationModeToBinCenters", PyvtkBinnedDecimation_SetPointGenerationModeToBinCenters, METH_VARARGS,
   "SetPointGenerationModeToBinCenters(self) -> None\nC++: void SetPointGenerationModeToBinCenters()\n\n"},
  {"SetPointGenerationModeToBinAverages", PyvtkBinnedDecimation_SetPointGenerationModeToBinAverages, METH_VARARGS,
   "SetPointGenerationModeToBinAverages(self) -> None\nC++: void SetPointGenerationModeToBinAverages()\n\n"},
  {"SetProducePointData", PyvtkBinnedDecimation_SetProducePointData, METH_VARARGS,
   "SetProducePointData(self, _arg:bool) -> None\nC++: virtual void SetProducePointData(bool _arg)\n\nThis flag directs the filter to produce output point data from\nthe input point data (on by default). If the ProducePointData is\nset to INPUT_POINTS, point data is simply passed from input to\noutput (since the points don't change). If the point generation\nmode is set to BIN_AVERAGES, then the average of all point data\nvalues within a bin are associated with the point generated in\nthe bin. If the point generation mode is either BIN_POINTS or\nBIN_CENTERS, then the point data values from one of the points\nfalling into the bin is used.\n"},
  {"GetProducePointData", PyvtkBinnedDecimation_GetProducePointData, METH_VARARGS,
   "GetProducePointData(self) -> bool\nC++: virtual bool GetProducePointData()\n\n"},
  {"ProducePointDataOn", PyvtkBinnedDecimation_ProducePointDataOn, METH_VARARGS,
   "ProducePointDataOn(self) -> None\nC++: virtual void ProducePointDataOn()\n\n"},
  {"ProducePointDataOff", PyvtkBinnedDecimation_ProducePointDataOff, METH_VARARGS,
   "ProducePointDataOff(self) -> None\nC++: virtual void ProducePointDataOff()\n\n"},
  {"SetProduceCellData", PyvtkBinnedDecimation_SetProduceCellData, METH_VARARGS,
   "SetProduceCellData(self, _arg:bool) -> None\nC++: virtual void SetProduceCellData(bool _arg)\n\nThis flag directs the filter to copy cell data from input to\noutput. This flag is off by default.\n"},
  {"GetProduceCellData", PyvtkBinnedDecimation_GetProduceCellData, METH_VARARGS,
   "GetProduceCellData(self) -> bool\nC++: virtual bool GetProduceCellData()\n\n"},
  {"ProduceCellDataOn", PyvtkBinnedDecimation_ProduceCellDataOn, METH_VARARGS,
   "ProduceCellDataOn(self) -> None\nC++: virtual void ProduceCellDataOn()\n\n"},
  {"ProduceCellDataOff", PyvtkBinnedDecimation_ProduceCellDataOff, METH_VARARGS,
   "ProduceCellDataOff(self) -> None\nC++: virtual void ProduceCellDataOff()\n\n"},
  {"GetLargeIds", PyvtkBinnedDecimation_GetLargeIds, METH_VARARGS,
   "GetLargeIds(self) -> bool\nC++: bool GetLargeIds()\n\nReturn a flag indicating whether large ids were used during\nexecution. The value of this flag is only valid after filter\nexecution. The filter may use a smaller id type unless it must\nuse vtkIdType to represent points and cell ids.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBinnedDecimation_Doc =
  "vtkBinnedDecimation - reduce the number of triangles in a vtkPolyData\nmesh\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkBinnedDecimation is a filter to reduce the number of triangles in\n"
  "a triangle mesh represented by vtkPolyData. It is similar to\n"
  "vtkQuadricClustering in concept, although it is performance\n"
  "accelerated: it does not use quadric error metrics to position points\n"
  "in the bins, plus it is threaded. (See vtkQuadricClustering for more\n"
  "information.) It also takes some short cuts in the interest of speed:\n"
  "it limits the binning resolution to no more than 2^31 bins; and it\n"
  "can (optionally) reuse the input points in the output (to save memory\n"
  "and computational costs).\n\n"
  "A high-level overview of the algorithm is as follows. Points are\n"
  "binned into a regular grid subdivided in the x-y-z directions. The\n"
  "idea is to combine all the points within each bin into a single point\n"
  "which is then used by the output triangles. Four options are\n"
  "available to generate the output points. If the input points are to\n"
  "be reused as the output points, then all points in the same bin\n"
  "simply adopt the coordinates of one of the selected points in the bin\n"
  "(and thus all points in the bin take on the same output point id).\n"
  "Alternatively, if new output points are to be generated, then either\n"
  "one point is selected; the centers of occupied bins can be used as\n"
  "the output point coordinates; or an average position of all points\n"
  "falling into the bin can be used to generate the bin point. Finally,\n"
  "triangles are inserted into the output: triangles whose three, binned\n"
  "points lie in separate bins are sent to the output, while all others\n"
  "are discarded (i.e., triangles with two or more points in the same\n"
  "bin are not sent to the output).\n\n"
  "To use this filter, specify the divisions defining the spatial\n"
  "subdivision in the x, y, and z directions. Of course you must also\n"
  "specify an input vtkPolyData / filter connection. Higher division\n"
  "levels generally produce results closer to the original mesh. Note\n"
  "that for performance reasons (i.e., related to memory), the maximum\n"
  "divisions in the x-y-z directions is limited in such a way (i.e.,\n"
  "proportional scaling of divisions is used) so as to ensure that no\n"
  "more than 2^31 bins are used. Higher divisions have modest impact on\n"
  "the overall performance of the algorithm, although the resolution of\n"
  "the output vtkPolyData is affected significantly (i.e., many more\n"
  "triangles may be generated).\n\n"
  "@warning\n"
  "This filter can drastically affect mesh topology, i.e., topology is\n"
  "not preserved.\n\n"
  "@warning\n"
  "This filter and vtkQuadricClustering produce similar results, with\n"
  "vtkQuadricClustering theoretically producing better results. In\n"
  "practice however, vtkBinnedDecimation produces results that are\n"
  "visually close to vtkQuadricClustering at speeds approaching 10-100x\n"
  "faster (depending on the bin divisions, and how the output points are\n"
  "generated), and the algorithm requires much less memory. Note that\n"
  "the API of this filter is a subset of vtkQuadricClustering and can\n"
  "often be used interchangeably with vtkQuadricClustering.\n\n"
  "@warning\n"
  "Algorithm 4) BIN_CENTERS uses a very different implementation\n"
  "strategy requiring a sort of all points. It scales better as the\n"
  "number of bins increases.\n\n"
  "@warning\n"
  "For certain types of geometry (e.g., a mostly 2D plane with jitter in\n"
  "the normal direction), this decimator can perform badly. In this\n"
  "situation, set the number of bins in the normal direction to one.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential execution type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkQuadricClustering vtkDecimatePro vtkDecimate vtkQuadricLODActor\n"
  "vtkTriangleFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBinnedDecimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkBinnedDecimation", // tp_name
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
  PyvtkBinnedDecimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBinnedDecimation_StaticNew()
{
  return vtkBinnedDecimation::New();
}

PyObject *PyvtkBinnedDecimation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBinnedDecimation_Type, PyvtkBinnedDecimation_Methods,
    "vtkBinnedDecimation",
 &PyvtkBinnedDecimation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "INPUT_POINTS", vtkBinnedDecimation::INPUT_POINTS },
        { "BIN_POINTS", vtkBinnedDecimation::BIN_POINTS },
        { "BIN_CENTERS", vtkBinnedDecimation::BIN_CENTERS },
        { "BIN_AVERAGES", vtkBinnedDecimation::BIN_AVERAGES },
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

void PyVTKAddFile_vtkBinnedDecimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBinnedDecimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBinnedDecimation", o) != 0)
  {
    Py_DECREF(o);
  }

}

