// python wrapper for vtkContourLoopExtraction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContourLoopExtraction.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContourLoopExtraction(PyObject *dict); }
extern "C" { PyObject *PyvtkContourLoopExtraction_ClassNew(); }


static PyObject *
PyvtkContourLoopExtraction_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContourLoopExtraction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContourLoopExtraction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContourLoopExtraction *tempr = vtkContourLoopExtraction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContourLoopExtraction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContourLoopExtraction::NewInstance());

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
PyvtkContourLoopExtraction_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContourLoopExtraction::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContourLoopExtraction::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetLoopClosure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopClosure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLoopClosure(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetLoopClosure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetLoopClosureMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopClosureMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoopClosureMinValue() :
      op->vtkContourLoopExtraction::GetLoopClosureMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetLoopClosureMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopClosureMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoopClosureMaxValue() :
      op->vtkContourLoopExtraction::GetLoopClosureMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetLoopClosure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopClosure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLoopClosure() :
      op->vtkContourLoopExtraction::GetLoopClosure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetLoopClosureToOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopClosureToOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLoopClosureToOff();
    }
    else
    {
      op->vtkContourLoopExtraction::SetLoopClosureToOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetLoopClosureToBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopClosureToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLoopClosureToBoundary();
    }
    else
    {
      op->vtkContourLoopExtraction::SetLoopClosureToBoundary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetLoopClosureToAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLoopClosureToAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetLoopClosureToAll();
    }
    else
    {
      op->vtkContourLoopExtraction::SetLoopClosureToAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetLoopClosureAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLoopClosureAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLoopClosureAsString() :
      op->vtkContourLoopExtraction::GetLoopClosureAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetScalarThresholding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarThresholding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarThresholding(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetScalarThresholding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetScalarThresholding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarThresholding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarThresholding() :
      op->vtkContourLoopExtraction::GetScalarThresholding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_ScalarThresholdingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarThresholdingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarThresholdingOn();
    }
    else
    {
      op->vtkContourLoopExtraction::ScalarThresholdingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_ScalarThresholdingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarThresholdingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarThresholdingOff();
    }
    else
    {
      op->vtkContourLoopExtraction::ScalarThresholdingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

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
      op->vtkContourLoopExtraction::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourLoopExtraction_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

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
      op->vtkContourLoopExtraction::SetScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourLoopExtraction_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContourLoopExtraction_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkContourLoopExtraction_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkContourLoopExtraction_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkContourLoopExtraction::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkContourLoopExtraction::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourLoopExtraction_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContourLoopExtraction_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkContourLoopExtraction_SetNormal_s1(self, args);
    case 1:
      return PyvtkContourLoopExtraction_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkContourLoopExtraction_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkContourLoopExtraction::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetOutputMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputMode(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetOutputMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetOutputModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputModeMinValue() :
      op->vtkContourLoopExtraction::GetOutputModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetOutputModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputModeMaxValue() :
      op->vtkContourLoopExtraction::GetOutputModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetOutputMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputMode() :
      op->vtkContourLoopExtraction::GetOutputMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetOutputModeToPolygons(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputModeToPolygons");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputModeToPolygons();
    }
    else
    {
      op->vtkContourLoopExtraction::SetOutputModeToPolygons();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetOutputModeToPolylines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputModeToPolylines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputModeToPolylines();
    }
    else
    {
      op->vtkContourLoopExtraction::SetOutputModeToPolylines();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetOutputModeToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputModeToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputModeToBoth();
    }
    else
    {
      op->vtkContourLoopExtraction::SetOutputModeToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetOutputModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputModeAsString() :
      op->vtkContourLoopExtraction::GetOutputModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_SetCleanPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCleanPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCleanPoints(temp0);
    }
    else
    {
      op->vtkContourLoopExtraction::SetCleanPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_GetCleanPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCleanPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCleanPoints() :
      op->vtkContourLoopExtraction::GetCleanPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_CleanPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanPointsOn();
    }
    else
    {
      op->vtkContourLoopExtraction::CleanPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContourLoopExtraction_CleanPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CleanPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContourLoopExtraction *op = static_cast<vtkContourLoopExtraction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CleanPointsOff();
    }
    else
    {
      op->vtkContourLoopExtraction::CleanPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContourLoopExtraction_Methods[] = {
  {"IsTypeOf", PyvtkContourLoopExtraction_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContourLoopExtraction_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContourLoopExtraction_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContourLoopExtraction\nC++: static vtkContourLoopExtraction *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContourLoopExtraction_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContourLoopExtraction\nC++: vtkContourLoopExtraction *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContourLoopExtraction_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContourLoopExtraction_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLoopClosure", PyvtkContourLoopExtraction_SetLoopClosure, METH_VARARGS,
   "SetLoopClosure(self, _arg:int) -> None\nC++: virtual void SetLoopClosure(int _arg)\n\nSpecify whether to close loops or not. All non-closed loops can\nbe rejected; boundary loops (end points lie on vertical or\nhorizontal porions of the boundary) can be closed (default); or\nall loops can be forced closed by connecting first and last\npoints.\n"},
  {"GetLoopClosureMinValue", PyvtkContourLoopExtraction_GetLoopClosureMinValue, METH_VARARGS,
   "GetLoopClosureMinValue(self) -> int\nC++: virtual int GetLoopClosureMinValue()\n\n"},
  {"GetLoopClosureMaxValue", PyvtkContourLoopExtraction_GetLoopClosureMaxValue, METH_VARARGS,
   "GetLoopClosureMaxValue(self) -> int\nC++: virtual int GetLoopClosureMaxValue()\n\n"},
  {"GetLoopClosure", PyvtkContourLoopExtraction_GetLoopClosure, METH_VARARGS,
   "GetLoopClosure(self) -> int\nC++: virtual int GetLoopClosure()\n\n"},
  {"SetLoopClosureToOff", PyvtkContourLoopExtraction_SetLoopClosureToOff, METH_VARARGS,
   "SetLoopClosureToOff(self) -> None\nC++: void SetLoopClosureToOff()\n\n"},
  {"SetLoopClosureToBoundary", PyvtkContourLoopExtraction_SetLoopClosureToBoundary, METH_VARARGS,
   "SetLoopClosureToBoundary(self) -> None\nC++: void SetLoopClosureToBoundary()\n\n"},
  {"SetLoopClosureToAll", PyvtkContourLoopExtraction_SetLoopClosureToAll, METH_VARARGS,
   "SetLoopClosureToAll(self) -> None\nC++: void SetLoopClosureToAll()\n\n"},
  {"GetLoopClosureAsString", PyvtkContourLoopExtraction_GetLoopClosureAsString, METH_VARARGS,
   "GetLoopClosureAsString(self) -> str\nC++: const char *GetLoopClosureAsString()\n\n"},
  {"SetScalarThresholding", PyvtkContourLoopExtraction_SetScalarThresholding, METH_VARARGS,
   "SetScalarThresholding(self, _arg:bool) -> None\nC++: virtual void SetScalarThresholding(bool _arg)\n\nTurn on/off the extraction of loops based on scalar thresholding.\n Loops with scalar values in a specified range can be extracted.\nIf no scalars are available from the input than this data member\nis ignored.\n"},
  {"GetScalarThresholding", PyvtkContourLoopExtraction_GetScalarThresholding, METH_VARARGS,
   "GetScalarThresholding(self) -> bool\nC++: virtual bool GetScalarThresholding()\n\n"},
  {"ScalarThresholdingOn", PyvtkContourLoopExtraction_ScalarThresholdingOn, METH_VARARGS,
   "ScalarThresholdingOn(self) -> None\nC++: virtual void ScalarThresholdingOn()\n\n"},
  {"ScalarThresholdingOff", PyvtkContourLoopExtraction_ScalarThresholdingOff, METH_VARARGS,
   "ScalarThresholdingOff(self) -> None\nC++: virtual void ScalarThresholdingOff()\n\n"},
  {"SetScalarRange", PyvtkContourLoopExtraction_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetScalarRange(double _arg1, double _arg2)\nSetScalarRange(self, _arg:(float, float)) -> None\nC++: void SetScalarRange(const double _arg[2])\n\nSet the scalar range to use to extract loop based on scalar\nthresholding.  If any scalar, point data, in the loop falls into\nthe scalar range given, then the loop is extracted.\n"},
  {"GetScalarRange", PyvtkContourLoopExtraction_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"SetNormal", PyvtkContourLoopExtraction_SetNormal, METH_VARARGS,
   "SetNormal(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetNormal(double _arg1, double _arg2,\n    double _arg3)\nSetNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetNormal(const double _arg[3])\n\nSet the normal vector used to orient the algorithm (controlling\nturns around the loop). By default the normal points in the +z\ndirection.\n"},
  {"GetNormal", PyvtkContourLoopExtraction_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {"SetOutputMode", PyvtkContourLoopExtraction_SetOutputMode, METH_VARARGS,
   "SetOutputMode(self, _arg:int) -> None\nC++: virtual void SetOutputMode(int _arg)\n\nSpecify the form of the output. Polygons can be output (default);\npolylines can be output (the first and last point is repeated);\nor both can be output.\n"},
  {"GetOutputModeMinValue", PyvtkContourLoopExtraction_GetOutputModeMinValue, METH_VARARGS,
   "GetOutputModeMinValue(self) -> int\nC++: virtual int GetOutputModeMinValue()\n\n"},
  {"GetOutputModeMaxValue", PyvtkContourLoopExtraction_GetOutputModeMaxValue, METH_VARARGS,
   "GetOutputModeMaxValue(self) -> int\nC++: virtual int GetOutputModeMaxValue()\n\n"},
  {"GetOutputMode", PyvtkContourLoopExtraction_GetOutputMode, METH_VARARGS,
   "GetOutputMode(self) -> int\nC++: virtual int GetOutputMode()\n\n"},
  {"SetOutputModeToPolygons", PyvtkContourLoopExtraction_SetOutputModeToPolygons, METH_VARARGS,
   "SetOutputModeToPolygons(self) -> None\nC++: void SetOutputModeToPolygons()\n\n"},
  {"SetOutputModeToPolylines", PyvtkContourLoopExtraction_SetOutputModeToPolylines, METH_VARARGS,
   "SetOutputModeToPolylines(self) -> None\nC++: void SetOutputModeToPolylines()\n\n"},
  {"SetOutputModeToBoth", PyvtkContourLoopExtraction_SetOutputModeToBoth, METH_VARARGS,
   "SetOutputModeToBoth(self) -> None\nC++: void SetOutputModeToBoth()\n\n"},
  {"GetOutputModeAsString", PyvtkContourLoopExtraction_GetOutputModeAsString, METH_VARARGS,
   "GetOutputModeAsString(self) -> str\nC++: const char *GetOutputModeAsString()\n\n"},
  {"SetCleanPoints", PyvtkContourLoopExtraction_SetCleanPoints, METH_VARARGS,
   "SetCleanPoints(self, _arg:bool) -> None\nC++: virtual void SetCleanPoints(bool _arg)\n\nIndicate whether to clean the output points. Cleaning means\ndiscarding any points that are unused by the output polylines or\npolygons. This results in a potential renumbering of the points.\nBy default, cleaning points is on. (This feature is useful\nbecause some filters output points in addition to those used to\nrepresent output lines and polylines, and this method is faster\nthan using vtkCleanPolyData/vtkStaticCleanPolyData).\n"},
  {"GetCleanPoints", PyvtkContourLoopExtraction_GetCleanPoints, METH_VARARGS,
   "GetCleanPoints(self) -> bool\nC++: virtual bool GetCleanPoints()\n\n"},
  {"CleanPointsOn", PyvtkContourLoopExtraction_CleanPointsOn, METH_VARARGS,
   "CleanPointsOn(self) -> None\nC++: virtual void CleanPointsOn()\n\n"},
  {"CleanPointsOff", PyvtkContourLoopExtraction_CleanPointsOff, METH_VARARGS,
   "CleanPointsOff(self) -> None\nC++: virtual void CleanPointsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContourLoopExtraction_Doc =
  "vtkContourLoopExtraction - extract closed loops (polygons) from lines\nand polylines\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter takes an input consisting of lines and polylines and\n"
  "constructs polygons (i.e., closed loops) from them. It combines some\n"
  "of the capability of connectivity filters and the line stripper to\n"
  "produce manifold loops that are suitable for geometric operations.\n"
  "For example, the vtkCookieCutter works well with this filter.\n\n"
  "Note that the input structure for this filter consists of points and\n"
  "line or polyline cells. All other topological types (verts, polygons,\n"
  "triangle strips) are ignored. The output of this filter is by default\n"
  "manifold polygons. Note however, that optionally polyline loops may\n"
  "also be output if requested.\n\n"
  "@warning\n"
  "Although the loops are constructed in 3-space, a normal vector must\n"
  "be supplied to help choose a turn direction when multiple choices are\n"
  "possible. By default the normal vector is n={0,0,1} but may be user\n"
  "specified. Note also that some filters require that the loops are\n"
  "located in the z=constant or z=0 plane. Hence a transform filter of\n"
  "some sort may be necesssary to project the loops to a plane.\n\n"
  "@warning\n"
  "Note that lines that do not close in on themselves can be optionally\n"
  "forced closed. This occurs when for example, 2D contours end and\n"
  "begin at the boundaries of data. By forcing closure, the last point\n"
  "is joined to the first point (with boundary points possibly added).\n"
  "Note that there are different closure modes: 1) do not close (and\n"
  "hence reject the polygon);\n"
  "2) close along the dataset boundaries (i.e., the bounding box of a\n"
  "   dataset used to generate the contour lines); and 3) close all open\n"
  "loops by connectiong the first and last point. If Option #2 is\n"
  "   chosen, only loops that start and end on either a horizontal or\n"
  "   vertical boundary are closed.\n\n"
  "@warning\n"
  "Scalar thresholding can be enabled. If enabled, then only those loops\n"
  "with\n"
  "*any\" scalar point data within the thresholded range are extracted.\n\n"
  "@warning\n"
  "Any detached lines forming degenerate loops of defined by two points\n"
  "or less are discarded. Non-manifold junctions are broken into\n"
  "separate, independent loops.\n\n"
  "@warning\n"
  "Boundary closure only works if the end points are both on a vertical\n"
  "boundary or horizontal boundary. Otherwise new points would have to\n"
  "be added which this filter does not (currently) do.\n\n"
  "@sa\n"
  "vtkCookieCutter vtkFlyingEdges2D vtkMarchingSquares vtkFeatureEdges\n"
  "vtkConnectivityFilter vtkPolyDataConnectivityFilter\n"
  "vtkDiscreteFlyingEdges2D vtkStripper vtkImprintFilter\n"
  "vtkCleanPolyData vtkStaticCleanPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContourLoopExtraction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkContourLoopExtraction", // tp_name
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
  PyvtkContourLoopExtraction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContourLoopExtraction_StaticNew()
{
  return vtkContourLoopExtraction::New();
}

PyObject *PyvtkContourLoopExtraction_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContourLoopExtraction_Type, PyvtkContourLoopExtraction_Methods,
    "vtkContourLoopExtraction",
 &PyvtkContourLoopExtraction_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContourLoopExtraction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContourLoopExtraction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContourLoopExtraction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_LOOP_CLOSURE_OFF", 0 },
        { "VTK_LOOP_CLOSURE_BOUNDARY", 1 },
        { "VTK_LOOP_CLOSURE_ALL", 2 },
        { "VTK_OUTPUT_POLYGONS", 0 },
        { "VTK_OUTPUT_POLYLINES", 1 },
        { "VTK_OUTPUT_BOTH", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

