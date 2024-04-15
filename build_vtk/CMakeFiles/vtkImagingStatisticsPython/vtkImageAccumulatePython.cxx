// python wrapper for vtkImageAccumulate
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageAccumulate.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageAccumulate(PyObject *dict); }
extern "C" { PyObject *PyvtkImageAccumulate_ClassNew(); }


static PyObject *
PyvtkImageAccumulate_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageAccumulate::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageAccumulate::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageAccumulate *tempr = vtkImageAccumulate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageAccumulate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageAccumulate::NewInstance());

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
PyvtkImageAccumulate_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageAccumulate::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageAccumulate::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetComponentSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

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
      op->SetComponentSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageAccumulate::SetComponentSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetComponentSpacing(temp0);
    }
    else
    {
      op->vtkImageAccumulate::SetComponentSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageAccumulate_SetComponentSpacing_s1(self, args);
    case 1:
      return PyvtkImageAccumulate_SetComponentSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageAccumulate_GetComponentSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComponentSpacing() :
      op->vtkImageAccumulate::GetComponentSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetComponentOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

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
      op->SetComponentOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageAccumulate::SetComponentOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetComponentOrigin(temp0);
    }
    else
    {
      op->vtkImageAccumulate::SetComponentOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageAccumulate_SetComponentOrigin_s1(self, args);
    case 1:
      return PyvtkImageAccumulate_SetComponentOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageAccumulate_GetComponentOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComponentOrigin() :
      op->vtkImageAccumulate::GetComponentOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetComponentExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetComponentExtent(temp0);
    }
    else
    {
      op->vtkImageAccumulate::SetComponentExtent(temp0);
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
PyvtkImageAccumulate_SetComponentExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponentExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetComponentExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageAccumulate::SetComponentExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageAccumulate_SetComponentExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageAccumulate_SetComponentExtent_s1(self, args);
    case 6:
      return PyvtkImageAccumulate_SetComponentExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetComponentExtent");
  return nullptr;
}


static PyObject *
PyvtkImageAccumulate_GetComponentExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetComponentExtent(temp0);
    }
    else
    {
      op->vtkImageAccumulate::GetComponentExtent(temp0);
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
PyvtkImageAccumulate_GetComponentExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComponentExtent() :
      op->vtkImageAccumulate::GetComponentExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageAccumulate_GetComponentExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageAccumulate_GetComponentExtent_s1(self, args);
    case 0:
      return PyvtkImageAccumulate_GetComponentExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetComponentExtent");
  return nullptr;
}


static PyObject *
PyvtkImageAccumulate_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->SetStencilData(temp0);
    }
    else
    {
      op->vtkImageAccumulate::SetStencilData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageAccumulate::GetStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetReverseStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseStencil(temp0);
    }
    else
    {
      op->vtkImageAccumulate::SetReverseStencil(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetReverseStencilMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseStencilMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseStencilMinValue() :
      op->vtkImageAccumulate::GetReverseStencilMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetReverseStencilMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseStencilMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseStencilMaxValue() :
      op->vtkImageAccumulate::GetReverseStencilMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_ReverseStencilOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseStencilOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseStencilOn();
    }
    else
    {
      op->vtkImageAccumulate::ReverseStencilOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_ReverseStencilOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseStencilOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseStencilOff();
    }
    else
    {
      op->vtkImageAccumulate::ReverseStencilOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetReverseStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseStencil() :
      op->vtkImageAccumulate::GetReverseStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMin() :
      op->vtkImageAccumulate::GetMin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMax() :
      op->vtkImageAccumulate::GetMax());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMean() :
      op->vtkImageAccumulate::GetMean());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetStandardDeviation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStandardDeviation() :
      op->vtkImageAccumulate::GetStandardDeviation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetVoxelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoxelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVoxelCount() :
      op->vtkImageAccumulate::GetVoxelCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_SetIgnoreZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreZero(temp0);
    }
    else
    {
      op->vtkImageAccumulate::SetIgnoreZero(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetIgnoreZeroMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreZeroMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreZeroMinValue() :
      op->vtkImageAccumulate::GetIgnoreZeroMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetIgnoreZeroMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreZeroMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreZeroMaxValue() :
      op->vtkImageAccumulate::GetIgnoreZeroMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_GetIgnoreZero(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreZero");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreZero() :
      op->vtkImageAccumulate::GetIgnoreZero());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_IgnoreZeroOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreZeroOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreZeroOn();
    }
    else
    {
      op->vtkImageAccumulate::IgnoreZeroOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAccumulate_IgnoreZeroOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreZeroOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAccumulate *op = static_cast<vtkImageAccumulate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreZeroOff();
    }
    else
    {
      op->vtkImageAccumulate::IgnoreZeroOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageAccumulate_Methods[] = {
  {"IsTypeOf", PyvtkImageAccumulate_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageAccumulate_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageAccumulate_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageAccumulate\nC++: static vtkImageAccumulate *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageAccumulate_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageAccumulate\nC++: vtkImageAccumulate *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageAccumulate_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageAccumulate_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetComponentSpacing", PyvtkImageAccumulate_SetComponentSpacing, METH_VARARGS,
   "SetComponentSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetComponentSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetComponentSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetComponentSpacing(const double _arg[3])\n\nSet/Get - The component spacing is the dimension of each bin.\nThis ends up being the spacing of the output \"image\". If the\nnumber of input scalar components are less than three, then some\nof these spacing values are ignored. For a 1D histogram with 10\nbins spanning the values 1000 to 2000, this spacing should be set\nto 100, 0, 0. Initial value is (1.0,1.0,1.0).\n"},
  {"GetComponentSpacing", PyvtkImageAccumulate_GetComponentSpacing, METH_VARARGS,
   "GetComponentSpacing(self) -> (float, float, float)\nC++: virtual double *GetComponentSpacing()\n\n"},
  {"SetComponentOrigin", PyvtkImageAccumulate_SetComponentOrigin, METH_VARARGS,
   "SetComponentOrigin(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetComponentOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetComponentOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetComponentOrigin(const double _arg[3])\n\nSet/Get - The component origin is the location of bin (0, 0, 0).\nNote that if the Component extent does not include the value\n(0,0,0), then this origin bin will not actually be in the output.\nThe origin of the output ends up being the same as the component\norigin. For a 1D histogram with 10 bins spanning the values 1000\nto 2000, this origin should be set to 1000, 0, 0. Initial value\nis (0.0,0.0,0.0).\n"},
  {"GetComponentOrigin", PyvtkImageAccumulate_GetComponentOrigin, METH_VARARGS,
   "GetComponentOrigin(self) -> (float, float, float)\nC++: virtual double *GetComponentOrigin()\n\n"},
  {"SetComponentExtent", PyvtkImageAccumulate_SetComponentExtent, METH_VARARGS,
   "SetComponentExtent(self, extent:[int, int, int, int, int, int])\n    -> None\nC++: void SetComponentExtent(int extent[6])\nSetComponentExtent(self, minX:int, maxX:int, minY:int, maxY:int,\n    minZ:int, maxZ:int) -> None\nC++: void SetComponentExtent(int minX, int maxX, int minY,\n    int maxY, int minZ, int maxZ)\n\nSet/Get - The component extent sets the number/extent of the\nbins. For a 1D histogram with 10 bins spanning the values 1000 to\n2000, this extent should be set to 0, 9, 0, 0, 0, 0. The extent\nspecifies inclusive min/max values. This implies that the top\nextent should be set to the number of bins - 1. Initial value is\n(0,255,0,0,0,0)\n"},
  {"GetComponentExtent", PyvtkImageAccumulate_GetComponentExtent, METH_VARARGS,
   "GetComponentExtent(self, extent:[int, int, int, int, int, int])\n    -> None\nC++: void GetComponentExtent(int extent[6])\nGetComponentExtent(self) -> (int, int, int, int, int, int)\nC++: int *GetComponentExtent()\n\n"},
  {"SetStencilData", PyvtkImageAccumulate_SetStencilData, METH_VARARGS,
   "SetStencilData(self, stencil:vtkImageStencilData) -> None\nC++: void SetStencilData(vtkImageStencilData *stencil)\n\nUse a stencil to specify which voxels to accumulate.\nBackcompatible methods. It set and get the stencil on input port\n1. Initial value is nullptr.\n"},
  {"GetStencil", PyvtkImageAccumulate_GetStencil, METH_VARARGS,
   "GetStencil(self) -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\n"},
  {"SetReverseStencil", PyvtkImageAccumulate_SetReverseStencil, METH_VARARGS,
   "SetReverseStencil(self, _arg:int) -> None\nC++: virtual void SetReverseStencil(vtkTypeBool _arg)\n\nReverse the stencil. Initial value is false.\n"},
  {"GetReverseStencilMinValue", PyvtkImageAccumulate_GetReverseStencilMinValue, METH_VARARGS,
   "GetReverseStencilMinValue(self) -> int\nC++: virtual vtkTypeBool GetReverseStencilMinValue()\n\n"},
  {"GetReverseStencilMaxValue", PyvtkImageAccumulate_GetReverseStencilMaxValue, METH_VARARGS,
   "GetReverseStencilMaxValue(self) -> int\nC++: virtual vtkTypeBool GetReverseStencilMaxValue()\n\n"},
  {"ReverseStencilOn", PyvtkImageAccumulate_ReverseStencilOn, METH_VARARGS,
   "ReverseStencilOn(self) -> None\nC++: virtual void ReverseStencilOn()\n\n"},
  {"ReverseStencilOff", PyvtkImageAccumulate_ReverseStencilOff, METH_VARARGS,
   "ReverseStencilOff(self) -> None\nC++: virtual void ReverseStencilOff()\n\n"},
  {"GetReverseStencil", PyvtkImageAccumulate_GetReverseStencil, METH_VARARGS,
   "GetReverseStencil(self) -> int\nC++: virtual vtkTypeBool GetReverseStencil()\n\n"},
  {"GetMin", PyvtkImageAccumulate_GetMin, METH_VARARGS,
   "GetMin(self) -> (float, float, float)\nC++: virtual double *GetMin()\n\nGet the statistics information for the data. The values only make\nsense after the execution of the filter. Initial values are 0.\n"},
  {"GetMax", PyvtkImageAccumulate_GetMax, METH_VARARGS,
   "GetMax(self) -> (float, float, float)\nC++: virtual double *GetMax()\n\n"},
  {"GetMean", PyvtkImageAccumulate_GetMean, METH_VARARGS,
   "GetMean(self) -> (float, float, float)\nC++: virtual double *GetMean()\n\n"},
  {"GetStandardDeviation", PyvtkImageAccumulate_GetStandardDeviation, METH_VARARGS,
   "GetStandardDeviation(self) -> (float, float, float)\nC++: virtual double *GetStandardDeviation()\n\n"},
  {"GetVoxelCount", PyvtkImageAccumulate_GetVoxelCount, METH_VARARGS,
   "GetVoxelCount(self) -> int\nC++: virtual vtkIdType GetVoxelCount()\n\n"},
  {"SetIgnoreZero", PyvtkImageAccumulate_SetIgnoreZero, METH_VARARGS,
   "SetIgnoreZero(self, _arg:int) -> None\nC++: virtual void SetIgnoreZero(vtkTypeBool _arg)\n\nShould the data with value 0 be ignored? Initial value is false.\n"},
  {"GetIgnoreZeroMinValue", PyvtkImageAccumulate_GetIgnoreZeroMinValue, METH_VARARGS,
   "GetIgnoreZeroMinValue(self) -> int\nC++: virtual vtkTypeBool GetIgnoreZeroMinValue()\n\n"},
  {"GetIgnoreZeroMaxValue", PyvtkImageAccumulate_GetIgnoreZeroMaxValue, METH_VARARGS,
   "GetIgnoreZeroMaxValue(self) -> int\nC++: virtual vtkTypeBool GetIgnoreZeroMaxValue()\n\n"},
  {"GetIgnoreZero", PyvtkImageAccumulate_GetIgnoreZero, METH_VARARGS,
   "GetIgnoreZero(self) -> int\nC++: virtual vtkTypeBool GetIgnoreZero()\n\n"},
  {"IgnoreZeroOn", PyvtkImageAccumulate_IgnoreZeroOn, METH_VARARGS,
   "IgnoreZeroOn(self) -> None\nC++: virtual void IgnoreZeroOn()\n\n"},
  {"IgnoreZeroOff", PyvtkImageAccumulate_IgnoreZeroOff, METH_VARARGS,
   "IgnoreZeroOff(self) -> None\nC++: virtual void IgnoreZeroOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageAccumulate_Doc =
  "vtkImageAccumulate - Generalized histograms up to 3 dimensions.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageAccumulate - This filter divides component space into\n"
  "discrete bins.  It then counts the number of pixels associated with\n"
  "each bin. The dimensionality of the output depends on how many\n"
  "components the input pixels have. An input images with N components\n"
  "per pixels will result in an N-dimensional histogram, where N can be\n"
  "1, 2, or 3. The input can be any type, but the output is always int.\n"
  "Some statistics are computed on the pixel values at the same time.\n"
  "The SetStencil and ReverseStencil functions allow the statistics to\n"
  "be computed on an arbitrary portion of the input data. See the\n"
  "documentation for vtkImageStencilData for more information.\n\n"
  "This filter also supports ignoring pixels with value equal to 0.\n"
  "Using this option with vtkImageMask may result in results being\n"
  "slightly off since 0 could be a valid value from your input.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageAccumulate_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingStatistics.vtkImageAccumulate", // tp_name
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
  PyvtkImageAccumulate_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageAccumulate_StaticNew()
{
  return vtkImageAccumulate::New();
}

PyObject *PyvtkImageAccumulate_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageAccumulate_Type, PyvtkImageAccumulate_Methods,
    "vtkImageAccumulate",
 &PyvtkImageAccumulate_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageAccumulate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageAccumulate_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageAccumulate", o) != 0)
  {
    Py_DECREF(o);
  }

}

