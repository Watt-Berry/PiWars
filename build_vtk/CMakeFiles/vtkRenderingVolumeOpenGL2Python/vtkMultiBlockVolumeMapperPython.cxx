// python wrapper for vtkMultiBlockVolumeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMultiBlockVolumeMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMultiBlockVolumeMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkMultiBlockVolumeMapper_ClassNew(); }


static PyObject *
PyvtkMultiBlockVolumeMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMultiBlockVolumeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMultiBlockVolumeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMultiBlockVolumeMapper *tempr = vtkMultiBlockVolumeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiBlockVolumeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMultiBlockVolumeMapper::NewInstance());

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
PyvtkMultiBlockVolumeMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMultiBlockVolumeMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMultiBlockVolumeMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMultiBlockVolumeMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockVolumeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

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
      op->vtkMultiBlockVolumeMapper::GetBounds(temp0);
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
PyvtkMultiBlockVolumeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMultiBlockVolumeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkMultiBlockVolumeMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SelectScalarArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

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
      op->vtkMultiBlockVolumeMapper::SelectScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockVolumeMapper_SelectScalarArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectScalarArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

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
      op->vtkMultiBlockVolumeMapper::SelectScalarArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiBlockVolumeMapper_SelectScalarArray_Methods[] = {
  {"SelectScalarArray", PyvtkMultiBlockVolumeMapper_SelectScalarArray_s1, METH_VARARGS,
   "@i"},
  {"SelectScalarArray", PyvtkMultiBlockVolumeMapper_SelectScalarArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMultiBlockVolumeMapper_SelectScalarArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMultiBlockVolumeMapper_SelectScalarArray_Methods;
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
PyvtkMultiBlockVolumeMapper_SetScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

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
      op->vtkMultiBlockVolumeMapper::SetScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

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
      op->vtkMultiBlockVolumeMapper::SetArrayAccessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

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
      op->vtkMultiBlockVolumeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorMode(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetVectorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkMultiBlockVolumeMapper::GetVectorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorComponent(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetVectorComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_GetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorComponent() :
      op->vtkMultiBlockVolumeMapper::GetVectorComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlendMode(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetBlendMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetComputeNormalFromOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormalFromOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormalFromOpacity(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetComputeNormalFromOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetGlobalIlluminationReach(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIlluminationReach");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalIlluminationReach(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetGlobalIlluminationReach(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_GetGlobalIlluminationReach(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIlluminationReach");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGlobalIlluminationReach() :
      op->vtkMultiBlockVolumeMapper::GetGlobalIlluminationReach());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetVolumetricScatteringBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumetricScatteringBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVolumetricScatteringBlending(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetVolumetricScatteringBlending(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_GetVolumetricScatteringBlending(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumetricScatteringBlending");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetVolumetricScatteringBlending() :
      op->vtkMultiBlockVolumeMapper::GetVolumetricScatteringBlending());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetCropping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropping(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetCropping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetCroppingRegionPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

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
      op->SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetCroppingRegionPlanes(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockVolumeMapper_SetCroppingRegionPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionPlanes(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetCroppingRegionPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMultiBlockVolumeMapper_SetCroppingRegionPlanes(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkMultiBlockVolumeMapper_SetCroppingRegionPlanes_s1(self, args);
    case 1:
      return PyvtkMultiBlockVolumeMapper_SetCroppingRegionPlanes_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCroppingRegionPlanes");
  return nullptr;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetCroppingRegionFlags(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCroppingRegionFlags");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCroppingRegionFlags(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetCroppingRegionFlags(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetRequestedRenderMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequestedRenderMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRequestedRenderMode(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetRequestedRenderMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMultiBlockVolumeMapper_SetTransfer2DYAxisArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransfer2DYAxisArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockVolumeMapper *op = static_cast<vtkMultiBlockVolumeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransfer2DYAxisArray(temp0);
    }
    else
    {
      op->vtkMultiBlockVolumeMapper::SetTransfer2DYAxisArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMultiBlockVolumeMapper_Methods[] = {
  {"IsTypeOf", PyvtkMultiBlockVolumeMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMultiBlockVolumeMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMultiBlockVolumeMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMultiBlockVolumeMapper\nC++: static vtkMultiBlockVolumeMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMultiBlockVolumeMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMultiBlockVolumeMapper\nC++: vtkMultiBlockVolumeMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMultiBlockVolumeMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMultiBlockVolumeMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBounds", PyvtkMultiBlockVolumeMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nAPI Superclass\n\\sa vtkAbstractVolumeMapper\n"},
  {"SelectScalarArray", PyvtkMultiBlockVolumeMapper_SelectScalarArray, METH_VARARGS,
   "SelectScalarArray(self, arrayNum:int) -> None\nC++: void SelectScalarArray(int arrayNum) override;\nSelectScalarArray(self, arrayName:str) -> None\nC++: void SelectScalarArray(char const *arrayName) override;\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which scalar array to use during rendering. The\ntransfer function in the vtkVolumeProperty (attached to the\ncalling vtkVolume) will decide how to convert vectors to colors.\n"},
  {"SetScalarMode", PyvtkMultiBlockVolumeMapper_SetScalarMode, METH_VARARGS,
   "SetScalarMode(self, ScalarMode:int) -> None\nC++: void SetScalarMode(int ScalarMode) override;\n\nControl how the mapper works with scalar point data and cell\nattribute data.  By default (ScalarModeToDefault), the mapper\nwill use point data, and if no point data is available, then cell\ndata is used. Alternatively you can explicitly set the mapper to\nuse point data (ScalarModeToUsePointData) or cell data\n(ScalarModeToUseCellData). You can also choose to get the scalars\nfrom an array in point field data (ScalarModeToUsePointFieldData)\nor cell field data (ScalarModeToUseCellFieldData).  If scalars\nare coming from a field data array, you must call\nSelectScalarArray.\n"},
  {"SetArrayAccessMode", PyvtkMultiBlockVolumeMapper_SetArrayAccessMode, METH_VARARGS,
   "SetArrayAccessMode(self, accessMode:int) -> None\nC++: void SetArrayAccessMode(int accessMode) override;\n\n"},
  {"Render", PyvtkMultiBlockVolumeMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, vol:vtkVolume) -> None\nC++: void Render(vtkRenderer *ren, vtkVolume *vol) override;\n\nRender the current dataset.\n\n\\warning Internal method - not intended for general use, do\nNOT use this method outside of the rendering process.\n"},
  {"ReleaseGraphicsResources", PyvtkMultiBlockVolumeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\n\\warning Internal method - not intended for general use, do\nNOT use this method outside of the rendering process.\n"},
  {"SetVectorMode", PyvtkMultiBlockVolumeMapper_SetVectorMode, METH_VARARGS,
   "SetVectorMode(self, mode:int) -> None\nC++: void SetVectorMode(int mode)\n\nVectorMode interface exposed from vtkSmartVolumeMapper.\n"},
  {"GetVectorMode", PyvtkMultiBlockVolumeMapper_GetVectorMode, METH_VARARGS,
   "GetVectorMode(self) -> int\nC++: virtual int GetVectorMode()\n\n"},
  {"SetVectorComponent", PyvtkMultiBlockVolumeMapper_SetVectorComponent, METH_VARARGS,
   "SetVectorComponent(self, component:int) -> None\nC++: void SetVectorComponent(int component)\n\n"},
  {"GetVectorComponent", PyvtkMultiBlockVolumeMapper_GetVectorComponent, METH_VARARGS,
   "GetVectorComponent(self) -> int\nC++: virtual int GetVectorComponent()\n\n"},
  {"SetBlendMode", PyvtkMultiBlockVolumeMapper_SetBlendMode, METH_VARARGS,
   "SetBlendMode(self, mode:int) -> None\nC++: void SetBlendMode(int mode) override;\n\nBlending mode API from vtkVolumeMapper\n\\sa vtkVolumeMapper::SetBlendMode\n"},
  {"SetComputeNormalFromOpacity", PyvtkMultiBlockVolumeMapper_SetComputeNormalFromOpacity, METH_VARARGS,
   "SetComputeNormalFromOpacity(self, val:bool) -> None\nC++: void SetComputeNormalFromOpacity(bool val) override;\n\nComputeNormalFromOpacity exposed\n\\sa vtkVolumeMapper::SetComputeNormalFromOpacity\n"},
  {"SetGlobalIlluminationReach", PyvtkMultiBlockVolumeMapper_SetGlobalIlluminationReach, METH_VARARGS,
   "SetGlobalIlluminationReach(self, val:float) -> None\nC++: void SetGlobalIlluminationReach(float val)\n\n@copydoc vtkSmartVolumeMapper::SetGlobalIlluminationReach(float)\n"},
  {"GetGlobalIlluminationReach", PyvtkMultiBlockVolumeMapper_GetGlobalIlluminationReach, METH_VARARGS,
   "GetGlobalIlluminationReach(self) -> float\nC++: virtual float GetGlobalIlluminationReach()\n\n"},
  {"SetVolumetricScatteringBlending", PyvtkMultiBlockVolumeMapper_SetVolumetricScatteringBlending, METH_VARARGS,
   "SetVolumetricScatteringBlending(self, val:float) -> None\nC++: void SetVolumetricScatteringBlending(float val)\n\n@copydoc\nvtkSmartVolumeMapper::SetVolumetricScatteringBlending(float)\n"},
  {"GetVolumetricScatteringBlending", PyvtkMultiBlockVolumeMapper_GetVolumetricScatteringBlending, METH_VARARGS,
   "GetVolumetricScatteringBlending(self) -> float\nC++: virtual float GetVolumetricScatteringBlending()\n\n"},
  {"SetCropping", PyvtkMultiBlockVolumeMapper_SetCropping, METH_VARARGS,
   "SetCropping(self, mode:int) -> None\nC++: void SetCropping(vtkTypeBool mode) override;\n\nCropping API from vtkVolumeMapper\n\\sa vtkVolumeMapper::SetCropping\n"},
  {"SetCroppingRegionPlanes", PyvtkMultiBlockVolumeMapper_SetCroppingRegionPlanes, METH_VARARGS,
   "SetCroppingRegionPlanes(self, arg1:float, arg2:float, arg3:float,\n    arg4:float, arg5:float, arg6:float) -> None\nC++: void SetCroppingRegionPlanes(double arg1, double arg2,\n    double arg3, double arg4, double arg5, double arg6) override;\nSetCroppingRegionPlanes(self, planes:(float, float, float, float,\n    float, float)) -> None\nC++: void SetCroppingRegionPlanes(const double *planes) override;\n\n\\sa vtkVolumeMapper::SetCroppingRegionPlanes\n"},
  {"SetCroppingRegionFlags", PyvtkMultiBlockVolumeMapper_SetCroppingRegionFlags, METH_VARARGS,
   "SetCroppingRegionFlags(self, mode:int) -> None\nC++: void SetCroppingRegionFlags(int mode) override;\n\n\\sa vtkVolumeMapper::SetCroppingRegionFlags\n"},
  {"SetRequestedRenderMode", PyvtkMultiBlockVolumeMapper_SetRequestedRenderMode, METH_VARARGS,
   "SetRequestedRenderMode(self, __a:int) -> None\nC++: void SetRequestedRenderMode(int)\n\nForwarded to internal vtkSmartVolumeMappers used.\n@sa vtkSmartVolumeMapper::SetRequestedRenderMode.\n"},
  {"SetTransfer2DYAxisArray", PyvtkMultiBlockVolumeMapper_SetTransfer2DYAxisArray, METH_VARARGS,
   "SetTransfer2DYAxisArray(self, a:str) -> None\nC++: void SetTransfer2DYAxisArray(const char *a)\n\n\\sa vtkSmartVolumeMapper::SetTransfer2DYAxisArray\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMultiBlockVolumeMapper_Doc =
  "vtkMultiBlockVolumeMapper - Mapper to render volumes defined as\nvtkMultiBlockDataSet.\n\n"
  "Superclass: vtkVolumeMapper\n\n"
  "vtkMultiBlockVolumeMapper renders vtkMultiBlockDataSet instances\n"
  "containing vtkImageData blocks (all of the blocks are expected to be\n"
  "vtkImageData). Bounds containing the full set of blocks are computed\n"
  "so that vtkRenderer can adjust the clipping planes appropriately.\n\n"
  "This mapper creates an instance of vtkSmartVolumeMapper per block to\n"
  "which it defers the actual rendering.  At render time, blocks\n"
  "(mappers) are sorted back-to-front and each block is rendered\n"
  "independently.  It attempts to load all of the blocks at the same\n"
  "time but tries to catch allocation errors in which case it falls back\n"
  "to using a single mapper instance and reloading data for each block.\n\n"
  "Jittering is used to alleviate seam artifacts at the block edges due\n"
  "to the discontinuous resolution between blocks.  Jittering is enabled\n"
  "by default. Jittering is only supported in GPURenderMode.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMultiBlockVolumeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkMultiBlockVolumeMapper", // tp_name
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
  PyvtkMultiBlockVolumeMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMultiBlockVolumeMapper_StaticNew()
{
  return vtkMultiBlockVolumeMapper::New();
}

PyObject *PyvtkMultiBlockVolumeMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMultiBlockVolumeMapper_Type, PyvtkMultiBlockVolumeMapper_Methods,
    "vtkMultiBlockVolumeMapper",
 &PyvtkMultiBlockVolumeMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkVolumeMapper");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMultiBlockVolumeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMultiBlockVolumeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMultiBlockVolumeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

