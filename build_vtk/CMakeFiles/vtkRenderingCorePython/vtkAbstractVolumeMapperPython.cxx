// python wrapper for vtkAbstractVolumeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractVolumeMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractVolumeMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractVolumeMapper_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractMapper3D_ClassNew
extern "C" { PyObject *PyvtkAbstractMapper3D_ClassNew(); }
#define DECLARED_PyvtkAbstractMapper3D_ClassNew
#endif

static PyObject *
PyvtkAbstractVolumeMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractVolumeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractVolumeMapper *tempr = vtkAbstractVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractVolumeMapper::NewInstance());

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
PyvtkAbstractVolumeMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractVolumeMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractVolumeMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetDataSetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSetInput() :
      op->vtkAbstractVolumeMapper::GetDataSetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetDataObjectInput() :
      op->vtkAbstractVolumeMapper::GetDataObjectInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkAbstractVolumeMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      op->vtkAbstractVolumeMapper::GetBounds(temp0);
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
PyvtkAbstractVolumeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractVolumeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      op->vtkAbstractVolumeMapper::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarMode() :
      op->vtkAbstractVolumeMapper::GetScalarMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayAccessMode(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetArrayAccessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToDefault();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUsePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointData();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToUsePointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUseCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellData();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToUseCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUsePointFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUsePointFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUsePointFieldData();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToUsePointFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SetScalarModeToUseCellFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarModeToUseCellFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarModeToUseCellFieldData();
    }
    else
    {
      op->vtkAbstractVolumeMapper::SetScalarModeToUseCellFieldData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectScalarArray(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::SelectScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectScalarArray(temp0);
    }
    else
    {
      op->vtkAbstractVolumeMapper::SelectScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractVolumeMapper_SelectScalarArray_Methods[] = {
  {"SelectScalarArray", PyvtkAbstractVolumeMapper_SelectScalarArray_s1, METH_VARARGS,
   "@i"},
  {"SelectScalarArray", PyvtkAbstractVolumeMapper_SelectScalarArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAbstractVolumeMapper_SelectScalarArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAbstractVolumeMapper_SelectScalarArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectScalarArray");
  return nullptr;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkAbstractVolumeMapper::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkAbstractVolumeMapper::GetArrayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayAccessMode() :
      op->vtkAbstractVolumeMapper::GetArrayAccessMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetScalarModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarModeAsString() :
      op->vtkAbstractVolumeMapper::GetScalarModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale() :
      op->vtkAbstractVolumeMapper::GetGradientMagnitudeScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeScale(temp0) :
      op->vtkAbstractVolumeMapper::GetGradientMagnitudeScale(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeScale");
  return nullptr;
}


static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias() :
      op->vtkAbstractVolumeMapper::GetGradientMagnitudeBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeBias(temp0) :
      op->vtkAbstractVolumeMapper::GetGradientMagnitudeBias(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s1(self, args);
    case 1:
      return PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGradientMagnitudeBias");
  return nullptr;
}


static PyObject *
PyvtkAbstractVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractVolumeMapper *op = static_cast<vtkAbstractVolumeMapper *>(vp);

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
      op->vtkAbstractVolumeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractVolumeMapper_Methods[] = {
  {"IsTypeOf", PyvtkAbstractVolumeMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractVolumeMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractVolumeMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractVolumeMapper\nC++: static vtkAbstractVolumeMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractVolumeMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractVolumeMapper\nC++: vtkAbstractVolumeMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractVolumeMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractVolumeMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataSetInput", PyvtkAbstractVolumeMapper_GetDataSetInput, METH_VARARGS,
   "GetDataSetInput(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetDataSetInput()\n\nSet/Get the input data\n"},
  {"GetDataObjectInput", PyvtkAbstractVolumeMapper_GetDataObjectInput, METH_VARARGS,
   "GetDataObjectInput(self) -> vtkDataObject\nC++: virtual vtkDataObject *GetDataObjectInput()\n\n"},
  {"GetBounds", PyvtkAbstractVolumeMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"SetScalarMode", PyvtkAbstractVolumeMapper_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, _arg:int) -> None\nC++: virtual void SetScalarMode(int _arg)\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"GetScalarMode", PyvtkAbstractVolumeMapper_GetScalarMode, METH_VARARGS,
   "GetScalarMode(self) -> int\nC++: virtual int GetScalarMode()\n\n"},
  {"SetArrayAccessMode", PyvtkAbstractVolumeMapper_SetArrayAccessMode, METH_VARARGS,
   "SetArrayAccessMode(self, _arg:int) -> None\nC++: virtual void SetArrayAccessMode(int _arg)\n\n"},
  {"SetScalarModeToDefault", PyvtkAbstractVolumeMapper_SetScalarModeToDefault, METH_VARARGS,
   "SetScalarModeToDefault(self) -> None\nC++: void SetScalarModeToDefault()\n\n"},
  {"SetScalarModeToUsePointData", PyvtkAbstractVolumeMapper_SetScalarModeToUsePointData, METH_VARARGS,
   "SetScalarModeToUsePointData(self) -> None\nC++: void SetScalarModeToUsePointData()\n\n"},
  {"SetScalarModeToUseCellData", PyvtkAbstractVolumeMapper_SetScalarModeToUseCellData, METH_VARARGS,
   "SetScalarModeToUseCellData(self) -> None\nC++: void SetScalarModeToUseCellData()\n\n"},
  {"SetScalarModeToUsePointFieldData", PyvtkAbstractVolumeMapper_SetScalarModeToUsePointFieldData, METH_VARARGS,
   "SetScalarModeToUsePointFieldData(self) -> None\nC++: void SetScalarModeToUsePointFieldData()\n\n"},
  {"SetScalarModeToUseCellFieldData", PyvtkAbstractVolumeMapper_SetScalarModeToUseCellFieldData, METH_VARARGS,
   "SetScalarModeToUseCellFieldData(self) -> None\nC++: void SetScalarModeToUseCellFieldData()\n\n"},
  {"SelectScalarArray", PyvtkAbstractVolumeMapper_SelectScalarArray, METH_VARARGS,
   "SelectScalarArray(self, arrayNum:int) -> None\nC++: virtual void SelectScalarArray(int arrayNum)\nSelectScalarArray(self, arrayName:str) -> None\nC++: virtual void SelectScalarArray(const char *arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which scalar array to use during rendering. The\ntransfer function in the vtkVolumeProperty (attached to the\ncalling vtkVolume) will decide how to convert vectors to colors.\n"},
  {"GetArrayName", PyvtkAbstractVolumeMapper_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: virtual char *GetArrayName()\n\nGet the array name or number and component to use for rendering.\n"},
  {"GetArrayId", PyvtkAbstractVolumeMapper_GetArrayId, METH_VARARGS,
   "GetArrayId(self) -> int\nC++: virtual int GetArrayId()\n\n"},
  {"GetArrayAccessMode", PyvtkAbstractVolumeMapper_GetArrayAccessMode, METH_VARARGS,
   "GetArrayAccessMode(self) -> int\nC++: virtual int GetArrayAccessMode()\n\n"},
  {"GetScalarModeAsString", PyvtkAbstractVolumeMapper_GetScalarModeAsString, METH_VARARGS,
   "GetScalarModeAsString(self) -> str\nC++: const char *GetScalarModeAsString()\n\nReturn the method for obtaining scalar data.\n"},
  {"GetGradientMagnitudeScale", PyvtkAbstractVolumeMapper_GetGradientMagnitudeScale, METH_VARARGS,
   "GetGradientMagnitudeScale(self) -> float\nC++: virtual float GetGradientMagnitudeScale()\nGetGradientMagnitudeScale(self, __a:int) -> float\nC++: virtual float GetGradientMagnitudeScale(int)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE\n"},
  {"GetGradientMagnitudeBias", PyvtkAbstractVolumeMapper_GetGradientMagnitudeBias, METH_VARARGS,
   "GetGradientMagnitudeBias(self) -> float\nC++: virtual float GetGradientMagnitudeBias()\nGetGradientMagnitudeBias(self, __a:int) -> float\nC++: virtual float GetGradientMagnitudeBias(int)\n\n"},
  {"Render", PyvtkAbstractVolumeMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, vol:vtkVolume) -> None\nC++: virtual void Render(vtkRenderer *ren, vtkVolume *vol)\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {"ReleaseGraphicsResources", PyvtkAbstractVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractVolumeMapper_Doc =
  "vtkAbstractVolumeMapper - Abstract class for a volume mapper\n\n"
  "Superclass: vtkAbstractMapper3D\n\n"
  "vtkAbstractVolumeMapper is the abstract definition of a volume\n"
  "mapper. Specific subclasses deal with different specific types of\n"
  "data input\n\n"
  "@sa\n"
  "vtkVolumeMapper vtkUnstructuredGridVolumeMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractVolumeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkAbstractVolumeMapper", // tp_name
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
  PyvtkAbstractVolumeMapper_Doc, // tp_doc
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

PyObject *PyvtkAbstractVolumeMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractVolumeMapper_Type, PyvtkAbstractVolumeMapper_Methods,
    "vtkAbstractVolumeMapper",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractMapper3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractVolumeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractVolumeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractVolumeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

