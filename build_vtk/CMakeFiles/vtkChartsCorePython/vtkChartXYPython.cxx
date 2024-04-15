// python wrapper for vtkChartXY
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkChartXY.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartXY(PyObject *dict); }
extern "C" { PyObject *PyvtkChartXY_ClassNew(); }

#ifndef DECLARED_PyvtkChart_ClassNew
extern "C" { PyObject *PyvtkChart_ClassNew(); }
#define DECLARED_PyvtkChart_ClassNew
#endif

static PyObject *
PyvtkChartXY_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartXY::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartXY::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartXY *tempr = vtkChartXY::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartXY *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartXY::NewInstance());

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
PyvtkChartXY_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkChartXY::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkChartXY::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartXY::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartXY::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AddPlot_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartXY::AddPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkChartXY_AddPlot_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->AddPlot(temp0, temp1) :
      op->vtkChartXY::AddPlot(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkChartXY_AddPlot_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    long long tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChartXY::AddPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkChartXY_AddPlot_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlot") &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->AddPlot(temp0, temp1) :
      op->vtkChartXY::AddPlot(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChartXY_AddPlot_Methods[] = {
  {"AddPlot", PyvtkChartXY_AddPlot_s1, METH_VARARGS,
   "@i"},
  {"AddPlot", PyvtkChartXY_AddPlot_s2, METH_VARARGS,
   "@iI"},
  {"AddPlot", PyvtkChartXY_AddPlot_s3, METH_VARARGS,
   "@V *vtkPlot"},
  {"AddPlot", PyvtkChartXY_AddPlot_s4, METH_VARARGS,
   "@VI *vtkPlot"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartXY_AddPlot(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartXY_AddPlot_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPlot");
  return nullptr;
}


static PyObject *
PyvtkChartXY_RemovePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemovePlot(temp0) :
      op->vtkChartXY::RemovePlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ClearPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPlots();
    }
    else
    {
      op->vtkChartXY::ClearPlots();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartXY::GetPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetPlotIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPlotIndex(temp0) :
      op->vtkChartXY::GetPlotIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_RaisePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RaisePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    long long tempr = (ap.IsBound() ?
      op->RaisePlot(temp0) :
      op->vtkChartXY::RaisePlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_StackPlotAbove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StackPlotAbove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  vtkPlot *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlot") &&
      ap.GetVTKObject(temp1, "vtkPlot"))
  {
    long long tempr = (ap.IsBound() ?
      op->StackPlotAbove(temp0, temp1) :
      op->vtkChartXY::StackPlotAbove(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_LowerPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LowerPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    long long tempr = (ap.IsBound() ?
      op->LowerPlot(temp0) :
      op->vtkChartXY::LowerPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_StackPlotUnder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StackPlotUnder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  vtkPlot *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlot") &&
      ap.GetVTKObject(temp1, "vtkPlot"))
  {
    long long tempr = (ap.IsBound() ?
      op->StackPlotUnder(temp0, temp1) :
      op->vtkChartXY::StackPlotUnder(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChartXY::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetPlotCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCorner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotCorner(temp0) :
      op->vtkChartXY::GetPlotCorner(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetPlotCorner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCorner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkPlot *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPlot") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotCorner(temp0, temp1);
    }
    else
    {
      op->vtkChartXY::SetPlotCorner(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkChartXY::GetAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  vtkAxis *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAxis"))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0, temp1);
    }
    else
    {
      op->vtkChartXY::SetAxis(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowLegend(temp0);
    }
    else
    {
      op->vtkChartXY::SetShowLegend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkChartXY::GetLegend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkTooltipItem *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTooltipItem"))
  {
    if (ap.IsBound())
    {
      op->SetTooltip(temp0);
    }
    else
    {
      op->vtkChartXY::SetTooltip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkChartXY::GetTooltip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkChartXY::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecalculateBounds();
    }
    else
    {
      op->vtkChartXY::RecalculateBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetSelectionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMethod(temp0);
    }
    else
    {
      op->vtkChartXY::SetSelectionMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_RemovePlotSelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlotSelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemovePlotSelections();
    }
    else
    {
      op->vtkChartXY::RemovePlotSelections();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetDrawAxesAtOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawAxesAtOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawAxesAtOrigin(temp0);
    }
    else
    {
      op->vtkChartXY::SetDrawAxesAtOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetDrawAxesAtOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawAxesAtOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawAxesAtOrigin() :
      op->vtkChartXY::GetDrawAxesAtOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DrawAxesAtOriginOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAxesAtOriginOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAxesAtOriginOn();
    }
    else
    {
      op->vtkChartXY::DrawAxesAtOriginOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DrawAxesAtOriginOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawAxesAtOriginOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawAxesAtOriginOff();
    }
    else
    {
      op->vtkChartXY::DrawAxesAtOriginOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetAutoAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoAxes(temp0);
    }
    else
    {
      op->vtkChartXY::SetAutoAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetAutoAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoAxes() :
      op->vtkChartXY::GetAutoAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AutoAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAxesOn();
    }
    else
    {
      op->vtkChartXY::AutoAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AutoAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoAxesOff();
    }
    else
    {
      op->vtkChartXY::AutoAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetHiddenAxisBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHiddenAxisBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHiddenAxisBorder(temp0);
    }
    else
    {
      op->vtkChartXY::SetHiddenAxisBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetHiddenAxisBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHiddenAxisBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHiddenAxisBorder() :
      op->vtkChartXY::GetHiddenAxisBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetForceAxesToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceAxesToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceAxesToBounds(temp0);
    }
    else
    {
      op->vtkChartXY::SetForceAxesToBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetForceAxesToBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceAxesToBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceAxesToBounds() :
      op->vtkChartXY::GetForceAxesToBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ForceAxesToBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceAxesToBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceAxesToBoundsOn();
    }
    else
    {
      op->vtkChartXY::ForceAxesToBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ForceAxesToBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceAxesToBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceAxesToBoundsOff();
    }
    else
    {
      op->vtkChartXY::ForceAxesToBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetIgnoreNanInBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreNanInBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreNanInBounds(temp0);
    }
    else
    {
      op->vtkChartXY::SetIgnoreNanInBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetIgnoreNanInBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreNanInBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreNanInBounds() :
      op->vtkChartXY::GetIgnoreNanInBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_IgnoreNanInBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreNanInBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreNanInBoundsOn();
    }
    else
    {
      op->vtkChartXY::IgnoreNanInBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_IgnoreNanInBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreNanInBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreNanInBoundsOff();
    }
    else
    {
      op->vtkChartXY::IgnoreNanInBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetBarWidthFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBarWidthFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBarWidthFraction(temp0);
    }
    else
    {
      op->vtkChartXY::SetBarWidthFraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetBarWidthFraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBarWidthFraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetBarWidthFraction() :
      op->vtkChartXY::GetBarWidthFraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetZoomWithMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoomWithMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZoomWithMouseWheel(temp0);
    }
    else
    {
      op->vtkChartXY::SetZoomWithMouseWheel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetZoomWithMouseWheel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomWithMouseWheel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetZoomWithMouseWheel() :
      op->vtkChartXY::GetZoomWithMouseWheel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ZoomWithMouseWheelOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomWithMouseWheelOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZoomWithMouseWheelOn();
    }
    else
    {
      op->vtkChartXY::ZoomWithMouseWheelOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ZoomWithMouseWheelOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZoomWithMouseWheelOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZoomWithMouseWheelOff();
    }
    else
    {
      op->vtkChartXY::ZoomWithMouseWheelOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetAxisZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisZoom(temp0, temp1);
    }
    else
    {
      op->vtkChartXY::SetAxisZoom(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetAxisZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisZoom(temp0) :
      op->vtkChartXY::GetAxisZoom(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetAdjustLowerBoundForLogPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustLowerBoundForLogPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustLowerBoundForLogPlot(temp0);
    }
    else
    {
      op->vtkChartXY::SetAdjustLowerBoundForLogPlot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetAdjustLowerBoundForLogPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustLowerBoundForLogPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAdjustLowerBoundForLogPlot() :
      op->vtkChartXY::GetAdjustLowerBoundForLogPlot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AdjustLowerBoundForLogPlotOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustLowerBoundForLogPlotOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustLowerBoundForLogPlotOn();
    }
    else
    {
      op->vtkChartXY::AdjustLowerBoundForLogPlotOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AdjustLowerBoundForLogPlotOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustLowerBoundForLogPlotOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustLowerBoundForLogPlotOff();
    }
    else
    {
      op->vtkChartXY::AdjustLowerBoundForLogPlotOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetDragPointAlongX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragPointAlongX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDragPointAlongX(temp0);
    }
    else
    {
      op->vtkChartXY::SetDragPointAlongX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetDragPointAlongX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragPointAlongX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDragPointAlongX() :
      op->vtkChartXY::GetDragPointAlongX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DragPointAlongXOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragPointAlongXOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragPointAlongXOn();
    }
    else
    {
      op->vtkChartXY::DragPointAlongXOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DragPointAlongXOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragPointAlongXOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragPointAlongXOff();
    }
    else
    {
      op->vtkChartXY::DragPointAlongXOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetDragPointAlongY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDragPointAlongY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDragPointAlongY(temp0);
    }
    else
    {
      op->vtkChartXY::SetDragPointAlongY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetDragPointAlongY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDragPointAlongY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDragPointAlongY() :
      op->vtkChartXY::GetDragPointAlongY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DragPointAlongYOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragPointAlongYOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragPointAlongYOn();
    }
    else
    {
      op->vtkChartXY::DragPointAlongYOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_DragPointAlongYOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DragPointAlongYOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DragPointAlongYOff();
    }
    else
    {
      op->vtkChartXY::DragPointAlongYOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_SetTooltipInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  long long temp2;
  vtkPlot *temp3 = nullptr;
  long long temp4 = -1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2d") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPlot") &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    if (ap.IsBound())
    {
      op->SetTooltipInfo(*temp0, *temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkChartXY::SetTooltipInfo(*temp0, *temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkChartXY_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartXY::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseEnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseEnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseEnterEvent(*temp0) :
      op->vtkChartXY::MouseEnterEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartXY::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseLeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseLeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseLeaveEvent(*temp0) :
      op->vtkChartXY::MouseLeaveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartXY::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkChartXY::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MouseWheelEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseWheelEvent(*temp0, temp1) :
      op->vtkChartXY::MouseWheelEvent(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartXY *op = static_cast<vtkChartXY *>(vp);

  vtkContextKeyEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextKeyEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->KeyPressEvent(*temp0) :
      op->vtkChartXY::KeyPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartXY_MakeSelection(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeSelection");

  vtkAnnotationLink *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  vtkPlot *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkPlot"))
  {
    vtkChartXY::MakeSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_MinusSelection(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MinusSelection");

  vtkIdTypeArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    vtkChartXY::MinusSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_AddSelection(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AddSelection");

  vtkIdTypeArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    vtkChartXY::AddSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_ToggleSelection(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ToggleSelection");

  vtkIdTypeArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    vtkChartXY::ToggleSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_BuildSelection(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "BuildSelection");

  vtkAnnotationLink *temp0 = nullptr;
  int temp1;
  vtkIdTypeArray *temp2 = nullptr;
  vtkIdTypeArray *temp3 = nullptr;
  vtkPlot *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp4, "vtkPlot"))
  {
    vtkChartXY::BuildSelection(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartXY_GetMouseSelectionMode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetMouseSelectionMode");

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent") &&
      ap.GetValue(temp1))
  {
    int tempr = vtkChartXY::GetMouseSelectionMode(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartXY_Methods[] = {
  {"IsTypeOf", PyvtkChartXY_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartXY_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartXY_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkChartXY\nC++: static vtkChartXY *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartXY_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkChartXY\nC++: vtkChartXY *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkChartXY_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkChartXY_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkChartXY_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkChartXY_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {"AddPlot", PyvtkChartXY_AddPlot, METH_VARARGS,
   "AddPlot(self, type:int) -> vtkPlot\nC++: vtkPlot *AddPlot(int type) override;\nAddPlot(self, type:int, blockIndex:int) -> vtkPlot\nC++: virtual vtkPlot *AddPlot(int type, unsigned int blockIndex)\nAddPlot(self, plot:vtkPlot) -> int\nC++: vtkIdType AddPlot(vtkPlot *plot) override;\nAddPlot(self, plot:vtkPlot, blockIndex:int) -> int\nC++: virtual vtkIdType AddPlot(vtkPlot *plot,\n    unsigned int blockIndex)\n\nAdd a plot to the chart, defaults to using the name of the y\ncolumn\n"},
  {"RemovePlot", PyvtkChartXY_RemovePlot, METH_VARARGS,
   "RemovePlot(self, index:int) -> bool\nC++: bool RemovePlot(vtkIdType index) override;\n\nRemove the plot at the specified index, returns true if\nsuccessful, false if the index was invalid.\n"},
  {"ClearPlots", PyvtkChartXY_ClearPlots, METH_VARARGS,
   "ClearPlots(self) -> None\nC++: void ClearPlots() override;\n\nRemove all plots from the chart.\n"},
  {"GetPlot", PyvtkChartXY_GetPlot, METH_VARARGS,
   "GetPlot(self, index:int) -> vtkPlot\nC++: vtkPlot *GetPlot(vtkIdType index) override;\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {"GetPlotIndex", PyvtkChartXY_GetPlotIndex, METH_VARARGS,
   "GetPlotIndex(self, __a:vtkPlot) -> int\nC++: virtual vtkIdType GetPlotIndex(vtkPlot *)\n\nGet the index of the specified plot, returns -1 if the plot does\nnot belong to the chart.\n"},
  {"RaisePlot", PyvtkChartXY_RaisePlot, METH_VARARGS,
   "RaisePlot(self, plot:vtkPlot) -> int\nC++: vtkIdType RaisePlot(vtkPlot *plot)\n\nRaises the plot to the top of the plot's stack.\n\\return The new index of the plot\n\\sa StackPlotAbove(), LowerPlot(), StackPlotUnder()\n"},
  {"StackPlotAbove", PyvtkChartXY_StackPlotAbove, METH_VARARGS,
   "StackPlotAbove(self, plot:vtkPlot, under:vtkPlot) -> int\nC++: virtual vtkIdType StackPlotAbove(vtkPlot *plot,\n    vtkPlot *under)\n\nRaises the plot above the under plot. If under is null, the plot\nis raised to the top of the plot's stack.\n\\return The new index of the plot\n\\sa RaisePlot(), LowerPlot(), StackPlotUnder()\n"},
  {"LowerPlot", PyvtkChartXY_LowerPlot, METH_VARARGS,
   "LowerPlot(self, plot:vtkPlot) -> int\nC++: vtkIdType LowerPlot(vtkPlot *plot)\n\nLowers the plot to the bottom of the plot's stack.\n\\return The new index of the plot\n\\sa StackPlotUnder(), RaisePlot(), StackPlotAbove()\n"},
  {"StackPlotUnder", PyvtkChartXY_StackPlotUnder, METH_VARARGS,
   "StackPlotUnder(self, plot:vtkPlot, above:vtkPlot) -> int\nC++: virtual vtkIdType StackPlotUnder(vtkPlot *plot,\n    vtkPlot *above)\n\nLowers the plot under the above plot. If above is null, the plot\nis lowered to the bottom of the plot's stack\n\\return The new index of the plot\n\\sa StackPlotUnder(), RaisePlot(), StackPlotAbove()\n"},
  {"GetNumberOfPlots", PyvtkChartXY_GetNumberOfPlots, METH_VARARGS,
   "GetNumberOfPlots(self) -> int\nC++: vtkIdType GetNumberOfPlots() override;\n\nGet the number of plots the chart contains.\n"},
  {"GetPlotCorner", PyvtkChartXY_GetPlotCorner, METH_VARARGS,
   "GetPlotCorner(self, plot:vtkPlot) -> int\nC++: int GetPlotCorner(vtkPlot *plot)\n\nFigure out which quadrant the plot is in.\n"},
  {"SetPlotCorner", PyvtkChartXY_SetPlotCorner, METH_VARARGS,
   "SetPlotCorner(self, plot:vtkPlot, corner:int) -> None\nC++: void SetPlotCorner(vtkPlot *plot, int corner)\n\nFigure out which quadrant the plot is in.\n"},
  {"GetAxis", PyvtkChartXY_GetAxis, METH_VARARGS,
   "GetAxis(self, axisIndex:int) -> vtkAxis\nC++: vtkAxis *GetAxis(int axisIndex) override;\n\nGet the axis specified by axisIndex. This is specified with the\nvtkAxis position enum, valid values are vtkAxis::LEFT,\nvtkAxis::BOTTOM, vtkAxis::RIGHT and vtkAxis::TOP.\n"},
  {"SetAxis", PyvtkChartXY_SetAxis, METH_VARARGS,
   "SetAxis(self, axisIndex:int, __b:vtkAxis) -> None\nC++: void SetAxis(int axisIndex, vtkAxis *) override;\n\nSet the axis specified by axisIndex. This is specified with the\nvtkAxis position enum, valid values are vtkAxis::LEFT,\nvtkAxis::BOTTOM, vtkAxis::RIGHT and vtkAxis::TOP.\n"},
  {"SetShowLegend", PyvtkChartXY_SetShowLegend, METH_VARARGS,
   "SetShowLegend(self, visible:bool) -> None\nC++: void SetShowLegend(bool visible) override;\n\nSet whether the chart should draw a legend.\n"},
  {"GetLegend", PyvtkChartXY_GetLegend, METH_VARARGS,
   "GetLegend(self) -> vtkChartLegend\nC++: vtkChartLegend *GetLegend() override;\n\nGet the vtkChartLegend object that will be displayed by the\nchart.\n"},
  {"SetTooltip", PyvtkChartXY_SetTooltip, METH_VARARGS,
   "SetTooltip(self, tooltip:vtkTooltipItem) -> None\nC++: virtual void SetTooltip(vtkTooltipItem *tooltip)\n\nSet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {"GetTooltip", PyvtkChartXY_GetTooltip, METH_VARARGS,
   "GetTooltip(self) -> vtkTooltipItem\nC++: virtual vtkTooltipItem *GetTooltip()\n\nGet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {"GetNumberOfAxes", PyvtkChartXY_GetNumberOfAxes, METH_VARARGS,
   "GetNumberOfAxes(self) -> int\nC++: vtkIdType GetNumberOfAxes() override;\n\nGet the number of axes in the current chart.\n"},
  {"RecalculateBounds", PyvtkChartXY_RecalculateBounds, METH_VARARGS,
   "RecalculateBounds(self) -> None\nC++: void RecalculateBounds() override;\n\nRequest that the chart recalculates the range of its axes.\nEspecially useful in applications after the parameters of plots\nhave been modified.\n"},
  {"SetSelectionMethod", PyvtkChartXY_SetSelectionMethod, METH_VARARGS,
   "SetSelectionMethod(self, method:int) -> None\nC++: void SetSelectionMethod(int method) override;\n\nSet the selection method, which controls how selections are\nhandled by the chart. The default is SELECTION_ROWS which selects\nall points in all plots in a chart that have values in the rows\nselected. SELECTION_PLOTS allows for finer-grained selections\nspecific to each plot, and so to each XY column pair.\n"},
  {"RemovePlotSelections", PyvtkChartXY_RemovePlotSelections, METH_VARARGS,
   "RemovePlotSelections(self) -> None\nC++: void RemovePlotSelections()\n\nRemove all the selection from Plots\n"},
  {"SetDrawAxesAtOrigin", PyvtkChartXY_SetDrawAxesAtOrigin, METH_VARARGS,
   "SetDrawAxesAtOrigin(self, _arg:bool) -> None\nC++: virtual void SetDrawAxesAtOrigin(bool _arg)\n\nIf true then the axes will be drawn at the origin (scientific\nstyle).\n"},
  {"GetDrawAxesAtOrigin", PyvtkChartXY_GetDrawAxesAtOrigin, METH_VARARGS,
   "GetDrawAxesAtOrigin(self) -> bool\nC++: virtual bool GetDrawAxesAtOrigin()\n\n"},
  {"DrawAxesAtOriginOn", PyvtkChartXY_DrawAxesAtOriginOn, METH_VARARGS,
   "DrawAxesAtOriginOn(self) -> None\nC++: virtual void DrawAxesAtOriginOn()\n\n"},
  {"DrawAxesAtOriginOff", PyvtkChartXY_DrawAxesAtOriginOff, METH_VARARGS,
   "DrawAxesAtOriginOff(self) -> None\nC++: virtual void DrawAxesAtOriginOff()\n\n"},
  {"SetAutoAxes", PyvtkChartXY_SetAutoAxes, METH_VARARGS,
   "SetAutoAxes(self, _arg:bool) -> None\nC++: virtual void SetAutoAxes(bool _arg)\n\nIf true then the axes will be turned on and off depending upon\nwhether any plots are in that corner. Defaults to true.\n"},
  {"GetAutoAxes", PyvtkChartXY_GetAutoAxes, METH_VARARGS,
   "GetAutoAxes(self) -> bool\nC++: virtual bool GetAutoAxes()\n\n"},
  {"AutoAxesOn", PyvtkChartXY_AutoAxesOn, METH_VARARGS,
   "AutoAxesOn(self) -> None\nC++: virtual void AutoAxesOn()\n\n"},
  {"AutoAxesOff", PyvtkChartXY_AutoAxesOff, METH_VARARGS,
   "AutoAxesOff(self) -> None\nC++: virtual void AutoAxesOff()\n\n"},
  {"SetHiddenAxisBorder", PyvtkChartXY_SetHiddenAxisBorder, METH_VARARGS,
   "SetHiddenAxisBorder(self, _arg:int) -> None\nC++: virtual void SetHiddenAxisBorder(int _arg)\n\nBorder size of the axes that are hidden (vtkAxis::GetVisible())\n"},
  {"GetHiddenAxisBorder", PyvtkChartXY_GetHiddenAxisBorder, METH_VARARGS,
   "GetHiddenAxisBorder(self) -> int\nC++: virtual int GetHiddenAxisBorder()\n\n"},
  {"SetForceAxesToBounds", PyvtkChartXY_SetForceAxesToBounds, METH_VARARGS,
   "SetForceAxesToBounds(self, _arg:bool) -> None\nC++: virtual void SetForceAxesToBounds(bool _arg)\n\nForce the axes to have their Minimum and Maximum properties\ninside the plot boundaries. It constrains pan and zoom\ninteraction. False by default.\n"},
  {"GetForceAxesToBounds", PyvtkChartXY_GetForceAxesToBounds, METH_VARARGS,
   "GetForceAxesToBounds(self) -> bool\nC++: virtual bool GetForceAxesToBounds()\n\n"},
  {"ForceAxesToBoundsOn", PyvtkChartXY_ForceAxesToBoundsOn, METH_VARARGS,
   "ForceAxesToBoundsOn(self) -> None\nC++: virtual void ForceAxesToBoundsOn()\n\n"},
  {"ForceAxesToBoundsOff", PyvtkChartXY_ForceAxesToBoundsOff, METH_VARARGS,
   "ForceAxesToBoundsOff(self) -> None\nC++: virtual void ForceAxesToBoundsOff()\n\n"},
  {"SetIgnoreNanInBounds", PyvtkChartXY_SetIgnoreNanInBounds, METH_VARARGS,
   "SetIgnoreNanInBounds(self, _arg:bool) -> None\nC++: virtual void SetIgnoreNanInBounds(bool _arg)\n\nIgnore NaN in RecalculateBounds(). Prevents the final bounds to\ncontain NaN if one of the plots contains NaN in its bounds. False\nby default.\n"},
  {"GetIgnoreNanInBounds", PyvtkChartXY_GetIgnoreNanInBounds, METH_VARARGS,
   "GetIgnoreNanInBounds(self) -> bool\nC++: virtual bool GetIgnoreNanInBounds()\n\n"},
  {"IgnoreNanInBoundsOn", PyvtkChartXY_IgnoreNanInBoundsOn, METH_VARARGS,
   "IgnoreNanInBoundsOn(self) -> None\nC++: virtual void IgnoreNanInBoundsOn()\n\n"},
  {"IgnoreNanInBoundsOff", PyvtkChartXY_IgnoreNanInBoundsOff, METH_VARARGS,
   "IgnoreNanInBoundsOff(self) -> None\nC++: virtual void IgnoreNanInBoundsOff()\n\n"},
  {"SetBarWidthFraction", PyvtkChartXY_SetBarWidthFraction, METH_VARARGS,
   "SetBarWidthFraction(self, _arg:float) -> None\nC++: virtual void SetBarWidthFraction(float _arg)\n\nSet the width fraction for any bar charts drawn in this chart. It\nis assumed that all bar plots will use the same array for the X\naxis, and that this array is regularly spaced. The delta between\nthe first two x values is used to calculated the width of the\nbars, and subdivided between each bar. The default value is 0.8,\n1.0 would lead to bars that touch.\n"},
  {"GetBarWidthFraction", PyvtkChartXY_GetBarWidthFraction, METH_VARARGS,
   "GetBarWidthFraction(self) -> float\nC++: virtual float GetBarWidthFraction()\n\n"},
  {"SetZoomWithMouseWheel", PyvtkChartXY_SetZoomWithMouseWheel, METH_VARARGS,
   "SetZoomWithMouseWheel(self, _arg:bool) -> None\nC++: virtual void SetZoomWithMouseWheel(bool _arg)\n\nSet the behavior of the mouse wheel.  If true, the mouse wheel\nzooms in/out on the chart.  Otherwise, unless MouseWheelEvent is\noverridden by a subclass the mouse wheel does nothing. The\ndefault value is true.\n"},
  {"GetZoomWithMouseWheel", PyvtkChartXY_GetZoomWithMouseWheel, METH_VARARGS,
   "GetZoomWithMouseWheel(self) -> bool\nC++: virtual bool GetZoomWithMouseWheel()\n\n"},
  {"ZoomWithMouseWheelOn", PyvtkChartXY_ZoomWithMouseWheelOn, METH_VARARGS,
   "ZoomWithMouseWheelOn(self) -> None\nC++: virtual void ZoomWithMouseWheelOn()\n\n"},
  {"ZoomWithMouseWheelOff", PyvtkChartXY_ZoomWithMouseWheelOff, METH_VARARGS,
   "ZoomWithMouseWheelOff(self) -> None\nC++: virtual void ZoomWithMouseWheelOff()\n\n"},
  {"SetAxisZoom", PyvtkChartXY_SetAxisZoom, METH_VARARGS,
   "SetAxisZoom(self, index:int, v:bool) -> None\nC++: void SetAxisZoom(int index, bool v)\n\nSet the behavior of the mouse wheel for individual axes.\nZoomWithMouseWheel must be enabled to allow zooming; individual\naxes can be set to ignore zoom. The default value for all axes is\ntrue.\n"},
  {"GetAxisZoom", PyvtkChartXY_GetAxisZoom, METH_VARARGS,
   "GetAxisZoom(self, index:int) -> bool\nC++: bool GetAxisZoom(int index)\n\n"},
  {"SetAdjustLowerBoundForLogPlot", PyvtkChartXY_SetAdjustLowerBoundForLogPlot, METH_VARARGS,
   "SetAdjustLowerBoundForLogPlot(self, _arg:bool) -> None\nC++: virtual void SetAdjustLowerBoundForLogPlot(bool _arg)\n\nAdjust the minimum of a logarithmic axis to be greater than 0,\nregardless of the minimum data value. False by default.\n"},
  {"GetAdjustLowerBoundForLogPlot", PyvtkChartXY_GetAdjustLowerBoundForLogPlot, METH_VARARGS,
   "GetAdjustLowerBoundForLogPlot(self) -> bool\nC++: virtual bool GetAdjustLowerBoundForLogPlot()\n\n"},
  {"AdjustLowerBoundForLogPlotOn", PyvtkChartXY_AdjustLowerBoundForLogPlotOn, METH_VARARGS,
   "AdjustLowerBoundForLogPlotOn(self) -> None\nC++: virtual void AdjustLowerBoundForLogPlotOn()\n\n"},
  {"AdjustLowerBoundForLogPlotOff", PyvtkChartXY_AdjustLowerBoundForLogPlotOff, METH_VARARGS,
   "AdjustLowerBoundForLogPlotOff(self) -> None\nC++: virtual void AdjustLowerBoundForLogPlotOff()\n\n"},
  {"SetDragPointAlongX", PyvtkChartXY_SetDragPointAlongX, METH_VARARGS,
   "SetDragPointAlongX(self, _arg:bool) -> None\nC++: virtual void SetDragPointAlongX(bool _arg)\n\nSet if the point can be dragged along X by the ClickAndDrag\nAction True by default.\n"},
  {"GetDragPointAlongX", PyvtkChartXY_GetDragPointAlongX, METH_VARARGS,
   "GetDragPointAlongX(self) -> bool\nC++: virtual bool GetDragPointAlongX()\n\n"},
  {"DragPointAlongXOn", PyvtkChartXY_DragPointAlongXOn, METH_VARARGS,
   "DragPointAlongXOn(self) -> None\nC++: virtual void DragPointAlongXOn()\n\n"},
  {"DragPointAlongXOff", PyvtkChartXY_DragPointAlongXOff, METH_VARARGS,
   "DragPointAlongXOff(self) -> None\nC++: virtual void DragPointAlongXOff()\n\n"},
  {"SetDragPointAlongY", PyvtkChartXY_SetDragPointAlongY, METH_VARARGS,
   "SetDragPointAlongY(self, _arg:bool) -> None\nC++: virtual void SetDragPointAlongY(bool _arg)\n\nSet if the point can be dragged along Y by the ClickAndDrag\nAction True by default.\n"},
  {"GetDragPointAlongY", PyvtkChartXY_GetDragPointAlongY, METH_VARARGS,
   "GetDragPointAlongY(self) -> bool\nC++: virtual bool GetDragPointAlongY()\n\n"},
  {"DragPointAlongYOn", PyvtkChartXY_DragPointAlongYOn, METH_VARARGS,
   "DragPointAlongYOn(self) -> None\nC++: virtual void DragPointAlongYOn()\n\n"},
  {"DragPointAlongYOff", PyvtkChartXY_DragPointAlongYOff, METH_VARARGS,
   "DragPointAlongYOff(self) -> None\nC++: virtual void DragPointAlongYOff()\n\n"},
  {"SetTooltipInfo", PyvtkChartXY_SetTooltipInfo, METH_VARARGS,
   "SetTooltipInfo(self, __a:vtkContextMouseEvent, __b:vtkVector2d,\n    __c:int, __d:vtkPlot, segmentIndex:int=-1) -> None\nC++: virtual void SetTooltipInfo(const vtkContextMouseEvent &,\n    const vtkVector2d &, vtkIdType, vtkPlot *,\n    vtkIdType segmentIndex=-1)\n\nSet the information passed to the tooltip.\n"},
  {"Hit", PyvtkChartXY_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseEnterEvent", PyvtkChartXY_MouseEnterEvent, METH_VARARGS,
   "MouseEnterEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseEnterEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse enter event.\n"},
  {"MouseMoveEvent", PyvtkChartXY_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseLeaveEvent", PyvtkChartXY_MouseLeaveEvent, METH_VARARGS,
   "MouseLeaveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseLeaveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse leave event.\n"},
  {"MouseButtonPressEvent", PyvtkChartXY_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkChartXY_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"MouseWheelEvent", PyvtkChartXY_MouseWheelEvent, METH_VARARGS,
   "MouseWheelEvent(self, mouse:vtkContextMouseEvent, delta:int)\n    -> bool\nC++: bool MouseWheelEvent(const vtkContextMouseEvent &mouse,\n    int delta) override;\n\nMouse wheel event, positive delta indicates forward movement of\nthe wheel.\n"},
  {"KeyPressEvent", PyvtkChartXY_KeyPressEvent, METH_VARARGS,
   "KeyPressEvent(self, key:vtkContextKeyEvent) -> bool\nC++: bool KeyPressEvent(const vtkContextKeyEvent &key) override;\n\nKey press event.\n"},
  {"MakeSelection", PyvtkChartXY_MakeSelection, METH_VARARGS,
   "MakeSelection(link:vtkAnnotationLink, selectionIds:vtkIdTypeArray,\n     plot:vtkPlot) -> None\nC++: static void MakeSelection(vtkAnnotationLink *link,\n    vtkIdTypeArray *selectionIds, vtkPlot *plot)\n\nPopulate the annotation link with the supplied selectionIds\narray, and set the appropriate node properties for a plot based\nchart selection.\n"},
  {"MinusSelection", PyvtkChartXY_MinusSelection, METH_VARARGS,
   "MinusSelection(selection:vtkIdTypeArray,\n    oldSelection:vtkIdTypeArray) -> None\nC++: static void MinusSelection(vtkIdTypeArray *selection,\n    vtkIdTypeArray *oldSelection)\n\nSubtract the supplied selection from the oldSelection.\n"},
  {"AddSelection", PyvtkChartXY_AddSelection, METH_VARARGS,
   "AddSelection(selection:vtkIdTypeArray,\n    oldSelection:vtkIdTypeArray) -> None\nC++: static void AddSelection(vtkIdTypeArray *selection,\n    vtkIdTypeArray *oldSelection)\n\nAdd the supplied selection from the oldSelection.\n"},
  {"ToggleSelection", PyvtkChartXY_ToggleSelection, METH_VARARGS,
   "ToggleSelection(selection:vtkIdTypeArray,\n    oldSelection:vtkIdTypeArray) -> None\nC++: static void ToggleSelection(vtkIdTypeArray *selection,\n    vtkIdTypeArray *oldSelection)\n\nToggle the supplied selection from the oldSelection.\n"},
  {"BuildSelection", PyvtkChartXY_BuildSelection, METH_VARARGS,
   "BuildSelection(link:vtkAnnotationLink, selectionMode:int,\n    plotSelection:vtkIdTypeArray, oldSelection:vtkIdTypeArray,\n    plot:vtkPlot) -> None\nC++: static void BuildSelection(vtkAnnotationLink *link,\n    int selectionMode, vtkIdTypeArray *plotSelection,\n    vtkIdTypeArray *oldSelection, vtkPlot *plot)\n\nBuild a selection based on the supplied selectionMode using the\nnew plotSelection and combining it with the oldSelection. If link\nis not nullptr then the resulting selection will be set on the\nlink. This is used in the plot or the column based selection.\n"},
  {"GetMouseSelectionMode", PyvtkChartXY_GetMouseSelectionMode, METH_VARARGS,
   "GetMouseSelectionMode(mouse:vtkContextMouseEvent,\n    selectionMode:int) -> int\nC++: static int GetMouseSelectionMode(\n    const vtkContextMouseEvent &mouse, int selectionMode)\n\nCombine the SelectionMode with any mouse modifiers to get an\neffective selection mode for this click event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkChartXY_Doc =
  "vtkChartXY - Factory class for drawing XY charts\n\n"
  "Superclass: vtkChart\n\n"
  "This class implements an XY chart.\n\n"
  "@sa\n"
  "vtkBarChartActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartXY_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartXY", // tp_name
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
  PyvtkChartXY_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartXY_StaticNew()
{
  return vtkChartXY::New();
}

PyObject *PyvtkChartXY_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkChartXY_Type, PyvtkChartXY_Methods,
    "vtkChartXY",
 &PyvtkChartXY_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkChart_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkChartPlotData_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkChartPlotData_vtkChartPlotData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartPlotData");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkChartPlotData *op = new vtkChartPlotData();

    result = PyVTKSpecialObject_New("vtkChartPlotData", op);
  }

  return result;
}

static PyObject *
PyvtkChartPlotData_vtkChartPlotData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartPlotData");

  vtkChartPlotData *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkChartPlotData"))
  {
    vtkChartPlotData *op = new vtkChartPlotData(*temp0);

    result = PyVTKSpecialObject_New("vtkChartPlotData", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartPlotData_vtkChartPlotData_Methods[] = {
  {"vtkChartPlotData", PyvtkChartPlotData_vtkChartPlotData_s2, METH_VARARGS,
   "@W vtkChartPlotData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartPlotData_vtkChartPlotData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkChartPlotData_vtkChartPlotData_s1(self, args);
    case 1:
      return PyvtkChartPlotData_vtkChartPlotData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkChartPlotData");
  return nullptr;
}


static const char *PyvtkChartPlotData_Doc =

  "vtkChartPlotData() -> vtkChartPlotData\nC++: vtkChartPlotData()\nvtkChartPlotData(__a:vtkChartPlotData) -> vtkChartPlotData\nC++: vtkChartPlotData(const &vtkChartPlotData)\n""\n"
  "vtkChartPlotData - Small struct used by InvokeEvent to send some\ninformation about the point that was clicked on.\n\n"
  "This is an experimental part of the API, subject to change.\n\n";

static PyObject *
PyvtkChartPlotData_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkChartPlotData_vtkChartPlotData(nullptr, args);
}

static void PyvtkChartPlotData_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkChartPlotData *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkChartPlotData_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartPlotData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartPlotData", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkChartPlotData_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkChartPlotData_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkChartPlotData_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkChartPlotData_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkChartPlotData_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkChartPlotData(*static_cast<const vtkChartPlotData*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkChartPlotData_TypeNew
extern "C" { PyObject *PyvtkChartPlotData_TypeNew(); }
#define DECLARED_PyvtkChartPlotData_TypeNew
#endif

PyObject *PyvtkChartPlotData_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkChartPlotData_Type,
    PyvtkChartPlotData_Methods,
    PyvtkChartPlotData_vtkChartPlotData_Methods,
    &PyvtkChartPlotData_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartXY(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartXY_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartXY", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkChartPlotData_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkChartPlotData", o) != 0)
  {
    Py_DECREF(o);
  }

}

