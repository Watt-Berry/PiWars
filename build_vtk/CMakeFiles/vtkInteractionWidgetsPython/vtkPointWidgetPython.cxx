// python wrapper for vtkPointWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkPointWidget_ClassNew(); }

#ifndef DECLARED_Pyvtk3DWidget_ClassNew
extern "C" { PyObject *Pyvtk3DWidget_ClassNew(); }
#define DECLARED_Pyvtk3DWidget_ClassNew
#endif

static PyObject *
PyvtkPointWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointWidget *tempr = vtkPointWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointWidget::NewInstance());

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
PyvtkPointWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::PlaceWidget(temp0);
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
PyvtkPointWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlaceWidget();
    }
    else
    {
      op->vtkPointWidget::PlaceWidget();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkPointWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkPointWidget_PlaceWidget_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return nullptr;
}


static PyObject *
PyvtkPointWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->vtkPointWidget::GetPolyData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPointWidget::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPointWidget_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkPointWidget::SetPosition(temp0);
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
PyvtkPointWidget_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPointWidget_SetPosition_s1(self, args);
    case 1:
      return PyvtkPointWidget_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkPointWidget_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkPointWidget::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkPointWidget_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

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
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkPointWidget::GetPosition(temp0);
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
PyvtkPointWidget_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPointWidget_GetPosition_s1(self, args);
    case 1:
      return PyvtkPointWidget_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}


static PyObject *
PyvtkPointWidget_SetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutline(temp0);
    }
    else
    {
      op->vtkPointWidget::SetOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutline() :
      op->vtkPointWidget::GetOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_OutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOn();
    }
    else
    {
      op->vtkPointWidget::OutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_OutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutlineOff();
    }
    else
    {
      op->vtkPointWidget::OutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXShadows(temp0);
    }
    else
    {
      op->vtkPointWidget::SetXShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetXShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXShadows() :
      op->vtkPointWidget::GetXShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_XShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XShadowsOn();
    }
    else
    {
      op->vtkPointWidget::XShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_XShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "XShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->XShadowsOff();
    }
    else
    {
      op->vtkPointWidget::XShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYShadows(temp0);
    }
    else
    {
      op->vtkPointWidget::SetYShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetYShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYShadows() :
      op->vtkPointWidget::GetYShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_YShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YShadowsOn();
    }
    else
    {
      op->vtkPointWidget::YShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_YShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "YShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->YShadowsOff();
    }
    else
    {
      op->vtkPointWidget::YShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZShadows(temp0);
    }
    else
    {
      op->vtkPointWidget::SetZShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetZShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZShadows() :
      op->vtkPointWidget::GetZShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_ZShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZShadowsOn();
    }
    else
    {
      op->vtkPointWidget::ZShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_ZShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ZShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ZShadowsOff();
    }
    else
    {
      op->vtkPointWidget::ZShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationMode(temp0);
    }
    else
    {
      op->vtkPointWidget::SetTranslationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetTranslationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationMode() :
      op->vtkPointWidget::GetTranslationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_TranslationModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOn();
    }
    else
    {
      op->vtkPointWidget::TranslationModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_TranslationModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationModeOff();
    }
    else
    {
      op->vtkPointWidget::TranslationModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_AllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOn();
    }
    else
    {
      op->vtkPointWidget::AllOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_AllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllOff();
    }
    else
    {
      op->vtkPointWidget::AllOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkPointWidget::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkPointWidget::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_SetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHotSpotSize(temp0);
    }
    else
    {
      op->vtkPointWidget::SetHotSpotSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMinValue() :
      op->vtkPointWidget::GetHotSpotSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSizeMaxValue() :
      op->vtkPointWidget::GetHotSpotSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointWidget_GetHotSpotSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHotSpotSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointWidget *op = static_cast<vtkPointWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHotSpotSize() :
      op->vtkPointWidget::GetHotSpotSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointWidget_Methods[] = {
  {"IsTypeOf", PyvtkPointWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointWidget\nC++: static vtkPointWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointWidget\nC++: vtkPointWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEnabled", PyvtkPointWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, __a:int) -> None\nC++: void SetEnabled(int) override;\n\nMethods that satisfy the superclass' API.\n"},
  {"PlaceWidget", PyvtkPointWidget_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\nPlaceWidget(self) -> None\nC++: void PlaceWidget() override;\nPlaceWidget(self, xmin:float, xmax:float, ymin:float, ymax:float,\n    zmin:float, zmax:float) -> None\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax) override;\n\nThis method is used to initially place the widget.  The placement\nof the widget depends on whether a Prop3D or input dataset is\nprovided. If one of these two is provided, they will be used to\nobtain a bounding box, around which the widget is placed.\nOtherwise, you can manually specify a bounds with the\nPlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required\nby all subclasses; the other methods are provided as convenience\nmethods.\n"},
  {"GetPolyData", PyvtkPointWidget_GetPolyData, METH_VARARGS,
   "GetPolyData(self, pd:vtkPolyData) -> None\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the point. A\nsingle point and a vertex compose the vtkPolyData.\n"},
  {"SetPosition", PyvtkPointWidget_SetPosition, METH_VARARGS,
   "SetPosition(self, x:float, y:float, z:float) -> None\nC++: void SetPosition(double x, double y, double z)\nSetPosition(self, x:[float, float, float]) -> None\nC++: void SetPosition(double x[3])\n\nSet/Get the position of the point. Note that if the position is\nset outside of the bounding box, it will be clamped to the\nboundary of the bounding box.\n"},
  {"GetPosition", PyvtkPointWidget_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float, float)\nC++: double *GetPosition()\nGetPosition(self, xyz:[float, float, float]) -> None\nC++: void GetPosition(double xyz[3])\n\n"},
  {"SetOutline", PyvtkPointWidget_SetOutline, METH_VARARGS,
   "SetOutline(self, o:int) -> None\nC++: void SetOutline(int o)\n\nTurn on/off the wireframe bounding box.\n"},
  {"GetOutline", PyvtkPointWidget_GetOutline, METH_VARARGS,
   "GetOutline(self) -> int\nC++: int GetOutline()\n\n"},
  {"OutlineOn", PyvtkPointWidget_OutlineOn, METH_VARARGS,
   "OutlineOn(self) -> None\nC++: void OutlineOn()\n\n"},
  {"OutlineOff", PyvtkPointWidget_OutlineOff, METH_VARARGS,
   "OutlineOff(self) -> None\nC++: void OutlineOff()\n\n"},
  {"SetXShadows", PyvtkPointWidget_SetXShadows, METH_VARARGS,
   "SetXShadows(self, o:int) -> None\nC++: void SetXShadows(int o)\n\nTurn on/off the wireframe x-shadows.\n"},
  {"GetXShadows", PyvtkPointWidget_GetXShadows, METH_VARARGS,
   "GetXShadows(self) -> int\nC++: int GetXShadows()\n\n"},
  {"XShadowsOn", PyvtkPointWidget_XShadowsOn, METH_VARARGS,
   "XShadowsOn(self) -> None\nC++: void XShadowsOn()\n\n"},
  {"XShadowsOff", PyvtkPointWidget_XShadowsOff, METH_VARARGS,
   "XShadowsOff(self) -> None\nC++: void XShadowsOff()\n\n"},
  {"SetYShadows", PyvtkPointWidget_SetYShadows, METH_VARARGS,
   "SetYShadows(self, o:int) -> None\nC++: void SetYShadows(int o)\n\nTurn on/off the wireframe y-shadows.\n"},
  {"GetYShadows", PyvtkPointWidget_GetYShadows, METH_VARARGS,
   "GetYShadows(self) -> int\nC++: int GetYShadows()\n\n"},
  {"YShadowsOn", PyvtkPointWidget_YShadowsOn, METH_VARARGS,
   "YShadowsOn(self) -> None\nC++: void YShadowsOn()\n\n"},
  {"YShadowsOff", PyvtkPointWidget_YShadowsOff, METH_VARARGS,
   "YShadowsOff(self) -> None\nC++: void YShadowsOff()\n\n"},
  {"SetZShadows", PyvtkPointWidget_SetZShadows, METH_VARARGS,
   "SetZShadows(self, o:int) -> None\nC++: void SetZShadows(int o)\n\nTurn on/off the wireframe z-shadows.\n"},
  {"GetZShadows", PyvtkPointWidget_GetZShadows, METH_VARARGS,
   "GetZShadows(self) -> int\nC++: int GetZShadows()\n\n"},
  {"ZShadowsOn", PyvtkPointWidget_ZShadowsOn, METH_VARARGS,
   "ZShadowsOn(self) -> None\nC++: void ZShadowsOn()\n\n"},
  {"ZShadowsOff", PyvtkPointWidget_ZShadowsOff, METH_VARARGS,
   "ZShadowsOff(self) -> None\nC++: void ZShadowsOff()\n\n"},
  {"SetTranslationMode", PyvtkPointWidget_SetTranslationMode, METH_VARARGS,
   "SetTranslationMode(self, mode:int) -> None\nC++: void SetTranslationMode(int mode)\n\nIf translation mode is on, as the widget is moved the bounding\nbox, shadows, and cursor are all translated simultaneously as the\npoint moves.\n"},
  {"GetTranslationMode", PyvtkPointWidget_GetTranslationMode, METH_VARARGS,
   "GetTranslationMode(self) -> int\nC++: int GetTranslationMode()\n\n"},
  {"TranslationModeOn", PyvtkPointWidget_TranslationModeOn, METH_VARARGS,
   "TranslationModeOn(self) -> None\nC++: void TranslationModeOn()\n\n"},
  {"TranslationModeOff", PyvtkPointWidget_TranslationModeOff, METH_VARARGS,
   "TranslationModeOff(self) -> None\nC++: void TranslationModeOff()\n\n"},
  {"AllOn", PyvtkPointWidget_AllOn, METH_VARARGS,
   "AllOn(self) -> None\nC++: void AllOn()\n\nConvenience methods to turn outline and shadows on and off.\n"},
  {"AllOff", PyvtkPointWidget_AllOff, METH_VARARGS,
   "AllOff(self) -> None\nC++: void AllOff()\n\n"},
  {"GetProperty", PyvtkPointWidget_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nGet the handle properties (the little balls are the handles). The\nproperties of the handles when selected and normal can be set.\n"},
  {"GetSelectedProperty", PyvtkPointWidget_GetSelectedProperty, METH_VARARGS,
   "GetSelectedProperty(self) -> vtkProperty\nC++: virtual vtkProperty *GetSelectedProperty()\n\n"},
  {"SetHotSpotSize", PyvtkPointWidget_SetHotSpotSize, METH_VARARGS,
   "SetHotSpotSize(self, _arg:float) -> None\nC++: virtual void SetHotSpotSize(double _arg)\n\nSet the \"hot spot\" size; i.e., the region around the focus, in\nwhich the motion vector is used to control the constrained\nsliding action. Note the size is specified as a fraction of the\nlength of the diagonal of the point widget's bounding box.\n"},
  {"GetHotSpotSizeMinValue", PyvtkPointWidget_GetHotSpotSizeMinValue, METH_VARARGS,
   "GetHotSpotSizeMinValue(self) -> float\nC++: virtual double GetHotSpotSizeMinValue()\n\n"},
  {"GetHotSpotSizeMaxValue", PyvtkPointWidget_GetHotSpotSizeMaxValue, METH_VARARGS,
   "GetHotSpotSizeMaxValue(self) -> float\nC++: virtual double GetHotSpotSizeMaxValue()\n\n"},
  {"GetHotSpotSize", PyvtkPointWidget_GetHotSpotSize, METH_VARARGS,
   "GetHotSpotSize(self) -> float\nC++: virtual double GetHotSpotSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointWidget_Doc =
  "vtkPointWidget - position a point in 3D space\n\n"
  "Superclass: vtk3DWidget\n\n"
  "This 3D widget allows the user to position a point in 3D space using\n"
  "a 3D cursor. The cursor has an outline bounding box, axes-aligned\n"
  "cross-hairs, and axes shadows. (The outline and shadows can be turned\n"
  "off.) Any of these can be turned off. A nice feature of the object is\n"
  "that the vtkPointWidget, like any 3D widget, will work with the\n"
  "current interactor style. That is, if vtkPointWidget does not handle\n"
  "an event, then all other registered observers (including the\n"
  "interactor style) have an opportunity to process the event.\n"
  "Otherwise, the vtkPointWidget will terminate the processing of the\n"
  "event that it handles.\n\n"
  "To use this object, just invoke SetInteractor() with the argument of\n"
  "the method a vtkRenderWindowInteractor.  You may also wish to invoke\n"
  "\"PlaceWidget()\" to initially position the widget. The interactor will\n"
  "act normally until the \"i\" key (for \"interactor\") is pressed, at\n"
  "which point the vtkPointWidget will appear. (See superclass\n"
  "documentation for information about changing this behavior.) To move\n"
  "the point, the user can grab (left mouse) on any widget line and\n"
  "\"slide\" the point into position. Scaling is achieved by using the\n"
  "right mouse button \"up\" the render window (makes the widget bigger)\n"
  "or \"down\" the render window (makes the widget smaller). To translate\n"
  "the widget use the middle mouse button. (Note: all of the translation\n"
  "interactions can be constrained to one of the x-y-z axes by using the\n"
  "\"shift\" key.) The vtkPointWidget produces as output a polydata with a\n"
  "single point and a vertex cell.\n\n"
  "Some additional features of this class include the ability to control\n"
  "the rendered properties of the widget. You can set the properties of\n"
  "the selected and unselected representations of the parts of the\n"
  "widget. For example, you can set the property of the 3D cursor in its\n"
  "normal and selected states.\n\n"
  "The constrained translation/sliding action (i.e., when the \"shift\"\n"
  "key is depressed) along the axes is based on a combination of a \"hot\"\n"
  "spot around the cursor focus plus the initial mouse motion after\n"
  "selection. That is, if the user selects an axis outside of the hot\n"
  "spot, then the motion is constrained along that axis. If the user\n"
  "selects the point widget near the focus (within the hot spot), the\n"
  "initial motion defines a vector which is compared to the x-y-z axes.\n"
  "The motion is constrained to the axis that is most parallel to the\n"
  "initial motion vector.\n\n"
  "@sa\n"
  "vtk3DWidget vtkLineWidget vtkBoxWidget vtkPlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkPointWidget", // tp_name
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
  PyvtkPointWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointWidget_StaticNew()
{
  return vtkPointWidget::New();
}

PyObject *PyvtkPointWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointWidget_Type, PyvtkPointWidget_Methods,
    "vtkPointWidget",
 &PyvtkPointWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)Pyvtk3DWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

