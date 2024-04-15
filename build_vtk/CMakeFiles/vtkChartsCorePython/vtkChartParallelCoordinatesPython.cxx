// python wrapper for vtkChartParallelCoordinates
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
#include "vtkChartParallelCoordinates.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartParallelCoordinates(PyObject *dict); }
extern "C" { PyObject *PyvtkChartParallelCoordinates_ClassNew(); }

#ifndef DECLARED_PyvtkChart_ClassNew
extern "C" { PyObject *PyvtkChart_ClassNew(); }
#define DECLARED_PyvtkChart_ClassNew
#endif

static PyObject *
PyvtkChartParallelCoordinates_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartParallelCoordinates::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartParallelCoordinates::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartParallelCoordinates *tempr = vtkChartParallelCoordinates::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartParallelCoordinates *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartParallelCoordinates::NewInstance());

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
PyvtkChartParallelCoordinates_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkChartParallelCoordinates::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkChartParallelCoordinates::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartParallelCoordinates::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartParallelCoordinates::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_PaintRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkContext2D *temp0 = nullptr;
  int temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintRect(temp0, temp1, temp2, temp3) :
      op->vtkChartParallelCoordinates::PaintRect(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkStdString temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetColumnVisibility(temp0, temp1);
    }
    else
    {
      op->vtkChartParallelCoordinates::SetColumnVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SetColumnVisibilityAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibilityAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColumnVisibilityAll(temp0);
    }
    else
    {
      op->vtkChartParallelCoordinates::SetColumnVisibilityAll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkChartParallelCoordinates::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVisibleColumns() :
      op->vtkChartParallelCoordinates::GetVisibleColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetVisibleColumns(temp0);
    }
    else
    {
      op->vtkChartParallelCoordinates::SetVisibleColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartParallelCoordinates::GetPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChartParallelCoordinates::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      op->vtkChartParallelCoordinates::SetShowLegend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkChartParallelCoordinates::GetLegend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkChartParallelCoordinates::GetAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkChartParallelCoordinates::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecalculateBounds();
    }
    else
    {
      op->vtkChartParallelCoordinates::RecalculateBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_SetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkPlotParallelCoordinates *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlotParallelCoordinates"))
  {
    if (ap.IsBound())
    {
      op->SetPlot(temp0);
    }
    else
    {
      op->vtkChartParallelCoordinates::SetPlot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartParallelCoordinates::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_MouseEnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseEnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseEnterEvent(*temp0) :
      op->vtkChartParallelCoordinates::MouseEnterEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartParallelCoordinates::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_MouseLeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseLeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseLeaveEvent(*temp0) :
      op->vtkChartParallelCoordinates::MouseLeaveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartParallelCoordinates::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkChartParallelCoordinates::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_MouseWheelEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseWheelEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

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
      op->vtkChartParallelCoordinates::MouseWheelEvent(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartParallelCoordinates_UpdateCurrentAxisSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCurrentAxisSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartParallelCoordinates *op = static_cast<vtkChartParallelCoordinates *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateCurrentAxisSelection(temp0);
    }
    else
    {
      op->vtkChartParallelCoordinates::UpdateCurrentAxisSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartParallelCoordinates_Methods[] = {
  {"IsTypeOf", PyvtkChartParallelCoordinates_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartParallelCoordinates_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartParallelCoordinates_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkChartParallelCoordinates\nC++: static vtkChartParallelCoordinates *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartParallelCoordinates_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkChartParallelCoordinates\nC++: vtkChartParallelCoordinates *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkChartParallelCoordinates_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkChartParallelCoordinates_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkChartParallelCoordinates_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkChartParallelCoordinates_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {"PaintRect", PyvtkChartParallelCoordinates_PaintRect, METH_VARARGS,
   "PaintRect(self, painter:vtkContext2D, axis:int, min:float,\n    max:float) -> bool\nC++: bool PaintRect(vtkContext2D *painter, int axis, float min,\n    float max)\n\nDraw a rect on a specific axis\n"},
  {"SetColumnVisibility", PyvtkChartParallelCoordinates_SetColumnVisibility, METH_VARARGS,
   "SetColumnVisibility(self, name:str, visible:bool) -> None\nC++: void SetColumnVisibility(const vtkStdString &name,\n    bool visible)\n\nSet the visibility of the specified column.\n"},
  {"SetColumnVisibilityAll", PyvtkChartParallelCoordinates_SetColumnVisibilityAll, METH_VARARGS,
   "SetColumnVisibilityAll(self, visible:bool) -> None\nC++: void SetColumnVisibilityAll(bool visible)\n\nSet the visibility of all columns (true will make them all\nvisible, false will remove all visible columns).\n"},
  {"GetColumnVisibility", PyvtkChartParallelCoordinates_GetColumnVisibility, METH_VARARGS,
   "GetColumnVisibility(self, name:str) -> bool\nC++: bool GetColumnVisibility(const vtkStdString &name)\n\nGet the visibility of the specified column.\n"},
  {"GetVisibleColumns", PyvtkChartParallelCoordinates_GetVisibleColumns, METH_VARARGS,
   "GetVisibleColumns(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetVisibleColumns()\n\nGet a list of the columns, and the order in which they are\ndisplayed.\n"},
  {"SetVisibleColumns", PyvtkChartParallelCoordinates_SetVisibleColumns, METH_VARARGS,
   "SetVisibleColumns(self, visColumns:vtkStringArray) -> None\nC++: virtual void SetVisibleColumns(vtkStringArray *visColumns)\n\nSet the list of visible columns, and the order in which they will\nbe displayed.\n"},
  {"GetPlot", PyvtkChartParallelCoordinates_GetPlot, METH_VARARGS,
   "GetPlot(self, index:int) -> vtkPlot\nC++: vtkPlot *GetPlot(vtkIdType index) override;\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {"GetNumberOfPlots", PyvtkChartParallelCoordinates_GetNumberOfPlots, METH_VARARGS,
   "GetNumberOfPlots(self) -> int\nC++: vtkIdType GetNumberOfPlots() override;\n\nGet the number of plots the chart contains.\n"},
  {"SetShowLegend", PyvtkChartParallelCoordinates_SetShowLegend, METH_VARARGS,
   "SetShowLegend(self, visible:bool) -> None\nC++: void SetShowLegend(bool visible) override;\n\nSet whether the chart should draw a legend.\n"},
  {"GetLegend", PyvtkChartParallelCoordinates_GetLegend, METH_VARARGS,
   "GetLegend(self) -> vtkChartLegend\nC++: vtkChartLegend *GetLegend() override;\n\nGet the legend for the chart, if available. Can return nullptr if\nthere is no legend.\n"},
  {"GetAxis", PyvtkChartParallelCoordinates_GetAxis, METH_VARARGS,
   "GetAxis(self, axisIndex:int) -> vtkAxis\nC++: vtkAxis *GetAxis(int axisIndex) override;\n\nGet the axis specified by axisIndex.\n"},
  {"GetNumberOfAxes", PyvtkChartParallelCoordinates_GetNumberOfAxes, METH_VARARGS,
   "GetNumberOfAxes(self) -> int\nC++: vtkIdType GetNumberOfAxes() override;\n\nGet the number of axes in the current chart.\n"},
  {"RecalculateBounds", PyvtkChartParallelCoordinates_RecalculateBounds, METH_VARARGS,
   "RecalculateBounds(self) -> None\nC++: void RecalculateBounds() override;\n\nRequest that the chart recalculates the range of its axes.\nEspecially useful in applications after the parameters of plots\nhave been modified.\n"},
  {"SetPlot", PyvtkChartParallelCoordinates_SetPlot, METH_VARARGS,
   "SetPlot(self, plot:vtkPlotParallelCoordinates) -> None\nC++: virtual void SetPlot(vtkPlotParallelCoordinates *plot)\n\nSet plot to use for the chart. Since this type of chart can only\ncontain one plot, this will replace the previous plot.\n"},
  {"Hit", PyvtkChartParallelCoordinates_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseEnterEvent", PyvtkChartParallelCoordinates_MouseEnterEvent, METH_VARARGS,
   "MouseEnterEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseEnterEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse enter event.\n"},
  {"MouseMoveEvent", PyvtkChartParallelCoordinates_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseLeaveEvent", PyvtkChartParallelCoordinates_MouseLeaveEvent, METH_VARARGS,
   "MouseLeaveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseLeaveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse leave event.\n"},
  {"MouseButtonPressEvent", PyvtkChartParallelCoordinates_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkChartParallelCoordinates_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"MouseWheelEvent", PyvtkChartParallelCoordinates_MouseWheelEvent, METH_VARARGS,
   "MouseWheelEvent(self, mouse:vtkContextMouseEvent, delta:int)\n    -> bool\nC++: bool MouseWheelEvent(const vtkContextMouseEvent &mouse,\n    int delta) override;\n\nMouse wheel event, positive delta indicates forward movement of\nthe wheel.\n"},
  {"UpdateCurrentAxisSelection", PyvtkChartParallelCoordinates_UpdateCurrentAxisSelection, METH_VARARGS,
   "UpdateCurrentAxisSelection(self, axisId:int) -> None\nC++: void UpdateCurrentAxisSelection(int axisId)\n\nUpdate the selection of an axis based on the current\nselectionMode we have previously set.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkChartParallelCoordinates_Doc =
  "vtkChartParallelCoordinates - Factory class for drawing 2D charts\n\n"
  "Superclass: vtkChart\n\n"
  "This defines the interface for a parallel coordinates chart.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartParallelCoordinates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartParallelCoordinates", // tp_name
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
  PyvtkChartParallelCoordinates_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartParallelCoordinates_StaticNew()
{
  return vtkChartParallelCoordinates::New();
}

PyObject *PyvtkChartParallelCoordinates_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkChartParallelCoordinates_Type, PyvtkChartParallelCoordinates_Methods,
    "vtkChartParallelCoordinates",
 &PyvtkChartParallelCoordinates_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkChart_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartParallelCoordinates(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartParallelCoordinates_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartParallelCoordinates", o) != 0)
  {
    Py_DECREF(o);
  }

}

