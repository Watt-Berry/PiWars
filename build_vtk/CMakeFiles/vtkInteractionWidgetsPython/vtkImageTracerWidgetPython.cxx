// python wrapper for vtkImageTracerWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageTracerWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageTracerWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkImageTracerWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static PyObject *
PyvtkImageTracerWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageTracerWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageTracerWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageTracerWidget *tempr = vtkImageTracerWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageTracerWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageTracerWidget::NewInstance());

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
PyvtkImageTracerWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageTracerWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageTracerWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::PlaceWidget(temp0);
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
PyvtkImageTracerWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkImageTracerWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageTracerWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImageTracerWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImageTracerWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}


static PyObject *
PyvtkImageTracerWidget_SetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetHandleProperty() :
      op->vtkImageTracerWidget::GetHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetSelectedHandleProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedHandleProperty() :
      op->vtkImageTracerWidget::GetSelectedHandleProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetLineProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetLineProperty() :
      op->vtkImageTracerWidget::GetLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetSelectedLineProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedLineProperty() :
      op->vtkImageTracerWidget::GetSelectedLineProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->SetViewProp(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetProjectToPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectToPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectToPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectToPlane() :
      op->vtkImageTracerWidget::GetProjectToPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_ProjectToPlaneOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProjectToPlaneOn();
    }
    else
    {
      op->vtkImageTracerWidget::ProjectToPlaneOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_ProjectToPlaneOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProjectToPlaneOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProjectToPlaneOff();
    }
    else
    {
      op->vtkImageTracerWidget::ProjectToPlaneOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetProjectionNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMinValue() :
      op->vtkImageTracerWidget::GetProjectionNormalMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormalMaxValue() :
      op->vtkImageTracerWidget::GetProjectionNormalMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionNormal() :
      op->vtkImageTracerWidget::GetProjectionNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionNormalToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToXAxes();
    }
    else
    {
      op->vtkImageTracerWidget::SetProjectionNormalToXAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionNormalToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToYAxes();
    }
    else
    {
      op->vtkImageTracerWidget::SetProjectionNormalToYAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionNormalToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionNormalToZAxes();
    }
    else
    {
      op->vtkImageTracerWidget::SetProjectionNormalToZAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetProjectionPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetProjectionPosition() :
      op->vtkImageTracerWidget::GetProjectionPosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetSnapToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSnapToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSnapToImage(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetSnapToImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetSnapToImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSnapToImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSnapToImage() :
      op->vtkImageTracerWidget::GetSnapToImage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SnapToImageOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToImageOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToImageOn();
    }
    else
    {
      op->vtkImageTracerWidget::SnapToImageOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SnapToImageOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapToImageOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SnapToImageOff();
    }
    else
    {
      op->vtkImageTracerWidget::SnapToImageOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetAutoClose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoClose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoClose(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetAutoClose(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetAutoClose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoClose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutoClose() :
      op->vtkImageTracerWidget::GetAutoClose());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_AutoCloseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCloseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCloseOn();
    }
    else
    {
      op->vtkImageTracerWidget::AutoCloseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_AutoCloseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoCloseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoCloseOff();
    }
    else
    {
      op->vtkImageTracerWidget::AutoCloseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetCaptureRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptureRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCaptureRadius(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetCaptureRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetCaptureRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptureRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCaptureRadius() :
      op->vtkImageTracerWidget::GetCaptureRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GetPath(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::GetPath(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetGlyphSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlyphSource2D *tempr = (ap.IsBound() ?
      op->GetGlyphSource() :
      op->vtkImageTracerWidget::GetGlyphSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetImageSnapType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSnapType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageSnapType(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetImageSnapType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetImageSnapTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSnapTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageSnapTypeMinValue() :
      op->vtkImageTracerWidget::GetImageSnapTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetImageSnapTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSnapTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageSnapTypeMaxValue() :
      op->vtkImageTracerWidget::GetImageSnapTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetImageSnapType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSnapType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageSnapType() :
      op->vtkImageTracerWidget::GetImageSnapType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetHandlePosition(temp0, temp1);
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
PyvtkImageTracerWidget_SetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::SetHandlePosition(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_SetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageTracerWidget_SetHandlePosition_s1(self, args);
    case 4:
      return PyvtkImageTracerWidget_SetHandlePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHandlePosition");
  return nullptr;
}


static PyObject *
PyvtkImageTracerWidget_GetHandlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::GetHandlePosition(temp0, temp1);
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
PyvtkImageTracerWidget_GetHandlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetHandlePosition(temp0) :
      op->vtkImageTracerWidget::GetHandlePosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageTracerWidget_GetHandlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageTracerWidget_GetHandlePosition_s1(self, args);
    case 1:
      return PyvtkImageTracerWidget_GetHandlePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHandlePosition");
  return nullptr;
}


static PyObject *
PyvtkImageTracerWidget_GetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfHandles() :
      op->vtkImageTracerWidget::GetNumberOfHandles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteraction(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteraction() :
      op->vtkImageTracerWidget::GetInteraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_InteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractionOn();
    }
    else
    {
      op->vtkImageTracerWidget::InteractionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_InteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractionOff();
    }
    else
    {
      op->vtkImageTracerWidget::InteractionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

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
      op->vtkImageTracerWidget::InitializeHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_IsClosed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsClosed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsClosed() :
      op->vtkImageTracerWidget::IsClosed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetHandleLeftMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleLeftMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleLeftMouseButton(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetHandleLeftMouseButton(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetHandleLeftMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleLeftMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleLeftMouseButton() :
      op->vtkImageTracerWidget::GetHandleLeftMouseButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleLeftMouseButtonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleLeftMouseButtonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleLeftMouseButtonOn();
    }
    else
    {
      op->vtkImageTracerWidget::HandleLeftMouseButtonOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleLeftMouseButtonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleLeftMouseButtonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleLeftMouseButtonOff();
    }
    else
    {
      op->vtkImageTracerWidget::HandleLeftMouseButtonOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetHandleMiddleMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleMiddleMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleMiddleMouseButton(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetHandleMiddleMouseButton(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetHandleMiddleMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleMiddleMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleMiddleMouseButton() :
      op->vtkImageTracerWidget::GetHandleMiddleMouseButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleMiddleMouseButtonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleMiddleMouseButtonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleMiddleMouseButtonOn();
    }
    else
    {
      op->vtkImageTracerWidget::HandleMiddleMouseButtonOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleMiddleMouseButtonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleMiddleMouseButtonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleMiddleMouseButtonOff();
    }
    else
    {
      op->vtkImageTracerWidget::HandleMiddleMouseButtonOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_SetHandleRightMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRightMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHandleRightMouseButton(temp0);
    }
    else
    {
      op->vtkImageTracerWidget::SetHandleRightMouseButton(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_GetHandleRightMouseButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRightMouseButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHandleRightMouseButton() :
      op->vtkImageTracerWidget::GetHandleRightMouseButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleRightMouseButtonOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleRightMouseButtonOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleRightMouseButtonOn();
    }
    else
    {
      op->vtkImageTracerWidget::HandleRightMouseButtonOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageTracerWidget_HandleRightMouseButtonOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandleRightMouseButtonOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageTracerWidget *op = static_cast<vtkImageTracerWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HandleRightMouseButtonOff();
    }
    else
    {
      op->vtkImageTracerWidget::HandleRightMouseButtonOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageTracerWidget_Methods[] = {
  {"IsTypeOf", PyvtkImageTracerWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageTracerWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageTracerWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageTracerWidget\nC++: static vtkImageTracerWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageTracerWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageTracerWidget\nC++: vtkImageTracerWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageTracerWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageTracerWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkImageTracerWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkImageTracerWidget_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\nPlaceWidget(self) -> None\nC++: void PlaceWidget() override;\nPlaceWidget(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nThis method is used to initially place the widget.  The placement\nof the widget depends on whether a Prop3D or input dataset is\nprovided. If one of these two is provided, they will be used to\nobtain a bounding box, around which the widget is placed.\nOtherwise, you can manually specify a bounds with the\nPlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required\nby all subclasses; the other methods are provided as convenience\nmethods.\n"},
  {"SetHandleProperty", PyvtkImageTracerWidget_SetHandleProperty, METH_VARARGS,
   "SetHandleProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetHandleProperty(vtkProperty *)\n\nSet/Get the handle properties (the 2D glyphs are the handles).\nThe properties of the handles when selected and normal can be\nmanipulated.\n"},
  {"GetHandleProperty", PyvtkImageTracerWidget_GetHandleProperty, METH_VARARGS,
   "GetHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetHandleProperty()\n\n"},
  {"SetSelectedHandleProperty", PyvtkImageTracerWidget_SetSelectedHandleProperty, METH_VARARGS,
   "SetSelectedHandleProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetSelectedHandleProperty(vtkProperty *)\n\n"},
  {"GetSelectedHandleProperty", PyvtkImageTracerWidget_GetSelectedHandleProperty, METH_VARARGS,
   "GetSelectedHandleProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedHandleProperty()\n\n"},
  {"SetLineProperty", PyvtkImageTracerWidget_SetLineProperty, METH_VARARGS,
   "SetLineProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetLineProperty(vtkProperty *)\n\nSet/Get the line properties. The properties of the line when\nselected and unselected can be manipulated.\n"},
  {"GetLineProperty", PyvtkImageTracerWidget_GetLineProperty, METH_VARARGS,
   "GetLineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetLineProperty()\n\n"},
  {"SetSelectedLineProperty", PyvtkImageTracerWidget_SetSelectedLineProperty, METH_VARARGS,
   "SetSelectedLineProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetSelectedLineProperty(vtkProperty *)\n\n"},
  {"GetSelectedLineProperty", PyvtkImageTracerWidget_GetSelectedLineProperty, METH_VARARGS,
   "GetSelectedLineProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedLineProperty()\n\n"},
  {"SetViewProp", PyvtkImageTracerWidget_SetViewProp, METH_VARARGS,
   "SetViewProp(self, prop:vtkProp) -> None\nC++: void SetViewProp(vtkProp *prop)\n\nSet the prop, usually a vtkImageActor, to trace over.\n"},
  {"SetProjectToPlane", PyvtkImageTracerWidget_SetProjectToPlane, METH_VARARGS,
   "SetProjectToPlane(self, _arg:int) -> None\nC++: virtual void SetProjectToPlane(vtkTypeBool _arg)\n\nForce handles to be on a specific ortho plane. Default is Off.\n"},
  {"GetProjectToPlane", PyvtkImageTracerWidget_GetProjectToPlane, METH_VARARGS,
   "GetProjectToPlane(self) -> int\nC++: virtual vtkTypeBool GetProjectToPlane()\n\n"},
  {"ProjectToPlaneOn", PyvtkImageTracerWidget_ProjectToPlaneOn, METH_VARARGS,
   "ProjectToPlaneOn(self) -> None\nC++: virtual void ProjectToPlaneOn()\n\n"},
  {"ProjectToPlaneOff", PyvtkImageTracerWidget_ProjectToPlaneOff, METH_VARARGS,
   "ProjectToPlaneOff(self) -> None\nC++: virtual void ProjectToPlaneOff()\n\n"},
  {"SetProjectionNormal", PyvtkImageTracerWidget_SetProjectionNormal, METH_VARARGS,
   "SetProjectionNormal(self, _arg:int) -> None\nC++: virtual void SetProjectionNormal(int _arg)\n\nSet the projection normal.  The normal in SetProjectionNormal is\n0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D\nglyphs, it is necessary to specify a plane on which to generate\nthem, even though ProjectToPlane may be turned off.\n"},
  {"GetProjectionNormalMinValue", PyvtkImageTracerWidget_GetProjectionNormalMinValue, METH_VARARGS,
   "GetProjectionNormalMinValue(self) -> int\nC++: virtual int GetProjectionNormalMinValue()\n\n"},
  {"GetProjectionNormalMaxValue", PyvtkImageTracerWidget_GetProjectionNormalMaxValue, METH_VARARGS,
   "GetProjectionNormalMaxValue(self) -> int\nC++: virtual int GetProjectionNormalMaxValue()\n\n"},
  {"GetProjectionNormal", PyvtkImageTracerWidget_GetProjectionNormal, METH_VARARGS,
   "GetProjectionNormal(self) -> int\nC++: virtual int GetProjectionNormal()\n\n"},
  {"SetProjectionNormalToXAxes", PyvtkImageTracerWidget_SetProjectionNormalToXAxes, METH_VARARGS,
   "SetProjectionNormalToXAxes(self) -> None\nC++: void SetProjectionNormalToXAxes()\n\n"},
  {"SetProjectionNormalToYAxes", PyvtkImageTracerWidget_SetProjectionNormalToYAxes, METH_VARARGS,
   "SetProjectionNormalToYAxes(self) -> None\nC++: void SetProjectionNormalToYAxes()\n\n"},
  {"SetProjectionNormalToZAxes", PyvtkImageTracerWidget_SetProjectionNormalToZAxes, METH_VARARGS,
   "SetProjectionNormalToZAxes(self) -> None\nC++: void SetProjectionNormalToZAxes()\n\n"},
  {"SetProjectionPosition", PyvtkImageTracerWidget_SetProjectionPosition, METH_VARARGS,
   "SetProjectionPosition(self, position:float) -> None\nC++: void SetProjectionPosition(double position)\n\nSet the position of the widgets' handles in terms of a plane's\nposition. e.g., if ProjectionNormal is 0, all of the x-coordinate\nvalues of the handles are set to ProjectionPosition.  No attempt\nis made to ensure that the position is within the bounds of\neither the underlying image data or the prop on which tracing is\nperformed.\n"},
  {"GetProjectionPosition", PyvtkImageTracerWidget_GetProjectionPosition, METH_VARARGS,
   "GetProjectionPosition(self) -> float\nC++: virtual double GetProjectionPosition()\n\n"},
  {"SetSnapToImage", PyvtkImageTracerWidget_SetSnapToImage, METH_VARARGS,
   "SetSnapToImage(self, snap:int) -> None\nC++: void SetSnapToImage(vtkTypeBool snap)\n\nForce snapping to image data while tracing. Default is Off.\n"},
  {"GetSnapToImage", PyvtkImageTracerWidget_GetSnapToImage, METH_VARARGS,
   "GetSnapToImage(self) -> int\nC++: virtual vtkTypeBool GetSnapToImage()\n\n"},
  {"SnapToImageOn", PyvtkImageTracerWidget_SnapToImageOn, METH_VARARGS,
   "SnapToImageOn(self) -> None\nC++: virtual void SnapToImageOn()\n\n"},
  {"SnapToImageOff", PyvtkImageTracerWidget_SnapToImageOff, METH_VARARGS,
   "SnapToImageOff(self) -> None\nC++: virtual void SnapToImageOff()\n\n"},
  {"SetAutoClose", PyvtkImageTracerWidget_SetAutoClose, METH_VARARGS,
   "SetAutoClose(self, _arg:int) -> None\nC++: virtual void SetAutoClose(vtkTypeBool _arg)\n\nIn concert with a CaptureRadius value, automatically form a\nclosed path by connecting first to last path points. Default is\nOff.\n"},
  {"GetAutoClose", PyvtkImageTracerWidget_GetAutoClose, METH_VARARGS,
   "GetAutoClose(self) -> int\nC++: virtual vtkTypeBool GetAutoClose()\n\n"},
  {"AutoCloseOn", PyvtkImageTracerWidget_AutoCloseOn, METH_VARARGS,
   "AutoCloseOn(self) -> None\nC++: virtual void AutoCloseOn()\n\n"},
  {"AutoCloseOff", PyvtkImageTracerWidget_AutoCloseOff, METH_VARARGS,
   "AutoCloseOff(self) -> None\nC++: virtual void AutoCloseOff()\n\n"},
  {"SetCaptureRadius", PyvtkImageTracerWidget_SetCaptureRadius, METH_VARARGS,
   "SetCaptureRadius(self, _arg:float) -> None\nC++: virtual void SetCaptureRadius(double _arg)\n\nSet/Get the capture radius for automatic path closing.  For image\ndata, capture radius should be half the distance between\nvoxel/pixel centers. Default is 1.0\n"},
  {"GetCaptureRadius", PyvtkImageTracerWidget_GetCaptureRadius, METH_VARARGS,
   "GetCaptureRadius(self) -> float\nC++: virtual double GetCaptureRadius()\n\n"},
  {"GetPath", PyvtkImageTracerWidget_GetPath, METH_VARARGS,
   "GetPath(self, pd:vtkPolyData) -> None\nC++: void GetPath(vtkPolyData *pd)\n\nGrab the points and lines that define the traced path. These\npoint values are guaranteed to be up-to-date when either the\nInteractionEvent or EndInteraction events are invoked. The user\nprovides the vtkPolyData and the points and cells representing\nthe line are added to it.\n"},
  {"GetGlyphSource", PyvtkImageTracerWidget_GetGlyphSource, METH_VARARGS,
   "GetGlyphSource(self) -> vtkGlyphSource2D\nC++: vtkGlyphSource2D *GetGlyphSource()\n\nGet the handles' geometric representation via vtkGlyphSource2D.\n"},
  {"SetImageSnapType", PyvtkImageTracerWidget_SetImageSnapType, METH_VARARGS,
   "SetImageSnapType(self, _arg:int) -> None\nC++: virtual void SetImageSnapType(int _arg)\n\nSet/Get the type of snapping to image data: center of a\npixel/voxel or nearest point defining a pixel/voxel.\n"},
  {"GetImageSnapTypeMinValue", PyvtkImageTracerWidget_GetImageSnapTypeMinValue, METH_VARARGS,
   "GetImageSnapTypeMinValue(self) -> int\nC++: virtual int GetImageSnapTypeMinValue()\n\n"},
  {"GetImageSnapTypeMaxValue", PyvtkImageTracerWidget_GetImageSnapTypeMaxValue, METH_VARARGS,
   "GetImageSnapTypeMaxValue(self) -> int\nC++: virtual int GetImageSnapTypeMaxValue()\n\n"},
  {"GetImageSnapType", PyvtkImageTracerWidget_GetImageSnapType, METH_VARARGS,
   "GetImageSnapType(self) -> int\nC++: virtual int GetImageSnapType()\n\n"},
  {"SetHandlePosition", PyvtkImageTracerWidget_SetHandlePosition, METH_VARARGS,
   "SetHandlePosition(self, handle:int, xyz:[float, float, float])\n    -> None\nC++: void SetHandlePosition(int handle, double xyz[3])\nSetHandlePosition(self, handle:int, x:float, y:float, z:float)\n    -> None\nC++: void SetHandlePosition(int handle, double x, double y,\n    double z)\n\nSet/Get the handle position in terms of a zero-based array of\nhandles.\n"},
  {"GetHandlePosition", PyvtkImageTracerWidget_GetHandlePosition, METH_VARARGS,
   "GetHandlePosition(self, handle:int, xyz:[float, float, float])\n    -> None\nC++: void GetHandlePosition(int handle, double xyz[3])\nGetHandlePosition(self, handle:int) -> (float, float, float)\nC++: double *GetHandlePosition(int handle)\n\n"},
  {"GetNumberOfHandles", PyvtkImageTracerWidget_GetNumberOfHandles, METH_VARARGS,
   "GetNumberOfHandles(self) -> int\nC++: virtual int GetNumberOfHandles()\n\nGet the number of handles.\n"},
  {"SetInteraction", PyvtkImageTracerWidget_SetInteraction, METH_VARARGS,
   "SetInteraction(self, interact:int) -> None\nC++: void SetInteraction(vtkTypeBool interact)\n\nEnable/disable mouse interaction when the widget is visible.\n"},
  {"GetInteraction", PyvtkImageTracerWidget_GetInteraction, METH_VARARGS,
   "GetInteraction(self) -> int\nC++: virtual vtkTypeBool GetInteraction()\n\n"},
  {"InteractionOn", PyvtkImageTracerWidget_InteractionOn, METH_VARARGS,
   "InteractionOn(self) -> None\nC++: virtual void InteractionOn()\n\n"},
  {"InteractionOff", PyvtkImageTracerWidget_InteractionOff, METH_VARARGS,
   "InteractionOff(self) -> None\nC++: virtual void InteractionOff()\n\n"},
  {"InitializeHandles", PyvtkImageTracerWidget_InitializeHandles, METH_VARARGS,
   "InitializeHandles(self, __a:vtkPoints) -> None\nC++: void InitializeHandles(vtkPoints *)\n\nInitialize the widget with a set of points and generate lines\nbetween them.  If AutoClose is on it will handle the case wherein\nthe first and last points are congruent.\n"},
  {"IsClosed", PyvtkImageTracerWidget_IsClosed, METH_VARARGS,
   "IsClosed(self) -> int\nC++: int IsClosed()\n\nIs the path closed or open?\n"},
  {"SetHandleLeftMouseButton", PyvtkImageTracerWidget_SetHandleLeftMouseButton, METH_VARARGS,
   "SetHandleLeftMouseButton(self, _arg:int) -> None\nC++: virtual void SetHandleLeftMouseButton(vtkTypeBool _arg)\n\nEnable/Disable mouse button events\n"},
  {"GetHandleLeftMouseButton", PyvtkImageTracerWidget_GetHandleLeftMouseButton, METH_VARARGS,
   "GetHandleLeftMouseButton(self) -> int\nC++: virtual vtkTypeBool GetHandleLeftMouseButton()\n\n"},
  {"HandleLeftMouseButtonOn", PyvtkImageTracerWidget_HandleLeftMouseButtonOn, METH_VARARGS,
   "HandleLeftMouseButtonOn(self) -> None\nC++: virtual void HandleLeftMouseButtonOn()\n\n"},
  {"HandleLeftMouseButtonOff", PyvtkImageTracerWidget_HandleLeftMouseButtonOff, METH_VARARGS,
   "HandleLeftMouseButtonOff(self) -> None\nC++: virtual void HandleLeftMouseButtonOff()\n\n"},
  {"SetHandleMiddleMouseButton", PyvtkImageTracerWidget_SetHandleMiddleMouseButton, METH_VARARGS,
   "SetHandleMiddleMouseButton(self, _arg:int) -> None\nC++: virtual void SetHandleMiddleMouseButton(vtkTypeBool _arg)\n\n"},
  {"GetHandleMiddleMouseButton", PyvtkImageTracerWidget_GetHandleMiddleMouseButton, METH_VARARGS,
   "GetHandleMiddleMouseButton(self) -> int\nC++: virtual vtkTypeBool GetHandleMiddleMouseButton()\n\n"},
  {"HandleMiddleMouseButtonOn", PyvtkImageTracerWidget_HandleMiddleMouseButtonOn, METH_VARARGS,
   "HandleMiddleMouseButtonOn(self) -> None\nC++: virtual void HandleMiddleMouseButtonOn()\n\n"},
  {"HandleMiddleMouseButtonOff", PyvtkImageTracerWidget_HandleMiddleMouseButtonOff, METH_VARARGS,
   "HandleMiddleMouseButtonOff(self) -> None\nC++: virtual void HandleMiddleMouseButtonOff()\n\n"},
  {"SetHandleRightMouseButton", PyvtkImageTracerWidget_SetHandleRightMouseButton, METH_VARARGS,
   "SetHandleRightMouseButton(self, _arg:int) -> None\nC++: virtual void SetHandleRightMouseButton(vtkTypeBool _arg)\n\n"},
  {"GetHandleRightMouseButton", PyvtkImageTracerWidget_GetHandleRightMouseButton, METH_VARARGS,
   "GetHandleRightMouseButton(self) -> int\nC++: virtual vtkTypeBool GetHandleRightMouseButton()\n\n"},
  {"HandleRightMouseButtonOn", PyvtkImageTracerWidget_HandleRightMouseButtonOn, METH_VARARGS,
   "HandleRightMouseButtonOn(self) -> None\nC++: virtual void HandleRightMouseButtonOn()\n\n"},
  {"HandleRightMouseButtonOff", PyvtkImageTracerWidget_HandleRightMouseButtonOff, METH_VARARGS,
   "HandleRightMouseButtonOff(self) -> None\nC++: virtual void HandleRightMouseButtonOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageTracerWidget_Doc =
  "vtkImageTracerWidget - 3D widget for tracing on planar props.\n\n"
  "Superclass: vtk3DWidget\n\n"
  "vtkImageTracerWidget is different from other widgets in three\n"
  "distinct ways:\n"
  "1) any sub-class of vtkProp can be input rather than just vtkProp3D,\n"
  "   so that vtkImageActor can be set as the prop and then traced over,\n"
  "2) the widget fires pick events at the input prop to decide where to\n"
  "   move its handles, 3) the widget has 2D glyphs for handles instead\n"
  "   of 3D spheres as is done in other sub-classes of vtk3DWidget. This\n"
  "widget is primarily designed for manually tracing over image data.\n"
  "   The button actions and key modifiers are as follows for\n"
  "   controlling the widget:\n"
  "1) left button click over the image, hold and drag draws a free hand\n"
  "   line.\n"
  "2) left button click and release erases the widget line, if it\n"
  "   exists, and repositions the first handle.\n"
  "3) middle button click starts a snap drawn line.  The line is\n"
  "   terminated by clicking the middle button while depressing the ctrl\n"
  "key.\n"
  "4) when tracing a continuous or snap drawn line, if the last cursor\n"
  "   position is within a specified tolerance to the first handle, the\n"
  "   widget line will form a closed loop.\n"
  "5) right button clicking and holding on any handle that is part of a\n"
  "   snap drawn line allows handle dragging: existing line segments are\n"
  "updated accordingly.  If the path is open and AutoClose is set to On,\n"
  "the path can be closed by repositioning the first and last points\n"
  "   over one another.\n"
  "6) ctrl key + right button down on any handle will erase it: existing\n"
  "   snap drawn line segments are updated accordingly.  If the line was\n"
  "formed by continuous tracing, the line is deleted leaving one handle.\n"
  "7) shift key + right button down on any snap drawn line segment will\n"
  "   insert a handle at the cursor position.  The line segment is split\n"
  "accordingly.\n\n"
  "@warning\n"
  "the input vtkDataSet should be vtkImageData.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkLineWidget vtkPointWidget vtkSphereWidget\n"
  "vtkImagePlaneWidget vtkImplicitPlaneWidget vtkPlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageTracerWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImageTracerWidget", // tp_name
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
  PyvtkImageTracerWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageTracerWidget_StaticNew()
{
  return vtkImageTracerWidget::New();
}

PyObject *PyvtkImageTracerWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageTracerWidget_Type, PyvtkImageTracerWidget_Methods,
    "vtkImageTracerWidget",
 &PyvtkImageTracerWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageTracerWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageTracerWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageTracerWidget", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "VTK_ITW_PROJECTION_YZ", 0 },
        { "VTK_ITW_PROJECTION_XZ", 1 },
        { "VTK_ITW_PROJECTION_XY", 2 },
        { "VTK_ITW_SNAP_CELLS", 0 },
        { "VTK_ITW_SNAP_POINTS", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

