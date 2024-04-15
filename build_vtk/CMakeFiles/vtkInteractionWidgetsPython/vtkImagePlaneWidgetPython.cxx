// python wrapper for vtkImagePlaneWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImagePlaneWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImagePlaneWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkImagePlaneWidget_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataSourceWidget_ClassNew
extern "C" { PyObject *PyvtkPolyDataSourceWidget_ClassNew(); }
#define DECLARED_PyvtkPolyDataSourceWidget_ClassNew
#endif

static PyObject *
PyvtkImagePlaneWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImagePlaneWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImagePlaneWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImagePlaneWidget *tempr = vtkImagePlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImagePlaneWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImagePlaneWidget::NewInstance());

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
PyvtkImagePlaneWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImagePlaneWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImagePlaneWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::PlaceWidget(temp0);
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
PyvtkImagePlaneWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkImagePlaneWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImagePlaneWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImagePlaneWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImagePlaneWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_SetInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePlaneWidget::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetOrigin(temp0);
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
PyvtkImagePlaneWidget_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImagePlaneWidget_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImagePlaneWidget::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetOrigin(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetOrigin(temp0);
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
PyvtkImagePlaneWidget_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPoint1(temp0);
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
PyvtkImagePlaneWidget_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImagePlaneWidget_SetPoint1_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_GetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkImagePlaneWidget::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetPoint1(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetPoint1(temp0);
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
PyvtkImagePlaneWidget_GetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetPoint1_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPoint2(temp0);
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
PyvtkImagePlaneWidget_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImagePlaneWidget_SetPoint2_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_GetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkImagePlaneWidget::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetPoint2(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetPoint2(temp0);
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
PyvtkImagePlaneWidget_GetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetPoint2_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkImagePlaneWidget::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetCenter(temp0);
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
PyvtkImagePlaneWidget_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetCenter_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkImagePlaneWidget::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetNormal(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetNormal(temp0);
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
PyvtkImagePlaneWidget_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImagePlaneWidget_GetNormal_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return nullptr;
}


static PyObject *
PyvtkImagePlaneWidget_GetVector1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetVector1(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetVector1(temp0);
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
PyvtkImagePlaneWidget_GetVector2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetVector2(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetVector2(temp0);
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
PyvtkImagePlaneWidget_GetSliceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceIndex() :
      op->vtkImagePlaneWidget::GetSliceIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSliceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceIndex(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetSliceIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSlicePosition() :
      op->vtkImagePlaneWidget::GetSlicePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlicePosition(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetSlicePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolate(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetResliceInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResliceInterpolate() :
      op->vtkImagePlaneWidget::GetResliceInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToNearestNeighbour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToNearestNeighbour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToNearestNeighbour();
    }
    else
    {
      op->vtkImagePlaneWidget::SetResliceInterpolateToNearestNeighbour();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToLinear();
    }
    else
    {
      op->vtkImagePlaneWidget::SetResliceInterpolateToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToCubic();
    }
    else
    {
      op->vtkImagePlaneWidget::SetResliceInterpolateToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetResliceOutput() :
      op->vtkImagePlaneWidget::GetResliceOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRestrictPlaneToVolume(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetRestrictPlaneToVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRestrictPlaneToVolume() :
      op->vtkImagePlaneWidget::GetRestrictPlaneToVolume());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_RestrictPlaneToVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestrictPlaneToVolumeOn();
    }
    else
    {
      op->vtkImagePlaneWidget::RestrictPlaneToVolumeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_RestrictPlaneToVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RestrictPlaneToVolumeOff();
    }
    else
    {
      op->vtkImagePlaneWidget::RestrictPlaneToVolumeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetUserControlledLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserControlledLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserControlledLookupTable(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetUserControlledLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetUserControlledLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserControlledLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserControlledLookupTable() :
      op->vtkImagePlaneWidget::GetUserControlledLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UserControlledLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserControlledLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserControlledLookupTableOn();
    }
    else
    {
      op->vtkImagePlaneWidget::UserControlledLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UserControlledLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserControlledLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserControlledLookupTableOff();
    }
    else
    {
      op->vtkImagePlaneWidget::UserControlledLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextureInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureInterpolate(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetTextureInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextureInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureInterpolate() :
      op->vtkImagePlaneWidget::GetTextureInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureInterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureInterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureInterpolateOn();
    }
    else
    {
      op->vtkImagePlaneWidget::TextureInterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureInterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureInterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureInterpolateOff();
    }
    else
    {
      op->vtkImagePlaneWidget::TextureInterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextureVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureVisibility(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetTextureVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextureVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureVisibility() :
      op->vtkImagePlaneWidget::GetTextureVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureVisibilityOn();
    }
    else
    {
      op->vtkImagePlaneWidget::TextureVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureVisibilityOff();
    }
    else
    {
      op->vtkImagePlaneWidget::TextureVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetPolyDataAlgorithm() :
      op->vtkImagePlaneWidget::GetPolyDataAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePlacement();
    }
    else
    {
      op->vtkImagePlaneWidget::UpdatePlacement();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTexture *tempr = (ap.IsBound() ?
      op->GetTexture() :
      op->vtkImagePlaneWidget::GetTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToColors *tempr = (ap.IsBound() ?
      op->GetColorMap() :
      op->vtkImagePlaneWidget::GetColorMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkImageMapToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToColors"))
  {
    if (ap.IsBound())
    {
      op->SetColorMap(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetColorMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetPlaneProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetPlaneProperty() :
      op->vtkImagePlaneWidget::GetPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedPlaneProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetSelectedPlaneProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedPlaneProperty() :
      op->vtkImagePlaneWidget::GetSelectedPlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneOrientation(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPlaneOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneOrientation() :
      op->vtkImagePlaneWidget::GetPlaneOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneOrientationToXAxes();
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneOrientationToXAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneOrientationToYAxes();
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneOrientationToYAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneOrientationToZAxes();
    }
    else
    {
      op->vtkImagePlaneWidget::SetPlaneOrientationToZAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkAbstractPropPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPropPicker"))
  {
    if (ap.IsBound())
    {
      op->SetPicker(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetPicker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImagePlaneWidget::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayText(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetDisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayText() :
      op->vtkImagePlaneWidget::GetDisplayText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_DisplayTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayTextOn();
    }
    else
    {
      op->vtkImagePlaneWidget::DisplayTextOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_DisplayTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayTextOff();
    }
    else
    {
      op->vtkImagePlaneWidget::DisplayTextOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetCursorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetCursorProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetCursorProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCursorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetCursorProperty() :
      op->vtkImagePlaneWidget::GetCursorProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetMarginProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMarginProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetMarginProperty() :
      op->vtkImagePlaneWidget::GetMarginProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginSizeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginSizeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarginSizeX(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMarginSizeX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeXMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeXMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeXMinValue() :
      op->vtkImagePlaneWidget::GetMarginSizeXMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeXMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeXMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeXMaxValue() :
      op->vtkImagePlaneWidget::GetMarginSizeXMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeX() :
      op->vtkImagePlaneWidget::GetMarginSizeX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginSizeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginSizeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarginSizeY(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMarginSizeY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeYMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeYMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeYMinValue() :
      op->vtkImagePlaneWidget::GetMarginSizeYMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeYMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeYMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeYMaxValue() :
      op->vtkImagePlaneWidget::GetMarginSizeYMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMarginSizeY() :
      op->vtkImagePlaneWidget::GetMarginSizeY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTextProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkImagePlaneWidget::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTexturePlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTexturePlaneProperty(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetTexturePlaneProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTexturePlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetTexturePlaneProperty() :
      op->vtkImagePlaneWidget::GetTexturePlaneProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  double temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetWindowLevel(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImagePlaneWidget::SetWindowLevel(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetWindowLevel(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::GetWindowLevel(temp0);
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
PyvtkImagePlaneWidget_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkImagePlaneWidget::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkImagePlaneWidget::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCursorData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetCursorData(temp0) :
      op->vtkImagePlaneWidget::GetCursorData(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCursorDataStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorDataStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCursorDataStatus() :
      op->vtkImagePlaneWidget::GetCursorDataStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCurrentCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCurrentCursorPosition() :
      op->vtkImagePlaneWidget::GetCurrentCursorPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCurrentImageValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentImageValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCurrentImageValue() :
      op->vtkImagePlaneWidget::GetCurrentImageValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetResliceAxes() :
      op->vtkImagePlaneWidget::GetResliceAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetReslice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReslice *tempr = (ap.IsBound() ?
      op->GetReslice() :
      op->vtkImagePlaneWidget::GetReslice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetUseContinuousCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseContinuousCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseContinuousCursor(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetUseContinuousCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetUseContinuousCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseContinuousCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseContinuousCursor() :
      op->vtkImagePlaneWidget::GetUseContinuousCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UseContinuousCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseContinuousCursorOn();
    }
    else
    {
      op->vtkImagePlaneWidget::UseContinuousCursorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UseContinuousCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseContinuousCursorOff();
    }
    else
    {
      op->vtkImagePlaneWidget::UseContinuousCursorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetInteraction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInteraction() :
      op->vtkImagePlaneWidget::GetInteraction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_InteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractionOn();
    }
    else
    {
      op->vtkImagePlaneWidget::InteractionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_InteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InteractionOff();
    }
    else
    {
      op->vtkImagePlaneWidget::InteractionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLeftButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftButtonAction(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetLeftButtonAction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonActionMinValue() :
      op->vtkImagePlaneWidget::GetLeftButtonActionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonActionMaxValue() :
      op->vtkImagePlaneWidget::GetLeftButtonActionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonAction() :
      op->vtkImagePlaneWidget::GetLeftButtonAction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMiddleButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMiddleButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMiddleButtonAction(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMiddleButtonAction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonActionMinValue() :
      op->vtkImagePlaneWidget::GetMiddleButtonActionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonActionMaxValue() :
      op->vtkImagePlaneWidget::GetMiddleButtonActionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonAction() :
      op->vtkImagePlaneWidget::GetMiddleButtonAction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRightButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightButtonAction(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetRightButtonAction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonActionMinValue() :
      op->vtkImagePlaneWidget::GetRightButtonActionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonActionMaxValue() :
      op->vtkImagePlaneWidget::GetRightButtonActionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonAction() :
      op->vtkImagePlaneWidget::GetRightButtonAction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLeftButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftButtonAutoModifier(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetLeftButtonAutoModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonAutoModifierMinValue() :
      op->vtkImagePlaneWidget::GetLeftButtonAutoModifierMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonAutoModifierMaxValue() :
      op->vtkImagePlaneWidget::GetLeftButtonAutoModifierMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLeftButtonAutoModifier() :
      op->vtkImagePlaneWidget::GetLeftButtonAutoModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMiddleButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMiddleButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMiddleButtonAutoModifier(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetMiddleButtonAutoModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonAutoModifierMinValue() :
      op->vtkImagePlaneWidget::GetMiddleButtonAutoModifierMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonAutoModifierMaxValue() :
      op->vtkImagePlaneWidget::GetMiddleButtonAutoModifierMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMiddleButtonAutoModifier() :
      op->vtkImagePlaneWidget::GetMiddleButtonAutoModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRightButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightButtonAutoModifier(temp0);
    }
    else
    {
      op->vtkImagePlaneWidget::SetRightButtonAutoModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonAutoModifierMinValue() :
      op->vtkImagePlaneWidget::GetRightButtonAutoModifierMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonAutoModifierMaxValue() :
      op->vtkImagePlaneWidget::GetRightButtonAutoModifierMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRightButtonAutoModifier() :
      op->vtkImagePlaneWidget::GetRightButtonAutoModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImagePlaneWidget_Methods[] = {
  {"IsTypeOf", PyvtkImagePlaneWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImagePlaneWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImagePlaneWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImagePlaneWidget\nC++: static vtkImagePlaneWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImagePlaneWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImagePlaneWidget\nC++: vtkImagePlaneWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImagePlaneWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImagePlaneWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkImagePlaneWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkImagePlaneWidget_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\nPlaceWidget(self) -> None\nC++: void PlaceWidget() override;\nPlaceWidget(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nWe have to redeclare this abstract, PlaceWidget() requires it. \nYou HAVE to override this in your concrete child classes.  If\nthere's no Prop3D and no Input, your PlaceWidget must make use of\nthe underlying PolyDataSource to do its work.\n"},
  {"SetInputConnection", PyvtkImagePlaneWidget_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, aout:vtkAlgorithmOutput) -> None\nC++: void SetInputConnection(vtkAlgorithmOutput *aout) override;\n\nSet the vtkImageData* input for the vtkImageReslice.\n"},
  {"SetOrigin", PyvtkImagePlaneWidget_SetOrigin, METH_VARARGS,
   "SetOrigin(self, x:float, y:float, z:float) -> None\nC++: void SetOrigin(double x, double y, double z)\nSetOrigin(self, xyz:[float, float, float]) -> None\nC++: void SetOrigin(double xyz[3])\n\nSet/Get the origin of the plane.\n"},
  {"GetOrigin", PyvtkImagePlaneWidget_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: double *GetOrigin()\nGetOrigin(self, xyz:[float, float, float]) -> None\nC++: void GetOrigin(double xyz[3])\n\n"},
  {"SetPoint1", PyvtkImagePlaneWidget_SetPoint1, METH_VARARGS,
   "SetPoint1(self, x:float, y:float, z:float) -> None\nC++: void SetPoint1(double x, double y, double z)\nSetPoint1(self, xyz:[float, float, float]) -> None\nC++: void SetPoint1(double xyz[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {"GetPoint1", PyvtkImagePlaneWidget_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> (float, float, float)\nC++: double *GetPoint1()\nGetPoint1(self, xyz:[float, float, float]) -> None\nC++: void GetPoint1(double xyz[3])\n\n"},
  {"SetPoint2", PyvtkImagePlaneWidget_SetPoint2, METH_VARARGS,
   "SetPoint2(self, x:float, y:float, z:float) -> None\nC++: void SetPoint2(double x, double y, double z)\nSetPoint2(self, xyz:[float, float, float]) -> None\nC++: void SetPoint2(double xyz[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {"GetPoint2", PyvtkImagePlaneWidget_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> (float, float, float)\nC++: double *GetPoint2()\nGetPoint2(self, xyz:[float, float, float]) -> None\nC++: void GetPoint2(double xyz[3])\n\n"},
  {"GetCenter", PyvtkImagePlaneWidget_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\nGetCenter(self, xyz:[float, float, float]) -> None\nC++: void GetCenter(double xyz[3])\n\nGet the center of the plane.\n"},
  {"GetNormal", PyvtkImagePlaneWidget_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: double *GetNormal()\nGetNormal(self, xyz:[float, float, float]) -> None\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {"GetVector1", PyvtkImagePlaneWidget_GetVector1, METH_VARARGS,
   "GetVector1(self, v1:[float, float, float]) -> None\nC++: void GetVector1(double v1[3])\n\nGet the vector from the plane origin to point1.\n"},
  {"GetVector2", PyvtkImagePlaneWidget_GetVector2, METH_VARARGS,
   "GetVector2(self, v2:[float, float, float]) -> None\nC++: void GetVector2(double v2[3])\n\nGet the vector from the plane origin to point2.\n"},
  {"GetSliceIndex", PyvtkImagePlaneWidget_GetSliceIndex, METH_VARARGS,
   "GetSliceIndex(self) -> int\nC++: int GetSliceIndex()\n\nGet the slice position in terms of the data extent.\n"},
  {"SetSliceIndex", PyvtkImagePlaneWidget_SetSliceIndex, METH_VARARGS,
   "SetSliceIndex(self, index:int) -> None\nC++: void SetSliceIndex(int index)\n\nSet the slice position in terms of the data extent.\n"},
  {"GetSlicePosition", PyvtkImagePlaneWidget_GetSlicePosition, METH_VARARGS,
   "GetSlicePosition(self) -> float\nC++: double GetSlicePosition()\n\nGet the position of the slice along its normal.\n"},
  {"SetSlicePosition", PyvtkImagePlaneWidget_SetSlicePosition, METH_VARARGS,
   "SetSlicePosition(self, position:float) -> None\nC++: void SetSlicePosition(double position)\n\nSet the position of the slice along its normal.\n"},
  {"SetResliceInterpolate", PyvtkImagePlaneWidget_SetResliceInterpolate, METH_VARARGS,
   "SetResliceInterpolate(self, __a:int) -> None\nC++: void SetResliceInterpolate(int)\n\nSet the interpolation to use when texturing the plane.\n"},
  {"GetResliceInterpolate", PyvtkImagePlaneWidget_GetResliceInterpolate, METH_VARARGS,
   "GetResliceInterpolate(self) -> int\nC++: virtual int GetResliceInterpolate()\n\n"},
  {"SetResliceInterpolateToNearestNeighbour", PyvtkImagePlaneWidget_SetResliceInterpolateToNearestNeighbour, METH_VARARGS,
   "SetResliceInterpolateToNearestNeighbour(self) -> None\nC++: void SetResliceInterpolateToNearestNeighbour()\n\n"},
  {"SetResliceInterpolateToLinear", PyvtkImagePlaneWidget_SetResliceInterpolateToLinear, METH_VARARGS,
   "SetResliceInterpolateToLinear(self) -> None\nC++: void SetResliceInterpolateToLinear()\n\n"},
  {"SetResliceInterpolateToCubic", PyvtkImagePlaneWidget_SetResliceInterpolateToCubic, METH_VARARGS,
   "SetResliceInterpolateToCubic(self) -> None\nC++: void SetResliceInterpolateToCubic()\n\n"},
  {"GetResliceOutput", PyvtkImagePlaneWidget_GetResliceOutput, METH_VARARGS,
   "GetResliceOutput(self) -> vtkImageData\nC++: vtkImageData *GetResliceOutput()\n\nConvenience method to get the vtkImageReslice output.\n"},
  {"SetRestrictPlaneToVolume", PyvtkImagePlaneWidget_SetRestrictPlaneToVolume, METH_VARARGS,
   "SetRestrictPlaneToVolume(self, _arg:int) -> None\nC++: virtual void SetRestrictPlaneToVolume(vtkTypeBool _arg)\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {"GetRestrictPlaneToVolume", PyvtkImagePlaneWidget_GetRestrictPlaneToVolume, METH_VARARGS,
   "GetRestrictPlaneToVolume(self) -> int\nC++: virtual vtkTypeBool GetRestrictPlaneToVolume()\n\n"},
  {"RestrictPlaneToVolumeOn", PyvtkImagePlaneWidget_RestrictPlaneToVolumeOn, METH_VARARGS,
   "RestrictPlaneToVolumeOn(self) -> None\nC++: virtual void RestrictPlaneToVolumeOn()\n\n"},
  {"RestrictPlaneToVolumeOff", PyvtkImagePlaneWidget_RestrictPlaneToVolumeOff, METH_VARARGS,
   "RestrictPlaneToVolumeOff(self) -> None\nC++: virtual void RestrictPlaneToVolumeOff()\n\n"},
  {"SetUserControlledLookupTable", PyvtkImagePlaneWidget_SetUserControlledLookupTable, METH_VARARGS,
   "SetUserControlledLookupTable(self, _arg:int) -> None\nC++: virtual void SetUserControlledLookupTable(vtkTypeBool _arg)\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {"GetUserControlledLookupTable", PyvtkImagePlaneWidget_GetUserControlledLookupTable, METH_VARARGS,
   "GetUserControlledLookupTable(self) -> int\nC++: virtual vtkTypeBool GetUserControlledLookupTable()\n\n"},
  {"UserControlledLookupTableOn", PyvtkImagePlaneWidget_UserControlledLookupTableOn, METH_VARARGS,
   "UserControlledLookupTableOn(self) -> None\nC++: virtual void UserControlledLookupTableOn()\n\n"},
  {"UserControlledLookupTableOff", PyvtkImagePlaneWidget_UserControlledLookupTableOff, METH_VARARGS,
   "UserControlledLookupTableOff(self) -> None\nC++: virtual void UserControlledLookupTableOff()\n\n"},
  {"SetTextureInterpolate", PyvtkImagePlaneWidget_SetTextureInterpolate, METH_VARARGS,
   "SetTextureInterpolate(self, _arg:int) -> None\nC++: virtual void SetTextureInterpolate(vtkTypeBool _arg)\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {"GetTextureInterpolate", PyvtkImagePlaneWidget_GetTextureInterpolate, METH_VARARGS,
   "GetTextureInterpolate(self) -> int\nC++: virtual vtkTypeBool GetTextureInterpolate()\n\n"},
  {"TextureInterpolateOn", PyvtkImagePlaneWidget_TextureInterpolateOn, METH_VARARGS,
   "TextureInterpolateOn(self) -> None\nC++: virtual void TextureInterpolateOn()\n\n"},
  {"TextureInterpolateOff", PyvtkImagePlaneWidget_TextureInterpolateOff, METH_VARARGS,
   "TextureInterpolateOff(self) -> None\nC++: virtual void TextureInterpolateOff()\n\n"},
  {"SetTextureVisibility", PyvtkImagePlaneWidget_SetTextureVisibility, METH_VARARGS,
   "SetTextureVisibility(self, __a:int) -> None\nC++: virtual void SetTextureVisibility(vtkTypeBool)\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {"GetTextureVisibility", PyvtkImagePlaneWidget_GetTextureVisibility, METH_VARARGS,
   "GetTextureVisibility(self) -> int\nC++: virtual vtkTypeBool GetTextureVisibility()\n\n"},
  {"TextureVisibilityOn", PyvtkImagePlaneWidget_TextureVisibilityOn, METH_VARARGS,
   "TextureVisibilityOn(self) -> None\nC++: virtual void TextureVisibilityOn()\n\n"},
  {"TextureVisibilityOff", PyvtkImagePlaneWidget_TextureVisibilityOff, METH_VARARGS,
   "TextureVisibilityOff(self) -> None\nC++: virtual void TextureVisibilityOff()\n\n"},
  {"GetPolyData", PyvtkImagePlaneWidget_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the plane.  The\npolydata consists of (res+1)*(res+1) points, and res*res\nquadrilateral polygons, where res is the resolution of the plane.\nThese point values are guaranteed to be up-to-date when either\nthe InteractionEvent or EndInteraction events are invoked. The\nuser provides the vtkPolyData and the points and polygons are\nadded to it.\n"},
  {"GetPolyDataAlgorithm", PyvtkImagePlaneWidget_GetPolyDataAlgorithm, METH_VARARGS,
   "GetPolyDataAlgorithm(self) -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm() override;\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying vtkPolyData.  Make changes to this before calling the\ninitial PlaceWidget() to have the initial placement follow suit. \nOr, make changes after the widget has been initialised and call\nUpdatePlacement() to realise.\n"},
  {"UpdatePlacement", PyvtkImagePlaneWidget_UpdatePlacement, METH_VARARGS,
   "UpdatePlacement(self) -> None\nC++: void UpdatePlacement() override;\n\nSatisfies superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nvtkPolyDataSource\n"},
  {"GetTexture", PyvtkImagePlaneWidget_GetTexture, METH_VARARGS,
   "GetTexture(self) -> vtkTexture\nC++: vtkTexture *GetTexture()\n\nConvenience method to get the texture used by this widget.  This\ncan be used in external slice viewers.\n"},
  {"GetColorMap", PyvtkImagePlaneWidget_GetColorMap, METH_VARARGS,
   "GetColorMap(self) -> vtkImageMapToColors\nC++: virtual vtkImageMapToColors *GetColorMap()\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {"SetColorMap", PyvtkImagePlaneWidget_SetColorMap, METH_VARARGS,
   "SetColorMap(self, __a:vtkImageMapToColors) -> None\nC++: virtual void SetColorMap(vtkImageMapToColors *)\n\n"},
  {"SetPlaneProperty", PyvtkImagePlaneWidget_SetPlaneProperty, METH_VARARGS,
   "SetPlaneProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetPlaneProperty(vtkProperty *)\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {"GetPlaneProperty", PyvtkImagePlaneWidget_GetPlaneProperty, METH_VARARGS,
   "GetPlaneProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetPlaneProperty()\n\n"},
  {"SetSelectedPlaneProperty", PyvtkImagePlaneWidget_SetSelectedPlaneProperty, METH_VARARGS,
   "SetSelectedPlaneProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetSelectedPlaneProperty(vtkProperty *)\n\n"},
  {"GetSelectedPlaneProperty", PyvtkImagePlaneWidget_GetSelectedPlaneProperty, METH_VARARGS,
   "GetSelectedPlaneProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedPlaneProperty()\n\n"},
  {"SetPlaneOrientation", PyvtkImagePlaneWidget_SetPlaneOrientation, METH_VARARGS,
   "SetPlaneOrientation(self, __a:int) -> None\nC++: void SetPlaneOrientation(int)\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {"GetPlaneOrientation", PyvtkImagePlaneWidget_GetPlaneOrientation, METH_VARARGS,
   "GetPlaneOrientation(self) -> int\nC++: virtual int GetPlaneOrientation()\n\n"},
  {"SetPlaneOrientationToXAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToXAxes, METH_VARARGS,
   "SetPlaneOrientationToXAxes(self) -> None\nC++: void SetPlaneOrientationToXAxes()\n\n"},
  {"SetPlaneOrientationToYAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToYAxes, METH_VARARGS,
   "SetPlaneOrientationToYAxes(self) -> None\nC++: void SetPlaneOrientationToYAxes()\n\n"},
  {"SetPlaneOrientationToZAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToZAxes, METH_VARARGS,
   "SetPlaneOrientationToZAxes(self) -> None\nC++: void SetPlaneOrientationToZAxes()\n\n"},
  {"SetPicker", PyvtkImagePlaneWidget_SetPicker, METH_VARARGS,
   "SetPicker(self, __a:vtkAbstractPropPicker) -> None\nC++: void SetPicker(vtkAbstractPropPicker *)\n\nSet the internal picker to one defined by the user.  In this way,\na set of three orthogonal planes can share the same picker so\nthat picking is performed correctly.  The default internal picker\ncan be re-set/allocated by setting to 0 (nullptr).\n"},
  {"SetLookupTable", PyvtkImagePlaneWidget_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, __a:vtkLookupTable) -> None\nC++: virtual void SetLookupTable(vtkLookupTable *)\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another\nvtkImgePlaneWidget.  In this way, a set of three orthogonal\nplanes can share the same lut so that window-levelling is\nperformed uniformly among planes.  The default internal lut can\nbe re- set/allocated by setting to 0 (nullptr).\n"},
  {"GetLookupTable", PyvtkImagePlaneWidget_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\n"},
  {"SetDisplayText", PyvtkImagePlaneWidget_SetDisplayText, METH_VARARGS,
   "SetDisplayText(self, _arg:int) -> None\nC++: virtual void SetDisplayText(vtkTypeBool _arg)\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {"GetDisplayText", PyvtkImagePlaneWidget_GetDisplayText, METH_VARARGS,
   "GetDisplayText(self) -> int\nC++: virtual vtkTypeBool GetDisplayText()\n\n"},
  {"DisplayTextOn", PyvtkImagePlaneWidget_DisplayTextOn, METH_VARARGS,
   "DisplayTextOn(self) -> None\nC++: virtual void DisplayTextOn()\n\n"},
  {"DisplayTextOff", PyvtkImagePlaneWidget_DisplayTextOff, METH_VARARGS,
   "DisplayTextOff(self) -> None\nC++: virtual void DisplayTextOff()\n\n"},
  {"SetCursorProperty", PyvtkImagePlaneWidget_SetCursorProperty, METH_VARARGS,
   "SetCursorProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetCursorProperty(vtkProperty *)\n\nSet the properties of the cross-hair cursor.\n"},
  {"GetCursorProperty", PyvtkImagePlaneWidget_GetCursorProperty, METH_VARARGS,
   "GetCursorProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetCursorProperty()\n\n"},
  {"SetMarginProperty", PyvtkImagePlaneWidget_SetMarginProperty, METH_VARARGS,
   "SetMarginProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetMarginProperty(vtkProperty *)\n\nSet the properties of the margins.\n"},
  {"GetMarginProperty", PyvtkImagePlaneWidget_GetMarginProperty, METH_VARARGS,
   "GetMarginProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetMarginProperty()\n\n"},
  {"SetMarginSizeX", PyvtkImagePlaneWidget_SetMarginSizeX, METH_VARARGS,
   "SetMarginSizeX(self, _arg:float) -> None\nC++: virtual void SetMarginSizeX(double _arg)\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {"GetMarginSizeXMinValue", PyvtkImagePlaneWidget_GetMarginSizeXMinValue, METH_VARARGS,
   "GetMarginSizeXMinValue(self) -> float\nC++: virtual double GetMarginSizeXMinValue()\n\n"},
  {"GetMarginSizeXMaxValue", PyvtkImagePlaneWidget_GetMarginSizeXMaxValue, METH_VARARGS,
   "GetMarginSizeXMaxValue(self) -> float\nC++: virtual double GetMarginSizeXMaxValue()\n\n"},
  {"GetMarginSizeX", PyvtkImagePlaneWidget_GetMarginSizeX, METH_VARARGS,
   "GetMarginSizeX(self) -> float\nC++: virtual double GetMarginSizeX()\n\n"},
  {"SetMarginSizeY", PyvtkImagePlaneWidget_SetMarginSizeY, METH_VARARGS,
   "SetMarginSizeY(self, _arg:float) -> None\nC++: virtual void SetMarginSizeY(double _arg)\n\n"},
  {"GetMarginSizeYMinValue", PyvtkImagePlaneWidget_GetMarginSizeYMinValue, METH_VARARGS,
   "GetMarginSizeYMinValue(self) -> float\nC++: virtual double GetMarginSizeYMinValue()\n\n"},
  {"GetMarginSizeYMaxValue", PyvtkImagePlaneWidget_GetMarginSizeYMaxValue, METH_VARARGS,
   "GetMarginSizeYMaxValue(self) -> float\nC++: virtual double GetMarginSizeYMaxValue()\n\n"},
  {"GetMarginSizeY", PyvtkImagePlaneWidget_GetMarginSizeY, METH_VARARGS,
   "GetMarginSizeY(self) -> float\nC++: virtual double GetMarginSizeY()\n\n"},
  {"SetTextProperty", PyvtkImagePlaneWidget_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, tprop:vtkTextProperty) -> None\nC++: void SetTextProperty(vtkTextProperty *tprop)\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {"GetTextProperty", PyvtkImagePlaneWidget_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\n"},
  {"SetTexturePlaneProperty", PyvtkImagePlaneWidget_SetTexturePlaneProperty, METH_VARARGS,
   "SetTexturePlaneProperty(self, __a:vtkProperty) -> None\nC++: virtual void SetTexturePlaneProperty(vtkProperty *)\n\nSet/Get the property for the resliced image.\n"},
  {"GetTexturePlaneProperty", PyvtkImagePlaneWidget_GetTexturePlaneProperty, METH_VARARGS,
   "GetTexturePlaneProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetTexturePlaneProperty()\n\n"},
  {"SetWindowLevel", PyvtkImagePlaneWidget_SetWindowLevel, METH_VARARGS,
   "SetWindowLevel(self, window:float, level:float, copy:int=0)\n    -> None\nC++: void SetWindowLevel(double window, double level, int copy=0)\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {"GetWindowLevel", PyvtkImagePlaneWidget_GetWindowLevel, METH_VARARGS,
   "GetWindowLevel(self, wl:[float, float]) -> None\nC++: void GetWindowLevel(double wl[2])\n\n"},
  {"GetWindow", PyvtkImagePlaneWidget_GetWindow, METH_VARARGS,
   "GetWindow(self) -> float\nC++: double GetWindow()\n\n"},
  {"GetLevel", PyvtkImagePlaneWidget_GetLevel, METH_VARARGS,
   "GetLevel(self) -> float\nC++: double GetLevel()\n\n"},
  {"GetCursorData", PyvtkImagePlaneWidget_GetCursorData, METH_VARARGS,
   "GetCursorData(self, xyzv:[float, float, float, float]) -> int\nC++: int GetCursorData(double xyzv[4])\n\nGet the image coordinate position and voxel value.  Currently\nonly supports single component image data.\n"},
  {"GetCursorDataStatus", PyvtkImagePlaneWidget_GetCursorDataStatus, METH_VARARGS,
   "GetCursorDataStatus(self) -> int\nC++: int GetCursorDataStatus()\n\nGet the status of the cursor data.  If this returns 1 the\nCurrentCursorPosition and CurrentImageValue will have current\ndata.  If it returns 0, these values are invalid.\n"},
  {"GetCurrentCursorPosition", PyvtkImagePlaneWidget_GetCurrentCursorPosition, METH_VARARGS,
   "GetCurrentCursorPosition(self) -> (float, float, float)\nC++: virtual double *GetCurrentCursorPosition()\n\nGet the current cursor position.  To be used in conjunction with\nGetCursorDataStatus.\n"},
  {"GetCurrentImageValue", PyvtkImagePlaneWidget_GetCurrentImageValue, METH_VARARGS,
   "GetCurrentImageValue(self) -> float\nC++: virtual double GetCurrentImageValue()\n\nGet the current image value at the current cursor position.  To\nbe used in conjunction with GetCursorDataStatus.  The value is\nVTK_DOUBLE_MAX when the data is invalid.\n"},
  {"GetResliceAxes", PyvtkImagePlaneWidget_GetResliceAxes, METH_VARARGS,
   "GetResliceAxes(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetResliceAxes()\n\nGet the current reslice class and reslice axes\n"},
  {"GetReslice", PyvtkImagePlaneWidget_GetReslice, METH_VARARGS,
   "GetReslice(self) -> vtkImageReslice\nC++: virtual vtkImageReslice *GetReslice()\n\n"},
  {"SetUseContinuousCursor", PyvtkImagePlaneWidget_SetUseContinuousCursor, METH_VARARGS,
   "SetUseContinuousCursor(self, _arg:int) -> None\nC++: virtual void SetUseContinuousCursor(vtkTypeBool _arg)\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {"GetUseContinuousCursor", PyvtkImagePlaneWidget_GetUseContinuousCursor, METH_VARARGS,
   "GetUseContinuousCursor(self) -> int\nC++: virtual vtkTypeBool GetUseContinuousCursor()\n\n"},
  {"UseContinuousCursorOn", PyvtkImagePlaneWidget_UseContinuousCursorOn, METH_VARARGS,
   "UseContinuousCursorOn(self) -> None\nC++: virtual void UseContinuousCursorOn()\n\n"},
  {"UseContinuousCursorOff", PyvtkImagePlaneWidget_UseContinuousCursorOff, METH_VARARGS,
   "UseContinuousCursorOff(self) -> None\nC++: virtual void UseContinuousCursorOff()\n\n"},
  {"SetInteraction", PyvtkImagePlaneWidget_SetInteraction, METH_VARARGS,
   "SetInteraction(self, interact:int) -> None\nC++: void SetInteraction(vtkTypeBool interact)\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {"GetInteraction", PyvtkImagePlaneWidget_GetInteraction, METH_VARARGS,
   "GetInteraction(self) -> int\nC++: virtual vtkTypeBool GetInteraction()\n\n"},
  {"InteractionOn", PyvtkImagePlaneWidget_InteractionOn, METH_VARARGS,
   "InteractionOn(self) -> None\nC++: virtual void InteractionOn()\n\n"},
  {"InteractionOff", PyvtkImagePlaneWidget_InteractionOff, METH_VARARGS,
   "InteractionOff(self) -> None\nC++: virtual void InteractionOff()\n\n"},
  {"SetLeftButtonAction", PyvtkImagePlaneWidget_SetLeftButtonAction, METH_VARARGS,
   "SetLeftButtonAction(self, _arg:int) -> None\nC++: virtual void SetLeftButtonAction(int _arg)\n\n"},
  {"GetLeftButtonActionMinValue", PyvtkImagePlaneWidget_GetLeftButtonActionMinValue, METH_VARARGS,
   "GetLeftButtonActionMinValue(self) -> int\nC++: virtual int GetLeftButtonActionMinValue()\n\n"},
  {"GetLeftButtonActionMaxValue", PyvtkImagePlaneWidget_GetLeftButtonActionMaxValue, METH_VARARGS,
   "GetLeftButtonActionMaxValue(self) -> int\nC++: virtual int GetLeftButtonActionMaxValue()\n\n"},
  {"GetLeftButtonAction", PyvtkImagePlaneWidget_GetLeftButtonAction, METH_VARARGS,
   "GetLeftButtonAction(self) -> int\nC++: virtual int GetLeftButtonAction()\n\n"},
  {"SetMiddleButtonAction", PyvtkImagePlaneWidget_SetMiddleButtonAction, METH_VARARGS,
   "SetMiddleButtonAction(self, _arg:int) -> None\nC++: virtual void SetMiddleButtonAction(int _arg)\n\n"},
  {"GetMiddleButtonActionMinValue", PyvtkImagePlaneWidget_GetMiddleButtonActionMinValue, METH_VARARGS,
   "GetMiddleButtonActionMinValue(self) -> int\nC++: virtual int GetMiddleButtonActionMinValue()\n\n"},
  {"GetMiddleButtonActionMaxValue", PyvtkImagePlaneWidget_GetMiddleButtonActionMaxValue, METH_VARARGS,
   "GetMiddleButtonActionMaxValue(self) -> int\nC++: virtual int GetMiddleButtonActionMaxValue()\n\n"},
  {"GetMiddleButtonAction", PyvtkImagePlaneWidget_GetMiddleButtonAction, METH_VARARGS,
   "GetMiddleButtonAction(self) -> int\nC++: virtual int GetMiddleButtonAction()\n\n"},
  {"SetRightButtonAction", PyvtkImagePlaneWidget_SetRightButtonAction, METH_VARARGS,
   "SetRightButtonAction(self, _arg:int) -> None\nC++: virtual void SetRightButtonAction(int _arg)\n\n"},
  {"GetRightButtonActionMinValue", PyvtkImagePlaneWidget_GetRightButtonActionMinValue, METH_VARARGS,
   "GetRightButtonActionMinValue(self) -> int\nC++: virtual int GetRightButtonActionMinValue()\n\n"},
  {"GetRightButtonActionMaxValue", PyvtkImagePlaneWidget_GetRightButtonActionMaxValue, METH_VARARGS,
   "GetRightButtonActionMaxValue(self) -> int\nC++: virtual int GetRightButtonActionMaxValue()\n\n"},
  {"GetRightButtonAction", PyvtkImagePlaneWidget_GetRightButtonAction, METH_VARARGS,
   "GetRightButtonAction(self) -> int\nC++: virtual int GetRightButtonAction()\n\n"},
  {"SetLeftButtonAutoModifier", PyvtkImagePlaneWidget_SetLeftButtonAutoModifier, METH_VARARGS,
   "SetLeftButtonAutoModifier(self, _arg:int) -> None\nC++: virtual void SetLeftButtonAutoModifier(int _arg)\n\n"},
  {"GetLeftButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMinValue, METH_VARARGS,
   "GetLeftButtonAutoModifierMinValue(self) -> int\nC++: virtual int GetLeftButtonAutoModifierMinValue()\n\n"},
  {"GetLeftButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMaxValue, METH_VARARGS,
   "GetLeftButtonAutoModifierMaxValue(self) -> int\nC++: virtual int GetLeftButtonAutoModifierMaxValue()\n\n"},
  {"GetLeftButtonAutoModifier", PyvtkImagePlaneWidget_GetLeftButtonAutoModifier, METH_VARARGS,
   "GetLeftButtonAutoModifier(self) -> int\nC++: virtual int GetLeftButtonAutoModifier()\n\n"},
  {"SetMiddleButtonAutoModifier", PyvtkImagePlaneWidget_SetMiddleButtonAutoModifier, METH_VARARGS,
   "SetMiddleButtonAutoModifier(self, _arg:int) -> None\nC++: virtual void SetMiddleButtonAutoModifier(int _arg)\n\n"},
  {"GetMiddleButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMinValue, METH_VARARGS,
   "GetMiddleButtonAutoModifierMinValue(self) -> int\nC++: virtual int GetMiddleButtonAutoModifierMinValue()\n\n"},
  {"GetMiddleButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMaxValue, METH_VARARGS,
   "GetMiddleButtonAutoModifierMaxValue(self) -> int\nC++: virtual int GetMiddleButtonAutoModifierMaxValue()\n\n"},
  {"GetMiddleButtonAutoModifier", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifier, METH_VARARGS,
   "GetMiddleButtonAutoModifier(self) -> int\nC++: virtual int GetMiddleButtonAutoModifier()\n\n"},
  {"SetRightButtonAutoModifier", PyvtkImagePlaneWidget_SetRightButtonAutoModifier, METH_VARARGS,
   "SetRightButtonAutoModifier(self, _arg:int) -> None\nC++: virtual void SetRightButtonAutoModifier(int _arg)\n\n"},
  {"GetRightButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetRightButtonAutoModifierMinValue, METH_VARARGS,
   "GetRightButtonAutoModifierMinValue(self) -> int\nC++: virtual int GetRightButtonAutoModifierMinValue()\n\n"},
  {"GetRightButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetRightButtonAutoModifierMaxValue, METH_VARARGS,
   "GetRightButtonAutoModifierMaxValue(self) -> int\nC++: virtual int GetRightButtonAutoModifierMaxValue()\n\n"},
  {"GetRightButtonAutoModifier", PyvtkImagePlaneWidget_GetRightButtonAutoModifier, METH_VARARGS,
   "GetRightButtonAutoModifier(self) -> int\nC++: virtual int GetRightButtonAutoModifier()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImagePlaneWidget_Doc =
  "vtkImagePlaneWidget - 3D widget for reslicing image data\n\n"
  "Superclass: vtkPolyDataSourceWidget\n\n"
  "This 3D widget defines a plane that can be interactively placed in an\n"
  "image volume. A nice feature of the object is that the\n"
  "vtkImagePlaneWidget, like any 3D widget, will work with the current\n"
  "interactor style. That is, if vtkImagePlaneWidget does not handle an\n"
  "event, then all other registered observers (including the interactor\n"
  "style) have an opportunity to process the event. Otherwise, the\n"
  "vtkImagePlaneWidget will terminate the processing of the event that\n"
  "it handles.\n\n"
  "The core functionality of the widget is provided by a vtkImageReslice\n"
  "object which passes its output onto a texture mapping pipeline for\n"
  "fast slicing through volumetric data. See the key methods:\n"
  "GenerateTexturePlane() and UpdatePlane() for implementation details.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. If the \"i\" key (for\n"
  "\"interactor\") is pressed, the vtkImagePlaneWidget will appear. (See\n"
  "superclass documentation for information about changing this\n"
  "behavior.)\n\n"
  "Selecting the widget with the middle mouse button with and without\n"
  "holding the shift or control keys enables complex reslicing\n"
  "capablilites. To facilitate use, a set of 'margins' (left, right,\n"
  "top, bottom) are shown as a set of plane-axes aligned lines, the\n"
  "properties of which can be changed as a group. Without keyboard\n"
  "modifiers: selecting in the middle of the margins enables translation\n"
  "of the plane along its normal. Selecting one of the corners within\n"
  "the margins enables spinning around the plane's normal at its center.\n"
  " Selecting within a margin allows rotating about the center of the\n"
  "plane around an axis aligned with the margin (i.e., selecting left\n"
  "margin enables rotating around the plane's local y-prime axis). With\n"
  "control key modifier: margin selection enables edge translation\n"
  "(i.e., a constrained form of scaling). Selecting within the margins\n"
  "enables translation of the entire plane. With shift key modifier:\n"
  "uniform plane scaling is enabled.  Moving the mouse up enlarges the\n"
  "plane while downward movement shrinks it.\n\n"
  "Window-level is achieved by using the right mouse button. \n"
  "Window-level values can be reset by shift + 'r' or control + 'r'\n"
  "while regular reset camera is maintained with 'r' or 'R'. The left\n"
  "mouse button can be used to query the underlying image data with a\n"
  "snap-to cross-hair cursor.  Currently, the nearest point in the input\n"
  "image data to the mouse cursor generates the cross-hairs.  With\n"
  "oblique slicing, this behaviour may appear unsatisfactory. Text\n"
  "display of window-level and image coordinates/data values are\n"
  "provided by a text actor/mapper pair.\n\n"
  "Events that occur outside of the widget (i.e., no part of the widget\n"
  "is picked) are propagated to any other registered obsevers (such as\n"
  "the interaction style). Turn off the widget by pressing the \"i\" key\n"
  "again (or invoke the Off() method). To support interactive\n"
  "manipulation of objects, this class invokes the events\n"
  "StartInteractionEvent, InteractionEvent, and EndInteractionEvent as\n"
  "well as StartWindowLevelEvent, WindowLevelEvent, EndWindowLevelEvent\n"
  "and ResetWindowLevelEvent.\n\n"
  "The vtkImagePlaneWidget has several methods that can be used in\n"
  "conjunction with other VTK objects. The GetPolyData() method can be\n"
  "used to get the polygonal representation of the plane and can be used\n"
  "as input for other VTK objects. Typical usage of the widget is to\n"
  "make use of the StartInteractionEvent, InteractionEvent, and\n"
  "EndInteractionEvent events. The InteractionEvent is called on mouse\n"
  "motion; the other two events are called on button down and button up\n"
  "(either left or right button).\n\n"
  "Some additional features of this class include the ability to control\n"
  "the properties of the widget. You can set the properties of: the\n"
  "selected and unselected representations of the plane's outline; the\n"
  "text actor via its vtkTextProperty; the cross-hair cursor. In\n"
  "addition there are methods to constrain the plane so that it is\n"
  "aligned along the x-y-z axes.  Finally, one can specify the degree of\n"
  "interpolation (vtkImageReslice): nearest neighbour, linear, and\n"
  "cubic.\n\n"
  "A simpler version of this widget is the combination of\n"
  "vtkImplicitPlaneWidget2 combined with the representation\n"
  "vtkImplicitImageRepresentation.\n\n"
  "@par Thanks: Thanks to Dean Inglis for developing and contributing\n"
  "this class. Based on the Python SlicePlaneFactory from Atamai, Inc.\n\n"
  "@sa\n"
  "vtk3DWidget vtkBoxWidget vtkLineWidget  vtkPlaneWidget vtkPointWidget\n"
  "vtkPolyDataSourceWidget vtkSphereWidget vtkImplicitPlaneWidget\n"
  "vtkImplicitPlaneWidget2 vtkImplicitImageRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImagePlaneWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImagePlaneWidget", // tp_name
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
  PyvtkImagePlaneWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImagePlaneWidget_StaticNew()
{
  return vtkImagePlaneWidget::New();
}

PyObject *PyvtkImagePlaneWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImagePlaneWidget_Type, PyvtkImagePlaneWidget_Methods,
    "vtkImagePlaneWidget",
 &PyvtkImagePlaneWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataSourceWidget_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "VTK_CURSOR_ACTION", vtkImagePlaneWidget::VTK_CURSOR_ACTION },
        { "VTK_SLICE_MOTION_ACTION", vtkImagePlaneWidget::VTK_SLICE_MOTION_ACTION },
        { "VTK_WINDOW_LEVEL_ACTION", vtkImagePlaneWidget::VTK_WINDOW_LEVEL_ACTION },
        { "VTK_NO_MODIFIER", vtkImagePlaneWidget::VTK_NO_MODIFIER },
        { "VTK_SHIFT_MODIFIER", vtkImagePlaneWidget::VTK_SHIFT_MODIFIER },
        { "VTK_CONTROL_MODIFIER", vtkImagePlaneWidget::VTK_CONTROL_MODIFIER },
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

void PyVTKAddFile_vtkImagePlaneWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImagePlaneWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImagePlaneWidget", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_NEAREST_RESLICE", 0 },
        { "VTK_LINEAR_RESLICE", 1 },
        { "VTK_CUBIC_RESLICE", 2 },
        { "VTK_IMAGE_PLANE_WIDGET_MAX_TEXTBUFF", 128 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

