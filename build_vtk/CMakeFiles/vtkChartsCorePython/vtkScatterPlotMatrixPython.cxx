// python wrapper for vtkScatterPlotMatrix
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkColor.h"
#include "vtkScatterPlotMatrix.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScatterPlotMatrix(PyObject *dict); }
extern "C" { PyObject *PyvtkScatterPlotMatrix_ClassNew(); }

#ifndef DECLARED_PyvtkChartMatrix_ClassNew
extern "C" { PyObject *PyvtkChartMatrix_ClassNew(); }
#define DECLARED_PyvtkChartMatrix_ClassNew
#endif

static PyObject *
PyvtkScatterPlotMatrix_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScatterPlotMatrix::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScatterPlotMatrix::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScatterPlotMatrix *tempr = vtkScatterPlotMatrix::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScatterPlotMatrix *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScatterPlotMatrix::NewInstance());

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
PyvtkScatterPlotMatrix_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkScatterPlotMatrix::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkScatterPlotMatrix::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkScatterPlotMatrix::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkScatterPlotMatrix::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextScene *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextScene"))
  {
    if (ap.IsBound())
    {
      op->SetScene(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetScene(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetActivePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetActivePlot(*temp0) :
      op->vtkScatterPlotMatrix::SetActivePlot(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    if (ap.IsBound())
    {
      op->SetSize(*temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetSize(*temp0);
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
PyvtkScatterPlotMatrix_GetActivePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetActivePlot() :
      op->vtkScatterPlotMatrix::GetActivePlot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->GetAnnotationLink() :
      op->vtkScatterPlotMatrix::GetAnnotationLink());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetColumnVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_InsertVisibleColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVisibleColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStdString temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->InsertVisibleColumn(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::InsertVisibleColumn(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetColumnVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColumnVisibility(temp0) :
      op->vtkScatterPlotMatrix::GetColumnVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetColumnVisibilityAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColumnVisibilityAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetColumnVisibilityAll(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetVisibleColumns() :
      op->vtkScatterPlotMatrix::GetVisibleColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetVisibleColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibleColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetVisibleColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfBins(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetNumberOfBins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetNumberOfBins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBins() :
      op->vtkScatterPlotMatrix::GetNumberOfBins());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetPlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetPlotColor(temp0, *temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetPlotColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetPlotMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotMarkerStyle(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetPlotMarkerStyle(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetPlotMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotMarkerSize(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetPlotMarkerSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkScatterPlotMatrix::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkScatterPlotMatrix::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkScatterPlotMatrix::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkScatterPlotMatrix::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetPlotType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotType(*temp0) :
      op->vtkScatterPlotMatrix::GetPlotType(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkScatterPlotMatrix_GetPlotType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotType(temp0, temp1) :
      op->vtkScatterPlotMatrix::GetPlotType(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkScatterPlotMatrix_GetPlotType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkScatterPlotMatrix_GetPlotType_s1(self, args);
    case 2:
      return PyvtkScatterPlotMatrix_GetPlotType_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPlotType");
  return nullptr;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStdString temp0;
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
      op->vtkScatterPlotMatrix::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkScatterPlotMatrix::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleProperties(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetTitleProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleProperties() :
      op->vtkScatterPlotMatrix::GetTitleProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGridVisibility(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetGridVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetGridVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGridVisibility(temp0) :
      op->vtkScatterPlotMatrix::GetGridVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0, *temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetBackgroundColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetBackgroundColor(temp0) :
      op->vtkScatterPlotMatrix::GetBackgroundColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetAxisColor(temp0, *temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetAxisColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetAxisColor(temp0) :
      op->vtkScatterPlotMatrix::GetAxisColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkColor4ub *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetGridColor(temp0, *temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetGridColor(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetGridColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetGridColor(temp0) :
      op->vtkScatterPlotMatrix::GetGridColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelVisibility(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetAxisLabelVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAxisLabelVisibility(temp0) :
      op->vtkScatterPlotMatrix::GetAxisLabelVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  vtkTextProperty *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelProperties(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetAxisLabelProperties(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisLabelProperties(temp0) :
      op->vtkScatterPlotMatrix::GetAxisLabelProperties(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelNotation(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetAxisLabelNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisLabelNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelNotation(temp0) :
      op->vtkScatterPlotMatrix::GetAxisLabelNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelPrecision(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetAxisLabelPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAxisLabelPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisLabelPrecision(temp0) :
      op->vtkScatterPlotMatrix::GetAxisLabelPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTooltipNotation(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetTooltipNotation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTooltipPrecision(temp0, temp1);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetTooltipPrecision(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTooltipNotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipNotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTooltipNotation(temp0) :
      op->vtkScatterPlotMatrix::GetTooltipNotation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTooltipPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltipPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTooltipPrecision(temp0) :
      op->vtkScatterPlotMatrix::GetTooltipPrecision(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

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
      op->vtkScatterPlotMatrix::SetTooltip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetTooltip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTooltip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTooltipItem *tempr = (ap.IsBound() ?
      op->GetTooltip() :
      op->vtkScatterPlotMatrix::GetTooltip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetIndexedLabels(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetIndexedLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetIndexedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetIndexedLabels() :
      op->vtkScatterPlotMatrix::GetIndexedLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetScatterPlotSelectedRowColumnColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotSelectedRowColumnColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkColor4ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotSelectedRowColumnColor(*temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetScatterPlotSelectedRowColumnColor(*temp0);
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
PyvtkScatterPlotMatrix_GetScatterPlotSelectedRowColumnColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatterPlotSelectedRowColumnColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetScatterPlotSelectedRowColumnColor() :
      op->vtkScatterPlotMatrix::GetScatterPlotSelectedRowColumnColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetScatterPlotSelectedActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScatterPlotSelectedActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkColor4ub *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkColor4ub"))
  {
    if (ap.IsBound())
    {
      op->SetScatterPlotSelectedActiveColor(*temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetScatterPlotSelectedActiveColor(*temp0);
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
PyvtkScatterPlotMatrix_GetScatterPlotSelectedActiveColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScatterPlotSelectedActiveColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkColor4ub tempr = (ap.IsBound() ?
      op->GetScatterPlotSelectedActiveColor() :
      op->vtkScatterPlotMatrix::GetScatterPlotSelectedActiveColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor4ub");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_UpdateSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateSettings();
    }
    else
    {
      op->vtkScatterPlotMatrix::UpdateSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_UpdateChartSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateChartSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateChartSettings(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::UpdateChartSettings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMode(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetSelectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkScatterPlotMatrix::GetSelectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetColumnName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColumnName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColumnName(temp0) :
      op->vtkScatterPlotMatrix::GetColumnName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetRowName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetRowName(temp0) :
      op->vtkScatterPlotMatrix::GetRowName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_SetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfFrames(temp0);
    }
    else
    {
      op->vtkScatterPlotMatrix::SetNumberOfFrames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetNumberOfFrames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFrames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFrames() :
      op->vtkScatterPlotMatrix::GetNumberOfFrames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_ClearAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAnimationPath();
    }
    else
    {
      op->vtkScatterPlotMatrix::ClearAnimationPath();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_AddAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddAnimationPath(*temp0) :
      op->vtkScatterPlotMatrix::AddAnimationPath(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetNumberOfAnimationPathElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAnimationPathElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfAnimationPathElements() :
      op->vtkScatterPlotMatrix::GetNumberOfAnimationPathElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetAnimationPathElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimationPathElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetAnimationPathElement(temp0) :
      op->vtkScatterPlotMatrix::GetAnimationPathElement(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_BeginAnimationPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginAnimationPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    bool tempr = (ap.IsBound() ?
      op->BeginAnimationPath(temp0) :
      op->vtkScatterPlotMatrix::BeginAnimationPath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_AdvanceAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdvanceAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdvanceAnimation();
    }
    else
    {
      op->vtkScatterPlotMatrix::AdvanceAnimation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScatterPlotMatrix_GetMainChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMainChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScatterPlotMatrix *op = static_cast<vtkScatterPlotMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetMainChart() :
      op->vtkScatterPlotMatrix::GetMainChart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkScatterPlotMatrix_Methods[] = {
  {"IsTypeOf", PyvtkScatterPlotMatrix_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScatterPlotMatrix_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScatterPlotMatrix_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkScatterPlotMatrix\nC++: static vtkScatterPlotMatrix *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScatterPlotMatrix_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkScatterPlotMatrix\nC++: vtkScatterPlotMatrix *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkScatterPlotMatrix_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkScatterPlotMatrix_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkScatterPlotMatrix_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering.\n"},
  {"Paint", PyvtkScatterPlotMatrix_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart matrix.\n"},
  {"SetScene", PyvtkScatterPlotMatrix_SetScene, METH_VARARGS,
   "SetScene(self, scene:vtkContextScene) -> None\nC++: void SetScene(vtkContextScene *scene) override;\n\nSet the vtkContextScene for the item, always set for an item in a\nscene.\n"},
  {"SetActivePlot", PyvtkScatterPlotMatrix_SetActivePlot, METH_VARARGS,
   "SetActivePlot(self, position:vtkVector2i) -> bool\nC++: virtual bool SetActivePlot(const vtkVector2i &position)\n\nSet the active plot, the one that will be displayed in the\ntop-right. This defaults to (0, n-2), the plot below the first\nhistogram on the left.\n\\return false is the position specified is not valid.\n"},
  {"SetSize", PyvtkScatterPlotMatrix_SetSize, METH_VARARGS,
   "SetSize(self, size:vtkVector2i) -> None\nC++: void SetSize(const vtkVector2i &size) override;\n\nReset ActivePlotSet flag and call superclass method\n"},
  {"GetActivePlot", PyvtkScatterPlotMatrix_GetActivePlot, METH_VARARGS,
   "GetActivePlot(self) -> vtkVector2i\nC++: virtual vtkVector2i GetActivePlot()\n\nGet the position of the active plot.\n"},
  {"GetAnnotationLink", PyvtkScatterPlotMatrix_GetAnnotationLink, METH_VARARGS,
   "GetAnnotationLink(self) -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nGet the AnnotationLink for the scatter plot matrix, this gives\nyou access to the currently selected points in the scatter plot\nmatrix.\n"},
  {"SetInput", PyvtkScatterPlotMatrix_SetInput, METH_VARARGS,
   "SetInput(self, table:vtkTable) -> None\nC++: virtual void SetInput(vtkTable *table)\n\nSet the input table for the scatter plot matrix. This will cause\nall columns to be plotted against each other - a square scatter\nplot matrix.\n"},
  {"SetColumnVisibility", PyvtkScatterPlotMatrix_SetColumnVisibility, METH_VARARGS,
   "SetColumnVisibility(self, name:str, visible:bool) -> None\nC++: void SetColumnVisibility(const vtkStdString &name,\n    bool visible)\n\nSet the visibility of the specified column.\n"},
  {"InsertVisibleColumn", PyvtkScatterPlotMatrix_InsertVisibleColumn, METH_VARARGS,
   "InsertVisibleColumn(self, name:str, index:int) -> None\nC++: void InsertVisibleColumn(const vtkStdString &name, int index)\n\nInsert the specified column at the index position of the visible\ncolumns.\n"},
  {"GetColumnVisibility", PyvtkScatterPlotMatrix_GetColumnVisibility, METH_VARARGS,
   "GetColumnVisibility(self, name:str) -> bool\nC++: bool GetColumnVisibility(const vtkStdString &name)\n\nGet the visibility of the specified column.\n"},
  {"SetColumnVisibilityAll", PyvtkScatterPlotMatrix_SetColumnVisibilityAll, METH_VARARGS,
   "SetColumnVisibilityAll(self, visible:bool) -> None\nC++: void SetColumnVisibilityAll(bool visible)\n\nSet the visibility of all columns (true will make them all\nvisible, false will remove all visible columns).\n"},
  {"GetVisibleColumns", PyvtkScatterPlotMatrix_GetVisibleColumns, METH_VARARGS,
   "GetVisibleColumns(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetVisibleColumns()\n\nGet a list of the columns, and the order in which they are\ndisplayed.\n"},
  {"SetVisibleColumns", PyvtkScatterPlotMatrix_SetVisibleColumns, METH_VARARGS,
   "SetVisibleColumns(self, visColumns:vtkStringArray) -> None\nC++: virtual void SetVisibleColumns(vtkStringArray *visColumns)\n\nSet the list of visible columns, and the order in which they will\nbe displayed.\n"},
  {"SetNumberOfBins", PyvtkScatterPlotMatrix_SetNumberOfBins, METH_VARARGS,
   "SetNumberOfBins(self, numberOfBins:int) -> None\nC++: virtual void SetNumberOfBins(int numberOfBins)\n\nSet the number of bins in the histograms along the central\ndiagonal of the scatter plot matrix.\n"},
  {"GetNumberOfBins", PyvtkScatterPlotMatrix_GetNumberOfBins, METH_VARARGS,
   "GetNumberOfBins(self) -> int\nC++: virtual int GetNumberOfBins()\n\nGet the number of bins the histograms along the central diagonal\nscatter plot matrix. The default value is 10.\n"},
  {"SetPlotColor", PyvtkScatterPlotMatrix_SetPlotColor, METH_VARARGS,
   "SetPlotColor(self, plotType:int, color:vtkColor4ub) -> None\nC++: void SetPlotColor(int plotType, const vtkColor4ub &color)\n\nSet the color for the specified plotType.\n"},
  {"SetPlotMarkerStyle", PyvtkScatterPlotMatrix_SetPlotMarkerStyle, METH_VARARGS,
   "SetPlotMarkerStyle(self, plotType:int, style:int) -> None\nC++: void SetPlotMarkerStyle(int plotType, int style)\n\nSets the marker style for the specified plotType.\n"},
  {"SetPlotMarkerSize", PyvtkScatterPlotMatrix_SetPlotMarkerSize, METH_VARARGS,
   "SetPlotMarkerSize(self, plotType:int, size:float) -> None\nC++: void SetPlotMarkerSize(int plotType, float size)\n\nSets the marker size for the specified plotType.\n"},
  {"Hit", PyvtkScatterPlotMatrix_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturn true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseMoveEvent", PyvtkScatterPlotMatrix_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseButtonPressEvent", PyvtkScatterPlotMatrix_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event\n"},
  {"MouseButtonReleaseEvent", PyvtkScatterPlotMatrix_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"GetPlotType", PyvtkScatterPlotMatrix_GetPlotType, METH_VARARGS,
   "GetPlotType(self, pos:vtkVector2i) -> int\nC++: int GetPlotType(const vtkVector2i &pos)\nGetPlotType(self, row:int, column:int) -> int\nC++: int GetPlotType(int row, int column)\n\nReturns the type of the plot at the given position. The return\nvalue is one of: SCATTERPLOT, HISTOGRAM, ACTIVEPLOT, or NOPLOT.\n"},
  {"SetTitle", PyvtkScatterPlotMatrix_SetTitle, METH_VARARGS,
   "SetTitle(self, title:str) -> None\nC++: void SetTitle(const vtkStdString &title)\n\nSet/get the scatter plot title.\n"},
  {"GetTitle", PyvtkScatterPlotMatrix_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: vtkStdString GetTitle()\n\n"},
  {"SetTitleProperties", PyvtkScatterPlotMatrix_SetTitleProperties, METH_VARARGS,
   "SetTitleProperties(self, prop:vtkTextProperty) -> None\nC++: void SetTitleProperties(vtkTextProperty *prop)\n\nSet/get the text properties for the chart title, i.e. color,\nfont, size.\n"},
  {"GetTitleProperties", PyvtkScatterPlotMatrix_GetTitleProperties, METH_VARARGS,
   "GetTitleProperties(self) -> vtkTextProperty\nC++: vtkTextProperty *GetTitleProperties()\n\n"},
  {"SetGridVisibility", PyvtkScatterPlotMatrix_SetGridVisibility, METH_VARARGS,
   "SetGridVisibility(self, plotType:int, visible:bool) -> None\nC++: void SetGridVisibility(int plotType, bool visible)\n\nSets whether or not the grid for the given axis is visible given\na plot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetGridVisibility", PyvtkScatterPlotMatrix_GetGridVisibility, METH_VARARGS,
   "GetGridVisibility(self, plotType:int) -> bool\nC++: bool GetGridVisibility(int plotType)\n\n"},
  {"SetBackgroundColor", PyvtkScatterPlotMatrix_SetBackgroundColor, METH_VARARGS,
   "SetBackgroundColor(self, plotType:int, color:vtkColor4ub) -> None\nC++: void SetBackgroundColor(int plotType,\n    const vtkColor4ub &color)\n\nSets the background color for the chart given a plot type, which\nrefers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"GetBackgroundColor", PyvtkScatterPlotMatrix_GetBackgroundColor, METH_VARARGS,
   "GetBackgroundColor(self, plotType:int) -> vtkColor4ub\nC++: vtkColor4ub GetBackgroundColor(int plotType)\n\n"},
  {"SetAxisColor", PyvtkScatterPlotMatrix_SetAxisColor, METH_VARARGS,
   "SetAxisColor(self, plotType:int, color:vtkColor4ub) -> None\nC++: void SetAxisColor(int plotType, const vtkColor4ub &color)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetAxisColor", PyvtkScatterPlotMatrix_GetAxisColor, METH_VARARGS,
   "GetAxisColor(self, plotType:int) -> vtkColor4ub\nC++: vtkColor4ub GetAxisColor(int plotType)\n\n"},
  {"SetGridColor", PyvtkScatterPlotMatrix_SetGridColor, METH_VARARGS,
   "SetGridColor(self, plotType:int, color:vtkColor4ub) -> None\nC++: void SetGridColor(int plotType, const vtkColor4ub &color)\n\nSets the color for the axes given a plot type, which refers to\nvtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetGridColor", PyvtkScatterPlotMatrix_GetGridColor, METH_VARARGS,
   "GetGridColor(self, plotType:int) -> vtkColor4ub\nC++: vtkColor4ub GetGridColor(int plotType)\n\n"},
  {"SetAxisLabelVisibility", PyvtkScatterPlotMatrix_SetAxisLabelVisibility, METH_VARARGS,
   "SetAxisLabelVisibility(self, plotType:int, visible:bool) -> None\nC++: void SetAxisLabelVisibility(int plotType, bool visible)\n\nSets whether or not the labels for the axes are visible, given a\nplot type, which refers to vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetAxisLabelVisibility", PyvtkScatterPlotMatrix_GetAxisLabelVisibility, METH_VARARGS,
   "GetAxisLabelVisibility(self, plotType:int) -> bool\nC++: bool GetAxisLabelVisibility(int plotType)\n\n"},
  {"SetAxisLabelProperties", PyvtkScatterPlotMatrix_SetAxisLabelProperties, METH_VARARGS,
   "SetAxisLabelProperties(self, plotType:int, prop:vtkTextProperty)\n    -> None\nC++: void SetAxisLabelProperties(int plotType,\n    vtkTextProperty *prop)\n\nSet/get the text property for the axis labels of the given plot\ntype, possible types are vtkScatterPlotMatrix::{SCATTERPLOT,\nHISTOGRAM, ACTIVEPLOT}.\n"},
  {"GetAxisLabelProperties", PyvtkScatterPlotMatrix_GetAxisLabelProperties, METH_VARARGS,
   "GetAxisLabelProperties(self, plotType:int) -> vtkTextProperty\nC++: vtkTextProperty *GetAxisLabelProperties(int plotType)\n\n"},
  {"SetAxisLabelNotation", PyvtkScatterPlotMatrix_SetAxisLabelNotation, METH_VARARGS,
   "SetAxisLabelNotation(self, plotType:int, notation:int) -> None\nC++: void SetAxisLabelNotation(int plotType, int notation)\n\nSets the axis label notation for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"GetAxisLabelNotation", PyvtkScatterPlotMatrix_GetAxisLabelNotation, METH_VARARGS,
   "GetAxisLabelNotation(self, plotType:int) -> int\nC++: int GetAxisLabelNotation(int plotType)\n\n"},
  {"SetAxisLabelPrecision", PyvtkScatterPlotMatrix_SetAxisLabelPrecision, METH_VARARGS,
   "SetAxisLabelPrecision(self, plotType:int, precision:int) -> None\nC++: void SetAxisLabelPrecision(int plotType, int precision)\n\nSets the axis label precision for the axes given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"GetAxisLabelPrecision", PyvtkScatterPlotMatrix_GetAxisLabelPrecision, METH_VARARGS,
   "GetAxisLabelPrecision(self, plotType:int) -> int\nC++: int GetAxisLabelPrecision(int plotType)\n\n"},
  {"SetTooltipNotation", PyvtkScatterPlotMatrix_SetTooltipNotation, METH_VARARGS,
   "SetTooltipNotation(self, plotType:int, notation:int) -> None\nC++: void SetTooltipNotation(int plotType, int notation)\n\nSet chart's tooltip notation and precision, given a plot type,\nwhich refers to vtkScatterPlotMatrix::{SCATTERPLOT, HISTOGRAM,\nACTIVEPLOT}.\n"},
  {"SetTooltipPrecision", PyvtkScatterPlotMatrix_SetTooltipPrecision, METH_VARARGS,
   "SetTooltipPrecision(self, plotType:int, precision:int) -> None\nC++: void SetTooltipPrecision(int plotType, int precision)\n\n"},
  {"GetTooltipNotation", PyvtkScatterPlotMatrix_GetTooltipNotation, METH_VARARGS,
   "GetTooltipNotation(self, plotType:int) -> int\nC++: int GetTooltipNotation(int plotType)\n\n"},
  {"GetTooltipPrecision", PyvtkScatterPlotMatrix_GetTooltipPrecision, METH_VARARGS,
   "GetTooltipPrecision(self, plotType:int) -> int\nC++: int GetTooltipPrecision(int plotType)\n\n"},
  {"SetTooltip", PyvtkScatterPlotMatrix_SetTooltip, METH_VARARGS,
   "SetTooltip(self, tooltip:vtkTooltipItem) -> None\nC++: void SetTooltip(vtkTooltipItem *tooltip)\n\nSet the vtkTooltipItem object that will be displayed by the\nactive chart.\n"},
  {"GetTooltip", PyvtkScatterPlotMatrix_GetTooltip, METH_VARARGS,
   "GetTooltip(self) -> vtkTooltipItem\nC++: vtkTooltipItem *GetTooltip()\n\nGet the vtkTooltipItem object that will be displayed by the\nactive chart.\n"},
  {"SetIndexedLabels", PyvtkScatterPlotMatrix_SetIndexedLabels, METH_VARARGS,
   "SetIndexedLabels(self, labels:vtkStringArray) -> None\nC++: void SetIndexedLabels(vtkStringArray *labels)\n\nSet indexed labels array.\n"},
  {"GetIndexedLabels", PyvtkScatterPlotMatrix_GetIndexedLabels, METH_VARARGS,
   "GetIndexedLabels(self) -> vtkStringArray\nC++: vtkStringArray *GetIndexedLabels()\n\nGet the indexed labels array.\n"},
  {"SetScatterPlotSelectedRowColumnColor", PyvtkScatterPlotMatrix_SetScatterPlotSelectedRowColumnColor, METH_VARARGS,
   "SetScatterPlotSelectedRowColumnColor(self, color:vtkColor4ub)\n    -> None\nC++: void SetScatterPlotSelectedRowColumnColor(\n    const vtkColor4ub &color)\n\nSet the scatter plot selected row/column charts' background\ncolor.\n"},
  {"GetScatterPlotSelectedRowColumnColor", PyvtkScatterPlotMatrix_GetScatterPlotSelectedRowColumnColor, METH_VARARGS,
   "GetScatterPlotSelectedRowColumnColor(self) -> vtkColor4ub\nC++: vtkColor4ub GetScatterPlotSelectedRowColumnColor()\n\n"},
  {"SetScatterPlotSelectedActiveColor", PyvtkScatterPlotMatrix_SetScatterPlotSelectedActiveColor, METH_VARARGS,
   "SetScatterPlotSelectedActiveColor(self, color:vtkColor4ub) -> None\nC++: void SetScatterPlotSelectedActiveColor(\n    const vtkColor4ub &color)\n\nSet the scatter plot selected active chart background color.\n"},
  {"GetScatterPlotSelectedActiveColor", PyvtkScatterPlotMatrix_GetScatterPlotSelectedActiveColor, METH_VARARGS,
   "GetScatterPlotSelectedActiveColor(self) -> vtkColor4ub\nC++: vtkColor4ub GetScatterPlotSelectedActiveColor()\n\n"},
  {"UpdateSettings", PyvtkScatterPlotMatrix_UpdateSettings, METH_VARARGS,
   "UpdateSettings(self) -> None\nC++: void UpdateSettings()\n\nConvenient method to update all the chart settings\n"},
  {"UpdateChartSettings", PyvtkScatterPlotMatrix_UpdateChartSettings, METH_VARARGS,
   "UpdateChartSettings(self, plotType:int) -> None\nC++: void UpdateChartSettings(int plotType)\n\nUpdate charts based on settings given the plot type\n"},
  {"SetSelectionMode", PyvtkScatterPlotMatrix_SetSelectionMode, METH_VARARGS,
   "SetSelectionMode(self, __a:int) -> None\nC++: virtual void SetSelectionMode(int)\n\nSet/get the Selection Mode that will be used by the chart while\ndoing selection. The only valid enums are\nvtkContextScene::SELECTION_NONE, SELECTION_DEFAULT,\nSELECTION_ADDITION, SELECTION_SUBTRACTION, SELECTION_TOGGLE\n"},
  {"GetSelectionMode", PyvtkScatterPlotMatrix_GetSelectionMode, METH_VARARGS,
   "GetSelectionMode(self) -> int\nC++: virtual int GetSelectionMode()\n\n"},
  {"GetColumnName", PyvtkScatterPlotMatrix_GetColumnName, METH_VARARGS,
   "GetColumnName(self, column:int) -> str\nC++: vtkStdString GetColumnName(int column)\n\nGet the column name for the supplied index.\n"},
  {"GetRowName", PyvtkScatterPlotMatrix_GetRowName, METH_VARARGS,
   "GetRowName(self, row:int) -> str\nC++: vtkStdString GetRowName(int row)\n\nGet the column name for the supplied index.\n"},
  {"SetNumberOfFrames", PyvtkScatterPlotMatrix_SetNumberOfFrames, METH_VARARGS,
   "SetNumberOfFrames(self, frames:int) -> None\nC++: void SetNumberOfFrames(int frames)\n\nSet the number of animation frames in each transition. Default is\n25, and 0 means to animations between axes.\n"},
  {"GetNumberOfFrames", PyvtkScatterPlotMatrix_GetNumberOfFrames, METH_VARARGS,
   "GetNumberOfFrames(self) -> int\nC++: int GetNumberOfFrames()\n\nGet the number of animation frames in each transition. Default is\n25, and 0 means to animations between axes.\n"},
  {"ClearAnimationPath", PyvtkScatterPlotMatrix_ClearAnimationPath, METH_VARARGS,
   "ClearAnimationPath(self) -> None\nC++: void ClearAnimationPath()\n\nClear the animation path.\n"},
  {"AddAnimationPath", PyvtkScatterPlotMatrix_AddAnimationPath, METH_VARARGS,
   "AddAnimationPath(self, move:vtkVector2i) -> bool\nC++: bool AddAnimationPath(const vtkVector2i &move)\n\nAdd a move to the animation path. Note that a move can only\nchange i or j, not both. If the proposed move does not satisfy\nthose criteria it will be rejected and the animation path will\nnot be extended.\n"},
  {"GetNumberOfAnimationPathElements", PyvtkScatterPlotMatrix_GetNumberOfAnimationPathElements, METH_VARARGS,
   "GetNumberOfAnimationPathElements(self) -> int\nC++: vtkIdType GetNumberOfAnimationPathElements()\n\nGet the number of elements (transitions) in the animation path.\n"},
  {"GetAnimationPathElement", PyvtkScatterPlotMatrix_GetAnimationPathElement, METH_VARARGS,
   "GetAnimationPathElement(self, i:int) -> vtkVector2i\nC++: vtkVector2i GetAnimationPathElement(vtkIdType i)\n\nGet the element specified from the animation path.\n"},
  {"BeginAnimationPath", PyvtkScatterPlotMatrix_BeginAnimationPath, METH_VARARGS,
   "BeginAnimationPath(self, interactor:vtkRenderWindowInteractor)\n    -> bool\nC++: bool BeginAnimationPath(\n    vtkRenderWindowInteractor *interactor)\n\nTrigger the animation of the scatter plot matrix to begin.\n"},
  {"AdvanceAnimation", PyvtkScatterPlotMatrix_AdvanceAnimation, METH_VARARGS,
   "AdvanceAnimation(self) -> None\nC++: virtual void AdvanceAnimation()\n\nAdvance the animation in response to the timer events. This is\npublic to allow the animation to be manually advanced when timers\nare not a\n"},
  {"GetMainChart", PyvtkScatterPlotMatrix_GetMainChart, METH_VARARGS,
   "GetMainChart(self) -> vtkChart\nC++: virtual vtkChart *GetMainChart()\n\nGet the main plot (the one in the top-right of the matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkScatterPlotMatrix_Doc =
  "vtkScatterPlotMatrix - container for a matrix of charts.\n\n"
  "Superclass: vtkChartMatrix\n\n"
  "This class contains a matrix of charts. These charts will be of type\n"
  "vtkChartXY by default, but this can be overridden. The class will\n"
  "manage their layout and object lifetime.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkScatterPlotMatrix_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkScatterPlotMatrix", // tp_name
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
  PyvtkScatterPlotMatrix_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScatterPlotMatrix_StaticNew()
{
  return vtkScatterPlotMatrix::New();
}

PyObject *PyvtkScatterPlotMatrix_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkScatterPlotMatrix_Type, PyvtkScatterPlotMatrix_Methods,
    "vtkScatterPlotMatrix",
 &PyvtkScatterPlotMatrix_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkChartMatrix_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "SCATTERPLOT", vtkScatterPlotMatrix::SCATTERPLOT },
        { "HISTOGRAM", vtkScatterPlotMatrix::HISTOGRAM },
        { "ACTIVEPLOT", vtkScatterPlotMatrix::ACTIVEPLOT },
        { "NOPLOT", vtkScatterPlotMatrix::NOPLOT },
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

void PyVTKAddFile_vtkScatterPlotMatrix(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScatterPlotMatrix_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScatterPlotMatrix", o) != 0)
  {
    Py_DECREF(o);
  }

}

