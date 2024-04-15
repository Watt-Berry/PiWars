// python wrapper for vtkAffineRepresentation2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAffineRepresentation2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAffineRepresentation2D(PyObject *dict); }
extern "C" { PyObject *PyvtkAffineRepresentation2D_ClassNew(); }

#ifndef DECLARED_PyvtkAffineRepresentation_ClassNew
extern "C" { PyObject *PyvtkAffineRepresentation_ClassNew(); }
#define DECLARED_PyvtkAffineRepresentation_ClassNew
#endif

static PyObject *
PyvtkAffineRepresentation2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAffineRepresentation2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAffineRepresentation2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAffineRepresentation2D *tempr = vtkAffineRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAffineRepresentation2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAffineRepresentation2D::NewInstance());

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
PyvtkAffineRepresentation2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAffineRepresentation2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAffineRepresentation2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetBoxWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoxWidth(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::SetBoxWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetBoxWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoxWidthMinValue() :
      op->vtkAffineRepresentation2D::GetBoxWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetBoxWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoxWidthMaxValue() :
      op->vtkAffineRepresentation2D::GetBoxWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetBoxWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBoxWidth() :
      op->vtkAffineRepresentation2D::GetBoxWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetCircleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCircleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCircleWidth(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::SetCircleWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetCircleWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircleWidthMinValue() :
      op->vtkAffineRepresentation2D::GetCircleWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetCircleWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircleWidthMaxValue() :
      op->vtkAffineRepresentation2D::GetCircleWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetCircleWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCircleWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCircleWidth() :
      op->vtkAffineRepresentation2D::GetCircleWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetAxesWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxesWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxesWidth(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::SetAxesWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetAxesWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxesWidthMinValue() :
      op->vtkAffineRepresentation2D::GetAxesWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetAxesWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxesWidthMaxValue() :
      op->vtkAffineRepresentation2D::GetAxesWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetAxesWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxesWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxesWidth() :
      op->vtkAffineRepresentation2D::GetAxesWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAffineRepresentation2D_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->vtkAffineRepresentation2D::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAffineRepresentation2D_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAffineRepresentation2D_SetOrigin_s1(self, args);
    case 3:
      return PyvtkAffineRepresentation2D_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkAffineRepresentation2D_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkAffineRepresentation2D::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->GetTransform(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::GetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetProperty(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::SetProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkProperty2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
  {
    if (ap.IsBound())
    {
      op->SetSelectedProperty(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::SetSelectedProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->vtkAffineRepresentation2D::SetTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetProperty() :
      op->vtkAffineRepresentation2D::GetProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetSelectedProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetSelectedProperty() :
      op->vtkAffineRepresentation2D::GetSelectedProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTextProperty() :
      op->vtkAffineRepresentation2D::GetTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_SetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->vtkAffineRepresentation2D::SetDisplayText(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDisplayText() :
      op->vtkAffineRepresentation2D::GetDisplayText());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_DisplayTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayTextOn();
    }
    else
    {
      op->vtkAffineRepresentation2D::DisplayTextOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_DisplayTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayTextOff();
    }
    else
    {
      op->vtkAffineRepresentation2D::DisplayTextOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->vtkAffineRepresentation2D::PlaceWidget(temp0);
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
PyvtkAffineRepresentation2D_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->StartWidgetInteraction(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::StartWidgetInteraction(temp0);
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
PyvtkAffineRepresentation2D_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->WidgetInteraction(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::WidgetInteraction(temp0);
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
PyvtkAffineRepresentation2D_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

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
      op->EndWidgetInteraction(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::EndWidgetInteraction(temp0);
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
PyvtkAffineRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->ComputeInteractionState(temp0, temp1, temp2) :
      op->vtkAffineRepresentation2D::ComputeInteractionState(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkAffineRepresentation2D::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors2D(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::GetActors2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkAffineRepresentation2D::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAffineRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAffineRepresentation2D *op = static_cast<vtkAffineRepresentation2D *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkAffineRepresentation2D::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAffineRepresentation2D_Methods[] = {
  {"IsTypeOf", PyvtkAffineRepresentation2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAffineRepresentation2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAffineRepresentation2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAffineRepresentation2D\nC++: static vtkAffineRepresentation2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAffineRepresentation2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAffineRepresentation2D\nC++: vtkAffineRepresentation2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAffineRepresentation2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAffineRepresentation2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBoxWidth", PyvtkAffineRepresentation2D_SetBoxWidth, METH_VARARGS,
   "SetBoxWidth(self, _arg:int) -> None\nC++: virtual void SetBoxWidth(int _arg)\n\nSpecify the width of the various parts of the representation (in\npixels).  The three parts are of the representation are the\ntranslation axes, the rotation circle, and the scale/shear box.\nNote that since the widget resizes itself so that the width and\nheight are always the same, only the width needs to be specified.\n"},
  {"GetBoxWidthMinValue", PyvtkAffineRepresentation2D_GetBoxWidthMinValue, METH_VARARGS,
   "GetBoxWidthMinValue(self) -> int\nC++: virtual int GetBoxWidthMinValue()\n\n"},
  {"GetBoxWidthMaxValue", PyvtkAffineRepresentation2D_GetBoxWidthMaxValue, METH_VARARGS,
   "GetBoxWidthMaxValue(self) -> int\nC++: virtual int GetBoxWidthMaxValue()\n\n"},
  {"GetBoxWidth", PyvtkAffineRepresentation2D_GetBoxWidth, METH_VARARGS,
   "GetBoxWidth(self) -> int\nC++: virtual int GetBoxWidth()\n\n"},
  {"SetCircleWidth", PyvtkAffineRepresentation2D_SetCircleWidth, METH_VARARGS,
   "SetCircleWidth(self, _arg:int) -> None\nC++: virtual void SetCircleWidth(int _arg)\n\n"},
  {"GetCircleWidthMinValue", PyvtkAffineRepresentation2D_GetCircleWidthMinValue, METH_VARARGS,
   "GetCircleWidthMinValue(self) -> int\nC++: virtual int GetCircleWidthMinValue()\n\n"},
  {"GetCircleWidthMaxValue", PyvtkAffineRepresentation2D_GetCircleWidthMaxValue, METH_VARARGS,
   "GetCircleWidthMaxValue(self) -> int\nC++: virtual int GetCircleWidthMaxValue()\n\n"},
  {"GetCircleWidth", PyvtkAffineRepresentation2D_GetCircleWidth, METH_VARARGS,
   "GetCircleWidth(self) -> int\nC++: virtual int GetCircleWidth()\n\n"},
  {"SetAxesWidth", PyvtkAffineRepresentation2D_SetAxesWidth, METH_VARARGS,
   "SetAxesWidth(self, _arg:int) -> None\nC++: virtual void SetAxesWidth(int _arg)\n\n"},
  {"GetAxesWidthMinValue", PyvtkAffineRepresentation2D_GetAxesWidthMinValue, METH_VARARGS,
   "GetAxesWidthMinValue(self) -> int\nC++: virtual int GetAxesWidthMinValue()\n\n"},
  {"GetAxesWidthMaxValue", PyvtkAffineRepresentation2D_GetAxesWidthMaxValue, METH_VARARGS,
   "GetAxesWidthMaxValue(self) -> int\nC++: virtual int GetAxesWidthMaxValue()\n\n"},
  {"GetAxesWidth", PyvtkAffineRepresentation2D_GetAxesWidth, METH_VARARGS,
   "GetAxesWidth(self) -> int\nC++: virtual int GetAxesWidth()\n\n"},
  {"SetOrigin", PyvtkAffineRepresentation2D_SetOrigin, METH_VARARGS,
   "SetOrigin(self, o:(float, float, float)) -> None\nC++: void SetOrigin(const double o[3])\nSetOrigin(self, ox:float, oy:float, oz:float) -> None\nC++: void SetOrigin(double ox, double oy, double oz)\n\nSpecify the origin of the widget (in world coordinates). The\norigin is the point where the widget places itself. Note that\nrotations and scaling occurs around the origin.\n"},
  {"GetOrigin", PyvtkAffineRepresentation2D_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"GetTransform", PyvtkAffineRepresentation2D_GetTransform, METH_VARARGS,
   "GetTransform(self, t:vtkTransform) -> None\nC++: void GetTransform(vtkTransform *t) override;\n\nRetrieve a linear transform characterizing the affine\ntransformation generated by this widget. This method copies its\ninternal transform into the transform provided. Note that the\nPlaceWidget() method initializes the internal matrix to identity.\nAll subsequent widget operations (i.e., scale, translate, rotate,\nshear) are concatenated with the internal transform.\n"},
  {"SetProperty", PyvtkAffineRepresentation2D_SetProperty, METH_VARARGS,
   "SetProperty(self, __a:vtkProperty2D) -> None\nC++: void SetProperty(vtkProperty2D *)\n\nSet/Get the properties when unselected and selected.\n"},
  {"SetSelectedProperty", PyvtkAffineRepresentation2D_SetSelectedProperty, METH_VARARGS,
   "SetSelectedProperty(self, __a:vtkProperty2D) -> None\nC++: void SetSelectedProperty(vtkProperty2D *)\n\n"},
  {"SetTextProperty", PyvtkAffineRepresentation2D_SetTextProperty, METH_VARARGS,
   "SetTextProperty(self, __a:vtkTextProperty) -> None\nC++: void SetTextProperty(vtkTextProperty *)\n\n"},
  {"GetProperty", PyvtkAffineRepresentation2D_GetProperty, METH_VARARGS,
   "GetProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetProperty()\n\n"},
  {"GetSelectedProperty", PyvtkAffineRepresentation2D_GetSelectedProperty, METH_VARARGS,
   "GetSelectedProperty(self) -> vtkProperty2D\nC++: virtual vtkProperty2D *GetSelectedProperty()\n\n"},
  {"GetTextProperty", PyvtkAffineRepresentation2D_GetTextProperty, METH_VARARGS,
   "GetTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTextProperty()\n\n"},
  {"SetDisplayText", PyvtkAffineRepresentation2D_SetDisplayText, METH_VARARGS,
   "SetDisplayText(self, _arg:int) -> None\nC++: virtual void SetDisplayText(vtkTypeBool _arg)\n\nEnable the display of text with numeric values characterizing the\ntransformation. Rotation and shear are expressed in degrees;\ntranslation the distance in world coordinates; and scale\nnormalized (sx,sy) values.\n"},
  {"GetDisplayText", PyvtkAffineRepresentation2D_GetDisplayText, METH_VARARGS,
   "GetDisplayText(self) -> int\nC++: virtual vtkTypeBool GetDisplayText()\n\n"},
  {"DisplayTextOn", PyvtkAffineRepresentation2D_DisplayTextOn, METH_VARARGS,
   "DisplayTextOn(self) -> None\nC++: virtual void DisplayTextOn()\n\n"},
  {"DisplayTextOff", PyvtkAffineRepresentation2D_DisplayTextOff, METH_VARARGS,
   "DisplayTextOff(self) -> None\nC++: virtual void DisplayTextOff()\n\n"},
  {"PlaceWidget", PyvtkAffineRepresentation2D_PlaceWidget, METH_VARARGS,
   "PlaceWidget(self, bounds:[float, float, float, float, float,\n    float]) -> None\nC++: void PlaceWidget(double bounds[6]) override;\n\nSubclasses of vtkAffineRepresentation2D must implement these\nmethods. These are the methods that the widget and its\nrepresentation use to communicate with each other. Note:\nPlaceWidget() reinitializes the transformation matrix (i.e., sets\nit to identity). It also sets the origin for scaling and\nrotation.\n"},
  {"StartWidgetInteraction", PyvtkAffineRepresentation2D_StartWidgetInteraction, METH_VARARGS,
   "StartWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void StartWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"WidgetInteraction", PyvtkAffineRepresentation2D_WidgetInteraction, METH_VARARGS,
   "WidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void WidgetInteraction(double eventPos[2]) override;\n\n"},
  {"EndWidgetInteraction", PyvtkAffineRepresentation2D_EndWidgetInteraction, METH_VARARGS,
   "EndWidgetInteraction(self, eventPos:[float, float]) -> None\nC++: void EndWidgetInteraction(double eventPos[2]) override;\n\n"},
  {"ComputeInteractionState", PyvtkAffineRepresentation2D_ComputeInteractionState, METH_VARARGS,
   "ComputeInteractionState(self, X:int, Y:int, modify:int=0) -> int\nC++: int ComputeInteractionState(int X, int Y, int modify=0)\n    override;\n\n"},
  {"BuildRepresentation", PyvtkAffineRepresentation2D_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\n"},
  {"ShallowCopy", PyvtkAffineRepresentation2D_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nMethods to make this class behave as a vtkProp.\n"},
  {"GetActors2D", PyvtkAffineRepresentation2D_GetActors2D, METH_VARARGS,
   "GetActors2D(self, __a:vtkPropCollection) -> None\nC++: void GetActors2D(vtkPropCollection *) override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkAffineRepresentation2D_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOverlay", PyvtkAffineRepresentation2D_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAffineRepresentation2D_Doc =
  "vtkAffineRepresentation2D - represent 2D affine transformations\n\n"
  "Superclass: vtkAffineRepresentation\n\n"
  "This class is used to represent a vtkAffineWidget. This\n"
  "representation consists of three parts: a box, a circle, and a cross.\n"
  "The box is used for scaling and shearing, the circle for rotation,\n"
  "and the cross for translation. These parts are drawn in the overlay\n"
  "plane and maintain a constant size (width and height) specified in\n"
  "terms of normalized viewport coordinates.\n\n"
  "The representation maintains an internal transformation matrix (see\n"
  "superclass' GetTransform() method). The transformations generated by\n"
  "this widget assume that the representation lies in the x-y plane. If\n"
  "this is not the case, the user is responsible for transforming this\n"
  "representation's matrix into the correct coordinate space (by\n"
  "judicious matrix multiplication). Note that the transformation matrix\n"
  "returned by GetTransform() is relative to the last PlaceWidget()\n"
  "invocation. (The PlaceWidget() sets the origin around which rotation\n"
  "and scaling occurs; the origin is the center point of the bounding\n"
  "box provided.)\n\n"
  "@sa\n"
  "vtkAffineRepresentation vtkAffineWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAffineRepresentation2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkAffineRepresentation2D", // tp_name
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
  PyvtkAffineRepresentation2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAffineRepresentation2D_StaticNew()
{
  return vtkAffineRepresentation2D::New();
}

PyObject *PyvtkAffineRepresentation2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAffineRepresentation2D_Type, PyvtkAffineRepresentation2D_Methods,
    "vtkAffineRepresentation2D",
 &PyvtkAffineRepresentation2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAffineRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAffineRepresentation2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAffineRepresentation2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAffineRepresentation2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

