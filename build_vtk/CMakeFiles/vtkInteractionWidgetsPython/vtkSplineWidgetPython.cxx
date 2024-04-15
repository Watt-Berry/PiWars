// python wrapper for vtkSplineWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSplineWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplineWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkSplineWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static PyObject *
PyvtkSplineWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplineWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplineWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplineWidget *tempr = vtkSplineWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplineWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplineWidget::NewInstance());

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
PyvtkSplineWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSplineWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSplineWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

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
      op->vtkSplineWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->PlaceWidget(temp0);
    }
    else
    {
      op->vtkSplineWidget::PlaceWidget(temp0);
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
PyvtkSplineWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkSplineWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSplineWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkSplineWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSplineWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSplineWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkSplineWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkSplineWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}


static PyObject *
PyvtkSplineWidget_SetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectToPlane(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetProjectToPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectToPlane() :
      op->vtkSplineWidget::GetProjectToPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_ProjectToPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProjectToPlaneOn();
    }
    else
    {
      op->vtkSplineWidget::ProjectToPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_ProjectToPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProjectToPlaneOff();
    }
    else
    {
      op->vtkSplineWidget::ProjectToPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetPlaneSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkPlaneSource *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneSource"))
  {
    if (ap.IsBound())
    {
      op->SetPlaneSource(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetPlaneSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormal(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetProjectionNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkSplineWidget::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkSplineWidget::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkSplineWidget::GetProjectionNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormalToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToXAxes();
    }
    else
    {
      op->vtkSplineWidget::SetProjectionNormalToXAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormalToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToYAxes();
    }
    else
    {
      op->vtkSplineWidget::SetProjectionNormalToYAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormalToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToZAxes();
    }
    else
    {
      op->vtkSplineWidget::SetProjectionNormalToZAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToOblique();
    }
    else
    {
      op->vtkSplineWidget::SetProjectionNormalToOblique();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionPosition(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetProjectionPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkSplineWidget::GetProjectionPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPolyData(temp0);
    }
    else
    {
      op->vtkSplineWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetHandleProperty(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkSplineWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedHandleProperty(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetSelectedHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkSplineWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLineProperty(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetLineProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkSplineWidget::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedLineProperty(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetSelectedLineProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkSplineWidget::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfHandles(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetNumberOfHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHandles() :
      op->vtkSplineWidget::GetNumberOfHandles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkSplineWidget::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkParametricSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricSpline"))
  {
    if (ap.IsBound())
    {
      op->SetParametricSpline(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetParametricSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricSpline *tempr = (ap.IsBound() ?
      op->GetParametricSpline() :
      op->vtkSplineWidget::GetParametricSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
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
      op->SetHandlePosition(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSplineWidget::SetHandlePosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSplineWidget_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetHandlePosition(temp0, temp1);
    }
    else
    {
      op->vtkSplineWidget::SetHandlePosition(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSplineWidget_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSplineWidget_SetHandlePosition_s1(self, args);
    case 2:
      return PyvtkSplineWidget_SetHandlePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return nullptr;
}


static PyObject *
PyvtkSplineWidget_GetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetHandlePosition(temp0, temp1);
    }
    else
    {
      op->vtkSplineWidget::GetHandlePosition(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSplineWidget_GetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition(temp0) :
      op->vtkSplineWidget::GetHandlePosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkSplineWidget_GetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSplineWidget_GetHandlePosition_s1(self, args);
    case 1:
      return PyvtkSplineWidget_GetHandlePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHandlePosition");
  return nullptr;
}


static PyObject *
PyvtkSplineWidget_SetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClosed(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetClosed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClosed() :
      op->vtkSplineWidget::GetClosed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_ClosedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedOn();
    }
    else
    {
      op->vtkSplineWidget::ClosedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_ClosedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClosedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClosedOff();
    }
    else
    {
      op->vtkSplineWidget::ClosedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_IsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsClosed() :
      op->vtkSplineWidget::IsClosed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetSummedLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSummedLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSummedLength() :
      op->vtkSplineWidget::GetSummedLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->InitializeHandles(temp0);
    }
    else
    {
      op->vtkSplineWidget::InitializeHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_SetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessEvents(temp0);
    }
    else
    {
      op->vtkSplineWidget::SetProcessEvents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProcessEventsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMinValue() :
      op->vtkSplineWidget::GetProcessEventsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProcessEventsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEventsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEventsMaxValue() :
      op->vtkSplineWidget::GetProcessEventsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_GetProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessEvents() :
      op->vtkSplineWidget::GetProcessEvents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_ProcessEventsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventsOn();
    }
    else
    {
      op->vtkSplineWidget::ProcessEventsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineWidget_ProcessEventsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEventsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineWidget *op = static_cast<vtkSplineWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessEventsOff();
    }
    else
    {
      op->vtkSplineWidget::ProcessEventsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSplineWidget_Methods[] = {
  {"IsTypeOf", PyvtkSplineWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSplineWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSplineWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSplineWidget\nC++: static vtkSplineWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSplineWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSplineWidget\nC++: vtkSplineWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSplineWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSplineWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkSplineWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkSplineWidget_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\nPlaceWidget(self) -> None\nC++: void PlaceWidget() override;\nPlaceWidget(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nThis method is used to initially place the widget.  The placement\nof the widget depends on whether a Prop3D or input dataset is\nprovided. If one of these two is provided, they will be used to\nobtain a bounding box, around which the widget is placed.\nOtherwise, you can manually specify a bounds with the\nPlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required\nby all subclasses; the other methods are provided as convenience\nmethods.\n"},
  {"SetProjectToPlane", PyvtkSplineWidget_SetProjectToPlane, METH_VARARGS,
   "SetProjectToPlane(self, _arg:int) -> None\nC++: virtual void SetProjectToPlane(vtkTypeBool _arg)\n\nForce the spline widget to be projected onto one of the\northogonal planes. Remember that when the state changes, a\nModifiedEvent is invoked. This can be used to snap the spline to\nthe plane if it is originally not aligned.  The normal in\nSetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and\n3 for arbitrary oblique planes when the widget is tied to a\nvtkPlaneSource.\n"},
  {"GetProjectToPlane", PyvtkSplineWidget_GetProjectToPlane, METH_VARARGS,
   "GetProjectToPlane(self) -> int\nC++: virtual vtkTypeBool GetProjectToPlane()\n\n"},
  {"ProjectToPlaneOn", PyvtkSplineWidget_ProjectToPlaneOn, METH_VARARGS,
   "ProjectToPlaneOn(self) -> None\nC++: virtual void ProjectToPlaneOn()\n\n"},
  {"ProjectToPlaneOff", PyvtkSplineWidget_ProjectToPlaneOff, METH_VARARGS,
   "ProjectToPlaneOff(self) -> None\nC++: virtual void ProjectToPlaneOff()\n\n"},
  {"SetPlaneSource", PyvtkSplineWidget_SetPlaneSource, METH_VARARGS,
   "SetPlaneSource(self, plane:vtkPlaneSource) -> None\nC++: void SetPlaneSource(vtkPlaneSource *plane)\n\nSet up a reference to a vtkPlaneSource that could be from another\nwidget object, e.g. a vtkPolyDataSourceWidget.\n"},
  {"SetProjectionNormal", PyvtkSplineWidget_SetProjectionNormal, METH_VARARGS,
   "SetProjectionNormal(self, _arg:int) -> None\nC++: virtual void SetProjectionNormal(int _arg)\n\n"},
  {"GetProjectionNormalMinValue", PyvtkSplineWidget_GetProjectionNormalMinValue, METH_VARARGS,
   "GetProjectionNormalMinValue(self) -> int\nC++: virtual int GetProjectionNormalMinValue()\n\n"},
  {"GetProjectionNormalMaxValue", PyvtkSplineWidget_GetProjectionNormalMaxValue, METH_VARARGS,
   "GetProjectionNormalMaxValue(self) -> int\nC++: virtual int GetProjectionNormalMaxValue()\n\n"},
  {"GetProjectionNormal", PyvtkSplineWidget_GetProjectionNormal, METH_VARARGS,
   "GetProjectionNormal(self) -> int\nC++: virtual int GetProjectionNormal()\n\n"},
  {"SetProjectionNormalToXAxes", PyvtkSplineWidget_SetProjectionNormalToXAxes, METH_VARARGS,
   "SetProjectionNormalToXAxes(self) -> None\nC++: void SetProjectionNormalToXAxes()\n\n"},
  {"SetProjectionNormalToYAxes", PyvtkSplineWidget_SetProjectionNormalToYAxes, METH_VARARGS,
   "SetProjectionNormalToYAxes(self) -> None\nC++: void SetProjectionNormalToYAxes()\n\n"},
  {"SetProjectionNormalToZAxes", PyvtkSplineWidget_SetProjectionNormalToZAxes, METH_VARARGS,
   "SetProjectionNormalToZAxes(self) -> None\nC++: void SetProjectionNormalToZAxes()\n\n"},
  {"SetProjectionNormalToOblique", PyvtkSplineWidget_SetProjectionNormalToOblique, METH_VARARGS,
   "SetProjectionNormalToOblique(self) -> None\nC++: void SetProjectionNormalToOblique()\n\n"},
  {"SetProjectionPosition", PyvtkSplineWidget_SetProjectionPosition, METH_VARARGS,
   "SetProjectionPosition(self, position:float) -> None\nC++: void SetProjectionPosition(double position)\n\nSet the position of spline handles and points in terms of a\nplane's position. i.e., if ProjectionNormal is 0, all of the\nx-coordinate values of the points are set to position. Any value\ncan be passed (and is ignored) to update the spline points when\nProjection normal is set to 3 for arbitrary plane orientations.\n"},
  {"GetProjectionPosition", PyvtkSplineWidget_GetProjectionPosition, METH_VARARGS,
   "GetProjectionPosition(self) -> float\nC++: virtual double GetProjectionPosition()\n\n"},
  {"GetPolyData", PyvtkSplineWidget_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the spline. \nThe polydata consists of points and line segments numbering\nResolution + 1 and Resolution, respectively. Points are\nguaranteed to be up-to-date when either the InteractionEvent or\nEndInteraction events are invoked. The user provides the\nvtkPolyData and the points and polyline are added to it.\n"},
  {"SetHandleProperty", PyvtkSplineWidget_SetHandleProperty, METH_VARARGS,
   "SetHandleProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetHandleProperty(vtkProperty *)\n\nSet/Get the handle properties (the spheres are the handles). The\nproperties of the handles when selected and unselected can be\nmanipulated.\n"},
  {"GetHandleProperty", PyvtkSplineWidget_GetHandleProperty, METH_VARARGS,
   "GetHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\n"},
  {"SetSelectedHandleProperty", PyvtkSplineWidget_SetSelectedHandleProperty, METH_VARARGS,
   "SetSelectedHandleProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetSelectedHandleProperty(vtkProperty *)\n\n"},
  {"GetSelectedHandleProperty", PyvtkSplineWidget_GetSelectedHandleProperty, METH_VARARGS,
   "GetSelectedHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\n"},
  {"SetLineProperty", PyvtkSplineWidget_SetLineProperty, METH_VARARGS,
   "SetLineProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetLineProperty(vtkProperty *)\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {"GetLineProperty", PyvtkSplineWidget_GetLineProperty, METH_VARARGS,
   "GetLineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetLineProperty()\n\n"},
  {"SetSelectedLineProperty", PyvtkSplineWidget_SetSelectedLineProperty, METH_VARARGS,
   "SetSelectedLineProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetSelectedLineProperty(vtkProperty *)\n\n"},
  {"GetSelectedLineProperty", PyvtkSplineWidget_GetSelectedLineProperty, METH_VARARGS,
   "GetSelectedLineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLineProperty()\n\n"},
  {"SetNumberOfHandles", PyvtkSplineWidget_SetNumberOfHandles, METH_VARARGS,
   "SetNumberOfHandles(self, npts:int) -> None\nC++: virtual void SetNumberOfHandles(int npts)\n\nSet/Get the number of handles for this widget.\n"},
  {"GetNumberOfHandles", PyvtkSplineWidget_GetNumberOfHandles, METH_VARARGS,
   "GetNumberOfHandles(self) -> int\nC++: virtual int GetNumberOfHandles()\n\n"},
  {"SetResolution", PyvtkSplineWidget_SetResolution, METH_VARARGS,
   "SetResolution(self, resolution:int) -> None\nC++: void SetResolution(int resolution)\n\nSet/Get the number of line segments representing the spline for\nthis widget.\n"},
  {"GetResolution", PyvtkSplineWidget_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetParametricSpline", PyvtkSplineWidget_SetParametricSpline, METH_VARARGS,
   "SetParametricSpline(self, __a:vtkParametricSpline) -> None\nC++: virtual void SetParametricSpline(vtkParametricSpline *)\n\nSet the parametric spline object. Through vtkParametricSpline's\nAPI, the user can supply and configure one of currently two types\nof spline: vtkCardinalSpline, vtkKochanekSpline. The widget\ncontrols the open or closed configuration of the spline. WARNING:\nThe widget does not enforce internal consistency so that all\nthree are of the same type.\n"},
  {"GetParametricSpline", PyvtkSplineWidget_GetParametricSpline, METH_VARARGS,
   "GetParametricSpline(self) -> vtkParametricSpline\nC++: virtual vtkParametricSpline *GetParametricSpline()\n\n"},
  {"SetHandlePosition", PyvtkSplineWidget_SetHandlePosition, METH_VARARGS,
   "SetHandlePosition(self, handle:int, x:float, y:float, z:float)\n    -> None\nC++: void SetHandlePosition(int handle, double x, double y,\n    double z)\nSetHandlePosition(self, handle:int, xyz:[float, float, float])\n    -> None\nC++: void SetHandlePosition(int handle, double xyz[3])\n\nSet/Get the position of the spline handles. Call\nGetNumberOfHandles to determine the valid range of handle\nindices.\n"},
  {"GetHandlePosition", PyvtkSplineWidget_GetHandlePosition, METH_VARARGS,
   "GetHandlePosition(self, handle:int, xyz:[float, float, float])\n    -> None\nC++: void GetHandlePosition(int handle, double xyz[3])\nGetHandlePosition(self, handle:int) -> (float, float, float)\nC++: double *GetHandlePosition(int handle)\n\n"},
  {"SetClosed", PyvtkSplineWidget_SetClosed, METH_VARARGS,
   "SetClosed(self, closed:int) -> None\nC++: void SetClosed(vtkTypeBool closed)\n\nControl whether the spline is open or closed. A closed spline\nforms a continuous loop: the first and last points are the same,\nand derivatives are continuous.  A minimum of 3 handles are\nrequired to form a closed loop.  This method enforces consistency\nwith user supplied subclasses of vtkSpline.\n"},
  {"GetClosed", PyvtkSplineWidget_GetClosed, METH_VARARGS,
   "GetClosed(self) -> int\nC++: virtual vtkTypeBool GetClosed()\n\n"},
  {"ClosedOn", PyvtkSplineWidget_ClosedOn, METH_VARARGS,
   "ClosedOn(self) -> None\nC++: virtual void ClosedOn()\n\n"},
  {"ClosedOff", PyvtkSplineWidget_ClosedOff, METH_VARARGS,
   "ClosedOff(self) -> None\nC++: virtual void ClosedOff()\n\n"},
  {"IsClosed", PyvtkSplineWidget_IsClosed, METH_VARARGS,
   "IsClosed(self) -> int\nC++: int IsClosed()\n\nConvenience method to determine whether the spline is closed in a\ngeometric sense.  The widget may be set \"closed\" but still be\ngeometrically open (e.g., a straight line).\n"},
  {"GetSummedLength", PyvtkSplineWidget_GetSummedLength, METH_VARARGS,
   "GetSummedLength(self) -> float\nC++: double GetSummedLength()\n\nGet the approximate vs. the true arc length of the spline.\nCalculated as the summed lengths of the individual straight line\nsegments. Use SetResolution to control the accuracy.\n"},
  {"InitializeHandles", PyvtkSplineWidget_InitializeHandles, METH_VARARGS,
   "InitializeHandles(self, points:vtkPoints) -> None\nC++: void InitializeHandles(vtkPoints *points)\n\nConvenience method to allocate and set the handles from a\nvtkPoints instance.  If the first and last points are the same,\nthe spline sets Closed to the on state and disregards the last\npoint, otherwise Closed remains unchanged.\n"},
  {"SetProcessEvents", PyvtkSplineWidget_SetProcessEvents, METH_VARARGS,
   "SetProcessEvents(self, _arg:int) -> None\nC++: virtual void SetProcessEvents(vtkTypeBool _arg)\n\nTurn on / off event processing for this widget. If off, the\nwidget will not respond to user interaction\n"},
  {"GetProcessEventsMinValue", PyvtkSplineWidget_GetProcessEventsMinValue, METH_VARARGS,
   "GetProcessEventsMinValue(self) -> int\nC++: virtual vtkTypeBool GetProcessEventsMinValue()\n\n"},
  {"GetProcessEventsMaxValue", PyvtkSplineWidget_GetProcessEventsMaxValue, METH_VARARGS,
   "GetProcessEventsMaxValue(self) -> int\nC++: virtual vtkTypeBool GetProcessEventsMaxValue()\n\n"},
  {"GetProcessEvents", PyvtkSplineWidget_GetProcessEvents, METH_VARARGS,
   "GetProcessEvents(self) -> int\nC++: virtual vtkTypeBool GetProcessEvents()\n\n"},
  {"ProcessEventsOn", PyvtkSplineWidget_ProcessEventsOn, METH_VARARGS,
   "ProcessEventsOn(self) -> None\nC++: virtual void ProcessEventsOn()\n\n"},
  {"ProcessEventsOff", PyvtkSplineWidget_ProcessEventsOff, METH_VARARGS,
   "ProcessEventsOff(self) -> None\nC++: virtual void ProcessEventsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSplineWidget_Doc =
  "vtkSplineWidget - 3D widget for manipulating a spline\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This 3D widget defines a spline that can be interactively placed in a\n"
  "scene. The spline has handles, the number of which can be changed,\n"
  "plus it can be picked on the spline itself to translate or rotate it\n"
  "in the scene. A nice feature of the object is that the\n"
  "vtkSplineWidget, like any 3D widget, will work with the current\n"
  "interactor style. That is, if vtkSplineWidget does not handle an\n"
  "event, then all other registered observers (including the interactor\n"
  "style) have an opportunity to process the event. Otherwise, the\n"
  "vtkSplineWidget will terminate the processing of the event that it\n"
  "handles.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. The interactor will\n"
  "act normally until the \"i\" key (for \"interactor\") is pressed, at\n"
  "which point the vtkSplineWidget will appear. (See superclass\n"
  "documentation for information about changing this behavior.) Events\n"
  "that occur outside of the widget (i.e., no part of the widget is\n"
  "picked) are propagated to any other registered obsevers (such as the\n"
  "interaction style).  Turn off the widget by pressing the \"i\" key\n"
  "again (or invoke the Off() method).\n\n"
  "The button actions and key modifiers are as follows for controlling\n"
  "the widget:\n"
  "1) left button down on and drag one of the spherical handles to\n"
  "   change the shape of the spline: the handles act as \"control\n"
  "   points\".\n"
  "2) left button or middle button down on a line segment forming the\n"
  "   spline allows uniform translation of the widget.\n"
  "3) ctrl + middle button down on the widget enables spinning of the\n"
  "   widget about its center.\n"
  "4) right button down on the widget enables scaling of the widget. By\n"
  "   moving the mouse \"up\" the render window the spline will be made\n"
  "   bigger; by moving \"down\" the render window the widget will be made\n"
  "smaller.\n"
  "5) ctrl key + right button down on any handle will erase it providing\n"
  "there will be two or more points remaining to form a spline.\n"
  "6) shift key + right button down on any line segment will insert a\n"
  "   handle onto the spline at the cursor position.\n\n"
  "The vtkSplineWidget has several methods that can be used in\n"
  "conjunction with other VTK objects. The Set/GetResolution() methods\n"
  "control the number of subdivisions of the spline; the GetPolyData()\n"
  "method can be used to get the polygonal representation and can be\n"
  "used for things like seeding streamlines or probing other data sets.\n"
  "Typical usage of the widget is to make use of the\n"
  "StartInteractionEvent, InteractionEvent, and EndInteractionEvent\n"
  "events. The InteractionEvent is called on mouse motion; the other two\n"
  "events are called on button down and button up (either left or right\n"
  "button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You can set the properties of the\n"
  "selected and unselected representations of the spline. For example,\n"
  "you can set the property for the handles and spline. In addition\n"
  "there are methods to constrain the spline so that it is aligned with\n"
  "a plane.  Note that a simple ruler widget can be derived by setting\n"
  "the resolution to 1, the number of handles to 2, and calling the\n"
  "GetSummedLength method!\n\n"
  "@par Thanks: Thanks to Dean Inglis for developing and contributing\n"
  "this class.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkLineWidget vtkPointWidget vtkSphereWidget\n"
  "vtkImagePlaneWidget vtkImplicitPlaneWidget vtkPlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSplineWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkSplineWidget", // tp_name
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
  PyvtkSplineWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplineWidget_StaticNew()
{
  return vtkSplineWidget::New();
}

PyObject *PyvtkSplineWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSplineWidget_Type, PyvtkSplineWidget_Methods,
    "vtkSplineWidget",
 &PyvtkSplineWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSplineWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplineWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplineWidget", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_PROJECTION_YZ", 0 },
        { "VTK_PROJECTION_XZ", 1 },
        { "VTK_PROJECTION_XY", 2 },
        { "VTK_PROJECTION_OBLIQUE", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

