// python wrapper for vtkClipClosedSurface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkClipClosedSurface.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkClipClosedSurface(PyObject *dict); }
extern "C" { PyObject *PyvtkClipClosedSurface_ClassNew(); }


static PyObject *
PyvtkClipClosedSurface_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkClipClosedSurface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkClipClosedSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkClipClosedSurface *tempr = vtkClipClosedSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClipClosedSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkClipClosedSurface::NewInstance());

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
PyvtkClipClosedSurface_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkClipClosedSurface::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkClipClosedSurface::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  vtkPlaneCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
  {
    if (ap.IsBound())
    {
      op->SetClippingPlanes(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetClippingPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetClippingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlaneCollection *tempr = (ap.IsBound() ?
      op->GetClippingPlanes() :
      op->vtkClipClosedSurface::GetClippingPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  double temp0;
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
      op->vtkClipClosedSurface::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkClipClosedSurface::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointData(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetPassPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOn();
    }
    else
    {
      op->vtkClipClosedSurface::PassPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOff();
    }
    else
    {
      op->vtkClipClosedSurface::PassPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkClipClosedSurface::GetPassPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateOutline(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetGenerateOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutlineOn();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateOutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutlineOff();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateOutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateOutline() :
      op->vtkClipClosedSurface::GetGenerateOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFaces(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetGenerateFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOn();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateFacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOff();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateFacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkClipClosedSurface::GetGenerateFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarMode(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMinValue() :
      op->vtkClipClosedSurface::GetScalarModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarModeMaxValue() :
      op->vtkClipClosedSurface::GetScalarModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToNone();
    }
    else
    {
      op->vtkClipClosedSurface::SetScalarModeToNone();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToColors();
    }
    else
    {
      op->vtkClipClosedSurface::SetScalarModeToColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetScalarModeToLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToLabels();
    }
    else
    {
      op->vtkClipClosedSurface::SetScalarModeToLabels();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkClipClosedSurface::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkClipClosedSurface::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetBaseColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetBaseColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkClipClosedSurface::SetBaseColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetBaseColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBaseColor(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetBaseColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetBaseColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkClipClosedSurface_SetBaseColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetBaseColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBaseColor");
  return nullptr;
}


static PyObject *
PyvtkClipClosedSurface_GetBaseColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBaseColor() :
      op->vtkClipClosedSurface::GetBaseColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetClipColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetClipColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkClipClosedSurface::SetClipColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetClipColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClipColor(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetClipColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetClipColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkClipClosedSurface_SetClipColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetClipColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClipColor");
  return nullptr;
}


static PyObject *
PyvtkClipClosedSurface_GetClipColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClipColor() :
      op->vtkClipClosedSurface::GetClipColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaneId(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetActivePlaneId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActivePlaneId() :
      op->vtkClipClosedSurface::GetActivePlaneId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

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
      op->SetActivePlaneColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkClipClosedSurface::SetActivePlaneColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaneColor(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetActivePlaneColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkClipClosedSurface_SetActivePlaneColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkClipClosedSurface_SetActivePlaneColor_s1(self, args);
    case 1:
      return PyvtkClipClosedSurface_SetActivePlaneColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActivePlaneColor");
  return nullptr;
}


static PyObject *
PyvtkClipClosedSurface_GetActivePlaneColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetActivePlaneColor() :
      op->vtkClipClosedSurface::GetActivePlaneColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulationErrorDisplay(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetTriangulationErrorDisplay(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_TriangulationErrorDisplayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulationErrorDisplayOn();
    }
    else
    {
      op->vtkClipClosedSurface::TriangulationErrorDisplayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_TriangulationErrorDisplayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TriangulationErrorDisplayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TriangulationErrorDisplayOff();
    }
    else
    {
      op->vtkClipClosedSurface::TriangulationErrorDisplayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetTriangulationErrorDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationErrorDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationErrorDisplay() :
      op->vtkClipClosedSurface::GetTriangulationErrorDisplay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInsideOut(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetInsideOut(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInsideOut() :
      op->vtkClipClosedSurface::GetInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOn();
    }
    else
    {
      op->vtkClipClosedSurface::InsideOutOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InsideOutOff();
    }
    else
    {
      op->vtkClipClosedSurface::InsideOutOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_SetGenerateClipFaceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateClipFaceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateClipFaceOutput(temp0);
    }
    else
    {
      op->vtkClipClosedSurface::SetGenerateClipFaceOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetGenerateClipFaceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateClipFaceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateClipFaceOutput() :
      op->vtkClipClosedSurface::GetGenerateClipFaceOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateClipFaceOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipFaceOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipFaceOutputOn();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateClipFaceOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GenerateClipFaceOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateClipFaceOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateClipFaceOutputOff();
    }
    else
    {
      op->vtkClipClosedSurface::GenerateClipFaceOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkClipClosedSurface_GetClipFaceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipFaceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkClipClosedSurface *op = static_cast<vtkClipClosedSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetClipFaceOutput() :
      op->vtkClipClosedSurface::GetClipFaceOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkClipClosedSurface_Methods[] = {
  {"IsTypeOf", PyvtkClipClosedSurface_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkClipClosedSurface_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkClipClosedSurface_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkClipClosedSurface\nC++: static vtkClipClosedSurface *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkClipClosedSurface_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkClipClosedSurface\nC++: vtkClipClosedSurface *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkClipClosedSurface_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkClipClosedSurface_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetClippingPlanes", PyvtkClipClosedSurface_SetClippingPlanes, METH_VARARGS,
   "SetClippingPlanes(self, planes:vtkPlaneCollection) -> None\nC++: virtual void SetClippingPlanes(vtkPlaneCollection *planes)\n\nSet the vtkPlaneCollection that holds the clipping planes.\n"},
  {"GetClippingPlanes", PyvtkClipClosedSurface_GetClippingPlanes, METH_VARARGS,
   "GetClippingPlanes(self) -> vtkPlaneCollection\nC++: virtual vtkPlaneCollection *GetClippingPlanes()\n\n"},
  {"SetTolerance", PyvtkClipClosedSurface_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSet the tolerance for creating new points while clipping.  If the\ntolerance is too small, then degenerate triangles might be\nproduced. The default tolerance is 1e-6.\n"},
  {"GetTolerance", PyvtkClipClosedSurface_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetPassPointData", PyvtkClipClosedSurface_SetPassPointData, METH_VARARGS,
   "SetPassPointData(self, _arg:int) -> None\nC++: virtual void SetPassPointData(vtkTypeBool _arg)\n\nPass the point data to the output.  Point data will be\ninterpolated when new points are generated.  This is off by\ndefault.\n"},
  {"PassPointDataOn", PyvtkClipClosedSurface_PassPointDataOn, METH_VARARGS,
   "PassPointDataOn(self) -> None\nC++: virtual void PassPointDataOn()\n\n"},
  {"PassPointDataOff", PyvtkClipClosedSurface_PassPointDataOff, METH_VARARGS,
   "PassPointDataOff(self) -> None\nC++: virtual void PassPointDataOff()\n\n"},
  {"GetPassPointData", PyvtkClipClosedSurface_GetPassPointData, METH_VARARGS,
   "GetPassPointData(self) -> int\nC++: virtual vtkTypeBool GetPassPointData()\n\n"},
  {"SetGenerateOutline", PyvtkClipClosedSurface_SetGenerateOutline, METH_VARARGS,
   "SetGenerateOutline(self, _arg:int) -> None\nC++: virtual void SetGenerateOutline(vtkTypeBool _arg)\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is off by default.\n"},
  {"GenerateOutlineOn", PyvtkClipClosedSurface_GenerateOutlineOn, METH_VARARGS,
   "GenerateOutlineOn(self) -> None\nC++: virtual void GenerateOutlineOn()\n\n"},
  {"GenerateOutlineOff", PyvtkClipClosedSurface_GenerateOutlineOff, METH_VARARGS,
   "GenerateOutlineOff(self) -> None\nC++: virtual void GenerateOutlineOff()\n\n"},
  {"GetGenerateOutline", PyvtkClipClosedSurface_GetGenerateOutline, METH_VARARGS,
   "GetGenerateOutline(self) -> int\nC++: virtual vtkTypeBool GetGenerateOutline()\n\n"},
  {"SetGenerateFaces", PyvtkClipClosedSurface_SetGenerateFaces, METH_VARARGS,
   "SetGenerateFaces(self, _arg:int) -> None\nC++: virtual void SetGenerateFaces(vtkTypeBool _arg)\n\nSet whether to generate polygonal faces for the output.  This is\non by default.  If it is off, then the output will have no polys.\n"},
  {"GenerateFacesOn", PyvtkClipClosedSurface_GenerateFacesOn, METH_VARARGS,
   "GenerateFacesOn(self) -> None\nC++: virtual void GenerateFacesOn()\n\n"},
  {"GenerateFacesOff", PyvtkClipClosedSurface_GenerateFacesOff, METH_VARARGS,
   "GenerateFacesOff(self) -> None\nC++: virtual void GenerateFacesOff()\n\n"},
  {"GetGenerateFaces", PyvtkClipClosedSurface_GetGenerateFaces, METH_VARARGS,
   "GetGenerateFaces(self) -> int\nC++: virtual vtkTypeBool GetGenerateFaces()\n\n"},
  {"SetScalarMode", PyvtkClipClosedSurface_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, _arg:int) -> None\nC++: virtual void SetScalarMode(int _arg)\n\nSet whether to add cell scalars, so that new faces and outlines\ncan be distinguished from original faces and lines.  The options\nare \"None\", \"Colors\", and \"Labels\".  For the \"Labels\" option, a\nscalar value of \"0\" indicates an original cell, \"1\" indicates a\nnew cell on a cut face, and \"2\" indicates a new cell on the\nActivePlane as set by the SetActivePlane() method.  The default\nscalar mode is \"None\".\n"},
  {"GetScalarModeMinValue", PyvtkClipClosedSurface_GetScalarModeMinValue, METH_VARARGS,
   "GetScalarModeMinValue(self) -> int\nC++: virtual int GetScalarModeMinValue()\n\n"},
  {"GetScalarModeMaxValue", PyvtkClipClosedSurface_GetScalarModeMaxValue, METH_VARARGS,
   "GetScalarModeMaxValue(self) -> int\nC++: virtual int GetScalarModeMaxValue()\n\n"},
  {"SetScalarModeToNone", PyvtkClipClosedSurface_SetScalarModeToNone, METH_VARARGS,
   "SetScalarModeToNone(self) -> None\nC++: void SetScalarModeToNone()\n\n"},
  {"SetScalarModeToColors", PyvtkClipClosedSurface_SetScalarModeToColors, METH_VARARGS,
   "SetScalarModeToColors(self) -> None\nC++: void SetScalarModeToColors()\n\n"},
  {"SetScalarModeToLabels", PyvtkClipClosedSurface_SetScalarModeToLabels, METH_VARARGS,
   "SetScalarModeToLabels(self) -> None\nC++: void SetScalarModeToLabels()\n\n"},
  {"GetScalarMode", PyvtkClipClosedSurface_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"GetScalarModeAsString", PyvtkClipClosedSurface_GetScalarModeAsString, METH_VARARGS,
   "GetScalarModeAsString(self) -> str\nC++: const char *GetScalarModeAsString()\n\n"},
  {"SetBaseColor", PyvtkClipClosedSurface_SetBaseColor, METH_VARARGS,
   "SetBaseColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetBaseColor(double _arg1, double _arg2,\n    double _arg3)\nSetBaseColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBaseColor(const double _arg[3])\n\nSet the color for all cells were part of the original geometry.\nIf the input data already has color cell scalars, then those\nvalues will be used and parameter will be ignored.  The default\ncolor is red.  Requires SetScalarModeToColors.\n"},
  {"GetBaseColor", PyvtkClipClosedSurface_GetBaseColor, METH_VARARGS,
   "GetBaseColor(self) -> (float, float, float)\nC++: virtual double *GetBaseColor()\n\n"},
  {"SetClipColor", PyvtkClipClosedSurface_SetClipColor, METH_VARARGS,
   "SetClipColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetClipColor(double _arg1, double _arg2,\n    double _arg3)\nSetClipColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetClipColor(const double _arg[3])\n\nSet the color for any new geometry, either faces or outlines,\nthat are created as a result of the clipping. The default color\nis orange. Requires SetScalarModeToColors.\n"},
  {"GetClipColor", PyvtkClipClosedSurface_GetClipColor, METH_VARARGS,
   "GetClipColor(self) -> (float, float, float)\nC++: virtual double *GetClipColor()\n\n"},
  {"SetActivePlaneId", PyvtkClipClosedSurface_SetActivePlaneId, METH_VARARGS,
   "SetActivePlaneId(self, _arg:int) -> None\nC++: virtual void SetActivePlaneId(int _arg)\n\nSet the active plane, so that the clipping from that plane can be\ndisplayed in a different color.  Set this to -1 if there is no\nactive plane.  The default value is -1.\n"},
  {"GetActivePlaneId", PyvtkClipClosedSurface_GetActivePlaneId, METH_VARARGS,
   "GetActivePlaneId(self) -> int\nC++: virtual int GetActivePlaneId()\n\n"},
  {"SetActivePlaneColor", PyvtkClipClosedSurface_SetActivePlaneColor, METH_VARARGS,
   "SetActivePlaneColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetActivePlaneColor(double _arg1, double _arg2,\n    double _arg3)\nSetActivePlaneColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetActivePlaneColor(const double _arg[3])\n\nSet the color for any new geometry produced by clipping with the\nActivePlane, if ActivePlaneId is set.  Default is yellow.\nRequires SetScalarModeToColors.\n"},
  {"GetActivePlaneColor", PyvtkClipClosedSurface_GetActivePlaneColor, METH_VARARGS,
   "GetActivePlaneColor(self) -> (float, float, float)\nC++: virtual double *GetActivePlaneColor()\n\n"},
  {"SetTriangulationErrorDisplay", PyvtkClipClosedSurface_SetTriangulationErrorDisplay, METH_VARARGS,
   "SetTriangulationErrorDisplay(self, _arg:int) -> None\nC++: virtual void SetTriangulationErrorDisplay(vtkTypeBool _arg)\n\nGenerate errors when the triangulation fails.  Usually the\ntriangulation errors are too small to see, but they result in a\nsurface that is not watertight.  This option has no impact on\nperformance.\n"},
  {"TriangulationErrorDisplayOn", PyvtkClipClosedSurface_TriangulationErrorDisplayOn, METH_VARARGS,
   "TriangulationErrorDisplayOn(self) -> None\nC++: virtual void TriangulationErrorDisplayOn()\n\n"},
  {"TriangulationErrorDisplayOff", PyvtkClipClosedSurface_TriangulationErrorDisplayOff, METH_VARARGS,
   "TriangulationErrorDisplayOff(self) -> None\nC++: virtual void TriangulationErrorDisplayOff()\n\n"},
  {"GetTriangulationErrorDisplay", PyvtkClipClosedSurface_GetTriangulationErrorDisplay, METH_VARARGS,
   "GetTriangulationErrorDisplay(self) -> int\nC++: virtual vtkTypeBool GetTriangulationErrorDisplay()\n\n"},
  {"SetInsideOut", PyvtkClipClosedSurface_SetInsideOut, METH_VARARGS,
   "SetInsideOut(self, _arg:int) -> None\nC++: virtual void SetInsideOut(vtkTypeBool _arg)\n\nSet/Get the InsideOut flag. When off, a vertex is considered\ninside the implicit function if it lies in front of the clipping\nplane. When InsideOutside is turned on, a vertex is considered\ninside if it lies on the back side of the plane.  InsideOut is\noff by default.\n\note Regardless of the InsideOut flag, it is not possible to\ngenerate an inside (that is, convex) corner by clipping.\n"},
  {"GetInsideOut", PyvtkClipClosedSurface_GetInsideOut, METH_VARARGS,
   "GetInsideOut(self) -> int\nC++: virtual vtkTypeBool GetInsideOut()\n\n"},
  {"InsideOutOn", PyvtkClipClosedSurface_InsideOutOn, METH_VARARGS,
   "InsideOutOn(self) -> None\nC++: virtual void InsideOutOn()\n\n"},
  {"InsideOutOff", PyvtkClipClosedSurface_InsideOutOff, METH_VARARGS,
   "InsideOutOff(self) -> None\nC++: virtual void InsideOutOff()\n\n"},
  {"SetGenerateClipFaceOutput", PyvtkClipClosedSurface_SetGenerateClipFaceOutput, METH_VARARGS,
   "SetGenerateClipFaceOutput(self, _arg:int) -> None\nC++: virtual void SetGenerateClipFaceOutput(vtkTypeBool _arg)\n\nControl whether a second output is generated. The second output\ncontains the polygonal data that is generated at the clip face as\na result of the triangulation.  GenerateClipFaceOutput is off by\ndefault.\n"},
  {"GetGenerateClipFaceOutput", PyvtkClipClosedSurface_GetGenerateClipFaceOutput, METH_VARARGS,
   "GetGenerateClipFaceOutput(self) -> int\nC++: virtual vtkTypeBool GetGenerateClipFaceOutput()\n\n"},
  {"GenerateClipFaceOutputOn", PyvtkClipClosedSurface_GenerateClipFaceOutputOn, METH_VARARGS,
   "GenerateClipFaceOutputOn(self) -> None\nC++: virtual void GenerateClipFaceOutputOn()\n\n"},
  {"GenerateClipFaceOutputOff", PyvtkClipClosedSurface_GenerateClipFaceOutputOff, METH_VARARGS,
   "GenerateClipFaceOutputOff(self) -> None\nC++: virtual void GenerateClipFaceOutputOff()\n\n"},
  {"GetClipFaceOutput", PyvtkClipClosedSurface_GetClipFaceOutput, METH_VARARGS,
   "GetClipFaceOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetClipFaceOutput()\n\nReturn the clip face triangulated output.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkClipClosedSurface_Doc =
  "vtkClipClosedSurface - Clip a closed surface with a plane collection\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkClipClosedSurface will clip a closed polydata surface with a\n"
  "collection of clipping planes.  It will produce a new closed surface\n"
  "by creating new polygonal faces where the input data was clipped.\n\n"
  "Non-manifold surfaces should not be used as input for this filter.\n"
  "The input surface should have no open edges, and must not have any\n"
  "edges that are shared by more than two faces.  The vtkFeatureEdges\n"
  "filter can be used to verify that a data set satisfies these\n"
  "conditions. In addition, the input surface should not self-intersect,\n"
  "meaning that the faces of the surface should only touch at their\n"
  "edges.\n\n"
  "If GenerateOutline is on, this filter will generate an outline\n"
  "wherever the clipping planes intersect the data.  The ScalarMode\n"
  "option will add cell scalars to the output, so that the generated\n"
  "faces can be visualized in a different color from the original\n"
  "surface.\n\n"
  "The InsideOut flag can be used to reverse the sense of what\n"
  "inside/outside the clip region means. This changes the which side of\n"
  "the clipping plane is clipped away.\n\n"
  "This filter can be configured to compute a second output. The second\n"
  "output is the polygonal data with the new triangulated faces. Set the\n"
  "GenerateClipFaceOutput boolean on if you wish to access this output\n"
  "data.\n\n"
  "@warning\n"
  "The triangulation of new faces is done in O(n) time for simple convex\n"
  "inputs, but for non-convex inputs the worst-case time is O(n^2*m^2)\n"
  "where n is the number of points and m is the number of 3D cavities.\n"
  "The best triangulation algorithms, in contrast, are O(n log n). There\n"
  "are also rare cases where the triangulation will fail to produce a\n"
  "watertight output.  Turn on TriangulationErrorDisplay to be notified\n"
  "of these failures.\n\n"
  "@sa\n"
  "vtkOutlineFilter vtkOutlineSource vtkVolumeOutlineSource\n"
  "vtkContourTriangulator\n\n"
  "@par Thanks: Thanks to David Gobbi for contributing this class to\n"
  "VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkClipClosedSurface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkClipClosedSurface", // tp_name
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
  PyvtkClipClosedSurface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkClipClosedSurface_StaticNew()
{
  return vtkClipClosedSurface::New();
}

PyObject *PyvtkClipClosedSurface_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkClipClosedSurface_Type, PyvtkClipClosedSurface_Methods,
    "vtkClipClosedSurface",
 &PyvtkClipClosedSurface_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkClipClosedSurface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkClipClosedSurface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkClipClosedSurface", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_CCS_SCALAR_MODE_NONE", VTK_CCS_SCALAR_MODE_NONE },
        { "VTK_CCS_SCALAR_MODE_COLORS", VTK_CCS_SCALAR_MODE_COLORS },
        { "VTK_CCS_SCALAR_MODE_LABELS", VTK_CCS_SCALAR_MODE_LABELS },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

