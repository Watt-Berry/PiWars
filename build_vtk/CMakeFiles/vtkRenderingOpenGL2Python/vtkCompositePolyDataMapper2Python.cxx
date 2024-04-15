// python wrapper for vtkCompositePolyDataMapper2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCompositePolyDataMapper2.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositePolyDataMapper2(PyObject *dict); }
extern "C" { PyObject *PyvtkCompositePolyDataMapper2_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkOpenGLPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
#endif

static PyObject *
PyvtkCompositePolyDataMapper2_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCompositePolyDataMapper2."
    " (" "Please use vtkCompositePolyDataMapper instead" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositePolyDataMapper2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositePolyDataMapper2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCompositePolyDataMapper2."
    " (" "Please use vtkCompositePolyDataMapper instead" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositePolyDataMapper2 *tempr = vtkCompositePolyDataMapper2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositePolyDataMapper2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositePolyDataMapper2::NewInstance());

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
PyvtkCompositePolyDataMapper2_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCompositePolyDataMapper2."
    " (" "Please use vtkCompositePolyDataMapper instead" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositePolyDataMapper2::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositePolyDataMapper2::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_HasOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasOpaqueGeometry() :
      op->vtkCompositePolyDataMapper2::HasOpaqueGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCompositePolyDataMapper2::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  vtkCompositeDataDisplayAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetCompositeDataDisplayAttributes(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetCompositeDataDisplayAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->GetCompositeDataDisplayAttributes() :
      op->vtkCompositePolyDataMapper2::GetCompositeDataDisplayAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockVisibility(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibility(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilities();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetBlockColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
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
      op->SetBlockColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetBlockColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositePolyDataMapper2_SetBlockColor_s1(self, args);
    case 4:
      return PyvtkCompositePolyDataMapper2_SetBlockColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockColor");
  return nullptr;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColor(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColors();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockOpacity(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetBlockOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkCompositePolyDataMapper2::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacity(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacities();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::RemoveBlockOpacities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetColorMissingArraysWithNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMissingArraysWithNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorMissingArraysWithNanColor(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetColorMissingArraysWithNanColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetColorMissingArraysWithNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMissingArraysWithNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorMissingArraysWithNanColor() :
      op->vtkCompositePolyDataMapper2::GetColorMissingArraysWithNanColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_ColorMissingArraysWithNanColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorMissingArraysWithNanColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorMissingArraysWithNanColorOn();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::ColorMissingArraysWithNanColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_ColorMissingArraysWithNanColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorMissingArraysWithNanColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorMissingArraysWithNanColorOff();
    }
    else
    {
      op->vtkCompositePolyDataMapper2::ColorMissingArraysWithNanColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

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
      op->vtkCompositePolyDataMapper2::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetVBOShiftScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVBOShiftScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVBOShiftScaleMethod(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetVBOShiftScaleMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetPauseShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPauseShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPauseShiftScale(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetPauseShiftScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  int temp0;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_Methods[] = {
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iiiiz"},
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s2, METH_VARARGS,
   "@iiiii"},
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s4, METH_VARARGS,
   "@iiizz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositePolyDataMapper2_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositePolyDataMapper2_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}


static PyObject *
PyvtkCompositePolyDataMapper2_ProcessSelectorPixelBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessSelectorPixelBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  vtkHardwareSelector *temp0 = nullptr;
  std::vector<unsigned int> temp1(ap.GetArgSize(1));
  vtkProp *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkHardwareSelector") &&
      ap.GetArray(temp1.data(), temp1.size()) &&
      ap.GetVTKObject(temp2, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCompositePolyDataMapper2::ProcessSelectorPixelBuffers(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper2_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper2 *op = static_cast<vtkCompositePolyDataMapper2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCompositePolyDataMapper2::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapper2_Methods[] = {
  {"IsTypeOf", PyvtkCompositePolyDataMapper2_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositePolyDataMapper2_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositePolyDataMapper2_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompositePolyDataMapper2\nC++: static vtkCompositePolyDataMapper2 *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositePolyDataMapper2_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositePolyDataMapper2\nC++: vtkCompositePolyDataMapper2 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositePolyDataMapper2_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositePolyDataMapper2_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"HasOpaqueGeometry", PyvtkCompositePolyDataMapper2_HasOpaqueGeometry, METH_VARARGS,
   "HasOpaqueGeometry(self) -> bool\nC++: bool HasOpaqueGeometry() override;\n\nSome introspection on the type of data the mapper will render\nused by props to determine if they should invoke the mapper on a\nspecific rendering pass.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCompositePolyDataMapper2_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> bool\nC++: bool HasTranslucentPolygonalGeometry() override;\n\n"},
  {"SetCompositeDataDisplayAttributes", PyvtkCompositePolyDataMapper2_SetCompositeDataDisplayAttributes, METH_VARARGS,
   "SetCompositeDataDisplayAttributes(self,\n    attributes:vtkCompositeDataDisplayAttributes) -> None\nC++: void SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes *attributes)\n\nSet/get the composite data set attributes.\n"},
  {"GetCompositeDataDisplayAttributes", PyvtkCompositePolyDataMapper2_GetCompositeDataDisplayAttributes, METH_VARARGS,
   "GetCompositeDataDisplayAttributes(self)\n    -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *GetCompositeDataDisplayAttributes(\n    )\n\n"},
  {"SetBlockVisibility", PyvtkCompositePolyDataMapper2_SetBlockVisibility, METH_VARARGS,
   "SetBlockVisibility(self, index:int, visible:bool) -> None\nC++: void SetBlockVisibility(unsigned int index, bool visible)\n\nSet/get the visibility for a block given its flat index.\n"},
  {"GetBlockVisibility", PyvtkCompositePolyDataMapper2_GetBlockVisibility, METH_VARARGS,
   "GetBlockVisibility(self, index:int) -> bool\nC++: bool GetBlockVisibility(unsigned int index)\n\n"},
  {"RemoveBlockVisibility", PyvtkCompositePolyDataMapper2_RemoveBlockVisibility, METH_VARARGS,
   "RemoveBlockVisibility(self, index:int) -> None\nC++: void RemoveBlockVisibility(unsigned int index)\n\n"},
  {"RemoveBlockVisibilities", PyvtkCompositePolyDataMapper2_RemoveBlockVisibilities, METH_VARARGS,
   "RemoveBlockVisibilities(self) -> None\nC++: void RemoveBlockVisibilities()\n\n"},
  {"SetBlockColor", PyvtkCompositePolyDataMapper2_SetBlockColor, METH_VARARGS,
   "SetBlockColor(self, index:int, color:(float, float, float))\n    -> None\nC++: void SetBlockColor(unsigned int index, const double color[3])\nSetBlockColor(self, index:int, r:float, g:float, b:float) -> None\nC++: void SetBlockColor(unsigned int index, double r, double g,\n    double b)\n\nSet/get the color for a block given its flat index.\n"},
  {"GetBlockColor", PyvtkCompositePolyDataMapper2_GetBlockColor, METH_VARARGS,
   "GetBlockColor(self, index:int) -> Pointer\nC++: double *GetBlockColor(unsigned int index)\n\n"},
  {"RemoveBlockColor", PyvtkCompositePolyDataMapper2_RemoveBlockColor, METH_VARARGS,
   "RemoveBlockColor(self, index:int) -> None\nC++: void RemoveBlockColor(unsigned int index)\n\n"},
  {"RemoveBlockColors", PyvtkCompositePolyDataMapper2_RemoveBlockColors, METH_VARARGS,
   "RemoveBlockColors(self) -> None\nC++: void RemoveBlockColors()\n\n"},
  {"SetBlockOpacity", PyvtkCompositePolyDataMapper2_SetBlockOpacity, METH_VARARGS,
   "SetBlockOpacity(self, index:int, opacity:float) -> None\nC++: void SetBlockOpacity(unsigned int index, double opacity)\n\nSet/get the opacity for a block given its flat index.\n"},
  {"GetBlockOpacity", PyvtkCompositePolyDataMapper2_GetBlockOpacity, METH_VARARGS,
   "GetBlockOpacity(self, index:int) -> float\nC++: double GetBlockOpacity(unsigned int index)\n\n"},
  {"RemoveBlockOpacity", PyvtkCompositePolyDataMapper2_RemoveBlockOpacity, METH_VARARGS,
   "RemoveBlockOpacity(self, index:int) -> None\nC++: void RemoveBlockOpacity(unsigned int index)\n\n"},
  {"RemoveBlockOpacities", PyvtkCompositePolyDataMapper2_RemoveBlockOpacities, METH_VARARGS,
   "RemoveBlockOpacities(self) -> None\nC++: void RemoveBlockOpacities()\n\n"},
  {"SetColorMissingArraysWithNanColor", PyvtkCompositePolyDataMapper2_SetColorMissingArraysWithNanColor, METH_VARARGS,
   "SetColorMissingArraysWithNanColor(self, _arg:bool) -> None\nC++: virtual void SetColorMissingArraysWithNanColor(bool _arg)\n\n"},
  {"GetColorMissingArraysWithNanColor", PyvtkCompositePolyDataMapper2_GetColorMissingArraysWithNanColor, METH_VARARGS,
   "GetColorMissingArraysWithNanColor(self) -> bool\nC++: virtual bool GetColorMissingArraysWithNanColor()\n\n"},
  {"ColorMissingArraysWithNanColorOn", PyvtkCompositePolyDataMapper2_ColorMissingArraysWithNanColorOn, METH_VARARGS,
   "ColorMissingArraysWithNanColorOn(self) -> None\nC++: virtual void ColorMissingArraysWithNanColorOn()\n\n"},
  {"ColorMissingArraysWithNanColorOff", PyvtkCompositePolyDataMapper2_ColorMissingArraysWithNanColorOff, METH_VARARGS,
   "ColorMissingArraysWithNanColorOff(self) -> None\nC++: virtual void ColorMissingArraysWithNanColorOff()\n\n"},
  {"ReleaseGraphicsResources", PyvtkCompositePolyDataMapper2_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"Render", PyvtkCompositePolyDataMapper2_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void Render(vtkRenderer *ren, vtkActor *act) override;\n\nThis calls RenderPiece (in a for loop if streaming is necessary).\n"},
  {"SetVBOShiftScaleMethod", PyvtkCompositePolyDataMapper2_SetVBOShiftScaleMethod, METH_VARARGS,
   "SetVBOShiftScaleMethod(self, m:int) -> None\nC++: void SetVBOShiftScaleMethod(int m) override;\n\nA convenience method for enabling/disabling\nthe VBO's shift+scale transform.\n"},
  {"SetPauseShiftScale", PyvtkCompositePolyDataMapper2_SetPauseShiftScale, METH_VARARGS,
   "SetPauseShiftScale(self, pauseShiftScale:bool) -> None\nC++: void SetPauseShiftScale(bool pauseShiftScale) override;\n\nPause updates of shift-scale parameters based on camera position.\n\nThis override passes the information to all instances in Helpers\n.\n"},
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper2_SetInputArrayToProcess, METH_VARARGS,
   "SetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:int, name:str) -> None\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n    override;\nSetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:int, fieldAttributeType:int) -> None\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\n    override;\nSetInputArrayToProcess(self, idx:int, info:vtkInformation) -> None\nC++: void SetInputArrayToProcess(int idx, vtkInformation *info)\n    override;\nSetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:str, attributeTypeorName:str) -> None\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nSet the input data arrays that this algorithm will process.\nSpecifically the idx array that this algorithm will process\n(starting from 0) is the array on port, connection with the\nspecified association and name or attribute type (such as\nSCALARS). The fieldAssociation refers to which field in the data\nobject the array is stored. See vtkDataObject::FieldAssociations\nfor detail.\n"},
  {"ProcessSelectorPixelBuffers", PyvtkCompositePolyDataMapper2_ProcessSelectorPixelBuffers, METH_VARARGS,
   "ProcessSelectorPixelBuffers(self, sel:vtkHardwareSelector,\n    pixeloffsets:[int, ...], prop:vtkProp) -> None\nC++: void ProcessSelectorPixelBuffers(vtkHardwareSelector *sel,\n    std::vector<unsigned int> &pixeloffsets, vtkProp *prop)\n    override;\n\nallows a mapper to update a selections color buffers Called from\na prop which in turn is called from the selector\n"},
  {"GetMTime", PyvtkCompositePolyDataMapper2_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include vtkCompositeDataDisplayAttributes' mtime.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompositePolyDataMapper2_Doc =
  "vtkCompositePolyDataMapper2 - mapper for composite dataset consisting\nof polygonal data.\n\n"
  "Superclass: vtkOpenGLPolyDataMapper\n\n"
  "vtkCompositePolyDataMapper2 is similar to vtkCompositePolyDataMapper\n"
  "except that instead of creating individual mapper for each block in\n"
  "the composite dataset, it iterates over the blocks internally.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositePolyDataMapper2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkCompositePolyDataMapper2", // tp_name
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
  PyvtkCompositePolyDataMapper2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositePolyDataMapper2_StaticNew()
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCompositePolyDataMapper2."
    " (" "Please use vtkCompositePolyDataMapper instead" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  return vtkCompositePolyDataMapper2::New();
}

PyObject *PyvtkCompositePolyDataMapper2_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositePolyDataMapper2_Type, PyvtkCompositePolyDataMapper2_Methods,
    "vtkCompositePolyDataMapper2",
 &PyvtkCompositePolyDataMapper2_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLPolyDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositePolyDataMapper2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositePolyDataMapper2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositePolyDataMapper2", o) != 0)
  {
    Py_DECREF(o);
  }

}

