// python wrapper for vtkCompositePolyDataMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCompositePolyDataMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositePolyDataMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkCompositePolyDataMapper_ClassNew(); }

#ifndef DECLARED_PyvtkPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkPolyDataMapper_ClassNew
#endif

static PyObject *
PyvtkCompositePolyDataMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositePolyDataMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositePolyDataMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositePolyDataMapper *tempr = vtkCompositePolyDataMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositePolyDataMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositePolyDataMapper::NewInstance());

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
PyvtkCompositePolyDataMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositePolyDataMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositePolyDataMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkCompositePolyDataMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::GetBounds(temp0);
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
PyvtkCompositePolyDataMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCompositePolyDataMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkCompositePolyDataMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkCompositePolyDataMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_HasOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasOpaqueGeometry() :
      op->vtkCompositePolyDataMapper::HasOpaqueGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkCompositePolyDataMapper::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetCompositeDataDisplayAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetCompositeDataDisplayAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeDataDisplayAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->GetCompositeDataDisplayAttributes() :
      op->vtkCompositePolyDataMapper::GetCompositeDataDisplayAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::RemoveBlockVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilities();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetBlockColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_SetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetBlockColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_SetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositePolyDataMapper_SetBlockColor_s1(self, args);
    case 4:
      return PyvtkCompositePolyDataMapper_SetBlockColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBlockColor");
  return nullptr;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockColor_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetBlockColor."
    " (" "Use void GetBlockColor(unsigned int index, double color[3])" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_GetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
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
      op->GetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper::GetBlockColor(temp0, temp1);
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
PyvtkCompositePolyDataMapper_GetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCompositePolyDataMapper_GetBlockColor_s1(self, args);
    case 2:
      return PyvtkCompositePolyDataMapper_GetBlockColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBlockColor");
  return nullptr;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::RemoveBlockColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColors();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetBlockOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::RemoveBlockOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacities();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockOpacities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockScalarMode(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetBlockScalarMode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockScalarMode(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockScalarMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockScalarMode(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockScalarModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockScalarModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockScalarModes();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockScalarModes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayAccessMode(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetBlockArrayAccessMode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockArrayAccessMode(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockArrayAccessMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayAccessMode(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockArrayAccessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockArrayAccessModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayAccessModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayAccessModes();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockArrayAccessModes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayComponent(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetBlockArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockArrayComponent(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayComponent(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockArrayComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayComponents();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockArrayComponents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayId(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetBlockArrayId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockArrayId(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockArrayId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayId(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockArrayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockArrayIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayIds();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockArrayIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayName(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetBlockArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetBlockArrayName(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayName(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayNames();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetBlockFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockFieldDataTupleId(temp0, temp1);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetBlockFieldDataTupleId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetBlockFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBlockFieldDataTupleId(temp0) :
      op->vtkCompositePolyDataMapper::GetBlockFieldDataTupleId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockFieldDataTupleId(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockFieldDataTupleId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_RemoveBlockFieldDataTupleIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockFieldDataTupleIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockFieldDataTupleIds();
    }
    else
    {
      op->vtkCompositePolyDataMapper::RemoveBlockFieldDataTupleIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetColorMissingArraysWithNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMissingArraysWithNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetColorMissingArraysWithNanColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetColorMissingArraysWithNanColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMissingArraysWithNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorMissingArraysWithNanColor() :
      op->vtkCompositePolyDataMapper::GetColorMissingArraysWithNanColor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_ColorMissingArraysWithNanColorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorMissingArraysWithNanColorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorMissingArraysWithNanColorOn();
    }
    else
    {
      op->vtkCompositePolyDataMapper::ColorMissingArraysWithNanColorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_ColorMissingArraysWithNanColorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorMissingArraysWithNanColorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorMissingArraysWithNanColorOff();
    }
    else
    {
      op->vtkCompositePolyDataMapper::ColorMissingArraysWithNanColorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_SetInputArrayToProcess_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositePolyDataMapper_SetInputArrayToProcess_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetInputArrayToProcess(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapper_SetInputArrayToProcess_Methods[] = {
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iiiiz"},
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper_SetInputArrayToProcess_s2, METH_VARARGS,
   "@iiiii"},
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper_SetInputArrayToProcess_s4, METH_VARARGS,
   "@iiizz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCompositePolyDataMapper_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCompositePolyDataMapper_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositePolyDataMapper_SetInputArrayToProcess_s3(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}


static PyObject *
PyvtkCompositePolyDataMapper_ProcessSelectorPixelBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessSelectorPixelBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::ProcessSelectorPixelBuffers(temp0, temp1, temp2);
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
PyvtkCompositePolyDataMapper_SetVBOShiftScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVBOShiftScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetVBOShiftScaleMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetPauseShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPauseShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

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
      op->vtkCompositePolyDataMapper::SetPauseShiftScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCompositePolyDataMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIdArrayName(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetPointIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetPointIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdArrayName() :
      op->vtkCompositePolyDataMapper::GetPointIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIdArrayName(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetCellIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetCellIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCellIdArrayName() :
      op->vtkCompositePolyDataMapper::GetCellIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessIdArrayName(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetProcessIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetProcessIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetProcessIdArrayName() :
      op->vtkCompositePolyDataMapper::GetProcessIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_SetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIdArrayName(temp0);
    }
    else
    {
      op->vtkCompositePolyDataMapper::SetCompositeIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositePolyDataMapper_GetCompositeIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositePolyDataMapper *op = static_cast<vtkCompositePolyDataMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCompositeIdArrayName() :
      op->vtkCompositePolyDataMapper::GetCompositeIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositePolyDataMapper_Methods[] = {
  {"IsTypeOf", PyvtkCompositePolyDataMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositePolyDataMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositePolyDataMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompositePolyDataMapper\nC++: static vtkCompositePolyDataMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositePolyDataMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositePolyDataMapper\nC++: vtkCompositePolyDataMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositePolyDataMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositePolyDataMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkCompositePolyDataMapper_Render, METH_VARARGS,
   "Render(self, renderer:vtkRenderer, actor:vtkActor) -> None\nC++: void Render(vtkRenderer *renderer, vtkActor *actor) override;\n\nStandard method for rendering a mapper. This method will be\ncalled by the actor.\n"},
  {"GetBounds", PyvtkCompositePolyDataMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nStandard vtkProp method to get 3D bounds of a 3D prop\n"},
  {"ShallowCopy", PyvtkCompositePolyDataMapper_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, mapper:vtkAbstractMapper) -> None\nC++: void ShallowCopy(vtkAbstractMapper *mapper) override;\n\nMake a shallow copy of this mapper.\n"},
  {"ReleaseGraphicsResources", PyvtkCompositePolyDataMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease the underlying resources associated with this mapper\n"},
  {"HasOpaqueGeometry", PyvtkCompositePolyDataMapper_HasOpaqueGeometry, METH_VARARGS,
   "HasOpaqueGeometry(self) -> bool\nC++: bool HasOpaqueGeometry() override;\n\nSome introspection on the type of data the mapper will render\nused by props to determine if they should invoke the mapper on a\nspecific rendering pass.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkCompositePolyDataMapper_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> bool\nC++: bool HasTranslucentPolygonalGeometry() override;\n\n"},
  {"SetCompositeDataDisplayAttributes", PyvtkCompositePolyDataMapper_SetCompositeDataDisplayAttributes, METH_VARARGS,
   "SetCompositeDataDisplayAttributes(self,\n    attributes:vtkCompositeDataDisplayAttributes) -> None\nC++: void SetCompositeDataDisplayAttributes(\n    vtkCompositeDataDisplayAttributes *attributes)\n\nSet/get the composite data set attributes.\n"},
  {"GetCompositeDataDisplayAttributes", PyvtkCompositePolyDataMapper_GetCompositeDataDisplayAttributes, METH_VARARGS,
   "GetCompositeDataDisplayAttributes(self)\n    -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *GetCompositeDataDisplayAttributes(\n    )\n\n"},
  {"SetBlockVisibility", PyvtkCompositePolyDataMapper_SetBlockVisibility, METH_VARARGS,
   "SetBlockVisibility(self, index:int, visible:bool) -> None\nC++: void SetBlockVisibility(unsigned int index, bool visible)\n\nSet/get the visibility for a block given its flat index.\n"},
  {"GetBlockVisibility", PyvtkCompositePolyDataMapper_GetBlockVisibility, METH_VARARGS,
   "GetBlockVisibility(self, index:int) -> bool\nC++: bool GetBlockVisibility(unsigned int index)\n\n"},
  {"RemoveBlockVisibility", PyvtkCompositePolyDataMapper_RemoveBlockVisibility, METH_VARARGS,
   "RemoveBlockVisibility(self, index:int) -> None\nC++: void RemoveBlockVisibility(unsigned int index)\n\n"},
  {"RemoveBlockVisibilities", PyvtkCompositePolyDataMapper_RemoveBlockVisibilities, METH_VARARGS,
   "RemoveBlockVisibilities(self) -> None\nC++: void RemoveBlockVisibilities()\n\n"},
  {"SetBlockColor", PyvtkCompositePolyDataMapper_SetBlockColor, METH_VARARGS,
   "SetBlockColor(self, index:int, color:(float, float, float))\n    -> None\nC++: void SetBlockColor(unsigned int index, const double color[3])\nSetBlockColor(self, index:int, r:float, g:float, b:float) -> None\nC++: void SetBlockColor(unsigned int index, double r, double g,\n    double b)\n\nSet/get the color for a block given its flat index.\n"},
  {"GetBlockColor", PyvtkCompositePolyDataMapper_GetBlockColor, METH_VARARGS,
   "GetBlockColor(self, index:int) -> Pointer\nC++: double *GetBlockColor(unsigned int index)\nGetBlockColor(self, index:int, color:[float, float, float])\n    -> None\nC++: void GetBlockColor(unsigned int index, double color[3])\n\n"},
  {"RemoveBlockColor", PyvtkCompositePolyDataMapper_RemoveBlockColor, METH_VARARGS,
   "RemoveBlockColor(self, index:int) -> None\nC++: void RemoveBlockColor(unsigned int index)\n\n"},
  {"RemoveBlockColors", PyvtkCompositePolyDataMapper_RemoveBlockColors, METH_VARARGS,
   "RemoveBlockColors(self) -> None\nC++: void RemoveBlockColors()\n\n"},
  {"SetBlockOpacity", PyvtkCompositePolyDataMapper_SetBlockOpacity, METH_VARARGS,
   "SetBlockOpacity(self, index:int, opacity:float) -> None\nC++: void SetBlockOpacity(unsigned int index, double opacity)\n\nSet/get the opacity for a block given its flat index.\n"},
  {"GetBlockOpacity", PyvtkCompositePolyDataMapper_GetBlockOpacity, METH_VARARGS,
   "GetBlockOpacity(self, index:int) -> float\nC++: double GetBlockOpacity(unsigned int index)\n\n"},
  {"RemoveBlockOpacity", PyvtkCompositePolyDataMapper_RemoveBlockOpacity, METH_VARARGS,
   "RemoveBlockOpacity(self, index:int) -> None\nC++: void RemoveBlockOpacity(unsigned int index)\n\n"},
  {"RemoveBlockOpacities", PyvtkCompositePolyDataMapper_RemoveBlockOpacities, METH_VARARGS,
   "RemoveBlockOpacities(self) -> None\nC++: void RemoveBlockOpacities()\n\n"},
  {"SetBlockScalarMode", PyvtkCompositePolyDataMapper_SetBlockScalarMode, METH_VARARGS,
   "SetBlockScalarMode(self, index:int, value:int) -> None\nC++: void SetBlockScalarMode(unsigned int index, int value)\n\n@see vtkMapper::SetScalarMode\n"},
  {"GetBlockScalarMode", PyvtkCompositePolyDataMapper_GetBlockScalarMode, METH_VARARGS,
   "GetBlockScalarMode(self, index:int) -> int\nC++: int GetBlockScalarMode(unsigned int index)\n\n"},
  {"RemoveBlockScalarMode", PyvtkCompositePolyDataMapper_RemoveBlockScalarMode, METH_VARARGS,
   "RemoveBlockScalarMode(self, index:int) -> None\nC++: void RemoveBlockScalarMode(unsigned int index)\n\n"},
  {"RemoveBlockScalarModes", PyvtkCompositePolyDataMapper_RemoveBlockScalarModes, METH_VARARGS,
   "RemoveBlockScalarModes(self) -> None\nC++: void RemoveBlockScalarModes()\n\n"},
  {"SetBlockArrayAccessMode", PyvtkCompositePolyDataMapper_SetBlockArrayAccessMode, METH_VARARGS,
   "SetBlockArrayAccessMode(self, index:int, value:int) -> None\nC++: void SetBlockArrayAccessMode(unsigned int index, int value)\n\n@see vtkMapper::SetArrayAccessMode\n"},
  {"GetBlockArrayAccessMode", PyvtkCompositePolyDataMapper_GetBlockArrayAccessMode, METH_VARARGS,
   "GetBlockArrayAccessMode(self, index:int) -> int\nC++: int GetBlockArrayAccessMode(unsigned int index)\n\n"},
  {"RemoveBlockArrayAccessMode", PyvtkCompositePolyDataMapper_RemoveBlockArrayAccessMode, METH_VARARGS,
   "RemoveBlockArrayAccessMode(self, index:int) -> None\nC++: void RemoveBlockArrayAccessMode(unsigned int index)\n\n"},
  {"RemoveBlockArrayAccessModes", PyvtkCompositePolyDataMapper_RemoveBlockArrayAccessModes, METH_VARARGS,
   "RemoveBlockArrayAccessModes(self) -> None\nC++: void RemoveBlockArrayAccessModes()\n\n"},
  {"SetBlockArrayComponent", PyvtkCompositePolyDataMapper_SetBlockArrayComponent, METH_VARARGS,
   "SetBlockArrayComponent(self, index:int, value:int) -> None\nC++: void SetBlockArrayComponent(unsigned int index, int value)\n\n@see vtkMapper::SetArrayComponent\n"},
  {"GetBlockArrayComponent", PyvtkCompositePolyDataMapper_GetBlockArrayComponent, METH_VARARGS,
   "GetBlockArrayComponent(self, index:int) -> int\nC++: int GetBlockArrayComponent(unsigned int index)\n\n"},
  {"RemoveBlockArrayComponent", PyvtkCompositePolyDataMapper_RemoveBlockArrayComponent, METH_VARARGS,
   "RemoveBlockArrayComponent(self, index:int) -> None\nC++: void RemoveBlockArrayComponent(unsigned int index)\n\n"},
  {"RemoveBlockArrayComponents", PyvtkCompositePolyDataMapper_RemoveBlockArrayComponents, METH_VARARGS,
   "RemoveBlockArrayComponents(self) -> None\nC++: void RemoveBlockArrayComponents()\n\n"},
  {"SetBlockArrayId", PyvtkCompositePolyDataMapper_SetBlockArrayId, METH_VARARGS,
   "SetBlockArrayId(self, index:int, value:int) -> None\nC++: void SetBlockArrayId(unsigned int index, int value)\n\n@see vtkMapper::SetArrayId\n"},
  {"GetBlockArrayId", PyvtkCompositePolyDataMapper_GetBlockArrayId, METH_VARARGS,
   "GetBlockArrayId(self, index:int) -> int\nC++: int GetBlockArrayId(unsigned int index)\n\n"},
  {"RemoveBlockArrayId", PyvtkCompositePolyDataMapper_RemoveBlockArrayId, METH_VARARGS,
   "RemoveBlockArrayId(self, index:int) -> None\nC++: void RemoveBlockArrayId(unsigned int index)\n\n"},
  {"RemoveBlockArrayIds", PyvtkCompositePolyDataMapper_RemoveBlockArrayIds, METH_VARARGS,
   "RemoveBlockArrayIds(self) -> None\nC++: void RemoveBlockArrayIds()\n\n"},
  {"SetBlockArrayName", PyvtkCompositePolyDataMapper_SetBlockArrayName, METH_VARARGS,
   "SetBlockArrayName(self, index:int, value:str) -> None\nC++: void SetBlockArrayName(unsigned int index,\n    const std::string &value)\n\n@see vtkMapper::SetArrayName\n"},
  {"GetBlockArrayName", PyvtkCompositePolyDataMapper_GetBlockArrayName, METH_VARARGS,
   "GetBlockArrayName(self, index:int) -> str\nC++: std::string GetBlockArrayName(unsigned int index)\n\n"},
  {"RemoveBlockArrayName", PyvtkCompositePolyDataMapper_RemoveBlockArrayName, METH_VARARGS,
   "RemoveBlockArrayName(self, index:int) -> None\nC++: void RemoveBlockArrayName(unsigned int index)\n\n"},
  {"RemoveBlockArrayNames", PyvtkCompositePolyDataMapper_RemoveBlockArrayNames, METH_VARARGS,
   "RemoveBlockArrayNames(self) -> None\nC++: void RemoveBlockArrayNames()\n\n"},
  {"SetBlockFieldDataTupleId", PyvtkCompositePolyDataMapper_SetBlockFieldDataTupleId, METH_VARARGS,
   "SetBlockFieldDataTupleId(self, index:int, value:int) -> None\nC++: void SetBlockFieldDataTupleId(unsigned int index,\n    vtkIdType value)\n\n@see vtkMapper::SetFieldDataTupleId\n"},
  {"GetBlockFieldDataTupleId", PyvtkCompositePolyDataMapper_GetBlockFieldDataTupleId, METH_VARARGS,
   "GetBlockFieldDataTupleId(self, index:int) -> int\nC++: vtkIdType GetBlockFieldDataTupleId(unsigned int index)\n\n"},
  {"RemoveBlockFieldDataTupleId", PyvtkCompositePolyDataMapper_RemoveBlockFieldDataTupleId, METH_VARARGS,
   "RemoveBlockFieldDataTupleId(self, index:int) -> None\nC++: void RemoveBlockFieldDataTupleId(unsigned int index)\n\n"},
  {"RemoveBlockFieldDataTupleIds", PyvtkCompositePolyDataMapper_RemoveBlockFieldDataTupleIds, METH_VARARGS,
   "RemoveBlockFieldDataTupleIds(self) -> None\nC++: void RemoveBlockFieldDataTupleIds()\n\n"},
  {"SetColorMissingArraysWithNanColor", PyvtkCompositePolyDataMapper_SetColorMissingArraysWithNanColor, METH_VARARGS,
   "SetColorMissingArraysWithNanColor(self, _arg:bool) -> None\nC++: virtual void SetColorMissingArraysWithNanColor(bool _arg)\n\nIf the current 'color by' array is missing on some datasets,\ncolor these dataset by the LookupTable's NaN color, if the lookup\ntable supports it. Default is false.\n"},
  {"GetColorMissingArraysWithNanColor", PyvtkCompositePolyDataMapper_GetColorMissingArraysWithNanColor, METH_VARARGS,
   "GetColorMissingArraysWithNanColor(self) -> bool\nC++: virtual bool GetColorMissingArraysWithNanColor()\n\n"},
  {"ColorMissingArraysWithNanColorOn", PyvtkCompositePolyDataMapper_ColorMissingArraysWithNanColorOn, METH_VARARGS,
   "ColorMissingArraysWithNanColorOn(self) -> None\nC++: virtual void ColorMissingArraysWithNanColorOn()\n\n"},
  {"ColorMissingArraysWithNanColorOff", PyvtkCompositePolyDataMapper_ColorMissingArraysWithNanColorOff, METH_VARARGS,
   "ColorMissingArraysWithNanColorOff(self) -> None\nC++: virtual void ColorMissingArraysWithNanColorOff()\n\n"},
  {"SetInputArrayToProcess", PyvtkCompositePolyDataMapper_SetInputArrayToProcess, METH_VARARGS,
   "SetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:int, name:str) -> None\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, const char *name)\n    override;\nSetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:int, fieldAttributeType:int) -> None\nC++: void SetInputArrayToProcess(int idx, int port,\n    int connection, int fieldAssociation, int fieldAttributeType)\n    override;\nSetInputArrayToProcess(self, idx:int, info:vtkInformation) -> None\nC++: void SetInputArrayToProcess(int idx, vtkInformation *info)\n    override;\nSetInputArrayToProcess(self, idx:int, port:int, connection:int,\n    fieldAssociation:str, attributeTypeorName:str) -> None\nC++: virtual void SetInputArrayToProcess(int idx, int port,\n    int connection, const char *fieldAssociation,\n    const char *attributeTypeorName)\n\nSet the input data arrays that this algorithm will process.\nSpecifically the idx array that this algorithm will process\n(starting from 0) is the array on port, connection with the\nspecified association and name or attribute type (such as\nSCALARS). The fieldAssociation refers to which field in the data\nobject the array is stored. See vtkDataObject::FieldAssociations\nfor detail.\n"},
  {"ProcessSelectorPixelBuffers", PyvtkCompositePolyDataMapper_ProcessSelectorPixelBuffers, METH_VARARGS,
   "ProcessSelectorPixelBuffers(self, sel:vtkHardwareSelector,\n    pixeloffsets:[int, ...], prop:vtkProp) -> None\nC++: void ProcessSelectorPixelBuffers(vtkHardwareSelector *sel,\n    std::vector<unsigned int> &pixeloffsets, vtkProp *prop)\n    override;\n\nallows a mapper to update a selections color buffers Called from\na prop which in turn is called from the selector\n"},
  {"SetVBOShiftScaleMethod", PyvtkCompositePolyDataMapper_SetVBOShiftScaleMethod, METH_VARARGS,
   "SetVBOShiftScaleMethod(self, method:int) -> None\nC++: void SetVBOShiftScaleMethod(int method) override;\n\nA convenience method for enabling/disabling  the VBO's\nshift+scale transform.\n"},
  {"SetPauseShiftScale", PyvtkCompositePolyDataMapper_SetPauseShiftScale, METH_VARARGS,
   "SetPauseShiftScale(self, pauseShiftScale:bool) -> None\nC++: void SetPauseShiftScale(bool pauseShiftScale) override;\n\nPause updates of shift-scale parameters based on camera position.\n\nThis override passes the information to all instances in Helpers\n.\n"},
  {"GetMTime", PyvtkCompositePolyDataMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverridden to include vtkCompositeDataDisplayAttributes' mtime.\n"},
  {"SetPointIdArrayName", PyvtkCompositePolyDataMapper_SetPointIdArrayName, METH_VARARGS,
   "SetPointIdArrayName(self, _arg:str) -> None\nC++: virtual void SetPointIdArrayName(const char *_arg)\n\nBy default, this class uses the dataset's point and cell ids\nduring rendering. However, one can override those by specifying\ncell and point data arrays to use instead. Currently, only\nvtkIdType array is supported. Set to NULL string (default) to use\nthe point ids instead.\n"},
  {"GetPointIdArrayName", PyvtkCompositePolyDataMapper_GetPointIdArrayName, METH_VARARGS,
   "GetPointIdArrayName(self) -> str\nC++: virtual char *GetPointIdArrayName()\n\n"},
  {"SetCellIdArrayName", PyvtkCompositePolyDataMapper_SetCellIdArrayName, METH_VARARGS,
   "SetCellIdArrayName(self, _arg:str) -> None\nC++: virtual void SetCellIdArrayName(const char *_arg)\n\n"},
  {"GetCellIdArrayName", PyvtkCompositePolyDataMapper_GetCellIdArrayName, METH_VARARGS,
   "GetCellIdArrayName(self) -> str\nC++: virtual char *GetCellIdArrayName()\n\n"},
  {"SetProcessIdArrayName", PyvtkCompositePolyDataMapper_SetProcessIdArrayName, METH_VARARGS,
   "SetProcessIdArrayName(self, _arg:str) -> None\nC++: virtual void SetProcessIdArrayName(const char *_arg)\n\nIf this class should override the process id using a data-array,\nset this variable to the name of the array to use. It must be a\npoint-array.\n"},
  {"GetProcessIdArrayName", PyvtkCompositePolyDataMapper_GetProcessIdArrayName, METH_VARARGS,
   "GetProcessIdArrayName(self) -> str\nC++: virtual char *GetProcessIdArrayName()\n\n"},
  {"SetCompositeIdArrayName", PyvtkCompositePolyDataMapper_SetCompositeIdArrayName, METH_VARARGS,
   "SetCompositeIdArrayName(self, _arg:str) -> None\nC++: virtual void SetCompositeIdArrayName(const char *_arg)\n\nGenerally, this class can render the composite id when iterating\nover composite datasets. However in some cases (as in AMR), the\nrendered structure may not correspond to the input data, in which\ncase we need to provide a cell array that can be used to render\nin the composite id in selection passes. Set to NULL (default) to\nnot override the composite id color set by vtkCompositePainter if\nany. The array *MUST* be a cell array and of type\nvtkUnsignedIntArray.\n"},
  {"GetCompositeIdArrayName", PyvtkCompositePolyDataMapper_GetCompositeIdArrayName, METH_VARARGS,
   "GetCompositeIdArrayName(self) -> str\nC++: virtual char *GetCompositeIdArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompositePolyDataMapper_Doc =
  "vtkCompositePolyDataMapper - a class that renders hierarchical\npolygonal data\n\n"
  "Superclass: vtkPolyDataMapper\n\n"
  "This class uses a set of vtkPolyDataMappers to render input data\n"
  "which may be hierarchical. The input to this mapper may be either\n"
  "vtkPolyData or a vtkCompositeDataSet built from polydata. If\n"
  "something other than vtkPolyData is encountered, an error message\n"
  "will be produced.\n"
  "@sa\n"
  "vtkPolyDataMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositePolyDataMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCompositePolyDataMapper", // tp_name
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
  PyvtkCompositePolyDataMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositePolyDataMapper_StaticNew()
{
  return vtkCompositePolyDataMapper::New();
}

PyObject *PyvtkCompositePolyDataMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositePolyDataMapper_Type, PyvtkCompositePolyDataMapper_Methods,
    "vtkCompositePolyDataMapper",
 &PyvtkCompositePolyDataMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPolyDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositePolyDataMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositePolyDataMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositePolyDataMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

