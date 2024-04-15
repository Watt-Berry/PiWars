// python wrapper for vtkChartBox
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
#include "vtkChartBox.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartBox(PyObject *dict); }
extern "C" { PyObject *PyvtkChartBox_ClassNew(); }

#ifndef DECLARED_PyvtkChart_ClassNew
extern "C" { PyObject *PyvtkChart_ClassNew(); }
#define DECLARED_PyvtkChart_ClassNew
#endif

static PyObject *
PyvtkChartBox_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartBox::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartBox::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartBox *tempr = vtkChartBox::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartBox *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartBox::NewInstance());

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
PyvtkChartBox_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkChartBox::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkChartBox::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartBox::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartBox::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetColumnVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

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
      op->vtkChartBox::SetColumnVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChartBox_SetColumnVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  long long temp0;
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
      op->vtkChartBox::SetColumnVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartBox_SetColumnVisibility_Methods[] = {
  {"SetColumnVisibility", PyvtkChartBox_SetColumnVisibility_s1, METH_VARARGS,
   "@sq"},
  {"SetColumnVisibility", PyvtkChartBox_SetColumnVisibility_s2, METH_VARARGS,
   "@kq"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartBox_SetColumnVisibility(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartBox_SetColumnVisibility_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColumnVisibility");
  return nullptr;
}


static PyObject *
PyvtkChartBox_SetColumnVisibilityAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibilityAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

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
      op->vtkChartBox::SetColumnVisibilityAll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetColumnVisibility_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkChartBox::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkChartBox_GetColumnVisibility_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkChartBox::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChartBox_GetColumnVisibility_Methods[] = {
  {"GetColumnVisibility", PyvtkChartBox_GetColumnVisibility_s1, METH_VARARGS,
   "@s"},
  {"GetColumnVisibility", PyvtkChartBox_GetColumnVisibility_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartBox_GetColumnVisibility(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartBox_GetColumnVisibility_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetColumnVisibility");
  return nullptr;
}


static PyObject *
PyvtkChartBox_GetColumnId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetColumnId(temp0) :
      op->vtkChartBox::GetColumnId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVisibleColumns() :
      op->vtkChartBox::GetVisibleColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetSelectedColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedColumn() :
      op->vtkChartBox::GetSelectedColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetSelectedColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedColumn(temp0);
    }
    else
    {
      op->vtkChartBox::SetSelectedColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChartBox::GetPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChartBox::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetYAxis() :
      op->vtkChartBox::GetYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetXPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetXPosition(temp0) :
      op->vtkChartBox::GetXPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetNumberOfVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfVisibleColumns() :
      op->vtkChartBox::GetNumberOfVisibleColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkPlotBox *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlotBox"))
  {
    if (ap.IsBound())
    {
      op->SetPlot(temp0);
    }
    else
    {
      op->vtkChartBox::SetPlot(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkChartBox::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkChartBox::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkChartBox::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkChartBox::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

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
      op->vtkChartBox::SetTooltip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkChartBox::GetTooltip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetTooltipInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

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
      op->vtkChartBox::SetTooltipInfo(*temp0, *temp1, temp2, temp3, temp4);
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
PyvtkChartBox_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
  {
    if (ap.IsBound())
    {
      op->SetSize(*temp0);
    }
    else
    {
      op->vtkChartBox::SetSize(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartBox_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(temp0, temp1);
    }
    else
    {
      op->vtkChartBox::SetGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartBox_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartBox *op = static_cast<vtkChartBox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkChartBox::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartBox_Methods[] = {
  {"IsTypeOf", PyvtkChartBox_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartBox_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartBox_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkChartBox\nC++: static vtkChartBox *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartBox_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkChartBox\nC++: vtkChartBox *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkChartBox_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkChartBox_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkChartBox_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering. The scene should take care of calling this on all\nitems before their Paint function is invoked.\n"},
  {"Paint", PyvtkChartBox_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {"SetColumnVisibility", PyvtkChartBox_SetColumnVisibility, METH_VARARGS,
   "SetColumnVisibility(self, name:str, visible:bool) -> None\nC++: void SetColumnVisibility(const vtkStdString &name,\n    bool visible)\nSetColumnVisibility(self, column:int, visible:bool) -> None\nC++: void SetColumnVisibility(vtkIdType column, bool visible)\n\nSet the visibility of the specified column.\n"},
  {"SetColumnVisibilityAll", PyvtkChartBox_SetColumnVisibilityAll, METH_VARARGS,
   "SetColumnVisibilityAll(self, visible:bool) -> None\nC++: void SetColumnVisibilityAll(bool visible)\n\nSet the visibility of all columns (true will make them all\nvisible, false will remove all visible columns).\n"},
  {"GetColumnVisibility", PyvtkChartBox_GetColumnVisibility, METH_VARARGS,
   "GetColumnVisibility(self, name:str) -> bool\nC++: bool GetColumnVisibility(const vtkStdString &name)\nGetColumnVisibility(self, column:int) -> bool\nC++: bool GetColumnVisibility(vtkIdType column)\n\nGet the visibility of the specified column.\n"},
  {"GetColumnId", PyvtkChartBox_GetColumnId, METH_VARARGS,
   "GetColumnId(self, name:str) -> int\nC++: vtkIdType GetColumnId(const vtkStdString &name)\n\nGet the input table column id of a column by its name.\n"},
  {"GetVisibleColumns", PyvtkChartBox_GetVisibleColumns, METH_VARARGS,
   "GetVisibleColumns(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetVisibleColumns()\n\nGet a list of the columns, and the order in which they are\ndisplayed.\n"},
  {"GetSelectedColumn", PyvtkChartBox_GetSelectedColumn, METH_VARARGS,
   "GetSelectedColumn(self) -> int\nC++: virtual int GetSelectedColumn()\n\n"},
  {"SetSelectedColumn", PyvtkChartBox_SetSelectedColumn, METH_VARARGS,
   "SetSelectedColumn(self, _arg:int) -> None\nC++: virtual void SetSelectedColumn(int _arg)\n\n"},
  {"GetPlot", PyvtkChartBox_GetPlot, METH_VARARGS,
   "GetPlot(self, index:int) -> vtkPlot\nC++: vtkPlot *GetPlot(vtkIdType index) override;\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {"GetNumberOfPlots", PyvtkChartBox_GetNumberOfPlots, METH_VARARGS,
   "GetNumberOfPlots(self) -> int\nC++: vtkIdType GetNumberOfPlots() override;\n\nGet the number of plots the chart contains.\n"},
  {"GetYAxis", PyvtkChartBox_GetYAxis, METH_VARARGS,
   "GetYAxis(self) -> vtkAxis\nC++: virtual vtkAxis *GetYAxis()\n\nGet the chart Y axis\n"},
  {"GetXPosition", PyvtkChartBox_GetXPosition, METH_VARARGS,
   "GetXPosition(self, index:int) -> float\nC++: virtual float GetXPosition(int index)\n\nGet the column X position by index in the visible set.\n"},
  {"GetNumberOfVisibleColumns", PyvtkChartBox_GetNumberOfVisibleColumns, METH_VARARGS,
   "GetNumberOfVisibleColumns(self) -> int\nC++: virtual vtkIdType GetNumberOfVisibleColumns()\n\nGet the number of visible box plots in the current chart.\n"},
  {"SetPlot", PyvtkChartBox_SetPlot, METH_VARARGS,
   "SetPlot(self, plot:vtkPlotBox) -> None\nC++: virtual void SetPlot(vtkPlotBox *plot)\n\nSet plot to use for the chart. Since this type of chart can only\ncontain one plot, this will replace the previous plot.\n"},
  {"Hit", PyvtkChartBox_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseMoveEvent", PyvtkChartBox_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseButtonPressEvent", PyvtkChartBox_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkChartBox_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"SetTooltip", PyvtkChartBox_SetTooltip, METH_VARARGS,
   "SetTooltip(self, tooltip:vtkTooltipItem) -> None\nC++: virtual void SetTooltip(vtkTooltipItem *tooltip)\n\nSet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {"GetTooltip", PyvtkChartBox_GetTooltip, METH_VARARGS,
   "GetTooltip(self) -> vtkTooltipItem\nC++: virtual vtkTooltipItem *GetTooltip()\n\nGet the vtkTooltipItem object that will be displayed by the\nchart.\n"},
  {"SetTooltipInfo", PyvtkChartBox_SetTooltipInfo, METH_VARARGS,
   "SetTooltipInfo(self, __a:vtkContextMouseEvent, __b:vtkVector2d,\n    __c:int, __d:vtkPlot, segmentIndex:int=-1) -> None\nC++: virtual void SetTooltipInfo(const vtkContextMouseEvent &,\n    const vtkVector2d &, vtkIdType, vtkPlot *,\n    vtkIdType segmentIndex=-1)\n\nSet the information passed to the tooltip.\n"},
  {"SetSize", PyvtkChartBox_SetSize, METH_VARARGS,
   "SetSize(self, rect:vtkRectf) -> None\nC++: void SetSize(const vtkRectf &rect) override;\n\nCalls superclass implementation and sets GeometryValid to False,\ncausing the chart's geometry to be updated on the next Paint\ncall.\n"},
  {"SetGeometry", PyvtkChartBox_SetGeometry, METH_VARARGS,
   "SetGeometry(self, arg1:int, arg2:int) -> None\nC++: void SetGeometry(int arg1, int arg2) override;\n\nCalls superclass implementation and sets GeometryValid to False,\ncausing the chart's geometry to be updated on the next Paint\ncall.\n"},
  {"SetLayoutStrategy", PyvtkChartBox_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, strategy:int) -> None\nC++: void SetLayoutStrategy(int strategy) override;\n\nCalls superclass implementation and sets GeometryValid to False,\ncausing the chart's geometry to be updated on the next Paint\ncall.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkChartBox_Doc =
  "vtkChartBox - Factory class for drawing box plot charts\n\n"
  "Superclass: vtkChart\n\n"
  "This defines the interface for a box plot chart.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartBox_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartBox", // tp_name
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
  PyvtkChartBox_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartBox_StaticNew()
{
  return vtkChartBox::New();
}

PyObject *PyvtkChartBox_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkChartBox_Type, PyvtkChartBox_Methods,
    "vtkChartBox",
 &PyvtkChartBox_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkChart_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkChartBoxData_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkChartBoxData_vtkChartBoxData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartBoxData");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkChartBoxData *op = new vtkChartBoxData();

    result = PyVTKSpecialObject_New("vtkChartBoxData", op);
  }

  return result;
}

static PyObject *
PyvtkChartBoxData_vtkChartBoxData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkChartBoxData");

  vtkChartBoxData *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkChartBoxData"))
  {
    vtkChartBoxData *op = new vtkChartBoxData(*temp0);

    result = PyVTKSpecialObject_New("vtkChartBoxData", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkChartBoxData_vtkChartBoxData_Methods[] = {
  {"vtkChartBoxData", PyvtkChartBoxData_vtkChartBoxData_s2, METH_VARARGS,
   "@W vtkChartBoxData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartBoxData_vtkChartBoxData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkChartBoxData_vtkChartBoxData_s1(self, args);
    case 1:
      return PyvtkChartBoxData_vtkChartBoxData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkChartBoxData");
  return nullptr;
}


static const char *PyvtkChartBoxData_Doc =

  "vtkChartBoxData() -> vtkChartBoxData\nC++: vtkChartBoxData()\nvtkChartBoxData(__a:vtkChartBoxData) -> vtkChartBoxData\nC++: vtkChartBoxData(const &vtkChartBoxData)\n""\n"
  "vtkChartBoxData - Small struct used by InvokeEvent to send some\ninformation about the point that was clicked on.\n\n"
  "This is an experimental part of the API, subject to change.\n\n";

static PyObject *
PyvtkChartBoxData_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkChartBoxData_vtkChartBoxData(nullptr, args);
}

static void PyvtkChartBoxData_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkChartBoxData *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkChartBoxData_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartBoxData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartBoxData", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkChartBoxData_Delete, // tp_dealloc
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
  PyvtkChartBoxData_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkChartBoxData_Doc, // tp_doc
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
  PyvtkChartBoxData_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkChartBoxData_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkChartBoxData(*static_cast<const vtkChartBoxData*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkChartBoxData_TypeNew
extern "C" { PyObject *PyvtkChartBoxData_TypeNew(); }
#define DECLARED_PyvtkChartBoxData_TypeNew
#endif

PyObject *PyvtkChartBoxData_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkChartBoxData_Type,
    PyvtkChartBoxData_Methods,
    PyvtkChartBoxData_vtkChartBoxData_Methods,
    &PyvtkChartBoxData_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartBox(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartBox_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartBox", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkChartBoxData_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkChartBoxData", o) != 0)
  {
    Py_DECREF(o);
  }

}

