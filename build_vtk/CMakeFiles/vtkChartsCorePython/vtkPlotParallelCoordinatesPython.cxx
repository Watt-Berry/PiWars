// python wrapper for vtkPlotParallelCoordinates
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPlotParallelCoordinates.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotParallelCoordinates(PyObject *dict); }
extern "C" { PyObject *PyvtkPlotParallelCoordinates_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static PyObject *
PyvtkPlotParallelCoordinates_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotParallelCoordinates::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotParallelCoordinates::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotParallelCoordinates *tempr = vtkPlotParallelCoordinates::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotParallelCoordinates *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotParallelCoordinates::NewInstance());

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
PyvtkPlotParallelCoordinates_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlotParallelCoordinates::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlotParallelCoordinates::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotParallelCoordinates::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  vtkContext2D *temp0 = nullptr;
  vtkRectf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintLegend(temp0, *temp1, temp2) :
      op->vtkPlotParallelCoordinates::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
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
      op->vtkPlotParallelCoordinates::GetBounds(temp0);
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
PyvtkPlotParallelCoordinates_SetSelectionRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  int temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSelectionRange(temp0, temp1, temp2) :
      op->vtkPlotParallelCoordinates::SetSelectionRange(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPlotParallelCoordinates_SetSelectionRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  int temp0;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSelectionRange(temp0, temp1) :
      op->vtkPlotParallelCoordinates::SetSelectionRange(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPlotParallelCoordinates_SetSelectionRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPlotParallelCoordinates_SetSelectionRange_s1(self, args);
    case 2:
      return PyvtkPlotParallelCoordinates_SetSelectionRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionRange");
  return nullptr;
}


static PyObject *
PyvtkPlotParallelCoordinates_ResetSelectionRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetSelectionRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ResetSelectionRange() :
      op->vtkPlotParallelCoordinates::ResetSelectionRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SetInputData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkPlotParallelCoordinates::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotParallelCoordinates_SetInputData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  vtkTable *temp0 = nullptr;
  vtkStdString temp1;
  vtkStdString temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPlotParallelCoordinates::SetInputData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotParallelCoordinates_SetInputData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPlotParallelCoordinates_SetInputData_s1(self, args);
    case 3:
      return PyvtkPlotParallelCoordinates_SetInputData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputData");
  return nullptr;
}


static PyObject *
PyvtkPlotParallelCoordinates_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPlotParallelCoordinates::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLookupTable();
    }
    else
    {
      op->vtkPlotParallelCoordinates::CreateDefaultLookupTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkPlotParallelCoordinates::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkPlotParallelCoordinates::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkPlotParallelCoordinates::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  long long temp0;
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
      op->vtkPlotParallelCoordinates::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotParallelCoordinates_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  vtkStdString temp0;
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
      op->vtkPlotParallelCoordinates::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotParallelCoordinates_SelectColorArray_Methods[] = {
  {"SelectColorArray", PyvtkPlotParallelCoordinates_SelectColorArray_s1, METH_VARARGS,
   "@k"},
  {"SelectColorArray", PyvtkPlotParallelCoordinates_SelectColorArray_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlotParallelCoordinates_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotParallelCoordinates_SelectColorArray_Methods;
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
PyvtkPlotParallelCoordinates_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

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
      op->vtkPlotParallelCoordinates::SetColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SetColorModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDefault();
    }
    else
    {
      op->vtkPlotParallelCoordinates::SetColorModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SetColorModeToMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToMapScalars();
    }
    else
    {
      op->vtkPlotParallelCoordinates::SetColorModeToMapScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_SetColorModeToDirectScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToDirectScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetColorModeToDirectScalars();
    }
    else
    {
      op->vtkPlotParallelCoordinates::SetColorModeToDirectScalars();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorMode() :
      op->vtkPlotParallelCoordinates::GetColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorArrayName() :
      op->vtkPlotParallelCoordinates::GetColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotParallelCoordinates_UpdateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotParallelCoordinates *op = static_cast<vtkPlotParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateCache() :
      op->vtkPlotParallelCoordinates::UpdateCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotParallelCoordinates_Methods[] = {
  {"IsTypeOf", PyvtkPlotParallelCoordinates_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotParallelCoordinates_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotParallelCoordinates_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlotParallelCoordinates\nC++: static vtkPlotParallelCoordinates *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotParallelCoordinates_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlotParallelCoordinates\nC++: vtkPlotParallelCoordinates *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlotParallelCoordinates_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlotParallelCoordinates_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkPlotParallelCoordinates_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {"PaintLegend", PyvtkPlotParallelCoordinates_PaintLegend, METH_VARARGS,
   "PaintLegend(self, painter:vtkContext2D, rect:vtkRectf,\n    legendIndex:int) -> bool\nC++: bool PaintLegend(vtkContext2D *painter, const vtkRectf &rect,\n     int legendIndex) override;\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {"GetBounds", PyvtkPlotParallelCoordinates_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4]) override;\n\nGet the bounds for this mapper as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"SetSelectionRange", PyvtkPlotParallelCoordinates_SetSelectionRange, METH_VARARGS,
   "SetSelectionRange(self, axis:int, low:float, high:float) -> bool\nC++: bool SetSelectionRange(int axis, float low, float high)\nSetSelectionRange(self, axis:int, axisSelection:[float, ...])\n    -> bool\nC++: bool SetSelectionRange(int axis,\n    std::vector<float> axisSelection)\n\nSet the selection criteria on the given axis in normalized space\n(0.0 - 1.0) for a specific range.\n"},
  {"ResetSelectionRange", PyvtkPlotParallelCoordinates_ResetSelectionRange, METH_VARARGS,
   "ResetSelectionRange(self) -> bool\nC++: bool ResetSelectionRange()\n\nReset the selection criteria for the chart.\n"},
  {"SetInputData", PyvtkPlotParallelCoordinates_SetInputData, METH_VARARGS,
   "SetInputData(self, table:vtkTable) -> None\nC++: void SetInputData(vtkTable *table) override;\nSetInputData(self, table:vtkTable, __b:str, __c:str) -> None\nC++: void SetInputData(vtkTable *table, const vtkStdString &,\n    const vtkStdString &) override;\n\nThis is a convenience function to set the input table.\n"},
  {"SetLookupTable", PyvtkPlotParallelCoordinates_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {"GetLookupTable", PyvtkPlotParallelCoordinates_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\n"},
  {"CreateDefaultLookupTable", PyvtkPlotParallelCoordinates_CreateDefaultLookupTable, METH_VARARGS,
   "CreateDefaultLookupTable(self) -> None\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {"SetScalarVisibility", PyvtkPlotParallelCoordinates_SetScalarVisibility, METH_VARARGS,
   "SetScalarVisibility(self, _arg:int) -> None\nC++: virtual void SetScalarVisibility(vtkTypeBool _arg)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"GetScalarVisibility", PyvtkPlotParallelCoordinates_GetScalarVisibility, METH_VARARGS,
   "GetScalarVisibility(self) -> int\nC++: virtual vtkTypeBool GetScalarVisibility()\n\n"},
  {"ScalarVisibilityOn", PyvtkPlotParallelCoordinates_ScalarVisibilityOn, METH_VARARGS,
   "ScalarVisibilityOn(self) -> None\nC++: virtual void ScalarVisibilityOn()\n\n"},
  {"ScalarVisibilityOff", PyvtkPlotParallelCoordinates_ScalarVisibilityOff, METH_VARARGS,
   "ScalarVisibilityOff(self) -> None\nC++: virtual void ScalarVisibilityOff()\n\n"},
  {"SelectColorArray", PyvtkPlotParallelCoordinates_SelectColorArray, METH_VARARGS,
   "SelectColorArray(self, arrayNum:int) -> None\nC++: void SelectColorArray(vtkIdType arrayNum)\nSelectColorArray(self, arrayName:str) -> None\nC++: void SelectColorArray(const vtkStdString &arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {"SetColorMode", PyvtkPlotParallelCoordinates_SetColorMode, METH_VARARGS,
   "SetColorMode(self, _arg:int) -> None\nC++: virtual void SetColorMode(int _arg)\n\nSet/Get the color mode for the plot.\n\nThe options are: VTK_COLOR_MODE_DEFAULT\nVTK_COLOR_MODE_MAP_SCALARS VTK_COLOR_MODE_DIRECT_SCALARS\n\nDefault is VTK_COLOR_MODE_MAP_SCALARS.\n"},
  {"SetColorModeToDefault", PyvtkPlotParallelCoordinates_SetColorModeToDefault, METH_VARARGS,
   "SetColorModeToDefault(self) -> None\nC++: void SetColorModeToDefault()\n\n"},
  {"SetColorModeToMapScalars", PyvtkPlotParallelCoordinates_SetColorModeToMapScalars, METH_VARARGS,
   "SetColorModeToMapScalars(self) -> None\nC++: void SetColorModeToMapScalars()\n\n"},
  {"SetColorModeToDirectScalars", PyvtkPlotParallelCoordinates_SetColorModeToDirectScalars, METH_VARARGS,
   "SetColorModeToDirectScalars(self) -> None\nC++: void SetColorModeToDirectScalars()\n\n"},
  {"GetColorMode", PyvtkPlotParallelCoordinates_GetColorMode, METH_VARARGS,
   "GetColorMode(self) -> int\nC++: virtual int GetColorMode()\n\n"},
  {"GetColorArrayName", PyvtkPlotParallelCoordinates_GetColorArrayName, METH_VARARGS,
   "GetColorArrayName(self) -> str\nC++: vtkStdString GetColorArrayName()\n\nGet the array name to color by.\n"},
  {"UpdateCache", PyvtkPlotParallelCoordinates_UpdateCache, METH_VARARGS,
   "UpdateCache(self) -> bool\nC++: bool UpdateCache() override;\n\nUpdate the internal cache. Returns true if cache was successfully\nupdated. Default does nothing. This method is called by Update()\nwhen either the plot's data has changed or CacheRequiresUpdate()\nreturns true. It is not necessary to call this method explicitly.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlotParallelCoordinates_Doc =
  "vtkPlotParallelCoordinates - Class for drawing a parallel coordinate\nplot given columns from a vtkTable.\n\n"
  "Superclass: vtkPlot\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlotParallelCoordinates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlotParallelCoordinates", // tp_name
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
  PyvtkPlotParallelCoordinates_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotParallelCoordinates_StaticNew()
{
  return vtkPlotParallelCoordinates::New();
}

PyObject *PyvtkPlotParallelCoordinates_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlotParallelCoordinates_Type, PyvtkPlotParallelCoordinates_Methods,
    "vtkPlotParallelCoordinates",
 &PyvtkPlotParallelCoordinates_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlotParallelCoordinates(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotParallelCoordinates_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotParallelCoordinates", o) != 0)
  {
    Py_DECREF(o);
  }

}

