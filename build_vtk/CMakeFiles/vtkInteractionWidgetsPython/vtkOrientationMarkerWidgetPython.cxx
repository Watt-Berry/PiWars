// python wrapper for vtkOrientationMarkerWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOrientationMarkerWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOrientationMarkerWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkOrientationMarkerWidget_ClassNew(); }


static PyObject *
PyvtkOrientationMarkerWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOrientationMarkerWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOrientationMarkerWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOrientationMarkerWidget *tempr = vtkOrientationMarkerWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOrientationMarkerWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOrientationMarkerWidget::NewInstance());

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
PyvtkOrientationMarkerWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOrientationMarkerWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOrientationMarkerWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetOrientationMarker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationMarker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->SetOrientationMarker(temp0);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetOrientationMarker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetOrientationMarker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationMarker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProp *tempr = (ap.IsBound() ?
      op->GetOrientationMarker() :
      op->vtkOrientationMarkerWidget::GetOrientationMarker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_ExecuteCameraUpdateEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteCameraUpdateEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  vtkObject *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ExecuteCameraUpdateEvent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOrientationMarkerWidget::ExecuteCameraUpdateEvent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractive(temp0);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetInteractive(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetInteractive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteractive() :
      op->vtkOrientationMarkerWidget::GetInteractive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_InteractiveOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveOn();
    }
    else
    {
      op->vtkOrientationMarkerWidget::InteractiveOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_InteractiveOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractiveOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractiveOff();
    }
    else
    {
      op->vtkOrientationMarkerWidget::InteractiveOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

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
      op->SetOutlineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetOutlineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutlineColor() :
      op->vtkOrientationMarkerWidget::GetOutlineColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetViewport_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetViewport(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrientationMarkerWidget_SetViewport_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOrientationMarkerWidget_SetViewport(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkOrientationMarkerWidget_SetViewport_s1(self, args);
    case 1:
      return PyvtkOrientationMarkerWidget_SetViewport_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetViewport");
  return nullptr;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkOrientationMarkerWidget::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkOrientationMarkerWidget::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkOrientationMarkerWidget::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkOrientationMarkerWidget::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZoom(temp0);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetZoom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetZoomMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZoomMinValue() :
      op->vtkOrientationMarkerWidget::GetZoomMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetZoomMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoomMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZoomMaxValue() :
      op->vtkOrientationMarkerWidget::GetZoomMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetZoom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZoom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZoom() :
      op->vtkOrientationMarkerWidget::GetZoom());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkOrientationMarkerWidget::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_EndInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EndInteraction();
    }
    else
    {
      op->vtkOrientationMarkerWidget::EndInteraction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetShouldConstrainSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShouldConstrainSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShouldConstrainSize(temp0);
    }
    else
    {
      op->vtkOrientationMarkerWidget::SetShouldConstrainSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetShouldConstrainSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShouldConstrainSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShouldConstrainSize() :
      op->vtkOrientationMarkerWidget::GetShouldConstrainSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_SetSizeConstraintDimensionSizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeConstraintDimensionSizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetSizeConstraintDimensionSizes(temp0, temp1) :
      op->vtkOrientationMarkerWidget::SetSizeConstraintDimensionSizes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetMinDimensionSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinDimensionSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinDimensionSize() :
      op->vtkOrientationMarkerWidget::GetMinDimensionSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOrientationMarkerWidget_GetMaxDimensionSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDimensionSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOrientationMarkerWidget *op = static_cast<vtkOrientationMarkerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxDimensionSize() :
      op->vtkOrientationMarkerWidget::GetMaxDimensionSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOrientationMarkerWidget_Methods[] = {
  {"IsTypeOf", PyvtkOrientationMarkerWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOrientationMarkerWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOrientationMarkerWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOrientationMarkerWidget\nC++: static vtkOrientationMarkerWidget *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOrientationMarkerWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOrientationMarkerWidget\nC++: vtkOrientationMarkerWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOrientationMarkerWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOrientationMarkerWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOrientationMarker", PyvtkOrientationMarkerWidget_SetOrientationMarker, METH_VARARGS,
   "SetOrientationMarker(self, prop:vtkProp) -> None\nC++: virtual void SetOrientationMarker(vtkProp *prop)\n\nSet/get the orientation marker to be displayed in this widget.\n"},
  {"GetOrientationMarker", PyvtkOrientationMarkerWidget_GetOrientationMarker, METH_VARARGS,
   "GetOrientationMarker(self) -> vtkProp\nC++: virtual vtkProp *GetOrientationMarker()\n\n"},
  {"SetEnabled", PyvtkOrientationMarkerWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nEnable/disable the widget. Default is 0 (disabled).\n"},
  {"ExecuteCameraUpdateEvent", PyvtkOrientationMarkerWidget_ExecuteCameraUpdateEvent, METH_VARARGS,
   "ExecuteCameraUpdateEvent(self, o:vtkObject, event:int,\n    calldata:Pointer) -> None\nC++: void ExecuteCameraUpdateEvent(vtkObject *o,\n    unsigned long event, void *calldata)\n\nCallback to keep the camera for the orientation marker up to date\nwith the camera in the parent renderer.\n"},
  {"SetInteractive", PyvtkOrientationMarkerWidget_SetInteractive, METH_VARARGS,
   "SetInteractive(self, interact:int) -> None\nC++: void SetInteractive(vtkTypeBool interact)\n\nSet/get whether to allow this widget to be interactively\nmoved/scaled. Default is On.\n"},
  {"GetInteractive", PyvtkOrientationMarkerWidget_GetInteractive, METH_VARARGS,
   "GetInteractive(self) -> int\nC++: virtual vtkTypeBool GetInteractive()\n\n"},
  {"InteractiveOn", PyvtkOrientationMarkerWidget_InteractiveOn, METH_VARARGS,
   "InteractiveOn(self) -> None\nC++: virtual void InteractiveOn()\n\n"},
  {"InteractiveOff", PyvtkOrientationMarkerWidget_InteractiveOff, METH_VARARGS,
   "InteractiveOff(self) -> None\nC++: virtual void InteractiveOff()\n\n"},
  {"SetOutlineColor", PyvtkOrientationMarkerWidget_SetOutlineColor, METH_VARARGS,
   "SetOutlineColor(self, r:float, g:float, b:float) -> None\nC++: void SetOutlineColor(double r, double g, double b)\n\nSet/get the color of the outline of this widget.  The outline is\nvisible when (in interactive mode) the cursor is over this\nwidget. Default is white (1,1,1).\n"},
  {"GetOutlineColor", PyvtkOrientationMarkerWidget_GetOutlineColor, METH_VARARGS,
   "GetOutlineColor(self) -> (float, float, float)\nC++: double *GetOutlineColor()\n\n"},
  {"SetViewport", PyvtkOrientationMarkerWidget_SetViewport, METH_VARARGS,
   "SetViewport(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetViewport(double _arg1, double _arg2,\n    double _arg3, double _arg4)\nSetViewport(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetViewport(const double _arg[4])\n\nSet/get the viewport to position/size this widget. Coordinates\nare expressed as (xmin,ymin,xmax,ymax), where each coordinate is\n0 <= coordinate <= 1.0. Default is bottom left corner\n(0,0,0.2,0.2). Note that this viewport is scaled with respect to\nthe viewport of the current renderer i.e. if the viewport of the\ncurrent renderer is (0.5, 0.5, 0.75, 0.75) and Viewport is set to\n(0, 0, 1, 1), the orientation marker will be confined to a\nviewport of (0.5, 0.5, 0.75, 0.75) in the render window.\n\\sa SetCurrentRenderer()\n"},
  {"GetViewport", PyvtkOrientationMarkerWidget_GetViewport, METH_VARARGS,
   "GetViewport(self) -> (float, float, float, float)\nC++: virtual double *GetViewport()\n\n"},
  {"SetTolerance", PyvtkOrientationMarkerWidget_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:int) -> None\nC++: virtual void SetTolerance(int _arg)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered to be on the widget, or on a\nwidget feature (e.g., a corner point or edge).\n"},
  {"GetToleranceMinValue", PyvtkOrientationMarkerWidget_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> int\nC++: virtual int GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkOrientationMarkerWidget_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> int\nC++: virtual int GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkOrientationMarkerWidget_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> int\nC++: virtual int GetTolerance()\n\n"},
  {"SetZoom", PyvtkOrientationMarkerWidget_SetZoom, METH_VARARGS,
   "SetZoom(self, _arg:float) -> None\nC++: virtual void SetZoom(double _arg)\n\nThe zoom factor to modify the size of the marker within the\nwidget. Default is 1.0.\n"},
  {"GetZoomMinValue", PyvtkOrientationMarkerWidget_GetZoomMinValue, METH_VARARGS,
   "GetZoomMinValue(self) -> float\nC++: virtual double GetZoomMinValue()\n\n"},
  {"GetZoomMaxValue", PyvtkOrientationMarkerWidget_GetZoomMaxValue, METH_VARARGS,
   "GetZoomMaxValue(self) -> float\nC++: virtual double GetZoomMaxValue()\n\n"},
  {"GetZoom", PyvtkOrientationMarkerWidget_GetZoom, METH_VARARGS,
   "GetZoom(self) -> float\nC++: virtual double GetZoom()\n\n"},
  {"Modified", PyvtkOrientationMarkerWidget_Modified, METH_VARARGS,
   "Modified(self) -> None\nC++: void Modified() override;\n\nNeed to reimplement this->Modified() because of the\nvtkSetVector4Macro/vtkGetVector4Macro use\n"},
  {"EndInteraction", PyvtkOrientationMarkerWidget_EndInteraction, METH_VARARGS,
   "EndInteraction(self) -> None\nC++: void EndInteraction() override;\n\nEnds any in progress interaction and resets border visibility\n"},
  {"SetShouldConstrainSize", PyvtkOrientationMarkerWidget_SetShouldConstrainSize, METH_VARARGS,
   "SetShouldConstrainSize(self, shouldConstrainSize:int) -> None\nC++: void SetShouldConstrainSize(vtkTypeBool shouldConstrainSize)\n\nSet/get whether the widget should constrain the size to be within\nthe min and max limits. Default is off (unconstrained).\n"},
  {"GetShouldConstrainSize", PyvtkOrientationMarkerWidget_GetShouldConstrainSize, METH_VARARGS,
   "GetShouldConstrainSize(self) -> int\nC++: virtual vtkTypeBool GetShouldConstrainSize()\n\n"},
  {"SetSizeConstraintDimensionSizes", PyvtkOrientationMarkerWidget_SetSizeConstraintDimensionSizes, METH_VARARGS,
   "SetSizeConstraintDimensionSizes(self, minDimensionSize:int,\n    maxDimensionSize:int) -> bool\nC++: bool SetSizeConstraintDimensionSizes(int minDimensionSize,\n    int maxDimensionSize)\n\nSets the minimum and maximum dimension (width and height) size\nlimits for the widget. Validates the sizes are within tolerances\nbefore setting; ignoring otherwise. Default is 20, 500. Returns\nwhether the sizes are valid and correctly set (true), or invalid\n(false).\n"},
  {"GetMinDimensionSize", PyvtkOrientationMarkerWidget_GetMinDimensionSize, METH_VARARGS,
   "GetMinDimensionSize(self) -> int\nC++: virtual int GetMinDimensionSize()\n\nReturns the minimum dimension (width and height) size limit in\npixels for the widget.\n"},
  {"GetMaxDimensionSize", PyvtkOrientationMarkerWidget_GetMaxDimensionSize, METH_VARARGS,
   "GetMaxDimensionSize(self) -> int\nC++: virtual int GetMaxDimensionSize()\n\nReturns the maximum dimension (width and height) size limit in\npixels for the widget.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOrientationMarkerWidget_Doc =
  "vtkOrientationMarkerWidget - 2D widget for manipulating a marker prop\n\n"
  "Superclass: vtkInteractorObserver\n\n"
  "This class provides support for interactively manipulating the\n"
  "position, size, and apparent orientation of a prop that represents an\n"
  "orientation marker.  This class works by adding its internal renderer\n"
  "to an external \"parent\" renderer on a different layer.  The input\n"
  "orientation marker is rendered as an overlay on the parent renderer\n"
  "and, thus, appears superposed over all props in the parent's scene. \n"
  "The camera view of the orientation the marker is made to match that\n"
  "of the parent's by means of an observer mechanism, giving the\n"
  "illusion that the orientation of the marker reflects that of the\n"
  "prop(s) in the parent's scene.\n\n"
  "The widget listens to left mouse button and mouse movement events. It\n"
  "will change the cursor shape based on its location. If the cursor is\n"
  "over the overlay renderer, it will change the cursor shape to a\n"
  "SIZEALL shape or to a resize corner shape (e.g., SIZENW) if the\n"
  "cursor is near a corner. If the left mouse button is pressed and held\n"
  "down while moving, the overlay renderer, and hence, the orientation\n"
  "marker, is resized or moved.  I the case of a resize operation,\n"
  "releasing the left mouse button causes the widget to enforce its\n"
  "renderer to be square.  The diagonally opposite corner to the one\n"
  "moved is repositioned such that all edges of the renderer have the\n"
  "same length: the minimum.\n\n"
  "To use this object, there are two key steps: 1) invoke\n"
  "SetInteractor() with the argument of the method a\n"
  "vtkRenderWindowInteractor, and 2) invoke SetOrientationMarker with an\n"
  "instance of vtkProp (see caveats below). Specifically, vtkAxesActor\n"
  "and vtkAnnotatedCubeActor are two classes designed to work with this\n"
  "class.  A composite orientation marker can be generated by adding\n"
  "instances of vtkAxesActor and vtkAnnotatedCubeActor to a\n"
  "vtkPropAssembly, which can then be set as the input orientation\n"
  "marker. The widget can be also be set up in a non-interactive fashion\n"
  "by setting Ineractive to Off and sizing/placing the overlay renderer\n"
  "in its parent renderer by calling the widget's SetViewport method.\n\n"
  "@par Thanks: This class was based originally on Paraview's\n"
  "vtkPVAxesWidget.\n\n"
  "@warning\n"
  "The input orientation marker prop should calculate its bounds as\n"
  "though they are symmetric about it's origin.  This must currently be\n"
  "done to correctly implement the camera synchronization between the\n"
  "ivar renderer and the renderer associated with the set interactor. \n"
  "Importantly, the InteractorStyle associated with the interactor must\n"
  "be of the type vtkInteractorStyle*Camera. Where desirable, the parent\n"
  "renderer should be set by the SetDefaultRenderer method.  The parent\n"
  "renderer's number of layers is modified to 2 where required.\n\n"
  "@sa\n"
  "vtkInteractorObserver vtkXYPlotWidget vtkScalarBarWidget vtkAxesActor\n"
  "vtkAnnotatedCubeActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOrientationMarkerWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkOrientationMarkerWidget", // tp_name
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
  PyvtkOrientationMarkerWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOrientationMarkerWidget_StaticNew()
{
  return vtkOrientationMarkerWidget::New();
}

PyObject *PyvtkOrientationMarkerWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOrientationMarkerWidget_Type, PyvtkOrientationMarkerWidget_Methods,
    "vtkOrientationMarkerWidget",
 &PyvtkOrientationMarkerWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkInteractorObserver");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOrientationMarkerWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOrientationMarkerWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOrientationMarkerWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

