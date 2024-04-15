// python wrapper for vtkBlockItem
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
#include "vtkBlockItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlockItem(PyObject *dict); }
extern "C" { PyObject *PyvtkBlockItem_ClassNew(); }

#ifndef DECLARED_PyvtkContextItem_ClassNew
extern "C" { PyObject *PyvtkContextItem_ClassNew(); }
#define DECLARED_PyvtkContextItem_ClassNew
#endif

static PyObject *
PyvtkBlockItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlockItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlockItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlockItem *tempr = vtkBlockItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlockItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlockItem::NewInstance());

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
PyvtkBlockItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBlockItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBlockItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkBlockItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkBlockItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBlockItem_MouseEnterEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseEnterEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseEnterEvent(*temp0) :
      op->vtkBlockItem::MouseEnterEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBlockItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkBlockItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBlockItem_MouseLeaveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseLeaveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseLeaveEvent(*temp0) :
      op->vtkBlockItem::MouseLeaveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBlockItem_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkBlockItem::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBlockItem_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkBlockItem::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkBlockItem_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0);
    }
    else
    {
      op->vtkBlockItem::SetLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetLabel() :
      op->vtkBlockItem::GetLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkBlockItem::SetDimensions(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBlockItem_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkBlockItem::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBlockItem_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkBlockItem_SetDimensions_s1(self, args);
    case 1:
      return PyvtkBlockItem_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkBlockItem_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkBlockItem::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_SetAutoComputeDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoComputeDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoComputeDimensions(temp0);
    }
    else
    {
      op->vtkBlockItem::SetAutoComputeDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetAutoComputeDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoComputeDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoComputeDimensions() :
      op->vtkBlockItem::GetAutoComputeDimensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_AutoComputeDimensionsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoComputeDimensionsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoComputeDimensionsOn();
    }
    else
    {
      op->vtkBlockItem::AutoComputeDimensionsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_AutoComputeDimensionsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutoComputeDimensionsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutoComputeDimensionsOff();
    }
    else
    {
      op->vtkBlockItem::AutoComputeDimensionsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_SetHorizontalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHorizontalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHorizontalAlignment(temp0);
    }
    else
    {
      op->vtkBlockItem::SetHorizontalAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetHorizontalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHorizontalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHorizontalAlignment() :
      op->vtkBlockItem::GetHorizontalAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_SetVerticalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalAlignment(temp0);
    }
    else
    {
      op->vtkBlockItem::SetVerticalAlignment(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetVerticalAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalAlignment() :
      op->vtkBlockItem::GetVerticalAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_SetPadding_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0, temp1);
    }
    else
    {
      op->vtkBlockItem::SetPadding(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBlockItem_SetPadding_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkBlockItem::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBlockItem_SetPadding(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBlockItem_SetPadding_s1(self, args);
    case 1:
      return PyvtkBlockItem_SetPadding_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPadding");
  return nullptr;
}


static PyObject *
PyvtkBlockItem_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkBlockItem::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_SetMargins_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMargins(temp0, temp1);
    }
    else
    {
      op->vtkBlockItem::SetMargins(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBlockItem_SetMargins_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMargins(temp0);
    }
    else
    {
      op->vtkBlockItem::SetMargins(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkBlockItem_SetMargins(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkBlockItem_SetMargins_s1(self, args);
    case 1:
      return PyvtkBlockItem_SetMargins_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMargins");
  return nullptr;
}


static PyObject *
PyvtkBlockItem_GetMargins(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMargins");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetMargins() :
      op->vtkBlockItem::GetMargins());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetPen() :
      op->vtkBlockItem::GetPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBrush() :
      op->vtkBlockItem::GetBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetMouseOverBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMouseOverBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetMouseOverBrush() :
      op->vtkBlockItem::GetMouseOverBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_SetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetLabelProperties(temp0);
    }
    else
    {
      op->vtkBlockItem::SetLabelProperties(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlockItem_GetLabelProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlockItem *op = static_cast<vtkBlockItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetLabelProperties() :
      op->vtkBlockItem::GetLabelProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBlockItem_Methods[] = {
  {"IsTypeOf", PyvtkBlockItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlockItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlockItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBlockItem\nC++: static vtkBlockItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlockItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBlockItem\nC++: vtkBlockItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBlockItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBlockItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkBlockItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the item.\n"},
  {"Hit", PyvtkBlockItem_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the supplied x, y coordinate is inside the item.\n"},
  {"MouseEnterEvent", PyvtkBlockItem_MouseEnterEvent, METH_VARARGS,
   "MouseEnterEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseEnterEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse enter event.\n"},
  {"MouseMoveEvent", PyvtkBlockItem_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event.\n"},
  {"MouseLeaveEvent", PyvtkBlockItem_MouseLeaveEvent, METH_VARARGS,
   "MouseLeaveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseLeaveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse leave event.\n"},
  {"MouseButtonPressEvent", PyvtkBlockItem_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button down event.\n"},
  {"MouseButtonReleaseEvent", PyvtkBlockItem_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event.\n"},
  {"SetLabel", PyvtkBlockItem_SetLabel, METH_VARARGS,
   "SetLabel(self, label:str) -> None\nC++: virtual void SetLabel(const vtkStdString &label)\n\nSet the block label.\n"},
  {"GetLabel", PyvtkBlockItem_GetLabel, METH_VARARGS,
   "GetLabel(self) -> str\nC++: virtual vtkStdString GetLabel()\n\nGet the block label.\n"},
  {"SetDimensions", PyvtkBlockItem_SetDimensions, METH_VARARGS,
   "SetDimensions(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetDimensions(float _arg1, float _arg2,\n    float _arg3, float _arg4)\nSetDimensions(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetDimensions(const float _arg[4])\n\nSet the dimensions of the block, elements 0 and 1 are the x and y\ncoordinate of the bottom corner. Elements 2 and 3 are the width\nand height. Initial value is (0,0,0,0).\n"},
  {"GetDimensions", PyvtkBlockItem_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (float, float, float, float)\nC++: virtual float *GetDimensions()\n\nGet the dimensions of the block, elements 0 and 1 are the x and y\ncoordinate of the bottom corner. Elements 2 and 3 are the width\nand height. Initial value is (0,0,0,0)\n"},
  {"SetAutoComputeDimensions", PyvtkBlockItem_SetAutoComputeDimensions, METH_VARARGS,
   "SetAutoComputeDimensions(self, _arg:bool) -> None\nC++: virtual void SetAutoComputeDimensions(bool _arg)\n\nWhen set to true, the dimensions for the block are computed\nautomatically using the anchor point, alignment at the size of\nthe label. Otherwise the `Dimensions` are used.\n\nDefault is false i.e `Dimensions` will be used.\n"},
  {"GetAutoComputeDimensions", PyvtkBlockItem_GetAutoComputeDimensions, METH_VARARGS,
   "GetAutoComputeDimensions(self) -> bool\nC++: virtual bool GetAutoComputeDimensions()\n\n"},
  {"AutoComputeDimensionsOn", PyvtkBlockItem_AutoComputeDimensionsOn, METH_VARARGS,
   "AutoComputeDimensionsOn(self) -> None\nC++: virtual void AutoComputeDimensionsOn()\n\n"},
  {"AutoComputeDimensionsOff", PyvtkBlockItem_AutoComputeDimensionsOff, METH_VARARGS,
   "AutoComputeDimensionsOff(self) -> None\nC++: virtual void AutoComputeDimensionsOff()\n\n"},
  {"SetHorizontalAlignment", PyvtkBlockItem_SetHorizontalAlignment, METH_VARARGS,
   "SetHorizontalAlignment(self, _arg:int) -> None\nC++: virtual void SetHorizontalAlignment(int _arg)\n\nSet/Get the horizontal alignment of the legend to the point\nspecified. Valid values are LEFT, CENTER and RIGHT.\n"},
  {"GetHorizontalAlignment", PyvtkBlockItem_GetHorizontalAlignment, METH_VARARGS,
   "GetHorizontalAlignment(self) -> int\nC++: virtual int GetHorizontalAlignment()\n\n"},
  {"SetVerticalAlignment", PyvtkBlockItem_SetVerticalAlignment, METH_VARARGS,
   "SetVerticalAlignment(self, _arg:int) -> None\nC++: virtual void SetVerticalAlignment(int _arg)\n\nSet/Get the vertical alignment of the legend to the point\nspecified. Valid values are TOP, CENTER and BOTTOM.\n"},
  {"GetVerticalAlignment", PyvtkBlockItem_GetVerticalAlignment, METH_VARARGS,
   "GetVerticalAlignment(self) -> int\nC++: virtual int GetVerticalAlignment()\n\n"},
  {"SetPadding", PyvtkBlockItem_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetPadding(int _arg1, int _arg2)\nSetPadding(self, _arg:(int, int)) -> None\nC++: void SetPadding(const int _arg[2])\n\nWhen AutoComputeDimensions is true, these are the padding for the\nlabel within the block.\n\nDefault is (5, 5).\n"},
  {"GetPadding", PyvtkBlockItem_GetPadding, METH_VARARGS,
   "GetPadding(self) -> (int, int)\nC++: virtual int *GetPadding()\n\n"},
  {"SetMargins", PyvtkBlockItem_SetMargins, METH_VARARGS,
   "SetMargins(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetMargins(int _arg1, int _arg2)\nSetMargins(self, _arg:(int, int)) -> None\nC++: void SetMargins(const int _arg[2])\n\nWhen AutoComputeDimensions is true, these are the margins from\nthe edge of the viewport to use when placing the block based on\nHorizontalAlignment and VerticalAlignment preferences.\n"},
  {"GetMargins", PyvtkBlockItem_GetMargins, METH_VARARGS,
   "GetMargins(self) -> (int, int)\nC++: virtual int *GetMargins()\n\n"},
  {"GetPen", PyvtkBlockItem_GetPen, METH_VARARGS,
   "GetPen(self) -> vtkPen\nC++: virtual vtkPen *GetPen()\n\nGet pen used to draw the block item outline.\n"},
  {"GetBrush", PyvtkBlockItem_GetBrush, METH_VARARGS,
   "GetBrush(self) -> vtkBrush\nC++: virtual vtkBrush *GetBrush()\n\nGet the brush used to draw the block item background.\n"},
  {"GetMouseOverBrush", PyvtkBlockItem_GetMouseOverBrush, METH_VARARGS,
   "GetMouseOverBrush(self) -> vtkBrush\nC++: virtual vtkBrush *GetMouseOverBrush()\n\nGet the brush used to draw the block item background when the\nitem is \"hit\" i.e. interaction is enabled and the mouse is over\nthe block.\n"},
  {"SetLabelProperties", PyvtkBlockItem_SetLabelProperties, METH_VARARGS,
   "SetLabelProperties(self, __a:vtkTextProperty) -> None\nC++: void SetLabelProperties(vtkTextProperty *)\n\nProvides access to the vtkTextProperty object that controls the\nway the label is rendered.\n"},
  {"GetLabelProperties", PyvtkBlockItem_GetLabelProperties, METH_VARARGS,
   "GetLabelProperties(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetLabelProperties()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBlockItem_Doc =
  "vtkBlockItem - a vtkContextItem that draws a block (optional label).\n\n"
  "Superclass: vtkContextItem\n\n"
  "This is a vtkContextItem that can be placed into a vtkContextScene.\n"
  "It draws a block of the given dimensions, and reacts to mouse events.\n\n"
  "vtkBlockItem can also be used to render label in the scene. The label\n"
  "properties can be set using `vtkTextProperty` accessed via\n"
  "`GetLabelProperties`.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBlockItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkBlockItem", // tp_name
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
  PyvtkBlockItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlockItem_StaticNew()
{
  return vtkBlockItem::New();
}

PyObject *PyvtkBlockItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBlockItem_Type, PyvtkBlockItem_Methods,
    "vtkBlockItem",
 &PyvtkBlockItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkContextItem_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "LEFT", vtkBlockItem::LEFT },
        { "CENTER", vtkBlockItem::CENTER },
        { "RIGHT", vtkBlockItem::RIGHT },
        { "TOP", vtkBlockItem::TOP },
        { "BOTTOM", vtkBlockItem::BOTTOM },
        { "CUSTOM", vtkBlockItem::CUSTOM },
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

void PyVTKAddFile_vtkBlockItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlockItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlockItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

